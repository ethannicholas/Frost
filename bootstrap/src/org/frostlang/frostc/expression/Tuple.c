#include "org/frostlang/frostc/expression/Tuple.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/Type.h"
#include "org/frostlang/frostc/Compiler.h"
#include "org/frostlang/frostc/ASTNode.h"
#include "frost/core/UInt64.h"
#include "frost/core/Int.h"
#include "frost/core/Bit.h"
#include "org/frostlang/frostc/Position.h"
#include "org/frostlang/frostc/FixedArray.h"
#include "frost/collections/CollectionView.h"
#include "org/frostlang/frostc/expression/Tuple/_Closure2.h"
#include "frost/core/MutableMethod.h"
#include "frost/core/Frost.h"
#include "frost/collections/Array.h"
#include "frost/collections/Iterable.h"
#include "frost/collections/Iterator.h"
#include "frost/collections/ListView.h"
#include "org/frostlang/frostc/Pair.h"
#include "org/frostlang/frostc/Type/Kind.h"
#include "frost/core/Equatable.h"
#include "frost/core/Range.LTfrost/core/Int.GT.h"
#include "org/frostlang/frostc/IR/Value.h"
#include "org/frostlang/frostc/Compiler/TypeContext.h"
#include "org/frostlang/frostc/ClassDecl.h"
#include "org/frostlang/frostc/expression/Tuple/_Closure4.h"
#include "org/frostlang/frostc/expression/Call.h"


static frost$core$String $s1;
org$frostlang$frostc$expression$Tuple$class_type org$frostlang$frostc$expression$Tuple$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$expression$Tuple$cleanup} };

typedef frost$core$Int (*$fn2)(frost$collections$CollectionView*);
typedef org$frostlang$frostc$Position (*$fn3)(org$frostlang$frostc$ASTNode*);
typedef frost$core$String* (*$fn4)(frost$core$Object*);
typedef frost$core$String* (*$fn5)(frost$core$Object*);
typedef frost$core$Object* (*$fn6)(frost$collections$CollectionView*, frost$core$MutableMethod*);
typedef org$frostlang$frostc$Position (*$fn10)(org$frostlang$frostc$ASTNode*);
typedef frost$core$String* (*$fn11)(frost$core$Object*);
typedef frost$core$String* (*$fn14)(frost$core$Object*);
typedef org$frostlang$frostc$Type* (*$fn20)(org$frostlang$frostc$expression$Tuple$_Closure2*, org$frostlang$frostc$Type*, org$frostlang$frostc$Type*);
typedef frost$collections$Iterator* (*$fn22)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn23)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn24)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn30)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int (*$fn31)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn32)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn33)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn34)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn35)(frost$collections$Iterable*);
typedef frost$core$Object* (*$fn36)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn58)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int (*$fn59)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn60)(frost$collections$CollectionView*);
typedef frost$collections$Array* (*$fn61)(frost$collections$CollectionView*, frost$core$MutableMethod*);
typedef org$frostlang$frostc$Type* (*$fn73)(org$frostlang$frostc$expression$Tuple$_Closure4*, org$frostlang$frostc$ASTNode*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2e\x54\x75\x70\x6c\x65", 37, -2192914147627931606, NULL };
static frost$core$String $s7 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s8 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s12 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x74\x75\x70\x6c\x65\x20\x69\x6e\x64\x65\x78\x20\x27", 13, -2835249030150575212, NULL };
static frost$core$String $s13 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x20\x69\x73\x20\x6f\x75\x74\x20\x6f\x66\x20\x62\x6f\x75\x6e\x64\x73\x20\x66\x6f\x72\x20\x27", 24, -5834575264800361726, NULL };
static frost$core$String $s15 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27", 1, -5808629440921371546, NULL };
static frost$core$String $s16 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s17 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s18 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s19 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s28 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x75\x70\x6c\x65\x2e\x66\x72\x6f\x73\x74", 11, 4603043468144271925, NULL };
static frost$core$String $s29 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 89, 6559565496330182789, NULL };
static frost$core$String $s40 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s41 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s45 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s46 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s47 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x75\x70\x6c\x65\x2e\x66\x72\x6f\x73\x74", 11, 4603043468144271925, NULL };
static frost$core$String $s48 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72", 132, 3365872483370042718, NULL };
static frost$core$String $s50 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x75\x70\x6c\x65\x2e\x66\x72\x6f\x73\x74", 11, 4603043468144271925, NULL };
static frost$core$String $s51 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77", 130, 6793640040443146634, NULL };
static frost$core$String $s53 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x75\x70\x6c\x65\x2e\x66\x72\x6f\x73\x74", 11, 4603043468144271925, NULL };
static frost$core$String $s54 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x75\x70\x6c\x65\x2e\x66\x72\x6f\x73\x74", 11, 4603043468144271925, NULL };
static frost$core$String $s55 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x62\x6c\x65", 124, 4366960778587913413, NULL };
static frost$core$String $s65 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s66 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s69 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x75\x70\x6c\x65\x2e\x66\x72\x6f\x73\x74", 11, 4603043468144271925, NULL };
static frost$core$String $s70 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, -4241746971283918425, NULL };
static frost$core$String $s71 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s72 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s75 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x75\x70\x6c\x65\x2e\x66\x72\x6f\x73\x74", 11, 4603043468144271925, NULL };
static frost$core$String $s76 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 89, 6559565496330182789, NULL };

org$frostlang$frostc$Type* org$frostlang$frostc$expression$Tuple$indexType$org$frostlang$frostc$Compiler$org$frostlang$frostc$Type$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Type* param1, org$frostlang$frostc$ASTNode* param2) {

frost$core$UInt64 local0;
frost$core$Int* _1;
frost$core$Int _2;
frost$core$Int _3;
int64_t _6;
int64_t _7;
bool _8;
frost$core$Bit _9;
bool _11;
org$frostlang$frostc$Position* _13;
org$frostlang$frostc$Position _14;
frost$core$UInt64* _15;
frost$core$UInt64 _16;
frost$core$UInt64 _19;
org$frostlang$frostc$FixedArray** _22;
org$frostlang$frostc$FixedArray* _23;
bool _24;
frost$core$Bit _25;
bool _26;
frost$core$Int _28;
org$frostlang$frostc$FixedArray* _31;
frost$core$Object* _32;
frost$collections$CollectionView* _35;
$fn2 _36;
frost$core$Int _37;
int64_t _40;
uint64_t _41;
frost$core$UInt64 _42;
uint64_t _44;
uint64_t _45;
bool _46;
frost$core$Bit _47;
bool _48;
frost$core$Object* _49;
$fn3 _53;
org$frostlang$frostc$Position _54;
frost$core$Object* _55;
$fn4 _58;
frost$core$String* _59;
frost$core$String* _60;
frost$core$Object* _61;
frost$core$Object* _63;
frost$core$Object* _65;
frost$core$String* _68;
frost$core$Object* _69;
$fn5 _72;
frost$core$String* _73;
frost$core$String* _74;
frost$core$Object* _75;
frost$core$Object* _77;
frost$core$Object* _79;
frost$core$String* _82;
frost$core$Object* _84;
frost$core$Object* _86;
frost$core$Object* _88;
frost$core$Object* _90;
org$frostlang$frostc$FixedArray** _96;
org$frostlang$frostc$FixedArray* _97;
bool _98;
frost$core$Bit _99;
bool _100;
frost$core$Int _102;
org$frostlang$frostc$FixedArray* _105;
frost$core$Object* _106;
org$frostlang$frostc$FixedArray* _109;
frost$core$UInt64 _110;
uint64_t _113;
int64_t _114;
frost$core$Int _115;
frost$core$Object* _117;
org$frostlang$frostc$Type* _118;
frost$core$Object* _119;
frost$core$Object* _121;
frost$core$Object* _123;
org$frostlang$frostc$FixedArray** _129;
org$frostlang$frostc$FixedArray* _130;
bool _131;
frost$core$Bit _132;
bool _133;
frost$core$Int _135;
org$frostlang$frostc$FixedArray* _138;
frost$core$Object* _139;
frost$collections$CollectionView* _142;
org$frostlang$frostc$expression$Tuple$_Closure2* _143;
frost$core$Int8* _145;
frost$core$MutableMethod* _146;
frost$core$Object* _147;
frost$core$Int8** _150;
frost$core$Object** _154;
frost$core$Object* _155;
frost$core$Object** _157;
frost$core$MutableMethod* _160;
frost$core$MutableMethod* _161;
$fn6 _162;
frost$core$Object* _163;
org$frostlang$frostc$Type* _164;
frost$core$Object* _165;
frost$core$Object* _167;
frost$core$Object* _169;
frost$core$Object* _171;
frost$core$Object* _173;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Tuple.frost:15
_1 = &param2->$rawValue;
_2 = *_1;
_3 = (frost$core$Int) {25u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Tuple.frost:16:25
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int.stub:342
_6 = _2.value;
_7 = _3.value;
_8 = _6 == _7;
_9 = (frost$core$Bit) {_8};
_11 = _9.value;
if (_11) goto block2; else goto block1;
block2:;
_13 = (org$frostlang$frostc$Position*) (param2->$data + 0);
_14 = *_13;
_15 = (frost$core$UInt64*) (param2->$data + 24);
_16 = *_15;
*(&local0) = _16;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Tuple.frost:17
_19 = *(&local0);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Tuple.frost:17:33
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
_22 = &param1->_subtypes;
_23 = *_22;
_24 = _23 != NULL;
_25 = (frost$core$Bit) {_24};
_26 = _25.value;
if (_26) goto block7; else goto block8;
block8:;
_28 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s7, _28, &$s8);
abort(); // unreachable
block7:;
_31 = _23;
_32 = ((frost$core$Object*) _31);
frost$core$Frost$ref$frost$core$Object$Q(_32);
_35 = ((frost$collections$CollectionView*) _31);
ITable* $tmp9 = _35->$class->itable;
while ($tmp9->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp9 = $tmp9->next;
}
_36 = $tmp9->methods[0];
_37 = _36(_35);
// begin inline call to function frost.core.Int.get_asUInt64():frost.core.UInt64 from Tuple.frost:17:48
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int.stub:816
_40 = _37.value;
_41 = ((uint64_t) _40);
_42 = (frost$core$UInt64) {_41};
_44 = _19.value;
_45 = _42.value;
_46 = _44 > _45;
_47 = (frost$core$Bit) {_46};
_48 = _47.value;
_49 = ((frost$core$Object*) _31);
frost$core$Frost$unref$frost$core$Object$Q(_49);
if (_48) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Tuple.frost:18
_53 = ($fn10) param2->$class->vtable[2];
_54 = _53(param2);
_55 = ((frost$core$Object*) param2);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Tuple.frost:19:29
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:155
_58 = ($fn11) _55->$class->vtable[0];
_59 = _58(_55);
_60 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s12, _59);
_61 = ((frost$core$Object*) _60);
frost$core$Frost$ref$frost$core$Object$Q(_61);
_63 = ((frost$core$Object*) _60);
frost$core$Frost$unref$frost$core$Object$Q(_63);
_65 = ((frost$core$Object*) _59);
frost$core$Frost$unref$frost$core$Object$Q(_65);
_68 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_60, &$s13);
_69 = ((frost$core$Object*) param1);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Tuple.frost:19:29
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:155
_72 = ($fn14) _69->$class->vtable[0];
_73 = _72(_69);
_74 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_68, _73);
_75 = ((frost$core$Object*) _74);
frost$core$Frost$ref$frost$core$Object$Q(_75);
_77 = ((frost$core$Object*) _74);
frost$core$Frost$unref$frost$core$Object$Q(_77);
_79 = ((frost$core$Object*) _73);
frost$core$Frost$unref$frost$core$Object$Q(_79);
_82 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_74, &$s15);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, _54, _82);
_84 = ((frost$core$Object*) _82);
frost$core$Frost$unref$frost$core$Object$Q(_84);
_86 = ((frost$core$Object*) _74);
frost$core$Frost$unref$frost$core$Object$Q(_86);
_88 = ((frost$core$Object*) _68);
frost$core$Frost$unref$frost$core$Object$Q(_88);
_90 = ((frost$core$Object*) _60);
frost$core$Frost$unref$frost$core$Object$Q(_90);
goto block5;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Tuple.frost:21
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Tuple.frost:21:29
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
_96 = &param1->_subtypes;
_97 = *_96;
_98 = _97 != NULL;
_99 = (frost$core$Bit) {_98};
_100 = _99.value;
if (_100) goto block13; else goto block14;
block14:;
_102 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s16, _102, &$s17);
abort(); // unreachable
block13:;
_105 = _97;
_106 = ((frost$core$Object*) _105);
frost$core$Frost$ref$frost$core$Object$Q(_106);
_109 = _105;
_110 = *(&local0);
// begin inline call to function frost.core.UInt64.get_asInt():frost.core.Int from Tuple.frost:21:44
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/UInt64.stub:439
_113 = _110.value;
_114 = ((int64_t) _113);
_115 = (frost$core$Int) {_114};
_117 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T(_109, _115);
_118 = ((org$frostlang$frostc$Type*) _117);
_119 = ((frost$core$Object*) _118);
frost$core$Frost$ref$frost$core$Object$Q(_119);
_121 = _117;
frost$core$Frost$unref$frost$core$Object$Q(_121);
_123 = ((frost$core$Object*) _105);
frost$core$Frost$unref$frost$core$Object$Q(_123);
return _118;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Tuple.frost:24
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Tuple.frost:24:21
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
_129 = &param1->_subtypes;
_130 = *_129;
_131 = _130 != NULL;
_132 = (frost$core$Bit) {_131};
_133 = _132.value;
if (_133) goto block17; else goto block18;
block18:;
_135 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s18, _135, &$s19);
abort(); // unreachable
block17:;
_138 = _130;
_139 = ((frost$core$Object*) _138);
frost$core$Frost$ref$frost$core$Object$Q(_139);
_142 = ((frost$collections$CollectionView*) _138);
FROST_ASSERT(24 == sizeof(org$frostlang$frostc$expression$Tuple$_Closure2));
_143 = (org$frostlang$frostc$expression$Tuple$_Closure2*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$expression$Tuple$_Closure2$class);
org$frostlang$frostc$expression$Tuple$_Closure2$init$org$frostlang$frostc$Compiler(_143, param0);
_145 = ((frost$core$Int8*) org$frostlang$frostc$expression$Tuple$_Closure2$$anonymous1$org$frostlang$frostc$Type$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type);
FROST_ASSERT(32 == sizeof(frost$core$MutableMethod));
_146 = (frost$core$MutableMethod*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$MutableMethod$class);
_147 = ((frost$core$Object*) _143);
// begin inline call to frost.core.MutableMethod.init(pointer:frost.unsafe.Pointer<frost.core.Int8>, target:frost.core.Object?) from Tuple.frost:24:36
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableMethod.frost:32
_150 = &_146->pointer;
*_150 = _145;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableMethod.frost:33
frost$core$Frost$ref$frost$core$Object$Q(_147);
_154 = &_146->target;
_155 = *_154;
frost$core$Frost$unref$frost$core$Object$Q(_155);
_157 = &_146->target;
*_157 = _147;
_160 = _146;
_161 = _160;
ITable* $tmp21 = _142->$class->itable;
while ($tmp21->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp21 = $tmp21->next;
}
_162 = $tmp21->methods[4];
_163 = _162(_142, _161);
_164 = ((org$frostlang$frostc$Type*) _163);
_165 = ((frost$core$Object*) _164);
frost$core$Frost$ref$frost$core$Object$Q(_165);
_167 = _163;
frost$core$Frost$unref$frost$core$Object$Q(_167);
_169 = ((frost$core$Object*) _146);
frost$core$Frost$unref$frost$core$Object$Q(_169);
_171 = ((frost$core$Object*) _143);
frost$core$Frost$unref$frost$core$Object$Q(_171);
_173 = ((frost$core$Object*) _138);
frost$core$Frost$unref$frost$core$Object$Q(_173);
return _164;

}
frost$collections$CollectionView* org$frostlang$frostc$expression$Tuple$possibleTypes$org$frostlang$frostc$Compiler$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$R$frost$collections$CollectionView$LTorg$frostlang$frostc$Type$GT$Q(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$FixedArray* param1) {

frost$collections$Array* local0 = NULL;
org$frostlang$frostc$ASTNode* local1 = NULL;
org$frostlang$frostc$Type* local2 = NULL;
frost$collections$Array* _1;
frost$collections$Array* _2;
frost$core$Object* _5;
frost$collections$Array* _7;
frost$core$Object* _8;
frost$core$Object* _11;
frost$collections$Iterable* _14;
frost$collections$Iterable* _15;
$fn22 _16;
frost$collections$Iterator* _17;
frost$collections$Iterator* _18;
frost$collections$Iterator* _20;
$fn23 _21;
frost$core$Bit _22;
bool _23;
frost$collections$Iterator* _26;
$fn24 _27;
frost$core$Object* _28;
org$frostlang$frostc$ASTNode* _29;
frost$core$Object* _30;
org$frostlang$frostc$ASTNode* _32;
frost$core$Object* _33;
org$frostlang$frostc$ASTNode* _37;
org$frostlang$frostc$Type* _38;
frost$core$Object* _40;
org$frostlang$frostc$Type* _42;
frost$core$Object* _43;
frost$core$Object* _46;
org$frostlang$frostc$Type* _49;
bool _50;
frost$core$Bit _51;
bool _52;
frost$core$Object* _55;
org$frostlang$frostc$Type* _57;
frost$core$Object* _58;
frost$core$Object* _61;
org$frostlang$frostc$ASTNode* _63;
frost$core$Object* _64;
frost$core$Object* _67;
frost$collections$Array* _69;
frost$core$Object* _70;
frost$collections$Array* _75;
frost$collections$Array* _76;
org$frostlang$frostc$Type* _77;
bool _78;
frost$core$Bit _79;
bool _80;
frost$core$Int _82;
org$frostlang$frostc$Type* _85;
frost$core$Object* _86;
org$frostlang$frostc$Type* _88;
frost$core$Object* _89;
frost$core$Object* _92;
org$frostlang$frostc$ASTNode* _94;
frost$core$Object* _95;
frost$core$Object* _99;
frost$collections$Array* _102;
frost$collections$Array* _103;
frost$core$Int _104;
frost$collections$Array* _106;
frost$collections$Array* _107;
frost$collections$ListView* _108;
org$frostlang$frostc$Type* _109;
frost$core$Object* _110;
frost$collections$CollectionView* _112;
frost$core$Object* _113;
frost$core$Object* _115;
frost$core$Object* _117;
frost$collections$Array* _119;
frost$core$Object* _120;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Tuple.frost:29
FROST_ASSERT(40 == sizeof(frost$collections$Array));
_1 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
_2 = _1;
frost$collections$Array$init(_2);
*(&local0) = ((frost$collections$Array*) NULL);
_5 = ((frost$core$Object*) _1);
frost$core$Frost$ref$frost$core$Object$Q(_5);
_7 = *(&local0);
_8 = ((frost$core$Object*) _7);
frost$core$Frost$unref$frost$core$Object$Q(_8);
*(&local0) = _1;
_11 = ((frost$core$Object*) _1);
frost$core$Frost$unref$frost$core$Object$Q(_11);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Tuple.frost:30
_14 = ((frost$collections$Iterable*) param1);
_15 = _14;
ITable* $tmp25 = _15->$class->itable;
while ($tmp25->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp25 = $tmp25->next;
}
_16 = $tmp25->methods[0];
_17 = _16(_15);
_18 = _17;
goto block1;
block1:;
_20 = _18;
ITable* $tmp26 = _20->$class->itable;
while ($tmp26->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp26 = $tmp26->next;
}
_21 = $tmp26->methods[0];
_22 = _21(_20);
_23 = _22.value;
if (_23) goto block3; else goto block2;
block2:;
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
_26 = _18;
ITable* $tmp27 = _26->$class->itable;
while ($tmp27->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp27 = $tmp27->next;
}
_27 = $tmp27->methods[1];
_28 = _27(_26);
_29 = ((org$frostlang$frostc$ASTNode*) _28);
_30 = ((frost$core$Object*) _29);
frost$core$Frost$ref$frost$core$Object$Q(_30);
_32 = *(&local1);
_33 = ((frost$core$Object*) _32);
frost$core$Frost$unref$frost$core$Object$Q(_33);
*(&local1) = _29;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Tuple.frost:31
_37 = *(&local1);
_38 = org$frostlang$frostc$Compiler$preferredType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type$Q(param0, _37);
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
_40 = ((frost$core$Object*) _38);
frost$core$Frost$ref$frost$core$Object$Q(_40);
_42 = *(&local2);
_43 = ((frost$core$Object*) _42);
frost$core$Frost$unref$frost$core$Object$Q(_43);
*(&local2) = _38;
_46 = ((frost$core$Object*) _38);
frost$core$Frost$unref$frost$core$Object$Q(_46);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Tuple.frost:32
_49 = *(&local2);
_50 = _49 == NULL;
_51 = (frost$core$Bit) {_50};
_52 = _51.value;
if (_52) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Tuple.frost:33
_55 = ((frost$core$Object*) ((frost$collections$CollectionView*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_55);
_57 = *(&local2);
_58 = ((frost$core$Object*) _57);
frost$core$Frost$unref$frost$core$Object$Q(_58);
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
_61 = _28;
frost$core$Frost$unref$frost$core$Object$Q(_61);
_63 = *(&local1);
_64 = ((frost$core$Object*) _63);
frost$core$Frost$unref$frost$core$Object$Q(_64);
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
_67 = ((frost$core$Object*) _17);
frost$core$Frost$unref$frost$core$Object$Q(_67);
_69 = *(&local0);
_70 = ((frost$core$Object*) _69);
frost$core$Frost$unref$frost$core$Object$Q(_70);
*(&local0) = ((frost$collections$Array*) NULL);
return ((frost$collections$CollectionView*) NULL);
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Tuple.frost:35
_75 = *(&local0);
_76 = _75;
_77 = *(&local2);
_78 = _77 != NULL;
_79 = (frost$core$Bit) {_78};
_80 = _79.value;
if (_80) goto block6; else goto block7;
block7:;
_82 = (frost$core$Int) {35u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s28, _82, &$s29);
abort(); // unreachable
block6:;
_85 = _77;
_86 = ((frost$core$Object*) _85);
frost$collections$Array$add$frost$collections$Array$T(_76, _86);
_88 = *(&local2);
_89 = ((frost$core$Object*) _88);
frost$core$Frost$unref$frost$core$Object$Q(_89);
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
_92 = _28;
frost$core$Frost$unref$frost$core$Object$Q(_92);
_94 = *(&local1);
_95 = ((frost$core$Object*) _94);
frost$core$Frost$unref$frost$core$Object$Q(_95);
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block3:;
_99 = ((frost$core$Object*) _17);
frost$core$Frost$unref$frost$core$Object$Q(_99);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Tuple.frost:37
FROST_ASSERT(40 == sizeof(frost$collections$Array));
_102 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
_103 = _102;
_104 = (frost$core$Int) {1u};
frost$collections$Array$init$frost$core$Int(_103, _104);
_106 = _102;
_107 = *(&local0);
_108 = ((frost$collections$ListView*) _107);
_109 = org$frostlang$frostc$Type$tuple$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type(_108);
_110 = ((frost$core$Object*) _109);
frost$collections$Array$add$frost$collections$Array$T(_106, _110);
_112 = ((frost$collections$CollectionView*) _102);
_113 = ((frost$core$Object*) _112);
frost$core$Frost$ref$frost$core$Object$Q(_113);
_115 = ((frost$core$Object*) _109);
frost$core$Frost$unref$frost$core$Object$Q(_115);
_117 = ((frost$core$Object*) _102);
frost$core$Frost$unref$frost$core$Object$Q(_117);
_119 = *(&local0);
_120 = ((frost$core$Object*) _119);
frost$core$Frost$unref$frost$core$Object$Q(_120);
*(&local0) = ((frost$collections$Array*) NULL);
return _112;

}
org$frostlang$frostc$Pair* org$frostlang$frostc$expression$Tuple$coercionCost$org$frostlang$frostc$Compiler$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Type$R$org$frostlang$frostc$Pair$LTorg$frostlang$frostc$Type$Cfrost$core$Int$GT$Q(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$FixedArray* param1, org$frostlang$frostc$Type* param2) {

org$frostlang$frostc$Type$Kind local0;
org$frostlang$frostc$Type$Kind local1;
frost$core$Int local2;
frost$core$Int local3;
org$frostlang$frostc$Pair* local4 = NULL;
frost$collections$CollectionView* local5 = NULL;
org$frostlang$frostc$Type$Kind* _1;
org$frostlang$frostc$Type$Kind _2;
frost$core$Equatable* _3;
frost$core$Equatable* _4;
frost$core$Int _5;
frost$core$Int* _8;
org$frostlang$frostc$Type$Kind _10;
org$frostlang$frostc$Type$Kind _13;
frost$core$Equatable* _14;
$fn30 _15;
frost$core$Bit _16;
bool _17;
frost$core$Object* _18;
frost$core$Object* _20;
org$frostlang$frostc$FixedArray** _25;
org$frostlang$frostc$FixedArray* _26;
bool _27;
frost$core$Bit _28;
bool _29;
frost$core$Int _31;
org$frostlang$frostc$FixedArray* _34;
frost$core$Object* _35;
frost$collections$CollectionView* _38;
$fn31 _39;
frost$core$Int _40;
frost$collections$CollectionView* _41;
$fn32 _42;
frost$core$Int _43;
int64_t _46;
int64_t _47;
bool _48;
frost$core$Bit _49;
bool _51;
frost$core$Object* _52;
frost$core$Int _56;
frost$core$Int _59;
frost$collections$CollectionView* _60;
$fn33 _61;
frost$core$Int _62;
frost$core$Bit _63;
frost$core$Range$LTfrost$core$Int$GT _64;
frost$core$Int _65;
frost$core$Int _67;
frost$core$Bit _68;
bool _69;
frost$core$Int _70;
int64_t _72;
int64_t _73;
bool _74;
frost$core$Bit _75;
bool _76;
int64_t _78;
int64_t _79;
bool _80;
frost$core$Bit _81;
bool _82;
org$frostlang$frostc$FixedArray* _85;
frost$core$Int _86;
frost$core$Object* _87;
org$frostlang$frostc$ASTNode* _88;
org$frostlang$frostc$FixedArray** _91;
org$frostlang$frostc$FixedArray* _92;
bool _93;
frost$core$Bit _94;
bool _95;
frost$core$Int _97;
org$frostlang$frostc$FixedArray* _100;
frost$core$Object* _101;
org$frostlang$frostc$FixedArray* _104;
frost$core$Int _105;
frost$core$Object* _106;
org$frostlang$frostc$Type* _107;
org$frostlang$frostc$Pair* _108;
frost$core$Object* _110;
org$frostlang$frostc$Pair* _112;
frost$core$Object* _113;
frost$core$Object* _116;
frost$core$Object* _118;
frost$core$Object* _120;
frost$core$Object* _122;
org$frostlang$frostc$Pair* _125;
bool _126;
frost$core$Bit _127;
bool _128;
frost$core$Object* _131;
org$frostlang$frostc$Pair* _133;
frost$core$Object* _134;
frost$core$Int _139;
org$frostlang$frostc$Pair* _140;
bool _141;
frost$core$Bit _142;
bool _143;
frost$core$Int _145;
org$frostlang$frostc$Pair* _148;
frost$core$Object** _149;
frost$core$Object* _150;
frost$core$Int _151;
int64_t _152;
int64_t _153;
int64_t _154;
frost$core$Int _155;
org$frostlang$frostc$Pair* _157;
frost$core$Object* _158;
frost$core$Int _162;
int64_t _163;
int64_t _164;
int64_t _165;
frost$core$Int _166;
int64_t _168;
int64_t _169;
bool _170;
frost$core$Bit _171;
bool _172;
int64_t _174;
int64_t _175;
bool _176;
frost$core$Bit _177;
bool _178;
int64_t _180;
int64_t _181;
int64_t _182;
frost$core$Int _183;
org$frostlang$frostc$Pair* _187;
org$frostlang$frostc$Pair* _188;
frost$core$Object* _189;
frost$core$Int _190;
frost$core$Object* _191;
org$frostlang$frostc$Pair* _193;
frost$core$Object* _194;
frost$core$Object* _196;
frost$core$Object* _198;
frost$collections$CollectionView* _202;
frost$core$Object* _204;
frost$collections$CollectionView* _206;
frost$core$Object* _207;
frost$core$Object* _210;
frost$collections$CollectionView* _213;
bool _214;
frost$core$Bit _215;
bool _216;
frost$core$Object* _219;
frost$collections$CollectionView* _221;
frost$core$Object* _222;
frost$collections$CollectionView* _227;
bool _228;
frost$core$Bit _229;
bool _230;
frost$core$Int _232;
frost$collections$CollectionView* _235;
$fn34 _236;
frost$core$Int _237;
frost$core$Int _238;
int64_t _241;
int64_t _242;
bool _243;
frost$core$Bit _244;
bool _246;
frost$core$Int _248;
frost$collections$CollectionView* _252;
bool _253;
frost$core$Bit _254;
bool _255;
frost$core$Int _257;
frost$collections$Iterable* _260;
$fn35 _261;
frost$collections$Iterator* _262;
frost$collections$Iterator* _263;
frost$collections$Iterator* _264;
$fn36 _265;
frost$core$Object* _266;
org$frostlang$frostc$Type* _267;
org$frostlang$frostc$Pair* _268;
frost$core$Object* _269;
frost$core$Object* _271;
frost$core$Object* _273;
frost$core$Object* _275;
frost$collections$CollectionView* _277;
frost$core$Object* _278;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Tuple.frost:43
_1 = &param2->typeKind;
_2 = *_1;
org$frostlang$frostc$Type$Kind$wrapper* $tmp37;
$tmp37 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp37->value = _2;
_3 = ((frost$core$Equatable*) $tmp37);
_4 = _3;
_5 = (frost$core$Int) {10u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Tuple.frost:43:39
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_8 = &(&local1)->$rawValue;
*_8 = _5;
_10 = *(&local1);
*(&local0) = _10;
_13 = *(&local0);
org$frostlang$frostc$Type$Kind$wrapper* $tmp38;
$tmp38 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp38->value = _13;
_14 = ((frost$core$Equatable*) $tmp38);
ITable* $tmp39 = _4->$class->itable;
while ($tmp39->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp39 = $tmp39->next;
}
_15 = $tmp39->methods[0];
_16 = _15(_4, _14);
_17 = _16.value;
_18 = ((frost$core$Object*) _14);
frost$core$Frost$unref$frost$core$Object$Q(_18);
_20 = ((frost$core$Object*) _3);
frost$core$Frost$unref$frost$core$Object$Q(_20);
if (_17) goto block3; else goto block2;
block3:;
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Tuple.frost:43:54
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
_25 = &param2->_subtypes;
_26 = *_25;
_27 = _26 != NULL;
_28 = (frost$core$Bit) {_27};
_29 = _28.value;
if (_29) goto block6; else goto block7;
block7:;
_31 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s40, _31, &$s41);
abort(); // unreachable
block6:;
_34 = _26;
_35 = ((frost$core$Object*) _34);
frost$core$Frost$ref$frost$core$Object$Q(_35);
_38 = ((frost$collections$CollectionView*) _34);
ITable* $tmp42 = _38->$class->itable;
while ($tmp42->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp42 = $tmp42->next;
}
_39 = $tmp42->methods[0];
_40 = _39(_38);
_41 = ((frost$collections$CollectionView*) param1);
ITable* $tmp43 = _41->$class->itable;
while ($tmp43->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp43 = $tmp43->next;
}
_42 = $tmp43->methods[0];
_43 = _42(_41);
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Tuple.frost:43:70
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int.stub:342
_46 = _40.value;
_47 = _43.value;
_48 = _46 == _47;
_49 = (frost$core$Bit) {_48};
_51 = _49.value;
_52 = ((frost$core$Object*) _34);
frost$core$Frost$unref$frost$core$Object$Q(_52);
if (_51) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Tuple.frost:44
_56 = (frost$core$Int) {0u};
*(&local2) = _56;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Tuple.frost:45
_59 = (frost$core$Int) {0u};
_60 = ((frost$collections$CollectionView*) param1);
ITable* $tmp44 = _60->$class->itable;
while ($tmp44->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp44 = $tmp44->next;
}
_61 = $tmp44->methods[0];
_62 = _61(_60);
_63 = (frost$core$Bit) {false};
_64 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit(_59, _62, _63);
_65 = _64.min;
*(&local3) = _65;
_67 = _64.max;
_68 = _64.inclusive;
_69 = _68.value;
_70 = (frost$core$Int) {1u};
if (_69) goto block12; else goto block13;
block12:;
_72 = _65.value;
_73 = _67.value;
_74 = _72 <= _73;
_75 = (frost$core$Bit) {_74};
_76 = _75.value;
if (_76) goto block9; else goto block10;
block13:;
_78 = _65.value;
_79 = _67.value;
_80 = _78 < _79;
_81 = (frost$core$Bit) {_80};
_82 = _81.value;
if (_82) goto block9; else goto block10;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Tuple.frost:46
_85 = param1;
_86 = *(&local3);
_87 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T(_85, _86);
_88 = ((org$frostlang$frostc$ASTNode*) _87);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Tuple.frost:46:66
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
_91 = &param2->_subtypes;
_92 = *_91;
_93 = _92 != NULL;
_94 = (frost$core$Bit) {_93};
_95 = _94.value;
if (_95) goto block15; else goto block16;
block16:;
_97 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s45, _97, &$s46);
abort(); // unreachable
block15:;
_100 = _92;
_101 = ((frost$core$Object*) _100);
frost$core$Frost$ref$frost$core$Object$Q(_101);
_104 = _100;
_105 = *(&local3);
_106 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T(_104, _105);
_107 = ((org$frostlang$frostc$Type*) _106);
_108 = org$frostlang$frostc$Compiler$coercionCost$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Type$R$org$frostlang$frostc$Pair$LTorg$frostlang$frostc$Type$Cfrost$core$Int$GT$Q(param0, _88, _107);
*(&local4) = ((org$frostlang$frostc$Pair*) NULL);
_110 = ((frost$core$Object*) _108);
frost$core$Frost$ref$frost$core$Object$Q(_110);
_112 = *(&local4);
_113 = ((frost$core$Object*) _112);
frost$core$Frost$unref$frost$core$Object$Q(_113);
*(&local4) = _108;
_116 = ((frost$core$Object*) _108);
frost$core$Frost$unref$frost$core$Object$Q(_116);
_118 = _106;
frost$core$Frost$unref$frost$core$Object$Q(_118);
_120 = ((frost$core$Object*) _100);
frost$core$Frost$unref$frost$core$Object$Q(_120);
_122 = _87;
frost$core$Frost$unref$frost$core$Object$Q(_122);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Tuple.frost:47
_125 = *(&local4);
_126 = _125 == NULL;
_127 = (frost$core$Bit) {_126};
_128 = _127.value;
if (_128) goto block17; else goto block18;
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Tuple.frost:48
_131 = ((frost$core$Object*) ((org$frostlang$frostc$Pair*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_131);
_133 = *(&local4);
_134 = ((frost$core$Object*) _133);
frost$core$Frost$unref$frost$core$Object$Q(_134);
*(&local4) = ((org$frostlang$frostc$Pair*) NULL);
return ((org$frostlang$frostc$Pair*) NULL);
block18:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Tuple.frost:50
_139 = *(&local2);
_140 = *(&local4);
_141 = _140 != NULL;
_142 = (frost$core$Bit) {_141};
_143 = _142.value;
if (_143) goto block19; else goto block20;
block20:;
_145 = (frost$core$Int) {50u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s47, _145, &$s48);
abort(); // unreachable
block19:;
_148 = _140;
_149 = &_148->second;
_150 = *_149;
_151 = ((frost$core$Int$wrapper*) _150)->value;
_152 = _139.value;
_153 = _151.value;
_154 = _152 + _153;
_155 = (frost$core$Int) {_154};
*(&local2) = _155;
_157 = *(&local4);
_158 = ((frost$core$Object*) _157);
frost$core$Frost$unref$frost$core$Object$Q(_158);
*(&local4) = ((org$frostlang$frostc$Pair*) NULL);
_162 = *(&local3);
_163 = _67.value;
_164 = _162.value;
_165 = _163 - _164;
_166 = (frost$core$Int) {_165};
if (_69) goto block22; else goto block23;
block22:;
_168 = _166.value;
_169 = _70.value;
_170 = _168 >= _169;
_171 = (frost$core$Bit) {_170};
_172 = _171.value;
if (_172) goto block21; else goto block10;
block23:;
_174 = _166.value;
_175 = _70.value;
_176 = _174 > _175;
_177 = (frost$core$Bit) {_176};
_178 = _177.value;
if (_178) goto block21; else goto block10;
block21:;
_180 = _162.value;
_181 = _70.value;
_182 = _180 + _181;
_183 = (frost$core$Int) {_182};
*(&local3) = _183;
goto block9;
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Tuple.frost:52
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Pair));
_187 = (org$frostlang$frostc$Pair*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Pair$class);
_188 = _187;
_189 = ((frost$core$Object*) param2);
_190 = *(&local2);
frost$core$Int$wrapper* $tmp49;
$tmp49 = (frost$core$Int$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp49->value = _190;
_191 = ((frost$core$Object*) $tmp49);
org$frostlang$frostc$Pair$init$org$frostlang$frostc$Pair$A$org$frostlang$frostc$Pair$B(_188, _189, _191);
_193 = _187;
_194 = ((frost$core$Object*) _193);
frost$core$Frost$ref$frost$core$Object$Q(_194);
_196 = _191;
frost$core$Frost$unref$frost$core$Object$Q(_196);
_198 = ((frost$core$Object*) _187);
frost$core$Frost$unref$frost$core$Object$Q(_198);
return _193;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Tuple.frost:54
_202 = org$frostlang$frostc$expression$Tuple$possibleTypes$org$frostlang$frostc$Compiler$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$R$frost$collections$CollectionView$LTorg$frostlang$frostc$Type$GT$Q(param0, param1);
*(&local5) = ((frost$collections$CollectionView*) NULL);
_204 = ((frost$core$Object*) _202);
frost$core$Frost$ref$frost$core$Object$Q(_204);
_206 = *(&local5);
_207 = ((frost$core$Object*) _206);
frost$core$Frost$unref$frost$core$Object$Q(_207);
*(&local5) = _202;
_210 = ((frost$core$Object*) _202);
frost$core$Frost$unref$frost$core$Object$Q(_210);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Tuple.frost:55
_213 = *(&local5);
_214 = _213 == NULL;
_215 = (frost$core$Bit) {_214};
_216 = _215.value;
if (_216) goto block24; else goto block25;
block24:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Tuple.frost:56
_219 = ((frost$core$Object*) ((org$frostlang$frostc$Pair*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_219);
_221 = *(&local5);
_222 = ((frost$core$Object*) _221);
frost$core$Frost$unref$frost$core$Object$Q(_222);
*(&local5) = ((frost$collections$CollectionView*) NULL);
return ((org$frostlang$frostc$Pair*) NULL);
block25:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Tuple.frost:58
_227 = *(&local5);
_228 = _227 != NULL;
_229 = (frost$core$Bit) {_228};
_230 = _229.value;
if (_230) goto block26; else goto block27;
block27:;
_232 = (frost$core$Int) {58u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s50, _232, &$s51);
abort(); // unreachable
block26:;
_235 = _227;
ITable* $tmp52 = _235->$class->itable;
while ($tmp52->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp52 = $tmp52->next;
}
_236 = $tmp52->methods[0];
_237 = _236(_235);
_238 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Tuple.frost:58:27
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int.stub:342
_241 = _237.value;
_242 = _238.value;
_243 = _241 == _242;
_244 = (frost$core$Bit) {_243};
_246 = _244.value;
if (_246) goto block29; else goto block30;
block30:;
_248 = (frost$core$Int) {58u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s53, _248);
abort(); // unreachable
block29:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Tuple.frost:59
_252 = *(&local5);
_253 = _252 != NULL;
_254 = (frost$core$Bit) {_253};
_255 = _254.value;
if (_255) goto block31; else goto block32;
block32:;
_257 = (frost$core$Int) {59u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s54, _257, &$s55);
abort(); // unreachable
block31:;
_260 = ((frost$collections$Iterable*) _252);
ITable* $tmp56 = _260->$class->itable;
while ($tmp56->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp56 = $tmp56->next;
}
_261 = $tmp56->methods[0];
_262 = _261(_260);
_263 = _262;
_264 = _263;
ITable* $tmp57 = _264->$class->itable;
while ($tmp57->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp57 = $tmp57->next;
}
_265 = $tmp57->methods[1];
_266 = _265(_264);
_267 = ((org$frostlang$frostc$Type*) _266);
_268 = org$frostlang$frostc$Compiler$coercionCost$org$frostlang$frostc$Type$org$frostlang$frostc$Type$R$org$frostlang$frostc$Pair$LTorg$frostlang$frostc$Type$Cfrost$core$Int$GT$Q(param0, _267, param2);
_269 = ((frost$core$Object*) _268);
frost$core$Frost$ref$frost$core$Object$Q(_269);
_271 = ((frost$core$Object*) _268);
frost$core$Frost$unref$frost$core$Object$Q(_271);
_273 = _266;
frost$core$Frost$unref$frost$core$Object$Q(_273);
_275 = ((frost$core$Object*) _262);
frost$core$Frost$unref$frost$core$Object$Q(_275);
_277 = *(&local5);
_278 = ((frost$core$Object*) _277);
frost$core$Frost$unref$frost$core$Object$Q(_278);
*(&local5) = ((frost$collections$CollectionView*) NULL);
return _268;

}
org$frostlang$frostc$IR$Value* org$frostlang$frostc$expression$Tuple$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Position param1, org$frostlang$frostc$FixedArray* param2, org$frostlang$frostc$Compiler$TypeContext* param3) {

org$frostlang$frostc$Type* local0 = NULL;
frost$core$Bit local1;
org$frostlang$frostc$Type$Kind local2;
org$frostlang$frostc$Type$Kind local3;
org$frostlang$frostc$Type* local4 = NULL;
org$frostlang$frostc$Type* local5 = NULL;
org$frostlang$frostc$IR$Value* local6 = NULL;
frost$core$Int* _1;
frost$core$Int _2;
frost$core$Int _3;
int64_t _6;
int64_t _7;
bool _8;
frost$core$Bit _9;
bool _11;
org$frostlang$frostc$Type** _13;
org$frostlang$frostc$Type* _14;
frost$core$Object* _16;
org$frostlang$frostc$Type* _18;
frost$core$Object* _19;
frost$core$Bit* _22;
frost$core$Bit _23;
org$frostlang$frostc$Type* _26;
org$frostlang$frostc$Type$Kind* _29;
org$frostlang$frostc$Type$Kind _30;
frost$core$Equatable* _31;
frost$core$Equatable* _32;
frost$core$Int _33;
frost$core$Int* _36;
org$frostlang$frostc$Type$Kind _38;
org$frostlang$frostc$Type$Kind _41;
frost$core$Equatable* _42;
$fn58 _43;
frost$core$Bit _44;
frost$core$Object* _45;
frost$core$Object* _47;
bool _50;
org$frostlang$frostc$Type* _52;
org$frostlang$frostc$FixedArray** _55;
org$frostlang$frostc$FixedArray* _56;
bool _57;
frost$core$Bit _58;
bool _59;
frost$core$Int _61;
org$frostlang$frostc$FixedArray* _64;
frost$core$Object* _65;
frost$collections$CollectionView* _68;
$fn59 _69;
frost$core$Int _70;
frost$collections$CollectionView* _71;
$fn60 _72;
frost$core$Int _73;
int64_t _76;
int64_t _77;
bool _78;
frost$core$Bit _79;
bool _81;
frost$core$Object* _82;
org$frostlang$frostc$Type* _86;
org$frostlang$frostc$ClassDecl* _87;
bool _88;
frost$core$Bit _89;
bool _90;
frost$core$Int _92;
org$frostlang$frostc$ClassDecl* _95;
org$frostlang$frostc$Type** _96;
org$frostlang$frostc$Type* _97;
org$frostlang$frostc$Type* _98;
org$frostlang$frostc$FixedArray** _101;
org$frostlang$frostc$FixedArray* _102;
bool _103;
frost$core$Bit _104;
bool _105;
frost$core$Int _107;
org$frostlang$frostc$FixedArray* _110;
frost$core$Object* _111;
frost$collections$ListView* _114;
org$frostlang$frostc$Type* _115;
frost$core$Object* _117;
org$frostlang$frostc$Type* _119;
frost$core$Object* _120;
frost$core$Object* _123;
frost$core$Object* _125;
frost$core$Object* _127;
org$frostlang$frostc$Type* _130;
org$frostlang$frostc$IR$Value* _133;
frost$core$Int _134;
org$frostlang$frostc$Type** _137;
org$frostlang$frostc$Type* _138;
frost$collections$Array* _139;
frost$collections$Array* _140;
frost$core$Int _141;
frost$collections$Array* _143;
frost$core$Object* _144;
frost$collections$ListView* _146;
org$frostlang$frostc$Type* _147;
frost$core$Object* _148;
frost$core$Object* _150;
frost$core$Object* _152;
frost$core$Object* _156;
frost$core$Object* _158;
frost$core$Object* _160;
frost$collections$ListView* _163;
org$frostlang$frostc$Compiler$TypeContext* _164;
frost$core$Int _165;
org$frostlang$frostc$IR$Value* _167;
org$frostlang$frostc$Type* _168;
org$frostlang$frostc$IR$Value* _169;
frost$core$Object* _170;
frost$core$Object* _172;
frost$core$Object* _174;
frost$core$Object* _176;
frost$core$Object* _178;
org$frostlang$frostc$Type* _180;
frost$core$Object* _181;
org$frostlang$frostc$Type* _184;
frost$core$Object* _185;
org$frostlang$frostc$Type* _189;
frost$core$Object* _190;
org$frostlang$frostc$ASTNode* _195;
frost$core$Int _196;
org$frostlang$frostc$Type* _198;
frost$core$Object* _200;
org$frostlang$frostc$Type* _202;
frost$core$Object* _203;
frost$core$Object* _206;
frost$core$Object* _208;
org$frostlang$frostc$Type* _211;
bool _212;
frost$core$Bit _213;
bool _214;
frost$collections$CollectionView* _217;
org$frostlang$frostc$expression$Tuple$_Closure4* _218;
frost$core$Int8* _220;
frost$core$MutableMethod* _221;
frost$core$Object* _222;
frost$core$Int8** _225;
frost$core$Object** _229;
frost$core$Object* _230;
frost$core$Object** _232;
frost$core$MutableMethod* _235;
frost$core$MutableMethod* _236;
$fn61 _237;
frost$collections$Array* _238;
frost$collections$Array* _239;
frost$collections$ListView* _240;
org$frostlang$frostc$Type* _241;
org$frostlang$frostc$Type* _242;
frost$core$Object* _243;
org$frostlang$frostc$Type* _245;
frost$core$Object* _246;
frost$core$Object* _249;
frost$core$Object* _251;
frost$core$Object* _253;
frost$core$Object* _255;
org$frostlang$frostc$Compiler$TypeContext* _259;
frost$core$Int _260;
org$frostlang$frostc$Type* _261;
bool _262;
frost$core$Bit _263;
bool _264;
frost$core$Int _266;
org$frostlang$frostc$Type* _269;
frost$core$Bit _270;
org$frostlang$frostc$IR$Value* _272;
frost$core$Object* _274;
org$frostlang$frostc$IR$Value* _276;
frost$core$Object* _277;
frost$core$Object* _280;
frost$core$Object* _282;
org$frostlang$frostc$IR$Value* _285;
bool _286;
frost$core$Bit _287;
bool _288;
frost$core$Object* _291;
org$frostlang$frostc$IR$Value* _293;
frost$core$Object* _294;
org$frostlang$frostc$Type* _297;
frost$core$Object* _298;
org$frostlang$frostc$IR$Value* _303;
org$frostlang$frostc$IR$Value* _304;
frost$core$Object* _305;
frost$core$Object* _307;
org$frostlang$frostc$IR$Value* _309;
frost$core$Object* _310;
org$frostlang$frostc$Type* _313;
frost$core$Object* _314;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Tuple.frost:65
_1 = &param3->$rawValue;
_2 = *_1;
_3 = (frost$core$Int) {3u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Tuple.frost:66:29
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int.stub:342
_6 = _2.value;
_7 = _3.value;
_8 = _6 == _7;
_9 = (frost$core$Bit) {_8};
_11 = _9.value;
if (_11) goto block2; else goto block1;
block2:;
_13 = (org$frostlang$frostc$Type**) (param3->$data + 0);
_14 = *_13;
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
_16 = ((frost$core$Object*) _14);
frost$core$Frost$ref$frost$core$Object$Q(_16);
_18 = *(&local0);
_19 = ((frost$core$Object*) _18);
frost$core$Frost$unref$frost$core$Object$Q(_19);
*(&local0) = _14;
_22 = (frost$core$Bit*) (param3->$data + 8);
_23 = *_22;
*(&local1) = _23;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Tuple.frost:67
_26 = *(&local0);
// begin inline call to function org.frostlang.frostc.Type.get_isTuple():frost.core.Bit from Tuple.frost:67:21
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:373
_29 = &_26->typeKind;
_30 = *_29;
org$frostlang$frostc$Type$Kind$wrapper* $tmp62;
$tmp62 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp62->value = _30;
_31 = ((frost$core$Equatable*) $tmp62);
_32 = _31;
_33 = (frost$core$Int) {10u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:373:31
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_36 = &(&local3)->$rawValue;
*_36 = _33;
_38 = *(&local3);
*(&local2) = _38;
_41 = *(&local2);
org$frostlang$frostc$Type$Kind$wrapper* $tmp63;
$tmp63 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp63->value = _41;
_42 = ((frost$core$Equatable*) $tmp63);
ITable* $tmp64 = _32->$class->itable;
while ($tmp64->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp64 = $tmp64->next;
}
_43 = $tmp64->methods[0];
_44 = _43(_32, _42);
_45 = ((frost$core$Object*) _42);
frost$core$Frost$unref$frost$core$Object$Q(_45);
_47 = ((frost$core$Object*) _31);
frost$core$Frost$unref$frost$core$Object$Q(_47);
_50 = _44.value;
if (_50) goto block6; else goto block5;
block6:;
_52 = *(&local0);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Tuple.frost:67:33
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
_55 = &_52->_subtypes;
_56 = *_55;
_57 = _56 != NULL;
_58 = (frost$core$Bit) {_57};
_59 = _58.value;
if (_59) goto block10; else goto block11;
block11:;
_61 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s65, _61, &$s66);
abort(); // unreachable
block10:;
_64 = _56;
_65 = ((frost$core$Object*) _64);
frost$core$Frost$ref$frost$core$Object$Q(_65);
_68 = ((frost$collections$CollectionView*) _64);
ITable* $tmp67 = _68->$class->itable;
while ($tmp67->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp67 = $tmp67->next;
}
_69 = $tmp67->methods[0];
_70 = _69(_68);
_71 = ((frost$collections$CollectionView*) param2);
ITable* $tmp68 = _71->$class->itable;
while ($tmp68->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp68 = $tmp68->next;
}
_72 = $tmp68->methods[0];
_73 = _72(_71);
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Tuple.frost:67:49
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int.stub:342
_76 = _70.value;
_77 = _73.value;
_78 = _76 == _77;
_79 = (frost$core$Bit) {_78};
_81 = _79.value;
_82 = ((frost$core$Object*) _64);
frost$core$Frost$unref$frost$core$Object$Q(_82);
if (_81) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Tuple.frost:68
_86 = *(&local0);
_87 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(param0, _86);
_88 = _87 != NULL;
_89 = (frost$core$Bit) {_88};
_90 = _89.value;
if (_90) goto block13; else goto block14;
block14:;
_92 = (frost$core$Int) {68u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s69, _92, &$s70);
abort(); // unreachable
block13:;
_95 = _87;
_96 = &_95->type;
_97 = *_96;
_98 = *(&local0);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Tuple.frost:68:79
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
_101 = &_98->_subtypes;
_102 = *_101;
_103 = _102 != NULL;
_104 = (frost$core$Bit) {_103};
_105 = _104.value;
if (_105) goto block16; else goto block17;
block17:;
_107 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s71, _107, &$s72);
abort(); // unreachable
block16:;
_110 = _102;
_111 = ((frost$core$Object*) _110);
frost$core$Frost$ref$frost$core$Object$Q(_111);
_114 = ((frost$collections$ListView*) _110);
_115 = org$frostlang$frostc$Type$generic$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type(_97, _114);
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
_117 = ((frost$core$Object*) _115);
frost$core$Frost$ref$frost$core$Object$Q(_117);
_119 = *(&local4);
_120 = ((frost$core$Object*) _119);
frost$core$Frost$unref$frost$core$Object$Q(_120);
*(&local4) = _115;
_123 = ((frost$core$Object*) _115);
frost$core$Frost$unref$frost$core$Object$Q(_123);
_125 = ((frost$core$Object*) _110);
frost$core$Frost$unref$frost$core$Object$Q(_125);
_127 = ((frost$core$Object*) _87);
frost$core$Frost$unref$frost$core$Object$Q(_127);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Tuple.frost:69
_130 = *(&local4);
// begin inline call to function org.frostlang.frostc.Compiler.literalType(t:org.frostlang.frostc.Type):org.frostlang.frostc.IR.Value from Tuple.frost:70:49
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:3712
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
_133 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
_134 = (frost$core$Int) {14u};
// begin inline call to method org.frostlang.frostc.Type.ClassLiteral(compiler:org.frostlang.frostc.Compiler, t:org.frostlang.frostc.Type):org.frostlang.frostc.Type from Compiler.frost:3712:50
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:272
_137 = &param0->CLASS_TYPE;
_138 = *_137;
FROST_ASSERT(40 == sizeof(frost$collections$Array));
_139 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
_140 = _139;
_141 = (frost$core$Int) {1u};
frost$collections$Array$init$frost$core$Int(_140, _141);
_143 = _139;
_144 = ((frost$core$Object*) _130);
frost$collections$Array$add$frost$collections$Array$T(_143, _144);
_146 = ((frost$collections$ListView*) _139);
_147 = org$frostlang$frostc$Type$generic$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type(_138, _146);
_148 = ((frost$core$Object*) _147);
frost$core$Frost$ref$frost$core$Object$Q(_148);
_150 = ((frost$core$Object*) _147);
frost$core$Frost$unref$frost$core$Object$Q(_150);
_152 = ((frost$core$Object*) _139);
frost$core$Frost$unref$frost$core$Object$Q(_152);
org$frostlang$frostc$IR$Value$init$frost$core$Int$org$frostlang$frostc$Type$org$frostlang$frostc$Type(_133, _134, _130, _147);
_156 = ((frost$core$Object*) _133);
frost$core$Frost$ref$frost$core$Object$Q(_156);
_158 = ((frost$core$Object*) _147);
frost$core$Frost$unref$frost$core$Object$Q(_158);
_160 = ((frost$core$Object*) _133);
frost$core$Frost$unref$frost$core$Object$Q(_160);
_163 = ((frost$collections$ListView*) param2);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
_164 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
_165 = (frost$core$Int) {0u};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int(_164, _165);
_167 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, _133, _163, _164);
_168 = *(&local0);
_169 = org$frostlang$frostc$Compiler$cast$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, param1, _167, _168);
_170 = ((frost$core$Object*) _169);
frost$core$Frost$ref$frost$core$Object$Q(_170);
_172 = ((frost$core$Object*) _169);
frost$core$Frost$unref$frost$core$Object$Q(_172);
_174 = ((frost$core$Object*) _167);
frost$core$Frost$unref$frost$core$Object$Q(_174);
_176 = ((frost$core$Object*) _164);
frost$core$Frost$unref$frost$core$Object$Q(_176);
_178 = ((frost$core$Object*) _133);
frost$core$Frost$unref$frost$core$Object$Q(_178);
_180 = *(&local4);
_181 = ((frost$core$Object*) _180);
frost$core$Frost$unref$frost$core$Object$Q(_181);
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
_184 = *(&local0);
_185 = ((frost$core$Object*) _184);
frost$core$Frost$unref$frost$core$Object$Q(_185);
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return _169;
block5:;
_189 = *(&local0);
_190 = ((frost$core$Object*) _189);
frost$core$Frost$unref$frost$core$Object$Q(_190);
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
goto block1;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Tuple.frost:74
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
_195 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
_196 = (frost$core$Int) {43u};
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT(_195, _196, param1, param2);
_198 = org$frostlang$frostc$Compiler$preferredType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type$Q(param0, _195);
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
_200 = ((frost$core$Object*) _198);
frost$core$Frost$ref$frost$core$Object$Q(_200);
_202 = *(&local5);
_203 = ((frost$core$Object*) _202);
frost$core$Frost$unref$frost$core$Object$Q(_203);
*(&local5) = _198;
_206 = ((frost$core$Object*) _198);
frost$core$Frost$unref$frost$core$Object$Q(_206);
_208 = ((frost$core$Object*) _195);
frost$core$Frost$unref$frost$core$Object$Q(_208);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Tuple.frost:75
_211 = *(&local5);
_212 = _211 == NULL;
_213 = (frost$core$Bit) {_212};
_214 = _213.value;
if (_214) goto block20; else goto block21;
block20:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Tuple.frost:76
_217 = ((frost$collections$CollectionView*) param2);
FROST_ASSERT(24 == sizeof(org$frostlang$frostc$expression$Tuple$_Closure4));
_218 = (org$frostlang$frostc$expression$Tuple$_Closure4*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$expression$Tuple$_Closure4$class);
org$frostlang$frostc$expression$Tuple$_Closure4$init$org$frostlang$frostc$Compiler(_218, param0);
_220 = ((frost$core$Int8*) org$frostlang$frostc$expression$Tuple$_Closure4$$anonymous3$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type);
FROST_ASSERT(32 == sizeof(frost$core$MutableMethod));
_221 = (frost$core$MutableMethod*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$MutableMethod$class);
_222 = ((frost$core$Object*) _218);
// begin inline call to frost.core.MutableMethod.init(pointer:frost.unsafe.Pointer<frost.core.Int8>, target:frost.core.Object?) from Tuple.frost:76:41
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableMethod.frost:32
_225 = &_221->pointer;
*_225 = _220;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableMethod.frost:33
frost$core$Frost$ref$frost$core$Object$Q(_222);
_229 = &_221->target;
_230 = *_229;
frost$core$Frost$unref$frost$core$Object$Q(_230);
_232 = &_221->target;
*_232 = _222;
_235 = _221;
_236 = _235;
ITable* $tmp74 = _217->$class->itable;
while ($tmp74->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp74 = $tmp74->next;
}
_237 = $tmp74->methods[9];
_238 = _237(_217, _236);
_239 = _238;
_240 = ((frost$collections$ListView*) _239);
_241 = org$frostlang$frostc$Type$tuple$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type(_240);
_242 = _241;
_243 = ((frost$core$Object*) _242);
frost$core$Frost$ref$frost$core$Object$Q(_243);
_245 = *(&local5);
_246 = ((frost$core$Object*) _245);
frost$core$Frost$unref$frost$core$Object$Q(_246);
*(&local5) = _242;
_249 = ((frost$core$Object*) _241);
frost$core$Frost$unref$frost$core$Object$Q(_249);
_251 = ((frost$core$Object*) _238);
frost$core$Frost$unref$frost$core$Object$Q(_251);
_253 = ((frost$core$Object*) _221);
frost$core$Frost$unref$frost$core$Object$Q(_253);
_255 = ((frost$core$Object*) _218);
frost$core$Frost$unref$frost$core$Object$Q(_255);
goto block21;
block21:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Tuple.frost:78
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
_259 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
_260 = (frost$core$Int) {3u};
_261 = *(&local5);
_262 = _261 != NULL;
_263 = (frost$core$Bit) {_262};
_264 = _263.value;
if (_264) goto block23; else goto block24;
block24:;
_266 = (frost$core$Int) {78u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s75, _266, &$s76);
abort(); // unreachable
block23:;
_269 = _261;
_270 = (frost$core$Bit) {false};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int$org$frostlang$frostc$Type$frost$core$Bit(_259, _260, _269, _270);
_272 = org$frostlang$frostc$expression$Tuple$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, param2, _259);
*(&local6) = ((org$frostlang$frostc$IR$Value*) NULL);
_274 = ((frost$core$Object*) _272);
frost$core$Frost$ref$frost$core$Object$Q(_274);
_276 = *(&local6);
_277 = ((frost$core$Object*) _276);
frost$core$Frost$unref$frost$core$Object$Q(_277);
*(&local6) = _272;
_280 = ((frost$core$Object*) _272);
frost$core$Frost$unref$frost$core$Object$Q(_280);
_282 = ((frost$core$Object*) _259);
frost$core$Frost$unref$frost$core$Object$Q(_282);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Tuple.frost:79
_285 = *(&local6);
_286 = _285 == NULL;
_287 = (frost$core$Bit) {_286};
_288 = _287.value;
if (_288) goto block25; else goto block26;
block25:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Tuple.frost:80
_291 = ((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_291);
_293 = *(&local6);
_294 = ((frost$core$Object*) _293);
frost$core$Frost$unref$frost$core$Object$Q(_294);
*(&local6) = ((org$frostlang$frostc$IR$Value*) NULL);
_297 = *(&local5);
_298 = ((frost$core$Object*) _297);
frost$core$Frost$unref$frost$core$Object$Q(_298);
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block26:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Tuple.frost:82
_303 = *(&local6);
_304 = org$frostlang$frostc$Compiler$coerce$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, _303, param3);
_305 = ((frost$core$Object*) _304);
frost$core$Frost$ref$frost$core$Object$Q(_305);
_307 = ((frost$core$Object*) _304);
frost$core$Frost$unref$frost$core$Object$Q(_307);
_309 = *(&local6);
_310 = ((frost$core$Object*) _309);
frost$core$Frost$unref$frost$core$Object$Q(_310);
*(&local6) = ((org$frostlang$frostc$IR$Value*) NULL);
_313 = *(&local5);
_314 = ((frost$core$Object*) _313);
frost$core$Frost$unref$frost$core$Object$Q(_314);
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
return _304;

}
void org$frostlang$frostc$expression$Tuple$init(org$frostlang$frostc$expression$Tuple* param0) {

return;

}
void org$frostlang$frostc$expression$Tuple$cleanup(org$frostlang$frostc$expression$Tuple* param0) {

frost$core$Object* _1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Tuple.frost:12
_1 = ((frost$core$Object*) param0);
frost$core$Object$cleanup(_1);
return;

}

