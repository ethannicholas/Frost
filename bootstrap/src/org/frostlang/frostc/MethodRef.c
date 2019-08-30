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
#include "frost/core/Frost.h"
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
#include "frost/collections/Key.h"


static frost$core$String $s1;
org$frostlang$frostc$MethodRef$class_type org$frostlang$frostc$MethodRef$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { org$frostlang$frostc$MethodRef$get_asString$R$frost$core$String, org$frostlang$frostc$MethodRef$cleanup, org$frostlang$frostc$MethodRef$get_parameterCount$R$frost$core$Int, org$frostlang$frostc$MethodRef$parameterType$frost$core$Int$R$org$frostlang$frostc$Type, org$frostlang$frostc$MethodRef$get_returnType$R$org$frostlang$frostc$Type} };

typedef frost$core$Bit (*$fn12)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$String* (*$fn51)(frost$core$Object*);
typedef frost$core$Bit (*$fn102)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn115)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int (*$fn165)(frost$collections$CollectionView*);
typedef frost$collections$ListView* (*$fn176)(frost$collections$ListView*, frost$core$Range$LTfrost$core$Int$GT);
typedef frost$core$Bit (*$fn219)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn232)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn245)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn258)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Object* (*$fn273)(frost$collections$ListView*);
typedef frost$core$Bit (*$fn296)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int (*$fn347)(frost$collections$CollectionView*);
typedef frost$collections$ListView* (*$fn358)(frost$collections$ListView*, frost$core$Range$LTfrost$core$Int$GT);
typedef frost$core$Bit (*$fn371)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn384)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn397)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn410)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Object* (*$fn425)(frost$collections$ListView*);
typedef frost$collections$Iterator* (*$fn436)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn440)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn445)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn491)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn504)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn517)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn530)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Object* (*$fn545)(frost$collections$ListView*);
typedef frost$core$Bit (*$fn566)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int (*$fn595)(frost$collections$CollectionView*);
typedef frost$collections$ListView* (*$fn606)(frost$collections$ListView*, frost$core$Range$LTfrost$core$Int$GT);
typedef frost$core$Bit (*$fn626)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int (*$fn669)(frost$collections$CollectionView*);
typedef frost$collections$ListView* (*$fn680)(frost$collections$ListView*, frost$core$Range$LTfrost$core$Int$GT);
typedef frost$core$Int (*$fn728)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn760)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn781)(frost$collections$ListView*, frost$core$Int);
typedef frost$core$Bit (*$fn830)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn843)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn856)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn869)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int (*$fn884)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn913)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn926)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn939)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn952)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Object* (*$fn967)(frost$collections$ListView*);
typedef frost$core$String* (*$fn979)(frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x52\x65\x66", 30, -1382371847710016002, NULL };
static frost$core$String $s18 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x72\x65\x73\x6f\x6c\x76\x65\x64\x20\x6d\x65\x74\x68\x6f\x64\x20", 18, 903832688028414089, NULL };
static frost$core$String $s20 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s21 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x2e\x66\x72\x6f\x73\x74", 15, 1242067454507978657, NULL };
static frost$core$String $s41 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s54 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x69\x6e\x64\x54\x79\x70\x65\x28", 9, -6510821745887560362, NULL };
static frost$core$String $s56 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s63 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s70 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29\x20\x66\x61\x69\x6c\x65\x64", 8, -3227922608979297983, NULL };
static frost$core$String $s71 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x2e\x66\x72\x6f\x73\x74", 15, 1242067454507978657, NULL };
static frost$core$String $s123 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s124 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s130 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x43\x6c\x61\x73\x73", 16, -6222778858933417332, NULL };
static frost$core$String $s141 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s142 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s152 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s153 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s161 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s162 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s202 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x2e\x66\x72\x6f\x73\x74", 15, 1242067454507978657, NULL };
static frost$core$String $s262 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s263 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2e\x67\x65\x74\x5f\x72\x65\x74\x75\x72\x6e\x54\x79\x70\x65\x28\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 102, -8354441105231428072, NULL };
static frost$core$String $s269 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s270 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s323 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x2e\x66\x72\x6f\x73\x74", 15, 1242067454507978657, NULL };
static frost$core$String $s334 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s335 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s343 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s344 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s414 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s415 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2e\x67\x65\x74\x5f\x72\x65\x74\x75\x72\x6e\x54\x79\x70\x65\x28\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 102, -8354441105231428072, NULL };
static frost$core$String $s421 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s422 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s534 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s535 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2e\x67\x65\x74\x5f\x72\x65\x74\x75\x72\x6e\x54\x79\x70\x65\x28\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 102, -8354441105231428072, NULL };
static frost$core$String $s541 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s542 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s582 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s583 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s591 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s592 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s635 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s636 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s642 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4d\x61\x79\x62\x65", 16, -2055899992811416928, NULL };
static frost$core$String $s656 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s657 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s665 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s666 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s688 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s689 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s710 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s716 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e", 1, -5808619545316717647, NULL };
static frost$core$String $s721 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e", 1, -5808619545316717647, NULL };
static frost$core$String $s768 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s769 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s873 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s874 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2e\x67\x65\x74\x5f\x70\x61\x72\x61\x6d\x65\x74\x65\x72\x43\x6f\x75\x6e\x74\x28\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 95, -6421234203817919051, NULL };
static frost$core$String $s880 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s881 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s898 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s899 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s956 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s957 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2e\x67\x65\x74\x5f\x72\x65\x74\x75\x72\x6e\x54\x79\x70\x65\x28\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 102, -8354441105231428072, NULL };
static frost$core$String $s963 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s964 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s973 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x28", 10, -2809919968047225889, NULL };
static frost$core$String $s975 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s983 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };

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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:35
org$frostlang$frostc$Compiler$Resolution* $tmp2 = &param3->resolved;
org$frostlang$frostc$Compiler$Resolution $tmp3 = *$tmp2;
org$frostlang$frostc$Compiler$Resolution$wrapper* $tmp4;
$tmp4 = (org$frostlang$frostc$Compiler$Resolution$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Compiler$Resolution$wrapperclass);
$tmp4->value = $tmp3;
frost$core$Int $tmp5 = (frost$core$Int) {0u};
// begin inline call to org.frostlang.frostc.Compiler.Resolution.init(rv:frost.core.Int):org.frostlang.frostc.Compiler.Resolution from MethodRef.frost:35:53
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:44
frost$core$Int* $tmp6 = &(&local1)->$rawValue;
*$tmp6 = $tmp5;
org$frostlang$frostc$Compiler$Resolution $tmp7 = *(&local1);
*(&local0) = $tmp7;
org$frostlang$frostc$Compiler$Resolution $tmp8 = *(&local0);
org$frostlang$frostc$Compiler$Resolution$wrapper* $tmp9;
$tmp9 = (org$frostlang$frostc$Compiler$Resolution$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Compiler$Resolution$wrapperclass);
$tmp9->value = $tmp8;
ITable* $tmp10 = ((frost$core$Equatable*) $tmp4)->$class->itable;
while ($tmp10->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp10 = $tmp10->next;
}
$fn12 $tmp11 = $tmp10->methods[1];
frost$core$Bit $tmp13 = $tmp11(((frost$core$Equatable*) $tmp4), ((frost$core$Equatable*) $tmp9));
bool $tmp14 = $tmp13.value;
if ($tmp14) goto block2; else goto block3;
block3:;
frost$core$Int $tmp15 = (frost$core$Int) {35u};
frost$core$String* $tmp16 = org$frostlang$frostc$MethodDecl$get_signature$R$frost$core$String(param3);
frost$core$String* $tmp17 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s18, $tmp16);
frost$core$String* $tmp19 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp17, &$s20);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s21, $tmp15, $tmp19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp19));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp17));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp16));
abort(); // unreachable
block2:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp9)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp4)));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:37
frost$core$Bit $tmp22 = (frost$core$Bit) {param4 == NULL};
bool $tmp23 = $tmp22.value;
if ($tmp23) goto block4; else goto block5;
block4:;
frost$collections$Array** $tmp24 = &param3->genericParameters;
frost$collections$Array* $tmp25 = *$tmp24;
frost$core$Bit $tmp26 = (frost$core$Bit) {$tmp25 != NULL};
*(&local2) = $tmp26;
goto block6;
block5:;
*(&local2) = $tmp22;
goto block6;
block6:;
frost$core$Bit $tmp27 = *(&local2);
frost$core$Bit* $tmp28 = &param0->requiresTypeInference;
*$tmp28 = $tmp27;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:38
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$MethodDecl** $tmp29 = &param0->value;
org$frostlang$frostc$MethodDecl* $tmp30 = *$tmp29;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp30));
org$frostlang$frostc$MethodDecl** $tmp31 = &param0->value;
*$tmp31 = param3;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:39
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
org$frostlang$frostc$Type** $tmp32 = &param0->target;
org$frostlang$frostc$Type* $tmp33 = *$tmp32;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp33));
org$frostlang$frostc$Type** $tmp34 = &param0->target;
*$tmp34 = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:40
frost$core$Weak** $tmp35 = &param3->owner;
frost$core$Weak* $tmp36 = *$tmp35;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from MethodRef.frost:40:53
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp37 = &$tmp36->_valid;
frost$core$Bit $tmp38 = *$tmp37;
bool $tmp39 = $tmp38.value;
if ($tmp39) goto block9; else goto block10;
block10:;
frost$core$Int $tmp40 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s41, $tmp40);
abort(); // unreachable
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp42 = &$tmp36->value;
frost$core$Object* $tmp43 = *$tmp42;
frost$core$Frost$ref$frost$core$Object$Q($tmp43);
org$frostlang$frostc$Type* $tmp44 = org$frostlang$frostc$Compiler$findType$org$frostlang$frostc$Type$org$frostlang$frostc$ClassDecl$R$org$frostlang$frostc$Type$Q(param1, param2, ((org$frostlang$frostc$ClassDecl*) $tmp43));
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp44));
org$frostlang$frostc$Type* $tmp45 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp45));
*(&local3) = $tmp44;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp44));
frost$core$Frost$unref$frost$core$Object$Q($tmp43);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:41
org$frostlang$frostc$Type* $tmp46 = *(&local3);
frost$core$Bit $tmp47 = (frost$core$Bit) {$tmp46 != NULL};
bool $tmp48 = $tmp47.value;
if ($tmp48) goto block11; else goto block12;
block12:;
frost$core$Int $tmp49 = (frost$core$Int) {41u};
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from MethodRef.frost:41:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn51 $tmp50 = ($fn51) ((frost$core$Object*) param2)->$class->vtable[0];
frost$core$String* $tmp52 = $tmp50(((frost$core$Object*) param2));
frost$core$String* $tmp53 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s54, $tmp52);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp53));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp53));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp52));
frost$core$String* $tmp55 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp53, &$s56);
frost$core$Weak** $tmp57 = &param3->owner;
frost$core$Weak* $tmp58 = *$tmp57;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from MethodRef.frost:41:60
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp59 = &$tmp58->_valid;
frost$core$Bit $tmp60 = *$tmp59;
bool $tmp61 = $tmp60.value;
if ($tmp61) goto block16; else goto block17;
block17:;
frost$core$Int $tmp62 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s63, $tmp62);
abort(); // unreachable
block16:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp64 = &$tmp58->value;
frost$core$Object* $tmp65 = *$tmp64;
frost$core$Frost$ref$frost$core$Object$Q($tmp65);
frost$core$String** $tmp66 = &((org$frostlang$frostc$ClassDecl*) $tmp65)->name;
frost$core$String* $tmp67 = *$tmp66;
frost$core$String* $tmp68 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp55, $tmp67);
frost$core$String* $tmp69 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp68, &$s70);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s71, $tmp49, $tmp69);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp69));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp68));
frost$core$Frost$unref$frost$core$Object$Q($tmp65);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp55));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp53));
abort(); // unreachable
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:42
org$frostlang$frostc$Type* $tmp72 = org$frostlang$frostc$MethodDecl$type$org$frostlang$frostc$Compiler$R$org$frostlang$frostc$Type(param3, param1);
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp72));
org$frostlang$frostc$Type* $tmp73 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp73));
*(&local4) = $tmp72;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp72));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:43
org$frostlang$frostc$Annotations** $tmp74 = &param3->annotations;
org$frostlang$frostc$Annotations* $tmp75 = *$tmp74;
// begin inline call to function org.frostlang.frostc.Annotations.get_isClass():frost.core.Bit from MethodRef.frost:43:30
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:122
frost$core$Int* $tmp76 = &$tmp75->flags;
frost$core$Int $tmp77 = *$tmp76;
frost$core$Int $tmp78 = (frost$core$Int) {16u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:122:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:293
int64_t $tmp79 = $tmp77.value;
int64_t $tmp80 = $tmp78.value;
int64_t $tmp81 = $tmp79 & $tmp80;
frost$core$Int $tmp82 = (frost$core$Int) {$tmp81};
frost$core$Int $tmp83 = (frost$core$Int) {0u};
int64_t $tmp84 = $tmp82.value;
int64_t $tmp85 = $tmp83.value;
bool $tmp86 = $tmp84 != $tmp85;
frost$core$Bit $tmp87 = (frost$core$Bit) {$tmp86};
// begin inline call to function frost.core.Bit.!():frost.core.Bit from MethodRef.frost:43:12
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp88 = $tmp87.value;
bool $tmp89 = !$tmp88;
frost$core$Bit $tmp90 = (frost$core$Bit) {$tmp89};
bool $tmp91 = $tmp90.value;
if ($tmp91) goto block22; else goto block20;
block22:;
org$frostlang$frostc$MethodDecl$Kind* $tmp92 = &param3->methodKind;
org$frostlang$frostc$MethodDecl$Kind $tmp93 = *$tmp92;
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp94;
$tmp94 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp94->value = $tmp93;
frost$core$Int $tmp95 = (frost$core$Int) {2u};
// begin inline call to org.frostlang.frostc.MethodDecl.Kind.init(rv:frost.core.Int):org.frostlang.frostc.MethodDecl.Kind from MethodRef.frost:43:76
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:7
frost$core$Int* $tmp96 = &(&local6)->$rawValue;
*$tmp96 = $tmp95;
org$frostlang$frostc$MethodDecl$Kind $tmp97 = *(&local6);
*(&local5) = $tmp97;
org$frostlang$frostc$MethodDecl$Kind $tmp98 = *(&local5);
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp99;
$tmp99 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp99->value = $tmp98;
ITable* $tmp100 = ((frost$core$Equatable*) $tmp94)->$class->itable;
while ($tmp100->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp100 = $tmp100->next;
}
$fn102 $tmp101 = $tmp100->methods[1];
frost$core$Bit $tmp103 = $tmp101(((frost$core$Equatable*) $tmp94), ((frost$core$Equatable*) $tmp99));
bool $tmp104 = $tmp103.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp99)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp94)));
if ($tmp104) goto block21; else goto block20;
block21:;
// begin inline call to function org.frostlang.frostc.Type.get_isClassLiteral():frost.core.Bit from MethodRef.frost:44:23
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:369
org$frostlang$frostc$Type$Kind* $tmp105 = &param2->typeKind;
org$frostlang$frostc$Type$Kind $tmp106 = *$tmp105;
org$frostlang$frostc$Type$Kind$wrapper* $tmp107;
$tmp107 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp107->value = $tmp106;
frost$core$Int $tmp108 = (frost$core$Int) {11u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:369:31
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp109 = &(&local9)->$rawValue;
*$tmp109 = $tmp108;
org$frostlang$frostc$Type$Kind $tmp110 = *(&local9);
*(&local8) = $tmp110;
org$frostlang$frostc$Type$Kind $tmp111 = *(&local8);
org$frostlang$frostc$Type$Kind$wrapper* $tmp112;
$tmp112 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp112->value = $tmp111;
ITable* $tmp113 = ((frost$core$Equatable*) $tmp107)->$class->itable;
while ($tmp113->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp113 = $tmp113->next;
}
$fn115 $tmp114 = $tmp113->methods[0];
frost$core$Bit $tmp116 = $tmp114(((frost$core$Equatable*) $tmp107), ((frost$core$Equatable*) $tmp112));
bool $tmp117 = $tmp116.value;
if ($tmp117) goto block29; else goto block30;
block29:;
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:369:42
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp118 = &param2->_subtypes;
org$frostlang$frostc$FixedArray* $tmp119 = *$tmp118;
frost$core$Bit $tmp120 = (frost$core$Bit) {$tmp119 != NULL};
bool $tmp121 = $tmp120.value;
if ($tmp121) goto block33; else goto block34;
block34:;
frost$core$Int $tmp122 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s123, $tmp122, &$s124);
abort(); // unreachable
block33:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp119));
frost$core$Int $tmp125 = (frost$core$Int) {0u};
frost$core$Object* $tmp126 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp119, $tmp125);
frost$core$String** $tmp127 = &((org$frostlang$frostc$Symbol*) ((org$frostlang$frostc$Type*) $tmp126))->name;
frost$core$String* $tmp128 = *$tmp127;
frost$core$Bit $tmp129 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp128, &$s130);
frost$core$Frost$unref$frost$core$Object$Q($tmp126);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp119));
*(&local7) = $tmp129;
goto block31;
block30:;
*(&local7) = $tmp116;
goto block31;
block31:;
frost$core$Bit $tmp131 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp112)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp107)));
bool $tmp132 = $tmp131.value;
if ($tmp132) goto block18; else goto block20;
block18:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:45
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp133 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp133);
*(&local10) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp133));
frost$collections$Array* $tmp134 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp134));
*(&local10) = $tmp133;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp133));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:46
frost$collections$Array* $tmp135 = *(&local10);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from MethodRef.frost:46:38
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp136 = &param2->_subtypes;
org$frostlang$frostc$FixedArray* $tmp137 = *$tmp136;
frost$core$Bit $tmp138 = (frost$core$Bit) {$tmp137 != NULL};
bool $tmp139 = $tmp138.value;
if ($tmp139) goto block36; else goto block37;
block37:;
frost$core$Int $tmp140 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s141, $tmp140, &$s142);
abort(); // unreachable
block36:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp137));
frost$core$Int $tmp143 = (frost$core$Int) {1u};
frost$core$Object* $tmp144 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp137, $tmp143);
frost$collections$Array$add$frost$collections$Array$T($tmp135, ((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp144)));
frost$core$Frost$unref$frost$core$Object$Q($tmp144);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp137));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:47
frost$collections$Array* $tmp145 = *(&local10);
org$frostlang$frostc$Type* $tmp146 = *(&local4);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from MethodRef.frost:47:45
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp147 = &$tmp146->_subtypes;
org$frostlang$frostc$FixedArray* $tmp148 = *$tmp147;
frost$core$Bit $tmp149 = (frost$core$Bit) {$tmp148 != NULL};
bool $tmp150 = $tmp149.value;
if ($tmp150) goto block39; else goto block40;
block40:;
frost$core$Int $tmp151 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s152, $tmp151, &$s153);
abort(); // unreachable
block39:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp148));
frost$core$Int $tmp154 = (frost$core$Int) {0u};
org$frostlang$frostc$Type* $tmp155 = *(&local4);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from MethodRef.frost:47:70
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp156 = &$tmp155->_subtypes;
org$frostlang$frostc$FixedArray* $tmp157 = *$tmp156;
frost$core$Bit $tmp158 = (frost$core$Bit) {$tmp157 != NULL};
bool $tmp159 = $tmp158.value;
if ($tmp159) goto block42; else goto block43;
block43:;
frost$core$Int $tmp160 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s161, $tmp160, &$s162);
abort(); // unreachable
block42:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp157));
ITable* $tmp163 = ((frost$collections$CollectionView*) $tmp157)->$class->itable;
while ($tmp163->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp163 = $tmp163->next;
}
$fn165 $tmp164 = $tmp163->methods[0];
frost$core$Int $tmp166 = $tmp164(((frost$collections$CollectionView*) $tmp157));
frost$core$Int $tmp167 = (frost$core$Int) {1u};
int64_t $tmp168 = $tmp166.value;
int64_t $tmp169 = $tmp167.value;
int64_t $tmp170 = $tmp168 - $tmp169;
frost$core$Int $tmp171 = (frost$core$Int) {$tmp170};
frost$core$Bit $tmp172 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp173 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp154, $tmp171, $tmp172);
ITable* $tmp174 = ((frost$collections$ListView*) $tmp148)->$class->itable;
while ($tmp174->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp174 = $tmp174->next;
}
$fn176 $tmp175 = $tmp174->methods[1];
frost$collections$ListView* $tmp177 = $tmp175(((frost$collections$ListView*) $tmp148), $tmp173);
frost$collections$Array$addAll$frost$collections$CollectionView$LTfrost$collections$Array$T$GT($tmp145, ((frost$collections$CollectionView*) $tmp177));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp177));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp157));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp148));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:48
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:49
org$frostlang$frostc$MethodDecl$Kind* $tmp178 = &param3->methodKind;
org$frostlang$frostc$MethodDecl$Kind $tmp179 = *$tmp178;
frost$core$Int $tmp180 = $tmp179.$rawValue;
frost$core$Int $tmp181 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from MethodRef.frost:50:37
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp182 = $tmp180.value;
int64_t $tmp183 = $tmp181.value;
bool $tmp184 = $tmp182 == $tmp183;
frost$core$Bit $tmp185 = (frost$core$Bit) {$tmp184};
bool $tmp186 = $tmp185.value;
if ($tmp186) goto block45; else goto block46;
block45:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:51
frost$core$Int $tmp187 = (frost$core$Int) {18u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from MethodRef.frost:51:42
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp188 = &(&local13)->$rawValue;
*$tmp188 = $tmp187;
org$frostlang$frostc$Type$Kind $tmp189 = *(&local13);
*(&local12) = $tmp189;
org$frostlang$frostc$Type$Kind $tmp190 = *(&local12);
*(&local11) = $tmp190;
goto block44;
block46:;
frost$core$Int $tmp191 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from MethodRef.frost:53:37
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp192 = $tmp180.value;
int64_t $tmp193 = $tmp191.value;
bool $tmp194 = $tmp192 == $tmp193;
frost$core$Bit $tmp195 = (frost$core$Bit) {$tmp194};
bool $tmp196 = $tmp195.value;
if ($tmp196) goto block49; else goto block50;
block49:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:54
frost$core$Int $tmp197 = (frost$core$Int) {17u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from MethodRef.frost:54:42
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp198 = &(&local15)->$rawValue;
*$tmp198 = $tmp197;
org$frostlang$frostc$Type$Kind $tmp199 = *(&local15);
*(&local14) = $tmp199;
org$frostlang$frostc$Type$Kind $tmp200 = *(&local14);
*(&local11) = $tmp200;
goto block44;
block50:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:57
frost$core$Int $tmp201 = (frost$core$Int) {57u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s202, $tmp201);
abort(); // unreachable
block44:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:60
org$frostlang$frostc$Type* $tmp203 = *(&local4);
org$frostlang$frostc$Position* $tmp204 = &((org$frostlang$frostc$Symbol*) $tmp203)->position;
org$frostlang$frostc$Position $tmp205 = *$tmp204;
org$frostlang$frostc$Type$Kind $tmp206 = *(&local11);
frost$collections$Array* $tmp207 = *(&local10);
org$frostlang$frostc$Type* $tmp208 = *(&local4);
// begin inline call to function org.frostlang.frostc.Type.get_returnType():org.frostlang.frostc.Type from MethodRef.frost:61:31
org$frostlang$frostc$Type$Kind* $tmp209 = &$tmp208->typeKind;
org$frostlang$frostc$Type$Kind $tmp210 = *$tmp209;
org$frostlang$frostc$Type$Kind$wrapper* $tmp211;
$tmp211 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp211->value = $tmp210;
frost$core$Int $tmp212 = (frost$core$Int) {15u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:431:25
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp213 = &(&local17)->$rawValue;
*$tmp213 = $tmp212;
org$frostlang$frostc$Type$Kind $tmp214 = *(&local17);
*(&local16) = $tmp214;
org$frostlang$frostc$Type$Kind $tmp215 = *(&local16);
org$frostlang$frostc$Type$Kind$wrapper* $tmp216;
$tmp216 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp216->value = $tmp215;
ITable* $tmp217 = ((frost$core$Equatable*) $tmp211)->$class->itable;
while ($tmp217->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp217 = $tmp217->next;
}
$fn219 $tmp218 = $tmp217->methods[0];
frost$core$Bit $tmp220 = $tmp218(((frost$core$Equatable*) $tmp211), ((frost$core$Equatable*) $tmp216));
bool $tmp221 = $tmp220.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp216)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp211)));
if ($tmp221) goto block54; else goto block58;
block58:;
org$frostlang$frostc$Type$Kind* $tmp222 = &$tmp208->typeKind;
org$frostlang$frostc$Type$Kind $tmp223 = *$tmp222;
org$frostlang$frostc$Type$Kind$wrapper* $tmp224;
$tmp224 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp224->value = $tmp223;
frost$core$Int $tmp225 = (frost$core$Int) {16u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:431:52
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp226 = &(&local19)->$rawValue;
*$tmp226 = $tmp225;
org$frostlang$frostc$Type$Kind $tmp227 = *(&local19);
*(&local18) = $tmp227;
org$frostlang$frostc$Type$Kind $tmp228 = *(&local18);
org$frostlang$frostc$Type$Kind$wrapper* $tmp229;
$tmp229 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp229->value = $tmp228;
ITable* $tmp230 = ((frost$core$Equatable*) $tmp224)->$class->itable;
while ($tmp230->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp230 = $tmp230->next;
}
$fn232 $tmp231 = $tmp230->methods[0];
frost$core$Bit $tmp233 = $tmp231(((frost$core$Equatable*) $tmp224), ((frost$core$Equatable*) $tmp229));
bool $tmp234 = $tmp233.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp229)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp224)));
if ($tmp234) goto block54; else goto block57;
block57:;
org$frostlang$frostc$Type$Kind* $tmp235 = &$tmp208->typeKind;
org$frostlang$frostc$Type$Kind $tmp236 = *$tmp235;
org$frostlang$frostc$Type$Kind$wrapper* $tmp237;
$tmp237 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp237->value = $tmp236;
frost$core$Int $tmp238 = (frost$core$Int) {17u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:431:77
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp239 = &(&local21)->$rawValue;
*$tmp239 = $tmp238;
org$frostlang$frostc$Type$Kind $tmp240 = *(&local21);
*(&local20) = $tmp240;
org$frostlang$frostc$Type$Kind $tmp241 = *(&local20);
org$frostlang$frostc$Type$Kind$wrapper* $tmp242;
$tmp242 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp242->value = $tmp241;
ITable* $tmp243 = ((frost$core$Equatable*) $tmp237)->$class->itable;
while ($tmp243->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp243 = $tmp243->next;
}
$fn245 $tmp244 = $tmp243->methods[0];
frost$core$Bit $tmp246 = $tmp244(((frost$core$Equatable*) $tmp237), ((frost$core$Equatable*) $tmp242));
bool $tmp247 = $tmp246.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp242)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp237)));
if ($tmp247) goto block54; else goto block56;
block56:;
org$frostlang$frostc$Type$Kind* $tmp248 = &$tmp208->typeKind;
org$frostlang$frostc$Type$Kind $tmp249 = *$tmp248;
org$frostlang$frostc$Type$Kind$wrapper* $tmp250;
$tmp250 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp250->value = $tmp249;
frost$core$Int $tmp251 = (frost$core$Int) {18u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:432:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp252 = &(&local23)->$rawValue;
*$tmp252 = $tmp251;
org$frostlang$frostc$Type$Kind $tmp253 = *(&local23);
*(&local22) = $tmp253;
org$frostlang$frostc$Type$Kind $tmp254 = *(&local22);
org$frostlang$frostc$Type$Kind$wrapper* $tmp255;
$tmp255 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp255->value = $tmp254;
ITable* $tmp256 = ((frost$core$Equatable*) $tmp250)->$class->itable;
while ($tmp256->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp256 = $tmp256->next;
}
$fn258 $tmp257 = $tmp256->methods[0];
frost$core$Bit $tmp259 = $tmp257(((frost$core$Equatable*) $tmp250), ((frost$core$Equatable*) $tmp255));
bool $tmp260 = $tmp259.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp255)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp250)));
if ($tmp260) goto block54; else goto block55;
block55:;
frost$core$Int $tmp261 = (frost$core$Int) {433u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s262, $tmp261, &$s263);
abort(); // unreachable
block54:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:434
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:434:16
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp264 = &$tmp208->_subtypes;
org$frostlang$frostc$FixedArray* $tmp265 = *$tmp264;
frost$core$Bit $tmp266 = (frost$core$Bit) {$tmp265 != NULL};
bool $tmp267 = $tmp266.value;
if ($tmp267) goto block64; else goto block65;
block65:;
frost$core$Int $tmp268 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s269, $tmp268, &$s270);
abort(); // unreachable
block64:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp265));
ITable* $tmp271 = ((frost$collections$ListView*) $tmp265)->$class->itable;
while ($tmp271->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp271 = $tmp271->next;
}
$fn273 $tmp272 = $tmp271->methods[5];
frost$core$Object* $tmp274 = $tmp272(((frost$collections$ListView*) $tmp265));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp274)));
frost$core$Frost$unref$frost$core$Object$Q($tmp274);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp265));
org$frostlang$frostc$Type* $tmp275 = *(&local4);
frost$core$Int* $tmp276 = &$tmp275->priority;
frost$core$Int $tmp277 = *$tmp276;
org$frostlang$frostc$Type* $tmp278 = org$frostlang$frostc$Type$methodType$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$Type$Kind$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$org$frostlang$frostc$Type$frost$core$Int$R$org$frostlang$frostc$Type(param1, $tmp205, $tmp206, ((frost$collections$ListView*) $tmp207), ((org$frostlang$frostc$Type*) $tmp274), $tmp277);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp278));
org$frostlang$frostc$Type* $tmp279 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp279));
*(&local4) = $tmp278;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp278));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp274)));
frost$collections$Array* $tmp280 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp280));
*(&local10) = ((frost$collections$Array*) NULL);
goto block19;
block20:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:63
frost$core$Bit $tmp281 = org$frostlang$frostc$Compiler$isImmutable$org$frostlang$frostc$Type$R$frost$core$Bit(param1, param2);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from MethodRef.frost:63:17
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp282 = $tmp281.value;
bool $tmp283 = !$tmp282;
frost$core$Bit $tmp284 = (frost$core$Bit) {$tmp283};
bool $tmp285 = $tmp284.value;
if ($tmp285) goto block68; else goto block67;
block68:;
org$frostlang$frostc$MethodDecl$Kind* $tmp286 = &param3->methodKind;
org$frostlang$frostc$MethodDecl$Kind $tmp287 = *$tmp286;
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp288;
$tmp288 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp288->value = $tmp287;
frost$core$Int $tmp289 = (frost$core$Int) {2u};
// begin inline call to org.frostlang.frostc.MethodDecl.Kind.init(rv:frost.core.Int):org.frostlang.frostc.MethodDecl.Kind from MethodRef.frost:63:84
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:7
frost$core$Int* $tmp290 = &(&local25)->$rawValue;
*$tmp290 = $tmp289;
org$frostlang$frostc$MethodDecl$Kind $tmp291 = *(&local25);
*(&local24) = $tmp291;
org$frostlang$frostc$MethodDecl$Kind $tmp292 = *(&local24);
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp293;
$tmp293 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp293->value = $tmp292;
ITable* $tmp294 = ((frost$core$Equatable*) $tmp288)->$class->itable;
while ($tmp294->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp294 = $tmp294->next;
}
$fn296 $tmp295 = $tmp294->methods[1];
frost$core$Bit $tmp297 = $tmp295(((frost$core$Equatable*) $tmp288), ((frost$core$Equatable*) $tmp293));
bool $tmp298 = $tmp297.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp293)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp288)));
if ($tmp298) goto block66; else goto block67;
block66:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:64
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:65
org$frostlang$frostc$MethodDecl$Kind* $tmp299 = &param3->methodKind;
org$frostlang$frostc$MethodDecl$Kind $tmp300 = *$tmp299;
frost$core$Int $tmp301 = $tmp300.$rawValue;
frost$core$Int $tmp302 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from MethodRef.frost:66:37
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp303 = $tmp301.value;
int64_t $tmp304 = $tmp302.value;
bool $tmp305 = $tmp303 == $tmp304;
frost$core$Bit $tmp306 = (frost$core$Bit) {$tmp305};
bool $tmp307 = $tmp306.value;
if ($tmp307) goto block72; else goto block73;
block72:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:67
frost$core$Int $tmp308 = (frost$core$Int) {16u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from MethodRef.frost:67:42
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp309 = &(&local28)->$rawValue;
*$tmp309 = $tmp308;
org$frostlang$frostc$Type$Kind $tmp310 = *(&local28);
*(&local27) = $tmp310;
org$frostlang$frostc$Type$Kind $tmp311 = *(&local27);
*(&local26) = $tmp311;
goto block71;
block73:;
frost$core$Int $tmp312 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from MethodRef.frost:69:37
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp313 = $tmp301.value;
int64_t $tmp314 = $tmp312.value;
bool $tmp315 = $tmp313 == $tmp314;
frost$core$Bit $tmp316 = (frost$core$Bit) {$tmp315};
bool $tmp317 = $tmp316.value;
if ($tmp317) goto block76; else goto block77;
block76:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:70
frost$core$Int $tmp318 = (frost$core$Int) {15u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from MethodRef.frost:70:42
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp319 = &(&local30)->$rawValue;
*$tmp319 = $tmp318;
org$frostlang$frostc$Type$Kind $tmp320 = *(&local30);
*(&local29) = $tmp320;
org$frostlang$frostc$Type$Kind $tmp321 = *(&local29);
*(&local26) = $tmp321;
goto block71;
block77:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:73
frost$core$Int $tmp322 = (frost$core$Int) {73u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s323, $tmp322);
abort(); // unreachable
block71:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:76
org$frostlang$frostc$Type* $tmp324 = *(&local4);
org$frostlang$frostc$Position* $tmp325 = &((org$frostlang$frostc$Symbol*) $tmp324)->position;
org$frostlang$frostc$Position $tmp326 = *$tmp325;
org$frostlang$frostc$Type$Kind $tmp327 = *(&local26);
org$frostlang$frostc$Type* $tmp328 = *(&local4);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from MethodRef.frost:77:31
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp329 = &$tmp328->_subtypes;
org$frostlang$frostc$FixedArray* $tmp330 = *$tmp329;
frost$core$Bit $tmp331 = (frost$core$Bit) {$tmp330 != NULL};
bool $tmp332 = $tmp331.value;
if ($tmp332) goto block81; else goto block82;
block82:;
frost$core$Int $tmp333 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s334, $tmp333, &$s335);
abort(); // unreachable
block81:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp330));
frost$core$Int $tmp336 = (frost$core$Int) {0u};
org$frostlang$frostc$Type* $tmp337 = *(&local4);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from MethodRef.frost:77:56
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp338 = &$tmp337->_subtypes;
org$frostlang$frostc$FixedArray* $tmp339 = *$tmp338;
frost$core$Bit $tmp340 = (frost$core$Bit) {$tmp339 != NULL};
bool $tmp341 = $tmp340.value;
if ($tmp341) goto block84; else goto block85;
block85:;
frost$core$Int $tmp342 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s343, $tmp342, &$s344);
abort(); // unreachable
block84:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp339));
ITable* $tmp345 = ((frost$collections$CollectionView*) $tmp339)->$class->itable;
while ($tmp345->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp345 = $tmp345->next;
}
$fn347 $tmp346 = $tmp345->methods[0];
frost$core$Int $tmp348 = $tmp346(((frost$collections$CollectionView*) $tmp339));
frost$core$Int $tmp349 = (frost$core$Int) {1u};
int64_t $tmp350 = $tmp348.value;
int64_t $tmp351 = $tmp349.value;
int64_t $tmp352 = $tmp350 - $tmp351;
frost$core$Int $tmp353 = (frost$core$Int) {$tmp352};
frost$core$Bit $tmp354 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp355 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp336, $tmp353, $tmp354);
ITable* $tmp356 = ((frost$collections$ListView*) $tmp330)->$class->itable;
while ($tmp356->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp356 = $tmp356->next;
}
$fn358 $tmp357 = $tmp356->methods[1];
frost$collections$ListView* $tmp359 = $tmp357(((frost$collections$ListView*) $tmp330), $tmp355);
org$frostlang$frostc$Type* $tmp360 = *(&local4);
// begin inline call to function org.frostlang.frostc.Type.get_returnType():org.frostlang.frostc.Type from MethodRef.frost:78:31
org$frostlang$frostc$Type$Kind* $tmp361 = &$tmp360->typeKind;
org$frostlang$frostc$Type$Kind $tmp362 = *$tmp361;
org$frostlang$frostc$Type$Kind$wrapper* $tmp363;
$tmp363 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp363->value = $tmp362;
frost$core$Int $tmp364 = (frost$core$Int) {15u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:431:25
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp365 = &(&local32)->$rawValue;
*$tmp365 = $tmp364;
org$frostlang$frostc$Type$Kind $tmp366 = *(&local32);
*(&local31) = $tmp366;
org$frostlang$frostc$Type$Kind $tmp367 = *(&local31);
org$frostlang$frostc$Type$Kind$wrapper* $tmp368;
$tmp368 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp368->value = $tmp367;
ITable* $tmp369 = ((frost$core$Equatable*) $tmp363)->$class->itable;
while ($tmp369->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp369 = $tmp369->next;
}
$fn371 $tmp370 = $tmp369->methods[0];
frost$core$Bit $tmp372 = $tmp370(((frost$core$Equatable*) $tmp363), ((frost$core$Equatable*) $tmp368));
bool $tmp373 = $tmp372.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp368)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp363)));
if ($tmp373) goto block87; else goto block91;
block91:;
org$frostlang$frostc$Type$Kind* $tmp374 = &$tmp360->typeKind;
org$frostlang$frostc$Type$Kind $tmp375 = *$tmp374;
org$frostlang$frostc$Type$Kind$wrapper* $tmp376;
$tmp376 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp376->value = $tmp375;
frost$core$Int $tmp377 = (frost$core$Int) {16u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:431:52
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp378 = &(&local34)->$rawValue;
*$tmp378 = $tmp377;
org$frostlang$frostc$Type$Kind $tmp379 = *(&local34);
*(&local33) = $tmp379;
org$frostlang$frostc$Type$Kind $tmp380 = *(&local33);
org$frostlang$frostc$Type$Kind$wrapper* $tmp381;
$tmp381 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp381->value = $tmp380;
ITable* $tmp382 = ((frost$core$Equatable*) $tmp376)->$class->itable;
while ($tmp382->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp382 = $tmp382->next;
}
$fn384 $tmp383 = $tmp382->methods[0];
frost$core$Bit $tmp385 = $tmp383(((frost$core$Equatable*) $tmp376), ((frost$core$Equatable*) $tmp381));
bool $tmp386 = $tmp385.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp381)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp376)));
if ($tmp386) goto block87; else goto block90;
block90:;
org$frostlang$frostc$Type$Kind* $tmp387 = &$tmp360->typeKind;
org$frostlang$frostc$Type$Kind $tmp388 = *$tmp387;
org$frostlang$frostc$Type$Kind$wrapper* $tmp389;
$tmp389 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp389->value = $tmp388;
frost$core$Int $tmp390 = (frost$core$Int) {17u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:431:77
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp391 = &(&local36)->$rawValue;
*$tmp391 = $tmp390;
org$frostlang$frostc$Type$Kind $tmp392 = *(&local36);
*(&local35) = $tmp392;
org$frostlang$frostc$Type$Kind $tmp393 = *(&local35);
org$frostlang$frostc$Type$Kind$wrapper* $tmp394;
$tmp394 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp394->value = $tmp393;
ITable* $tmp395 = ((frost$core$Equatable*) $tmp389)->$class->itable;
while ($tmp395->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp395 = $tmp395->next;
}
$fn397 $tmp396 = $tmp395->methods[0];
frost$core$Bit $tmp398 = $tmp396(((frost$core$Equatable*) $tmp389), ((frost$core$Equatable*) $tmp394));
bool $tmp399 = $tmp398.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp394)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp389)));
if ($tmp399) goto block87; else goto block89;
block89:;
org$frostlang$frostc$Type$Kind* $tmp400 = &$tmp360->typeKind;
org$frostlang$frostc$Type$Kind $tmp401 = *$tmp400;
org$frostlang$frostc$Type$Kind$wrapper* $tmp402;
$tmp402 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp402->value = $tmp401;
frost$core$Int $tmp403 = (frost$core$Int) {18u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:432:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp404 = &(&local38)->$rawValue;
*$tmp404 = $tmp403;
org$frostlang$frostc$Type$Kind $tmp405 = *(&local38);
*(&local37) = $tmp405;
org$frostlang$frostc$Type$Kind $tmp406 = *(&local37);
org$frostlang$frostc$Type$Kind$wrapper* $tmp407;
$tmp407 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp407->value = $tmp406;
ITable* $tmp408 = ((frost$core$Equatable*) $tmp402)->$class->itable;
while ($tmp408->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp408 = $tmp408->next;
}
$fn410 $tmp409 = $tmp408->methods[0];
frost$core$Bit $tmp411 = $tmp409(((frost$core$Equatable*) $tmp402), ((frost$core$Equatable*) $tmp407));
bool $tmp412 = $tmp411.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp407)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp402)));
if ($tmp412) goto block87; else goto block88;
block88:;
frost$core$Int $tmp413 = (frost$core$Int) {433u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s414, $tmp413, &$s415);
abort(); // unreachable
block87:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:434
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:434:16
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp416 = &$tmp360->_subtypes;
org$frostlang$frostc$FixedArray* $tmp417 = *$tmp416;
frost$core$Bit $tmp418 = (frost$core$Bit) {$tmp417 != NULL};
bool $tmp419 = $tmp418.value;
if ($tmp419) goto block97; else goto block98;
block98:;
frost$core$Int $tmp420 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s421, $tmp420, &$s422);
abort(); // unreachable
block97:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp417));
ITable* $tmp423 = ((frost$collections$ListView*) $tmp417)->$class->itable;
while ($tmp423->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp423 = $tmp423->next;
}
$fn425 $tmp424 = $tmp423->methods[5];
frost$core$Object* $tmp426 = $tmp424(((frost$collections$ListView*) $tmp417));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp426)));
frost$core$Frost$unref$frost$core$Object$Q($tmp426);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp417));
org$frostlang$frostc$Type* $tmp427 = *(&local4);
frost$core$Int* $tmp428 = &$tmp427->priority;
frost$core$Int $tmp429 = *$tmp428;
org$frostlang$frostc$Type* $tmp430 = org$frostlang$frostc$Type$methodType$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$Type$Kind$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$org$frostlang$frostc$Type$frost$core$Int$R$org$frostlang$frostc$Type(param1, $tmp326, $tmp327, $tmp359, ((org$frostlang$frostc$Type*) $tmp426), $tmp429);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp430));
org$frostlang$frostc$Type* $tmp431 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp431));
*(&local4) = $tmp430;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp430));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp426)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp359));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp339));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp330));
goto block67;
block67:;
goto block19;
block19:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:80
// begin inline call to function org.frostlang.frostc.Compiler.getTryScope():org.frostlang.frostc.Pair<org.frostlang.frostc.IR.Block.ID?, org.frostlang.frostc.Variable?>? from MethodRef.frost:80:32
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5206
frost$collections$Stack** $tmp432 = &param1->enclosingContexts;
frost$collections$Stack* $tmp433 = *$tmp432;
ITable* $tmp434 = ((frost$collections$Iterable*) $tmp433)->$class->itable;
while ($tmp434->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp434 = $tmp434->next;
}
$fn436 $tmp435 = $tmp434->methods[0];
frost$collections$Iterator* $tmp437 = $tmp435(((frost$collections$Iterable*) $tmp433));
goto block102;
block102:;
ITable* $tmp438 = $tmp437->$class->itable;
while ($tmp438->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp438 = $tmp438->next;
}
$fn440 $tmp439 = $tmp438->methods[0];
frost$core$Bit $tmp441 = $tmp439($tmp437);
bool $tmp442 = $tmp441.value;
if ($tmp442) goto block104; else goto block103;
block103:;
*(&local40) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
ITable* $tmp443 = $tmp437->$class->itable;
while ($tmp443->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp443 = $tmp443->next;
}
$fn445 $tmp444 = $tmp443->methods[1];
frost$core$Object* $tmp446 = $tmp444($tmp437);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Compiler$EnclosingContext*) $tmp446)));
org$frostlang$frostc$Compiler$EnclosingContext* $tmp447 = *(&local40);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp447));
*(&local40) = ((org$frostlang$frostc$Compiler$EnclosingContext*) $tmp446);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5207
org$frostlang$frostc$Compiler$EnclosingContext* $tmp448 = *(&local40);
frost$core$Int* $tmp449 = &$tmp448->$rawValue;
frost$core$Int $tmp450 = *$tmp449;
frost$core$Int $tmp451 = (frost$core$Int) {5u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Compiler.frost:5208:38
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp452 = $tmp450.value;
int64_t $tmp453 = $tmp451.value;
bool $tmp454 = $tmp452 == $tmp453;
frost$core$Bit $tmp455 = (frost$core$Bit) {$tmp454};
bool $tmp456 = $tmp455.value;
if ($tmp456) goto block106; else goto block107;
block106:;
org$frostlang$frostc$IR$Block$ID$nullable* $tmp457 = (org$frostlang$frostc$IR$Block$ID$nullable*) ($tmp448->$data + 0);
org$frostlang$frostc$IR$Block$ID$nullable $tmp458 = *$tmp457;
*(&local41) = $tmp458;
org$frostlang$frostc$Variable** $tmp459 = (org$frostlang$frostc$Variable**) ($tmp448->$data + 9);
org$frostlang$frostc$Variable* $tmp460 = *$tmp459;
*(&local42) = ((org$frostlang$frostc$Variable*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp460));
org$frostlang$frostc$Variable* $tmp461 = *(&local42);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp461));
*(&local42) = $tmp460;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5209
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Pair));
org$frostlang$frostc$Pair* $tmp462 = (org$frostlang$frostc$Pair*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Pair$class);
org$frostlang$frostc$IR$Block$ID$nullable $tmp463 = *(&local41);
frost$core$Object* $tmp464;
if ($tmp463.nonnull) {
    org$frostlang$frostc$IR$Block$ID$wrapper* $tmp465;
    $tmp465 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
    $tmp465->value = ((org$frostlang$frostc$IR$Block$ID) $tmp463.value);
    $tmp464 = ((frost$core$Object*) $tmp465);
}
else {
    $tmp464 = NULL;
}
org$frostlang$frostc$Variable* $tmp466 = *(&local42);
org$frostlang$frostc$Pair$init$org$frostlang$frostc$Pair$A$org$frostlang$frostc$Pair$B($tmp462, $tmp464, ((frost$core$Object*) $tmp466));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp462));
frost$core$Frost$unref$frost$core$Object$Q($tmp464);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp462));
org$frostlang$frostc$Variable* $tmp467 = *(&local42);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp467));
*(&local42) = ((org$frostlang$frostc$Variable*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp446);
org$frostlang$frostc$Compiler$EnclosingContext* $tmp468 = *(&local40);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp468));
*(&local40) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp437));
*(&local39) = $tmp462;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp462));
goto block101;
block107:;
frost$core$Int $tmp469 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Compiler.frost:5211:38
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp470 = $tmp450.value;
int64_t $tmp471 = $tmp469.value;
bool $tmp472 = $tmp470 == $tmp471;
frost$core$Bit $tmp473 = (frost$core$Bit) {$tmp472};
bool $tmp474 = $tmp473.value;
if ($tmp474) goto block109; else goto block105;
block109:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5212
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Pair*) NULL)));
frost$core$Frost$unref$frost$core$Object$Q($tmp446);
org$frostlang$frostc$Compiler$EnclosingContext* $tmp475 = *(&local40);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp475));
*(&local40) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp437));
*(&local39) = ((org$frostlang$frostc$Pair*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Pair*) NULL)));
goto block101;
block105:;
frost$core$Frost$unref$frost$core$Object$Q($tmp446);
org$frostlang$frostc$Compiler$EnclosingContext* $tmp476 = *(&local40);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp476));
*(&local40) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
goto block102;
block104:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp437));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5216
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Pair*) NULL)));
*(&local39) = ((org$frostlang$frostc$Pair*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Pair*) NULL)));
goto block101;
block101:;
org$frostlang$frostc$Pair* $tmp477 = *(&local39);
frost$core$Bit $tmp478 = (frost$core$Bit) {$tmp477 != NULL};
bool $tmp479 = $tmp478.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp477));
if ($tmp479) goto block99; else goto block100;
block99:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:81
org$frostlang$frostc$Type* $tmp480 = *(&local4);
// begin inline call to function org.frostlang.frostc.Type.get_returnType():org.frostlang.frostc.Type from MethodRef.frost:81:41
org$frostlang$frostc$Type$Kind* $tmp481 = &$tmp480->typeKind;
org$frostlang$frostc$Type$Kind $tmp482 = *$tmp481;
org$frostlang$frostc$Type$Kind$wrapper* $tmp483;
$tmp483 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp483->value = $tmp482;
frost$core$Int $tmp484 = (frost$core$Int) {15u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:431:25
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp485 = &(&local44)->$rawValue;
*$tmp485 = $tmp484;
org$frostlang$frostc$Type$Kind $tmp486 = *(&local44);
*(&local43) = $tmp486;
org$frostlang$frostc$Type$Kind $tmp487 = *(&local43);
org$frostlang$frostc$Type$Kind$wrapper* $tmp488;
$tmp488 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp488->value = $tmp487;
ITable* $tmp489 = ((frost$core$Equatable*) $tmp483)->$class->itable;
while ($tmp489->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp489 = $tmp489->next;
}
$fn491 $tmp490 = $tmp489->methods[0];
frost$core$Bit $tmp492 = $tmp490(((frost$core$Equatable*) $tmp483), ((frost$core$Equatable*) $tmp488));
bool $tmp493 = $tmp492.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp488)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp483)));
if ($tmp493) goto block112; else goto block116;
block116:;
org$frostlang$frostc$Type$Kind* $tmp494 = &$tmp480->typeKind;
org$frostlang$frostc$Type$Kind $tmp495 = *$tmp494;
org$frostlang$frostc$Type$Kind$wrapper* $tmp496;
$tmp496 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp496->value = $tmp495;
frost$core$Int $tmp497 = (frost$core$Int) {16u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:431:52
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp498 = &(&local46)->$rawValue;
*$tmp498 = $tmp497;
org$frostlang$frostc$Type$Kind $tmp499 = *(&local46);
*(&local45) = $tmp499;
org$frostlang$frostc$Type$Kind $tmp500 = *(&local45);
org$frostlang$frostc$Type$Kind$wrapper* $tmp501;
$tmp501 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp501->value = $tmp500;
ITable* $tmp502 = ((frost$core$Equatable*) $tmp496)->$class->itable;
while ($tmp502->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp502 = $tmp502->next;
}
$fn504 $tmp503 = $tmp502->methods[0];
frost$core$Bit $tmp505 = $tmp503(((frost$core$Equatable*) $tmp496), ((frost$core$Equatable*) $tmp501));
bool $tmp506 = $tmp505.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp501)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp496)));
if ($tmp506) goto block112; else goto block115;
block115:;
org$frostlang$frostc$Type$Kind* $tmp507 = &$tmp480->typeKind;
org$frostlang$frostc$Type$Kind $tmp508 = *$tmp507;
org$frostlang$frostc$Type$Kind$wrapper* $tmp509;
$tmp509 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp509->value = $tmp508;
frost$core$Int $tmp510 = (frost$core$Int) {17u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:431:77
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp511 = &(&local48)->$rawValue;
*$tmp511 = $tmp510;
org$frostlang$frostc$Type$Kind $tmp512 = *(&local48);
*(&local47) = $tmp512;
org$frostlang$frostc$Type$Kind $tmp513 = *(&local47);
org$frostlang$frostc$Type$Kind$wrapper* $tmp514;
$tmp514 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp514->value = $tmp513;
ITable* $tmp515 = ((frost$core$Equatable*) $tmp509)->$class->itable;
while ($tmp515->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp515 = $tmp515->next;
}
$fn517 $tmp516 = $tmp515->methods[0];
frost$core$Bit $tmp518 = $tmp516(((frost$core$Equatable*) $tmp509), ((frost$core$Equatable*) $tmp514));
bool $tmp519 = $tmp518.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp514)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp509)));
if ($tmp519) goto block112; else goto block114;
block114:;
org$frostlang$frostc$Type$Kind* $tmp520 = &$tmp480->typeKind;
org$frostlang$frostc$Type$Kind $tmp521 = *$tmp520;
org$frostlang$frostc$Type$Kind$wrapper* $tmp522;
$tmp522 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp522->value = $tmp521;
frost$core$Int $tmp523 = (frost$core$Int) {18u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:432:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp524 = &(&local50)->$rawValue;
*$tmp524 = $tmp523;
org$frostlang$frostc$Type$Kind $tmp525 = *(&local50);
*(&local49) = $tmp525;
org$frostlang$frostc$Type$Kind $tmp526 = *(&local49);
org$frostlang$frostc$Type$Kind$wrapper* $tmp527;
$tmp527 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp527->value = $tmp526;
ITable* $tmp528 = ((frost$core$Equatable*) $tmp522)->$class->itable;
while ($tmp528->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp528 = $tmp528->next;
}
$fn530 $tmp529 = $tmp528->methods[0];
frost$core$Bit $tmp531 = $tmp529(((frost$core$Equatable*) $tmp522), ((frost$core$Equatable*) $tmp527));
bool $tmp532 = $tmp531.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp527)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp522)));
if ($tmp532) goto block112; else goto block113;
block113:;
frost$core$Int $tmp533 = (frost$core$Int) {433u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s534, $tmp533, &$s535);
abort(); // unreachable
block112:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:434
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:434:16
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp536 = &$tmp480->_subtypes;
org$frostlang$frostc$FixedArray* $tmp537 = *$tmp536;
frost$core$Bit $tmp538 = (frost$core$Bit) {$tmp537 != NULL};
bool $tmp539 = $tmp538.value;
if ($tmp539) goto block122; else goto block123;
block123:;
frost$core$Int $tmp540 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s541, $tmp540, &$s542);
abort(); // unreachable
block122:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp537));
ITable* $tmp543 = ((frost$collections$ListView*) $tmp537)->$class->itable;
while ($tmp543->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp543 = $tmp543->next;
}
$fn545 $tmp544 = $tmp543->methods[5];
frost$core$Object* $tmp546 = $tmp544(((frost$collections$ListView*) $tmp537));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp546)));
frost$core$Frost$unref$frost$core$Object$Q($tmp546);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp537));
*(&local51) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp546)));
org$frostlang$frostc$Type* $tmp547 = *(&local51);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp547));
*(&local51) = ((org$frostlang$frostc$Type*) $tmp546);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp546)));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:82
org$frostlang$frostc$Type* $tmp548 = *(&local51);
org$frostlang$frostc$Type** $tmp549 = &param1->ERROR_TYPE;
org$frostlang$frostc$Type* $tmp550 = *$tmp549;
org$frostlang$frostc$Type* $tmp551 = org$frostlang$frostc$Type$nullable$R$org$frostlang$frostc$Type($tmp550);
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from MethodRef.frost:82:27
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:252
frost$core$String** $tmp552 = &((org$frostlang$frostc$Symbol*) $tmp548)->name;
frost$core$String* $tmp553 = *$tmp552;
frost$core$String** $tmp554 = &((org$frostlang$frostc$Symbol*) $tmp551)->name;
frost$core$String* $tmp555 = *$tmp554;
frost$core$Bit $tmp556 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp553, $tmp555);
bool $tmp557 = $tmp556.value;
if ($tmp557) goto block128; else goto block129;
block128:;
org$frostlang$frostc$Type$Kind* $tmp558 = &$tmp548->typeKind;
org$frostlang$frostc$Type$Kind $tmp559 = *$tmp558;
org$frostlang$frostc$Type$Kind$wrapper* $tmp560;
$tmp560 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp560->value = $tmp559;
org$frostlang$frostc$Type$Kind* $tmp561 = &$tmp551->typeKind;
org$frostlang$frostc$Type$Kind $tmp562 = *$tmp561;
org$frostlang$frostc$Type$Kind$wrapper* $tmp563;
$tmp563 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp563->value = $tmp562;
ITable* $tmp564 = ((frost$core$Equatable*) $tmp560)->$class->itable;
while ($tmp564->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp564 = $tmp564->next;
}
$fn566 $tmp565 = $tmp564->methods[0];
frost$core$Bit $tmp567 = $tmp565(((frost$core$Equatable*) $tmp560), ((frost$core$Equatable*) $tmp563));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp563)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp560)));
*(&local52) = $tmp567;
goto block130;
block129:;
*(&local52) = $tmp556;
goto block130;
block130:;
frost$core$Bit $tmp568 = *(&local52);
bool $tmp569 = $tmp568.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp551));
if ($tmp569) goto block124; else goto block126;
block124:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:83
org$frostlang$frostc$Type* $tmp570 = *(&local4);
org$frostlang$frostc$Position* $tmp571 = &((org$frostlang$frostc$Symbol*) $tmp570)->position;
org$frostlang$frostc$Position $tmp572 = *$tmp571;
org$frostlang$frostc$Type* $tmp573 = *(&local4);
org$frostlang$frostc$Type$Kind* $tmp574 = &$tmp573->typeKind;
org$frostlang$frostc$Type$Kind $tmp575 = *$tmp574;
org$frostlang$frostc$Type* $tmp576 = *(&local4);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from MethodRef.frost:84:35
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp577 = &$tmp576->_subtypes;
org$frostlang$frostc$FixedArray* $tmp578 = *$tmp577;
frost$core$Bit $tmp579 = (frost$core$Bit) {$tmp578 != NULL};
bool $tmp580 = $tmp579.value;
if ($tmp580) goto block132; else goto block133;
block133:;
frost$core$Int $tmp581 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s582, $tmp581, &$s583);
abort(); // unreachable
block132:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp578));
frost$core$Int $tmp584 = (frost$core$Int) {0u};
org$frostlang$frostc$Type* $tmp585 = *(&local4);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from MethodRef.frost:84:60
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp586 = &$tmp585->_subtypes;
org$frostlang$frostc$FixedArray* $tmp587 = *$tmp586;
frost$core$Bit $tmp588 = (frost$core$Bit) {$tmp587 != NULL};
bool $tmp589 = $tmp588.value;
if ($tmp589) goto block135; else goto block136;
block136:;
frost$core$Int $tmp590 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s591, $tmp590, &$s592);
abort(); // unreachable
block135:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp587));
ITable* $tmp593 = ((frost$collections$CollectionView*) $tmp587)->$class->itable;
while ($tmp593->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp593 = $tmp593->next;
}
$fn595 $tmp594 = $tmp593->methods[0];
frost$core$Int $tmp596 = $tmp594(((frost$collections$CollectionView*) $tmp587));
frost$core$Int $tmp597 = (frost$core$Int) {1u};
int64_t $tmp598 = $tmp596.value;
int64_t $tmp599 = $tmp597.value;
int64_t $tmp600 = $tmp598 - $tmp599;
frost$core$Int $tmp601 = (frost$core$Int) {$tmp600};
frost$core$Bit $tmp602 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp603 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp584, $tmp601, $tmp602);
ITable* $tmp604 = ((frost$collections$ListView*) $tmp578)->$class->itable;
while ($tmp604->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp604 = $tmp604->next;
}
$fn606 $tmp605 = $tmp604->methods[1];
frost$collections$ListView* $tmp607 = $tmp605(((frost$collections$ListView*) $tmp578), $tmp603);
org$frostlang$frostc$Type** $tmp608 = &param1->VOID_TYPE;
org$frostlang$frostc$Type* $tmp609 = *$tmp608;
org$frostlang$frostc$Type* $tmp610 = *(&local4);
frost$core$Int* $tmp611 = &$tmp610->priority;
frost$core$Int $tmp612 = *$tmp611;
org$frostlang$frostc$Type* $tmp613 = org$frostlang$frostc$Type$methodType$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$Type$Kind$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$org$frostlang$frostc$Type$frost$core$Int$R$org$frostlang$frostc$Type(param1, $tmp572, $tmp575, $tmp607, $tmp609, $tmp612);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp613));
org$frostlang$frostc$Type* $tmp614 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp614));
*(&local4) = $tmp613;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp613));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp607));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp587));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp578));
goto block125;
block126:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:87
org$frostlang$frostc$Type* $tmp615 = *(&local51);
org$frostlang$frostc$Type$Kind* $tmp616 = &$tmp615->typeKind;
org$frostlang$frostc$Type$Kind $tmp617 = *$tmp616;
org$frostlang$frostc$Type$Kind$wrapper* $tmp618;
$tmp618 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp618->value = $tmp617;
frost$core$Int $tmp619 = (frost$core$Int) {11u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from MethodRef.frost:87:52
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp620 = &(&local54)->$rawValue;
*$tmp620 = $tmp619;
org$frostlang$frostc$Type$Kind $tmp621 = *(&local54);
*(&local53) = $tmp621;
org$frostlang$frostc$Type$Kind $tmp622 = *(&local53);
org$frostlang$frostc$Type$Kind$wrapper* $tmp623;
$tmp623 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp623->value = $tmp622;
ITable* $tmp624 = ((frost$core$Equatable*) $tmp618)->$class->itable;
while ($tmp624->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp624 = $tmp624->next;
}
$fn626 $tmp625 = $tmp624->methods[0];
frost$core$Bit $tmp627 = $tmp625(((frost$core$Equatable*) $tmp618), ((frost$core$Equatable*) $tmp623));
bool $tmp628 = $tmp627.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp623)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp618)));
if ($tmp628) goto block139; else goto block138;
block139:;
org$frostlang$frostc$Type* $tmp629 = *(&local51);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from MethodRef.frost:88:31
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp630 = &$tmp629->_subtypes;
org$frostlang$frostc$FixedArray* $tmp631 = *$tmp630;
frost$core$Bit $tmp632 = (frost$core$Bit) {$tmp631 != NULL};
bool $tmp633 = $tmp632.value;
if ($tmp633) goto block142; else goto block143;
block143:;
frost$core$Int $tmp634 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s635, $tmp634, &$s636);
abort(); // unreachable
block142:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp631));
frost$core$Int $tmp637 = (frost$core$Int) {0u};
frost$core$Object* $tmp638 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp631, $tmp637);
frost$core$String** $tmp639 = &((org$frostlang$frostc$Symbol*) ((org$frostlang$frostc$Type*) $tmp638))->name;
frost$core$String* $tmp640 = *$tmp639;
frost$core$Bit $tmp641 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp640, &$s642);
bool $tmp643 = $tmp641.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp638);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp631));
if ($tmp643) goto block137; else goto block138;
block137:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:89
org$frostlang$frostc$Type* $tmp644 = *(&local4);
org$frostlang$frostc$Position* $tmp645 = &((org$frostlang$frostc$Symbol*) $tmp644)->position;
org$frostlang$frostc$Position $tmp646 = *$tmp645;
org$frostlang$frostc$Type* $tmp647 = *(&local4);
org$frostlang$frostc$Type$Kind* $tmp648 = &$tmp647->typeKind;
org$frostlang$frostc$Type$Kind $tmp649 = *$tmp648;
org$frostlang$frostc$Type* $tmp650 = *(&local4);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from MethodRef.frost:90:35
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp651 = &$tmp650->_subtypes;
org$frostlang$frostc$FixedArray* $tmp652 = *$tmp651;
frost$core$Bit $tmp653 = (frost$core$Bit) {$tmp652 != NULL};
bool $tmp654 = $tmp653.value;
if ($tmp654) goto block145; else goto block146;
block146:;
frost$core$Int $tmp655 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s656, $tmp655, &$s657);
abort(); // unreachable
block145:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp652));
frost$core$Int $tmp658 = (frost$core$Int) {0u};
org$frostlang$frostc$Type* $tmp659 = *(&local4);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from MethodRef.frost:90:60
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp660 = &$tmp659->_subtypes;
org$frostlang$frostc$FixedArray* $tmp661 = *$tmp660;
frost$core$Bit $tmp662 = (frost$core$Bit) {$tmp661 != NULL};
bool $tmp663 = $tmp662.value;
if ($tmp663) goto block148; else goto block149;
block149:;
frost$core$Int $tmp664 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s665, $tmp664, &$s666);
abort(); // unreachable
block148:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp661));
ITable* $tmp667 = ((frost$collections$CollectionView*) $tmp661)->$class->itable;
while ($tmp667->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp667 = $tmp667->next;
}
$fn669 $tmp668 = $tmp667->methods[0];
frost$core$Int $tmp670 = $tmp668(((frost$collections$CollectionView*) $tmp661));
frost$core$Int $tmp671 = (frost$core$Int) {1u};
int64_t $tmp672 = $tmp670.value;
int64_t $tmp673 = $tmp671.value;
int64_t $tmp674 = $tmp672 - $tmp673;
frost$core$Int $tmp675 = (frost$core$Int) {$tmp674};
frost$core$Bit $tmp676 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp677 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp658, $tmp675, $tmp676);
ITable* $tmp678 = ((frost$collections$ListView*) $tmp652)->$class->itable;
while ($tmp678->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp678 = $tmp678->next;
}
$fn680 $tmp679 = $tmp678->methods[1];
frost$collections$ListView* $tmp681 = $tmp679(((frost$collections$ListView*) $tmp652), $tmp677);
org$frostlang$frostc$Type* $tmp682 = *(&local51);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from MethodRef.frost:91:35
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp683 = &$tmp682->_subtypes;
org$frostlang$frostc$FixedArray* $tmp684 = *$tmp683;
frost$core$Bit $tmp685 = (frost$core$Bit) {$tmp684 != NULL};
bool $tmp686 = $tmp685.value;
if ($tmp686) goto block151; else goto block152;
block152:;
frost$core$Int $tmp687 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s688, $tmp687, &$s689);
abort(); // unreachable
block151:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp684));
frost$core$Int $tmp690 = (frost$core$Int) {1u};
frost$core$Object* $tmp691 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp684, $tmp690);
org$frostlang$frostc$Type* $tmp692 = *(&local4);
frost$core$Int* $tmp693 = &$tmp692->priority;
frost$core$Int $tmp694 = *$tmp693;
org$frostlang$frostc$Type* $tmp695 = org$frostlang$frostc$Type$methodType$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$Type$Kind$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$org$frostlang$frostc$Type$frost$core$Int$R$org$frostlang$frostc$Type(param1, $tmp646, $tmp649, $tmp681, ((org$frostlang$frostc$Type*) $tmp691), $tmp694);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp695));
org$frostlang$frostc$Type* $tmp696 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp696));
*(&local4) = $tmp695;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp695));
frost$core$Frost$unref$frost$core$Object$Q($tmp691);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp684));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp681));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp661));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp652));
goto block138;
block138:;
goto block125;
block125:;
org$frostlang$frostc$Type* $tmp697 = *(&local51);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp697));
*(&local51) = ((org$frostlang$frostc$Type*) NULL);
goto block100;
block100:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:94
org$frostlang$frostc$Type* $tmp698 = *(&local3);
org$frostlang$frostc$Type* $tmp699 = *(&local4);
org$frostlang$frostc$Type* $tmp700 = org$frostlang$frostc$Compiler$remapType$org$frostlang$frostc$Type$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(param1, $tmp698, $tmp699);
*(&local55) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp700));
org$frostlang$frostc$Type* $tmp701 = *(&local55);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp701));
*(&local55) = $tmp700;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp700));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:95
frost$core$Bit $tmp702 = (frost$core$Bit) {param4 != NULL};
bool $tmp703 = $tmp702.value;
if ($tmp703) goto block153; else goto block155;
block153:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:96
frost$core$Weak** $tmp704 = &param3->owner;
frost$core$Weak* $tmp705 = *$tmp704;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from MethodRef.frost:96:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp706 = &$tmp705->_valid;
frost$core$Bit $tmp707 = *$tmp706;
bool $tmp708 = $tmp707.value;
if ($tmp708) goto block158; else goto block159;
block159:;
frost$core$Int $tmp709 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s710, $tmp709);
abort(); // unreachable
block158:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp711 = &$tmp705->value;
frost$core$Object* $tmp712 = *$tmp711;
frost$core$Frost$ref$frost$core$Object$Q($tmp712);
frost$core$String** $tmp713 = &((org$frostlang$frostc$ClassDecl*) $tmp712)->name;
frost$core$String* $tmp714 = *$tmp713;
frost$core$String* $tmp715 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp714, &$s716);
frost$core$String** $tmp717 = &((org$frostlang$frostc$Symbol*) param3)->name;
frost$core$String* $tmp718 = *$tmp717;
frost$core$String* $tmp719 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp715, $tmp718);
frost$core$String* $tmp720 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp719, &$s721);
*(&local56) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp720));
frost$core$String* $tmp722 = *(&local56);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp722));
*(&local56) = $tmp720;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp720));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp719));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp715));
frost$core$Frost$unref$frost$core$Object$Q($tmp712);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:97
FROST_ASSERT(56 == sizeof(frost$collections$HashMap));
frost$collections$HashMap* $tmp723 = (frost$collections$HashMap*) frostObjectAlloc(56, (frost$core$Class*) &frost$collections$HashMap$class);
frost$collections$HashMap$init($tmp723);
*(&local57) = ((frost$collections$HashMap*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp723));
frost$collections$HashMap* $tmp724 = *(&local57);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp724));
*(&local57) = $tmp723;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp723));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:98
frost$core$Int $tmp725 = (frost$core$Int) {0u};
ITable* $tmp726 = ((frost$collections$CollectionView*) param4)->$class->itable;
while ($tmp726->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp726 = $tmp726->next;
}
$fn728 $tmp727 = $tmp726->methods[0];
frost$core$Int $tmp729 = $tmp727(((frost$collections$CollectionView*) param4));
frost$core$Bit $tmp730 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp731 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp725, $tmp729, $tmp730);
frost$core$Int $tmp732 = $tmp731.min;
*(&local58) = $tmp732;
frost$core$Int $tmp733 = $tmp731.max;
frost$core$Bit $tmp734 = $tmp731.inclusive;
bool $tmp735 = $tmp734.value;
frost$core$Int $tmp736 = (frost$core$Int) {1u};
if ($tmp735) goto block163; else goto block164;
block163:;
int64_t $tmp737 = $tmp732.value;
int64_t $tmp738 = $tmp733.value;
bool $tmp739 = $tmp737 <= $tmp738;
frost$core$Bit $tmp740 = (frost$core$Bit) {$tmp739};
bool $tmp741 = $tmp740.value;
if ($tmp741) goto block160; else goto block161;
block164:;
int64_t $tmp742 = $tmp732.value;
int64_t $tmp743 = $tmp733.value;
bool $tmp744 = $tmp742 < $tmp743;
frost$core$Bit $tmp745 = (frost$core$Bit) {$tmp744};
bool $tmp746 = $tmp745.value;
if ($tmp746) goto block160; else goto block161;
block160:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:99
frost$collections$HashMap* $tmp747 = *(&local57);
frost$core$String* $tmp748 = *(&local56);
frost$collections$Array** $tmp749 = &param3->genericParameters;
frost$collections$Array* $tmp750 = *$tmp749;
frost$core$Int $tmp751 = *(&local58);
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from MethodRef.frost:99:53
frost$core$Int $tmp752 = (frost$core$Int) {0u};
int64_t $tmp753 = $tmp751.value;
int64_t $tmp754 = $tmp752.value;
bool $tmp755 = $tmp753 >= $tmp754;
frost$core$Bit $tmp756 = (frost$core$Bit) {$tmp755};
bool $tmp757 = $tmp756.value;
if ($tmp757) goto block168; else goto block167;
block168:;
ITable* $tmp758 = ((frost$collections$CollectionView*) $tmp750)->$class->itable;
while ($tmp758->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp758 = $tmp758->next;
}
$fn760 $tmp759 = $tmp758->methods[0];
frost$core$Int $tmp761 = $tmp759(((frost$collections$CollectionView*) $tmp750));
int64_t $tmp762 = $tmp751.value;
int64_t $tmp763 = $tmp761.value;
bool $tmp764 = $tmp762 < $tmp763;
frost$core$Bit $tmp765 = (frost$core$Bit) {$tmp764};
bool $tmp766 = $tmp765.value;
if ($tmp766) goto block166; else goto block167;
block167:;
frost$core$Int $tmp767 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s768, $tmp767, &$s769);
abort(); // unreachable
block166:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp770 = &$tmp750->data;
frost$core$Object** $tmp771 = *$tmp770;
frost$core$Int64 $tmp772 = frost$core$Int64$init$frost$core$Int($tmp751);
int64_t $tmp773 = $tmp772.value;
frost$core$Object* $tmp774 = $tmp771[$tmp773];
frost$core$Frost$ref$frost$core$Object$Q($tmp774);
frost$core$String** $tmp775 = &((org$frostlang$frostc$Symbol*) ((org$frostlang$frostc$MethodDecl$GenericParameter*) $tmp774))->name;
frost$core$String* $tmp776 = *$tmp775;
frost$core$String* $tmp777 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp748, $tmp776);
frost$core$Int $tmp778 = *(&local58);
ITable* $tmp779 = param4->$class->itable;
while ($tmp779->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp779 = $tmp779->next;
}
$fn781 $tmp780 = $tmp779->methods[0];
frost$core$Object* $tmp782 = $tmp780(param4, $tmp778);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp747, ((frost$collections$Key*) $tmp777), ((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp782)));
frost$core$Frost$unref$frost$core$Object$Q($tmp782);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp777));
frost$core$Frost$unref$frost$core$Object$Q($tmp774);
frost$core$Int $tmp783 = *(&local58);
int64_t $tmp784 = $tmp733.value;
int64_t $tmp785 = $tmp783.value;
int64_t $tmp786 = $tmp784 - $tmp785;
frost$core$Int $tmp787 = (frost$core$Int) {$tmp786};
if ($tmp735) goto block170; else goto block171;
block170:;
int64_t $tmp788 = $tmp787.value;
int64_t $tmp789 = $tmp736.value;
bool $tmp790 = $tmp788 >= $tmp789;
frost$core$Bit $tmp791 = (frost$core$Bit) {$tmp790};
bool $tmp792 = $tmp791.value;
if ($tmp792) goto block169; else goto block161;
block171:;
int64_t $tmp793 = $tmp787.value;
int64_t $tmp794 = $tmp736.value;
bool $tmp795 = $tmp793 > $tmp794;
frost$core$Bit $tmp796 = (frost$core$Bit) {$tmp795};
bool $tmp797 = $tmp796.value;
if ($tmp797) goto block169; else goto block161;
block169:;
int64_t $tmp798 = $tmp783.value;
int64_t $tmp799 = $tmp736.value;
int64_t $tmp800 = $tmp798 + $tmp799;
frost$core$Int $tmp801 = (frost$core$Int) {$tmp800};
*(&local58) = $tmp801;
goto block160;
block161:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:101
org$frostlang$frostc$Type* $tmp802 = *(&local55);
frost$collections$HashMap* $tmp803 = *(&local57);
org$frostlang$frostc$Type* $tmp804 = org$frostlang$frostc$Type$remap$org$frostlang$frostc$Compiler$frost$collections$HashMap$LTfrost$core$String$Corg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type($tmp802, param1, $tmp803);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp804));
org$frostlang$frostc$Type** $tmp805 = &param0->effectiveType;
org$frostlang$frostc$Type* $tmp806 = *$tmp805;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp806));
org$frostlang$frostc$Type** $tmp807 = &param0->effectiveType;
*$tmp807 = $tmp804;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp804));
frost$collections$HashMap* $tmp808 = *(&local57);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp808));
*(&local57) = ((frost$collections$HashMap*) NULL);
frost$core$String* $tmp809 = *(&local56);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp809));
*(&local56) = ((frost$core$String*) NULL);
goto block154;
block155:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:104
org$frostlang$frostc$Type* $tmp810 = *(&local55);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp810));
org$frostlang$frostc$Type** $tmp811 = &param0->effectiveType;
org$frostlang$frostc$Type* $tmp812 = *$tmp811;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp812));
org$frostlang$frostc$Type** $tmp813 = &param0->effectiveType;
*$tmp813 = $tmp810;
goto block154;
block154:;
org$frostlang$frostc$Type* $tmp814 = *(&local55);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp814));
*(&local55) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Pair* $tmp815 = *(&local39);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp815));
*(&local39) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$Type* $tmp816 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp816));
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp817 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp817));
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:109
org$frostlang$frostc$Type** $tmp818 = &param0->effectiveType;
org$frostlang$frostc$Type* $tmp819 = *$tmp818;
// begin inline call to function org.frostlang.frostc.Type.get_parameterCount():frost.core.Int from MethodRef.frost:109:29
org$frostlang$frostc$Type$Kind* $tmp820 = &$tmp819->typeKind;
org$frostlang$frostc$Type$Kind $tmp821 = *$tmp820;
org$frostlang$frostc$Type$Kind$wrapper* $tmp822;
$tmp822 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp822->value = $tmp821;
frost$core$Int $tmp823 = (frost$core$Int) {15u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:419:25
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp824 = &(&local1)->$rawValue;
*$tmp824 = $tmp823;
org$frostlang$frostc$Type$Kind $tmp825 = *(&local1);
*(&local0) = $tmp825;
org$frostlang$frostc$Type$Kind $tmp826 = *(&local0);
org$frostlang$frostc$Type$Kind$wrapper* $tmp827;
$tmp827 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp827->value = $tmp826;
ITable* $tmp828 = ((frost$core$Equatable*) $tmp822)->$class->itable;
while ($tmp828->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp828 = $tmp828->next;
}
$fn830 $tmp829 = $tmp828->methods[0];
frost$core$Bit $tmp831 = $tmp829(((frost$core$Equatable*) $tmp822), ((frost$core$Equatable*) $tmp827));
bool $tmp832 = $tmp831.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp827)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp822)));
if ($tmp832) goto block2; else goto block6;
block6:;
org$frostlang$frostc$Type$Kind* $tmp833 = &$tmp819->typeKind;
org$frostlang$frostc$Type$Kind $tmp834 = *$tmp833;
org$frostlang$frostc$Type$Kind$wrapper* $tmp835;
$tmp835 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp835->value = $tmp834;
frost$core$Int $tmp836 = (frost$core$Int) {16u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:419:52
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp837 = &(&local3)->$rawValue;
*$tmp837 = $tmp836;
org$frostlang$frostc$Type$Kind $tmp838 = *(&local3);
*(&local2) = $tmp838;
org$frostlang$frostc$Type$Kind $tmp839 = *(&local2);
org$frostlang$frostc$Type$Kind$wrapper* $tmp840;
$tmp840 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp840->value = $tmp839;
ITable* $tmp841 = ((frost$core$Equatable*) $tmp835)->$class->itable;
while ($tmp841->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp841 = $tmp841->next;
}
$fn843 $tmp842 = $tmp841->methods[0];
frost$core$Bit $tmp844 = $tmp842(((frost$core$Equatable*) $tmp835), ((frost$core$Equatable*) $tmp840));
bool $tmp845 = $tmp844.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp840)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp835)));
if ($tmp845) goto block2; else goto block5;
block5:;
org$frostlang$frostc$Type$Kind* $tmp846 = &$tmp819->typeKind;
org$frostlang$frostc$Type$Kind $tmp847 = *$tmp846;
org$frostlang$frostc$Type$Kind$wrapper* $tmp848;
$tmp848 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp848->value = $tmp847;
frost$core$Int $tmp849 = (frost$core$Int) {17u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:419:77
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp850 = &(&local5)->$rawValue;
*$tmp850 = $tmp849;
org$frostlang$frostc$Type$Kind $tmp851 = *(&local5);
*(&local4) = $tmp851;
org$frostlang$frostc$Type$Kind $tmp852 = *(&local4);
org$frostlang$frostc$Type$Kind$wrapper* $tmp853;
$tmp853 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp853->value = $tmp852;
ITable* $tmp854 = ((frost$core$Equatable*) $tmp848)->$class->itable;
while ($tmp854->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp854 = $tmp854->next;
}
$fn856 $tmp855 = $tmp854->methods[0];
frost$core$Bit $tmp857 = $tmp855(((frost$core$Equatable*) $tmp848), ((frost$core$Equatable*) $tmp853));
bool $tmp858 = $tmp857.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp853)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp848)));
if ($tmp858) goto block2; else goto block4;
block4:;
org$frostlang$frostc$Type$Kind* $tmp859 = &$tmp819->typeKind;
org$frostlang$frostc$Type$Kind $tmp860 = *$tmp859;
org$frostlang$frostc$Type$Kind$wrapper* $tmp861;
$tmp861 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp861->value = $tmp860;
frost$core$Int $tmp862 = (frost$core$Int) {18u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:420:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp863 = &(&local7)->$rawValue;
*$tmp863 = $tmp862;
org$frostlang$frostc$Type$Kind $tmp864 = *(&local7);
*(&local6) = $tmp864;
org$frostlang$frostc$Type$Kind $tmp865 = *(&local6);
org$frostlang$frostc$Type$Kind$wrapper* $tmp866;
$tmp866 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp866->value = $tmp865;
ITable* $tmp867 = ((frost$core$Equatable*) $tmp861)->$class->itable;
while ($tmp867->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp867 = $tmp867->next;
}
$fn869 $tmp868 = $tmp867->methods[0];
frost$core$Bit $tmp870 = $tmp868(((frost$core$Equatable*) $tmp861), ((frost$core$Equatable*) $tmp866));
bool $tmp871 = $tmp870.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp866)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp861)));
if ($tmp871) goto block2; else goto block3;
block3:;
frost$core$Int $tmp872 = (frost$core$Int) {421u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s873, $tmp872, &$s874);
abort(); // unreachable
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:422
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:422:16
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp875 = &$tmp819->_subtypes;
org$frostlang$frostc$FixedArray* $tmp876 = *$tmp875;
frost$core$Bit $tmp877 = (frost$core$Bit) {$tmp876 != NULL};
bool $tmp878 = $tmp877.value;
if ($tmp878) goto block12; else goto block13;
block13:;
frost$core$Int $tmp879 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s880, $tmp879, &$s881);
abort(); // unreachable
block12:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp876));
ITable* $tmp882 = ((frost$collections$CollectionView*) $tmp876)->$class->itable;
while ($tmp882->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp882 = $tmp882->next;
}
$fn884 $tmp883 = $tmp882->methods[0];
frost$core$Int $tmp885 = $tmp883(((frost$collections$CollectionView*) $tmp876));
frost$core$Int $tmp886 = (frost$core$Int) {1u};
int64_t $tmp887 = $tmp885.value;
int64_t $tmp888 = $tmp886.value;
int64_t $tmp889 = $tmp887 - $tmp888;
frost$core$Int $tmp890 = (frost$core$Int) {$tmp889};
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp876));
return $tmp890;

}
org$frostlang$frostc$Type* org$frostlang$frostc$MethodRef$parameterType$frost$core$Int$R$org$frostlang$frostc$Type(org$frostlang$frostc$MethodRef* param0, frost$core$Int param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:113
org$frostlang$frostc$Type** $tmp891 = &param0->effectiveType;
org$frostlang$frostc$Type* $tmp892 = *$tmp891;
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from MethodRef.frost:113:29
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp893 = &$tmp892->_subtypes;
org$frostlang$frostc$FixedArray* $tmp894 = *$tmp893;
frost$core$Bit $tmp895 = (frost$core$Bit) {$tmp894 != NULL};
bool $tmp896 = $tmp895.value;
if ($tmp896) goto block2; else goto block3;
block3:;
frost$core$Int $tmp897 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s898, $tmp897, &$s899);
abort(); // unreachable
block2:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp894));
frost$core$Object* $tmp900 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp894, param1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp900)));
frost$core$Frost$unref$frost$core$Object$Q($tmp900);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp894));
return ((org$frostlang$frostc$Type*) $tmp900);

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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:117
org$frostlang$frostc$Type** $tmp901 = &param0->effectiveType;
org$frostlang$frostc$Type* $tmp902 = *$tmp901;
// begin inline call to function org.frostlang.frostc.Type.get_returnType():org.frostlang.frostc.Type from MethodRef.frost:117:29
org$frostlang$frostc$Type$Kind* $tmp903 = &$tmp902->typeKind;
org$frostlang$frostc$Type$Kind $tmp904 = *$tmp903;
org$frostlang$frostc$Type$Kind$wrapper* $tmp905;
$tmp905 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp905->value = $tmp904;
frost$core$Int $tmp906 = (frost$core$Int) {15u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:431:25
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp907 = &(&local1)->$rawValue;
*$tmp907 = $tmp906;
org$frostlang$frostc$Type$Kind $tmp908 = *(&local1);
*(&local0) = $tmp908;
org$frostlang$frostc$Type$Kind $tmp909 = *(&local0);
org$frostlang$frostc$Type$Kind$wrapper* $tmp910;
$tmp910 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp910->value = $tmp909;
ITable* $tmp911 = ((frost$core$Equatable*) $tmp905)->$class->itable;
while ($tmp911->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp911 = $tmp911->next;
}
$fn913 $tmp912 = $tmp911->methods[0];
frost$core$Bit $tmp914 = $tmp912(((frost$core$Equatable*) $tmp905), ((frost$core$Equatable*) $tmp910));
bool $tmp915 = $tmp914.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp910)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp905)));
if ($tmp915) goto block2; else goto block6;
block6:;
org$frostlang$frostc$Type$Kind* $tmp916 = &$tmp902->typeKind;
org$frostlang$frostc$Type$Kind $tmp917 = *$tmp916;
org$frostlang$frostc$Type$Kind$wrapper* $tmp918;
$tmp918 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp918->value = $tmp917;
frost$core$Int $tmp919 = (frost$core$Int) {16u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:431:52
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp920 = &(&local3)->$rawValue;
*$tmp920 = $tmp919;
org$frostlang$frostc$Type$Kind $tmp921 = *(&local3);
*(&local2) = $tmp921;
org$frostlang$frostc$Type$Kind $tmp922 = *(&local2);
org$frostlang$frostc$Type$Kind$wrapper* $tmp923;
$tmp923 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp923->value = $tmp922;
ITable* $tmp924 = ((frost$core$Equatable*) $tmp918)->$class->itable;
while ($tmp924->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp924 = $tmp924->next;
}
$fn926 $tmp925 = $tmp924->methods[0];
frost$core$Bit $tmp927 = $tmp925(((frost$core$Equatable*) $tmp918), ((frost$core$Equatable*) $tmp923));
bool $tmp928 = $tmp927.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp923)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp918)));
if ($tmp928) goto block2; else goto block5;
block5:;
org$frostlang$frostc$Type$Kind* $tmp929 = &$tmp902->typeKind;
org$frostlang$frostc$Type$Kind $tmp930 = *$tmp929;
org$frostlang$frostc$Type$Kind$wrapper* $tmp931;
$tmp931 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp931->value = $tmp930;
frost$core$Int $tmp932 = (frost$core$Int) {17u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:431:77
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp933 = &(&local5)->$rawValue;
*$tmp933 = $tmp932;
org$frostlang$frostc$Type$Kind $tmp934 = *(&local5);
*(&local4) = $tmp934;
org$frostlang$frostc$Type$Kind $tmp935 = *(&local4);
org$frostlang$frostc$Type$Kind$wrapper* $tmp936;
$tmp936 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp936->value = $tmp935;
ITable* $tmp937 = ((frost$core$Equatable*) $tmp931)->$class->itable;
while ($tmp937->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp937 = $tmp937->next;
}
$fn939 $tmp938 = $tmp937->methods[0];
frost$core$Bit $tmp940 = $tmp938(((frost$core$Equatable*) $tmp931), ((frost$core$Equatable*) $tmp936));
bool $tmp941 = $tmp940.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp936)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp931)));
if ($tmp941) goto block2; else goto block4;
block4:;
org$frostlang$frostc$Type$Kind* $tmp942 = &$tmp902->typeKind;
org$frostlang$frostc$Type$Kind $tmp943 = *$tmp942;
org$frostlang$frostc$Type$Kind$wrapper* $tmp944;
$tmp944 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp944->value = $tmp943;
frost$core$Int $tmp945 = (frost$core$Int) {18u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:432:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp946 = &(&local7)->$rawValue;
*$tmp946 = $tmp945;
org$frostlang$frostc$Type$Kind $tmp947 = *(&local7);
*(&local6) = $tmp947;
org$frostlang$frostc$Type$Kind $tmp948 = *(&local6);
org$frostlang$frostc$Type$Kind$wrapper* $tmp949;
$tmp949 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp949->value = $tmp948;
ITable* $tmp950 = ((frost$core$Equatable*) $tmp944)->$class->itable;
while ($tmp950->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp950 = $tmp950->next;
}
$fn952 $tmp951 = $tmp950->methods[0];
frost$core$Bit $tmp953 = $tmp951(((frost$core$Equatable*) $tmp944), ((frost$core$Equatable*) $tmp949));
bool $tmp954 = $tmp953.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp949)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp944)));
if ($tmp954) goto block2; else goto block3;
block3:;
frost$core$Int $tmp955 = (frost$core$Int) {433u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s956, $tmp955, &$s957);
abort(); // unreachable
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:434
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:434:16
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp958 = &$tmp902->_subtypes;
org$frostlang$frostc$FixedArray* $tmp959 = *$tmp958;
frost$core$Bit $tmp960 = (frost$core$Bit) {$tmp959 != NULL};
bool $tmp961 = $tmp960.value;
if ($tmp961) goto block12; else goto block13;
block13:;
frost$core$Int $tmp962 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s963, $tmp962, &$s964);
abort(); // unreachable
block12:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp959));
ITable* $tmp965 = ((frost$collections$ListView*) $tmp959)->$class->itable;
while ($tmp965->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp965 = $tmp965->next;
}
$fn967 $tmp966 = $tmp965->methods[5];
frost$core$Object* $tmp968 = $tmp966(((frost$collections$ListView*) $tmp959));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp968)));
frost$core$Frost$unref$frost$core$Object$Q($tmp968);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp959));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp968)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp968)));
return ((org$frostlang$frostc$Type*) $tmp968);

}
frost$core$String* org$frostlang$frostc$MethodRef$get_asString$R$frost$core$String(org$frostlang$frostc$MethodRef* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:122
org$frostlang$frostc$MethodDecl** $tmp969 = &param0->value;
org$frostlang$frostc$MethodDecl* $tmp970 = *$tmp969;
frost$core$String* $tmp971 = org$frostlang$frostc$MethodDecl$get_declaration$R$frost$core$String($tmp970);
frost$core$String* $tmp972 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s973, $tmp971);
frost$core$String* $tmp974 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp972, &$s975);
org$frostlang$frostc$Type** $tmp976 = &param0->effectiveType;
org$frostlang$frostc$Type* $tmp977 = *$tmp976;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from MethodRef.frost:122:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn979 $tmp978 = ($fn979) ((frost$core$Object*) $tmp977)->$class->vtable[0];
frost$core$String* $tmp980 = $tmp978(((frost$core$Object*) $tmp977));
frost$core$String* $tmp981 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp974, $tmp980);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp981));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp981));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp980));
frost$core$String* $tmp982 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp981, &$s983);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp982));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp982));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp981));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp974));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp972));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp971));
return $tmp982;

}
void org$frostlang$frostc$MethodRef$cleanup(org$frostlang$frostc$MethodRef* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:9
frost$core$Object$cleanup(((frost$core$Object*) param0));
org$frostlang$frostc$Type** $tmp984 = &param0->target;
org$frostlang$frostc$Type* $tmp985 = *$tmp984;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp985));
org$frostlang$frostc$MethodDecl** $tmp986 = &param0->value;
org$frostlang$frostc$MethodDecl* $tmp987 = *$tmp986;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp987));
org$frostlang$frostc$Type** $tmp988 = &param0->effectiveType;
org$frostlang$frostc$Type* $tmp989 = *$tmp988;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp989));
return;

}

