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
#include "org/frostlang/frostc/MethodPosition.h"
#include "org/frostlang/frostc/Compiler/TypeContext.h"
#include "org/frostlang/frostc/ClassDecl.h"
#include "org/frostlang/frostc/expression/Tuple/_Closure4.h"
#include "org/frostlang/frostc/expression/Call.h"

frost$unsafe$Pointer frost$unsafe$Pointer$init$builtin_int(int64_t p_value);

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
typedef frost$collections$Iterator* (*$fn21)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn22)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn23)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn29)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int (*$fn30)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn31)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn32)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn33)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn34)(frost$collections$Iterable*);
typedef frost$core$Object* (*$fn35)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn57)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int (*$fn58)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn59)(frost$collections$CollectionView*);
typedef frost$collections$Array* (*$fn60)(frost$collections$CollectionView*, frost$core$MutableMethod*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2e\x54\x75\x70\x6c\x65", 37, -2192914147627931606, NULL };
static frost$core$String $s7 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s8 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s12 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x74\x75\x70\x6c\x65\x20\x69\x6e\x64\x65\x78\x20\x27", 13, -2835249030150575212, NULL };
static frost$core$String $s13 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x27\x20\x69\x73\x20\x6f\x75\x74\x20\x6f\x66\x20\x62\x6f\x75\x6e\x64\x73\x20\x66\x6f\x72\x20\x27", 24, -5834575264800361726, NULL };
static frost$core$String $s15 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x27", 1, -5808629440921371546, NULL };
static frost$core$String $s16 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s17 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s18 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s19 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s27 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x54\x75\x70\x6c\x65\x2e\x66\x72\x6f\x73\x74", 11, 4603043468144271925, NULL };
static frost$core$String $s28 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 89, 6559565496330182789, NULL };
static frost$core$String $s39 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s40 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s44 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s45 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s46 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x54\x75\x70\x6c\x65\x2e\x66\x72\x6f\x73\x74", 11, 4603043468144271925, NULL };
static frost$core$String $s47 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72", 132, 3365872483370042718, NULL };
static frost$core$String $s49 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x54\x75\x70\x6c\x65\x2e\x66\x72\x6f\x73\x74", 11, 4603043468144271925, NULL };
static frost$core$String $s50 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77", 130, 6793640040443146634, NULL };
static frost$core$String $s52 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x54\x75\x70\x6c\x65\x2e\x66\x72\x6f\x73\x74", 11, 4603043468144271925, NULL };
static frost$core$String $s53 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x54\x75\x70\x6c\x65\x2e\x66\x72\x6f\x73\x74", 11, 4603043468144271925, NULL };
static frost$core$String $s54 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x62\x6c\x65", 124, 4366960778587913413, NULL };
static frost$core$String $s64 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s65 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s68 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x54\x75\x70\x6c\x65\x2e\x66\x72\x6f\x73\x74", 11, 4603043468144271925, NULL };
static frost$core$String $s69 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, -4241746971283918425, NULL };
static frost$core$String $s70 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s71 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s73 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x54\x75\x70\x6c\x65\x2e\x66\x72\x6f\x73\x74", 11, 4603043468144271925, NULL };
static frost$core$String $s74 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 89, 6559565496330182789, NULL };

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
frost$core$UInt64 _109;
uint64_t _112;
int64_t _113;
frost$core$Int _114;
frost$core$Object* _116;
org$frostlang$frostc$Type* _117;
frost$core$Object* _118;
frost$core$Object* _120;
frost$core$Object* _122;
org$frostlang$frostc$FixedArray** _128;
org$frostlang$frostc$FixedArray* _129;
bool _130;
frost$core$Bit _131;
bool _132;
frost$core$Int _134;
org$frostlang$frostc$FixedArray* _137;
frost$core$Object* _138;
frost$collections$CollectionView* _141;
org$frostlang$frostc$expression$Tuple$_Closure2* _142;
int64_t _144;
frost$core$MutableMethod* _145;
frost$core$Object* _146;
int64_t* _149;
frost$core$Object** _153;
frost$core$Object* _154;
frost$core$Object** _156;
frost$core$MutableMethod* _159;
frost$core$MutableMethod* _160;
$fn6 _161;
frost$core$Object* _162;
org$frostlang$frostc$Type* _163;
frost$core$Object* _164;
frost$core$Object* _166;
frost$core$Object* _168;
frost$core$Object* _170;
frost$core$Object* _172;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Tuple.frost:16
_1 = &param2->$rawValue;
_2 = *_1;
_3 = (frost$core$Int) {25u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Tuple.frost:17:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_6 = _2.value;
_7 = _3.value;
_8 = _6 == _7;
_9 = (frost$core$Bit) {_8};
_11 = _9.value;
if (_11) goto block2; else goto block1;
block2:;
_13 = &param2->$data.$INT.field0;
_14 = *_13;
_15 = &param2->$data.$INT.field1;
_16 = *_15;
*(&local0) = _16;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Tuple.frost:18
_19 = *(&local0);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Tuple.frost:18:33
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:246
_22 = &param1->_subtypes;
_23 = *_22;
_24 = _23 != NULL;
_25 = (frost$core$Bit) {_24};
_26 = _25.value;
if (_26) goto block7; else goto block8;
block8:;
_28 = (frost$core$Int) {246u};
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
// begin inline call to function frost.core.Int.get_asUInt64():frost.core.UInt64 from Tuple.frost:18:48
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:1009
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Tuple.frost:19
_53 = ($fn10) param2->$class->vtable[2];
_54 = _53(param2);
_55 = ((frost$core$Object*) param2);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Tuple.frost:20:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
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
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Tuple.frost:20:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Tuple.frost:22
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Tuple.frost:22:29
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:246
_96 = &param1->_subtypes;
_97 = *_96;
_98 = _97 != NULL;
_99 = (frost$core$Bit) {_98};
_100 = _99.value;
if (_100) goto block13; else goto block14;
block14:;
_102 = (frost$core$Int) {246u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s16, _102, &$s17);
abort(); // unreachable
block13:;
_105 = _97;
_106 = ((frost$core$Object*) _105);
frost$core$Frost$ref$frost$core$Object$Q(_106);
_109 = *(&local0);
// begin inline call to function frost.core.UInt64.get_asInt():frost.core.Int from Tuple.frost:22:44
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:544
_112 = _109.value;
_113 = ((int64_t) _112);
_114 = (frost$core$Int) {_113};
_116 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T(_105, _114);
_117 = ((org$frostlang$frostc$Type*) _116);
_118 = ((frost$core$Object*) _117);
frost$core$Frost$ref$frost$core$Object$Q(_118);
_120 = _116;
frost$core$Frost$unref$frost$core$Object$Q(_120);
_122 = ((frost$core$Object*) _105);
frost$core$Frost$unref$frost$core$Object$Q(_122);
return _117;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Tuple.frost:25
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Tuple.frost:25:21
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:246
_128 = &param1->_subtypes;
_129 = *_128;
_130 = _129 != NULL;
_131 = (frost$core$Bit) {_130};
_132 = _131.value;
if (_132) goto block17; else goto block18;
block18:;
_134 = (frost$core$Int) {246u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s18, _134, &$s19);
abort(); // unreachable
block17:;
_137 = _129;
_138 = ((frost$core$Object*) _137);
frost$core$Frost$ref$frost$core$Object$Q(_138);
_141 = ((frost$collections$CollectionView*) _137);
_142 = (org$frostlang$frostc$expression$Tuple$_Closure2*) frostObjectAlloc(sizeof(org$frostlang$frostc$expression$Tuple$_Closure2), (frost$core$Class*) &org$frostlang$frostc$expression$Tuple$_Closure2$class);
org$frostlang$frostc$expression$Tuple$_Closure2$init$org$frostlang$frostc$Compiler(_142, param0);
_144 = frost$unsafe$Pointer$init$builtin_int((intptr_t) &org$frostlang$frostc$expression$Tuple$_Closure2$$anonymous1$org$frostlang$frostc$Type$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type).value;
_145 = (frost$core$MutableMethod*) frostObjectAlloc(sizeof(frost$core$MutableMethod), (frost$core$Class*) &frost$core$MutableMethod$class);
_146 = ((frost$core$Object*) _142);
// begin inline call to frost.core.MutableMethod.init(pointer:builtin_int, target:frost.core.Object?) from Tuple.frost:25:36
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableMethod.frost:30
_149 = &_145->pointer;
*_149 = _144;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableMethod.frost:31
frost$core$Frost$ref$frost$core$Object$Q(_146);
_153 = &_145->target;
_154 = *_153;
frost$core$Frost$unref$frost$core$Object$Q(_154);
_156 = &_145->target;
*_156 = _146;
_159 = _145;
_160 = _159;
ITable* $tmp20 = _141->$class->itable;
while ($tmp20->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp20 = $tmp20->next;
}
_161 = $tmp20->methods[4];
_162 = _161(_141, _160);
_163 = ((org$frostlang$frostc$Type*) _162);
_164 = ((frost$core$Object*) _163);
frost$core$Frost$ref$frost$core$Object$Q(_164);
_166 = _162;
frost$core$Frost$unref$frost$core$Object$Q(_166);
_168 = ((frost$core$Object*) _145);
frost$core$Frost$unref$frost$core$Object$Q(_168);
_170 = ((frost$core$Object*) _142);
frost$core$Frost$unref$frost$core$Object$Q(_170);
_172 = ((frost$core$Object*) _137);
frost$core$Frost$unref$frost$core$Object$Q(_172);
return _163;

}
frost$collections$CollectionView* org$frostlang$frostc$expression$Tuple$possibleTypes$org$frostlang$frostc$Compiler$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$R$frost$collections$CollectionView$LTorg$frostlang$frostc$Type$GT$Q(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$FixedArray* param1) {

frost$collections$Array* local0 = NULL;
org$frostlang$frostc$ASTNode* local1 = NULL;
org$frostlang$frostc$Type* local2 = NULL;
frost$collections$Array* _1;
frost$core$Object* _4;
frost$collections$Array* _6;
frost$core$Object* _7;
frost$core$Object* _10;
frost$collections$Iterable* _13;
$fn21 _14;
frost$collections$Iterator* _15;
$fn22 _17;
frost$core$Bit _18;
bool _19;
$fn23 _22;
frost$core$Object* _23;
org$frostlang$frostc$ASTNode* _24;
frost$core$Object* _25;
org$frostlang$frostc$ASTNode* _27;
frost$core$Object* _28;
org$frostlang$frostc$ASTNode* _32;
org$frostlang$frostc$Type* _33;
frost$core$Object* _35;
org$frostlang$frostc$Type* _37;
frost$core$Object* _38;
frost$core$Object* _41;
org$frostlang$frostc$Type* _44;
bool _45;
frost$core$Bit _46;
bool _47;
frost$core$Object* _50;
org$frostlang$frostc$Type* _52;
frost$core$Object* _53;
frost$core$Object* _56;
org$frostlang$frostc$ASTNode* _58;
frost$core$Object* _59;
frost$core$Object* _62;
frost$collections$Array* _64;
frost$core$Object* _65;
frost$collections$Array* _70;
org$frostlang$frostc$Type* _71;
bool _72;
frost$core$Bit _73;
bool _74;
frost$core$Int _76;
org$frostlang$frostc$Type* _79;
frost$core$Object* _80;
org$frostlang$frostc$Type* _82;
frost$core$Object* _83;
frost$core$Object* _86;
org$frostlang$frostc$ASTNode* _88;
frost$core$Object* _89;
frost$core$Object* _93;
frost$collections$Array* _96;
frost$core$Int _97;
frost$collections$Array* _99;
frost$collections$ListView* _100;
org$frostlang$frostc$Type* _101;
frost$core$Object* _102;
frost$collections$CollectionView* _104;
frost$core$Object* _105;
frost$core$Object* _107;
frost$core$Object* _109;
frost$collections$Array* _111;
frost$core$Object* _112;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Tuple.frost:30
_1 = (frost$collections$Array*) frostObjectAlloc(sizeof(frost$collections$Array), (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init(_1);
*(&local0) = ((frost$collections$Array*) NULL);
_4 = ((frost$core$Object*) _1);
frost$core$Frost$ref$frost$core$Object$Q(_4);
_6 = *(&local0);
_7 = ((frost$core$Object*) _6);
frost$core$Frost$unref$frost$core$Object$Q(_7);
*(&local0) = _1;
_10 = ((frost$core$Object*) _1);
frost$core$Frost$unref$frost$core$Object$Q(_10);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Tuple.frost:31
_13 = ((frost$collections$Iterable*) param1);
ITable* $tmp24 = _13->$class->itable;
while ($tmp24->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp24 = $tmp24->next;
}
_14 = $tmp24->methods[0];
_15 = _14(_13);
goto block1;
block1:;
ITable* $tmp25 = _15->$class->itable;
while ($tmp25->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp25 = $tmp25->next;
}
_17 = $tmp25->methods[0];
_18 = _17(_15);
_19 = _18.value;
if (_19) goto block3; else goto block2;
block2:;
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp26 = _15->$class->itable;
while ($tmp26->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp26 = $tmp26->next;
}
_22 = $tmp26->methods[1];
_23 = _22(_15);
_24 = ((org$frostlang$frostc$ASTNode*) _23);
_25 = ((frost$core$Object*) _24);
frost$core$Frost$ref$frost$core$Object$Q(_25);
_27 = *(&local1);
_28 = ((frost$core$Object*) _27);
frost$core$Frost$unref$frost$core$Object$Q(_28);
*(&local1) = _24;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Tuple.frost:32
_32 = *(&local1);
_33 = org$frostlang$frostc$Compiler$preferredType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type$Q(param0, _32);
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
_35 = ((frost$core$Object*) _33);
frost$core$Frost$ref$frost$core$Object$Q(_35);
_37 = *(&local2);
_38 = ((frost$core$Object*) _37);
frost$core$Frost$unref$frost$core$Object$Q(_38);
*(&local2) = _33;
_41 = ((frost$core$Object*) _33);
frost$core$Frost$unref$frost$core$Object$Q(_41);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Tuple.frost:33
_44 = *(&local2);
_45 = _44 == NULL;
_46 = (frost$core$Bit) {_45};
_47 = _46.value;
if (_47) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Tuple.frost:34
_50 = ((frost$core$Object*) ((frost$collections$CollectionView*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_50);
_52 = *(&local2);
_53 = ((frost$core$Object*) _52);
frost$core$Frost$unref$frost$core$Object$Q(_53);
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
_56 = _23;
frost$core$Frost$unref$frost$core$Object$Q(_56);
_58 = *(&local1);
_59 = ((frost$core$Object*) _58);
frost$core$Frost$unref$frost$core$Object$Q(_59);
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
_62 = ((frost$core$Object*) _15);
frost$core$Frost$unref$frost$core$Object$Q(_62);
_64 = *(&local0);
_65 = ((frost$core$Object*) _64);
frost$core$Frost$unref$frost$core$Object$Q(_65);
*(&local0) = ((frost$collections$Array*) NULL);
return ((frost$collections$CollectionView*) NULL);
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Tuple.frost:36
_70 = *(&local0);
_71 = *(&local2);
_72 = _71 != NULL;
_73 = (frost$core$Bit) {_72};
_74 = _73.value;
if (_74) goto block6; else goto block7;
block7:;
_76 = (frost$core$Int) {36u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s27, _76, &$s28);
abort(); // unreachable
block6:;
_79 = _71;
_80 = ((frost$core$Object*) _79);
frost$collections$Array$add$frost$collections$Array$T(_70, _80);
_82 = *(&local2);
_83 = ((frost$core$Object*) _82);
frost$core$Frost$unref$frost$core$Object$Q(_83);
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
_86 = _23;
frost$core$Frost$unref$frost$core$Object$Q(_86);
_88 = *(&local1);
_89 = ((frost$core$Object*) _88);
frost$core$Frost$unref$frost$core$Object$Q(_89);
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block3:;
_93 = ((frost$core$Object*) _15);
frost$core$Frost$unref$frost$core$Object$Q(_93);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Tuple.frost:38
_96 = (frost$collections$Array*) frostObjectAlloc(sizeof(frost$collections$Array), (frost$core$Class*) &frost$collections$Array$class);
_97 = (frost$core$Int) {1u};
frost$collections$Array$init$frost$core$Int(_96, _97);
_99 = *(&local0);
_100 = ((frost$collections$ListView*) _99);
_101 = org$frostlang$frostc$Type$tuple$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type(_100);
_102 = ((frost$core$Object*) _101);
frost$collections$Array$add$frost$collections$Array$T(_96, _102);
_104 = ((frost$collections$CollectionView*) _96);
_105 = ((frost$core$Object*) _104);
frost$core$Frost$ref$frost$core$Object$Q(_105);
_107 = ((frost$core$Object*) _101);
frost$core$Frost$unref$frost$core$Object$Q(_107);
_109 = ((frost$core$Object*) _96);
frost$core$Frost$unref$frost$core$Object$Q(_109);
_111 = *(&local0);
_112 = ((frost$core$Object*) _111);
frost$core$Frost$unref$frost$core$Object$Q(_112);
*(&local0) = ((frost$collections$Array*) NULL);
return _104;

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
frost$core$Int _4;
frost$core$Int* _7;
org$frostlang$frostc$Type$Kind _9;
org$frostlang$frostc$Type$Kind _12;
frost$core$Equatable* _13;
$fn29 _14;
frost$core$Bit _15;
bool _16;
frost$core$Object* _17;
frost$core$Object* _19;
org$frostlang$frostc$FixedArray** _24;
org$frostlang$frostc$FixedArray* _25;
bool _26;
frost$core$Bit _27;
bool _28;
frost$core$Int _30;
org$frostlang$frostc$FixedArray* _33;
frost$core$Object* _34;
frost$collections$CollectionView* _37;
$fn30 _38;
frost$core$Int _39;
frost$collections$CollectionView* _40;
$fn31 _41;
frost$core$Int _42;
int64_t _45;
int64_t _46;
bool _47;
frost$core$Bit _48;
bool _50;
frost$core$Object* _51;
frost$core$Int _55;
frost$core$Int _58;
frost$collections$CollectionView* _59;
$fn32 _60;
frost$core$Int _61;
frost$core$Bit _62;
frost$core$Range$LTfrost$core$Int$GT _63;
frost$core$Int _64;
frost$core$Int _66;
frost$core$Bit _67;
bool _68;
frost$core$Int _69;
int64_t _71;
int64_t _72;
bool _73;
frost$core$Bit _74;
bool _75;
int64_t _77;
int64_t _78;
bool _79;
frost$core$Bit _80;
bool _81;
frost$core$Int _84;
frost$core$Object* _85;
org$frostlang$frostc$ASTNode* _86;
org$frostlang$frostc$FixedArray** _89;
org$frostlang$frostc$FixedArray* _90;
bool _91;
frost$core$Bit _92;
bool _93;
frost$core$Int _95;
org$frostlang$frostc$FixedArray* _98;
frost$core$Object* _99;
frost$core$Int _102;
frost$core$Object* _103;
org$frostlang$frostc$Type* _104;
org$frostlang$frostc$Pair* _105;
frost$core$Object* _107;
org$frostlang$frostc$Pair* _109;
frost$core$Object* _110;
frost$core$Object* _113;
frost$core$Object* _115;
frost$core$Object* _117;
frost$core$Object* _119;
org$frostlang$frostc$Pair* _122;
bool _123;
frost$core$Bit _124;
bool _125;
frost$core$Object* _128;
org$frostlang$frostc$Pair* _130;
frost$core$Object* _131;
frost$core$Int _136;
org$frostlang$frostc$Pair* _137;
bool _138;
frost$core$Bit _139;
bool _140;
frost$core$Int _142;
org$frostlang$frostc$Pair* _145;
frost$core$Object** _146;
frost$core$Object* _147;
frost$core$Int _148;
int64_t _149;
int64_t _150;
int64_t _151;
frost$core$Int _152;
org$frostlang$frostc$Pair* _154;
frost$core$Object* _155;
frost$core$Int _159;
int64_t _160;
int64_t _161;
int64_t _162;
frost$core$Int _163;
int64_t _165;
int64_t _166;
bool _167;
frost$core$Bit _168;
bool _169;
int64_t _171;
int64_t _172;
bool _173;
frost$core$Bit _174;
bool _175;
int64_t _177;
int64_t _178;
int64_t _179;
frost$core$Int _180;
org$frostlang$frostc$Pair* _184;
frost$core$Object* _185;
frost$core$Int _186;
frost$core$Object* _187;
org$frostlang$frostc$Pair* _189;
frost$core$Object* _190;
frost$core$Object* _192;
frost$core$Object* _194;
frost$collections$CollectionView* _198;
frost$core$Object* _200;
frost$collections$CollectionView* _202;
frost$core$Object* _203;
frost$core$Object* _206;
frost$collections$CollectionView* _209;
bool _210;
frost$core$Bit _211;
bool _212;
frost$core$Object* _215;
frost$collections$CollectionView* _217;
frost$core$Object* _218;
frost$collections$CollectionView* _223;
bool _224;
frost$core$Bit _225;
bool _226;
frost$core$Int _228;
frost$collections$CollectionView* _231;
$fn33 _232;
frost$core$Int _233;
frost$core$Int _234;
int64_t _237;
int64_t _238;
bool _239;
frost$core$Bit _240;
bool _242;
frost$core$Int _244;
frost$collections$CollectionView* _248;
bool _249;
frost$core$Bit _250;
bool _251;
frost$core$Int _253;
frost$collections$Iterable* _256;
$fn34 _257;
frost$collections$Iterator* _258;
$fn35 _259;
frost$core$Object* _260;
org$frostlang$frostc$Type* _261;
frost$core$Bit _264;
org$frostlang$frostc$Pair* _265;
frost$core$Object* _266;
frost$core$Object* _268;
frost$core$Object* _271;
frost$core$Object* _273;
frost$core$Object* _275;
frost$core$Object* _277;
frost$collections$CollectionView* _279;
frost$core$Object* _280;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Tuple.frost:44
_1 = &param2->typeKind;
_2 = *_1;
org$frostlang$frostc$Type$Kind$wrapper* $tmp36;
$tmp36 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp36->value = _2;
_3 = ((frost$core$Equatable*) $tmp36);
_4 = (frost$core$Int) {10u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Tuple.frost:44:39
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_7 = &(&local1)->$rawValue;
*_7 = _4;
_9 = *(&local1);
*(&local0) = _9;
_12 = *(&local0);
org$frostlang$frostc$Type$Kind$wrapper* $tmp37;
$tmp37 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp37->value = _12;
_13 = ((frost$core$Equatable*) $tmp37);
ITable* $tmp38 = _3->$class->itable;
while ($tmp38->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp38 = $tmp38->next;
}
_14 = $tmp38->methods[0];
_15 = _14(_3, _13);
_16 = _15.value;
_17 = ((frost$core$Object*) _13);
frost$core$Frost$unref$frost$core$Object$Q(_17);
_19 = ((frost$core$Object*) _3);
frost$core$Frost$unref$frost$core$Object$Q(_19);
if (_16) goto block3; else goto block2;
block3:;
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Tuple.frost:44:54
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:246
_24 = &param2->_subtypes;
_25 = *_24;
_26 = _25 != NULL;
_27 = (frost$core$Bit) {_26};
_28 = _27.value;
if (_28) goto block6; else goto block7;
block7:;
_30 = (frost$core$Int) {246u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s39, _30, &$s40);
abort(); // unreachable
block6:;
_33 = _25;
_34 = ((frost$core$Object*) _33);
frost$core$Frost$ref$frost$core$Object$Q(_34);
_37 = ((frost$collections$CollectionView*) _33);
ITable* $tmp41 = _37->$class->itable;
while ($tmp41->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp41 = $tmp41->next;
}
_38 = $tmp41->methods[0];
_39 = _38(_37);
_40 = ((frost$collections$CollectionView*) param1);
ITable* $tmp42 = _40->$class->itable;
while ($tmp42->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp42 = $tmp42->next;
}
_41 = $tmp42->methods[0];
_42 = _41(_40);
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Tuple.frost:44:70
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_45 = _39.value;
_46 = _42.value;
_47 = _45 == _46;
_48 = (frost$core$Bit) {_47};
_50 = _48.value;
_51 = ((frost$core$Object*) _33);
frost$core$Frost$unref$frost$core$Object$Q(_51);
if (_50) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Tuple.frost:45
_55 = (frost$core$Int) {0u};
*(&local2) = _55;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Tuple.frost:46
_58 = (frost$core$Int) {0u};
_59 = ((frost$collections$CollectionView*) param1);
ITable* $tmp43 = _59->$class->itable;
while ($tmp43->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp43 = $tmp43->next;
}
_60 = $tmp43->methods[0];
_61 = _60(_59);
_62 = (frost$core$Bit) {false};
_63 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit(_58, _61, _62);
_64 = _63.min;
*(&local3) = _64;
_66 = _63.max;
_67 = _63.inclusive;
_68 = _67.value;
_69 = (frost$core$Int) {1u};
if (_68) goto block12; else goto block13;
block12:;
_71 = _64.value;
_72 = _66.value;
_73 = _71 <= _72;
_74 = (frost$core$Bit) {_73};
_75 = _74.value;
if (_75) goto block9; else goto block10;
block13:;
_77 = _64.value;
_78 = _66.value;
_79 = _77 < _78;
_80 = (frost$core$Bit) {_79};
_81 = _80.value;
if (_81) goto block9; else goto block10;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Tuple.frost:47
_84 = *(&local3);
_85 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T(param1, _84);
_86 = ((org$frostlang$frostc$ASTNode*) _85);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Tuple.frost:47:66
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:246
_89 = &param2->_subtypes;
_90 = *_89;
_91 = _90 != NULL;
_92 = (frost$core$Bit) {_91};
_93 = _92.value;
if (_93) goto block15; else goto block16;
block16:;
_95 = (frost$core$Int) {246u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s44, _95, &$s45);
abort(); // unreachable
block15:;
_98 = _90;
_99 = ((frost$core$Object*) _98);
frost$core$Frost$ref$frost$core$Object$Q(_99);
_102 = *(&local3);
_103 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T(_98, _102);
_104 = ((org$frostlang$frostc$Type*) _103);
_105 = org$frostlang$frostc$Compiler$coercionCost$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Type$R$org$frostlang$frostc$Pair$LTorg$frostlang$frostc$Type$Cfrost$core$Int$GT$Q(param0, _86, _104);
*(&local4) = ((org$frostlang$frostc$Pair*) NULL);
_107 = ((frost$core$Object*) _105);
frost$core$Frost$ref$frost$core$Object$Q(_107);
_109 = *(&local4);
_110 = ((frost$core$Object*) _109);
frost$core$Frost$unref$frost$core$Object$Q(_110);
*(&local4) = _105;
_113 = ((frost$core$Object*) _105);
frost$core$Frost$unref$frost$core$Object$Q(_113);
_115 = _103;
frost$core$Frost$unref$frost$core$Object$Q(_115);
_117 = ((frost$core$Object*) _98);
frost$core$Frost$unref$frost$core$Object$Q(_117);
_119 = _85;
frost$core$Frost$unref$frost$core$Object$Q(_119);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Tuple.frost:48
_122 = *(&local4);
_123 = _122 == NULL;
_124 = (frost$core$Bit) {_123};
_125 = _124.value;
if (_125) goto block17; else goto block18;
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Tuple.frost:49
_128 = ((frost$core$Object*) ((org$frostlang$frostc$Pair*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_128);
_130 = *(&local4);
_131 = ((frost$core$Object*) _130);
frost$core$Frost$unref$frost$core$Object$Q(_131);
*(&local4) = ((org$frostlang$frostc$Pair*) NULL);
return ((org$frostlang$frostc$Pair*) NULL);
block18:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Tuple.frost:51
_136 = *(&local2);
_137 = *(&local4);
_138 = _137 != NULL;
_139 = (frost$core$Bit) {_138};
_140 = _139.value;
if (_140) goto block19; else goto block20;
block20:;
_142 = (frost$core$Int) {51u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s46, _142, &$s47);
abort(); // unreachable
block19:;
_145 = _137;
_146 = &_145->second;
_147 = *_146;
_148 = ((frost$core$Int$wrapper*) _147)->value;
_149 = _136.value;
_150 = _148.value;
_151 = _149 + _150;
_152 = (frost$core$Int) {_151};
*(&local2) = _152;
_154 = *(&local4);
_155 = ((frost$core$Object*) _154);
frost$core$Frost$unref$frost$core$Object$Q(_155);
*(&local4) = ((org$frostlang$frostc$Pair*) NULL);
_159 = *(&local3);
_160 = _66.value;
_161 = _159.value;
_162 = _160 - _161;
_163 = (frost$core$Int) {_162};
if (_68) goto block22; else goto block23;
block22:;
_165 = _163.value;
_166 = _69.value;
_167 = _165 >= _166;
_168 = (frost$core$Bit) {_167};
_169 = _168.value;
if (_169) goto block21; else goto block10;
block23:;
_171 = _163.value;
_172 = _69.value;
_173 = _171 > _172;
_174 = (frost$core$Bit) {_173};
_175 = _174.value;
if (_175) goto block21; else goto block10;
block21:;
_177 = _159.value;
_178 = _69.value;
_179 = _177 + _178;
_180 = (frost$core$Int) {_179};
*(&local3) = _180;
goto block9;
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Tuple.frost:53
_184 = (org$frostlang$frostc$Pair*) frostObjectAlloc(sizeof(org$frostlang$frostc$Pair), (frost$core$Class*) &org$frostlang$frostc$Pair$class);
_185 = ((frost$core$Object*) param2);
_186 = *(&local2);
frost$core$Int$wrapper* $tmp48;
$tmp48 = (frost$core$Int$wrapper*) frostObjectAlloc(sizeof(frost$core$Int$wrapper), (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp48->value = _186;
_187 = ((frost$core$Object*) $tmp48);
org$frostlang$frostc$Pair$init$org$frostlang$frostc$Pair$A$org$frostlang$frostc$Pair$B(_184, _185, _187);
_189 = _184;
_190 = ((frost$core$Object*) _189);
frost$core$Frost$ref$frost$core$Object$Q(_190);
_192 = _187;
frost$core$Frost$unref$frost$core$Object$Q(_192);
_194 = ((frost$core$Object*) _184);
frost$core$Frost$unref$frost$core$Object$Q(_194);
return _189;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Tuple.frost:55
_198 = org$frostlang$frostc$expression$Tuple$possibleTypes$org$frostlang$frostc$Compiler$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$R$frost$collections$CollectionView$LTorg$frostlang$frostc$Type$GT$Q(param0, param1);
*(&local5) = ((frost$collections$CollectionView*) NULL);
_200 = ((frost$core$Object*) _198);
frost$core$Frost$ref$frost$core$Object$Q(_200);
_202 = *(&local5);
_203 = ((frost$core$Object*) _202);
frost$core$Frost$unref$frost$core$Object$Q(_203);
*(&local5) = _198;
_206 = ((frost$core$Object*) _198);
frost$core$Frost$unref$frost$core$Object$Q(_206);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Tuple.frost:56
_209 = *(&local5);
_210 = _209 == NULL;
_211 = (frost$core$Bit) {_210};
_212 = _211.value;
if (_212) goto block24; else goto block25;
block24:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Tuple.frost:57
_215 = ((frost$core$Object*) ((org$frostlang$frostc$Pair*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_215);
_217 = *(&local5);
_218 = ((frost$core$Object*) _217);
frost$core$Frost$unref$frost$core$Object$Q(_218);
*(&local5) = ((frost$collections$CollectionView*) NULL);
return ((org$frostlang$frostc$Pair*) NULL);
block25:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Tuple.frost:59
_223 = *(&local5);
_224 = _223 != NULL;
_225 = (frost$core$Bit) {_224};
_226 = _225.value;
if (_226) goto block26; else goto block27;
block27:;
_228 = (frost$core$Int) {59u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s49, _228, &$s50);
abort(); // unreachable
block26:;
_231 = _223;
ITable* $tmp51 = _231->$class->itable;
while ($tmp51->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp51 = $tmp51->next;
}
_232 = $tmp51->methods[0];
_233 = _232(_231);
_234 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Tuple.frost:59:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_237 = _233.value;
_238 = _234.value;
_239 = _237 == _238;
_240 = (frost$core$Bit) {_239};
_242 = _240.value;
if (_242) goto block29; else goto block30;
block30:;
_244 = (frost$core$Int) {59u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s52, _244);
abort(); // unreachable
block29:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Tuple.frost:60
_248 = *(&local5);
_249 = _248 != NULL;
_250 = (frost$core$Bit) {_249};
_251 = _250.value;
if (_251) goto block31; else goto block32;
block32:;
_253 = (frost$core$Int) {60u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s53, _253, &$s54);
abort(); // unreachable
block31:;
_256 = ((frost$collections$Iterable*) _248);
ITable* $tmp55 = _256->$class->itable;
while ($tmp55->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp55 = $tmp55->next;
}
_257 = $tmp55->methods[0];
_258 = _257(_256);
ITable* $tmp56 = _258->$class->itable;
while ($tmp56->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp56 = $tmp56->next;
}
_259 = $tmp56->methods[1];
_260 = _259(_258);
_261 = ((org$frostlang$frostc$Type*) _260);
// begin inline call to method org.frostlang.frostc.Compiler.coercionCost(type:org.frostlang.frostc.Type, target:org.frostlang.frostc.Type):org.frostlang.frostc.Pair<org.frostlang.frostc.Type, frost.core.Int>? from Tuple.frost:60:37
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:2116
_264 = (frost$core$Bit) {true};
_265 = org$frostlang$frostc$Compiler$coercionCost$org$frostlang$frostc$Type$org$frostlang$frostc$Type$frost$core$Bit$R$org$frostlang$frostc$Pair$LTorg$frostlang$frostc$Type$Cfrost$core$Int$GT$Q(param0, _261, param2, _264);
_266 = ((frost$core$Object*) _265);
frost$core$Frost$ref$frost$core$Object$Q(_266);
_268 = ((frost$core$Object*) _265);
frost$core$Frost$unref$frost$core$Object$Q(_268);
_271 = ((frost$core$Object*) _265);
frost$core$Frost$ref$frost$core$Object$Q(_271);
_273 = ((frost$core$Object*) _265);
frost$core$Frost$unref$frost$core$Object$Q(_273);
_275 = _260;
frost$core$Frost$unref$frost$core$Object$Q(_275);
_277 = ((frost$core$Object*) _258);
frost$core$Frost$unref$frost$core$Object$Q(_277);
_279 = *(&local5);
_280 = ((frost$core$Object*) _279);
frost$core$Frost$unref$frost$core$Object$Q(_280);
*(&local5) = ((frost$collections$CollectionView*) NULL);
return _265;

}
org$frostlang$frostc$IR$Value* org$frostlang$frostc$expression$Tuple$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$MethodPosition$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$MethodPosition param1, org$frostlang$frostc$FixedArray* param2, org$frostlang$frostc$Compiler$TypeContext* param3) {

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
frost$core$Int _32;
frost$core$Int* _35;
org$frostlang$frostc$Type$Kind _37;
org$frostlang$frostc$Type$Kind _40;
frost$core$Equatable* _41;
$fn57 _42;
frost$core$Bit _43;
frost$core$Object* _44;
frost$core$Object* _46;
bool _49;
org$frostlang$frostc$Type* _51;
org$frostlang$frostc$FixedArray** _54;
org$frostlang$frostc$FixedArray* _55;
bool _56;
frost$core$Bit _57;
bool _58;
frost$core$Int _60;
org$frostlang$frostc$FixedArray* _63;
frost$core$Object* _64;
frost$collections$CollectionView* _67;
$fn58 _68;
frost$core$Int _69;
frost$collections$CollectionView* _70;
$fn59 _71;
frost$core$Int _72;
int64_t _75;
int64_t _76;
bool _77;
frost$core$Bit _78;
bool _80;
frost$core$Object* _81;
org$frostlang$frostc$Type* _85;
org$frostlang$frostc$ClassDecl* _86;
bool _87;
frost$core$Bit _88;
bool _89;
frost$core$Int _91;
org$frostlang$frostc$ClassDecl* _94;
org$frostlang$frostc$Type** _95;
org$frostlang$frostc$Type* _96;
org$frostlang$frostc$Type* _97;
org$frostlang$frostc$FixedArray** _100;
org$frostlang$frostc$FixedArray* _101;
bool _102;
frost$core$Bit _103;
bool _104;
frost$core$Int _106;
org$frostlang$frostc$FixedArray* _109;
frost$core$Object* _110;
frost$collections$ListView* _113;
org$frostlang$frostc$Type* _114;
frost$core$Object* _116;
org$frostlang$frostc$Type* _118;
frost$core$Object* _119;
frost$core$Object* _122;
frost$core$Object* _124;
frost$core$Object* _126;
org$frostlang$frostc$Type* _129;
org$frostlang$frostc$IR$Value* _132;
frost$core$Int _133;
org$frostlang$frostc$Type** _136;
org$frostlang$frostc$Type* _137;
frost$collections$Array* _138;
frost$core$Int _139;
frost$core$Object* _141;
frost$collections$ListView* _143;
org$frostlang$frostc$Type* _144;
frost$core$Object* _145;
frost$core$Object* _147;
frost$core$Object* _149;
frost$core$Object* _153;
frost$core$Object* _155;
frost$core$Object* _157;
frost$collections$ListView* _160;
org$frostlang$frostc$Compiler$TypeContext* _161;
frost$core$Int _162;
org$frostlang$frostc$IR$Value* _164;
org$frostlang$frostc$Type* _165;
frost$core$Bit _168;
org$frostlang$frostc$IR$Value* _169;
frost$core$Object* _170;
frost$core$Object* _172;
frost$core$Object* _175;
frost$core$Object* _177;
frost$core$Object* _179;
frost$core$Object* _181;
frost$core$Object* _183;
org$frostlang$frostc$Type* _185;
frost$core$Object* _186;
org$frostlang$frostc$Type* _189;
frost$core$Object* _190;
org$frostlang$frostc$Type* _194;
frost$core$Object* _195;
org$frostlang$frostc$ASTNode* _200;
frost$core$Int _201;
frost$core$Int _204;
frost$core$Int _205;
frost$core$Int _206;
org$frostlang$frostc$Position _207;
org$frostlang$frostc$Type* _210;
frost$core$Object* _212;
org$frostlang$frostc$Type* _214;
frost$core$Object* _215;
frost$core$Object* _218;
frost$core$Object* _220;
org$frostlang$frostc$Type* _223;
bool _224;
frost$core$Bit _225;
bool _226;
frost$collections$CollectionView* _229;
org$frostlang$frostc$expression$Tuple$_Closure4* _230;
int64_t _232;
frost$core$MutableMethod* _233;
frost$core$Object* _234;
int64_t* _237;
frost$core$Object** _241;
frost$core$Object* _242;
frost$core$Object** _244;
frost$core$MutableMethod* _247;
frost$core$MutableMethod* _248;
$fn60 _249;
frost$collections$Array* _250;
frost$collections$ListView* _251;
org$frostlang$frostc$Type* _252;
org$frostlang$frostc$Type* _253;
frost$core$Object* _254;
org$frostlang$frostc$Type* _256;
frost$core$Object* _257;
frost$core$Object* _260;
frost$core$Object* _262;
frost$core$Object* _264;
frost$core$Object* _266;
org$frostlang$frostc$Compiler$TypeContext* _270;
frost$core$Int _271;
org$frostlang$frostc$Type* _272;
bool _273;
frost$core$Bit _274;
bool _275;
frost$core$Int _277;
org$frostlang$frostc$Type* _280;
frost$core$Bit _281;
org$frostlang$frostc$IR$Value* _283;
frost$core$Object* _285;
org$frostlang$frostc$IR$Value* _287;
frost$core$Object* _288;
frost$core$Object* _291;
frost$core$Object* _293;
org$frostlang$frostc$IR$Value* _296;
bool _297;
frost$core$Bit _298;
bool _299;
frost$core$Object* _302;
org$frostlang$frostc$IR$Value* _304;
frost$core$Object* _305;
org$frostlang$frostc$Type* _308;
frost$core$Object* _309;
org$frostlang$frostc$IR$Value* _314;
org$frostlang$frostc$IR$Value* _315;
frost$core$Object* _316;
frost$core$Object* _318;
org$frostlang$frostc$IR$Value* _320;
frost$core$Object* _321;
org$frostlang$frostc$Type* _324;
frost$core$Object* _325;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Tuple.frost:66
_1 = &param3->$rawValue;
_2 = *_1;
_3 = (frost$core$Int) {3u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Tuple.frost:67:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_6 = _2.value;
_7 = _3.value;
_8 = _6 == _7;
_9 = (frost$core$Bit) {_8};
_11 = _9.value;
if (_11) goto block2; else goto block1;
block2:;
_13 = &param3->$data.$TYPE.field0;
_14 = *_13;
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
_16 = ((frost$core$Object*) _14);
frost$core$Frost$ref$frost$core$Object$Q(_16);
_18 = *(&local0);
_19 = ((frost$core$Object*) _18);
frost$core$Frost$unref$frost$core$Object$Q(_19);
*(&local0) = _14;
_22 = &param3->$data.$TYPE.field1;
_23 = *_22;
*(&local1) = _23;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Tuple.frost:68
_26 = *(&local0);
// begin inline call to function org.frostlang.frostc.Type.get_isTuple():frost.core.Bit from Tuple.frost:68:21
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:383
_29 = &_26->typeKind;
_30 = *_29;
org$frostlang$frostc$Type$Kind$wrapper* $tmp61;
$tmp61 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp61->value = _30;
_31 = ((frost$core$Equatable*) $tmp61);
_32 = (frost$core$Int) {10u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:383:31
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_35 = &(&local3)->$rawValue;
*_35 = _32;
_37 = *(&local3);
*(&local2) = _37;
_40 = *(&local2);
org$frostlang$frostc$Type$Kind$wrapper* $tmp62;
$tmp62 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp62->value = _40;
_41 = ((frost$core$Equatable*) $tmp62);
ITable* $tmp63 = _31->$class->itable;
while ($tmp63->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp63 = $tmp63->next;
}
_42 = $tmp63->methods[0];
_43 = _42(_31, _41);
_44 = ((frost$core$Object*) _41);
frost$core$Frost$unref$frost$core$Object$Q(_44);
_46 = ((frost$core$Object*) _31);
frost$core$Frost$unref$frost$core$Object$Q(_46);
_49 = _43.value;
if (_49) goto block6; else goto block5;
block6:;
_51 = *(&local0);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Tuple.frost:68:33
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:246
_54 = &_51->_subtypes;
_55 = *_54;
_56 = _55 != NULL;
_57 = (frost$core$Bit) {_56};
_58 = _57.value;
if (_58) goto block10; else goto block11;
block11:;
_60 = (frost$core$Int) {246u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s64, _60, &$s65);
abort(); // unreachable
block10:;
_63 = _55;
_64 = ((frost$core$Object*) _63);
frost$core$Frost$ref$frost$core$Object$Q(_64);
_67 = ((frost$collections$CollectionView*) _63);
ITable* $tmp66 = _67->$class->itable;
while ($tmp66->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp66 = $tmp66->next;
}
_68 = $tmp66->methods[0];
_69 = _68(_67);
_70 = ((frost$collections$CollectionView*) param2);
ITable* $tmp67 = _70->$class->itable;
while ($tmp67->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp67 = $tmp67->next;
}
_71 = $tmp67->methods[0];
_72 = _71(_70);
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Tuple.frost:68:49
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_75 = _69.value;
_76 = _72.value;
_77 = _75 == _76;
_78 = (frost$core$Bit) {_77};
_80 = _78.value;
_81 = ((frost$core$Object*) _63);
frost$core$Frost$unref$frost$core$Object$Q(_81);
if (_80) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Tuple.frost:69
_85 = *(&local0);
_86 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(param0, _85);
_87 = _86 != NULL;
_88 = (frost$core$Bit) {_87};
_89 = _88.value;
if (_89) goto block13; else goto block14;
block14:;
_91 = (frost$core$Int) {69u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s68, _91, &$s69);
abort(); // unreachable
block13:;
_94 = _86;
_95 = &_94->type;
_96 = *_95;
_97 = *(&local0);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Tuple.frost:69:79
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:246
_100 = &_97->_subtypes;
_101 = *_100;
_102 = _101 != NULL;
_103 = (frost$core$Bit) {_102};
_104 = _103.value;
if (_104) goto block16; else goto block17;
block17:;
_106 = (frost$core$Int) {246u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s70, _106, &$s71);
abort(); // unreachable
block16:;
_109 = _101;
_110 = ((frost$core$Object*) _109);
frost$core$Frost$ref$frost$core$Object$Q(_110);
_113 = ((frost$collections$ListView*) _109);
_114 = org$frostlang$frostc$Type$generic$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type(_96, _113);
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
_116 = ((frost$core$Object*) _114);
frost$core$Frost$ref$frost$core$Object$Q(_116);
_118 = *(&local4);
_119 = ((frost$core$Object*) _118);
frost$core$Frost$unref$frost$core$Object$Q(_119);
*(&local4) = _114;
_122 = ((frost$core$Object*) _114);
frost$core$Frost$unref$frost$core$Object$Q(_122);
_124 = ((frost$core$Object*) _109);
frost$core$Frost$unref$frost$core$Object$Q(_124);
_126 = ((frost$core$Object*) _86);
frost$core$Frost$unref$frost$core$Object$Q(_126);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Tuple.frost:70
_129 = *(&local4);
// begin inline call to function org.frostlang.frostc.Compiler.literalType(t:org.frostlang.frostc.Type):org.frostlang.frostc.IR.Value from Tuple.frost:71:49
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:3493
_132 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(sizeof(org$frostlang$frostc$IR$Value), (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
_133 = (frost$core$Int) {14u};
// begin inline call to method org.frostlang.frostc.Type.ClassLiteral(compiler:org.frostlang.frostc.Compiler, t:org.frostlang.frostc.Type):org.frostlang.frostc.Type from Compiler.frost:3493:50
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:276
_136 = &param0->CLASS_TYPE;
_137 = *_136;
_138 = (frost$collections$Array*) frostObjectAlloc(sizeof(frost$collections$Array), (frost$core$Class*) &frost$collections$Array$class);
_139 = (frost$core$Int) {1u};
frost$collections$Array$init$frost$core$Int(_138, _139);
_141 = ((frost$core$Object*) _129);
frost$collections$Array$add$frost$collections$Array$T(_138, _141);
_143 = ((frost$collections$ListView*) _138);
_144 = org$frostlang$frostc$Type$generic$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type(_137, _143);
_145 = ((frost$core$Object*) _144);
frost$core$Frost$ref$frost$core$Object$Q(_145);
_147 = ((frost$core$Object*) _144);
frost$core$Frost$unref$frost$core$Object$Q(_147);
_149 = ((frost$core$Object*) _138);
frost$core$Frost$unref$frost$core$Object$Q(_149);
org$frostlang$frostc$IR$Value$init$frost$core$Int$org$frostlang$frostc$Type$org$frostlang$frostc$Type(_132, _133, _129, _144);
_153 = ((frost$core$Object*) _132);
frost$core$Frost$ref$frost$core$Object$Q(_153);
_155 = ((frost$core$Object*) _144);
frost$core$Frost$unref$frost$core$Object$Q(_155);
_157 = ((frost$core$Object*) _132);
frost$core$Frost$unref$frost$core$Object$Q(_157);
_160 = ((frost$collections$ListView*) param2);
_161 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(sizeof(org$frostlang$frostc$Compiler$TypeContext), (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
_162 = (frost$core$Int) {0u};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int(_161, _162);
_164 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$MethodPosition$org$frostlang$frostc$IR$Value$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, _132, _160, _161);
_165 = *(&local0);
// begin inline call to method org.frostlang.frostc.Compiler.cast(position:org.frostlang.frostc.MethodPosition, value:org.frostlang.frostc.IR.Value?, target:org.frostlang.frostc.Type):org.frostlang.frostc.IR.Value? from Tuple.frost:70:41
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:4097
_168 = (frost$core$Bit) {false};
_169 = org$frostlang$frostc$Compiler$cast$org$frostlang$frostc$MethodPosition$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$frost$core$Bit$R$org$frostlang$frostc$IR$Value$Q(param0, param1, _164, _165, _168);
_170 = ((frost$core$Object*) _169);
frost$core$Frost$ref$frost$core$Object$Q(_170);
_172 = ((frost$core$Object*) _169);
frost$core$Frost$unref$frost$core$Object$Q(_172);
_175 = ((frost$core$Object*) _169);
frost$core$Frost$ref$frost$core$Object$Q(_175);
_177 = ((frost$core$Object*) _169);
frost$core$Frost$unref$frost$core$Object$Q(_177);
_179 = ((frost$core$Object*) _164);
frost$core$Frost$unref$frost$core$Object$Q(_179);
_181 = ((frost$core$Object*) _161);
frost$core$Frost$unref$frost$core$Object$Q(_181);
_183 = ((frost$core$Object*) _132);
frost$core$Frost$unref$frost$core$Object$Q(_183);
_185 = *(&local4);
_186 = ((frost$core$Object*) _185);
frost$core$Frost$unref$frost$core$Object$Q(_186);
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
_189 = *(&local0);
_190 = ((frost$core$Object*) _189);
frost$core$Frost$unref$frost$core$Object$Q(_190);
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return _169;
block5:;
_194 = *(&local0);
_195 = ((frost$core$Object*) _194);
frost$core$Frost$unref$frost$core$Object$Q(_195);
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
goto block1;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Tuple.frost:75
_200 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(sizeof(org$frostlang$frostc$ASTNode), (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
_201 = (frost$core$Int) {43u};
// begin inline call to function org.frostlang.frostc.MethodPosition.get_asPosition():org.frostlang.frostc.Position from Tuple.frost:75:66
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodPosition.frost:40
_204 = param1.file;
_205 = param1.line;
_206 = param1.column;
_207 = org$frostlang$frostc$Position$init$frost$core$Int$frost$core$Int$frost$core$Int(_204, _205, _206);
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT(_200, _201, _207, param2);
_210 = org$frostlang$frostc$Compiler$preferredType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type$Q(param0, _200);
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
_212 = ((frost$core$Object*) _210);
frost$core$Frost$ref$frost$core$Object$Q(_212);
_214 = *(&local5);
_215 = ((frost$core$Object*) _214);
frost$core$Frost$unref$frost$core$Object$Q(_215);
*(&local5) = _210;
_218 = ((frost$core$Object*) _210);
frost$core$Frost$unref$frost$core$Object$Q(_218);
_220 = ((frost$core$Object*) _200);
frost$core$Frost$unref$frost$core$Object$Q(_220);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Tuple.frost:76
_223 = *(&local5);
_224 = _223 == NULL;
_225 = (frost$core$Bit) {_224};
_226 = _225.value;
if (_226) goto block22; else goto block23;
block22:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Tuple.frost:77
_229 = ((frost$collections$CollectionView*) param2);
_230 = (org$frostlang$frostc$expression$Tuple$_Closure4*) frostObjectAlloc(sizeof(org$frostlang$frostc$expression$Tuple$_Closure4), (frost$core$Class*) &org$frostlang$frostc$expression$Tuple$_Closure4$class);
org$frostlang$frostc$expression$Tuple$_Closure4$init$org$frostlang$frostc$Compiler(_230, param0);
_232 = frost$unsafe$Pointer$init$builtin_int((intptr_t) &org$frostlang$frostc$expression$Tuple$_Closure4$$anonymous3$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type).value;
_233 = (frost$core$MutableMethod*) frostObjectAlloc(sizeof(frost$core$MutableMethod), (frost$core$Class*) &frost$core$MutableMethod$class);
_234 = ((frost$core$Object*) _230);
// begin inline call to frost.core.MutableMethod.init(pointer:builtin_int, target:frost.core.Object?) from Tuple.frost:77:41
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableMethod.frost:30
_237 = &_233->pointer;
*_237 = _232;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableMethod.frost:31
frost$core$Frost$ref$frost$core$Object$Q(_234);
_241 = &_233->target;
_242 = *_241;
frost$core$Frost$unref$frost$core$Object$Q(_242);
_244 = &_233->target;
*_244 = _234;
_247 = _233;
_248 = _247;
ITable* $tmp72 = _229->$class->itable;
while ($tmp72->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp72 = $tmp72->next;
}
_249 = $tmp72->methods[9];
_250 = _249(_229, _248);
_251 = ((frost$collections$ListView*) _250);
_252 = org$frostlang$frostc$Type$tuple$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type(_251);
_253 = _252;
_254 = ((frost$core$Object*) _253);
frost$core$Frost$ref$frost$core$Object$Q(_254);
_256 = *(&local5);
_257 = ((frost$core$Object*) _256);
frost$core$Frost$unref$frost$core$Object$Q(_257);
*(&local5) = _253;
_260 = ((frost$core$Object*) _252);
frost$core$Frost$unref$frost$core$Object$Q(_260);
_262 = ((frost$core$Object*) _250);
frost$core$Frost$unref$frost$core$Object$Q(_262);
_264 = ((frost$core$Object*) _233);
frost$core$Frost$unref$frost$core$Object$Q(_264);
_266 = ((frost$core$Object*) _230);
frost$core$Frost$unref$frost$core$Object$Q(_266);
goto block23;
block23:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Tuple.frost:79
_270 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(sizeof(org$frostlang$frostc$Compiler$TypeContext), (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
_271 = (frost$core$Int) {3u};
_272 = *(&local5);
_273 = _272 != NULL;
_274 = (frost$core$Bit) {_273};
_275 = _274.value;
if (_275) goto block25; else goto block26;
block26:;
_277 = (frost$core$Int) {79u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s73, _277, &$s74);
abort(); // unreachable
block25:;
_280 = _272;
_281 = (frost$core$Bit) {false};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int$org$frostlang$frostc$Type$frost$core$Bit(_270, _271, _280, _281);
_283 = org$frostlang$frostc$expression$Tuple$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$MethodPosition$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, param2, _270);
*(&local6) = ((org$frostlang$frostc$IR$Value*) NULL);
_285 = ((frost$core$Object*) _283);
frost$core$Frost$ref$frost$core$Object$Q(_285);
_287 = *(&local6);
_288 = ((frost$core$Object*) _287);
frost$core$Frost$unref$frost$core$Object$Q(_288);
*(&local6) = _283;
_291 = ((frost$core$Object*) _283);
frost$core$Frost$unref$frost$core$Object$Q(_291);
_293 = ((frost$core$Object*) _270);
frost$core$Frost$unref$frost$core$Object$Q(_293);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Tuple.frost:80
_296 = *(&local6);
_297 = _296 == NULL;
_298 = (frost$core$Bit) {_297};
_299 = _298.value;
if (_299) goto block27; else goto block28;
block27:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Tuple.frost:81
_302 = ((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_302);
_304 = *(&local6);
_305 = ((frost$core$Object*) _304);
frost$core$Frost$unref$frost$core$Object$Q(_305);
*(&local6) = ((org$frostlang$frostc$IR$Value*) NULL);
_308 = *(&local5);
_309 = ((frost$core$Object*) _308);
frost$core$Frost$unref$frost$core$Object$Q(_309);
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block28:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Tuple.frost:83
_314 = *(&local6);
_315 = org$frostlang$frostc$Compiler$coerce$org$frostlang$frostc$MethodPosition$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, _314, param3);
_316 = ((frost$core$Object*) _315);
frost$core$Frost$ref$frost$core$Object$Q(_316);
_318 = ((frost$core$Object*) _315);
frost$core$Frost$unref$frost$core$Object$Q(_318);
_320 = *(&local6);
_321 = ((frost$core$Object*) _320);
frost$core$Frost$unref$frost$core$Object$Q(_321);
*(&local6) = ((org$frostlang$frostc$IR$Value*) NULL);
_324 = *(&local5);
_325 = ((frost$core$Object*) _324);
frost$core$Frost$unref$frost$core$Object$Q(_325);
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
return _315;

}
void org$frostlang$frostc$expression$Tuple$init(void* rawSelf) {
org$frostlang$frostc$expression$Tuple* param0 = (org$frostlang$frostc$expression$Tuple*) rawSelf;

return;

}
void org$frostlang$frostc$expression$Tuple$cleanup(void* rawSelf) {
org$frostlang$frostc$expression$Tuple* param0 = (org$frostlang$frostc$expression$Tuple*) rawSelf;

frost$core$Object* _1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Tuple.frost:13
_1 = ((frost$core$Object*) param0);
frost$core$Object$cleanup(_1);
return;

}

