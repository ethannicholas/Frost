#include "org/frostlang/frostc/MethodRef.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/Compiler.h"
#include "org/frostlang/frostc/Type.h"
#include "org/frostlang/frostc/MethodDecl.h"
#include "frost/collections/ListView.h"
#include "org/frostlang/frostc/Compiler/Resolution.h"
#include "frost/core/Bit.h"
#include "org/frostlang/frostc/MethodDecl/Kind.h"
#include "org/frostlang/frostc/Type/Kind.h"
#include "frost/collections/Array.h"
#include "org/frostlang/frostc/Pair.h"
#include "org/frostlang/frostc/Compiler/EnclosingContext.h"
#include "org/frostlang/frostc/IR/Block/ID.h"
#include "org/frostlang/frostc/Variable.h"
#include "frost/collections/HashMap.h"
#include "frost/core/Int.h"
#include "frost/core/Equatable.h"
#include "frost/core/Weak.h"
#include "org/frostlang/frostc/ClassDecl.h"
#include "org/frostlang/frostc/Annotations.h"
#include "org/frostlang/frostc/FixedArray.h"
#include "org/frostlang/frostc/Symbol.h"
#include "frost/collections/CollectionView.h"
#include "frost/core/Range.LTfrost/core/Int.GT.h"
#include "org/frostlang/frostc/Position.h"
#include "frost/collections/Stack.h"
#include "frost/collections/Iterable.h"
#include "frost/collections/Iterator.h"
#include "frost/core/Int64.h"
#include "org/frostlang/frostc/MethodDecl/GenericParameter.h"
#include "frost/collections/HashKey.h"
#include "frost/core/Frost.h"


static frost$core$String $s1;
org$frostlang$frostc$MethodRef$class_type org$frostlang$frostc$MethodRef$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { org$frostlang$frostc$MethodRef$get_asString$R$frost$core$String, org$frostlang$frostc$MethodRef$cleanup, org$frostlang$frostc$MethodRef$get_parameterCount$R$frost$core$Int, org$frostlang$frostc$MethodRef$parameterType$frost$core$Int$R$org$frostlang$frostc$Type, org$frostlang$frostc$MethodRef$get_returnType$R$org$frostlang$frostc$Type} };

typedef frost$core$Bit (*$fn2)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$String* (*$fn3)(frost$core$Object*);
typedef frost$core$Bit (*$fn4)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn5)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int (*$fn6)(frost$collections$CollectionView*);
typedef frost$collections$ListView* (*$fn7)(frost$collections$ListView*, frost$core$Range$LTfrost$core$Int$GT);
typedef frost$core$Bit (*$fn8)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn9)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn10)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn11)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Object* (*$fn12)(frost$collections$ListView*);
typedef frost$core$Bit (*$fn13)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int (*$fn14)(frost$collections$CollectionView*);
typedef frost$collections$ListView* (*$fn15)(frost$collections$ListView*, frost$core$Range$LTfrost$core$Int$GT);
typedef frost$core$Bit (*$fn16)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn17)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn18)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn19)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Object* (*$fn20)(frost$collections$ListView*);
typedef frost$collections$Iterator* (*$fn21)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn22)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn23)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn24)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn25)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn26)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn27)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Object* (*$fn28)(frost$collections$ListView*);
typedef frost$core$Bit (*$fn29)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int (*$fn30)(frost$collections$CollectionView*);
typedef frost$collections$ListView* (*$fn31)(frost$collections$ListView*, frost$core$Range$LTfrost$core$Int$GT);
typedef frost$core$Bit (*$fn32)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int (*$fn33)(frost$collections$CollectionView*);
typedef frost$collections$ListView* (*$fn34)(frost$collections$ListView*, frost$core$Range$LTfrost$core$Int$GT);
typedef frost$core$Int (*$fn35)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn36)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn37)(frost$collections$ListView*, frost$core$Int);
typedef frost$core$String* (*$fn45)(frost$core$Object*);
typedef frost$core$Bit (*$fn174)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn175)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn176)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn177)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int (*$fn178)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn198)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn199)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn200)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn201)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Object* (*$fn202)(frost$collections$ListView*);
typedef frost$core$String* (*$fn220)(frost$core$Object*);
typedef frost$core$String* (*$fn223)(frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x52\x65\x66", 30, -1382371847710016002, NULL };
static frost$core$String $s41 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x72\x65\x73\x6f\x6c\x76\x65\x64\x20\x6d\x65\x74\x68\x6f\x64\x20", 18, 903832688028414089, NULL };
static frost$core$String $s42 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s43 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x2e\x66\x72\x6f\x73\x74", 15, 1242067454507978657, NULL };
static frost$core$String $s44 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x73\x74\x75\x62", 9, -1038031786811403499, NULL };
static frost$core$String $s46 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x69\x6e\x64\x54\x79\x70\x65\x28", 9, -6510821745887560362, NULL };
static frost$core$String $s47 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s48 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x73\x74\x75\x62", 9, -1038031786811403499, NULL };
static frost$core$String $s49 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29\x20\x66\x61\x69\x6c\x65\x64", 8, -3227922608979297983, NULL };
static frost$core$String $s50 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x2e\x66\x72\x6f\x73\x74", 15, 1242067454507978657, NULL };
static frost$core$String $s57 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s58 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s59 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x43\x6c\x61\x73\x73", 16, -6222778858933417332, NULL };
static frost$core$String $s60 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s61 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s62 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s63 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s64 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s65 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s68 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x2e\x66\x72\x6f\x73\x74", 15, 1242067454507978657, NULL };
static frost$core$String $s81 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s82 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2e\x67\x65\x74\x5f\x72\x65\x74\x75\x72\x6e\x54\x79\x70\x65\x28\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 102, -8354441105231428072, NULL };
static frost$core$String $s83 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s84 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s89 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x2e\x66\x72\x6f\x73\x74", 15, 1242067454507978657, NULL };
static frost$core$String $s90 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s91 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s92 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s93 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s108 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s109 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2e\x67\x65\x74\x5f\x72\x65\x74\x75\x72\x6e\x54\x79\x70\x65\x28\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 102, -8354441105231428072, NULL };
static frost$core$String $s110 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s111 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s130 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s131 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2e\x67\x65\x74\x5f\x72\x65\x74\x75\x72\x6e\x54\x79\x70\x65\x28\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 102, -8354441105231428072, NULL };
static frost$core$String $s132 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s133 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s138 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s139 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s140 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s141 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s147 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s148 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s149 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4d\x61\x79\x62\x65", 16, -2055899992811416928, NULL };
static frost$core$String $s150 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s151 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s152 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s153 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s156 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s157 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s158 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x2e\x66\x72\x6f\x73\x74", 15, 1242067454507978657, NULL };
static frost$core$String $s159 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 89, 6559565496330182789, NULL };
static frost$core$String $s160 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x73\x74\x75\x62", 9, -1038031786811403499, NULL };
static frost$core$String $s161 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e", 1, -5808619545316717647, NULL };
static frost$core$String $s162 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e", 1, -5808619545316717647, NULL };
static frost$core$String $s163 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x2e\x66\x72\x6f\x73\x74", 15, 1242067454507978657, NULL };
static frost$core$String $s164 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77", 124, -5519893476519700322, NULL };
static frost$core$String $s166 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x2e\x66\x72\x6f\x73\x74", 15, 1242067454507978657, NULL };
static frost$core$String $s167 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c\x2e\x47\x65\x6e\x65\x72\x69\x63\x50\x61\x72\x61\x6d\x65\x74\x65\x72\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c\x2e\x47\x65\x6e\x65\x72\x69\x63\x50\x61\x72\x61\x6d\x65\x74\x65\x72\x3e", 185, -5094521397292670579, NULL };
static frost$core$String $s169 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x73\x74\x75\x62", 10, -775704626125802412, NULL };
static frost$core$String $s170 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s171 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x2e\x66\x72\x6f\x73\x74", 15, 1242067454507978657, NULL };
static frost$core$String $s172 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 145, -7136974715878729295, NULL };
static frost$core$String $s191 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s192 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2e\x67\x65\x74\x5f\x70\x61\x72\x61\x6d\x65\x74\x65\x72\x43\x6f\x75\x6e\x74\x28\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 95, -6421234203817919051, NULL };
static frost$core$String $s193 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s194 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s196 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s197 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s215 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s216 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2e\x67\x65\x74\x5f\x72\x65\x74\x75\x72\x6e\x54\x79\x70\x65\x28\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 102, -8354441105231428072, NULL };
static frost$core$String $s217 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s218 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s221 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x28", 10, -2809919968047225889, NULL };
static frost$core$String $s222 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s224 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };

void org$frostlang$frostc$MethodRef$init$org$frostlang$frostc$Compiler$org$frostlang$frostc$Type$org$frostlang$frostc$MethodDecl(org$frostlang$frostc$MethodRef* param0, org$frostlang$frostc$Compiler* param1, org$frostlang$frostc$Type* param2, org$frostlang$frostc$MethodDecl* param3) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:28
org$frostlang$frostc$MethodRef$init$org$frostlang$frostc$Compiler$org$frostlang$frostc$Type$org$frostlang$frostc$MethodDecl$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$Q(param0, param1, param2, param3, ((frost$collections$ListView*) NULL));
return;

}
void org$frostlang$frostc$MethodRef$init$org$frostlang$frostc$Compiler$org$frostlang$frostc$Type$org$frostlang$frostc$MethodDecl$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$Q(org$frostlang$frostc$MethodRef* param0, org$frostlang$frostc$Compiler* param1, org$frostlang$frostc$Type* param2, org$frostlang$frostc$MethodDecl* param3, frost$collections$ListView* param4) {

org$frostlang$frostc$Compiler$Resolution local0;
org$frostlang$frostc$Compiler$Resolution local1;
frost$core$Bit local2;
org$frostlang$frostc$Type* local3 = NULL;
org$frostlang$frostc$Type* local4 = NULL;
org$frostlang$frostc$MethodDecl$Kind local5;
org$frostlang$frostc$MethodDecl$Kind local6;
frost$core$Bit local7;
org$frostlang$frostc$Type$Kind local8;
org$frostlang$frostc$Type$Kind local9;
frost$collections$Array* local10 = NULL;
org$frostlang$frostc$Type$Kind local11;
org$frostlang$frostc$Type$Kind local12;
org$frostlang$frostc$Type$Kind local13;
org$frostlang$frostc$Type$Kind local14;
org$frostlang$frostc$Type$Kind local15;
org$frostlang$frostc$Type$Kind local16;
org$frostlang$frostc$Type$Kind local17;
org$frostlang$frostc$Type$Kind local18;
org$frostlang$frostc$Type$Kind local19;
org$frostlang$frostc$Type$Kind local20;
org$frostlang$frostc$Type$Kind local21;
org$frostlang$frostc$Type$Kind local22;
org$frostlang$frostc$Type$Kind local23;
org$frostlang$frostc$MethodDecl$Kind local24;
org$frostlang$frostc$MethodDecl$Kind local25;
org$frostlang$frostc$Type$Kind local26;
org$frostlang$frostc$Type$Kind local27;
org$frostlang$frostc$Type$Kind local28;
org$frostlang$frostc$Type$Kind local29;
org$frostlang$frostc$Type$Kind local30;
org$frostlang$frostc$Type$Kind local31;
org$frostlang$frostc$Type$Kind local32;
org$frostlang$frostc$Type$Kind local33;
org$frostlang$frostc$Type$Kind local34;
org$frostlang$frostc$Type$Kind local35;
org$frostlang$frostc$Type$Kind local36;
org$frostlang$frostc$Type$Kind local37;
org$frostlang$frostc$Type$Kind local38;
org$frostlang$frostc$Pair* local39 = NULL;
org$frostlang$frostc$Compiler$EnclosingContext* local40 = NULL;
org$frostlang$frostc$IR$Block$ID$nullable local41;
org$frostlang$frostc$Variable* local42 = NULL;
org$frostlang$frostc$Type$Kind local43;
org$frostlang$frostc$Type$Kind local44;
org$frostlang$frostc$Type$Kind local45;
org$frostlang$frostc$Type$Kind local46;
org$frostlang$frostc$Type$Kind local47;
org$frostlang$frostc$Type$Kind local48;
org$frostlang$frostc$Type$Kind local49;
org$frostlang$frostc$Type$Kind local50;
org$frostlang$frostc$Type* local51 = NULL;
frost$core$Bit local52;
org$frostlang$frostc$Type$Kind local53;
org$frostlang$frostc$Type$Kind local54;
org$frostlang$frostc$Type* local55 = NULL;
frost$core$String* local56 = NULL;
frost$collections$HashMap* local57 = NULL;
frost$core$Int local58;
org$frostlang$frostc$Compiler$Resolution* _1;
org$frostlang$frostc$Compiler$Resolution _2;
frost$core$Equatable* _3;
frost$core$Equatable* _4;
frost$core$Int _5;
frost$core$Int* _8;
org$frostlang$frostc$Compiler$Resolution _10;
org$frostlang$frostc$Compiler$Resolution _13;
frost$core$Equatable* _14;
$fn2 _15;
frost$core$Bit _16;
bool _17;
frost$core$Int _19;
frost$core$String* _20;
frost$core$String* _21;
frost$core$String* _22;
frost$core$Object* _24;
frost$core$Object* _26;
frost$core$Object* _28;
frost$core$Object* _31;
frost$core$Object* _33;
bool _36;
frost$core$Bit _37;
bool _38;
frost$collections$Array** _40;
frost$collections$Array* _41;
bool _42;
frost$core$Bit _43;
frost$core$Bit _48;
frost$core$Bit* _49;
frost$core$Object* _52;
org$frostlang$frostc$MethodDecl** _54;
org$frostlang$frostc$MethodDecl* _55;
frost$core$Object* _56;
org$frostlang$frostc$MethodDecl** _58;
frost$core$Object* _61;
org$frostlang$frostc$Type** _63;
org$frostlang$frostc$Type* _64;
frost$core$Object* _65;
org$frostlang$frostc$Type** _67;
frost$core$Weak** _70;
frost$core$Weak* _71;
frost$core$Weak* _72;
frost$core$Bit* _77;
frost$core$Bit _78;
bool _80;
frost$core$Int _82;
frost$core$Object** _86;
frost$core$Object* _87;
frost$core$Object* _88;
frost$core$Object* _89;
org$frostlang$frostc$ClassDecl* _92;
org$frostlang$frostc$Type* _93;
frost$core$Object* _95;
org$frostlang$frostc$Type* _97;
frost$core$Object* _98;
frost$core$Object* _101;
frost$core$Object* _103;
org$frostlang$frostc$Type* _106;
bool _107;
frost$core$Bit _108;
bool _109;
frost$core$Int _111;
frost$core$Object* _112;
$fn3 _115;
frost$core$String* _116;
frost$core$String* _117;
frost$core$Object* _118;
frost$core$Object* _120;
frost$core$Object* _122;
frost$core$String* _125;
frost$core$Weak** _126;
frost$core$Weak* _127;
frost$core$Weak* _128;
frost$core$Bit* _133;
frost$core$Bit _134;
bool _136;
frost$core$Int _138;
frost$core$Object** _142;
frost$core$Object* _143;
frost$core$Object* _144;
frost$core$Object* _145;
org$frostlang$frostc$ClassDecl* _148;
frost$core$String** _149;
frost$core$String* _150;
frost$core$String* _151;
frost$core$String* _152;
frost$core$Object* _154;
frost$core$Object* _156;
frost$core$Object* _158;
frost$core$Object* _160;
frost$core$Object* _162;
org$frostlang$frostc$Type* _166;
frost$core$Object* _168;
org$frostlang$frostc$Type* _170;
frost$core$Object* _171;
frost$core$Object* _174;
org$frostlang$frostc$Annotations** _177;
org$frostlang$frostc$Annotations* _178;
frost$core$Int* _181;
frost$core$Int _182;
frost$core$Int _183;
int64_t _186;
int64_t _187;
int64_t _188;
frost$core$Int _189;
frost$core$Int _191;
int64_t _192;
int64_t _193;
bool _194;
frost$core$Bit _195;
bool _199;
bool _200;
frost$core$Bit _201;
bool _203;
org$frostlang$frostc$MethodDecl$Kind* _205;
org$frostlang$frostc$MethodDecl$Kind _206;
frost$core$Equatable* _207;
frost$core$Equatable* _208;
frost$core$Int _209;
frost$core$Int* _212;
org$frostlang$frostc$MethodDecl$Kind _214;
org$frostlang$frostc$MethodDecl$Kind _217;
frost$core$Equatable* _218;
$fn4 _219;
frost$core$Bit _220;
bool _221;
frost$core$Object* _222;
frost$core$Object* _224;
org$frostlang$frostc$Type$Kind* _229;
org$frostlang$frostc$Type$Kind _230;
frost$core$Equatable* _231;
frost$core$Equatable* _232;
frost$core$Int _233;
frost$core$Int* _236;
org$frostlang$frostc$Type$Kind _238;
org$frostlang$frostc$Type$Kind _241;
frost$core$Equatable* _242;
$fn5 _243;
frost$core$Bit _244;
bool _245;
org$frostlang$frostc$FixedArray** _249;
org$frostlang$frostc$FixedArray* _250;
bool _251;
frost$core$Bit _252;
bool _253;
frost$core$Int _255;
org$frostlang$frostc$FixedArray* _258;
frost$core$Object* _259;
org$frostlang$frostc$FixedArray* _262;
frost$core$Int _263;
frost$core$Object* _264;
org$frostlang$frostc$Type* _265;
org$frostlang$frostc$Symbol* _266;
frost$core$String** _267;
frost$core$String* _268;
frost$core$Bit _269;
frost$core$Object* _270;
frost$core$Object* _272;
frost$core$Bit _278;
frost$core$Object* _279;
frost$core$Object* _281;
bool _284;
frost$collections$Array* _287;
frost$collections$Array* _288;
frost$core$Object* _291;
frost$collections$Array* _293;
frost$core$Object* _294;
frost$core$Object* _297;
frost$collections$Array* _300;
frost$collections$Array* _301;
org$frostlang$frostc$FixedArray** _304;
org$frostlang$frostc$FixedArray* _305;
bool _306;
frost$core$Bit _307;
bool _308;
frost$core$Int _310;
org$frostlang$frostc$FixedArray* _313;
frost$core$Object* _314;
org$frostlang$frostc$FixedArray* _317;
frost$core$Int _318;
frost$core$Object* _319;
org$frostlang$frostc$Type* _320;
frost$core$Object* _321;
frost$core$Object* _323;
frost$core$Object* _325;
frost$collections$Array* _328;
frost$collections$Array* _329;
org$frostlang$frostc$Type* _330;
org$frostlang$frostc$FixedArray** _333;
org$frostlang$frostc$FixedArray* _334;
bool _335;
frost$core$Bit _336;
bool _337;
frost$core$Int _339;
org$frostlang$frostc$FixedArray* _342;
frost$core$Object* _343;
frost$collections$ListView* _346;
frost$collections$ListView* _347;
frost$core$Int _348;
org$frostlang$frostc$Type* _349;
org$frostlang$frostc$FixedArray** _352;
org$frostlang$frostc$FixedArray* _353;
bool _354;
frost$core$Bit _355;
bool _356;
frost$core$Int _358;
org$frostlang$frostc$FixedArray* _361;
frost$core$Object* _362;
frost$collections$CollectionView* _365;
$fn6 _366;
frost$core$Int _367;
frost$core$Int _368;
int64_t _369;
int64_t _370;
int64_t _371;
frost$core$Int _372;
frost$core$Bit _373;
frost$core$Range$LTfrost$core$Int$GT _374;
$fn7 _375;
frost$collections$ListView* _376;
frost$collections$ListView* _377;
frost$collections$CollectionView* _378;
frost$collections$CollectionView* _379;
frost$core$Object* _381;
frost$core$Object* _383;
frost$core$Object* _385;
org$frostlang$frostc$MethodDecl$Kind* _389;
org$frostlang$frostc$MethodDecl$Kind _390;
frost$core$Int _391;
frost$core$Int _392;
int64_t _395;
int64_t _396;
bool _397;
frost$core$Bit _398;
bool _400;
frost$core$Int _403;
frost$core$Int* _406;
org$frostlang$frostc$Type$Kind _408;
org$frostlang$frostc$Type$Kind _411;
frost$core$Int _414;
int64_t _417;
int64_t _418;
bool _419;
frost$core$Bit _420;
bool _422;
frost$core$Int _425;
frost$core$Int* _428;
org$frostlang$frostc$Type$Kind _430;
org$frostlang$frostc$Type$Kind _433;
frost$core$Int _437;
org$frostlang$frostc$Type* _441;
org$frostlang$frostc$Symbol* _442;
org$frostlang$frostc$Position* _443;
org$frostlang$frostc$Position _444;
org$frostlang$frostc$Type$Kind _445;
frost$collections$Array* _446;
frost$collections$ListView* _447;
org$frostlang$frostc$Type* _448;
org$frostlang$frostc$Type$Kind* _450;
org$frostlang$frostc$Type$Kind _451;
frost$core$Equatable* _452;
frost$core$Equatable* _453;
frost$core$Int _454;
frost$core$Int* _457;
org$frostlang$frostc$Type$Kind _459;
org$frostlang$frostc$Type$Kind _462;
frost$core$Equatable* _463;
$fn8 _464;
frost$core$Bit _465;
bool _466;
frost$core$Object* _467;
frost$core$Object* _469;
org$frostlang$frostc$Type$Kind* _472;
org$frostlang$frostc$Type$Kind _473;
frost$core$Equatable* _474;
frost$core$Equatable* _475;
frost$core$Int _476;
frost$core$Int* _479;
org$frostlang$frostc$Type$Kind _481;
org$frostlang$frostc$Type$Kind _484;
frost$core$Equatable* _485;
$fn9 _486;
frost$core$Bit _487;
bool _488;
frost$core$Object* _489;
frost$core$Object* _491;
org$frostlang$frostc$Type$Kind* _494;
org$frostlang$frostc$Type$Kind _495;
frost$core$Equatable* _496;
frost$core$Equatable* _497;
frost$core$Int _498;
frost$core$Int* _501;
org$frostlang$frostc$Type$Kind _503;
org$frostlang$frostc$Type$Kind _506;
frost$core$Equatable* _507;
$fn10 _508;
frost$core$Bit _509;
bool _510;
frost$core$Object* _511;
frost$core$Object* _513;
org$frostlang$frostc$Type$Kind* _516;
org$frostlang$frostc$Type$Kind _517;
frost$core$Equatable* _518;
frost$core$Equatable* _519;
frost$core$Int _520;
frost$core$Int* _523;
org$frostlang$frostc$Type$Kind _525;
org$frostlang$frostc$Type$Kind _528;
frost$core$Equatable* _529;
$fn11 _530;
frost$core$Bit _531;
bool _532;
frost$core$Object* _533;
frost$core$Object* _535;
frost$core$Int _538;
org$frostlang$frostc$FixedArray** _544;
org$frostlang$frostc$FixedArray* _545;
bool _546;
frost$core$Bit _547;
bool _548;
frost$core$Int _550;
org$frostlang$frostc$FixedArray* _553;
frost$core$Object* _554;
frost$collections$ListView* _557;
$fn12 _558;
frost$core$Object* _559;
org$frostlang$frostc$Type* _560;
frost$core$Object* _561;
frost$core$Object* _563;
frost$core$Object* _565;
org$frostlang$frostc$Type* _568;
frost$core$Int* _569;
frost$core$Int _570;
org$frostlang$frostc$Type* _571;
frost$core$Object* _572;
org$frostlang$frostc$Type* _574;
frost$core$Object* _575;
frost$core$Object* _578;
frost$core$Object* _580;
frost$collections$Array* _582;
frost$core$Object* _583;
frost$core$Bit _588;
bool _591;
bool _592;
frost$core$Bit _593;
bool _595;
org$frostlang$frostc$MethodDecl$Kind* _597;
org$frostlang$frostc$MethodDecl$Kind _598;
frost$core$Equatable* _599;
frost$core$Equatable* _600;
frost$core$Int _601;
frost$core$Int* _604;
org$frostlang$frostc$MethodDecl$Kind _606;
org$frostlang$frostc$MethodDecl$Kind _609;
frost$core$Equatable* _610;
$fn13 _611;
frost$core$Bit _612;
bool _613;
frost$core$Object* _614;
frost$core$Object* _616;
org$frostlang$frostc$MethodDecl$Kind* _621;
org$frostlang$frostc$MethodDecl$Kind _622;
frost$core$Int _623;
frost$core$Int _624;
int64_t _627;
int64_t _628;
bool _629;
frost$core$Bit _630;
bool _632;
frost$core$Int _635;
frost$core$Int* _638;
org$frostlang$frostc$Type$Kind _640;
org$frostlang$frostc$Type$Kind _643;
frost$core$Int _646;
int64_t _649;
int64_t _650;
bool _651;
frost$core$Bit _652;
bool _654;
frost$core$Int _657;
frost$core$Int* _660;
org$frostlang$frostc$Type$Kind _662;
org$frostlang$frostc$Type$Kind _665;
frost$core$Int _669;
org$frostlang$frostc$Type* _673;
org$frostlang$frostc$Symbol* _674;
org$frostlang$frostc$Position* _675;
org$frostlang$frostc$Position _676;
org$frostlang$frostc$Type$Kind _677;
org$frostlang$frostc$Type* _678;
org$frostlang$frostc$FixedArray** _681;
org$frostlang$frostc$FixedArray* _682;
bool _683;
frost$core$Bit _684;
bool _685;
frost$core$Int _687;
org$frostlang$frostc$FixedArray* _690;
frost$core$Object* _691;
frost$collections$ListView* _694;
frost$collections$ListView* _695;
frost$core$Int _696;
org$frostlang$frostc$Type* _697;
org$frostlang$frostc$FixedArray** _700;
org$frostlang$frostc$FixedArray* _701;
bool _702;
frost$core$Bit _703;
bool _704;
frost$core$Int _706;
org$frostlang$frostc$FixedArray* _709;
frost$core$Object* _710;
frost$collections$CollectionView* _713;
$fn14 _714;
frost$core$Int _715;
frost$core$Int _716;
int64_t _717;
int64_t _718;
int64_t _719;
frost$core$Int _720;
frost$core$Bit _721;
frost$core$Range$LTfrost$core$Int$GT _722;
$fn15 _723;
frost$collections$ListView* _724;
frost$collections$ListView* _725;
org$frostlang$frostc$Type* _726;
org$frostlang$frostc$Type$Kind* _728;
org$frostlang$frostc$Type$Kind _729;
frost$core$Equatable* _730;
frost$core$Equatable* _731;
frost$core$Int _732;
frost$core$Int* _735;
org$frostlang$frostc$Type$Kind _737;
org$frostlang$frostc$Type$Kind _740;
frost$core$Equatable* _741;
$fn16 _742;
frost$core$Bit _743;
bool _744;
frost$core$Object* _745;
frost$core$Object* _747;
org$frostlang$frostc$Type$Kind* _750;
org$frostlang$frostc$Type$Kind _751;
frost$core$Equatable* _752;
frost$core$Equatable* _753;
frost$core$Int _754;
frost$core$Int* _757;
org$frostlang$frostc$Type$Kind _759;
org$frostlang$frostc$Type$Kind _762;
frost$core$Equatable* _763;
$fn17 _764;
frost$core$Bit _765;
bool _766;
frost$core$Object* _767;
frost$core$Object* _769;
org$frostlang$frostc$Type$Kind* _772;
org$frostlang$frostc$Type$Kind _773;
frost$core$Equatable* _774;
frost$core$Equatable* _775;
frost$core$Int _776;
frost$core$Int* _779;
org$frostlang$frostc$Type$Kind _781;
org$frostlang$frostc$Type$Kind _784;
frost$core$Equatable* _785;
$fn18 _786;
frost$core$Bit _787;
bool _788;
frost$core$Object* _789;
frost$core$Object* _791;
org$frostlang$frostc$Type$Kind* _794;
org$frostlang$frostc$Type$Kind _795;
frost$core$Equatable* _796;
frost$core$Equatable* _797;
frost$core$Int _798;
frost$core$Int* _801;
org$frostlang$frostc$Type$Kind _803;
org$frostlang$frostc$Type$Kind _806;
frost$core$Equatable* _807;
$fn19 _808;
frost$core$Bit _809;
bool _810;
frost$core$Object* _811;
frost$core$Object* _813;
frost$core$Int _816;
org$frostlang$frostc$FixedArray** _822;
org$frostlang$frostc$FixedArray* _823;
bool _824;
frost$core$Bit _825;
bool _826;
frost$core$Int _828;
org$frostlang$frostc$FixedArray* _831;
frost$core$Object* _832;
frost$collections$ListView* _835;
$fn20 _836;
frost$core$Object* _837;
org$frostlang$frostc$Type* _838;
frost$core$Object* _839;
frost$core$Object* _841;
frost$core$Object* _843;
org$frostlang$frostc$Type* _846;
frost$core$Int* _847;
frost$core$Int _848;
org$frostlang$frostc$Type* _849;
frost$core$Object* _850;
org$frostlang$frostc$Type* _852;
frost$core$Object* _853;
frost$core$Object* _856;
frost$core$Object* _858;
frost$core$Object* _860;
frost$core$Object* _862;
frost$core$Object* _864;
frost$collections$Stack** _871;
frost$collections$Stack* _872;
frost$collections$Iterable* _873;
frost$collections$Iterable* _874;
$fn21 _875;
frost$collections$Iterator* _876;
frost$collections$Iterator* _877;
frost$collections$Iterator* _879;
$fn22 _880;
frost$core$Bit _881;
bool _882;
frost$collections$Iterator* _885;
$fn23 _886;
frost$core$Object* _887;
org$frostlang$frostc$Compiler$EnclosingContext* _888;
frost$core$Object* _889;
org$frostlang$frostc$Compiler$EnclosingContext* _891;
frost$core$Object* _892;
org$frostlang$frostc$Compiler$EnclosingContext* _896;
frost$core$Int* _897;
frost$core$Int _898;
frost$core$Int _899;
int64_t _902;
int64_t _903;
bool _904;
frost$core$Bit _905;
bool _907;
org$frostlang$frostc$IR$Block$ID$nullable* _909;
org$frostlang$frostc$IR$Block$ID$nullable _910;
org$frostlang$frostc$Variable** _912;
org$frostlang$frostc$Variable* _913;
frost$core$Object* _915;
org$frostlang$frostc$Variable* _917;
frost$core$Object* _918;
org$frostlang$frostc$Pair* _922;
org$frostlang$frostc$Pair* _923;
org$frostlang$frostc$IR$Block$ID$nullable _924;
frost$core$Object* _925;
org$frostlang$frostc$Variable* _926;
frost$core$Object* _927;
org$frostlang$frostc$Pair* _929;
frost$core$Object* _930;
frost$core$Object* _932;
frost$core$Object* _934;
org$frostlang$frostc$Variable* _936;
frost$core$Object* _937;
frost$core$Object* _940;
org$frostlang$frostc$Compiler$EnclosingContext* _942;
frost$core$Object* _943;
frost$core$Object* _946;
frost$core$Object* _949;
frost$core$Int _952;
int64_t _955;
int64_t _956;
bool _957;
frost$core$Bit _958;
bool _960;
frost$core$Object* _963;
frost$core$Object* _965;
org$frostlang$frostc$Compiler$EnclosingContext* _967;
frost$core$Object* _968;
frost$core$Object* _971;
frost$core$Object* _974;
frost$core$Object* _977;
org$frostlang$frostc$Compiler$EnclosingContext* _979;
frost$core$Object* _980;
frost$core$Object* _984;
frost$core$Object* _987;
frost$core$Object* _990;
org$frostlang$frostc$Pair* _993;
bool _994;
frost$core$Bit _995;
bool _996;
frost$core$Object* _997;
org$frostlang$frostc$Type* _1001;
org$frostlang$frostc$Type$Kind* _1003;
org$frostlang$frostc$Type$Kind _1004;
frost$core$Equatable* _1005;
frost$core$Equatable* _1006;
frost$core$Int _1007;
frost$core$Int* _1010;
org$frostlang$frostc$Type$Kind _1012;
org$frostlang$frostc$Type$Kind _1015;
frost$core$Equatable* _1016;
$fn24 _1017;
frost$core$Bit _1018;
bool _1019;
frost$core$Object* _1020;
frost$core$Object* _1022;
org$frostlang$frostc$Type$Kind* _1025;
org$frostlang$frostc$Type$Kind _1026;
frost$core$Equatable* _1027;
frost$core$Equatable* _1028;
frost$core$Int _1029;
frost$core$Int* _1032;
org$frostlang$frostc$Type$Kind _1034;
org$frostlang$frostc$Type$Kind _1037;
frost$core$Equatable* _1038;
$fn25 _1039;
frost$core$Bit _1040;
bool _1041;
frost$core$Object* _1042;
frost$core$Object* _1044;
org$frostlang$frostc$Type$Kind* _1047;
org$frostlang$frostc$Type$Kind _1048;
frost$core$Equatable* _1049;
frost$core$Equatable* _1050;
frost$core$Int _1051;
frost$core$Int* _1054;
org$frostlang$frostc$Type$Kind _1056;
org$frostlang$frostc$Type$Kind _1059;
frost$core$Equatable* _1060;
$fn26 _1061;
frost$core$Bit _1062;
bool _1063;
frost$core$Object* _1064;
frost$core$Object* _1066;
org$frostlang$frostc$Type$Kind* _1069;
org$frostlang$frostc$Type$Kind _1070;
frost$core$Equatable* _1071;
frost$core$Equatable* _1072;
frost$core$Int _1073;
frost$core$Int* _1076;
org$frostlang$frostc$Type$Kind _1078;
org$frostlang$frostc$Type$Kind _1081;
frost$core$Equatable* _1082;
$fn27 _1083;
frost$core$Bit _1084;
bool _1085;
frost$core$Object* _1086;
frost$core$Object* _1088;
frost$core$Int _1091;
org$frostlang$frostc$FixedArray** _1097;
org$frostlang$frostc$FixedArray* _1098;
bool _1099;
frost$core$Bit _1100;
bool _1101;
frost$core$Int _1103;
org$frostlang$frostc$FixedArray* _1106;
frost$core$Object* _1107;
frost$collections$ListView* _1110;
$fn28 _1111;
frost$core$Object* _1112;
org$frostlang$frostc$Type* _1113;
frost$core$Object* _1114;
frost$core$Object* _1116;
frost$core$Object* _1118;
frost$core$Object* _1122;
org$frostlang$frostc$Type* _1124;
frost$core$Object* _1125;
frost$core$Object* _1128;
org$frostlang$frostc$Type* _1131;
org$frostlang$frostc$Type** _1132;
org$frostlang$frostc$Type* _1133;
org$frostlang$frostc$Type* _1134;
org$frostlang$frostc$Symbol* _1137;
frost$core$String** _1138;
frost$core$String* _1139;
org$frostlang$frostc$Symbol* _1140;
frost$core$String** _1141;
frost$core$String* _1142;
frost$core$Bit _1143;
bool _1144;
org$frostlang$frostc$Type$Kind* _1146;
org$frostlang$frostc$Type$Kind _1147;
frost$core$Equatable* _1148;
frost$core$Equatable* _1149;
org$frostlang$frostc$Type$Kind* _1150;
org$frostlang$frostc$Type$Kind _1151;
frost$core$Equatable* _1152;
$fn29 _1153;
frost$core$Bit _1154;
frost$core$Object* _1155;
frost$core$Object* _1157;
frost$core$Bit _1163;
bool _1165;
frost$core$Object* _1166;
org$frostlang$frostc$Type* _1170;
org$frostlang$frostc$Symbol* _1171;
org$frostlang$frostc$Position* _1172;
org$frostlang$frostc$Position _1173;
org$frostlang$frostc$Type* _1174;
org$frostlang$frostc$Type$Kind* _1175;
org$frostlang$frostc$Type$Kind _1176;
org$frostlang$frostc$Type* _1177;
org$frostlang$frostc$FixedArray** _1180;
org$frostlang$frostc$FixedArray* _1181;
bool _1182;
frost$core$Bit _1183;
bool _1184;
frost$core$Int _1186;
org$frostlang$frostc$FixedArray* _1189;
frost$core$Object* _1190;
frost$collections$ListView* _1193;
frost$collections$ListView* _1194;
frost$core$Int _1195;
org$frostlang$frostc$Type* _1196;
org$frostlang$frostc$FixedArray** _1199;
org$frostlang$frostc$FixedArray* _1200;
bool _1201;
frost$core$Bit _1202;
bool _1203;
frost$core$Int _1205;
org$frostlang$frostc$FixedArray* _1208;
frost$core$Object* _1209;
frost$collections$CollectionView* _1212;
$fn30 _1213;
frost$core$Int _1214;
frost$core$Int _1215;
int64_t _1216;
int64_t _1217;
int64_t _1218;
frost$core$Int _1219;
frost$core$Bit _1220;
frost$core$Range$LTfrost$core$Int$GT _1221;
$fn31 _1222;
frost$collections$ListView* _1223;
frost$collections$ListView* _1224;
org$frostlang$frostc$Type** _1225;
org$frostlang$frostc$Type* _1226;
org$frostlang$frostc$Type* _1227;
frost$core$Int* _1228;
frost$core$Int _1229;
org$frostlang$frostc$Type* _1230;
frost$core$Object* _1231;
org$frostlang$frostc$Type* _1233;
frost$core$Object* _1234;
frost$core$Object* _1237;
frost$core$Object* _1239;
frost$core$Object* _1241;
frost$core$Object* _1243;
org$frostlang$frostc$Type* _1247;
org$frostlang$frostc$Type$Kind* _1248;
org$frostlang$frostc$Type$Kind _1249;
frost$core$Equatable* _1250;
frost$core$Equatable* _1251;
frost$core$Int _1252;
frost$core$Int* _1255;
org$frostlang$frostc$Type$Kind _1257;
org$frostlang$frostc$Type$Kind _1260;
frost$core$Equatable* _1261;
$fn32 _1262;
frost$core$Bit _1263;
bool _1264;
frost$core$Object* _1265;
frost$core$Object* _1267;
org$frostlang$frostc$Type* _1270;
org$frostlang$frostc$FixedArray** _1273;
org$frostlang$frostc$FixedArray* _1274;
bool _1275;
frost$core$Bit _1276;
bool _1277;
frost$core$Int _1279;
org$frostlang$frostc$FixedArray* _1282;
frost$core$Object* _1283;
org$frostlang$frostc$FixedArray* _1286;
frost$core$Int _1287;
frost$core$Object* _1288;
org$frostlang$frostc$Type* _1289;
org$frostlang$frostc$Symbol* _1290;
frost$core$String** _1291;
frost$core$String* _1292;
frost$core$Bit _1293;
bool _1294;
frost$core$Object* _1295;
frost$core$Object* _1297;
org$frostlang$frostc$Type* _1301;
org$frostlang$frostc$Symbol* _1302;
org$frostlang$frostc$Position* _1303;
org$frostlang$frostc$Position _1304;
org$frostlang$frostc$Type* _1305;
org$frostlang$frostc$Type$Kind* _1306;
org$frostlang$frostc$Type$Kind _1307;
org$frostlang$frostc$Type* _1308;
org$frostlang$frostc$FixedArray** _1311;
org$frostlang$frostc$FixedArray* _1312;
bool _1313;
frost$core$Bit _1314;
bool _1315;
frost$core$Int _1317;
org$frostlang$frostc$FixedArray* _1320;
frost$core$Object* _1321;
frost$collections$ListView* _1324;
frost$collections$ListView* _1325;
frost$core$Int _1326;
org$frostlang$frostc$Type* _1327;
org$frostlang$frostc$FixedArray** _1330;
org$frostlang$frostc$FixedArray* _1331;
bool _1332;
frost$core$Bit _1333;
bool _1334;
frost$core$Int _1336;
org$frostlang$frostc$FixedArray* _1339;
frost$core$Object* _1340;
frost$collections$CollectionView* _1343;
$fn33 _1344;
frost$core$Int _1345;
frost$core$Int _1346;
int64_t _1347;
int64_t _1348;
int64_t _1349;
frost$core$Int _1350;
frost$core$Bit _1351;
frost$core$Range$LTfrost$core$Int$GT _1352;
$fn34 _1353;
frost$collections$ListView* _1354;
frost$collections$ListView* _1355;
org$frostlang$frostc$Type* _1356;
org$frostlang$frostc$FixedArray** _1359;
org$frostlang$frostc$FixedArray* _1360;
bool _1361;
frost$core$Bit _1362;
bool _1363;
frost$core$Int _1365;
org$frostlang$frostc$FixedArray* _1368;
frost$core$Object* _1369;
org$frostlang$frostc$FixedArray* _1372;
frost$core$Int _1373;
frost$core$Object* _1374;
org$frostlang$frostc$Type* _1375;
org$frostlang$frostc$Type* _1376;
frost$core$Int* _1377;
frost$core$Int _1378;
org$frostlang$frostc$Type* _1379;
frost$core$Object* _1380;
org$frostlang$frostc$Type* _1382;
frost$core$Object* _1383;
frost$core$Object* _1386;
frost$core$Object* _1388;
frost$core$Object* _1390;
frost$core$Object* _1392;
frost$core$Object* _1394;
frost$core$Object* _1396;
org$frostlang$frostc$Type* _1400;
frost$core$Object* _1401;
org$frostlang$frostc$Type* _1406;
bool _1407;
frost$core$Bit _1408;
bool _1409;
frost$core$Int _1411;
org$frostlang$frostc$Type* _1414;
org$frostlang$frostc$Type* _1415;
org$frostlang$frostc$Type* _1416;
frost$core$Object* _1418;
org$frostlang$frostc$Type* _1420;
frost$core$Object* _1421;
frost$core$Object* _1424;
bool _1427;
frost$core$Bit _1428;
bool _1429;
frost$core$Weak** _1432;
frost$core$Weak* _1433;
frost$core$Weak* _1434;
frost$core$Bit* _1439;
frost$core$Bit _1440;
bool _1442;
frost$core$Int _1444;
frost$core$Object** _1448;
frost$core$Object* _1449;
frost$core$Object* _1450;
frost$core$Object* _1451;
org$frostlang$frostc$ClassDecl* _1454;
frost$core$String** _1455;
frost$core$String* _1456;
frost$core$String* _1457;
org$frostlang$frostc$Symbol* _1458;
frost$core$String** _1459;
frost$core$String* _1460;
frost$core$String* _1461;
frost$core$String* _1462;
frost$core$Object* _1464;
frost$core$String* _1466;
frost$core$Object* _1467;
frost$core$Object* _1470;
frost$core$Object* _1472;
frost$core$Object* _1474;
frost$core$Object* _1476;
frost$collections$HashMap* _1479;
frost$collections$HashMap* _1480;
frost$core$Object* _1483;
frost$collections$HashMap* _1485;
frost$core$Object* _1486;
frost$core$Object* _1489;
frost$core$Int _1492;
bool _1493;
frost$core$Bit _1494;
bool _1495;
frost$core$Int _1497;
frost$collections$CollectionView* _1500;
$fn35 _1501;
frost$core$Int _1502;
frost$core$Bit _1503;
frost$core$Range$LTfrost$core$Int$GT _1504;
frost$core$Int _1505;
frost$core$Int _1507;
frost$core$Bit _1508;
bool _1509;
frost$core$Int _1510;
int64_t _1512;
int64_t _1513;
bool _1514;
frost$core$Bit _1515;
bool _1516;
int64_t _1518;
int64_t _1519;
bool _1520;
frost$core$Bit _1521;
bool _1522;
frost$collections$HashMap* _1525;
frost$collections$HashMap* _1526;
frost$core$String* _1527;
frost$collections$Array** _1528;
frost$collections$Array* _1529;
bool _1530;
frost$core$Bit _1531;
bool _1532;
frost$core$Int _1534;
frost$collections$Array* _1537;
frost$collections$Array* _1538;
frost$core$Int _1539;
frost$core$Int _1541;
int64_t _1542;
int64_t _1543;
bool _1544;
frost$core$Bit _1545;
bool _1546;
frost$collections$CollectionView* _1548;
$fn36 _1549;
frost$core$Int _1550;
int64_t _1551;
int64_t _1552;
bool _1553;
frost$core$Bit _1554;
bool _1555;
frost$core$Int _1557;
frost$core$Object*** _1561;
frost$core$Object** _1562;
frost$core$Int64 _1563;
int64_t _1564;
frost$core$Object* _1565;
frost$core$Object* _1566;
org$frostlang$frostc$MethodDecl$GenericParameter* _1569;
org$frostlang$frostc$Symbol* _1570;
frost$core$String** _1571;
frost$core$String* _1572;
frost$core$String* _1573;
frost$collections$HashKey* _1574;
bool _1575;
frost$core$Bit _1576;
bool _1577;
frost$core$Int _1579;
frost$collections$ListView* _1582;
frost$collections$ListView* _1583;
frost$core$Int _1584;
$fn37 _1585;
frost$core$Object* _1586;
org$frostlang$frostc$Type* _1587;
frost$core$Object* _1588;
frost$core$Object* _1590;
frost$core$Object* _1592;
frost$core$Object* _1594;
frost$core$Int _1597;
int64_t _1598;
int64_t _1599;
int64_t _1600;
frost$core$Int _1601;
int64_t _1603;
int64_t _1604;
bool _1605;
frost$core$Bit _1606;
bool _1607;
int64_t _1609;
int64_t _1610;
bool _1611;
frost$core$Bit _1612;
bool _1613;
int64_t _1615;
int64_t _1616;
int64_t _1617;
frost$core$Int _1618;
org$frostlang$frostc$Type* _1622;
frost$collections$HashMap* _1623;
org$frostlang$frostc$Type* _1624;
frost$core$Object* _1625;
org$frostlang$frostc$Type** _1627;
org$frostlang$frostc$Type* _1628;
frost$core$Object* _1629;
org$frostlang$frostc$Type** _1631;
frost$core$Object* _1633;
frost$collections$HashMap* _1635;
frost$core$Object* _1636;
frost$core$String* _1639;
frost$core$Object* _1640;
org$frostlang$frostc$Type* _1646;
frost$core$Object* _1647;
org$frostlang$frostc$Type** _1649;
org$frostlang$frostc$Type* _1650;
frost$core$Object* _1651;
org$frostlang$frostc$Type** _1653;
org$frostlang$frostc$Type* _1656;
frost$core$Object* _1657;
org$frostlang$frostc$Pair* _1660;
frost$core$Object* _1661;
org$frostlang$frostc$Type* _1664;
frost$core$Object* _1665;
org$frostlang$frostc$Type* _1668;
frost$core$Object* _1669;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:35
_1 = &param3->resolved;
_2 = *_1;
org$frostlang$frostc$Compiler$Resolution$wrapper* $tmp38;
$tmp38 = (org$frostlang$frostc$Compiler$Resolution$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Compiler$Resolution$wrapperclass);
$tmp38->value = _2;
_3 = ((frost$core$Equatable*) $tmp38);
_4 = _3;
_5 = (frost$core$Int) {0u};
// begin inline call to org.frostlang.frostc.Compiler.Resolution.init(rv:frost.core.Int):org.frostlang.frostc.Compiler.Resolution from MethodRef.frost:35:53
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:44
_8 = &(&local1)->$rawValue;
*_8 = _5;
_10 = *(&local1);
*(&local0) = _10;
_13 = *(&local0);
org$frostlang$frostc$Compiler$Resolution$wrapper* $tmp39;
$tmp39 = (org$frostlang$frostc$Compiler$Resolution$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Compiler$Resolution$wrapperclass);
$tmp39->value = _13;
_14 = ((frost$core$Equatable*) $tmp39);
ITable* $tmp40 = _4->$class->itable;
while ($tmp40->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp40 = $tmp40->next;
}
_15 = $tmp40->methods[1];
_16 = _15(_4, _14);
_17 = _16.value;
if (_17) goto block2; else goto block3;
block3:;
_19 = (frost$core$Int) {35u};
_20 = org$frostlang$frostc$MethodDecl$get_signature$R$frost$core$String(param3);
_21 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s41, _20);
_22 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_21, &$s42);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s43, _19, _22);
_24 = ((frost$core$Object*) _22);
frost$core$Frost$unref$frost$core$Object$Q(_24);
_26 = ((frost$core$Object*) _21);
frost$core$Frost$unref$frost$core$Object$Q(_26);
_28 = ((frost$core$Object*) _20);
frost$core$Frost$unref$frost$core$Object$Q(_28);
abort(); // unreachable
block2:;
_31 = ((frost$core$Object*) _14);
frost$core$Frost$unref$frost$core$Object$Q(_31);
_33 = ((frost$core$Object*) _3);
frost$core$Frost$unref$frost$core$Object$Q(_33);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:37
_36 = param4 == NULL;
_37 = (frost$core$Bit) {_36};
_38 = _37.value;
if (_38) goto block4; else goto block5;
block4:;
_40 = &param3->genericParameters;
_41 = *_40;
_42 = _41 != NULL;
_43 = (frost$core$Bit) {_42};
*(&local2) = _43;
goto block6;
block5:;
*(&local2) = _37;
goto block6;
block6:;
_48 = *(&local2);
_49 = &param0->requiresTypeInference;
*_49 = _48;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:38
_52 = ((frost$core$Object*) param3);
frost$core$Frost$ref$frost$core$Object$Q(_52);
_54 = &param0->value;
_55 = *_54;
_56 = ((frost$core$Object*) _55);
frost$core$Frost$unref$frost$core$Object$Q(_56);
_58 = &param0->value;
*_58 = param3;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:39
_61 = ((frost$core$Object*) param2);
frost$core$Frost$ref$frost$core$Object$Q(_61);
_63 = &param0->target;
_64 = *_63;
_65 = ((frost$core$Object*) _64);
frost$core$Frost$unref$frost$core$Object$Q(_65);
_67 = &param0->target;
*_67 = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:40
_70 = &param3->owner;
_71 = *_70;
_72 = _71;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from MethodRef.frost:40:53
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:16
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.stub:16:9
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:21
_77 = &_72->_valid;
_78 = *_77;
_80 = _78.value;
if (_80) goto block9; else goto block10;
block10:;
_82 = (frost$core$Int) {16u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s44, _82);
abort(); // unreachable
block9:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:17
_86 = &_72->value;
_87 = *_86;
_88 = _87;
_89 = _88;
frost$core$Frost$ref$frost$core$Object$Q(_89);
_92 = ((org$frostlang$frostc$ClassDecl*) _88);
_93 = org$frostlang$frostc$Compiler$findType$org$frostlang$frostc$Type$org$frostlang$frostc$ClassDecl$R$org$frostlang$frostc$Type$Q(param1, param2, _92);
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
_95 = ((frost$core$Object*) _93);
frost$core$Frost$ref$frost$core$Object$Q(_95);
_97 = *(&local3);
_98 = ((frost$core$Object*) _97);
frost$core$Frost$unref$frost$core$Object$Q(_98);
*(&local3) = _93;
_101 = ((frost$core$Object*) _93);
frost$core$Frost$unref$frost$core$Object$Q(_101);
_103 = _88;
frost$core$Frost$unref$frost$core$Object$Q(_103);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:41
_106 = *(&local3);
_107 = _106 != NULL;
_108 = (frost$core$Bit) {_107};
_109 = _108.value;
if (_109) goto block11; else goto block12;
block12:;
_111 = (frost$core$Int) {41u};
_112 = ((frost$core$Object*) param2);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from MethodRef.frost:41:32
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:155
_115 = ($fn45) _112->$class->vtable[0];
_116 = _115(_112);
_117 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s46, _116);
_118 = ((frost$core$Object*) _117);
frost$core$Frost$ref$frost$core$Object$Q(_118);
_120 = ((frost$core$Object*) _117);
frost$core$Frost$unref$frost$core$Object$Q(_120);
_122 = ((frost$core$Object*) _116);
frost$core$Frost$unref$frost$core$Object$Q(_122);
_125 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_117, &$s47);
_126 = &param3->owner;
_127 = *_126;
_128 = _127;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from MethodRef.frost:41:60
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:16
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.stub:16:9
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:21
_133 = &_128->_valid;
_134 = *_133;
_136 = _134.value;
if (_136) goto block16; else goto block17;
block17:;
_138 = (frost$core$Int) {16u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s48, _138);
abort(); // unreachable
block16:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:17
_142 = &_128->value;
_143 = *_142;
_144 = _143;
_145 = _144;
frost$core$Frost$ref$frost$core$Object$Q(_145);
_148 = ((org$frostlang$frostc$ClassDecl*) _144);
_149 = &_148->name;
_150 = *_149;
_151 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_125, _150);
_152 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_151, &$s49);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s50, _111, _152);
_154 = ((frost$core$Object*) _152);
frost$core$Frost$unref$frost$core$Object$Q(_154);
_156 = ((frost$core$Object*) _151);
frost$core$Frost$unref$frost$core$Object$Q(_156);
_158 = _144;
frost$core$Frost$unref$frost$core$Object$Q(_158);
_160 = ((frost$core$Object*) _125);
frost$core$Frost$unref$frost$core$Object$Q(_160);
_162 = ((frost$core$Object*) _117);
frost$core$Frost$unref$frost$core$Object$Q(_162);
abort(); // unreachable
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:42
_166 = org$frostlang$frostc$MethodDecl$type$org$frostlang$frostc$Compiler$R$org$frostlang$frostc$Type(param3, param1);
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
_168 = ((frost$core$Object*) _166);
frost$core$Frost$ref$frost$core$Object$Q(_168);
_170 = *(&local4);
_171 = ((frost$core$Object*) _170);
frost$core$Frost$unref$frost$core$Object$Q(_171);
*(&local4) = _166;
_174 = ((frost$core$Object*) _166);
frost$core$Frost$unref$frost$core$Object$Q(_174);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:43
_177 = &param3->annotations;
_178 = *_177;
// begin inline call to function org.frostlang.frostc.Annotations.get_isClass():frost.core.Bit from MethodRef.frost:43:30
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:122
_181 = &_178->flags;
_182 = *_181;
_183 = (frost$core$Int) {16u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:122:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int.stub:231
_186 = _182.value;
_187 = _183.value;
_188 = _186 & _187;
_189 = (frost$core$Int) {_188};
_191 = (frost$core$Int) {0u};
_192 = _189.value;
_193 = _191.value;
_194 = _192 != _193;
_195 = (frost$core$Bit) {_194};
// begin inline call to function frost.core.Bit.!():frost.core.Bit from MethodRef.frost:43:12
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Bit.stub:37
_199 = _195.value;
_200 = !_199;
_201 = (frost$core$Bit) {_200};
_203 = _201.value;
if (_203) goto block22; else goto block20;
block22:;
_205 = &param3->methodKind;
_206 = *_205;
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp51;
$tmp51 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp51->value = _206;
_207 = ((frost$core$Equatable*) $tmp51);
_208 = _207;
_209 = (frost$core$Int) {2u};
// begin inline call to org.frostlang.frostc.MethodDecl.Kind.init(rv:frost.core.Int):org.frostlang.frostc.MethodDecl.Kind from MethodRef.frost:43:76
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:7
_212 = &(&local6)->$rawValue;
*_212 = _209;
_214 = *(&local6);
*(&local5) = _214;
_217 = *(&local5);
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp52;
$tmp52 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp52->value = _217;
_218 = ((frost$core$Equatable*) $tmp52);
ITable* $tmp53 = _208->$class->itable;
while ($tmp53->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp53 = $tmp53->next;
}
_219 = $tmp53->methods[1];
_220 = _219(_208, _218);
_221 = _220.value;
_222 = ((frost$core$Object*) _218);
frost$core$Frost$unref$frost$core$Object$Q(_222);
_224 = ((frost$core$Object*) _207);
frost$core$Frost$unref$frost$core$Object$Q(_224);
if (_221) goto block21; else goto block20;
block21:;
// begin inline call to function org.frostlang.frostc.Type.get_isClassLiteral():frost.core.Bit from MethodRef.frost:44:23
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:369
_229 = &param2->typeKind;
_230 = *_229;
org$frostlang$frostc$Type$Kind$wrapper* $tmp54;
$tmp54 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp54->value = _230;
_231 = ((frost$core$Equatable*) $tmp54);
_232 = _231;
_233 = (frost$core$Int) {11u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:369:31
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_236 = &(&local9)->$rawValue;
*_236 = _233;
_238 = *(&local9);
*(&local8) = _238;
_241 = *(&local8);
org$frostlang$frostc$Type$Kind$wrapper* $tmp55;
$tmp55 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp55->value = _241;
_242 = ((frost$core$Equatable*) $tmp55);
ITable* $tmp56 = _232->$class->itable;
while ($tmp56->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp56 = $tmp56->next;
}
_243 = $tmp56->methods[0];
_244 = _243(_232, _242);
_245 = _244.value;
if (_245) goto block29; else goto block30;
block29:;
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:369:42
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
_249 = &param2->_subtypes;
_250 = *_249;
_251 = _250 != NULL;
_252 = (frost$core$Bit) {_251};
_253 = _252.value;
if (_253) goto block33; else goto block34;
block34:;
_255 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s57, _255, &$s58);
abort(); // unreachable
block33:;
_258 = _250;
_259 = ((frost$core$Object*) _258);
frost$core$Frost$ref$frost$core$Object$Q(_259);
_262 = _258;
_263 = (frost$core$Int) {0u};
_264 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T(_262, _263);
_265 = ((org$frostlang$frostc$Type*) _264);
_266 = ((org$frostlang$frostc$Symbol*) _265);
_267 = &_266->name;
_268 = *_267;
_269 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(_268, &$s59);
_270 = _264;
frost$core$Frost$unref$frost$core$Object$Q(_270);
_272 = ((frost$core$Object*) _258);
frost$core$Frost$unref$frost$core$Object$Q(_272);
*(&local7) = _269;
goto block31;
block30:;
*(&local7) = _244;
goto block31;
block31:;
_278 = *(&local7);
_279 = ((frost$core$Object*) _242);
frost$core$Frost$unref$frost$core$Object$Q(_279);
_281 = ((frost$core$Object*) _231);
frost$core$Frost$unref$frost$core$Object$Q(_281);
_284 = _278.value;
if (_284) goto block18; else goto block20;
block18:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:45
FROST_ASSERT(40 == sizeof(frost$collections$Array));
_287 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
_288 = _287;
frost$collections$Array$init(_288);
*(&local10) = ((frost$collections$Array*) NULL);
_291 = ((frost$core$Object*) _287);
frost$core$Frost$ref$frost$core$Object$Q(_291);
_293 = *(&local10);
_294 = ((frost$core$Object*) _293);
frost$core$Frost$unref$frost$core$Object$Q(_294);
*(&local10) = _287;
_297 = ((frost$core$Object*) _287);
frost$core$Frost$unref$frost$core$Object$Q(_297);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:46
_300 = *(&local10);
_301 = _300;
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from MethodRef.frost:46:38
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
_304 = &param2->_subtypes;
_305 = *_304;
_306 = _305 != NULL;
_307 = (frost$core$Bit) {_306};
_308 = _307.value;
if (_308) goto block36; else goto block37;
block37:;
_310 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s60, _310, &$s61);
abort(); // unreachable
block36:;
_313 = _305;
_314 = ((frost$core$Object*) _313);
frost$core$Frost$ref$frost$core$Object$Q(_314);
_317 = _313;
_318 = (frost$core$Int) {1u};
_319 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T(_317, _318);
_320 = ((org$frostlang$frostc$Type*) _319);
_321 = ((frost$core$Object*) _320);
frost$collections$Array$add$frost$collections$Array$T(_301, _321);
_323 = _319;
frost$core$Frost$unref$frost$core$Object$Q(_323);
_325 = ((frost$core$Object*) _313);
frost$core$Frost$unref$frost$core$Object$Q(_325);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:47
_328 = *(&local10);
_329 = _328;
_330 = *(&local4);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from MethodRef.frost:47:45
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
_333 = &_330->_subtypes;
_334 = *_333;
_335 = _334 != NULL;
_336 = (frost$core$Bit) {_335};
_337 = _336.value;
if (_337) goto block39; else goto block40;
block40:;
_339 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s62, _339, &$s63);
abort(); // unreachable
block39:;
_342 = _334;
_343 = ((frost$core$Object*) _342);
frost$core$Frost$ref$frost$core$Object$Q(_343);
_346 = ((frost$collections$ListView*) _342);
_347 = _346;
_348 = (frost$core$Int) {0u};
_349 = *(&local4);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from MethodRef.frost:47:70
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
_352 = &_349->_subtypes;
_353 = *_352;
_354 = _353 != NULL;
_355 = (frost$core$Bit) {_354};
_356 = _355.value;
if (_356) goto block42; else goto block43;
block43:;
_358 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s64, _358, &$s65);
abort(); // unreachable
block42:;
_361 = _353;
_362 = ((frost$core$Object*) _361);
frost$core$Frost$ref$frost$core$Object$Q(_362);
_365 = ((frost$collections$CollectionView*) _361);
ITable* $tmp66 = _365->$class->itable;
while ($tmp66->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp66 = $tmp66->next;
}
_366 = $tmp66->methods[0];
_367 = _366(_365);
_368 = (frost$core$Int) {1u};
_369 = _367.value;
_370 = _368.value;
_371 = _369 - _370;
_372 = (frost$core$Int) {_371};
_373 = (frost$core$Bit) {false};
_374 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit(_348, _372, _373);
ITable* $tmp67 = _347->$class->itable;
while ($tmp67->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp67 = $tmp67->next;
}
_375 = $tmp67->methods[1];
_376 = _375(_347, _374);
_377 = _376;
_378 = ((frost$collections$CollectionView*) _377);
_379 = _378;
frost$collections$Array$addAll$frost$collections$CollectionView$LTfrost$collections$Array$T$GT(_329, _379);
_381 = ((frost$core$Object*) _376);
frost$core$Frost$unref$frost$core$Object$Q(_381);
_383 = ((frost$core$Object*) _361);
frost$core$Frost$unref$frost$core$Object$Q(_383);
_385 = ((frost$core$Object*) _342);
frost$core$Frost$unref$frost$core$Object$Q(_385);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:48
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:49
_389 = &param3->methodKind;
_390 = *_389;
_391 = _390.$rawValue;
_392 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from MethodRef.frost:50:37
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int.stub:342
_395 = _391.value;
_396 = _392.value;
_397 = _395 == _396;
_398 = (frost$core$Bit) {_397};
_400 = _398.value;
if (_400) goto block45; else goto block46;
block45:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:51
_403 = (frost$core$Int) {18u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from MethodRef.frost:51:42
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_406 = &(&local13)->$rawValue;
*_406 = _403;
_408 = *(&local13);
*(&local12) = _408;
_411 = *(&local12);
*(&local11) = _411;
goto block44;
block46:;
_414 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from MethodRef.frost:53:37
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int.stub:342
_417 = _391.value;
_418 = _414.value;
_419 = _417 == _418;
_420 = (frost$core$Bit) {_419};
_422 = _420.value;
if (_422) goto block49; else goto block50;
block49:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:54
_425 = (frost$core$Int) {17u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from MethodRef.frost:54:42
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_428 = &(&local15)->$rawValue;
*_428 = _425;
_430 = *(&local15);
*(&local14) = _430;
_433 = *(&local14);
*(&local11) = _433;
goto block44;
block50:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:57
_437 = (frost$core$Int) {57u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s68, _437);
abort(); // unreachable
block44:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:60
_441 = *(&local4);
_442 = ((org$frostlang$frostc$Symbol*) _441);
_443 = &_442->position;
_444 = *_443;
_445 = *(&local11);
_446 = *(&local10);
_447 = ((frost$collections$ListView*) _446);
_448 = *(&local4);
// begin inline call to function org.frostlang.frostc.Type.get_returnType():org.frostlang.frostc.Type from MethodRef.frost:61:31
_450 = &_448->typeKind;
_451 = *_450;
org$frostlang$frostc$Type$Kind$wrapper* $tmp69;
$tmp69 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp69->value = _451;
_452 = ((frost$core$Equatable*) $tmp69);
_453 = _452;
_454 = (frost$core$Int) {15u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:431:25
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_457 = &(&local17)->$rawValue;
*_457 = _454;
_459 = *(&local17);
*(&local16) = _459;
_462 = *(&local16);
org$frostlang$frostc$Type$Kind$wrapper* $tmp70;
$tmp70 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp70->value = _462;
_463 = ((frost$core$Equatable*) $tmp70);
ITable* $tmp71 = _453->$class->itable;
while ($tmp71->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp71 = $tmp71->next;
}
_464 = $tmp71->methods[0];
_465 = _464(_453, _463);
_466 = _465.value;
_467 = ((frost$core$Object*) _463);
frost$core$Frost$unref$frost$core$Object$Q(_467);
_469 = ((frost$core$Object*) _452);
frost$core$Frost$unref$frost$core$Object$Q(_469);
if (_466) goto block54; else goto block58;
block58:;
_472 = &_448->typeKind;
_473 = *_472;
org$frostlang$frostc$Type$Kind$wrapper* $tmp72;
$tmp72 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp72->value = _473;
_474 = ((frost$core$Equatable*) $tmp72);
_475 = _474;
_476 = (frost$core$Int) {16u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:431:52
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_479 = &(&local19)->$rawValue;
*_479 = _476;
_481 = *(&local19);
*(&local18) = _481;
_484 = *(&local18);
org$frostlang$frostc$Type$Kind$wrapper* $tmp73;
$tmp73 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp73->value = _484;
_485 = ((frost$core$Equatable*) $tmp73);
ITable* $tmp74 = _475->$class->itable;
while ($tmp74->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp74 = $tmp74->next;
}
_486 = $tmp74->methods[0];
_487 = _486(_475, _485);
_488 = _487.value;
_489 = ((frost$core$Object*) _485);
frost$core$Frost$unref$frost$core$Object$Q(_489);
_491 = ((frost$core$Object*) _474);
frost$core$Frost$unref$frost$core$Object$Q(_491);
if (_488) goto block54; else goto block57;
block57:;
_494 = &_448->typeKind;
_495 = *_494;
org$frostlang$frostc$Type$Kind$wrapper* $tmp75;
$tmp75 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp75->value = _495;
_496 = ((frost$core$Equatable*) $tmp75);
_497 = _496;
_498 = (frost$core$Int) {17u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:431:77
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_501 = &(&local21)->$rawValue;
*_501 = _498;
_503 = *(&local21);
*(&local20) = _503;
_506 = *(&local20);
org$frostlang$frostc$Type$Kind$wrapper* $tmp76;
$tmp76 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp76->value = _506;
_507 = ((frost$core$Equatable*) $tmp76);
ITable* $tmp77 = _497->$class->itable;
while ($tmp77->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp77 = $tmp77->next;
}
_508 = $tmp77->methods[0];
_509 = _508(_497, _507);
_510 = _509.value;
_511 = ((frost$core$Object*) _507);
frost$core$Frost$unref$frost$core$Object$Q(_511);
_513 = ((frost$core$Object*) _496);
frost$core$Frost$unref$frost$core$Object$Q(_513);
if (_510) goto block54; else goto block56;
block56:;
_516 = &_448->typeKind;
_517 = *_516;
org$frostlang$frostc$Type$Kind$wrapper* $tmp78;
$tmp78 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp78->value = _517;
_518 = ((frost$core$Equatable*) $tmp78);
_519 = _518;
_520 = (frost$core$Int) {18u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:432:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_523 = &(&local23)->$rawValue;
*_523 = _520;
_525 = *(&local23);
*(&local22) = _525;
_528 = *(&local22);
org$frostlang$frostc$Type$Kind$wrapper* $tmp79;
$tmp79 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp79->value = _528;
_529 = ((frost$core$Equatable*) $tmp79);
ITable* $tmp80 = _519->$class->itable;
while ($tmp80->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp80 = $tmp80->next;
}
_530 = $tmp80->methods[0];
_531 = _530(_519, _529);
_532 = _531.value;
_533 = ((frost$core$Object*) _529);
frost$core$Frost$unref$frost$core$Object$Q(_533);
_535 = ((frost$core$Object*) _518);
frost$core$Frost$unref$frost$core$Object$Q(_535);
if (_532) goto block54; else goto block55;
block55:;
_538 = (frost$core$Int) {433u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s81, _538, &$s82);
abort(); // unreachable
block54:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:434
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:434:16
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
_544 = &_448->_subtypes;
_545 = *_544;
_546 = _545 != NULL;
_547 = (frost$core$Bit) {_546};
_548 = _547.value;
if (_548) goto block64; else goto block65;
block65:;
_550 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s83, _550, &$s84);
abort(); // unreachable
block64:;
_553 = _545;
_554 = ((frost$core$Object*) _553);
frost$core$Frost$ref$frost$core$Object$Q(_554);
_557 = ((frost$collections$ListView*) _553);
ITable* $tmp85 = _557->$class->itable;
while ($tmp85->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp85 = $tmp85->next;
}
_558 = $tmp85->methods[5];
_559 = _558(_557);
_560 = ((org$frostlang$frostc$Type*) _559);
_561 = ((frost$core$Object*) _560);
frost$core$Frost$ref$frost$core$Object$Q(_561);
_563 = _559;
frost$core$Frost$unref$frost$core$Object$Q(_563);
_565 = ((frost$core$Object*) _553);
frost$core$Frost$unref$frost$core$Object$Q(_565);
_568 = *(&local4);
_569 = &_568->priority;
_570 = *_569;
_571 = org$frostlang$frostc$Type$methodType$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$Type$Kind$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$org$frostlang$frostc$Type$frost$core$Int$R$org$frostlang$frostc$Type(param1, _444, _445, _447, _560, _570);
_572 = ((frost$core$Object*) _571);
frost$core$Frost$ref$frost$core$Object$Q(_572);
_574 = *(&local4);
_575 = ((frost$core$Object*) _574);
frost$core$Frost$unref$frost$core$Object$Q(_575);
*(&local4) = _571;
_578 = ((frost$core$Object*) _571);
frost$core$Frost$unref$frost$core$Object$Q(_578);
_580 = ((frost$core$Object*) _560);
frost$core$Frost$unref$frost$core$Object$Q(_580);
_582 = *(&local10);
_583 = ((frost$core$Object*) _582);
frost$core$Frost$unref$frost$core$Object$Q(_583);
*(&local10) = ((frost$collections$Array*) NULL);
goto block19;
block20:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:63
_588 = org$frostlang$frostc$Compiler$isImmutable$org$frostlang$frostc$Type$R$frost$core$Bit(param1, param2);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from MethodRef.frost:63:17
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Bit.stub:37
_591 = _588.value;
_592 = !_591;
_593 = (frost$core$Bit) {_592};
_595 = _593.value;
if (_595) goto block68; else goto block67;
block68:;
_597 = &param3->methodKind;
_598 = *_597;
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp86;
$tmp86 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp86->value = _598;
_599 = ((frost$core$Equatable*) $tmp86);
_600 = _599;
_601 = (frost$core$Int) {2u};
// begin inline call to org.frostlang.frostc.MethodDecl.Kind.init(rv:frost.core.Int):org.frostlang.frostc.MethodDecl.Kind from MethodRef.frost:63:84
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:7
_604 = &(&local25)->$rawValue;
*_604 = _601;
_606 = *(&local25);
*(&local24) = _606;
_609 = *(&local24);
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp87;
$tmp87 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp87->value = _609;
_610 = ((frost$core$Equatable*) $tmp87);
ITable* $tmp88 = _600->$class->itable;
while ($tmp88->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp88 = $tmp88->next;
}
_611 = $tmp88->methods[1];
_612 = _611(_600, _610);
_613 = _612.value;
_614 = ((frost$core$Object*) _610);
frost$core$Frost$unref$frost$core$Object$Q(_614);
_616 = ((frost$core$Object*) _599);
frost$core$Frost$unref$frost$core$Object$Q(_616);
if (_613) goto block66; else goto block67;
block66:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:64
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:65
_621 = &param3->methodKind;
_622 = *_621;
_623 = _622.$rawValue;
_624 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from MethodRef.frost:66:37
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int.stub:342
_627 = _623.value;
_628 = _624.value;
_629 = _627 == _628;
_630 = (frost$core$Bit) {_629};
_632 = _630.value;
if (_632) goto block72; else goto block73;
block72:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:67
_635 = (frost$core$Int) {16u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from MethodRef.frost:67:42
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_638 = &(&local28)->$rawValue;
*_638 = _635;
_640 = *(&local28);
*(&local27) = _640;
_643 = *(&local27);
*(&local26) = _643;
goto block71;
block73:;
_646 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from MethodRef.frost:69:37
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int.stub:342
_649 = _623.value;
_650 = _646.value;
_651 = _649 == _650;
_652 = (frost$core$Bit) {_651};
_654 = _652.value;
if (_654) goto block76; else goto block77;
block76:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:70
_657 = (frost$core$Int) {15u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from MethodRef.frost:70:42
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_660 = &(&local30)->$rawValue;
*_660 = _657;
_662 = *(&local30);
*(&local29) = _662;
_665 = *(&local29);
*(&local26) = _665;
goto block71;
block77:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:73
_669 = (frost$core$Int) {73u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s89, _669);
abort(); // unreachable
block71:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:76
_673 = *(&local4);
_674 = ((org$frostlang$frostc$Symbol*) _673);
_675 = &_674->position;
_676 = *_675;
_677 = *(&local26);
_678 = *(&local4);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from MethodRef.frost:77:31
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
_681 = &_678->_subtypes;
_682 = *_681;
_683 = _682 != NULL;
_684 = (frost$core$Bit) {_683};
_685 = _684.value;
if (_685) goto block81; else goto block82;
block82:;
_687 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s90, _687, &$s91);
abort(); // unreachable
block81:;
_690 = _682;
_691 = ((frost$core$Object*) _690);
frost$core$Frost$ref$frost$core$Object$Q(_691);
_694 = ((frost$collections$ListView*) _690);
_695 = _694;
_696 = (frost$core$Int) {0u};
_697 = *(&local4);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from MethodRef.frost:77:56
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
_700 = &_697->_subtypes;
_701 = *_700;
_702 = _701 != NULL;
_703 = (frost$core$Bit) {_702};
_704 = _703.value;
if (_704) goto block84; else goto block85;
block85:;
_706 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s92, _706, &$s93);
abort(); // unreachable
block84:;
_709 = _701;
_710 = ((frost$core$Object*) _709);
frost$core$Frost$ref$frost$core$Object$Q(_710);
_713 = ((frost$collections$CollectionView*) _709);
ITable* $tmp94 = _713->$class->itable;
while ($tmp94->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp94 = $tmp94->next;
}
_714 = $tmp94->methods[0];
_715 = _714(_713);
_716 = (frost$core$Int) {1u};
_717 = _715.value;
_718 = _716.value;
_719 = _717 - _718;
_720 = (frost$core$Int) {_719};
_721 = (frost$core$Bit) {false};
_722 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit(_696, _720, _721);
ITable* $tmp95 = _695->$class->itable;
while ($tmp95->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp95 = $tmp95->next;
}
_723 = $tmp95->methods[1];
_724 = _723(_695, _722);
_725 = _724;
_726 = *(&local4);
// begin inline call to function org.frostlang.frostc.Type.get_returnType():org.frostlang.frostc.Type from MethodRef.frost:78:31
_728 = &_726->typeKind;
_729 = *_728;
org$frostlang$frostc$Type$Kind$wrapper* $tmp96;
$tmp96 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp96->value = _729;
_730 = ((frost$core$Equatable*) $tmp96);
_731 = _730;
_732 = (frost$core$Int) {15u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:431:25
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_735 = &(&local32)->$rawValue;
*_735 = _732;
_737 = *(&local32);
*(&local31) = _737;
_740 = *(&local31);
org$frostlang$frostc$Type$Kind$wrapper* $tmp97;
$tmp97 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp97->value = _740;
_741 = ((frost$core$Equatable*) $tmp97);
ITable* $tmp98 = _731->$class->itable;
while ($tmp98->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp98 = $tmp98->next;
}
_742 = $tmp98->methods[0];
_743 = _742(_731, _741);
_744 = _743.value;
_745 = ((frost$core$Object*) _741);
frost$core$Frost$unref$frost$core$Object$Q(_745);
_747 = ((frost$core$Object*) _730);
frost$core$Frost$unref$frost$core$Object$Q(_747);
if (_744) goto block87; else goto block91;
block91:;
_750 = &_726->typeKind;
_751 = *_750;
org$frostlang$frostc$Type$Kind$wrapper* $tmp99;
$tmp99 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp99->value = _751;
_752 = ((frost$core$Equatable*) $tmp99);
_753 = _752;
_754 = (frost$core$Int) {16u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:431:52
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_757 = &(&local34)->$rawValue;
*_757 = _754;
_759 = *(&local34);
*(&local33) = _759;
_762 = *(&local33);
org$frostlang$frostc$Type$Kind$wrapper* $tmp100;
$tmp100 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp100->value = _762;
_763 = ((frost$core$Equatable*) $tmp100);
ITable* $tmp101 = _753->$class->itable;
while ($tmp101->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp101 = $tmp101->next;
}
_764 = $tmp101->methods[0];
_765 = _764(_753, _763);
_766 = _765.value;
_767 = ((frost$core$Object*) _763);
frost$core$Frost$unref$frost$core$Object$Q(_767);
_769 = ((frost$core$Object*) _752);
frost$core$Frost$unref$frost$core$Object$Q(_769);
if (_766) goto block87; else goto block90;
block90:;
_772 = &_726->typeKind;
_773 = *_772;
org$frostlang$frostc$Type$Kind$wrapper* $tmp102;
$tmp102 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp102->value = _773;
_774 = ((frost$core$Equatable*) $tmp102);
_775 = _774;
_776 = (frost$core$Int) {17u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:431:77
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_779 = &(&local36)->$rawValue;
*_779 = _776;
_781 = *(&local36);
*(&local35) = _781;
_784 = *(&local35);
org$frostlang$frostc$Type$Kind$wrapper* $tmp103;
$tmp103 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp103->value = _784;
_785 = ((frost$core$Equatable*) $tmp103);
ITable* $tmp104 = _775->$class->itable;
while ($tmp104->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp104 = $tmp104->next;
}
_786 = $tmp104->methods[0];
_787 = _786(_775, _785);
_788 = _787.value;
_789 = ((frost$core$Object*) _785);
frost$core$Frost$unref$frost$core$Object$Q(_789);
_791 = ((frost$core$Object*) _774);
frost$core$Frost$unref$frost$core$Object$Q(_791);
if (_788) goto block87; else goto block89;
block89:;
_794 = &_726->typeKind;
_795 = *_794;
org$frostlang$frostc$Type$Kind$wrapper* $tmp105;
$tmp105 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp105->value = _795;
_796 = ((frost$core$Equatable*) $tmp105);
_797 = _796;
_798 = (frost$core$Int) {18u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:432:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_801 = &(&local38)->$rawValue;
*_801 = _798;
_803 = *(&local38);
*(&local37) = _803;
_806 = *(&local37);
org$frostlang$frostc$Type$Kind$wrapper* $tmp106;
$tmp106 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp106->value = _806;
_807 = ((frost$core$Equatable*) $tmp106);
ITable* $tmp107 = _797->$class->itable;
while ($tmp107->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp107 = $tmp107->next;
}
_808 = $tmp107->methods[0];
_809 = _808(_797, _807);
_810 = _809.value;
_811 = ((frost$core$Object*) _807);
frost$core$Frost$unref$frost$core$Object$Q(_811);
_813 = ((frost$core$Object*) _796);
frost$core$Frost$unref$frost$core$Object$Q(_813);
if (_810) goto block87; else goto block88;
block88:;
_816 = (frost$core$Int) {433u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s108, _816, &$s109);
abort(); // unreachable
block87:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:434
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:434:16
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
_822 = &_726->_subtypes;
_823 = *_822;
_824 = _823 != NULL;
_825 = (frost$core$Bit) {_824};
_826 = _825.value;
if (_826) goto block97; else goto block98;
block98:;
_828 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s110, _828, &$s111);
abort(); // unreachable
block97:;
_831 = _823;
_832 = ((frost$core$Object*) _831);
frost$core$Frost$ref$frost$core$Object$Q(_832);
_835 = ((frost$collections$ListView*) _831);
ITable* $tmp112 = _835->$class->itable;
while ($tmp112->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp112 = $tmp112->next;
}
_836 = $tmp112->methods[5];
_837 = _836(_835);
_838 = ((org$frostlang$frostc$Type*) _837);
_839 = ((frost$core$Object*) _838);
frost$core$Frost$ref$frost$core$Object$Q(_839);
_841 = _837;
frost$core$Frost$unref$frost$core$Object$Q(_841);
_843 = ((frost$core$Object*) _831);
frost$core$Frost$unref$frost$core$Object$Q(_843);
_846 = *(&local4);
_847 = &_846->priority;
_848 = *_847;
_849 = org$frostlang$frostc$Type$methodType$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$Type$Kind$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$org$frostlang$frostc$Type$frost$core$Int$R$org$frostlang$frostc$Type(param1, _676, _677, _725, _838, _848);
_850 = ((frost$core$Object*) _849);
frost$core$Frost$ref$frost$core$Object$Q(_850);
_852 = *(&local4);
_853 = ((frost$core$Object*) _852);
frost$core$Frost$unref$frost$core$Object$Q(_853);
*(&local4) = _849;
_856 = ((frost$core$Object*) _849);
frost$core$Frost$unref$frost$core$Object$Q(_856);
_858 = ((frost$core$Object*) _838);
frost$core$Frost$unref$frost$core$Object$Q(_858);
_860 = ((frost$core$Object*) _724);
frost$core$Frost$unref$frost$core$Object$Q(_860);
_862 = ((frost$core$Object*) _709);
frost$core$Frost$unref$frost$core$Object$Q(_862);
_864 = ((frost$core$Object*) _690);
frost$core$Frost$unref$frost$core$Object$Q(_864);
goto block67;
block67:;
goto block19;
block19:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:80
// begin inline call to function org.frostlang.frostc.Compiler.getTryScope():org.frostlang.frostc.Pair<org.frostlang.frostc.IR.Block.ID?, org.frostlang.frostc.Variable?>? from MethodRef.frost:80:32
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5209
_871 = &param1->enclosingContexts;
_872 = *_871;
_873 = ((frost$collections$Iterable*) _872);
_874 = _873;
ITable* $tmp113 = _874->$class->itable;
while ($tmp113->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp113 = $tmp113->next;
}
_875 = $tmp113->methods[0];
_876 = _875(_874);
_877 = _876;
goto block102;
block102:;
_879 = _877;
ITable* $tmp114 = _879->$class->itable;
while ($tmp114->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp114 = $tmp114->next;
}
_880 = $tmp114->methods[0];
_881 = _880(_879);
_882 = _881.value;
if (_882) goto block104; else goto block103;
block103:;
*(&local40) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
_885 = _877;
ITable* $tmp115 = _885->$class->itable;
while ($tmp115->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp115 = $tmp115->next;
}
_886 = $tmp115->methods[1];
_887 = _886(_885);
_888 = ((org$frostlang$frostc$Compiler$EnclosingContext*) _887);
_889 = ((frost$core$Object*) _888);
frost$core$Frost$ref$frost$core$Object$Q(_889);
_891 = *(&local40);
_892 = ((frost$core$Object*) _891);
frost$core$Frost$unref$frost$core$Object$Q(_892);
*(&local40) = _888;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5210
_896 = *(&local40);
_897 = &_896->$rawValue;
_898 = *_897;
_899 = (frost$core$Int) {5u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Compiler.frost:5211:38
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int.stub:342
_902 = _898.value;
_903 = _899.value;
_904 = _902 == _903;
_905 = (frost$core$Bit) {_904};
_907 = _905.value;
if (_907) goto block106; else goto block107;
block106:;
_909 = (org$frostlang$frostc$IR$Block$ID$nullable*) (_896->$data + 0);
_910 = *_909;
*(&local41) = _910;
_912 = (org$frostlang$frostc$Variable**) (_896->$data + 16);
_913 = *_912;
*(&local42) = ((org$frostlang$frostc$Variable*) NULL);
_915 = ((frost$core$Object*) _913);
frost$core$Frost$ref$frost$core$Object$Q(_915);
_917 = *(&local42);
_918 = ((frost$core$Object*) _917);
frost$core$Frost$unref$frost$core$Object$Q(_918);
*(&local42) = _913;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5212
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Pair));
_922 = (org$frostlang$frostc$Pair*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Pair$class);
_923 = _922;
_924 = *(&local41);
frost$core$Object* $tmp116;
if (_924.nonnull) {
    org$frostlang$frostc$IR$Block$ID$wrapper* $tmp117;
    $tmp117 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
    $tmp117->value = ((org$frostlang$frostc$IR$Block$ID) _924.value);
    $tmp116 = ((frost$core$Object*) $tmp117);
}
else {
    $tmp116 = NULL;
}
_925 = $tmp116;
_926 = *(&local42);
_927 = ((frost$core$Object*) _926);
org$frostlang$frostc$Pair$init$org$frostlang$frostc$Pair$A$org$frostlang$frostc$Pair$B(_923, _925, _927);
_929 = _922;
_930 = ((frost$core$Object*) _929);
frost$core$Frost$ref$frost$core$Object$Q(_930);
_932 = _925;
frost$core$Frost$unref$frost$core$Object$Q(_932);
_934 = ((frost$core$Object*) _922);
frost$core$Frost$unref$frost$core$Object$Q(_934);
_936 = *(&local42);
_937 = ((frost$core$Object*) _936);
frost$core$Frost$unref$frost$core$Object$Q(_937);
*(&local42) = ((org$frostlang$frostc$Variable*) NULL);
_940 = _887;
frost$core$Frost$unref$frost$core$Object$Q(_940);
_942 = *(&local40);
_943 = ((frost$core$Object*) _942);
frost$core$Frost$unref$frost$core$Object$Q(_943);
*(&local40) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
_946 = ((frost$core$Object*) _876);
frost$core$Frost$unref$frost$core$Object$Q(_946);
*(&local39) = _929;
_949 = ((frost$core$Object*) _929);
frost$core$Frost$ref$frost$core$Object$Q(_949);
goto block101;
block107:;
_952 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Compiler.frost:5214:38
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int.stub:342
_955 = _898.value;
_956 = _952.value;
_957 = _955 == _956;
_958 = (frost$core$Bit) {_957};
_960 = _958.value;
if (_960) goto block109; else goto block105;
block109:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5215
_963 = ((frost$core$Object*) ((org$frostlang$frostc$Pair*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_963);
_965 = _887;
frost$core$Frost$unref$frost$core$Object$Q(_965);
_967 = *(&local40);
_968 = ((frost$core$Object*) _967);
frost$core$Frost$unref$frost$core$Object$Q(_968);
*(&local40) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
_971 = ((frost$core$Object*) _876);
frost$core$Frost$unref$frost$core$Object$Q(_971);
*(&local39) = ((org$frostlang$frostc$Pair*) NULL);
_974 = ((frost$core$Object*) ((org$frostlang$frostc$Pair*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_974);
goto block101;
block105:;
_977 = _887;
frost$core$Frost$unref$frost$core$Object$Q(_977);
_979 = *(&local40);
_980 = ((frost$core$Object*) _979);
frost$core$Frost$unref$frost$core$Object$Q(_980);
*(&local40) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
goto block102;
block104:;
_984 = ((frost$core$Object*) _876);
frost$core$Frost$unref$frost$core$Object$Q(_984);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5219
_987 = ((frost$core$Object*) ((org$frostlang$frostc$Pair*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_987);
*(&local39) = ((org$frostlang$frostc$Pair*) NULL);
_990 = ((frost$core$Object*) ((org$frostlang$frostc$Pair*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_990);
goto block101;
block101:;
_993 = *(&local39);
_994 = _993 != NULL;
_995 = (frost$core$Bit) {_994};
_996 = _995.value;
_997 = ((frost$core$Object*) _993);
frost$core$Frost$unref$frost$core$Object$Q(_997);
if (_996) goto block99; else goto block100;
block99:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:81
_1001 = *(&local4);
// begin inline call to function org.frostlang.frostc.Type.get_returnType():org.frostlang.frostc.Type from MethodRef.frost:81:41
_1003 = &_1001->typeKind;
_1004 = *_1003;
org$frostlang$frostc$Type$Kind$wrapper* $tmp118;
$tmp118 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp118->value = _1004;
_1005 = ((frost$core$Equatable*) $tmp118);
_1006 = _1005;
_1007 = (frost$core$Int) {15u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:431:25
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_1010 = &(&local44)->$rawValue;
*_1010 = _1007;
_1012 = *(&local44);
*(&local43) = _1012;
_1015 = *(&local43);
org$frostlang$frostc$Type$Kind$wrapper* $tmp119;
$tmp119 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp119->value = _1015;
_1016 = ((frost$core$Equatable*) $tmp119);
ITable* $tmp120 = _1006->$class->itable;
while ($tmp120->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp120 = $tmp120->next;
}
_1017 = $tmp120->methods[0];
_1018 = _1017(_1006, _1016);
_1019 = _1018.value;
_1020 = ((frost$core$Object*) _1016);
frost$core$Frost$unref$frost$core$Object$Q(_1020);
_1022 = ((frost$core$Object*) _1005);
frost$core$Frost$unref$frost$core$Object$Q(_1022);
if (_1019) goto block112; else goto block116;
block116:;
_1025 = &_1001->typeKind;
_1026 = *_1025;
org$frostlang$frostc$Type$Kind$wrapper* $tmp121;
$tmp121 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp121->value = _1026;
_1027 = ((frost$core$Equatable*) $tmp121);
_1028 = _1027;
_1029 = (frost$core$Int) {16u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:431:52
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_1032 = &(&local46)->$rawValue;
*_1032 = _1029;
_1034 = *(&local46);
*(&local45) = _1034;
_1037 = *(&local45);
org$frostlang$frostc$Type$Kind$wrapper* $tmp122;
$tmp122 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp122->value = _1037;
_1038 = ((frost$core$Equatable*) $tmp122);
ITable* $tmp123 = _1028->$class->itable;
while ($tmp123->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp123 = $tmp123->next;
}
_1039 = $tmp123->methods[0];
_1040 = _1039(_1028, _1038);
_1041 = _1040.value;
_1042 = ((frost$core$Object*) _1038);
frost$core$Frost$unref$frost$core$Object$Q(_1042);
_1044 = ((frost$core$Object*) _1027);
frost$core$Frost$unref$frost$core$Object$Q(_1044);
if (_1041) goto block112; else goto block115;
block115:;
_1047 = &_1001->typeKind;
_1048 = *_1047;
org$frostlang$frostc$Type$Kind$wrapper* $tmp124;
$tmp124 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp124->value = _1048;
_1049 = ((frost$core$Equatable*) $tmp124);
_1050 = _1049;
_1051 = (frost$core$Int) {17u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:431:77
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_1054 = &(&local48)->$rawValue;
*_1054 = _1051;
_1056 = *(&local48);
*(&local47) = _1056;
_1059 = *(&local47);
org$frostlang$frostc$Type$Kind$wrapper* $tmp125;
$tmp125 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp125->value = _1059;
_1060 = ((frost$core$Equatable*) $tmp125);
ITable* $tmp126 = _1050->$class->itable;
while ($tmp126->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp126 = $tmp126->next;
}
_1061 = $tmp126->methods[0];
_1062 = _1061(_1050, _1060);
_1063 = _1062.value;
_1064 = ((frost$core$Object*) _1060);
frost$core$Frost$unref$frost$core$Object$Q(_1064);
_1066 = ((frost$core$Object*) _1049);
frost$core$Frost$unref$frost$core$Object$Q(_1066);
if (_1063) goto block112; else goto block114;
block114:;
_1069 = &_1001->typeKind;
_1070 = *_1069;
org$frostlang$frostc$Type$Kind$wrapper* $tmp127;
$tmp127 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp127->value = _1070;
_1071 = ((frost$core$Equatable*) $tmp127);
_1072 = _1071;
_1073 = (frost$core$Int) {18u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:432:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_1076 = &(&local50)->$rawValue;
*_1076 = _1073;
_1078 = *(&local50);
*(&local49) = _1078;
_1081 = *(&local49);
org$frostlang$frostc$Type$Kind$wrapper* $tmp128;
$tmp128 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp128->value = _1081;
_1082 = ((frost$core$Equatable*) $tmp128);
ITable* $tmp129 = _1072->$class->itable;
while ($tmp129->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp129 = $tmp129->next;
}
_1083 = $tmp129->methods[0];
_1084 = _1083(_1072, _1082);
_1085 = _1084.value;
_1086 = ((frost$core$Object*) _1082);
frost$core$Frost$unref$frost$core$Object$Q(_1086);
_1088 = ((frost$core$Object*) _1071);
frost$core$Frost$unref$frost$core$Object$Q(_1088);
if (_1085) goto block112; else goto block113;
block113:;
_1091 = (frost$core$Int) {433u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s130, _1091, &$s131);
abort(); // unreachable
block112:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:434
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:434:16
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
_1097 = &_1001->_subtypes;
_1098 = *_1097;
_1099 = _1098 != NULL;
_1100 = (frost$core$Bit) {_1099};
_1101 = _1100.value;
if (_1101) goto block122; else goto block123;
block123:;
_1103 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s132, _1103, &$s133);
abort(); // unreachable
block122:;
_1106 = _1098;
_1107 = ((frost$core$Object*) _1106);
frost$core$Frost$ref$frost$core$Object$Q(_1107);
_1110 = ((frost$collections$ListView*) _1106);
ITable* $tmp134 = _1110->$class->itable;
while ($tmp134->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp134 = $tmp134->next;
}
_1111 = $tmp134->methods[5];
_1112 = _1111(_1110);
_1113 = ((org$frostlang$frostc$Type*) _1112);
_1114 = ((frost$core$Object*) _1113);
frost$core$Frost$ref$frost$core$Object$Q(_1114);
_1116 = _1112;
frost$core$Frost$unref$frost$core$Object$Q(_1116);
_1118 = ((frost$core$Object*) _1106);
frost$core$Frost$unref$frost$core$Object$Q(_1118);
*(&local51) = ((org$frostlang$frostc$Type*) NULL);
_1122 = ((frost$core$Object*) _1113);
frost$core$Frost$ref$frost$core$Object$Q(_1122);
_1124 = *(&local51);
_1125 = ((frost$core$Object*) _1124);
frost$core$Frost$unref$frost$core$Object$Q(_1125);
*(&local51) = _1113;
_1128 = ((frost$core$Object*) _1113);
frost$core$Frost$unref$frost$core$Object$Q(_1128);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:82
_1131 = *(&local51);
_1132 = &param1->ERROR_TYPE;
_1133 = *_1132;
_1134 = org$frostlang$frostc$Type$nullable$R$org$frostlang$frostc$Type(_1133);
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from MethodRef.frost:82:27
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:252
_1137 = ((org$frostlang$frostc$Symbol*) _1131);
_1138 = &_1137->name;
_1139 = *_1138;
_1140 = ((org$frostlang$frostc$Symbol*) _1134);
_1141 = &_1140->name;
_1142 = *_1141;
_1143 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(_1139, _1142);
_1144 = _1143.value;
if (_1144) goto block128; else goto block129;
block128:;
_1146 = &_1131->typeKind;
_1147 = *_1146;
org$frostlang$frostc$Type$Kind$wrapper* $tmp135;
$tmp135 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp135->value = _1147;
_1148 = ((frost$core$Equatable*) $tmp135);
_1149 = _1148;
_1150 = &_1134->typeKind;
_1151 = *_1150;
org$frostlang$frostc$Type$Kind$wrapper* $tmp136;
$tmp136 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp136->value = _1151;
_1152 = ((frost$core$Equatable*) $tmp136);
ITable* $tmp137 = _1149->$class->itable;
while ($tmp137->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp137 = $tmp137->next;
}
_1153 = $tmp137->methods[0];
_1154 = _1153(_1149, _1152);
_1155 = ((frost$core$Object*) _1152);
frost$core$Frost$unref$frost$core$Object$Q(_1155);
_1157 = ((frost$core$Object*) _1148);
frost$core$Frost$unref$frost$core$Object$Q(_1157);
*(&local52) = _1154;
goto block130;
block129:;
*(&local52) = _1143;
goto block130;
block130:;
_1163 = *(&local52);
_1165 = _1163.value;
_1166 = ((frost$core$Object*) _1134);
frost$core$Frost$unref$frost$core$Object$Q(_1166);
if (_1165) goto block124; else goto block126;
block124:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:83
_1170 = *(&local4);
_1171 = ((org$frostlang$frostc$Symbol*) _1170);
_1172 = &_1171->position;
_1173 = *_1172;
_1174 = *(&local4);
_1175 = &_1174->typeKind;
_1176 = *_1175;
_1177 = *(&local4);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from MethodRef.frost:84:35
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
_1180 = &_1177->_subtypes;
_1181 = *_1180;
_1182 = _1181 != NULL;
_1183 = (frost$core$Bit) {_1182};
_1184 = _1183.value;
if (_1184) goto block132; else goto block133;
block133:;
_1186 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s138, _1186, &$s139);
abort(); // unreachable
block132:;
_1189 = _1181;
_1190 = ((frost$core$Object*) _1189);
frost$core$Frost$ref$frost$core$Object$Q(_1190);
_1193 = ((frost$collections$ListView*) _1189);
_1194 = _1193;
_1195 = (frost$core$Int) {0u};
_1196 = *(&local4);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from MethodRef.frost:84:60
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
_1199 = &_1196->_subtypes;
_1200 = *_1199;
_1201 = _1200 != NULL;
_1202 = (frost$core$Bit) {_1201};
_1203 = _1202.value;
if (_1203) goto block135; else goto block136;
block136:;
_1205 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s140, _1205, &$s141);
abort(); // unreachable
block135:;
_1208 = _1200;
_1209 = ((frost$core$Object*) _1208);
frost$core$Frost$ref$frost$core$Object$Q(_1209);
_1212 = ((frost$collections$CollectionView*) _1208);
ITable* $tmp142 = _1212->$class->itable;
while ($tmp142->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp142 = $tmp142->next;
}
_1213 = $tmp142->methods[0];
_1214 = _1213(_1212);
_1215 = (frost$core$Int) {1u};
_1216 = _1214.value;
_1217 = _1215.value;
_1218 = _1216 - _1217;
_1219 = (frost$core$Int) {_1218};
_1220 = (frost$core$Bit) {false};
_1221 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit(_1195, _1219, _1220);
ITable* $tmp143 = _1194->$class->itable;
while ($tmp143->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp143 = $tmp143->next;
}
_1222 = $tmp143->methods[1];
_1223 = _1222(_1194, _1221);
_1224 = _1223;
_1225 = &param1->VOID_TYPE;
_1226 = *_1225;
_1227 = *(&local4);
_1228 = &_1227->priority;
_1229 = *_1228;
_1230 = org$frostlang$frostc$Type$methodType$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$Type$Kind$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$org$frostlang$frostc$Type$frost$core$Int$R$org$frostlang$frostc$Type(param1, _1173, _1176, _1224, _1226, _1229);
_1231 = ((frost$core$Object*) _1230);
frost$core$Frost$ref$frost$core$Object$Q(_1231);
_1233 = *(&local4);
_1234 = ((frost$core$Object*) _1233);
frost$core$Frost$unref$frost$core$Object$Q(_1234);
*(&local4) = _1230;
_1237 = ((frost$core$Object*) _1230);
frost$core$Frost$unref$frost$core$Object$Q(_1237);
_1239 = ((frost$core$Object*) _1223);
frost$core$Frost$unref$frost$core$Object$Q(_1239);
_1241 = ((frost$core$Object*) _1208);
frost$core$Frost$unref$frost$core$Object$Q(_1241);
_1243 = ((frost$core$Object*) _1189);
frost$core$Frost$unref$frost$core$Object$Q(_1243);
goto block125;
block126:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:87
_1247 = *(&local51);
_1248 = &_1247->typeKind;
_1249 = *_1248;
org$frostlang$frostc$Type$Kind$wrapper* $tmp144;
$tmp144 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp144->value = _1249;
_1250 = ((frost$core$Equatable*) $tmp144);
_1251 = _1250;
_1252 = (frost$core$Int) {11u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from MethodRef.frost:87:52
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_1255 = &(&local54)->$rawValue;
*_1255 = _1252;
_1257 = *(&local54);
*(&local53) = _1257;
_1260 = *(&local53);
org$frostlang$frostc$Type$Kind$wrapper* $tmp145;
$tmp145 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp145->value = _1260;
_1261 = ((frost$core$Equatable*) $tmp145);
ITable* $tmp146 = _1251->$class->itable;
while ($tmp146->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp146 = $tmp146->next;
}
_1262 = $tmp146->methods[0];
_1263 = _1262(_1251, _1261);
_1264 = _1263.value;
_1265 = ((frost$core$Object*) _1261);
frost$core$Frost$unref$frost$core$Object$Q(_1265);
_1267 = ((frost$core$Object*) _1250);
frost$core$Frost$unref$frost$core$Object$Q(_1267);
if (_1264) goto block139; else goto block138;
block139:;
_1270 = *(&local51);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from MethodRef.frost:88:31
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
_1273 = &_1270->_subtypes;
_1274 = *_1273;
_1275 = _1274 != NULL;
_1276 = (frost$core$Bit) {_1275};
_1277 = _1276.value;
if (_1277) goto block142; else goto block143;
block143:;
_1279 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s147, _1279, &$s148);
abort(); // unreachable
block142:;
_1282 = _1274;
_1283 = ((frost$core$Object*) _1282);
frost$core$Frost$ref$frost$core$Object$Q(_1283);
_1286 = _1282;
_1287 = (frost$core$Int) {0u};
_1288 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T(_1286, _1287);
_1289 = ((org$frostlang$frostc$Type*) _1288);
_1290 = ((org$frostlang$frostc$Symbol*) _1289);
_1291 = &_1290->name;
_1292 = *_1291;
_1293 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(_1292, &$s149);
_1294 = _1293.value;
_1295 = _1288;
frost$core$Frost$unref$frost$core$Object$Q(_1295);
_1297 = ((frost$core$Object*) _1282);
frost$core$Frost$unref$frost$core$Object$Q(_1297);
if (_1294) goto block137; else goto block138;
block137:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:89
_1301 = *(&local4);
_1302 = ((org$frostlang$frostc$Symbol*) _1301);
_1303 = &_1302->position;
_1304 = *_1303;
_1305 = *(&local4);
_1306 = &_1305->typeKind;
_1307 = *_1306;
_1308 = *(&local4);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from MethodRef.frost:90:35
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
_1311 = &_1308->_subtypes;
_1312 = *_1311;
_1313 = _1312 != NULL;
_1314 = (frost$core$Bit) {_1313};
_1315 = _1314.value;
if (_1315) goto block145; else goto block146;
block146:;
_1317 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s150, _1317, &$s151);
abort(); // unreachable
block145:;
_1320 = _1312;
_1321 = ((frost$core$Object*) _1320);
frost$core$Frost$ref$frost$core$Object$Q(_1321);
_1324 = ((frost$collections$ListView*) _1320);
_1325 = _1324;
_1326 = (frost$core$Int) {0u};
_1327 = *(&local4);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from MethodRef.frost:90:60
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
_1330 = &_1327->_subtypes;
_1331 = *_1330;
_1332 = _1331 != NULL;
_1333 = (frost$core$Bit) {_1332};
_1334 = _1333.value;
if (_1334) goto block148; else goto block149;
block149:;
_1336 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s152, _1336, &$s153);
abort(); // unreachable
block148:;
_1339 = _1331;
_1340 = ((frost$core$Object*) _1339);
frost$core$Frost$ref$frost$core$Object$Q(_1340);
_1343 = ((frost$collections$CollectionView*) _1339);
ITable* $tmp154 = _1343->$class->itable;
while ($tmp154->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp154 = $tmp154->next;
}
_1344 = $tmp154->methods[0];
_1345 = _1344(_1343);
_1346 = (frost$core$Int) {1u};
_1347 = _1345.value;
_1348 = _1346.value;
_1349 = _1347 - _1348;
_1350 = (frost$core$Int) {_1349};
_1351 = (frost$core$Bit) {false};
_1352 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit(_1326, _1350, _1351);
ITable* $tmp155 = _1325->$class->itable;
while ($tmp155->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp155 = $tmp155->next;
}
_1353 = $tmp155->methods[1];
_1354 = _1353(_1325, _1352);
_1355 = _1354;
_1356 = *(&local51);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from MethodRef.frost:91:35
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
_1359 = &_1356->_subtypes;
_1360 = *_1359;
_1361 = _1360 != NULL;
_1362 = (frost$core$Bit) {_1361};
_1363 = _1362.value;
if (_1363) goto block151; else goto block152;
block152:;
_1365 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s156, _1365, &$s157);
abort(); // unreachable
block151:;
_1368 = _1360;
_1369 = ((frost$core$Object*) _1368);
frost$core$Frost$ref$frost$core$Object$Q(_1369);
_1372 = _1368;
_1373 = (frost$core$Int) {1u};
_1374 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T(_1372, _1373);
_1375 = ((org$frostlang$frostc$Type*) _1374);
_1376 = *(&local4);
_1377 = &_1376->priority;
_1378 = *_1377;
_1379 = org$frostlang$frostc$Type$methodType$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$Type$Kind$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$org$frostlang$frostc$Type$frost$core$Int$R$org$frostlang$frostc$Type(param1, _1304, _1307, _1355, _1375, _1378);
_1380 = ((frost$core$Object*) _1379);
frost$core$Frost$ref$frost$core$Object$Q(_1380);
_1382 = *(&local4);
_1383 = ((frost$core$Object*) _1382);
frost$core$Frost$unref$frost$core$Object$Q(_1383);
*(&local4) = _1379;
_1386 = ((frost$core$Object*) _1379);
frost$core$Frost$unref$frost$core$Object$Q(_1386);
_1388 = _1374;
frost$core$Frost$unref$frost$core$Object$Q(_1388);
_1390 = ((frost$core$Object*) _1368);
frost$core$Frost$unref$frost$core$Object$Q(_1390);
_1392 = ((frost$core$Object*) _1354);
frost$core$Frost$unref$frost$core$Object$Q(_1392);
_1394 = ((frost$core$Object*) _1339);
frost$core$Frost$unref$frost$core$Object$Q(_1394);
_1396 = ((frost$core$Object*) _1320);
frost$core$Frost$unref$frost$core$Object$Q(_1396);
goto block138;
block138:;
goto block125;
block125:;
_1400 = *(&local51);
_1401 = ((frost$core$Object*) _1400);
frost$core$Frost$unref$frost$core$Object$Q(_1401);
*(&local51) = ((org$frostlang$frostc$Type*) NULL);
goto block100;
block100:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:94
_1406 = *(&local3);
_1407 = _1406 != NULL;
_1408 = (frost$core$Bit) {_1407};
_1409 = _1408.value;
if (_1409) goto block153; else goto block154;
block154:;
_1411 = (frost$core$Int) {94u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s158, _1411, &$s159);
abort(); // unreachable
block153:;
_1414 = _1406;
_1415 = *(&local4);
_1416 = org$frostlang$frostc$Compiler$remapType$org$frostlang$frostc$Type$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(param1, _1414, _1415);
*(&local55) = ((org$frostlang$frostc$Type*) NULL);
_1418 = ((frost$core$Object*) _1416);
frost$core$Frost$ref$frost$core$Object$Q(_1418);
_1420 = *(&local55);
_1421 = ((frost$core$Object*) _1420);
frost$core$Frost$unref$frost$core$Object$Q(_1421);
*(&local55) = _1416;
_1424 = ((frost$core$Object*) _1416);
frost$core$Frost$unref$frost$core$Object$Q(_1424);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:95
_1427 = param4 != NULL;
_1428 = (frost$core$Bit) {_1427};
_1429 = _1428.value;
if (_1429) goto block155; else goto block157;
block155:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:96
_1432 = &param3->owner;
_1433 = *_1432;
_1434 = _1433;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from MethodRef.frost:96:32
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:16
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.stub:16:9
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:21
_1439 = &_1434->_valid;
_1440 = *_1439;
_1442 = _1440.value;
if (_1442) goto block160; else goto block161;
block161:;
_1444 = (frost$core$Int) {16u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s160, _1444);
abort(); // unreachable
block160:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:17
_1448 = &_1434->value;
_1449 = *_1448;
_1450 = _1449;
_1451 = _1450;
frost$core$Frost$ref$frost$core$Object$Q(_1451);
_1454 = ((org$frostlang$frostc$ClassDecl*) _1450);
_1455 = &_1454->name;
_1456 = *_1455;
_1457 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_1456, &$s161);
_1458 = ((org$frostlang$frostc$Symbol*) param3);
_1459 = &_1458->name;
_1460 = *_1459;
_1461 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_1457, _1460);
_1462 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_1461, &$s162);
*(&local56) = ((frost$core$String*) NULL);
_1464 = ((frost$core$Object*) _1462);
frost$core$Frost$ref$frost$core$Object$Q(_1464);
_1466 = *(&local56);
_1467 = ((frost$core$Object*) _1466);
frost$core$Frost$unref$frost$core$Object$Q(_1467);
*(&local56) = _1462;
_1470 = ((frost$core$Object*) _1462);
frost$core$Frost$unref$frost$core$Object$Q(_1470);
_1472 = ((frost$core$Object*) _1461);
frost$core$Frost$unref$frost$core$Object$Q(_1472);
_1474 = ((frost$core$Object*) _1457);
frost$core$Frost$unref$frost$core$Object$Q(_1474);
_1476 = _1450;
frost$core$Frost$unref$frost$core$Object$Q(_1476);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:97
FROST_ASSERT(56 == sizeof(frost$collections$HashMap));
_1479 = (frost$collections$HashMap*) frostObjectAlloc(56, (frost$core$Class*) &frost$collections$HashMap$class);
_1480 = _1479;
frost$collections$HashMap$init(_1480);
*(&local57) = ((frost$collections$HashMap*) NULL);
_1483 = ((frost$core$Object*) _1479);
frost$core$Frost$ref$frost$core$Object$Q(_1483);
_1485 = *(&local57);
_1486 = ((frost$core$Object*) _1485);
frost$core$Frost$unref$frost$core$Object$Q(_1486);
*(&local57) = _1479;
_1489 = ((frost$core$Object*) _1479);
frost$core$Frost$unref$frost$core$Object$Q(_1489);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:98
_1492 = (frost$core$Int) {0u};
_1493 = param4 != NULL;
_1494 = (frost$core$Bit) {_1493};
_1495 = _1494.value;
if (_1495) goto block162; else goto block163;
block163:;
_1497 = (frost$core$Int) {98u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s163, _1497, &$s164);
abort(); // unreachable
block162:;
_1500 = ((frost$collections$CollectionView*) param4);
ITable* $tmp165 = _1500->$class->itable;
while ($tmp165->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp165 = $tmp165->next;
}
_1501 = $tmp165->methods[0];
_1502 = _1501(_1500);
_1503 = (frost$core$Bit) {false};
_1504 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit(_1492, _1502, _1503);
_1505 = _1504.min;
*(&local58) = _1505;
_1507 = _1504.max;
_1508 = _1504.inclusive;
_1509 = _1508.value;
_1510 = (frost$core$Int) {1u};
if (_1509) goto block167; else goto block168;
block167:;
_1512 = _1505.value;
_1513 = _1507.value;
_1514 = _1512 <= _1513;
_1515 = (frost$core$Bit) {_1514};
_1516 = _1515.value;
if (_1516) goto block164; else goto block165;
block168:;
_1518 = _1505.value;
_1519 = _1507.value;
_1520 = _1518 < _1519;
_1521 = (frost$core$Bit) {_1520};
_1522 = _1521.value;
if (_1522) goto block164; else goto block165;
block164:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:99
_1525 = *(&local57);
_1526 = _1525;
_1527 = *(&local56);
_1528 = &param3->genericParameters;
_1529 = *_1528;
_1530 = _1529 != NULL;
_1531 = (frost$core$Bit) {_1530};
_1532 = _1531.value;
if (_1532) goto block169; else goto block170;
block170:;
_1534 = (frost$core$Int) {99u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s166, _1534, &$s167);
abort(); // unreachable
block169:;
_1537 = _1529;
_1538 = _1537;
_1539 = *(&local58);
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from MethodRef.frost:99:53
_1541 = (frost$core$Int) {0u};
_1542 = _1539.value;
_1543 = _1541.value;
_1544 = _1542 >= _1543;
_1545 = (frost$core$Bit) {_1544};
_1546 = _1545.value;
if (_1546) goto block174; else goto block173;
block174:;
_1548 = ((frost$collections$CollectionView*) _1538);
ITable* $tmp168 = _1548->$class->itable;
while ($tmp168->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp168 = $tmp168->next;
}
_1549 = $tmp168->methods[0];
_1550 = _1549(_1548);
_1551 = _1539.value;
_1552 = _1550.value;
_1553 = _1551 < _1552;
_1554 = (frost$core$Bit) {_1553};
_1555 = _1554.value;
if (_1555) goto block172; else goto block173;
block173:;
_1557 = (frost$core$Int) {22u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s169, _1557, &$s170);
abort(); // unreachable
block172:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/collections/Array.stub:23
_1561 = &_1538->data;
_1562 = *_1561;
_1563 = frost$core$Int64$init$frost$core$Int(_1539);
_1564 = _1563.value;
_1565 = _1562[_1564];
_1566 = _1565;
frost$core$Frost$ref$frost$core$Object$Q(_1566);
_1569 = ((org$frostlang$frostc$MethodDecl$GenericParameter*) _1565);
_1570 = ((org$frostlang$frostc$Symbol*) _1569);
_1571 = &_1570->name;
_1572 = *_1571;
_1573 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_1527, _1572);
_1574 = ((frost$collections$HashKey*) _1573);
_1575 = param4 != NULL;
_1576 = (frost$core$Bit) {_1575};
_1577 = _1576.value;
if (_1577) goto block175; else goto block176;
block176:;
_1579 = (frost$core$Int) {99u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s171, _1579, &$s172);
abort(); // unreachable
block175:;
_1582 = param4;
_1583 = _1582;
_1584 = *(&local58);
ITable* $tmp173 = _1583->$class->itable;
while ($tmp173->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp173 = $tmp173->next;
}
_1585 = $tmp173->methods[0];
_1586 = _1585(_1583, _1584);
_1587 = ((org$frostlang$frostc$Type*) _1586);
_1588 = ((frost$core$Object*) _1587);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V(_1526, _1574, _1588);
_1590 = _1586;
frost$core$Frost$unref$frost$core$Object$Q(_1590);
_1592 = ((frost$core$Object*) _1573);
frost$core$Frost$unref$frost$core$Object$Q(_1592);
_1594 = _1565;
frost$core$Frost$unref$frost$core$Object$Q(_1594);
_1597 = *(&local58);
_1598 = _1507.value;
_1599 = _1597.value;
_1600 = _1598 - _1599;
_1601 = (frost$core$Int) {_1600};
if (_1509) goto block178; else goto block179;
block178:;
_1603 = _1601.value;
_1604 = _1510.value;
_1605 = _1603 >= _1604;
_1606 = (frost$core$Bit) {_1605};
_1607 = _1606.value;
if (_1607) goto block177; else goto block165;
block179:;
_1609 = _1601.value;
_1610 = _1510.value;
_1611 = _1609 > _1610;
_1612 = (frost$core$Bit) {_1611};
_1613 = _1612.value;
if (_1613) goto block177; else goto block165;
block177:;
_1615 = _1597.value;
_1616 = _1510.value;
_1617 = _1615 + _1616;
_1618 = (frost$core$Int) {_1617};
*(&local58) = _1618;
goto block164;
block165:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:101
_1622 = *(&local55);
_1623 = *(&local57);
_1624 = org$frostlang$frostc$Type$remap$org$frostlang$frostc$Compiler$frost$collections$HashMap$LTfrost$core$String$Corg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type(_1622, param1, _1623);
_1625 = ((frost$core$Object*) _1624);
frost$core$Frost$ref$frost$core$Object$Q(_1625);
_1627 = &param0->effectiveType;
_1628 = *_1627;
_1629 = ((frost$core$Object*) _1628);
frost$core$Frost$unref$frost$core$Object$Q(_1629);
_1631 = &param0->effectiveType;
*_1631 = _1624;
_1633 = ((frost$core$Object*) _1624);
frost$core$Frost$unref$frost$core$Object$Q(_1633);
_1635 = *(&local57);
_1636 = ((frost$core$Object*) _1635);
frost$core$Frost$unref$frost$core$Object$Q(_1636);
*(&local57) = ((frost$collections$HashMap*) NULL);
_1639 = *(&local56);
_1640 = ((frost$core$Object*) _1639);
frost$core$Frost$unref$frost$core$Object$Q(_1640);
*(&local56) = ((frost$core$String*) NULL);
goto block156;
block157:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:104
_1646 = *(&local55);
_1647 = ((frost$core$Object*) _1646);
frost$core$Frost$ref$frost$core$Object$Q(_1647);
_1649 = &param0->effectiveType;
_1650 = *_1649;
_1651 = ((frost$core$Object*) _1650);
frost$core$Frost$unref$frost$core$Object$Q(_1651);
_1653 = &param0->effectiveType;
*_1653 = _1646;
goto block156;
block156:;
_1656 = *(&local55);
_1657 = ((frost$core$Object*) _1656);
frost$core$Frost$unref$frost$core$Object$Q(_1657);
*(&local55) = ((org$frostlang$frostc$Type*) NULL);
_1660 = *(&local39);
_1661 = ((frost$core$Object*) _1660);
frost$core$Frost$unref$frost$core$Object$Q(_1661);
*(&local39) = ((org$frostlang$frostc$Pair*) NULL);
_1664 = *(&local4);
_1665 = ((frost$core$Object*) _1664);
frost$core$Frost$unref$frost$core$Object$Q(_1665);
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
_1668 = *(&local3);
_1669 = ((frost$core$Object*) _1668);
frost$core$Frost$unref$frost$core$Object$Q(_1669);
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
return;

}
frost$core$Int org$frostlang$frostc$MethodRef$get_parameterCount$R$frost$core$Int(org$frostlang$frostc$MethodRef* param0) {

org$frostlang$frostc$Type$Kind local0;
org$frostlang$frostc$Type$Kind local1;
org$frostlang$frostc$Type$Kind local2;
org$frostlang$frostc$Type$Kind local3;
org$frostlang$frostc$Type$Kind local4;
org$frostlang$frostc$Type$Kind local5;
org$frostlang$frostc$Type$Kind local6;
org$frostlang$frostc$Type$Kind local7;
org$frostlang$frostc$Type** _1;
org$frostlang$frostc$Type* _2;
org$frostlang$frostc$Type$Kind* _4;
org$frostlang$frostc$Type$Kind _5;
frost$core$Equatable* _6;
frost$core$Equatable* _7;
frost$core$Int _8;
frost$core$Int* _11;
org$frostlang$frostc$Type$Kind _13;
org$frostlang$frostc$Type$Kind _16;
frost$core$Equatable* _17;
$fn174 _18;
frost$core$Bit _19;
bool _20;
frost$core$Object* _21;
frost$core$Object* _23;
org$frostlang$frostc$Type$Kind* _26;
org$frostlang$frostc$Type$Kind _27;
frost$core$Equatable* _28;
frost$core$Equatable* _29;
frost$core$Int _30;
frost$core$Int* _33;
org$frostlang$frostc$Type$Kind _35;
org$frostlang$frostc$Type$Kind _38;
frost$core$Equatable* _39;
$fn175 _40;
frost$core$Bit _41;
bool _42;
frost$core$Object* _43;
frost$core$Object* _45;
org$frostlang$frostc$Type$Kind* _48;
org$frostlang$frostc$Type$Kind _49;
frost$core$Equatable* _50;
frost$core$Equatable* _51;
frost$core$Int _52;
frost$core$Int* _55;
org$frostlang$frostc$Type$Kind _57;
org$frostlang$frostc$Type$Kind _60;
frost$core$Equatable* _61;
$fn176 _62;
frost$core$Bit _63;
bool _64;
frost$core$Object* _65;
frost$core$Object* _67;
org$frostlang$frostc$Type$Kind* _70;
org$frostlang$frostc$Type$Kind _71;
frost$core$Equatable* _72;
frost$core$Equatable* _73;
frost$core$Int _74;
frost$core$Int* _77;
org$frostlang$frostc$Type$Kind _79;
org$frostlang$frostc$Type$Kind _82;
frost$core$Equatable* _83;
$fn177 _84;
frost$core$Bit _85;
bool _86;
frost$core$Object* _87;
frost$core$Object* _89;
frost$core$Int _92;
org$frostlang$frostc$FixedArray** _98;
org$frostlang$frostc$FixedArray* _99;
bool _100;
frost$core$Bit _101;
bool _102;
frost$core$Int _104;
org$frostlang$frostc$FixedArray* _107;
frost$core$Object* _108;
frost$collections$CollectionView* _111;
$fn178 _112;
frost$core$Int _113;
frost$core$Int _114;
int64_t _115;
int64_t _116;
int64_t _117;
frost$core$Int _118;
frost$core$Object* _119;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:109
_1 = &param0->effectiveType;
_2 = *_1;
// begin inline call to function org.frostlang.frostc.Type.get_parameterCount():frost.core.Int from MethodRef.frost:109:29
_4 = &_2->typeKind;
_5 = *_4;
org$frostlang$frostc$Type$Kind$wrapper* $tmp179;
$tmp179 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp179->value = _5;
_6 = ((frost$core$Equatable*) $tmp179);
_7 = _6;
_8 = (frost$core$Int) {15u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:419:25
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_11 = &(&local1)->$rawValue;
*_11 = _8;
_13 = *(&local1);
*(&local0) = _13;
_16 = *(&local0);
org$frostlang$frostc$Type$Kind$wrapper* $tmp180;
$tmp180 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp180->value = _16;
_17 = ((frost$core$Equatable*) $tmp180);
ITable* $tmp181 = _7->$class->itable;
while ($tmp181->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp181 = $tmp181->next;
}
_18 = $tmp181->methods[0];
_19 = _18(_7, _17);
_20 = _19.value;
_21 = ((frost$core$Object*) _17);
frost$core$Frost$unref$frost$core$Object$Q(_21);
_23 = ((frost$core$Object*) _6);
frost$core$Frost$unref$frost$core$Object$Q(_23);
if (_20) goto block2; else goto block6;
block6:;
_26 = &_2->typeKind;
_27 = *_26;
org$frostlang$frostc$Type$Kind$wrapper* $tmp182;
$tmp182 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp182->value = _27;
_28 = ((frost$core$Equatable*) $tmp182);
_29 = _28;
_30 = (frost$core$Int) {16u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:419:52
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_33 = &(&local3)->$rawValue;
*_33 = _30;
_35 = *(&local3);
*(&local2) = _35;
_38 = *(&local2);
org$frostlang$frostc$Type$Kind$wrapper* $tmp183;
$tmp183 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp183->value = _38;
_39 = ((frost$core$Equatable*) $tmp183);
ITable* $tmp184 = _29->$class->itable;
while ($tmp184->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp184 = $tmp184->next;
}
_40 = $tmp184->methods[0];
_41 = _40(_29, _39);
_42 = _41.value;
_43 = ((frost$core$Object*) _39);
frost$core$Frost$unref$frost$core$Object$Q(_43);
_45 = ((frost$core$Object*) _28);
frost$core$Frost$unref$frost$core$Object$Q(_45);
if (_42) goto block2; else goto block5;
block5:;
_48 = &_2->typeKind;
_49 = *_48;
org$frostlang$frostc$Type$Kind$wrapper* $tmp185;
$tmp185 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp185->value = _49;
_50 = ((frost$core$Equatable*) $tmp185);
_51 = _50;
_52 = (frost$core$Int) {17u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:419:77
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_55 = &(&local5)->$rawValue;
*_55 = _52;
_57 = *(&local5);
*(&local4) = _57;
_60 = *(&local4);
org$frostlang$frostc$Type$Kind$wrapper* $tmp186;
$tmp186 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp186->value = _60;
_61 = ((frost$core$Equatable*) $tmp186);
ITable* $tmp187 = _51->$class->itable;
while ($tmp187->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp187 = $tmp187->next;
}
_62 = $tmp187->methods[0];
_63 = _62(_51, _61);
_64 = _63.value;
_65 = ((frost$core$Object*) _61);
frost$core$Frost$unref$frost$core$Object$Q(_65);
_67 = ((frost$core$Object*) _50);
frost$core$Frost$unref$frost$core$Object$Q(_67);
if (_64) goto block2; else goto block4;
block4:;
_70 = &_2->typeKind;
_71 = *_70;
org$frostlang$frostc$Type$Kind$wrapper* $tmp188;
$tmp188 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp188->value = _71;
_72 = ((frost$core$Equatable*) $tmp188);
_73 = _72;
_74 = (frost$core$Int) {18u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:420:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_77 = &(&local7)->$rawValue;
*_77 = _74;
_79 = *(&local7);
*(&local6) = _79;
_82 = *(&local6);
org$frostlang$frostc$Type$Kind$wrapper* $tmp189;
$tmp189 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp189->value = _82;
_83 = ((frost$core$Equatable*) $tmp189);
ITable* $tmp190 = _73->$class->itable;
while ($tmp190->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp190 = $tmp190->next;
}
_84 = $tmp190->methods[0];
_85 = _84(_73, _83);
_86 = _85.value;
_87 = ((frost$core$Object*) _83);
frost$core$Frost$unref$frost$core$Object$Q(_87);
_89 = ((frost$core$Object*) _72);
frost$core$Frost$unref$frost$core$Object$Q(_89);
if (_86) goto block2; else goto block3;
block3:;
_92 = (frost$core$Int) {421u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s191, _92, &$s192);
abort(); // unreachable
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:422
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:422:16
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
_98 = &_2->_subtypes;
_99 = *_98;
_100 = _99 != NULL;
_101 = (frost$core$Bit) {_100};
_102 = _101.value;
if (_102) goto block12; else goto block13;
block13:;
_104 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s193, _104, &$s194);
abort(); // unreachable
block12:;
_107 = _99;
_108 = ((frost$core$Object*) _107);
frost$core$Frost$ref$frost$core$Object$Q(_108);
_111 = ((frost$collections$CollectionView*) _107);
ITable* $tmp195 = _111->$class->itable;
while ($tmp195->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp195 = $tmp195->next;
}
_112 = $tmp195->methods[0];
_113 = _112(_111);
_114 = (frost$core$Int) {1u};
_115 = _113.value;
_116 = _114.value;
_117 = _115 - _116;
_118 = (frost$core$Int) {_117};
_119 = ((frost$core$Object*) _107);
frost$core$Frost$unref$frost$core$Object$Q(_119);
return _118;

}
org$frostlang$frostc$Type* org$frostlang$frostc$MethodRef$parameterType$frost$core$Int$R$org$frostlang$frostc$Type(org$frostlang$frostc$MethodRef* param0, frost$core$Int param1) {

org$frostlang$frostc$Type** _1;
org$frostlang$frostc$Type* _2;
org$frostlang$frostc$FixedArray** _5;
org$frostlang$frostc$FixedArray* _6;
bool _7;
frost$core$Bit _8;
bool _9;
frost$core$Int _11;
org$frostlang$frostc$FixedArray* _14;
frost$core$Object* _15;
org$frostlang$frostc$FixedArray* _18;
frost$core$Object* _19;
org$frostlang$frostc$Type* _20;
frost$core$Object* _21;
frost$core$Object* _23;
frost$core$Object* _25;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:113
_1 = &param0->effectiveType;
_2 = *_1;
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from MethodRef.frost:113:29
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
_5 = &_2->_subtypes;
_6 = *_5;
_7 = _6 != NULL;
_8 = (frost$core$Bit) {_7};
_9 = _8.value;
if (_9) goto block2; else goto block3;
block3:;
_11 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s196, _11, &$s197);
abort(); // unreachable
block2:;
_14 = _6;
_15 = ((frost$core$Object*) _14);
frost$core$Frost$ref$frost$core$Object$Q(_15);
_18 = _14;
_19 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T(_18, param1);
_20 = ((org$frostlang$frostc$Type*) _19);
_21 = ((frost$core$Object*) _20);
frost$core$Frost$ref$frost$core$Object$Q(_21);
_23 = _19;
frost$core$Frost$unref$frost$core$Object$Q(_23);
_25 = ((frost$core$Object*) _14);
frost$core$Frost$unref$frost$core$Object$Q(_25);
return _20;

}
org$frostlang$frostc$Type* org$frostlang$frostc$MethodRef$get_returnType$R$org$frostlang$frostc$Type(org$frostlang$frostc$MethodRef* param0) {

org$frostlang$frostc$Type$Kind local0;
org$frostlang$frostc$Type$Kind local1;
org$frostlang$frostc$Type$Kind local2;
org$frostlang$frostc$Type$Kind local3;
org$frostlang$frostc$Type$Kind local4;
org$frostlang$frostc$Type$Kind local5;
org$frostlang$frostc$Type$Kind local6;
org$frostlang$frostc$Type$Kind local7;
org$frostlang$frostc$Type** _1;
org$frostlang$frostc$Type* _2;
org$frostlang$frostc$Type$Kind* _4;
org$frostlang$frostc$Type$Kind _5;
frost$core$Equatable* _6;
frost$core$Equatable* _7;
frost$core$Int _8;
frost$core$Int* _11;
org$frostlang$frostc$Type$Kind _13;
org$frostlang$frostc$Type$Kind _16;
frost$core$Equatable* _17;
$fn198 _18;
frost$core$Bit _19;
bool _20;
frost$core$Object* _21;
frost$core$Object* _23;
org$frostlang$frostc$Type$Kind* _26;
org$frostlang$frostc$Type$Kind _27;
frost$core$Equatable* _28;
frost$core$Equatable* _29;
frost$core$Int _30;
frost$core$Int* _33;
org$frostlang$frostc$Type$Kind _35;
org$frostlang$frostc$Type$Kind _38;
frost$core$Equatable* _39;
$fn199 _40;
frost$core$Bit _41;
bool _42;
frost$core$Object* _43;
frost$core$Object* _45;
org$frostlang$frostc$Type$Kind* _48;
org$frostlang$frostc$Type$Kind _49;
frost$core$Equatable* _50;
frost$core$Equatable* _51;
frost$core$Int _52;
frost$core$Int* _55;
org$frostlang$frostc$Type$Kind _57;
org$frostlang$frostc$Type$Kind _60;
frost$core$Equatable* _61;
$fn200 _62;
frost$core$Bit _63;
bool _64;
frost$core$Object* _65;
frost$core$Object* _67;
org$frostlang$frostc$Type$Kind* _70;
org$frostlang$frostc$Type$Kind _71;
frost$core$Equatable* _72;
frost$core$Equatable* _73;
frost$core$Int _74;
frost$core$Int* _77;
org$frostlang$frostc$Type$Kind _79;
org$frostlang$frostc$Type$Kind _82;
frost$core$Equatable* _83;
$fn201 _84;
frost$core$Bit _85;
bool _86;
frost$core$Object* _87;
frost$core$Object* _89;
frost$core$Int _92;
org$frostlang$frostc$FixedArray** _98;
org$frostlang$frostc$FixedArray* _99;
bool _100;
frost$core$Bit _101;
bool _102;
frost$core$Int _104;
org$frostlang$frostc$FixedArray* _107;
frost$core$Object* _108;
frost$collections$ListView* _111;
$fn202 _112;
frost$core$Object* _113;
org$frostlang$frostc$Type* _114;
frost$core$Object* _115;
frost$core$Object* _117;
frost$core$Object* _119;
frost$core$Object* _122;
frost$core$Object* _124;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:117
_1 = &param0->effectiveType;
_2 = *_1;
// begin inline call to function org.frostlang.frostc.Type.get_returnType():org.frostlang.frostc.Type from MethodRef.frost:117:29
_4 = &_2->typeKind;
_5 = *_4;
org$frostlang$frostc$Type$Kind$wrapper* $tmp203;
$tmp203 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp203->value = _5;
_6 = ((frost$core$Equatable*) $tmp203);
_7 = _6;
_8 = (frost$core$Int) {15u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:431:25
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_11 = &(&local1)->$rawValue;
*_11 = _8;
_13 = *(&local1);
*(&local0) = _13;
_16 = *(&local0);
org$frostlang$frostc$Type$Kind$wrapper* $tmp204;
$tmp204 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp204->value = _16;
_17 = ((frost$core$Equatable*) $tmp204);
ITable* $tmp205 = _7->$class->itable;
while ($tmp205->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp205 = $tmp205->next;
}
_18 = $tmp205->methods[0];
_19 = _18(_7, _17);
_20 = _19.value;
_21 = ((frost$core$Object*) _17);
frost$core$Frost$unref$frost$core$Object$Q(_21);
_23 = ((frost$core$Object*) _6);
frost$core$Frost$unref$frost$core$Object$Q(_23);
if (_20) goto block2; else goto block6;
block6:;
_26 = &_2->typeKind;
_27 = *_26;
org$frostlang$frostc$Type$Kind$wrapper* $tmp206;
$tmp206 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp206->value = _27;
_28 = ((frost$core$Equatable*) $tmp206);
_29 = _28;
_30 = (frost$core$Int) {16u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:431:52
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_33 = &(&local3)->$rawValue;
*_33 = _30;
_35 = *(&local3);
*(&local2) = _35;
_38 = *(&local2);
org$frostlang$frostc$Type$Kind$wrapper* $tmp207;
$tmp207 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp207->value = _38;
_39 = ((frost$core$Equatable*) $tmp207);
ITable* $tmp208 = _29->$class->itable;
while ($tmp208->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp208 = $tmp208->next;
}
_40 = $tmp208->methods[0];
_41 = _40(_29, _39);
_42 = _41.value;
_43 = ((frost$core$Object*) _39);
frost$core$Frost$unref$frost$core$Object$Q(_43);
_45 = ((frost$core$Object*) _28);
frost$core$Frost$unref$frost$core$Object$Q(_45);
if (_42) goto block2; else goto block5;
block5:;
_48 = &_2->typeKind;
_49 = *_48;
org$frostlang$frostc$Type$Kind$wrapper* $tmp209;
$tmp209 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp209->value = _49;
_50 = ((frost$core$Equatable*) $tmp209);
_51 = _50;
_52 = (frost$core$Int) {17u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:431:77
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_55 = &(&local5)->$rawValue;
*_55 = _52;
_57 = *(&local5);
*(&local4) = _57;
_60 = *(&local4);
org$frostlang$frostc$Type$Kind$wrapper* $tmp210;
$tmp210 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp210->value = _60;
_61 = ((frost$core$Equatable*) $tmp210);
ITable* $tmp211 = _51->$class->itable;
while ($tmp211->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp211 = $tmp211->next;
}
_62 = $tmp211->methods[0];
_63 = _62(_51, _61);
_64 = _63.value;
_65 = ((frost$core$Object*) _61);
frost$core$Frost$unref$frost$core$Object$Q(_65);
_67 = ((frost$core$Object*) _50);
frost$core$Frost$unref$frost$core$Object$Q(_67);
if (_64) goto block2; else goto block4;
block4:;
_70 = &_2->typeKind;
_71 = *_70;
org$frostlang$frostc$Type$Kind$wrapper* $tmp212;
$tmp212 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp212->value = _71;
_72 = ((frost$core$Equatable*) $tmp212);
_73 = _72;
_74 = (frost$core$Int) {18u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:432:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_77 = &(&local7)->$rawValue;
*_77 = _74;
_79 = *(&local7);
*(&local6) = _79;
_82 = *(&local6);
org$frostlang$frostc$Type$Kind$wrapper* $tmp213;
$tmp213 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp213->value = _82;
_83 = ((frost$core$Equatable*) $tmp213);
ITable* $tmp214 = _73->$class->itable;
while ($tmp214->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp214 = $tmp214->next;
}
_84 = $tmp214->methods[0];
_85 = _84(_73, _83);
_86 = _85.value;
_87 = ((frost$core$Object*) _83);
frost$core$Frost$unref$frost$core$Object$Q(_87);
_89 = ((frost$core$Object*) _72);
frost$core$Frost$unref$frost$core$Object$Q(_89);
if (_86) goto block2; else goto block3;
block3:;
_92 = (frost$core$Int) {433u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s215, _92, &$s216);
abort(); // unreachable
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:434
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:434:16
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
_98 = &_2->_subtypes;
_99 = *_98;
_100 = _99 != NULL;
_101 = (frost$core$Bit) {_100};
_102 = _101.value;
if (_102) goto block12; else goto block13;
block13:;
_104 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s217, _104, &$s218);
abort(); // unreachable
block12:;
_107 = _99;
_108 = ((frost$core$Object*) _107);
frost$core$Frost$ref$frost$core$Object$Q(_108);
_111 = ((frost$collections$ListView*) _107);
ITable* $tmp219 = _111->$class->itable;
while ($tmp219->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp219 = $tmp219->next;
}
_112 = $tmp219->methods[5];
_113 = _112(_111);
_114 = ((org$frostlang$frostc$Type*) _113);
_115 = ((frost$core$Object*) _114);
frost$core$Frost$ref$frost$core$Object$Q(_115);
_117 = _113;
frost$core$Frost$unref$frost$core$Object$Q(_117);
_119 = ((frost$core$Object*) _107);
frost$core$Frost$unref$frost$core$Object$Q(_119);
_122 = ((frost$core$Object*) _114);
frost$core$Frost$ref$frost$core$Object$Q(_122);
_124 = ((frost$core$Object*) _114);
frost$core$Frost$unref$frost$core$Object$Q(_124);
return _114;

}
frost$core$String* org$frostlang$frostc$MethodRef$get_asString$R$frost$core$String(org$frostlang$frostc$MethodRef* param0) {

org$frostlang$frostc$MethodDecl** _1;
org$frostlang$frostc$MethodDecl* _2;
frost$core$String* _3;
frost$core$String* _4;
frost$core$String* _5;
org$frostlang$frostc$Type** _6;
org$frostlang$frostc$Type* _7;
frost$core$Object* _8;
$fn220 _11;
frost$core$String* _12;
frost$core$String* _13;
frost$core$Object* _14;
frost$core$Object* _16;
frost$core$Object* _18;
frost$core$String* _21;
frost$core$Object* _22;
frost$core$Object* _24;
frost$core$Object* _26;
frost$core$Object* _28;
frost$core$Object* _30;
frost$core$Object* _32;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:122
_1 = &param0->value;
_2 = *_1;
_3 = org$frostlang$frostc$MethodDecl$get_declaration$R$frost$core$String(_2);
_4 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s221, _3);
_5 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_4, &$s222);
_6 = &param0->effectiveType;
_7 = *_6;
_8 = ((frost$core$Object*) _7);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from MethodRef.frost:122:16
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:155
_11 = ($fn223) _8->$class->vtable[0];
_12 = _11(_8);
_13 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_5, _12);
_14 = ((frost$core$Object*) _13);
frost$core$Frost$ref$frost$core$Object$Q(_14);
_16 = ((frost$core$Object*) _13);
frost$core$Frost$unref$frost$core$Object$Q(_16);
_18 = ((frost$core$Object*) _12);
frost$core$Frost$unref$frost$core$Object$Q(_18);
_21 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_13, &$s224);
_22 = ((frost$core$Object*) _21);
frost$core$Frost$ref$frost$core$Object$Q(_22);
_24 = ((frost$core$Object*) _21);
frost$core$Frost$unref$frost$core$Object$Q(_24);
_26 = ((frost$core$Object*) _13);
frost$core$Frost$unref$frost$core$Object$Q(_26);
_28 = ((frost$core$Object*) _5);
frost$core$Frost$unref$frost$core$Object$Q(_28);
_30 = ((frost$core$Object*) _4);
frost$core$Frost$unref$frost$core$Object$Q(_30);
_32 = ((frost$core$Object*) _3);
frost$core$Frost$unref$frost$core$Object$Q(_32);
return _21;

}
void org$frostlang$frostc$MethodRef$cleanup(org$frostlang$frostc$MethodRef* param0) {

frost$core$Object* _1;
org$frostlang$frostc$Type** _3;
org$frostlang$frostc$Type* _4;
frost$core$Object* _5;
org$frostlang$frostc$MethodDecl** _7;
org$frostlang$frostc$MethodDecl* _8;
frost$core$Object* _9;
org$frostlang$frostc$Type** _11;
org$frostlang$frostc$Type* _12;
frost$core$Object* _13;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:9
_1 = ((frost$core$Object*) param0);
frost$core$Object$cleanup(_1);
_3 = &param0->target;
_4 = *_3;
_5 = ((frost$core$Object*) _4);
frost$core$Frost$unref$frost$core$Object$Q(_5);
_7 = &param0->value;
_8 = *_7;
_9 = ((frost$core$Object*) _8);
frost$core$Frost$unref$frost$core$Object$Q(_9);
_11 = &param0->effectiveType;
_12 = *_11;
_13 = ((frost$core$Object*) _12);
frost$core$Frost$unref$frost$core$Object$Q(_13);
return;

}

