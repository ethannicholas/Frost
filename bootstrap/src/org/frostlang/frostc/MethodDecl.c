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
#include "frost/core/Frost.h"
#include "frost/collections/CollectionView.h"
#include "frost/collections/Iterable.h"
#include "frost/collections/Iterator.h"
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

typedef frost$core$Int (*$fn22)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn53)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn57)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn62)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn90)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn120)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn169)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn182)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn194)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn204)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int (*$fn212)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn218)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn231)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn261)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn289)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn308)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$collections$Iterator* (*$fn349)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn353)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn358)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn415)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int (*$fn449)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn456)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn460)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn465)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn483)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$collections$Iterator* (*$fn516)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn520)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn525)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn533)(frost$core$Object*);
typedef frost$core$Bit (*$fn548)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$String* (*$fn555)(frost$core$Object*);
typedef frost$core$String* (*$fn664)(frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c", 31, -660996163121683783, NULL };
static frost$core$String $s18 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c\x2e\x66\x72\x6f\x73\x74", 16, -8677435737112033532, NULL };
static frost$core$String $s19 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c\x2e\x47\x65\x6e\x65\x72\x69\x63\x50\x61\x72\x61\x6d\x65\x74\x65\x72\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77", 144, 779680818202923559, NULL };
static frost$core$String $s31 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c\x2e\x66\x72\x6f\x73\x74", 16, -8677435737112033532, NULL };
static frost$core$String $s32 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c\x2e\x69\x6e\x69\x74\x28\x6f\x77\x6e\x65\x72\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x2c\x20\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2c\x20\x64\x6f\x63\x63\x6f\x6d\x6d\x65\x6e\x74\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x2c\x20\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x73\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x73\x2c\x20\x6d\x65\x74\x68\x6f\x64\x4b\x69\x6e\x64\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c\x2e\x4b\x69\x6e\x64\x2c\x20\x6e\x61\x6d\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2c\x20\x67\x65\x6e\x65\x72\x69\x63\x50\x61\x72\x61\x6d\x65\x74\x65\x72\x73\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c\x2e\x47\x65\x6e\x65\x72\x69\x63\x50\x61\x72\x61\x6d\x65\x74\x65\x72\x3e\x3f\x2c\x20\x70\x61\x72\x61\x6d\x65\x74\x65\x72\x73\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c\x2e\x50\x61\x72\x61\x6d\x65\x74\x65\x72\x3e\x2c\x20\x72\x65\x74\x75\x72\x6e\x54\x79\x70\x65\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2c\x20\x62\x6f\x64\x79\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3e\x3f\x29", 569, -1725580904474273109, NULL };
static frost$core$String $s187 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c\x2e\x66\x72\x6f\x73\x74", 16, -8677435737112033532, NULL };
static frost$core$String $s269 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s270 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s297 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s298 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s345 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c\x2e\x66\x72\x6f\x73\x74", 16, -8677435737112033532, NULL };
static frost$core$String $s346 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x73\x2e\x45\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x62\x6c\x65\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x73\x2e\x45\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x3e", 178, 8167062554091698636, NULL };
static frost$core$String $s507 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28", 1, -5808617346293461225, NULL };
static frost$core$String $s509 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s511 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s535 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s537 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s540 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s545 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x76\x6f\x69\x64", 4, 3563412735833858527, NULL };
static frost$core$String $s558 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a", 1, -5808597555084153427, NULL };
static frost$core$String $s560 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s580 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s586 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20", 7, -7952910774154584656, NULL };
static frost$core$String $s588 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e", 1, -5808619545316717647, NULL };
static frost$core$String $s592 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s605 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s611 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20", 9, 7226600790104464427, NULL };
static frost$core$String $s613 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e", 1, -5808619545316717647, NULL };
static frost$core$String $s617 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s630 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s636 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e", 1, -5808619545316717647, NULL };
static frost$core$String $s640 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s642 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c\x2e\x66\x72\x6f\x73\x74", 16, -8677435737112033532, NULL };
static frost$core$String $s651 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s655 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20", 1, -5808626142386486913, NULL };
static frost$core$String $s661 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c\x2e\x66\x72\x6f\x73\x74", 16, -8677435737112033532, NULL };
static frost$core$String $s662 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74", 117, 1369329775913282096, NULL };
static frost$core$String $s668 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };

void org$frostlang$frostc$MethodDecl$init$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$Annotations$org$frostlang$frostc$MethodDecl$Kind$frost$core$String$frost$collections$Array$LTorg$frostlang$frostc$MethodDecl$GenericParameter$GT$Q$frost$collections$Array$LTorg$frostlang$frostc$MethodDecl$Parameter$GT$org$frostlang$frostc$Type$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(org$frostlang$frostc$MethodDecl* param0, org$frostlang$frostc$ClassDecl* param1, org$frostlang$frostc$Position param2, frost$core$String* param3, org$frostlang$frostc$Annotations* param4, org$frostlang$frostc$MethodDecl$Kind param5, frost$core$String* param6, frost$collections$Array* param7, frost$collections$Array* param8, org$frostlang$frostc$Type* param9, org$frostlang$frostc$FixedArray* param10) {

org$frostlang$frostc$Compiler$Resolution local0;
org$frostlang$frostc$Compiler$Resolution local1;
org$frostlang$frostc$Symbol$Kind local2;
org$frostlang$frostc$Symbol$Kind local3;
org$frostlang$frostc$MethodDecl$Parameter* local4 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:66
frost$core$Int $tmp2 = (frost$core$Int) {0u};
// begin inline call to org.frostlang.frostc.Compiler.Resolution.init(rv:frost.core.Int):org.frostlang.frostc.Compiler.Resolution from MethodDecl.frost:66:40
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:44
frost$core$Int* $tmp3 = &(&local1)->$rawValue;
*$tmp3 = $tmp2;
org$frostlang$frostc$Compiler$Resolution $tmp4 = *(&local1);
*(&local0) = $tmp4;
org$frostlang$frostc$Compiler$Resolution $tmp5 = *(&local0);
org$frostlang$frostc$Compiler$Resolution* $tmp6 = &param0->resolved;
*$tmp6 = $tmp5;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:68
frost$core$Bit $tmp7 = (frost$core$Bit) {false};
frost$core$Bit* $tmp8 = &param0->overrideKnown;
*$tmp8 = $tmp7;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:71
FROST_ASSERT(32 == sizeof(frost$core$Weak));
frost$core$Weak* $tmp9 = (frost$core$Weak*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$Weak$class);
frost$core$Weak$init$frost$core$Weak$T$Q($tmp9, ((frost$core$Object*) ((org$frostlang$frostc$MethodDecl*) NULL)));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp9));
frost$core$Weak** $tmp10 = &param0->overridden;
frost$core$Weak* $tmp11 = *$tmp10;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp11));
frost$core$Weak** $tmp12 = &param0->overridden;
*$tmp12 = $tmp9;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp9));
frost$core$Bit $tmp13 = (frost$core$Bit) {param7 == NULL};
bool $tmp14 = $tmp13.value;
if ($tmp14) goto block2; else goto block4;
block4:;
frost$core$Bit $tmp15 = (frost$core$Bit) {param7 != NULL};
bool $tmp16 = $tmp15.value;
if ($tmp16) goto block5; else goto block6;
block6:;
frost$core$Int $tmp17 = (frost$core$Int) {83u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s18, $tmp17, &$s19);
abort(); // unreachable
block5:;
ITable* $tmp20 = ((frost$collections$CollectionView*) param7)->$class->itable;
while ($tmp20->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp20 = $tmp20->next;
}
$fn22 $tmp21 = $tmp20->methods[0];
frost$core$Int $tmp23 = $tmp21(((frost$collections$CollectionView*) param7));
frost$core$Int $tmp24 = (frost$core$Int) {0u};
int64_t $tmp25 = $tmp23.value;
int64_t $tmp26 = $tmp24.value;
bool $tmp27 = $tmp25 > $tmp26;
frost$core$Bit $tmp28 = (frost$core$Bit) {$tmp27};
bool $tmp29 = $tmp28.value;
if ($tmp29) goto block2; else goto block3;
block3:;
frost$core$Int $tmp30 = (frost$core$Int) {84u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s31, $tmp30, &$s32);
abort(); // unreachable
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:88
frost$core$Int $tmp33 = (frost$core$Int) {5u};
// begin inline call to org.frostlang.frostc.Symbol.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Symbol.Kind from MethodDecl.frost:88:31
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Symbol.frost:4
frost$core$Int* $tmp34 = &(&local3)->$rawValue;
*$tmp34 = $tmp33;
org$frostlang$frostc$Symbol$Kind $tmp35 = *(&local3);
*(&local2) = $tmp35;
org$frostlang$frostc$Symbol$Kind $tmp36 = *(&local2);
org$frostlang$frostc$Symbol$init$org$frostlang$frostc$Symbol$Kind$org$frostlang$frostc$Position$frost$core$String(((org$frostlang$frostc$Symbol*) param0), $tmp36, param2, param6);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:89
FROST_ASSERT(32 == sizeof(frost$core$Weak));
frost$core$Weak* $tmp37 = (frost$core$Weak*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$Weak$class);
frost$core$Weak$init$frost$core$Weak$T$Q($tmp37, ((frost$core$Object*) param1));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp37));
frost$core$Weak** $tmp38 = &param0->owner;
frost$core$Weak* $tmp39 = *$tmp38;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp39));
frost$core$Weak** $tmp40 = &param0->owner;
*$tmp40 = $tmp37;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp37));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:90
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
frost$core$String** $tmp41 = &param0->doccomment;
frost$core$String* $tmp42 = *$tmp41;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp42));
frost$core$String** $tmp43 = &param0->doccomment;
*$tmp43 = param3;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:91
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$Annotations** $tmp44 = &param0->annotations;
org$frostlang$frostc$Annotations* $tmp45 = *$tmp44;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp45));
org$frostlang$frostc$Annotations** $tmp46 = &param0->annotations;
*$tmp46 = param4;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:92
org$frostlang$frostc$MethodDecl$Kind* $tmp47 = &param0->methodKind;
*$tmp47 = param5;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:93
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param7));
frost$collections$Array** $tmp48 = &param0->genericParameters;
frost$collections$Array* $tmp49 = *$tmp48;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp49));
frost$collections$Array** $tmp50 = &param0->genericParameters;
*$tmp50 = param7;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:94
ITable* $tmp51 = ((frost$collections$Iterable*) param8)->$class->itable;
while ($tmp51->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp51 = $tmp51->next;
}
$fn53 $tmp52 = $tmp51->methods[0];
frost$collections$Iterator* $tmp54 = $tmp52(((frost$collections$Iterable*) param8));
goto block8;
block8:;
ITable* $tmp55 = $tmp54->$class->itable;
while ($tmp55->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp55 = $tmp55->next;
}
$fn57 $tmp56 = $tmp55->methods[0];
frost$core$Bit $tmp58 = $tmp56($tmp54);
bool $tmp59 = $tmp58.value;
if ($tmp59) goto block10; else goto block9;
block9:;
*(&local4) = ((org$frostlang$frostc$MethodDecl$Parameter*) NULL);
ITable* $tmp60 = $tmp54->$class->itable;
while ($tmp60->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp60 = $tmp60->next;
}
$fn62 $tmp61 = $tmp60->methods[1];
frost$core$Object* $tmp63 = $tmp61($tmp54);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$MethodDecl$Parameter*) $tmp63)));
org$frostlang$frostc$MethodDecl$Parameter* $tmp64 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp64));
*(&local4) = ((org$frostlang$frostc$MethodDecl$Parameter*) $tmp63);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:95
org$frostlang$frostc$MethodDecl$Parameter* $tmp65 = *(&local4);
FROST_ASSERT(32 == sizeof(frost$core$Weak));
frost$core$Weak* $tmp66 = (frost$core$Weak*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$Weak$class);
frost$core$Weak$init$frost$core$Weak$T$Q($tmp66, ((frost$core$Object*) param0));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp66));
frost$core$Weak** $tmp67 = &$tmp65->owner;
frost$core$Weak* $tmp68 = *$tmp67;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp68));
frost$core$Weak** $tmp69 = &$tmp65->owner;
*$tmp69 = $tmp66;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp66));
frost$core$Frost$unref$frost$core$Object$Q($tmp63);
org$frostlang$frostc$MethodDecl$Parameter* $tmp70 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp70));
*(&local4) = ((org$frostlang$frostc$MethodDecl$Parameter*) NULL);
goto block8;
block10:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp54));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:97
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param8));
frost$collections$Array** $tmp71 = &param0->parameters;
frost$collections$Array* $tmp72 = *$tmp71;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp72));
frost$collections$Array** $tmp73 = &param0->parameters;
*$tmp73 = param8;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:98
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param9));
org$frostlang$frostc$Type** $tmp74 = &param0->returnType;
org$frostlang$frostc$Type* $tmp75 = *$tmp74;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp75));
org$frostlang$frostc$Type** $tmp76 = &param0->returnType;
*$tmp76 = param9;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:99
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param10));
org$frostlang$frostc$FixedArray** $tmp77 = &param0->body;
org$frostlang$frostc$FixedArray* $tmp78 = *$tmp77;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp78));
org$frostlang$frostc$FixedArray** $tmp79 = &param0->body;
*$tmp79 = param10;
return;

}
frost$core$Bit org$frostlang$frostc$MethodDecl$get_heritable$R$frost$core$Bit(org$frostlang$frostc$MethodDecl* param0) {

org$frostlang$frostc$MethodDecl$Kind local0;
org$frostlang$frostc$MethodDecl$Kind local1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:104
org$frostlang$frostc$MethodDecl$Kind* $tmp80 = &param0->methodKind;
org$frostlang$frostc$MethodDecl$Kind $tmp81 = *$tmp80;
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp82;
$tmp82 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp82->value = $tmp81;
frost$core$Int $tmp83 = (frost$core$Int) {2u};
// begin inline call to org.frostlang.frostc.MethodDecl.Kind.init(rv:frost.core.Int):org.frostlang.frostc.MethodDecl.Kind from MethodDecl.frost:104:34
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:7
frost$core$Int* $tmp84 = &(&local1)->$rawValue;
*$tmp84 = $tmp83;
org$frostlang$frostc$MethodDecl$Kind $tmp85 = *(&local1);
*(&local0) = $tmp85;
org$frostlang$frostc$MethodDecl$Kind $tmp86 = *(&local0);
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp87;
$tmp87 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp87->value = $tmp86;
ITable* $tmp88 = ((frost$core$Equatable*) $tmp82)->$class->itable;
while ($tmp88->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp88 = $tmp88->next;
}
$fn90 $tmp89 = $tmp88->methods[1];
frost$core$Bit $tmp91 = $tmp89(((frost$core$Equatable*) $tmp82), ((frost$core$Equatable*) $tmp87));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp87)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp82)));
return $tmp91;

}
frost$core$Bit org$frostlang$frostc$MethodDecl$get_isVirtual$R$frost$core$Bit(org$frostlang$frostc$MethodDecl* param0) {

frost$core$Bit local0;
frost$core$Bit local1;
org$frostlang$frostc$MethodDecl$Kind local2;
org$frostlang$frostc$MethodDecl$Kind local3;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:108
org$frostlang$frostc$Annotations** $tmp92 = &param0->annotations;
org$frostlang$frostc$Annotations* $tmp93 = *$tmp92;
// begin inline call to function org.frostlang.frostc.Annotations.get_isClass():frost.core.Bit from MethodDecl.frost:108:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:122
frost$core$Int* $tmp94 = &$tmp93->flags;
frost$core$Int $tmp95 = *$tmp94;
frost$core$Int $tmp96 = (frost$core$Int) {16u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:122:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:293
int64_t $tmp97 = $tmp95.value;
int64_t $tmp98 = $tmp96.value;
int64_t $tmp99 = $tmp97 & $tmp98;
frost$core$Int $tmp100 = (frost$core$Int) {$tmp99};
frost$core$Int $tmp101 = (frost$core$Int) {0u};
int64_t $tmp102 = $tmp100.value;
int64_t $tmp103 = $tmp101.value;
bool $tmp104 = $tmp102 != $tmp103;
frost$core$Bit $tmp105 = (frost$core$Bit) {$tmp104};
// begin inline call to function frost.core.Bit.!():frost.core.Bit from MethodDecl.frost:108:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp106 = $tmp105.value;
bool $tmp107 = !$tmp106;
frost$core$Bit $tmp108 = (frost$core$Bit) {$tmp107};
bool $tmp109 = $tmp108.value;
if ($tmp109) goto block4; else goto block5;
block4:;
org$frostlang$frostc$MethodDecl$Kind* $tmp110 = &param0->methodKind;
org$frostlang$frostc$MethodDecl$Kind $tmp111 = *$tmp110;
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp112;
$tmp112 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp112->value = $tmp111;
frost$core$Int $tmp113 = (frost$core$Int) {2u};
// begin inline call to org.frostlang.frostc.MethodDecl.Kind.init(rv:frost.core.Int):org.frostlang.frostc.MethodDecl.Kind from MethodDecl.frost:108:57
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:7
frost$core$Int* $tmp114 = &(&local3)->$rawValue;
*$tmp114 = $tmp113;
org$frostlang$frostc$MethodDecl$Kind $tmp115 = *(&local3);
*(&local2) = $tmp115;
org$frostlang$frostc$MethodDecl$Kind $tmp116 = *(&local2);
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp117;
$tmp117 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp117->value = $tmp116;
ITable* $tmp118 = ((frost$core$Equatable*) $tmp112)->$class->itable;
while ($tmp118->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp118 = $tmp118->next;
}
$fn120 $tmp119 = $tmp118->methods[1];
frost$core$Bit $tmp121 = $tmp119(((frost$core$Equatable*) $tmp112), ((frost$core$Equatable*) $tmp117));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp117)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp112)));
*(&local1) = $tmp121;
goto block6;
block5:;
*(&local1) = $tmp108;
goto block6;
block6:;
frost$core$Bit $tmp122 = *(&local1);
bool $tmp123 = $tmp122.value;
if ($tmp123) goto block8; else goto block9;
block8:;
org$frostlang$frostc$Annotations** $tmp124 = &param0->annotations;
org$frostlang$frostc$Annotations* $tmp125 = *$tmp124;
// begin inline call to function org.frostlang.frostc.Annotations.get_isFinal():frost.core.Bit from MethodDecl.frost:108:77
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:138
frost$core$Int* $tmp126 = &$tmp125->flags;
frost$core$Int $tmp127 = *$tmp126;
frost$core$Int $tmp128 = (frost$core$Int) {256u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:138:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:293
int64_t $tmp129 = $tmp127.value;
int64_t $tmp130 = $tmp128.value;
int64_t $tmp131 = $tmp129 & $tmp130;
frost$core$Int $tmp132 = (frost$core$Int) {$tmp131};
frost$core$Int $tmp133 = (frost$core$Int) {0u};
int64_t $tmp134 = $tmp132.value;
int64_t $tmp135 = $tmp133.value;
bool $tmp136 = $tmp134 != $tmp135;
frost$core$Bit $tmp137 = (frost$core$Bit) {$tmp136};
// begin inline call to function frost.core.Bit.!():frost.core.Bit from MethodDecl.frost:108:65
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp138 = $tmp137.value;
bool $tmp139 = !$tmp138;
frost$core$Bit $tmp140 = (frost$core$Bit) {$tmp139};
*(&local0) = $tmp140;
goto block10;
block9:;
*(&local0) = $tmp122;
goto block10;
block10:;
frost$core$Bit $tmp141 = *(&local0);
return $tmp141;

}
frost$core$Bit org$frostlang$frostc$MethodDecl$get_isInstance$R$frost$core$Bit(org$frostlang$frostc$MethodDecl* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:112
org$frostlang$frostc$Annotations** $tmp142 = &param0->annotations;
org$frostlang$frostc$Annotations* $tmp143 = *$tmp142;
// begin inline call to function org.frostlang.frostc.Annotations.get_isClass():frost.core.Bit from MethodDecl.frost:112:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:122
frost$core$Int* $tmp144 = &$tmp143->flags;
frost$core$Int $tmp145 = *$tmp144;
frost$core$Int $tmp146 = (frost$core$Int) {16u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:122:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:293
int64_t $tmp147 = $tmp145.value;
int64_t $tmp148 = $tmp146.value;
int64_t $tmp149 = $tmp147 & $tmp148;
frost$core$Int $tmp150 = (frost$core$Int) {$tmp149};
frost$core$Int $tmp151 = (frost$core$Int) {0u};
int64_t $tmp152 = $tmp150.value;
int64_t $tmp153 = $tmp151.value;
bool $tmp154 = $tmp152 != $tmp153;
frost$core$Bit $tmp155 = (frost$core$Bit) {$tmp154};
// begin inline call to function frost.core.Bit.!():frost.core.Bit from MethodDecl.frost:112:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp156 = $tmp155.value;
bool $tmp157 = !$tmp156;
frost$core$Bit $tmp158 = (frost$core$Bit) {$tmp157};
return $tmp158;

}
frost$core$Bit org$frostlang$frostc$MethodDecl$matches$org$frostlang$frostc$MethodDecl$R$frost$core$Bit(org$frostlang$frostc$MethodDecl* param0, org$frostlang$frostc$MethodDecl* param1) {

frost$core$Bit local0;
org$frostlang$frostc$Compiler$Resolution local1;
org$frostlang$frostc$Compiler$Resolution local2;
org$frostlang$frostc$Compiler$Resolution local3;
org$frostlang$frostc$Compiler$Resolution local4;
frost$core$Int local5;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:116
org$frostlang$frostc$Compiler$Resolution* $tmp159 = &param0->resolved;
org$frostlang$frostc$Compiler$Resolution $tmp160 = *$tmp159;
org$frostlang$frostc$Compiler$Resolution$wrapper* $tmp161;
$tmp161 = (org$frostlang$frostc$Compiler$Resolution$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Compiler$Resolution$wrapperclass);
$tmp161->value = $tmp160;
frost$core$Int $tmp162 = (frost$core$Int) {0u};
// begin inline call to org.frostlang.frostc.Compiler.Resolution.init(rv:frost.core.Int):org.frostlang.frostc.Compiler.Resolution from MethodDecl.frost:116:47
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:44
frost$core$Int* $tmp163 = &(&local2)->$rawValue;
*$tmp163 = $tmp162;
org$frostlang$frostc$Compiler$Resolution $tmp164 = *(&local2);
*(&local1) = $tmp164;
org$frostlang$frostc$Compiler$Resolution $tmp165 = *(&local1);
org$frostlang$frostc$Compiler$Resolution$wrapper* $tmp166;
$tmp166 = (org$frostlang$frostc$Compiler$Resolution$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Compiler$Resolution$wrapperclass);
$tmp166->value = $tmp165;
ITable* $tmp167 = ((frost$core$Equatable*) $tmp161)->$class->itable;
while ($tmp167->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp167 = $tmp167->next;
}
$fn169 $tmp168 = $tmp167->methods[1];
frost$core$Bit $tmp170 = $tmp168(((frost$core$Equatable*) $tmp161), ((frost$core$Equatable*) $tmp166));
bool $tmp171 = $tmp170.value;
if ($tmp171) goto block2; else goto block3;
block2:;
org$frostlang$frostc$Compiler$Resolution* $tmp172 = &param1->resolved;
org$frostlang$frostc$Compiler$Resolution $tmp173 = *$tmp172;
org$frostlang$frostc$Compiler$Resolution$wrapper* $tmp174;
$tmp174 = (org$frostlang$frostc$Compiler$Resolution$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Compiler$Resolution$wrapperclass);
$tmp174->value = $tmp173;
frost$core$Int $tmp175 = (frost$core$Int) {0u};
// begin inline call to org.frostlang.frostc.Compiler.Resolution.init(rv:frost.core.Int):org.frostlang.frostc.Compiler.Resolution from MethodDecl.frost:117:54
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:44
frost$core$Int* $tmp176 = &(&local4)->$rawValue;
*$tmp176 = $tmp175;
org$frostlang$frostc$Compiler$Resolution $tmp177 = *(&local4);
*(&local3) = $tmp177;
org$frostlang$frostc$Compiler$Resolution $tmp178 = *(&local3);
org$frostlang$frostc$Compiler$Resolution$wrapper* $tmp179;
$tmp179 = (org$frostlang$frostc$Compiler$Resolution$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Compiler$Resolution$wrapperclass);
$tmp179->value = $tmp178;
ITable* $tmp180 = ((frost$core$Equatable*) $tmp174)->$class->itable;
while ($tmp180->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp180 = $tmp180->next;
}
$fn182 $tmp181 = $tmp180->methods[1];
frost$core$Bit $tmp183 = $tmp181(((frost$core$Equatable*) $tmp174), ((frost$core$Equatable*) $tmp179));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp179)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp174)));
*(&local0) = $tmp183;
goto block4;
block3:;
*(&local0) = $tmp170;
goto block4;
block4:;
frost$core$Bit $tmp184 = *(&local0);
bool $tmp185 = $tmp184.value;
if ($tmp185) goto block6; else goto block7;
block7:;
frost$core$Int $tmp186 = (frost$core$Int) {116u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s187, $tmp186);
abort(); // unreachable
block6:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp166)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp161)));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:118
frost$core$String** $tmp188 = &((org$frostlang$frostc$Symbol*) param0)->name;
frost$core$String* $tmp189 = *$tmp188;
frost$core$String** $tmp190 = &((org$frostlang$frostc$Symbol*) param1)->name;
frost$core$String* $tmp191 = *$tmp190;
ITable* $tmp192 = ((frost$core$Equatable*) $tmp189)->$class->itable;
while ($tmp192->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp192 = $tmp192->next;
}
$fn194 $tmp193 = $tmp192->methods[1];
frost$core$Bit $tmp195 = $tmp193(((frost$core$Equatable*) $tmp189), ((frost$core$Equatable*) $tmp191));
bool $tmp196 = $tmp195.value;
if ($tmp196) goto block8; else goto block9;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:119
frost$core$Bit $tmp197 = (frost$core$Bit) {false};
return $tmp197;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:121
org$frostlang$frostc$Type** $tmp198 = &param0->returnType;
org$frostlang$frostc$Type* $tmp199 = *$tmp198;
org$frostlang$frostc$Type** $tmp200 = &param1->returnType;
org$frostlang$frostc$Type* $tmp201 = *$tmp200;
ITable* $tmp202 = ((frost$core$Equatable*) $tmp199)->$class->itable;
while ($tmp202->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp202 = $tmp202->next;
}
$fn204 $tmp203 = $tmp202->methods[1];
frost$core$Bit $tmp205 = $tmp203(((frost$core$Equatable*) $tmp199), ((frost$core$Equatable*) $tmp201));
bool $tmp206 = $tmp205.value;
if ($tmp206) goto block10; else goto block11;
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:122
frost$core$Bit $tmp207 = (frost$core$Bit) {false};
return $tmp207;
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:124
frost$collections$Array** $tmp208 = &param0->parameters;
frost$collections$Array* $tmp209 = *$tmp208;
ITable* $tmp210 = ((frost$collections$CollectionView*) $tmp209)->$class->itable;
while ($tmp210->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp210 = $tmp210->next;
}
$fn212 $tmp211 = $tmp210->methods[0];
frost$core$Int $tmp213 = $tmp211(((frost$collections$CollectionView*) $tmp209));
frost$collections$Array** $tmp214 = &param1->parameters;
frost$collections$Array* $tmp215 = *$tmp214;
ITable* $tmp216 = ((frost$collections$CollectionView*) $tmp215)->$class->itable;
while ($tmp216->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp216 = $tmp216->next;
}
$fn218 $tmp217 = $tmp216->methods[0];
frost$core$Int $tmp219 = $tmp217(((frost$collections$CollectionView*) $tmp215));
int64_t $tmp220 = $tmp213.value;
int64_t $tmp221 = $tmp219.value;
bool $tmp222 = $tmp220 != $tmp221;
frost$core$Bit $tmp223 = (frost$core$Bit) {$tmp222};
bool $tmp224 = $tmp223.value;
if ($tmp224) goto block12; else goto block13;
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:125
frost$core$Bit $tmp225 = (frost$core$Bit) {false};
return $tmp225;
block13:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:127
frost$core$Int $tmp226 = (frost$core$Int) {0u};
frost$collections$Array** $tmp227 = &param0->parameters;
frost$collections$Array* $tmp228 = *$tmp227;
ITable* $tmp229 = ((frost$collections$CollectionView*) $tmp228)->$class->itable;
while ($tmp229->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp229 = $tmp229->next;
}
$fn231 $tmp230 = $tmp229->methods[0];
frost$core$Int $tmp232 = $tmp230(((frost$collections$CollectionView*) $tmp228));
frost$core$Bit $tmp233 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp234 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp226, $tmp232, $tmp233);
frost$core$Int $tmp235 = $tmp234.min;
*(&local5) = $tmp235;
frost$core$Int $tmp236 = $tmp234.max;
frost$core$Bit $tmp237 = $tmp234.inclusive;
bool $tmp238 = $tmp237.value;
frost$core$Int $tmp239 = (frost$core$Int) {1u};
if ($tmp238) goto block17; else goto block18;
block17:;
int64_t $tmp240 = $tmp235.value;
int64_t $tmp241 = $tmp236.value;
bool $tmp242 = $tmp240 <= $tmp241;
frost$core$Bit $tmp243 = (frost$core$Bit) {$tmp242};
bool $tmp244 = $tmp243.value;
if ($tmp244) goto block14; else goto block15;
block18:;
int64_t $tmp245 = $tmp235.value;
int64_t $tmp246 = $tmp236.value;
bool $tmp247 = $tmp245 < $tmp246;
frost$core$Bit $tmp248 = (frost$core$Bit) {$tmp247};
bool $tmp249 = $tmp248.value;
if ($tmp249) goto block14; else goto block15;
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:128
frost$collections$Array** $tmp250 = &param0->parameters;
frost$collections$Array* $tmp251 = *$tmp250;
frost$core$Int $tmp252 = *(&local5);
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from MethodDecl.frost:128:26
frost$core$Int $tmp253 = (frost$core$Int) {0u};
int64_t $tmp254 = $tmp252.value;
int64_t $tmp255 = $tmp253.value;
bool $tmp256 = $tmp254 >= $tmp255;
frost$core$Bit $tmp257 = (frost$core$Bit) {$tmp256};
bool $tmp258 = $tmp257.value;
if ($tmp258) goto block24; else goto block23;
block24:;
ITable* $tmp259 = ((frost$collections$CollectionView*) $tmp251)->$class->itable;
while ($tmp259->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp259 = $tmp259->next;
}
$fn261 $tmp260 = $tmp259->methods[0];
frost$core$Int $tmp262 = $tmp260(((frost$collections$CollectionView*) $tmp251));
int64_t $tmp263 = $tmp252.value;
int64_t $tmp264 = $tmp262.value;
bool $tmp265 = $tmp263 < $tmp264;
frost$core$Bit $tmp266 = (frost$core$Bit) {$tmp265};
bool $tmp267 = $tmp266.value;
if ($tmp267) goto block22; else goto block23;
block23:;
frost$core$Int $tmp268 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s269, $tmp268, &$s270);
abort(); // unreachable
block22:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp271 = &$tmp251->data;
frost$core$Object** $tmp272 = *$tmp271;
frost$core$Int64 $tmp273 = frost$core$Int64$init$frost$core$Int($tmp252);
int64_t $tmp274 = $tmp273.value;
frost$core$Object* $tmp275 = $tmp272[$tmp274];
frost$core$Frost$ref$frost$core$Object$Q($tmp275);
org$frostlang$frostc$Type** $tmp276 = &((org$frostlang$frostc$MethodDecl$Parameter*) $tmp275)->type;
org$frostlang$frostc$Type* $tmp277 = *$tmp276;
frost$collections$Array** $tmp278 = &param1->parameters;
frost$collections$Array* $tmp279 = *$tmp278;
frost$core$Int $tmp280 = *(&local5);
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from MethodDecl.frost:128:54
frost$core$Int $tmp281 = (frost$core$Int) {0u};
int64_t $tmp282 = $tmp280.value;
int64_t $tmp283 = $tmp281.value;
bool $tmp284 = $tmp282 >= $tmp283;
frost$core$Bit $tmp285 = (frost$core$Bit) {$tmp284};
bool $tmp286 = $tmp285.value;
if ($tmp286) goto block28; else goto block27;
block28:;
ITable* $tmp287 = ((frost$collections$CollectionView*) $tmp279)->$class->itable;
while ($tmp287->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp287 = $tmp287->next;
}
$fn289 $tmp288 = $tmp287->methods[0];
frost$core$Int $tmp290 = $tmp288(((frost$collections$CollectionView*) $tmp279));
int64_t $tmp291 = $tmp280.value;
int64_t $tmp292 = $tmp290.value;
bool $tmp293 = $tmp291 < $tmp292;
frost$core$Bit $tmp294 = (frost$core$Bit) {$tmp293};
bool $tmp295 = $tmp294.value;
if ($tmp295) goto block26; else goto block27;
block27:;
frost$core$Int $tmp296 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s297, $tmp296, &$s298);
abort(); // unreachable
block26:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp299 = &$tmp279->data;
frost$core$Object** $tmp300 = *$tmp299;
frost$core$Int64 $tmp301 = frost$core$Int64$init$frost$core$Int($tmp280);
int64_t $tmp302 = $tmp301.value;
frost$core$Object* $tmp303 = $tmp300[$tmp302];
frost$core$Frost$ref$frost$core$Object$Q($tmp303);
org$frostlang$frostc$Type** $tmp304 = &((org$frostlang$frostc$MethodDecl$Parameter*) $tmp303)->type;
org$frostlang$frostc$Type* $tmp305 = *$tmp304;
ITable* $tmp306 = ((frost$core$Equatable*) $tmp277)->$class->itable;
while ($tmp306->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp306 = $tmp306->next;
}
$fn308 $tmp307 = $tmp306->methods[1];
frost$core$Bit $tmp309 = $tmp307(((frost$core$Equatable*) $tmp277), ((frost$core$Equatable*) $tmp305));
bool $tmp310 = $tmp309.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp303);
frost$core$Frost$unref$frost$core$Object$Q($tmp275);
if ($tmp310) goto block19; else goto block20;
block19:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:129
frost$core$Bit $tmp311 = (frost$core$Bit) {false};
return $tmp311;
block20:;
frost$core$Int $tmp312 = *(&local5);
int64_t $tmp313 = $tmp236.value;
int64_t $tmp314 = $tmp312.value;
int64_t $tmp315 = $tmp313 - $tmp314;
frost$core$Int $tmp316 = (frost$core$Int) {$tmp315};
if ($tmp238) goto block30; else goto block31;
block30:;
int64_t $tmp317 = $tmp316.value;
int64_t $tmp318 = $tmp239.value;
bool $tmp319 = $tmp317 >= $tmp318;
frost$core$Bit $tmp320 = (frost$core$Bit) {$tmp319};
bool $tmp321 = $tmp320.value;
if ($tmp321) goto block29; else goto block15;
block31:;
int64_t $tmp322 = $tmp316.value;
int64_t $tmp323 = $tmp239.value;
bool $tmp324 = $tmp322 > $tmp323;
frost$core$Bit $tmp325 = (frost$core$Bit) {$tmp324};
bool $tmp326 = $tmp325.value;
if ($tmp326) goto block29; else goto block15;
block29:;
int64_t $tmp327 = $tmp312.value;
int64_t $tmp328 = $tmp239.value;
int64_t $tmp329 = $tmp327 + $tmp328;
frost$core$Int $tmp330 = (frost$core$Int) {$tmp329};
*(&local5) = $tmp330;
goto block14;
block15:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:132
frost$core$Bit $tmp331 = (frost$core$Bit) {true};
return $tmp331;

}
frost$core$Int org$frostlang$frostc$MethodDecl$get_priority$R$frost$core$Int(org$frostlang$frostc$MethodDecl* param0) {

org$frostlang$frostc$Annotations$Expression* local0 = NULL;
org$frostlang$frostc$ASTNode* local1 = NULL;
frost$core$UInt64 local2;
org$frostlang$frostc$expression$Unary$Operator local3;
org$frostlang$frostc$ASTNode* local4 = NULL;
org$frostlang$frostc$expression$Unary$Operator local5;
org$frostlang$frostc$expression$Unary$Operator local6;
frost$core$UInt64 local7;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:136
org$frostlang$frostc$Annotations** $tmp332 = &param0->annotations;
org$frostlang$frostc$Annotations* $tmp333 = *$tmp332;
frost$collections$Array** $tmp334 = &$tmp333->expressions;
frost$collections$Array* $tmp335 = *$tmp334;
frost$core$Bit $tmp336 = (frost$core$Bit) {$tmp335 != NULL};
bool $tmp337 = $tmp336.value;
if ($tmp337) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:137
org$frostlang$frostc$Annotations** $tmp338 = &param0->annotations;
org$frostlang$frostc$Annotations* $tmp339 = *$tmp338;
frost$collections$Array** $tmp340 = &$tmp339->expressions;
frost$collections$Array* $tmp341 = *$tmp340;
frost$core$Bit $tmp342 = (frost$core$Bit) {$tmp341 != NULL};
bool $tmp343 = $tmp342.value;
if ($tmp343) goto block3; else goto block4;
block4:;
frost$core$Int $tmp344 = (frost$core$Int) {137u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s345, $tmp344, &$s346);
abort(); // unreachable
block3:;
ITable* $tmp347 = ((frost$collections$Iterable*) $tmp341)->$class->itable;
while ($tmp347->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp347 = $tmp347->next;
}
$fn349 $tmp348 = $tmp347->methods[0];
frost$collections$Iterator* $tmp350 = $tmp348(((frost$collections$Iterable*) $tmp341));
goto block5;
block5:;
ITable* $tmp351 = $tmp350->$class->itable;
while ($tmp351->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp351 = $tmp351->next;
}
$fn353 $tmp352 = $tmp351->methods[0];
frost$core$Bit $tmp354 = $tmp352($tmp350);
bool $tmp355 = $tmp354.value;
if ($tmp355) goto block7; else goto block6;
block6:;
*(&local0) = ((org$frostlang$frostc$Annotations$Expression*) NULL);
ITable* $tmp356 = $tmp350->$class->itable;
while ($tmp356->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp356 = $tmp356->next;
}
$fn358 $tmp357 = $tmp356->methods[1];
frost$core$Object* $tmp359 = $tmp357($tmp350);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Annotations$Expression*) $tmp359)));
org$frostlang$frostc$Annotations$Expression* $tmp360 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp360));
*(&local0) = ((org$frostlang$frostc$Annotations$Expression*) $tmp359);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:138
org$frostlang$frostc$Annotations$Expression* $tmp361 = *(&local0);
frost$core$Int* $tmp362 = &$tmp361->$rawValue;
frost$core$Int $tmp363 = *$tmp362;
frost$core$Int $tmp364 = (frost$core$Int) {4u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from MethodDecl.frost:139:48
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp365 = $tmp363.value;
int64_t $tmp366 = $tmp364.value;
bool $tmp367 = $tmp365 == $tmp366;
frost$core$Bit $tmp368 = (frost$core$Bit) {$tmp367};
bool $tmp369 = $tmp368.value;
if ($tmp369) goto block9; else goto block8;
block9:;
frost$core$String** $tmp370 = (frost$core$String**) ($tmp361->$data + 0);
frost$core$String* $tmp371 = *$tmp370;
org$frostlang$frostc$ASTNode** $tmp372 = (org$frostlang$frostc$ASTNode**) ($tmp361->$data + 8);
org$frostlang$frostc$ASTNode* $tmp373 = *$tmp372;
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp373));
org$frostlang$frostc$ASTNode* $tmp374 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp374));
*(&local1) = $tmp373;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:140
org$frostlang$frostc$ASTNode* $tmp375 = *(&local1);
frost$core$Int* $tmp376 = &$tmp375->$rawValue;
frost$core$Int $tmp377 = *$tmp376;
frost$core$Int $tmp378 = (frost$core$Int) {25u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from MethodDecl.frost:141:41
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp379 = $tmp377.value;
int64_t $tmp380 = $tmp378.value;
bool $tmp381 = $tmp379 == $tmp380;
frost$core$Bit $tmp382 = (frost$core$Bit) {$tmp381};
bool $tmp383 = $tmp382.value;
if ($tmp383) goto block12; else goto block13;
block12:;
org$frostlang$frostc$Position* $tmp384 = (org$frostlang$frostc$Position*) ($tmp375->$data + 0);
org$frostlang$frostc$Position $tmp385 = *$tmp384;
frost$core$UInt64* $tmp386 = (frost$core$UInt64*) ($tmp375->$data + 24);
frost$core$UInt64 $tmp387 = *$tmp386;
*(&local2) = $tmp387;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:142
frost$core$UInt64 $tmp388 = *(&local2);
// begin inline call to function frost.core.UInt64.get_asInt():frost.core.Int from MethodDecl.frost:142:45
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:544
uint64_t $tmp389 = $tmp388.value;
frost$core$Int $tmp390 = (frost$core$Int) {((int64_t) $tmp389)};
org$frostlang$frostc$ASTNode* $tmp391 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp391));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp359);
org$frostlang$frostc$Annotations$Expression* $tmp392 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp392));
*(&local0) = ((org$frostlang$frostc$Annotations$Expression*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp350));
return $tmp390;
block13:;
frost$core$Int $tmp393 = (frost$core$Int) {49u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from MethodDecl.frost:144:41
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp394 = $tmp377.value;
int64_t $tmp395 = $tmp393.value;
bool $tmp396 = $tmp394 == $tmp395;
frost$core$Bit $tmp397 = (frost$core$Bit) {$tmp396};
bool $tmp398 = $tmp397.value;
if ($tmp398) goto block16; else goto block11;
block16:;
org$frostlang$frostc$Position* $tmp399 = (org$frostlang$frostc$Position*) ($tmp375->$data + 0);
org$frostlang$frostc$Position $tmp400 = *$tmp399;
org$frostlang$frostc$expression$Unary$Operator* $tmp401 = (org$frostlang$frostc$expression$Unary$Operator*) ($tmp375->$data + 24);
org$frostlang$frostc$expression$Unary$Operator $tmp402 = *$tmp401;
*(&local3) = $tmp402;
org$frostlang$frostc$ASTNode** $tmp403 = (org$frostlang$frostc$ASTNode**) ($tmp375->$data + 32);
org$frostlang$frostc$ASTNode* $tmp404 = *$tmp403;
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp404));
org$frostlang$frostc$ASTNode* $tmp405 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp405));
*(&local4) = $tmp404;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:145
org$frostlang$frostc$expression$Unary$Operator $tmp406 = *(&local3);
org$frostlang$frostc$expression$Unary$Operator$wrapper* $tmp407;
$tmp407 = (org$frostlang$frostc$expression$Unary$Operator$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$expression$Unary$Operator$wrapperclass);
$tmp407->value = $tmp406;
frost$core$Int $tmp408 = (frost$core$Int) {2u};
// begin inline call to org.frostlang.frostc.expression.Unary.Operator.init(rv:frost.core.Int):org.frostlang.frostc.expression.Unary.Operator from MethodDecl.frost:145:55
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:18
frost$core$Int* $tmp409 = &(&local6)->$rawValue;
*$tmp409 = $tmp408;
org$frostlang$frostc$expression$Unary$Operator $tmp410 = *(&local6);
*(&local5) = $tmp410;
org$frostlang$frostc$expression$Unary$Operator $tmp411 = *(&local5);
org$frostlang$frostc$expression$Unary$Operator$wrapper* $tmp412;
$tmp412 = (org$frostlang$frostc$expression$Unary$Operator$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$expression$Unary$Operator$wrapperclass);
$tmp412->value = $tmp411;
ITable* $tmp413 = ((frost$core$Equatable*) $tmp407)->$class->itable;
while ($tmp413->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp413 = $tmp413->next;
}
$fn415 $tmp414 = $tmp413->methods[0];
frost$core$Bit $tmp416 = $tmp414(((frost$core$Equatable*) $tmp407), ((frost$core$Equatable*) $tmp412));
bool $tmp417 = $tmp416.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp412)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp407)));
if ($tmp417) goto block18; else goto block19;
block18:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:146
org$frostlang$frostc$ASTNode* $tmp418 = *(&local4);
frost$core$Int* $tmp419 = &$tmp418->$rawValue;
frost$core$Int $tmp420 = *$tmp419;
frost$core$Int $tmp421 = (frost$core$Int) {25u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from MethodDecl.frost:147:53
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp422 = $tmp420.value;
int64_t $tmp423 = $tmp421.value;
bool $tmp424 = $tmp422 == $tmp423;
frost$core$Bit $tmp425 = (frost$core$Bit) {$tmp424};
bool $tmp426 = $tmp425.value;
if ($tmp426) goto block22; else goto block21;
block22:;
org$frostlang$frostc$Position* $tmp427 = (org$frostlang$frostc$Position*) ($tmp418->$data + 0);
org$frostlang$frostc$Position $tmp428 = *$tmp427;
frost$core$UInt64* $tmp429 = (frost$core$UInt64*) ($tmp418->$data + 24);
frost$core$UInt64 $tmp430 = *$tmp429;
*(&local7) = $tmp430;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:148
frost$core$UInt64 $tmp431 = *(&local7);
// begin inline call to function frost.core.UInt64.get_asInt():frost.core.Int from MethodDecl.frost:148:59
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:544
uint64_t $tmp432 = $tmp431.value;
frost$core$Int $tmp433 = (frost$core$Int) {((int64_t) $tmp432)};
// begin inline call to function frost.core.Int.-():frost.core.Int from MethodDecl.frost:148:52
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:120
int64_t $tmp434 = $tmp433.value;
int64_t $tmp435 = -$tmp434;
frost$core$Int $tmp436 = (frost$core$Int) {$tmp435};
org$frostlang$frostc$ASTNode* $tmp437 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp437));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp438 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp438));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp359);
org$frostlang$frostc$Annotations$Expression* $tmp439 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp439));
*(&local0) = ((org$frostlang$frostc$Annotations$Expression*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp350));
return $tmp436;
block21:;
goto block19;
block19:;
org$frostlang$frostc$ASTNode* $tmp440 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp440));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block11;
block11:;
org$frostlang$frostc$ASTNode* $tmp441 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp441));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block8;
block8:;
frost$core$Frost$unref$frost$core$Object$Q($tmp359);
org$frostlang$frostc$Annotations$Expression* $tmp442 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp442));
*(&local0) = ((org$frostlang$frostc$Annotations$Expression*) NULL);
goto block5;
block7:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp350));
goto block2;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:158
frost$core$Int $tmp443 = (frost$core$Int) {0u};
return $tmp443;

}
org$frostlang$frostc$Type* org$frostlang$frostc$MethodDecl$type$org$frostlang$frostc$Compiler$R$org$frostlang$frostc$Type(org$frostlang$frostc$MethodDecl* param0, org$frostlang$frostc$Compiler* param1) {

frost$collections$Array* local0 = NULL;
org$frostlang$frostc$MethodDecl$Parameter* local1 = NULL;
org$frostlang$frostc$Type$Kind local2;
org$frostlang$frostc$MethodDecl$Kind local3;
org$frostlang$frostc$MethodDecl$Kind local4;
org$frostlang$frostc$Type$Kind local5;
org$frostlang$frostc$Type$Kind local6;
org$frostlang$frostc$Type$Kind local7;
org$frostlang$frostc$Type$Kind local8;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:162
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp444 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array** $tmp445 = &param0->parameters;
frost$collections$Array* $tmp446 = *$tmp445;
ITable* $tmp447 = ((frost$collections$CollectionView*) $tmp446)->$class->itable;
while ($tmp447->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp447 = $tmp447->next;
}
$fn449 $tmp448 = $tmp447->methods[0];
frost$core$Int $tmp450 = $tmp448(((frost$collections$CollectionView*) $tmp446));
frost$collections$Array$init$frost$core$Int($tmp444, $tmp450);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp444));
frost$collections$Array* $tmp451 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp451));
*(&local0) = $tmp444;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp444));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:163
frost$collections$Array** $tmp452 = &param0->parameters;
frost$collections$Array* $tmp453 = *$tmp452;
ITable* $tmp454 = ((frost$collections$Iterable*) $tmp453)->$class->itable;
while ($tmp454->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp454 = $tmp454->next;
}
$fn456 $tmp455 = $tmp454->methods[0];
frost$collections$Iterator* $tmp457 = $tmp455(((frost$collections$Iterable*) $tmp453));
goto block1;
block1:;
ITable* $tmp458 = $tmp457->$class->itable;
while ($tmp458->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp458 = $tmp458->next;
}
$fn460 $tmp459 = $tmp458->methods[0];
frost$core$Bit $tmp461 = $tmp459($tmp457);
bool $tmp462 = $tmp461.value;
if ($tmp462) goto block3; else goto block2;
block2:;
*(&local1) = ((org$frostlang$frostc$MethodDecl$Parameter*) NULL);
ITable* $tmp463 = $tmp457->$class->itable;
while ($tmp463->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp463 = $tmp463->next;
}
$fn465 $tmp464 = $tmp463->methods[1];
frost$core$Object* $tmp466 = $tmp464($tmp457);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$MethodDecl$Parameter*) $tmp466)));
org$frostlang$frostc$MethodDecl$Parameter* $tmp467 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp467));
*(&local1) = ((org$frostlang$frostc$MethodDecl$Parameter*) $tmp466);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:164
frost$collections$Array* $tmp468 = *(&local0);
org$frostlang$frostc$MethodDecl$Parameter* $tmp469 = *(&local1);
org$frostlang$frostc$Type** $tmp470 = &$tmp469->type;
org$frostlang$frostc$Type* $tmp471 = *$tmp470;
frost$collections$Array$add$frost$collections$Array$T($tmp468, ((frost$core$Object*) $tmp471));
frost$core$Frost$unref$frost$core$Object$Q($tmp466);
org$frostlang$frostc$MethodDecl$Parameter* $tmp472 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp472));
*(&local1) = ((org$frostlang$frostc$MethodDecl$Parameter*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp457));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:166
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:167
org$frostlang$frostc$MethodDecl$Kind* $tmp473 = &param0->methodKind;
org$frostlang$frostc$MethodDecl$Kind $tmp474 = *$tmp473;
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp475;
$tmp475 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp475->value = $tmp474;
frost$core$Int $tmp476 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.MethodDecl.Kind.init(rv:frost.core.Int):org.frostlang.frostc.MethodDecl.Kind from MethodDecl.frost:167:29
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:7
frost$core$Int* $tmp477 = &(&local4)->$rawValue;
*$tmp477 = $tmp476;
org$frostlang$frostc$MethodDecl$Kind $tmp478 = *(&local4);
*(&local3) = $tmp478;
org$frostlang$frostc$MethodDecl$Kind $tmp479 = *(&local3);
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp480;
$tmp480 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp480->value = $tmp479;
ITable* $tmp481 = ((frost$core$Equatable*) $tmp475)->$class->itable;
while ($tmp481->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp481 = $tmp481->next;
}
$fn483 $tmp482 = $tmp481->methods[0];
frost$core$Bit $tmp484 = $tmp482(((frost$core$Equatable*) $tmp475), ((frost$core$Equatable*) $tmp480));
bool $tmp485 = $tmp484.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp480)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp475)));
if ($tmp485) goto block4; else goto block6;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:168
frost$core$Int $tmp486 = (frost$core$Int) {17u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from MethodDecl.frost:168:30
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp487 = &(&local6)->$rawValue;
*$tmp487 = $tmp486;
org$frostlang$frostc$Type$Kind $tmp488 = *(&local6);
*(&local5) = $tmp488;
org$frostlang$frostc$Type$Kind $tmp489 = *(&local5);
*(&local2) = $tmp489;
goto block5;
block6:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:171
frost$core$Int $tmp490 = (frost$core$Int) {18u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from MethodDecl.frost:171:30
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp491 = &(&local8)->$rawValue;
*$tmp491 = $tmp490;
org$frostlang$frostc$Type$Kind $tmp492 = *(&local8);
*(&local7) = $tmp492;
org$frostlang$frostc$Type$Kind $tmp493 = *(&local7);
*(&local2) = $tmp493;
goto block5;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:173
org$frostlang$frostc$Position* $tmp494 = &((org$frostlang$frostc$Symbol*) param0)->position;
org$frostlang$frostc$Position $tmp495 = *$tmp494;
org$frostlang$frostc$Type$Kind $tmp496 = *(&local2);
frost$collections$Array* $tmp497 = *(&local0);
org$frostlang$frostc$Type** $tmp498 = &param0->returnType;
org$frostlang$frostc$Type* $tmp499 = *$tmp498;
frost$core$Int $tmp500 = org$frostlang$frostc$MethodDecl$get_priority$R$frost$core$Int(param0);
org$frostlang$frostc$Type* $tmp501 = org$frostlang$frostc$Type$methodType$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$Type$Kind$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$org$frostlang$frostc$Type$frost$core$Int$R$org$frostlang$frostc$Type(param1, $tmp495, $tmp496, ((frost$collections$ListView*) $tmp497), $tmp499, $tmp500);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp501));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp501));
frost$collections$Array* $tmp502 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp502));
*(&local0) = ((frost$collections$Array*) NULL);
return $tmp501;

}
frost$core$String* org$frostlang$frostc$MethodDecl$get_signature$R$frost$core$String(org$frostlang$frostc$MethodDecl* param0) {

frost$core$MutableString* local0 = NULL;
frost$core$String* local1 = NULL;
org$frostlang$frostc$MethodDecl$Parameter* local2 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:177
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp503 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$String** $tmp504 = &((org$frostlang$frostc$Symbol*) param0)->name;
frost$core$String* $tmp505 = *$tmp504;
// begin inline call to function frost.core.String.get_asString():frost.core.String from MethodDecl.frost:177:40
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:390
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp505));
frost$core$String* $tmp506 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp505, &$s507);
frost$core$MutableString$init$frost$core$String($tmp503, $tmp506);
*(&local0) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp503));
frost$core$MutableString* $tmp508 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp508));
*(&local0) = $tmp503;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp506));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp505));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp503));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:178
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s509));
frost$core$String* $tmp510 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp510));
*(&local1) = &$s511;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:179
frost$collections$Array** $tmp512 = &param0->parameters;
frost$collections$Array* $tmp513 = *$tmp512;
ITable* $tmp514 = ((frost$collections$Iterable*) $tmp513)->$class->itable;
while ($tmp514->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp514 = $tmp514->next;
}
$fn516 $tmp515 = $tmp514->methods[0];
frost$collections$Iterator* $tmp517 = $tmp515(((frost$collections$Iterable*) $tmp513));
goto block2;
block2:;
ITable* $tmp518 = $tmp517->$class->itable;
while ($tmp518->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp518 = $tmp518->next;
}
$fn520 $tmp519 = $tmp518->methods[0];
frost$core$Bit $tmp521 = $tmp519($tmp517);
bool $tmp522 = $tmp521.value;
if ($tmp522) goto block4; else goto block3;
block3:;
*(&local2) = ((org$frostlang$frostc$MethodDecl$Parameter*) NULL);
ITable* $tmp523 = $tmp517->$class->itable;
while ($tmp523->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp523 = $tmp523->next;
}
$fn525 $tmp524 = $tmp523->methods[1];
frost$core$Object* $tmp526 = $tmp524($tmp517);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$MethodDecl$Parameter*) $tmp526)));
org$frostlang$frostc$MethodDecl$Parameter* $tmp527 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp527));
*(&local2) = ((org$frostlang$frostc$MethodDecl$Parameter*) $tmp526);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:180
frost$core$MutableString* $tmp528 = *(&local0);
frost$core$String* $tmp529 = *(&local1);
frost$core$MutableString$append$frost$core$String($tmp528, $tmp529);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:181
frost$core$MutableString* $tmp530 = *(&local0);
org$frostlang$frostc$MethodDecl$Parameter* $tmp531 = *(&local2);
// begin inline call to method frost.core.MutableString.append(o:frost.core.Object) from MethodDecl.frost:181:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:150
$fn533 $tmp532 = ($fn533) ((frost$core$Object*) $tmp531)->$class->vtable[0];
frost$core$String* $tmp534 = $tmp532(((frost$core$Object*) $tmp531));
frost$core$MutableString$append$frost$core$String($tmp530, $tmp534);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp534));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:182
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s535));
frost$core$String* $tmp536 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp536));
*(&local1) = &$s537;
frost$core$Frost$unref$frost$core$Object$Q($tmp526);
org$frostlang$frostc$MethodDecl$Parameter* $tmp538 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp538));
*(&local2) = ((org$frostlang$frostc$MethodDecl$Parameter*) NULL);
goto block2;
block4:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp517));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:184
frost$core$MutableString* $tmp539 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp539, &$s540);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:185
org$frostlang$frostc$Type** $tmp541 = &param0->returnType;
org$frostlang$frostc$Type* $tmp542 = *$tmp541;
frost$core$String** $tmp543 = &((org$frostlang$frostc$Symbol*) $tmp542)->name;
frost$core$String* $tmp544 = *$tmp543;
ITable* $tmp546 = ((frost$core$Equatable*) $tmp544)->$class->itable;
while ($tmp546->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp546 = $tmp546->next;
}
$fn548 $tmp547 = $tmp546->methods[1];
frost$core$Bit $tmp549 = $tmp547(((frost$core$Equatable*) $tmp544), ((frost$core$Equatable*) &$s545));
bool $tmp550 = $tmp549.value;
if ($tmp550) goto block6; else goto block7;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:186
frost$core$MutableString* $tmp551 = *(&local0);
org$frostlang$frostc$Type** $tmp552 = &param0->returnType;
org$frostlang$frostc$Type* $tmp553 = *$tmp552;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from MethodDecl.frost:186:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn555 $tmp554 = ($fn555) ((frost$core$Object*) $tmp553)->$class->vtable[0];
frost$core$String* $tmp556 = $tmp554(((frost$core$Object*) $tmp553));
frost$core$String* $tmp557 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s558, $tmp556);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp557));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp557));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp556));
frost$core$String* $tmp559 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp557, &$s560);
frost$core$MutableString$append$frost$core$String($tmp551, $tmp559);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp559));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp557));
goto block7;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:188
frost$core$MutableString* $tmp561 = *(&local0);
frost$core$String* $tmp562 = frost$core$MutableString$finish$R$frost$core$String($tmp561);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp562));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp562));
frost$core$String* $tmp563 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp563));
*(&local1) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp564 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp564));
*(&local0) = ((frost$core$MutableString*) NULL);
return $tmp562;

}
frost$core$String* org$frostlang$frostc$MethodDecl$get_declaration$R$frost$core$String(org$frostlang$frostc$MethodDecl* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:192
org$frostlang$frostc$MethodDecl$Kind* $tmp565 = &param0->methodKind;
org$frostlang$frostc$MethodDecl$Kind $tmp566 = *$tmp565;
frost$core$Int $tmp567 = $tmp566.$rawValue;
frost$core$Int $tmp568 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from MethodDecl.frost:193:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp569 = $tmp567.value;
int64_t $tmp570 = $tmp568.value;
bool $tmp571 = $tmp569 == $tmp570;
frost$core$Bit $tmp572 = (frost$core$Bit) {$tmp571};
bool $tmp573 = $tmp572.value;
if ($tmp573) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:194
frost$core$Weak** $tmp574 = &param0->owner;
frost$core$Weak* $tmp575 = *$tmp574;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from MethodDecl.frost:194:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp576 = &$tmp575->_valid;
frost$core$Bit $tmp577 = *$tmp576;
bool $tmp578 = $tmp577.value;
if ($tmp578) goto block7; else goto block8;
block8:;
frost$core$Int $tmp579 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s580, $tmp579);
abort(); // unreachable
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp581 = &$tmp575->value;
frost$core$Object* $tmp582 = *$tmp581;
frost$core$Frost$ref$frost$core$Object$Q($tmp582);
frost$core$String** $tmp583 = &((org$frostlang$frostc$ClassDecl*) $tmp582)->name;
frost$core$String* $tmp584 = *$tmp583;
frost$core$String* $tmp585 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s586, $tmp584);
frost$core$String* $tmp587 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp585, &$s588);
frost$core$String* $tmp589 = org$frostlang$frostc$MethodDecl$get_signature$R$frost$core$String(param0);
frost$core$String* $tmp590 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp587, $tmp589);
frost$core$String* $tmp591 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp590, &$s592);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp591));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp591));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp590));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp589));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp587));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp585));
frost$core$Frost$unref$frost$core$Object$Q($tmp582);
return $tmp591;
block3:;
frost$core$Int $tmp593 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from MethodDecl.frost:196:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp594 = $tmp567.value;
int64_t $tmp595 = $tmp593.value;
bool $tmp596 = $tmp594 == $tmp595;
frost$core$Bit $tmp597 = (frost$core$Bit) {$tmp596};
bool $tmp598 = $tmp597.value;
if ($tmp598) goto block9; else goto block10;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:197
frost$core$Weak** $tmp599 = &param0->owner;
frost$core$Weak* $tmp600 = *$tmp599;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from MethodDecl.frost:197:36
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp601 = &$tmp600->_valid;
frost$core$Bit $tmp602 = *$tmp601;
bool $tmp603 = $tmp602.value;
if ($tmp603) goto block14; else goto block15;
block15:;
frost$core$Int $tmp604 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s605, $tmp604);
abort(); // unreachable
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp606 = &$tmp600->value;
frost$core$Object* $tmp607 = *$tmp606;
frost$core$Frost$ref$frost$core$Object$Q($tmp607);
frost$core$String** $tmp608 = &((org$frostlang$frostc$ClassDecl*) $tmp607)->name;
frost$core$String* $tmp609 = *$tmp608;
frost$core$String* $tmp610 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s611, $tmp609);
frost$core$String* $tmp612 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp610, &$s613);
frost$core$String* $tmp614 = org$frostlang$frostc$MethodDecl$get_signature$R$frost$core$String(param0);
frost$core$String* $tmp615 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp612, $tmp614);
frost$core$String* $tmp616 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp615, &$s617);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp616));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp616));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp615));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp614));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp612));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp610));
frost$core$Frost$unref$frost$core$Object$Q($tmp607);
return $tmp616;
block10:;
frost$core$Int $tmp618 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from MethodDecl.frost:199:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp619 = $tmp567.value;
int64_t $tmp620 = $tmp618.value;
bool $tmp621 = $tmp619 == $tmp620;
frost$core$Bit $tmp622 = (frost$core$Bit) {$tmp621};
bool $tmp623 = $tmp622.value;
if ($tmp623) goto block16; else goto block1;
block16:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:200
frost$core$Weak** $tmp624 = &param0->owner;
frost$core$Weak* $tmp625 = *$tmp624;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from MethodDecl.frost:200:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp626 = &$tmp625->_valid;
frost$core$Bit $tmp627 = *$tmp626;
bool $tmp628 = $tmp627.value;
if ($tmp628) goto block20; else goto block21;
block21:;
frost$core$Int $tmp629 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s630, $tmp629);
abort(); // unreachable
block20:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp631 = &$tmp625->value;
frost$core$Object* $tmp632 = *$tmp631;
frost$core$Frost$ref$frost$core$Object$Q($tmp632);
frost$core$String** $tmp633 = &((org$frostlang$frostc$ClassDecl*) $tmp632)->name;
frost$core$String* $tmp634 = *$tmp633;
// begin inline call to function frost.core.String.get_asString():frost.core.String from MethodDecl.frost:200:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:390
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp634));
frost$core$String* $tmp635 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp634, &$s636);
frost$core$String* $tmp637 = org$frostlang$frostc$MethodDecl$get_signature$R$frost$core$String(param0);
frost$core$String* $tmp638 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp635, $tmp637);
frost$core$String* $tmp639 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp638, &$s640);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp639));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp639));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp638));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp637));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp635));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp634));
frost$core$Frost$unref$frost$core$Object$Q($tmp632);
return $tmp639;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:203
frost$core$Int $tmp641 = (frost$core$Int) {203u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s642, $tmp641);
abort(); // unreachable

}
frost$core$String* org$frostlang$frostc$MethodDecl$get_asString$R$frost$core$String(org$frostlang$frostc$MethodDecl* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:208
org$frostlang$frostc$FixedArray** $tmp643 = &param0->body;
org$frostlang$frostc$FixedArray* $tmp644 = *$tmp643;
frost$core$Bit $tmp645 = (frost$core$Bit) {$tmp644 != NULL};
bool $tmp646 = $tmp645.value;
if ($tmp646) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:209
org$frostlang$frostc$Annotations** $tmp647 = &param0->annotations;
org$frostlang$frostc$Annotations* $tmp648 = *$tmp647;
frost$core$String* $tmp649 = org$frostlang$frostc$Annotations$get_asString$R$frost$core$String($tmp648);
frost$core$String* $tmp650 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp649, &$s651);
frost$core$String* $tmp652 = org$frostlang$frostc$MethodDecl$get_signature$R$frost$core$String(param0);
frost$core$String* $tmp653 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp650, $tmp652);
frost$core$String* $tmp654 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp653, &$s655);
org$frostlang$frostc$FixedArray** $tmp656 = &param0->body;
org$frostlang$frostc$FixedArray* $tmp657 = *$tmp656;
frost$core$Bit $tmp658 = (frost$core$Bit) {$tmp657 != NULL};
bool $tmp659 = $tmp658.value;
if ($tmp659) goto block3; else goto block4;
block4:;
frost$core$Int $tmp660 = (frost$core$Int) {209u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s661, $tmp660, &$s662);
abort(); // unreachable
block3:;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from MethodDecl.frost:209:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn664 $tmp663 = ($fn664) ((frost$core$Object*) $tmp657)->$class->vtable[0];
frost$core$String* $tmp665 = $tmp663(((frost$core$Object*) $tmp657));
frost$core$String* $tmp666 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp654, $tmp665);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp666));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp666));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp665));
frost$core$String* $tmp667 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp666, &$s668);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp667));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp667));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp666));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp654));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp653));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp652));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp650));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp649));
return $tmp667;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:211
frost$core$String* $tmp669 = org$frostlang$frostc$MethodDecl$get_signature$R$frost$core$String(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp669));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp669));
return $tmp669;

}
void org$frostlang$frostc$MethodDecl$cleanup(org$frostlang$frostc$MethodDecl* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:6
org$frostlang$frostc$Symbol$cleanup(((org$frostlang$frostc$Symbol*) param0));
frost$core$Weak** $tmp670 = &param0->owner;
frost$core$Weak* $tmp671 = *$tmp670;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp671));
frost$core$String** $tmp672 = &param0->doccomment;
frost$core$String* $tmp673 = *$tmp672;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp673));
org$frostlang$frostc$Annotations** $tmp674 = &param0->annotations;
org$frostlang$frostc$Annotations* $tmp675 = *$tmp674;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp675));
frost$collections$Array** $tmp676 = &param0->genericParameters;
frost$collections$Array* $tmp677 = *$tmp676;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp677));
frost$collections$Array** $tmp678 = &param0->parameters;
frost$collections$Array* $tmp679 = *$tmp678;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp679));
org$frostlang$frostc$Type** $tmp680 = &param0->returnType;
org$frostlang$frostc$Type* $tmp681 = *$tmp680;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp681));
org$frostlang$frostc$FixedArray** $tmp682 = &param0->body;
org$frostlang$frostc$FixedArray* $tmp683 = *$tmp682;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp683));
frost$core$Weak** $tmp684 = &param0->overridden;
frost$core$Weak* $tmp685 = *$tmp684;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp685));
return;

}

