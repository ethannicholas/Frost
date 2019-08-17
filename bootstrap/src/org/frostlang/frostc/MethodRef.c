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
typedef frost$core$Int (*$fn169)(frost$collections$CollectionView*);
typedef frost$collections$ListView* (*$fn180)(frost$collections$ListView*, frost$core$Range$LTfrost$core$Int$GT);
typedef frost$core$Bit (*$fn223)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn236)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn249)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn262)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int (*$fn286)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn315)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int (*$fn368)(frost$collections$CollectionView*);
typedef frost$collections$ListView* (*$fn379)(frost$collections$ListView*, frost$core$Range$LTfrost$core$Int$GT);
typedef frost$core$Bit (*$fn392)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn405)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn418)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn431)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int (*$fn455)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn472)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn476)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn481)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn527)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn540)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn553)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn566)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int (*$fn590)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn617)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int (*$fn648)(frost$collections$CollectionView*);
typedef frost$collections$ListView* (*$fn659)(frost$collections$ListView*, frost$core$Range$LTfrost$core$Int$GT);
typedef frost$core$Bit (*$fn679)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int (*$fn725)(frost$collections$CollectionView*);
typedef frost$collections$ListView* (*$fn736)(frost$collections$ListView*, frost$core$Range$LTfrost$core$Int$GT);
typedef frost$core$Int (*$fn785)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn817)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn838)(frost$collections$ListView*, frost$core$Int);
typedef frost$core$Bit (*$fn887)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn900)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn913)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn926)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int (*$fn942)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn972)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn985)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn998)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1011)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int (*$fn1035)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn1053)(frost$core$Object*);

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
static frost$core$String $s131 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x43\x6c\x61\x73\x73", 16, -6222778858933417332, NULL };
static frost$core$String $s142 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s154 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s164 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s206 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x2e\x66\x72\x6f\x73\x74", 15, 1242067454507978657, NULL };
static frost$core$String $s266 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s267 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2e\x67\x65\x74\x5f\x72\x65\x74\x75\x72\x6e\x54\x79\x70\x65\x28\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 102, -8354441105231428072, NULL };
static frost$core$String $s273 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s281 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s342 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x2e\x66\x72\x6f\x73\x74", 15, 1242067454507978657, NULL };
static frost$core$String $s353 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s363 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s435 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s436 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2e\x67\x65\x74\x5f\x72\x65\x74\x75\x72\x6e\x54\x79\x70\x65\x28\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 102, -8354441105231428072, NULL };
static frost$core$String $s442 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s450 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s570 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s571 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2e\x67\x65\x74\x5f\x72\x65\x74\x75\x72\x6e\x54\x79\x70\x65\x28\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 102, -8354441105231428072, NULL };
static frost$core$String $s577 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s585 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s633 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s643 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s688 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s696 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4d\x61\x79\x62\x65", 16, -2055899992811416928, NULL };
static frost$core$String $s710 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s720 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s744 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s767 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s773 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e", 1, -5808619545316717647, NULL };
static frost$core$String $s778 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e", 1, -5808619545316717647, NULL };
static frost$core$String $s825 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s826 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s930 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s931 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2e\x67\x65\x74\x5f\x70\x61\x72\x61\x6d\x65\x74\x65\x72\x43\x6f\x75\x6e\x74\x28\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 95, -6421234203817919051, NULL };
static frost$core$String $s937 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s956 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s1015 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s1016 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2e\x67\x65\x74\x5f\x72\x65\x74\x75\x72\x6e\x54\x79\x70\x65\x28\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 102, -8354441105231428072, NULL };
static frost$core$String $s1022 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s1030 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s1047 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x28", 10, -2809919968047225889, NULL };
static frost$core$String $s1049 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s1057 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };

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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:119
frost$core$Int* $tmp76 = &$tmp75->flags;
frost$core$Int $tmp77 = *$tmp76;
frost$core$Int $tmp78 = (frost$core$Int) {16u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:119:22
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:370
org$frostlang$frostc$Type$Kind* $tmp105 = &param2->typeKind;
org$frostlang$frostc$Type$Kind $tmp106 = *$tmp105;
org$frostlang$frostc$Type$Kind$wrapper* $tmp107;
$tmp107 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp107->value = $tmp106;
frost$core$Int $tmp108 = (frost$core$Int) {11u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:370:31
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
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:370:42
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp118 = &param2->_subtypes;
org$frostlang$frostc$FixedArray* $tmp119 = *$tmp118;
frost$core$Bit $tmp120 = (frost$core$Bit) {$tmp119 != NULL};
bool $tmp121 = $tmp120.value;
if ($tmp121) goto block33; else goto block34;
block34:;
frost$core$Int $tmp122 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s123, $tmp122);
abort(); // unreachable
block33:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp124 = &param2->_subtypes;
org$frostlang$frostc$FixedArray* $tmp125 = *$tmp124;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp125));
frost$core$Int $tmp126 = (frost$core$Int) {0u};
frost$core$Object* $tmp127 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp125, $tmp126);
frost$core$String** $tmp128 = &((org$frostlang$frostc$Symbol*) ((org$frostlang$frostc$Type*) $tmp127))->name;
frost$core$String* $tmp129 = *$tmp128;
frost$core$Bit $tmp130 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp129, &$s131);
frost$core$Frost$unref$frost$core$Object$Q($tmp127);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp125));
*(&local7) = $tmp130;
goto block31;
block30:;
*(&local7) = $tmp116;
goto block31;
block31:;
frost$core$Bit $tmp132 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp112)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp107)));
bool $tmp133 = $tmp132.value;
if ($tmp133) goto block18; else goto block20;
block18:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:45
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp134 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp134);
*(&local10) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp134));
frost$collections$Array* $tmp135 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp135));
*(&local10) = $tmp134;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp134));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:46
frost$collections$Array* $tmp136 = *(&local10);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from MethodRef.frost:46:38
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp137 = &param2->_subtypes;
org$frostlang$frostc$FixedArray* $tmp138 = *$tmp137;
frost$core$Bit $tmp139 = (frost$core$Bit) {$tmp138 != NULL};
bool $tmp140 = $tmp139.value;
if ($tmp140) goto block36; else goto block37;
block37:;
frost$core$Int $tmp141 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s142, $tmp141);
abort(); // unreachable
block36:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp143 = &param2->_subtypes;
org$frostlang$frostc$FixedArray* $tmp144 = *$tmp143;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp144));
frost$core$Int $tmp145 = (frost$core$Int) {1u};
frost$core$Object* $tmp146 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp144, $tmp145);
frost$collections$Array$add$frost$collections$Array$T($tmp136, ((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp146)));
frost$core$Frost$unref$frost$core$Object$Q($tmp146);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp144));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:47
frost$collections$Array* $tmp147 = *(&local10);
org$frostlang$frostc$Type* $tmp148 = *(&local4);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from MethodRef.frost:47:45
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp149 = &$tmp148->_subtypes;
org$frostlang$frostc$FixedArray* $tmp150 = *$tmp149;
frost$core$Bit $tmp151 = (frost$core$Bit) {$tmp150 != NULL};
bool $tmp152 = $tmp151.value;
if ($tmp152) goto block39; else goto block40;
block40:;
frost$core$Int $tmp153 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s154, $tmp153);
abort(); // unreachable
block39:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp155 = &$tmp148->_subtypes;
org$frostlang$frostc$FixedArray* $tmp156 = *$tmp155;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp156));
frost$core$Int $tmp157 = (frost$core$Int) {0u};
org$frostlang$frostc$Type* $tmp158 = *(&local4);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from MethodRef.frost:47:70
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp159 = &$tmp158->_subtypes;
org$frostlang$frostc$FixedArray* $tmp160 = *$tmp159;
frost$core$Bit $tmp161 = (frost$core$Bit) {$tmp160 != NULL};
bool $tmp162 = $tmp161.value;
if ($tmp162) goto block42; else goto block43;
block43:;
frost$core$Int $tmp163 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s164, $tmp163);
abort(); // unreachable
block42:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp165 = &$tmp158->_subtypes;
org$frostlang$frostc$FixedArray* $tmp166 = *$tmp165;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp166));
ITable* $tmp167 = ((frost$collections$CollectionView*) $tmp166)->$class->itable;
while ($tmp167->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp167 = $tmp167->next;
}
$fn169 $tmp168 = $tmp167->methods[0];
frost$core$Int $tmp170 = $tmp168(((frost$collections$CollectionView*) $tmp166));
frost$core$Int $tmp171 = (frost$core$Int) {1u};
int64_t $tmp172 = $tmp170.value;
int64_t $tmp173 = $tmp171.value;
int64_t $tmp174 = $tmp172 - $tmp173;
frost$core$Int $tmp175 = (frost$core$Int) {$tmp174};
frost$core$Bit $tmp176 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp177 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp157, $tmp175, $tmp176);
ITable* $tmp178 = ((frost$collections$ListView*) $tmp156)->$class->itable;
while ($tmp178->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp178 = $tmp178->next;
}
$fn180 $tmp179 = $tmp178->methods[1];
frost$collections$ListView* $tmp181 = $tmp179(((frost$collections$ListView*) $tmp156), $tmp177);
frost$collections$Array$addAll$frost$collections$CollectionView$LTfrost$collections$Array$T$GT($tmp147, ((frost$collections$CollectionView*) $tmp181));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp181));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp166));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp156));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:48
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:49
org$frostlang$frostc$MethodDecl$Kind* $tmp182 = &param3->methodKind;
org$frostlang$frostc$MethodDecl$Kind $tmp183 = *$tmp182;
frost$core$Int $tmp184 = $tmp183.$rawValue;
frost$core$Int $tmp185 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from MethodRef.frost:50:37
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp186 = $tmp184.value;
int64_t $tmp187 = $tmp185.value;
bool $tmp188 = $tmp186 == $tmp187;
frost$core$Bit $tmp189 = (frost$core$Bit) {$tmp188};
bool $tmp190 = $tmp189.value;
if ($tmp190) goto block45; else goto block46;
block45:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:51
frost$core$Int $tmp191 = (frost$core$Int) {18u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from MethodRef.frost:51:42
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp192 = &(&local13)->$rawValue;
*$tmp192 = $tmp191;
org$frostlang$frostc$Type$Kind $tmp193 = *(&local13);
*(&local12) = $tmp193;
org$frostlang$frostc$Type$Kind $tmp194 = *(&local12);
*(&local11) = $tmp194;
goto block44;
block46:;
frost$core$Int $tmp195 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from MethodRef.frost:53:37
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp196 = $tmp184.value;
int64_t $tmp197 = $tmp195.value;
bool $tmp198 = $tmp196 == $tmp197;
frost$core$Bit $tmp199 = (frost$core$Bit) {$tmp198};
bool $tmp200 = $tmp199.value;
if ($tmp200) goto block49; else goto block50;
block49:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:54
frost$core$Int $tmp201 = (frost$core$Int) {17u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from MethodRef.frost:54:42
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp202 = &(&local15)->$rawValue;
*$tmp202 = $tmp201;
org$frostlang$frostc$Type$Kind $tmp203 = *(&local15);
*(&local14) = $tmp203;
org$frostlang$frostc$Type$Kind $tmp204 = *(&local14);
*(&local11) = $tmp204;
goto block44;
block50:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:57
frost$core$Int $tmp205 = (frost$core$Int) {57u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s206, $tmp205);
abort(); // unreachable
block44:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:60
org$frostlang$frostc$Type* $tmp207 = *(&local4);
org$frostlang$frostc$Position* $tmp208 = &((org$frostlang$frostc$Symbol*) $tmp207)->position;
org$frostlang$frostc$Position $tmp209 = *$tmp208;
org$frostlang$frostc$Type$Kind $tmp210 = *(&local11);
frost$collections$Array* $tmp211 = *(&local10);
org$frostlang$frostc$Type* $tmp212 = *(&local4);
// begin inline call to function org.frostlang.frostc.Type.get_returnType():org.frostlang.frostc.Type from MethodRef.frost:61:31
org$frostlang$frostc$Type$Kind* $tmp213 = &$tmp212->typeKind;
org$frostlang$frostc$Type$Kind $tmp214 = *$tmp213;
org$frostlang$frostc$Type$Kind$wrapper* $tmp215;
$tmp215 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp215->value = $tmp214;
frost$core$Int $tmp216 = (frost$core$Int) {15u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:432:25
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp217 = &(&local17)->$rawValue;
*$tmp217 = $tmp216;
org$frostlang$frostc$Type$Kind $tmp218 = *(&local17);
*(&local16) = $tmp218;
org$frostlang$frostc$Type$Kind $tmp219 = *(&local16);
org$frostlang$frostc$Type$Kind$wrapper* $tmp220;
$tmp220 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp220->value = $tmp219;
ITable* $tmp221 = ((frost$core$Equatable*) $tmp215)->$class->itable;
while ($tmp221->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp221 = $tmp221->next;
}
$fn223 $tmp222 = $tmp221->methods[0];
frost$core$Bit $tmp224 = $tmp222(((frost$core$Equatable*) $tmp215), ((frost$core$Equatable*) $tmp220));
bool $tmp225 = $tmp224.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp220)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp215)));
if ($tmp225) goto block54; else goto block58;
block58:;
org$frostlang$frostc$Type$Kind* $tmp226 = &$tmp212->typeKind;
org$frostlang$frostc$Type$Kind $tmp227 = *$tmp226;
org$frostlang$frostc$Type$Kind$wrapper* $tmp228;
$tmp228 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp228->value = $tmp227;
frost$core$Int $tmp229 = (frost$core$Int) {16u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:432:52
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp230 = &(&local19)->$rawValue;
*$tmp230 = $tmp229;
org$frostlang$frostc$Type$Kind $tmp231 = *(&local19);
*(&local18) = $tmp231;
org$frostlang$frostc$Type$Kind $tmp232 = *(&local18);
org$frostlang$frostc$Type$Kind$wrapper* $tmp233;
$tmp233 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp233->value = $tmp232;
ITable* $tmp234 = ((frost$core$Equatable*) $tmp228)->$class->itable;
while ($tmp234->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp234 = $tmp234->next;
}
$fn236 $tmp235 = $tmp234->methods[0];
frost$core$Bit $tmp237 = $tmp235(((frost$core$Equatable*) $tmp228), ((frost$core$Equatable*) $tmp233));
bool $tmp238 = $tmp237.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp233)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp228)));
if ($tmp238) goto block54; else goto block57;
block57:;
org$frostlang$frostc$Type$Kind* $tmp239 = &$tmp212->typeKind;
org$frostlang$frostc$Type$Kind $tmp240 = *$tmp239;
org$frostlang$frostc$Type$Kind$wrapper* $tmp241;
$tmp241 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp241->value = $tmp240;
frost$core$Int $tmp242 = (frost$core$Int) {17u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:432:77
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp243 = &(&local21)->$rawValue;
*$tmp243 = $tmp242;
org$frostlang$frostc$Type$Kind $tmp244 = *(&local21);
*(&local20) = $tmp244;
org$frostlang$frostc$Type$Kind $tmp245 = *(&local20);
org$frostlang$frostc$Type$Kind$wrapper* $tmp246;
$tmp246 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp246->value = $tmp245;
ITable* $tmp247 = ((frost$core$Equatable*) $tmp241)->$class->itable;
while ($tmp247->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp247 = $tmp247->next;
}
$fn249 $tmp248 = $tmp247->methods[0];
frost$core$Bit $tmp250 = $tmp248(((frost$core$Equatable*) $tmp241), ((frost$core$Equatable*) $tmp246));
bool $tmp251 = $tmp250.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp246)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp241)));
if ($tmp251) goto block54; else goto block56;
block56:;
org$frostlang$frostc$Type$Kind* $tmp252 = &$tmp212->typeKind;
org$frostlang$frostc$Type$Kind $tmp253 = *$tmp252;
org$frostlang$frostc$Type$Kind$wrapper* $tmp254;
$tmp254 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp254->value = $tmp253;
frost$core$Int $tmp255 = (frost$core$Int) {18u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:433:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp256 = &(&local23)->$rawValue;
*$tmp256 = $tmp255;
org$frostlang$frostc$Type$Kind $tmp257 = *(&local23);
*(&local22) = $tmp257;
org$frostlang$frostc$Type$Kind $tmp258 = *(&local22);
org$frostlang$frostc$Type$Kind$wrapper* $tmp259;
$tmp259 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp259->value = $tmp258;
ITable* $tmp260 = ((frost$core$Equatable*) $tmp254)->$class->itable;
while ($tmp260->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp260 = $tmp260->next;
}
$fn262 $tmp261 = $tmp260->methods[0];
frost$core$Bit $tmp263 = $tmp261(((frost$core$Equatable*) $tmp254), ((frost$core$Equatable*) $tmp259));
bool $tmp264 = $tmp263.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp259)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp254)));
if ($tmp264) goto block54; else goto block55;
block55:;
frost$core$Int $tmp265 = (frost$core$Int) {434u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s266, $tmp265, &$s267);
abort(); // unreachable
block54:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:435
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:435:16
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp268 = &$tmp212->_subtypes;
org$frostlang$frostc$FixedArray* $tmp269 = *$tmp268;
frost$core$Bit $tmp270 = (frost$core$Bit) {$tmp269 != NULL};
bool $tmp271 = $tmp270.value;
if ($tmp271) goto block64; else goto block65;
block65:;
frost$core$Int $tmp272 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s273, $tmp272);
abort(); // unreachable
block64:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp274 = &$tmp212->_subtypes;
org$frostlang$frostc$FixedArray* $tmp275 = *$tmp274;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp275));
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:435:25
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp276 = &$tmp212->_subtypes;
org$frostlang$frostc$FixedArray* $tmp277 = *$tmp276;
frost$core$Bit $tmp278 = (frost$core$Bit) {$tmp277 != NULL};
bool $tmp279 = $tmp278.value;
if ($tmp279) goto block67; else goto block68;
block68:;
frost$core$Int $tmp280 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s281, $tmp280);
abort(); // unreachable
block67:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp282 = &$tmp212->_subtypes;
org$frostlang$frostc$FixedArray* $tmp283 = *$tmp282;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp283));
ITable* $tmp284 = ((frost$collections$CollectionView*) $tmp283)->$class->itable;
while ($tmp284->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp284 = $tmp284->next;
}
$fn286 $tmp285 = $tmp284->methods[0];
frost$core$Int $tmp287 = $tmp285(((frost$collections$CollectionView*) $tmp283));
frost$core$Int $tmp288 = (frost$core$Int) {1u};
int64_t $tmp289 = $tmp287.value;
int64_t $tmp290 = $tmp288.value;
int64_t $tmp291 = $tmp289 - $tmp290;
frost$core$Int $tmp292 = (frost$core$Int) {$tmp291};
frost$core$Object* $tmp293 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp275, $tmp292);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp293)));
frost$core$Frost$unref$frost$core$Object$Q($tmp293);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp283));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp275));
org$frostlang$frostc$Type* $tmp294 = *(&local4);
frost$core$Int* $tmp295 = &$tmp294->priority;
frost$core$Int $tmp296 = *$tmp295;
org$frostlang$frostc$Type* $tmp297 = org$frostlang$frostc$Type$methodType$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$Type$Kind$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$org$frostlang$frostc$Type$frost$core$Int$R$org$frostlang$frostc$Type(param1, $tmp209, $tmp210, ((frost$collections$ListView*) $tmp211), ((org$frostlang$frostc$Type*) $tmp293), $tmp296);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp297));
org$frostlang$frostc$Type* $tmp298 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp298));
*(&local4) = $tmp297;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp297));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp293)));
frost$collections$Array* $tmp299 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp299));
*(&local10) = ((frost$collections$Array*) NULL);
goto block19;
block20:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:63
frost$core$Bit $tmp300 = org$frostlang$frostc$Compiler$isImmutable$org$frostlang$frostc$Type$R$frost$core$Bit(param1, param2);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from MethodRef.frost:63:17
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp301 = $tmp300.value;
bool $tmp302 = !$tmp301;
frost$core$Bit $tmp303 = (frost$core$Bit) {$tmp302};
bool $tmp304 = $tmp303.value;
if ($tmp304) goto block71; else goto block70;
block71:;
org$frostlang$frostc$MethodDecl$Kind* $tmp305 = &param3->methodKind;
org$frostlang$frostc$MethodDecl$Kind $tmp306 = *$tmp305;
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp307;
$tmp307 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp307->value = $tmp306;
frost$core$Int $tmp308 = (frost$core$Int) {2u};
// begin inline call to org.frostlang.frostc.MethodDecl.Kind.init(rv:frost.core.Int):org.frostlang.frostc.MethodDecl.Kind from MethodRef.frost:63:84
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:7
frost$core$Int* $tmp309 = &(&local25)->$rawValue;
*$tmp309 = $tmp308;
org$frostlang$frostc$MethodDecl$Kind $tmp310 = *(&local25);
*(&local24) = $tmp310;
org$frostlang$frostc$MethodDecl$Kind $tmp311 = *(&local24);
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp312;
$tmp312 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp312->value = $tmp311;
ITable* $tmp313 = ((frost$core$Equatable*) $tmp307)->$class->itable;
while ($tmp313->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp313 = $tmp313->next;
}
$fn315 $tmp314 = $tmp313->methods[1];
frost$core$Bit $tmp316 = $tmp314(((frost$core$Equatable*) $tmp307), ((frost$core$Equatable*) $tmp312));
bool $tmp317 = $tmp316.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp312)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp307)));
if ($tmp317) goto block69; else goto block70;
block69:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:64
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:65
org$frostlang$frostc$MethodDecl$Kind* $tmp318 = &param3->methodKind;
org$frostlang$frostc$MethodDecl$Kind $tmp319 = *$tmp318;
frost$core$Int $tmp320 = $tmp319.$rawValue;
frost$core$Int $tmp321 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from MethodRef.frost:66:37
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp322 = $tmp320.value;
int64_t $tmp323 = $tmp321.value;
bool $tmp324 = $tmp322 == $tmp323;
frost$core$Bit $tmp325 = (frost$core$Bit) {$tmp324};
bool $tmp326 = $tmp325.value;
if ($tmp326) goto block75; else goto block76;
block75:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:67
frost$core$Int $tmp327 = (frost$core$Int) {16u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from MethodRef.frost:67:42
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp328 = &(&local28)->$rawValue;
*$tmp328 = $tmp327;
org$frostlang$frostc$Type$Kind $tmp329 = *(&local28);
*(&local27) = $tmp329;
org$frostlang$frostc$Type$Kind $tmp330 = *(&local27);
*(&local26) = $tmp330;
goto block74;
block76:;
frost$core$Int $tmp331 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from MethodRef.frost:69:37
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp332 = $tmp320.value;
int64_t $tmp333 = $tmp331.value;
bool $tmp334 = $tmp332 == $tmp333;
frost$core$Bit $tmp335 = (frost$core$Bit) {$tmp334};
bool $tmp336 = $tmp335.value;
if ($tmp336) goto block79; else goto block80;
block79:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:70
frost$core$Int $tmp337 = (frost$core$Int) {15u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from MethodRef.frost:70:42
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp338 = &(&local30)->$rawValue;
*$tmp338 = $tmp337;
org$frostlang$frostc$Type$Kind $tmp339 = *(&local30);
*(&local29) = $tmp339;
org$frostlang$frostc$Type$Kind $tmp340 = *(&local29);
*(&local26) = $tmp340;
goto block74;
block80:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:73
frost$core$Int $tmp341 = (frost$core$Int) {73u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s342, $tmp341);
abort(); // unreachable
block74:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:76
org$frostlang$frostc$Type* $tmp343 = *(&local4);
org$frostlang$frostc$Position* $tmp344 = &((org$frostlang$frostc$Symbol*) $tmp343)->position;
org$frostlang$frostc$Position $tmp345 = *$tmp344;
org$frostlang$frostc$Type$Kind $tmp346 = *(&local26);
org$frostlang$frostc$Type* $tmp347 = *(&local4);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from MethodRef.frost:77:31
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp348 = &$tmp347->_subtypes;
org$frostlang$frostc$FixedArray* $tmp349 = *$tmp348;
frost$core$Bit $tmp350 = (frost$core$Bit) {$tmp349 != NULL};
bool $tmp351 = $tmp350.value;
if ($tmp351) goto block84; else goto block85;
block85:;
frost$core$Int $tmp352 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s353, $tmp352);
abort(); // unreachable
block84:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp354 = &$tmp347->_subtypes;
org$frostlang$frostc$FixedArray* $tmp355 = *$tmp354;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp355));
frost$core$Int $tmp356 = (frost$core$Int) {0u};
org$frostlang$frostc$Type* $tmp357 = *(&local4);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from MethodRef.frost:77:56
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp358 = &$tmp357->_subtypes;
org$frostlang$frostc$FixedArray* $tmp359 = *$tmp358;
frost$core$Bit $tmp360 = (frost$core$Bit) {$tmp359 != NULL};
bool $tmp361 = $tmp360.value;
if ($tmp361) goto block87; else goto block88;
block88:;
frost$core$Int $tmp362 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s363, $tmp362);
abort(); // unreachable
block87:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp364 = &$tmp357->_subtypes;
org$frostlang$frostc$FixedArray* $tmp365 = *$tmp364;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp365));
ITable* $tmp366 = ((frost$collections$CollectionView*) $tmp365)->$class->itable;
while ($tmp366->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp366 = $tmp366->next;
}
$fn368 $tmp367 = $tmp366->methods[0];
frost$core$Int $tmp369 = $tmp367(((frost$collections$CollectionView*) $tmp365));
frost$core$Int $tmp370 = (frost$core$Int) {1u};
int64_t $tmp371 = $tmp369.value;
int64_t $tmp372 = $tmp370.value;
int64_t $tmp373 = $tmp371 - $tmp372;
frost$core$Int $tmp374 = (frost$core$Int) {$tmp373};
frost$core$Bit $tmp375 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp376 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp356, $tmp374, $tmp375);
ITable* $tmp377 = ((frost$collections$ListView*) $tmp355)->$class->itable;
while ($tmp377->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp377 = $tmp377->next;
}
$fn379 $tmp378 = $tmp377->methods[1];
frost$collections$ListView* $tmp380 = $tmp378(((frost$collections$ListView*) $tmp355), $tmp376);
org$frostlang$frostc$Type* $tmp381 = *(&local4);
// begin inline call to function org.frostlang.frostc.Type.get_returnType():org.frostlang.frostc.Type from MethodRef.frost:78:31
org$frostlang$frostc$Type$Kind* $tmp382 = &$tmp381->typeKind;
org$frostlang$frostc$Type$Kind $tmp383 = *$tmp382;
org$frostlang$frostc$Type$Kind$wrapper* $tmp384;
$tmp384 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp384->value = $tmp383;
frost$core$Int $tmp385 = (frost$core$Int) {15u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:432:25
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp386 = &(&local32)->$rawValue;
*$tmp386 = $tmp385;
org$frostlang$frostc$Type$Kind $tmp387 = *(&local32);
*(&local31) = $tmp387;
org$frostlang$frostc$Type$Kind $tmp388 = *(&local31);
org$frostlang$frostc$Type$Kind$wrapper* $tmp389;
$tmp389 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp389->value = $tmp388;
ITable* $tmp390 = ((frost$core$Equatable*) $tmp384)->$class->itable;
while ($tmp390->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp390 = $tmp390->next;
}
$fn392 $tmp391 = $tmp390->methods[0];
frost$core$Bit $tmp393 = $tmp391(((frost$core$Equatable*) $tmp384), ((frost$core$Equatable*) $tmp389));
bool $tmp394 = $tmp393.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp389)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp384)));
if ($tmp394) goto block90; else goto block94;
block94:;
org$frostlang$frostc$Type$Kind* $tmp395 = &$tmp381->typeKind;
org$frostlang$frostc$Type$Kind $tmp396 = *$tmp395;
org$frostlang$frostc$Type$Kind$wrapper* $tmp397;
$tmp397 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp397->value = $tmp396;
frost$core$Int $tmp398 = (frost$core$Int) {16u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:432:52
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp399 = &(&local34)->$rawValue;
*$tmp399 = $tmp398;
org$frostlang$frostc$Type$Kind $tmp400 = *(&local34);
*(&local33) = $tmp400;
org$frostlang$frostc$Type$Kind $tmp401 = *(&local33);
org$frostlang$frostc$Type$Kind$wrapper* $tmp402;
$tmp402 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp402->value = $tmp401;
ITable* $tmp403 = ((frost$core$Equatable*) $tmp397)->$class->itable;
while ($tmp403->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp403 = $tmp403->next;
}
$fn405 $tmp404 = $tmp403->methods[0];
frost$core$Bit $tmp406 = $tmp404(((frost$core$Equatable*) $tmp397), ((frost$core$Equatable*) $tmp402));
bool $tmp407 = $tmp406.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp402)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp397)));
if ($tmp407) goto block90; else goto block93;
block93:;
org$frostlang$frostc$Type$Kind* $tmp408 = &$tmp381->typeKind;
org$frostlang$frostc$Type$Kind $tmp409 = *$tmp408;
org$frostlang$frostc$Type$Kind$wrapper* $tmp410;
$tmp410 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp410->value = $tmp409;
frost$core$Int $tmp411 = (frost$core$Int) {17u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:432:77
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp412 = &(&local36)->$rawValue;
*$tmp412 = $tmp411;
org$frostlang$frostc$Type$Kind $tmp413 = *(&local36);
*(&local35) = $tmp413;
org$frostlang$frostc$Type$Kind $tmp414 = *(&local35);
org$frostlang$frostc$Type$Kind$wrapper* $tmp415;
$tmp415 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp415->value = $tmp414;
ITable* $tmp416 = ((frost$core$Equatable*) $tmp410)->$class->itable;
while ($tmp416->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp416 = $tmp416->next;
}
$fn418 $tmp417 = $tmp416->methods[0];
frost$core$Bit $tmp419 = $tmp417(((frost$core$Equatable*) $tmp410), ((frost$core$Equatable*) $tmp415));
bool $tmp420 = $tmp419.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp415)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp410)));
if ($tmp420) goto block90; else goto block92;
block92:;
org$frostlang$frostc$Type$Kind* $tmp421 = &$tmp381->typeKind;
org$frostlang$frostc$Type$Kind $tmp422 = *$tmp421;
org$frostlang$frostc$Type$Kind$wrapper* $tmp423;
$tmp423 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp423->value = $tmp422;
frost$core$Int $tmp424 = (frost$core$Int) {18u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:433:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp425 = &(&local38)->$rawValue;
*$tmp425 = $tmp424;
org$frostlang$frostc$Type$Kind $tmp426 = *(&local38);
*(&local37) = $tmp426;
org$frostlang$frostc$Type$Kind $tmp427 = *(&local37);
org$frostlang$frostc$Type$Kind$wrapper* $tmp428;
$tmp428 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp428->value = $tmp427;
ITable* $tmp429 = ((frost$core$Equatable*) $tmp423)->$class->itable;
while ($tmp429->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp429 = $tmp429->next;
}
$fn431 $tmp430 = $tmp429->methods[0];
frost$core$Bit $tmp432 = $tmp430(((frost$core$Equatable*) $tmp423), ((frost$core$Equatable*) $tmp428));
bool $tmp433 = $tmp432.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp428)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp423)));
if ($tmp433) goto block90; else goto block91;
block91:;
frost$core$Int $tmp434 = (frost$core$Int) {434u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s435, $tmp434, &$s436);
abort(); // unreachable
block90:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:435
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:435:16
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp437 = &$tmp381->_subtypes;
org$frostlang$frostc$FixedArray* $tmp438 = *$tmp437;
frost$core$Bit $tmp439 = (frost$core$Bit) {$tmp438 != NULL};
bool $tmp440 = $tmp439.value;
if ($tmp440) goto block100; else goto block101;
block101:;
frost$core$Int $tmp441 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s442, $tmp441);
abort(); // unreachable
block100:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp443 = &$tmp381->_subtypes;
org$frostlang$frostc$FixedArray* $tmp444 = *$tmp443;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp444));
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:435:25
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp445 = &$tmp381->_subtypes;
org$frostlang$frostc$FixedArray* $tmp446 = *$tmp445;
frost$core$Bit $tmp447 = (frost$core$Bit) {$tmp446 != NULL};
bool $tmp448 = $tmp447.value;
if ($tmp448) goto block103; else goto block104;
block104:;
frost$core$Int $tmp449 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s450, $tmp449);
abort(); // unreachable
block103:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp451 = &$tmp381->_subtypes;
org$frostlang$frostc$FixedArray* $tmp452 = *$tmp451;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp452));
ITable* $tmp453 = ((frost$collections$CollectionView*) $tmp452)->$class->itable;
while ($tmp453->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp453 = $tmp453->next;
}
$fn455 $tmp454 = $tmp453->methods[0];
frost$core$Int $tmp456 = $tmp454(((frost$collections$CollectionView*) $tmp452));
frost$core$Int $tmp457 = (frost$core$Int) {1u};
int64_t $tmp458 = $tmp456.value;
int64_t $tmp459 = $tmp457.value;
int64_t $tmp460 = $tmp458 - $tmp459;
frost$core$Int $tmp461 = (frost$core$Int) {$tmp460};
frost$core$Object* $tmp462 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp444, $tmp461);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp462)));
frost$core$Frost$unref$frost$core$Object$Q($tmp462);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp452));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp444));
org$frostlang$frostc$Type* $tmp463 = *(&local4);
frost$core$Int* $tmp464 = &$tmp463->priority;
frost$core$Int $tmp465 = *$tmp464;
org$frostlang$frostc$Type* $tmp466 = org$frostlang$frostc$Type$methodType$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$Type$Kind$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$org$frostlang$frostc$Type$frost$core$Int$R$org$frostlang$frostc$Type(param1, $tmp345, $tmp346, $tmp380, ((org$frostlang$frostc$Type*) $tmp462), $tmp465);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp466));
org$frostlang$frostc$Type* $tmp467 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp467));
*(&local4) = $tmp466;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp466));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp462)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp380));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp365));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp355));
goto block70;
block70:;
goto block19;
block19:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:80
// begin inline call to function org.frostlang.frostc.Compiler.getTryScope():org.frostlang.frostc.Pair<org.frostlang.frostc.IR.Block.ID?, org.frostlang.frostc.Variable?>? from MethodRef.frost:80:32
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5205
frost$collections$Stack** $tmp468 = &param1->enclosingContexts;
frost$collections$Stack* $tmp469 = *$tmp468;
ITable* $tmp470 = ((frost$collections$Iterable*) $tmp469)->$class->itable;
while ($tmp470->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp470 = $tmp470->next;
}
$fn472 $tmp471 = $tmp470->methods[0];
frost$collections$Iterator* $tmp473 = $tmp471(((frost$collections$Iterable*) $tmp469));
goto block108;
block108:;
ITable* $tmp474 = $tmp473->$class->itable;
while ($tmp474->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp474 = $tmp474->next;
}
$fn476 $tmp475 = $tmp474->methods[0];
frost$core$Bit $tmp477 = $tmp475($tmp473);
bool $tmp478 = $tmp477.value;
if ($tmp478) goto block110; else goto block109;
block109:;
*(&local40) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
ITable* $tmp479 = $tmp473->$class->itable;
while ($tmp479->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp479 = $tmp479->next;
}
$fn481 $tmp480 = $tmp479->methods[1];
frost$core$Object* $tmp482 = $tmp480($tmp473);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Compiler$EnclosingContext*) $tmp482)));
org$frostlang$frostc$Compiler$EnclosingContext* $tmp483 = *(&local40);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp483));
*(&local40) = ((org$frostlang$frostc$Compiler$EnclosingContext*) $tmp482);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5206
org$frostlang$frostc$Compiler$EnclosingContext* $tmp484 = *(&local40);
frost$core$Int* $tmp485 = &$tmp484->$rawValue;
frost$core$Int $tmp486 = *$tmp485;
frost$core$Int $tmp487 = (frost$core$Int) {5u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Compiler.frost:5207:38
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp488 = $tmp486.value;
int64_t $tmp489 = $tmp487.value;
bool $tmp490 = $tmp488 == $tmp489;
frost$core$Bit $tmp491 = (frost$core$Bit) {$tmp490};
bool $tmp492 = $tmp491.value;
if ($tmp492) goto block112; else goto block113;
block112:;
org$frostlang$frostc$IR$Block$ID$nullable* $tmp493 = (org$frostlang$frostc$IR$Block$ID$nullable*) ($tmp484->$data + 0);
org$frostlang$frostc$IR$Block$ID$nullable $tmp494 = *$tmp493;
*(&local41) = $tmp494;
org$frostlang$frostc$Variable** $tmp495 = (org$frostlang$frostc$Variable**) ($tmp484->$data + 9);
org$frostlang$frostc$Variable* $tmp496 = *$tmp495;
*(&local42) = ((org$frostlang$frostc$Variable*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp496));
org$frostlang$frostc$Variable* $tmp497 = *(&local42);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp497));
*(&local42) = $tmp496;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5208
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Pair));
org$frostlang$frostc$Pair* $tmp498 = (org$frostlang$frostc$Pair*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Pair$class);
org$frostlang$frostc$IR$Block$ID$nullable $tmp499 = *(&local41);
frost$core$Object* $tmp500;
if ($tmp499.nonnull) {
    org$frostlang$frostc$IR$Block$ID$wrapper* $tmp501;
    $tmp501 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
    $tmp501->value = ((org$frostlang$frostc$IR$Block$ID) $tmp499.value);
    $tmp500 = ((frost$core$Object*) $tmp501);
}
else {
    $tmp500 = NULL;
}
org$frostlang$frostc$Variable* $tmp502 = *(&local42);
org$frostlang$frostc$Pair$init$org$frostlang$frostc$Pair$A$org$frostlang$frostc$Pair$B($tmp498, $tmp500, ((frost$core$Object*) $tmp502));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp498));
frost$core$Frost$unref$frost$core$Object$Q($tmp500);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp498));
org$frostlang$frostc$Variable* $tmp503 = *(&local42);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp503));
*(&local42) = ((org$frostlang$frostc$Variable*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp482);
org$frostlang$frostc$Compiler$EnclosingContext* $tmp504 = *(&local40);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp504));
*(&local40) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp473));
*(&local39) = $tmp498;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp498));
goto block107;
block113:;
frost$core$Int $tmp505 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Compiler.frost:5210:38
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp506 = $tmp486.value;
int64_t $tmp507 = $tmp505.value;
bool $tmp508 = $tmp506 == $tmp507;
frost$core$Bit $tmp509 = (frost$core$Bit) {$tmp508};
bool $tmp510 = $tmp509.value;
if ($tmp510) goto block115; else goto block111;
block115:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5211
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Pair*) NULL)));
frost$core$Frost$unref$frost$core$Object$Q($tmp482);
org$frostlang$frostc$Compiler$EnclosingContext* $tmp511 = *(&local40);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp511));
*(&local40) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp473));
*(&local39) = ((org$frostlang$frostc$Pair*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Pair*) NULL)));
goto block107;
block111:;
frost$core$Frost$unref$frost$core$Object$Q($tmp482);
org$frostlang$frostc$Compiler$EnclosingContext* $tmp512 = *(&local40);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp512));
*(&local40) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
goto block108;
block110:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp473));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5215
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Pair*) NULL)));
*(&local39) = ((org$frostlang$frostc$Pair*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Pair*) NULL)));
goto block107;
block107:;
org$frostlang$frostc$Pair* $tmp513 = *(&local39);
frost$core$Bit $tmp514 = (frost$core$Bit) {$tmp513 != NULL};
bool $tmp515 = $tmp514.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp513));
if ($tmp515) goto block105; else goto block106;
block105:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:81
org$frostlang$frostc$Type* $tmp516 = *(&local4);
// begin inline call to function org.frostlang.frostc.Type.get_returnType():org.frostlang.frostc.Type from MethodRef.frost:81:41
org$frostlang$frostc$Type$Kind* $tmp517 = &$tmp516->typeKind;
org$frostlang$frostc$Type$Kind $tmp518 = *$tmp517;
org$frostlang$frostc$Type$Kind$wrapper* $tmp519;
$tmp519 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp519->value = $tmp518;
frost$core$Int $tmp520 = (frost$core$Int) {15u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:432:25
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp521 = &(&local44)->$rawValue;
*$tmp521 = $tmp520;
org$frostlang$frostc$Type$Kind $tmp522 = *(&local44);
*(&local43) = $tmp522;
org$frostlang$frostc$Type$Kind $tmp523 = *(&local43);
org$frostlang$frostc$Type$Kind$wrapper* $tmp524;
$tmp524 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp524->value = $tmp523;
ITable* $tmp525 = ((frost$core$Equatable*) $tmp519)->$class->itable;
while ($tmp525->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp525 = $tmp525->next;
}
$fn527 $tmp526 = $tmp525->methods[0];
frost$core$Bit $tmp528 = $tmp526(((frost$core$Equatable*) $tmp519), ((frost$core$Equatable*) $tmp524));
bool $tmp529 = $tmp528.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp524)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp519)));
if ($tmp529) goto block118; else goto block122;
block122:;
org$frostlang$frostc$Type$Kind* $tmp530 = &$tmp516->typeKind;
org$frostlang$frostc$Type$Kind $tmp531 = *$tmp530;
org$frostlang$frostc$Type$Kind$wrapper* $tmp532;
$tmp532 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp532->value = $tmp531;
frost$core$Int $tmp533 = (frost$core$Int) {16u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:432:52
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp534 = &(&local46)->$rawValue;
*$tmp534 = $tmp533;
org$frostlang$frostc$Type$Kind $tmp535 = *(&local46);
*(&local45) = $tmp535;
org$frostlang$frostc$Type$Kind $tmp536 = *(&local45);
org$frostlang$frostc$Type$Kind$wrapper* $tmp537;
$tmp537 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp537->value = $tmp536;
ITable* $tmp538 = ((frost$core$Equatable*) $tmp532)->$class->itable;
while ($tmp538->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp538 = $tmp538->next;
}
$fn540 $tmp539 = $tmp538->methods[0];
frost$core$Bit $tmp541 = $tmp539(((frost$core$Equatable*) $tmp532), ((frost$core$Equatable*) $tmp537));
bool $tmp542 = $tmp541.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp537)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp532)));
if ($tmp542) goto block118; else goto block121;
block121:;
org$frostlang$frostc$Type$Kind* $tmp543 = &$tmp516->typeKind;
org$frostlang$frostc$Type$Kind $tmp544 = *$tmp543;
org$frostlang$frostc$Type$Kind$wrapper* $tmp545;
$tmp545 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp545->value = $tmp544;
frost$core$Int $tmp546 = (frost$core$Int) {17u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:432:77
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp547 = &(&local48)->$rawValue;
*$tmp547 = $tmp546;
org$frostlang$frostc$Type$Kind $tmp548 = *(&local48);
*(&local47) = $tmp548;
org$frostlang$frostc$Type$Kind $tmp549 = *(&local47);
org$frostlang$frostc$Type$Kind$wrapper* $tmp550;
$tmp550 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp550->value = $tmp549;
ITable* $tmp551 = ((frost$core$Equatable*) $tmp545)->$class->itable;
while ($tmp551->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp551 = $tmp551->next;
}
$fn553 $tmp552 = $tmp551->methods[0];
frost$core$Bit $tmp554 = $tmp552(((frost$core$Equatable*) $tmp545), ((frost$core$Equatable*) $tmp550));
bool $tmp555 = $tmp554.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp550)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp545)));
if ($tmp555) goto block118; else goto block120;
block120:;
org$frostlang$frostc$Type$Kind* $tmp556 = &$tmp516->typeKind;
org$frostlang$frostc$Type$Kind $tmp557 = *$tmp556;
org$frostlang$frostc$Type$Kind$wrapper* $tmp558;
$tmp558 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp558->value = $tmp557;
frost$core$Int $tmp559 = (frost$core$Int) {18u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:433:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp560 = &(&local50)->$rawValue;
*$tmp560 = $tmp559;
org$frostlang$frostc$Type$Kind $tmp561 = *(&local50);
*(&local49) = $tmp561;
org$frostlang$frostc$Type$Kind $tmp562 = *(&local49);
org$frostlang$frostc$Type$Kind$wrapper* $tmp563;
$tmp563 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp563->value = $tmp562;
ITable* $tmp564 = ((frost$core$Equatable*) $tmp558)->$class->itable;
while ($tmp564->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp564 = $tmp564->next;
}
$fn566 $tmp565 = $tmp564->methods[0];
frost$core$Bit $tmp567 = $tmp565(((frost$core$Equatable*) $tmp558), ((frost$core$Equatable*) $tmp563));
bool $tmp568 = $tmp567.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp563)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp558)));
if ($tmp568) goto block118; else goto block119;
block119:;
frost$core$Int $tmp569 = (frost$core$Int) {434u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s570, $tmp569, &$s571);
abort(); // unreachable
block118:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:435
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:435:16
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp572 = &$tmp516->_subtypes;
org$frostlang$frostc$FixedArray* $tmp573 = *$tmp572;
frost$core$Bit $tmp574 = (frost$core$Bit) {$tmp573 != NULL};
bool $tmp575 = $tmp574.value;
if ($tmp575) goto block128; else goto block129;
block129:;
frost$core$Int $tmp576 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s577, $tmp576);
abort(); // unreachable
block128:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp578 = &$tmp516->_subtypes;
org$frostlang$frostc$FixedArray* $tmp579 = *$tmp578;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp579));
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:435:25
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp580 = &$tmp516->_subtypes;
org$frostlang$frostc$FixedArray* $tmp581 = *$tmp580;
frost$core$Bit $tmp582 = (frost$core$Bit) {$tmp581 != NULL};
bool $tmp583 = $tmp582.value;
if ($tmp583) goto block131; else goto block132;
block132:;
frost$core$Int $tmp584 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s585, $tmp584);
abort(); // unreachable
block131:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp586 = &$tmp516->_subtypes;
org$frostlang$frostc$FixedArray* $tmp587 = *$tmp586;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp587));
ITable* $tmp588 = ((frost$collections$CollectionView*) $tmp587)->$class->itable;
while ($tmp588->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp588 = $tmp588->next;
}
$fn590 $tmp589 = $tmp588->methods[0];
frost$core$Int $tmp591 = $tmp589(((frost$collections$CollectionView*) $tmp587));
frost$core$Int $tmp592 = (frost$core$Int) {1u};
int64_t $tmp593 = $tmp591.value;
int64_t $tmp594 = $tmp592.value;
int64_t $tmp595 = $tmp593 - $tmp594;
frost$core$Int $tmp596 = (frost$core$Int) {$tmp595};
frost$core$Object* $tmp597 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp579, $tmp596);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp597)));
frost$core$Frost$unref$frost$core$Object$Q($tmp597);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp587));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp579));
*(&local51) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp597)));
org$frostlang$frostc$Type* $tmp598 = *(&local51);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp598));
*(&local51) = ((org$frostlang$frostc$Type*) $tmp597);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp597)));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:82
org$frostlang$frostc$Type* $tmp599 = *(&local51);
org$frostlang$frostc$Type** $tmp600 = &param1->ERROR_TYPE;
org$frostlang$frostc$Type* $tmp601 = *$tmp600;
org$frostlang$frostc$Type* $tmp602 = org$frostlang$frostc$Type$nullable$R$org$frostlang$frostc$Type($tmp601);
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from MethodRef.frost:82:27
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:253
frost$core$String** $tmp603 = &((org$frostlang$frostc$Symbol*) $tmp599)->name;
frost$core$String* $tmp604 = *$tmp603;
frost$core$String** $tmp605 = &((org$frostlang$frostc$Symbol*) $tmp602)->name;
frost$core$String* $tmp606 = *$tmp605;
frost$core$Bit $tmp607 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp604, $tmp606);
bool $tmp608 = $tmp607.value;
if ($tmp608) goto block137; else goto block138;
block137:;
org$frostlang$frostc$Type$Kind* $tmp609 = &$tmp599->typeKind;
org$frostlang$frostc$Type$Kind $tmp610 = *$tmp609;
org$frostlang$frostc$Type$Kind$wrapper* $tmp611;
$tmp611 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp611->value = $tmp610;
org$frostlang$frostc$Type$Kind* $tmp612 = &$tmp602->typeKind;
org$frostlang$frostc$Type$Kind $tmp613 = *$tmp612;
org$frostlang$frostc$Type$Kind$wrapper* $tmp614;
$tmp614 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp614->value = $tmp613;
ITable* $tmp615 = ((frost$core$Equatable*) $tmp611)->$class->itable;
while ($tmp615->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp615 = $tmp615->next;
}
$fn617 $tmp616 = $tmp615->methods[0];
frost$core$Bit $tmp618 = $tmp616(((frost$core$Equatable*) $tmp611), ((frost$core$Equatable*) $tmp614));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp614)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp611)));
*(&local52) = $tmp618;
goto block139;
block138:;
*(&local52) = $tmp607;
goto block139;
block139:;
frost$core$Bit $tmp619 = *(&local52);
bool $tmp620 = $tmp619.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp602));
if ($tmp620) goto block133; else goto block135;
block133:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:83
org$frostlang$frostc$Type* $tmp621 = *(&local4);
org$frostlang$frostc$Position* $tmp622 = &((org$frostlang$frostc$Symbol*) $tmp621)->position;
org$frostlang$frostc$Position $tmp623 = *$tmp622;
org$frostlang$frostc$Type* $tmp624 = *(&local4);
org$frostlang$frostc$Type$Kind* $tmp625 = &$tmp624->typeKind;
org$frostlang$frostc$Type$Kind $tmp626 = *$tmp625;
org$frostlang$frostc$Type* $tmp627 = *(&local4);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from MethodRef.frost:84:35
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp628 = &$tmp627->_subtypes;
org$frostlang$frostc$FixedArray* $tmp629 = *$tmp628;
frost$core$Bit $tmp630 = (frost$core$Bit) {$tmp629 != NULL};
bool $tmp631 = $tmp630.value;
if ($tmp631) goto block141; else goto block142;
block142:;
frost$core$Int $tmp632 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s633, $tmp632);
abort(); // unreachable
block141:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp634 = &$tmp627->_subtypes;
org$frostlang$frostc$FixedArray* $tmp635 = *$tmp634;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp635));
frost$core$Int $tmp636 = (frost$core$Int) {0u};
org$frostlang$frostc$Type* $tmp637 = *(&local4);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from MethodRef.frost:84:60
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp638 = &$tmp637->_subtypes;
org$frostlang$frostc$FixedArray* $tmp639 = *$tmp638;
frost$core$Bit $tmp640 = (frost$core$Bit) {$tmp639 != NULL};
bool $tmp641 = $tmp640.value;
if ($tmp641) goto block144; else goto block145;
block145:;
frost$core$Int $tmp642 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s643, $tmp642);
abort(); // unreachable
block144:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp644 = &$tmp637->_subtypes;
org$frostlang$frostc$FixedArray* $tmp645 = *$tmp644;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp645));
ITable* $tmp646 = ((frost$collections$CollectionView*) $tmp645)->$class->itable;
while ($tmp646->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp646 = $tmp646->next;
}
$fn648 $tmp647 = $tmp646->methods[0];
frost$core$Int $tmp649 = $tmp647(((frost$collections$CollectionView*) $tmp645));
frost$core$Int $tmp650 = (frost$core$Int) {1u};
int64_t $tmp651 = $tmp649.value;
int64_t $tmp652 = $tmp650.value;
int64_t $tmp653 = $tmp651 - $tmp652;
frost$core$Int $tmp654 = (frost$core$Int) {$tmp653};
frost$core$Bit $tmp655 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp656 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp636, $tmp654, $tmp655);
ITable* $tmp657 = ((frost$collections$ListView*) $tmp635)->$class->itable;
while ($tmp657->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp657 = $tmp657->next;
}
$fn659 $tmp658 = $tmp657->methods[1];
frost$collections$ListView* $tmp660 = $tmp658(((frost$collections$ListView*) $tmp635), $tmp656);
org$frostlang$frostc$Type** $tmp661 = &param1->VOID_TYPE;
org$frostlang$frostc$Type* $tmp662 = *$tmp661;
org$frostlang$frostc$Type* $tmp663 = *(&local4);
frost$core$Int* $tmp664 = &$tmp663->priority;
frost$core$Int $tmp665 = *$tmp664;
org$frostlang$frostc$Type* $tmp666 = org$frostlang$frostc$Type$methodType$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$Type$Kind$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$org$frostlang$frostc$Type$frost$core$Int$R$org$frostlang$frostc$Type(param1, $tmp623, $tmp626, $tmp660, $tmp662, $tmp665);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp666));
org$frostlang$frostc$Type* $tmp667 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp667));
*(&local4) = $tmp666;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp666));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp660));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp645));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp635));
goto block134;
block135:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:87
org$frostlang$frostc$Type* $tmp668 = *(&local51);
org$frostlang$frostc$Type$Kind* $tmp669 = &$tmp668->typeKind;
org$frostlang$frostc$Type$Kind $tmp670 = *$tmp669;
org$frostlang$frostc$Type$Kind$wrapper* $tmp671;
$tmp671 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp671->value = $tmp670;
frost$core$Int $tmp672 = (frost$core$Int) {11u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from MethodRef.frost:87:52
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp673 = &(&local54)->$rawValue;
*$tmp673 = $tmp672;
org$frostlang$frostc$Type$Kind $tmp674 = *(&local54);
*(&local53) = $tmp674;
org$frostlang$frostc$Type$Kind $tmp675 = *(&local53);
org$frostlang$frostc$Type$Kind$wrapper* $tmp676;
$tmp676 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp676->value = $tmp675;
ITable* $tmp677 = ((frost$core$Equatable*) $tmp671)->$class->itable;
while ($tmp677->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp677 = $tmp677->next;
}
$fn679 $tmp678 = $tmp677->methods[0];
frost$core$Bit $tmp680 = $tmp678(((frost$core$Equatable*) $tmp671), ((frost$core$Equatable*) $tmp676));
bool $tmp681 = $tmp680.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp676)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp671)));
if ($tmp681) goto block148; else goto block147;
block148:;
org$frostlang$frostc$Type* $tmp682 = *(&local51);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from MethodRef.frost:88:31
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp683 = &$tmp682->_subtypes;
org$frostlang$frostc$FixedArray* $tmp684 = *$tmp683;
frost$core$Bit $tmp685 = (frost$core$Bit) {$tmp684 != NULL};
bool $tmp686 = $tmp685.value;
if ($tmp686) goto block151; else goto block152;
block152:;
frost$core$Int $tmp687 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s688, $tmp687);
abort(); // unreachable
block151:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp689 = &$tmp682->_subtypes;
org$frostlang$frostc$FixedArray* $tmp690 = *$tmp689;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp690));
frost$core$Int $tmp691 = (frost$core$Int) {0u};
frost$core$Object* $tmp692 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp690, $tmp691);
frost$core$String** $tmp693 = &((org$frostlang$frostc$Symbol*) ((org$frostlang$frostc$Type*) $tmp692))->name;
frost$core$String* $tmp694 = *$tmp693;
frost$core$Bit $tmp695 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp694, &$s696);
bool $tmp697 = $tmp695.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp692);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp690));
if ($tmp697) goto block146; else goto block147;
block146:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:89
org$frostlang$frostc$Type* $tmp698 = *(&local4);
org$frostlang$frostc$Position* $tmp699 = &((org$frostlang$frostc$Symbol*) $tmp698)->position;
org$frostlang$frostc$Position $tmp700 = *$tmp699;
org$frostlang$frostc$Type* $tmp701 = *(&local4);
org$frostlang$frostc$Type$Kind* $tmp702 = &$tmp701->typeKind;
org$frostlang$frostc$Type$Kind $tmp703 = *$tmp702;
org$frostlang$frostc$Type* $tmp704 = *(&local4);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from MethodRef.frost:90:35
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp705 = &$tmp704->_subtypes;
org$frostlang$frostc$FixedArray* $tmp706 = *$tmp705;
frost$core$Bit $tmp707 = (frost$core$Bit) {$tmp706 != NULL};
bool $tmp708 = $tmp707.value;
if ($tmp708) goto block154; else goto block155;
block155:;
frost$core$Int $tmp709 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s710, $tmp709);
abort(); // unreachable
block154:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp711 = &$tmp704->_subtypes;
org$frostlang$frostc$FixedArray* $tmp712 = *$tmp711;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp712));
frost$core$Int $tmp713 = (frost$core$Int) {0u};
org$frostlang$frostc$Type* $tmp714 = *(&local4);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from MethodRef.frost:90:60
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp715 = &$tmp714->_subtypes;
org$frostlang$frostc$FixedArray* $tmp716 = *$tmp715;
frost$core$Bit $tmp717 = (frost$core$Bit) {$tmp716 != NULL};
bool $tmp718 = $tmp717.value;
if ($tmp718) goto block157; else goto block158;
block158:;
frost$core$Int $tmp719 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s720, $tmp719);
abort(); // unreachable
block157:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp721 = &$tmp714->_subtypes;
org$frostlang$frostc$FixedArray* $tmp722 = *$tmp721;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp722));
ITable* $tmp723 = ((frost$collections$CollectionView*) $tmp722)->$class->itable;
while ($tmp723->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp723 = $tmp723->next;
}
$fn725 $tmp724 = $tmp723->methods[0];
frost$core$Int $tmp726 = $tmp724(((frost$collections$CollectionView*) $tmp722));
frost$core$Int $tmp727 = (frost$core$Int) {1u};
int64_t $tmp728 = $tmp726.value;
int64_t $tmp729 = $tmp727.value;
int64_t $tmp730 = $tmp728 - $tmp729;
frost$core$Int $tmp731 = (frost$core$Int) {$tmp730};
frost$core$Bit $tmp732 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp733 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp713, $tmp731, $tmp732);
ITable* $tmp734 = ((frost$collections$ListView*) $tmp712)->$class->itable;
while ($tmp734->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp734 = $tmp734->next;
}
$fn736 $tmp735 = $tmp734->methods[1];
frost$collections$ListView* $tmp737 = $tmp735(((frost$collections$ListView*) $tmp712), $tmp733);
org$frostlang$frostc$Type* $tmp738 = *(&local51);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from MethodRef.frost:91:35
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp739 = &$tmp738->_subtypes;
org$frostlang$frostc$FixedArray* $tmp740 = *$tmp739;
frost$core$Bit $tmp741 = (frost$core$Bit) {$tmp740 != NULL};
bool $tmp742 = $tmp741.value;
if ($tmp742) goto block160; else goto block161;
block161:;
frost$core$Int $tmp743 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s744, $tmp743);
abort(); // unreachable
block160:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp745 = &$tmp738->_subtypes;
org$frostlang$frostc$FixedArray* $tmp746 = *$tmp745;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp746));
frost$core$Int $tmp747 = (frost$core$Int) {1u};
frost$core$Object* $tmp748 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp746, $tmp747);
org$frostlang$frostc$Type* $tmp749 = *(&local4);
frost$core$Int* $tmp750 = &$tmp749->priority;
frost$core$Int $tmp751 = *$tmp750;
org$frostlang$frostc$Type* $tmp752 = org$frostlang$frostc$Type$methodType$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$Type$Kind$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$org$frostlang$frostc$Type$frost$core$Int$R$org$frostlang$frostc$Type(param1, $tmp700, $tmp703, $tmp737, ((org$frostlang$frostc$Type*) $tmp748), $tmp751);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp752));
org$frostlang$frostc$Type* $tmp753 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp753));
*(&local4) = $tmp752;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp752));
frost$core$Frost$unref$frost$core$Object$Q($tmp748);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp746));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp737));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp722));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp712));
goto block147;
block147:;
goto block134;
block134:;
org$frostlang$frostc$Type* $tmp754 = *(&local51);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp754));
*(&local51) = ((org$frostlang$frostc$Type*) NULL);
goto block106;
block106:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:94
org$frostlang$frostc$Type* $tmp755 = *(&local3);
org$frostlang$frostc$Type* $tmp756 = *(&local4);
org$frostlang$frostc$Type* $tmp757 = org$frostlang$frostc$Compiler$remapType$org$frostlang$frostc$Type$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(param1, $tmp755, $tmp756);
*(&local55) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp757));
org$frostlang$frostc$Type* $tmp758 = *(&local55);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp758));
*(&local55) = $tmp757;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp757));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:95
frost$core$Bit $tmp759 = (frost$core$Bit) {param4 != NULL};
bool $tmp760 = $tmp759.value;
if ($tmp760) goto block162; else goto block164;
block162:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:96
frost$core$Weak** $tmp761 = &param3->owner;
frost$core$Weak* $tmp762 = *$tmp761;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from MethodRef.frost:96:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp763 = &$tmp762->_valid;
frost$core$Bit $tmp764 = *$tmp763;
bool $tmp765 = $tmp764.value;
if ($tmp765) goto block167; else goto block168;
block168:;
frost$core$Int $tmp766 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s767, $tmp766);
abort(); // unreachable
block167:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp768 = &$tmp762->value;
frost$core$Object* $tmp769 = *$tmp768;
frost$core$Frost$ref$frost$core$Object$Q($tmp769);
frost$core$String** $tmp770 = &((org$frostlang$frostc$ClassDecl*) $tmp769)->name;
frost$core$String* $tmp771 = *$tmp770;
frost$core$String* $tmp772 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp771, &$s773);
frost$core$String** $tmp774 = &((org$frostlang$frostc$Symbol*) param3)->name;
frost$core$String* $tmp775 = *$tmp774;
frost$core$String* $tmp776 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp772, $tmp775);
frost$core$String* $tmp777 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp776, &$s778);
*(&local56) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp777));
frost$core$String* $tmp779 = *(&local56);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp779));
*(&local56) = $tmp777;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp777));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp776));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp772));
frost$core$Frost$unref$frost$core$Object$Q($tmp769);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:97
FROST_ASSERT(56 == sizeof(frost$collections$HashMap));
frost$collections$HashMap* $tmp780 = (frost$collections$HashMap*) frostObjectAlloc(56, (frost$core$Class*) &frost$collections$HashMap$class);
frost$collections$HashMap$init($tmp780);
*(&local57) = ((frost$collections$HashMap*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp780));
frost$collections$HashMap* $tmp781 = *(&local57);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp781));
*(&local57) = $tmp780;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp780));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:98
frost$core$Int $tmp782 = (frost$core$Int) {0u};
ITable* $tmp783 = ((frost$collections$CollectionView*) param4)->$class->itable;
while ($tmp783->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp783 = $tmp783->next;
}
$fn785 $tmp784 = $tmp783->methods[0];
frost$core$Int $tmp786 = $tmp784(((frost$collections$CollectionView*) param4));
frost$core$Bit $tmp787 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp788 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp782, $tmp786, $tmp787);
frost$core$Int $tmp789 = $tmp788.min;
*(&local58) = $tmp789;
frost$core$Int $tmp790 = $tmp788.max;
frost$core$Bit $tmp791 = $tmp788.inclusive;
bool $tmp792 = $tmp791.value;
frost$core$Int $tmp793 = (frost$core$Int) {1u};
if ($tmp792) goto block172; else goto block173;
block172:;
int64_t $tmp794 = $tmp789.value;
int64_t $tmp795 = $tmp790.value;
bool $tmp796 = $tmp794 <= $tmp795;
frost$core$Bit $tmp797 = (frost$core$Bit) {$tmp796};
bool $tmp798 = $tmp797.value;
if ($tmp798) goto block169; else goto block170;
block173:;
int64_t $tmp799 = $tmp789.value;
int64_t $tmp800 = $tmp790.value;
bool $tmp801 = $tmp799 < $tmp800;
frost$core$Bit $tmp802 = (frost$core$Bit) {$tmp801};
bool $tmp803 = $tmp802.value;
if ($tmp803) goto block169; else goto block170;
block169:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:99
frost$collections$HashMap* $tmp804 = *(&local57);
frost$core$String* $tmp805 = *(&local56);
frost$collections$Array** $tmp806 = &param3->genericParameters;
frost$collections$Array* $tmp807 = *$tmp806;
frost$core$Int $tmp808 = *(&local58);
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from MethodRef.frost:99:53
frost$core$Int $tmp809 = (frost$core$Int) {0u};
int64_t $tmp810 = $tmp808.value;
int64_t $tmp811 = $tmp809.value;
bool $tmp812 = $tmp810 >= $tmp811;
frost$core$Bit $tmp813 = (frost$core$Bit) {$tmp812};
bool $tmp814 = $tmp813.value;
if ($tmp814) goto block177; else goto block176;
block177:;
ITable* $tmp815 = ((frost$collections$CollectionView*) $tmp807)->$class->itable;
while ($tmp815->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp815 = $tmp815->next;
}
$fn817 $tmp816 = $tmp815->methods[0];
frost$core$Int $tmp818 = $tmp816(((frost$collections$CollectionView*) $tmp807));
int64_t $tmp819 = $tmp808.value;
int64_t $tmp820 = $tmp818.value;
bool $tmp821 = $tmp819 < $tmp820;
frost$core$Bit $tmp822 = (frost$core$Bit) {$tmp821};
bool $tmp823 = $tmp822.value;
if ($tmp823) goto block175; else goto block176;
block176:;
frost$core$Int $tmp824 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s825, $tmp824, &$s826);
abort(); // unreachable
block175:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp827 = &$tmp807->data;
frost$core$Object** $tmp828 = *$tmp827;
frost$core$Int64 $tmp829 = frost$core$Int64$init$frost$core$Int($tmp808);
int64_t $tmp830 = $tmp829.value;
frost$core$Object* $tmp831 = $tmp828[$tmp830];
frost$core$Frost$ref$frost$core$Object$Q($tmp831);
frost$core$String** $tmp832 = &((org$frostlang$frostc$Symbol*) ((org$frostlang$frostc$MethodDecl$GenericParameter*) $tmp831))->name;
frost$core$String* $tmp833 = *$tmp832;
frost$core$String* $tmp834 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp805, $tmp833);
frost$core$Int $tmp835 = *(&local58);
ITable* $tmp836 = param4->$class->itable;
while ($tmp836->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp836 = $tmp836->next;
}
$fn838 $tmp837 = $tmp836->methods[0];
frost$core$Object* $tmp839 = $tmp837(param4, $tmp835);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp804, ((frost$collections$Key*) $tmp834), ((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp839)));
frost$core$Frost$unref$frost$core$Object$Q($tmp839);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp834));
frost$core$Frost$unref$frost$core$Object$Q($tmp831);
frost$core$Int $tmp840 = *(&local58);
int64_t $tmp841 = $tmp790.value;
int64_t $tmp842 = $tmp840.value;
int64_t $tmp843 = $tmp841 - $tmp842;
frost$core$Int $tmp844 = (frost$core$Int) {$tmp843};
if ($tmp792) goto block179; else goto block180;
block179:;
int64_t $tmp845 = $tmp844.value;
int64_t $tmp846 = $tmp793.value;
bool $tmp847 = $tmp845 >= $tmp846;
frost$core$Bit $tmp848 = (frost$core$Bit) {$tmp847};
bool $tmp849 = $tmp848.value;
if ($tmp849) goto block178; else goto block170;
block180:;
int64_t $tmp850 = $tmp844.value;
int64_t $tmp851 = $tmp793.value;
bool $tmp852 = $tmp850 > $tmp851;
frost$core$Bit $tmp853 = (frost$core$Bit) {$tmp852};
bool $tmp854 = $tmp853.value;
if ($tmp854) goto block178; else goto block170;
block178:;
int64_t $tmp855 = $tmp840.value;
int64_t $tmp856 = $tmp793.value;
int64_t $tmp857 = $tmp855 + $tmp856;
frost$core$Int $tmp858 = (frost$core$Int) {$tmp857};
*(&local58) = $tmp858;
goto block169;
block170:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:101
org$frostlang$frostc$Type* $tmp859 = *(&local55);
frost$collections$HashMap* $tmp860 = *(&local57);
org$frostlang$frostc$Type* $tmp861 = org$frostlang$frostc$Type$remap$org$frostlang$frostc$Compiler$frost$collections$HashMap$LTfrost$core$String$Corg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type($tmp859, param1, $tmp860);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp861));
org$frostlang$frostc$Type** $tmp862 = &param0->effectiveType;
org$frostlang$frostc$Type* $tmp863 = *$tmp862;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp863));
org$frostlang$frostc$Type** $tmp864 = &param0->effectiveType;
*$tmp864 = $tmp861;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp861));
frost$collections$HashMap* $tmp865 = *(&local57);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp865));
*(&local57) = ((frost$collections$HashMap*) NULL);
frost$core$String* $tmp866 = *(&local56);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp866));
*(&local56) = ((frost$core$String*) NULL);
goto block163;
block164:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:104
org$frostlang$frostc$Type* $tmp867 = *(&local55);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp867));
org$frostlang$frostc$Type** $tmp868 = &param0->effectiveType;
org$frostlang$frostc$Type* $tmp869 = *$tmp868;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp869));
org$frostlang$frostc$Type** $tmp870 = &param0->effectiveType;
*$tmp870 = $tmp867;
goto block163;
block163:;
org$frostlang$frostc$Type* $tmp871 = *(&local55);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp871));
*(&local55) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Pair* $tmp872 = *(&local39);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp872));
*(&local39) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$Type* $tmp873 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp873));
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp874 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp874));
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
org$frostlang$frostc$Type** $tmp875 = &param0->effectiveType;
org$frostlang$frostc$Type* $tmp876 = *$tmp875;
// begin inline call to function org.frostlang.frostc.Type.get_parameterCount():frost.core.Int from MethodRef.frost:109:29
org$frostlang$frostc$Type$Kind* $tmp877 = &$tmp876->typeKind;
org$frostlang$frostc$Type$Kind $tmp878 = *$tmp877;
org$frostlang$frostc$Type$Kind$wrapper* $tmp879;
$tmp879 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp879->value = $tmp878;
frost$core$Int $tmp880 = (frost$core$Int) {15u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:420:25
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp881 = &(&local1)->$rawValue;
*$tmp881 = $tmp880;
org$frostlang$frostc$Type$Kind $tmp882 = *(&local1);
*(&local0) = $tmp882;
org$frostlang$frostc$Type$Kind $tmp883 = *(&local0);
org$frostlang$frostc$Type$Kind$wrapper* $tmp884;
$tmp884 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp884->value = $tmp883;
ITable* $tmp885 = ((frost$core$Equatable*) $tmp879)->$class->itable;
while ($tmp885->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp885 = $tmp885->next;
}
$fn887 $tmp886 = $tmp885->methods[0];
frost$core$Bit $tmp888 = $tmp886(((frost$core$Equatable*) $tmp879), ((frost$core$Equatable*) $tmp884));
bool $tmp889 = $tmp888.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp884)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp879)));
if ($tmp889) goto block2; else goto block6;
block6:;
org$frostlang$frostc$Type$Kind* $tmp890 = &$tmp876->typeKind;
org$frostlang$frostc$Type$Kind $tmp891 = *$tmp890;
org$frostlang$frostc$Type$Kind$wrapper* $tmp892;
$tmp892 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp892->value = $tmp891;
frost$core$Int $tmp893 = (frost$core$Int) {16u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:420:52
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp894 = &(&local3)->$rawValue;
*$tmp894 = $tmp893;
org$frostlang$frostc$Type$Kind $tmp895 = *(&local3);
*(&local2) = $tmp895;
org$frostlang$frostc$Type$Kind $tmp896 = *(&local2);
org$frostlang$frostc$Type$Kind$wrapper* $tmp897;
$tmp897 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp897->value = $tmp896;
ITable* $tmp898 = ((frost$core$Equatable*) $tmp892)->$class->itable;
while ($tmp898->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp898 = $tmp898->next;
}
$fn900 $tmp899 = $tmp898->methods[0];
frost$core$Bit $tmp901 = $tmp899(((frost$core$Equatable*) $tmp892), ((frost$core$Equatable*) $tmp897));
bool $tmp902 = $tmp901.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp897)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp892)));
if ($tmp902) goto block2; else goto block5;
block5:;
org$frostlang$frostc$Type$Kind* $tmp903 = &$tmp876->typeKind;
org$frostlang$frostc$Type$Kind $tmp904 = *$tmp903;
org$frostlang$frostc$Type$Kind$wrapper* $tmp905;
$tmp905 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp905->value = $tmp904;
frost$core$Int $tmp906 = (frost$core$Int) {17u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:420:77
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp907 = &(&local5)->$rawValue;
*$tmp907 = $tmp906;
org$frostlang$frostc$Type$Kind $tmp908 = *(&local5);
*(&local4) = $tmp908;
org$frostlang$frostc$Type$Kind $tmp909 = *(&local4);
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
if ($tmp915) goto block2; else goto block4;
block4:;
org$frostlang$frostc$Type$Kind* $tmp916 = &$tmp876->typeKind;
org$frostlang$frostc$Type$Kind $tmp917 = *$tmp916;
org$frostlang$frostc$Type$Kind$wrapper* $tmp918;
$tmp918 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp918->value = $tmp917;
frost$core$Int $tmp919 = (frost$core$Int) {18u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:421:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp920 = &(&local7)->$rawValue;
*$tmp920 = $tmp919;
org$frostlang$frostc$Type$Kind $tmp921 = *(&local7);
*(&local6) = $tmp921;
org$frostlang$frostc$Type$Kind $tmp922 = *(&local6);
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
if ($tmp928) goto block2; else goto block3;
block3:;
frost$core$Int $tmp929 = (frost$core$Int) {422u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s930, $tmp929, &$s931);
abort(); // unreachable
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:423
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:423:16
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp932 = &$tmp876->_subtypes;
org$frostlang$frostc$FixedArray* $tmp933 = *$tmp932;
frost$core$Bit $tmp934 = (frost$core$Bit) {$tmp933 != NULL};
bool $tmp935 = $tmp934.value;
if ($tmp935) goto block12; else goto block13;
block13:;
frost$core$Int $tmp936 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s937, $tmp936);
abort(); // unreachable
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp938 = &$tmp876->_subtypes;
org$frostlang$frostc$FixedArray* $tmp939 = *$tmp938;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp939));
ITable* $tmp940 = ((frost$collections$CollectionView*) $tmp939)->$class->itable;
while ($tmp940->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp940 = $tmp940->next;
}
$fn942 $tmp941 = $tmp940->methods[0];
frost$core$Int $tmp943 = $tmp941(((frost$collections$CollectionView*) $tmp939));
frost$core$Int $tmp944 = (frost$core$Int) {1u};
int64_t $tmp945 = $tmp943.value;
int64_t $tmp946 = $tmp944.value;
int64_t $tmp947 = $tmp945 - $tmp946;
frost$core$Int $tmp948 = (frost$core$Int) {$tmp947};
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp939));
return $tmp948;

}
org$frostlang$frostc$Type* org$frostlang$frostc$MethodRef$parameterType$frost$core$Int$R$org$frostlang$frostc$Type(org$frostlang$frostc$MethodRef* param0, frost$core$Int param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:113
org$frostlang$frostc$Type** $tmp949 = &param0->effectiveType;
org$frostlang$frostc$Type* $tmp950 = *$tmp949;
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from MethodRef.frost:113:29
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp951 = &$tmp950->_subtypes;
org$frostlang$frostc$FixedArray* $tmp952 = *$tmp951;
frost$core$Bit $tmp953 = (frost$core$Bit) {$tmp952 != NULL};
bool $tmp954 = $tmp953.value;
if ($tmp954) goto block2; else goto block3;
block3:;
frost$core$Int $tmp955 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s956, $tmp955);
abort(); // unreachable
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp957 = &$tmp950->_subtypes;
org$frostlang$frostc$FixedArray* $tmp958 = *$tmp957;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp958));
frost$core$Object* $tmp959 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp958, param1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp959)));
frost$core$Frost$unref$frost$core$Object$Q($tmp959);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp958));
return ((org$frostlang$frostc$Type*) $tmp959);

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
org$frostlang$frostc$Type** $tmp960 = &param0->effectiveType;
org$frostlang$frostc$Type* $tmp961 = *$tmp960;
// begin inline call to function org.frostlang.frostc.Type.get_returnType():org.frostlang.frostc.Type from MethodRef.frost:117:29
org$frostlang$frostc$Type$Kind* $tmp962 = &$tmp961->typeKind;
org$frostlang$frostc$Type$Kind $tmp963 = *$tmp962;
org$frostlang$frostc$Type$Kind$wrapper* $tmp964;
$tmp964 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp964->value = $tmp963;
frost$core$Int $tmp965 = (frost$core$Int) {15u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:432:25
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp966 = &(&local1)->$rawValue;
*$tmp966 = $tmp965;
org$frostlang$frostc$Type$Kind $tmp967 = *(&local1);
*(&local0) = $tmp967;
org$frostlang$frostc$Type$Kind $tmp968 = *(&local0);
org$frostlang$frostc$Type$Kind$wrapper* $tmp969;
$tmp969 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp969->value = $tmp968;
ITable* $tmp970 = ((frost$core$Equatable*) $tmp964)->$class->itable;
while ($tmp970->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp970 = $tmp970->next;
}
$fn972 $tmp971 = $tmp970->methods[0];
frost$core$Bit $tmp973 = $tmp971(((frost$core$Equatable*) $tmp964), ((frost$core$Equatable*) $tmp969));
bool $tmp974 = $tmp973.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp969)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp964)));
if ($tmp974) goto block2; else goto block6;
block6:;
org$frostlang$frostc$Type$Kind* $tmp975 = &$tmp961->typeKind;
org$frostlang$frostc$Type$Kind $tmp976 = *$tmp975;
org$frostlang$frostc$Type$Kind$wrapper* $tmp977;
$tmp977 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp977->value = $tmp976;
frost$core$Int $tmp978 = (frost$core$Int) {16u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:432:52
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp979 = &(&local3)->$rawValue;
*$tmp979 = $tmp978;
org$frostlang$frostc$Type$Kind $tmp980 = *(&local3);
*(&local2) = $tmp980;
org$frostlang$frostc$Type$Kind $tmp981 = *(&local2);
org$frostlang$frostc$Type$Kind$wrapper* $tmp982;
$tmp982 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp982->value = $tmp981;
ITable* $tmp983 = ((frost$core$Equatable*) $tmp977)->$class->itable;
while ($tmp983->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp983 = $tmp983->next;
}
$fn985 $tmp984 = $tmp983->methods[0];
frost$core$Bit $tmp986 = $tmp984(((frost$core$Equatable*) $tmp977), ((frost$core$Equatable*) $tmp982));
bool $tmp987 = $tmp986.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp982)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp977)));
if ($tmp987) goto block2; else goto block5;
block5:;
org$frostlang$frostc$Type$Kind* $tmp988 = &$tmp961->typeKind;
org$frostlang$frostc$Type$Kind $tmp989 = *$tmp988;
org$frostlang$frostc$Type$Kind$wrapper* $tmp990;
$tmp990 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp990->value = $tmp989;
frost$core$Int $tmp991 = (frost$core$Int) {17u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:432:77
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp992 = &(&local5)->$rawValue;
*$tmp992 = $tmp991;
org$frostlang$frostc$Type$Kind $tmp993 = *(&local5);
*(&local4) = $tmp993;
org$frostlang$frostc$Type$Kind $tmp994 = *(&local4);
org$frostlang$frostc$Type$Kind$wrapper* $tmp995;
$tmp995 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp995->value = $tmp994;
ITable* $tmp996 = ((frost$core$Equatable*) $tmp990)->$class->itable;
while ($tmp996->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp996 = $tmp996->next;
}
$fn998 $tmp997 = $tmp996->methods[0];
frost$core$Bit $tmp999 = $tmp997(((frost$core$Equatable*) $tmp990), ((frost$core$Equatable*) $tmp995));
bool $tmp1000 = $tmp999.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp995)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp990)));
if ($tmp1000) goto block2; else goto block4;
block4:;
org$frostlang$frostc$Type$Kind* $tmp1001 = &$tmp961->typeKind;
org$frostlang$frostc$Type$Kind $tmp1002 = *$tmp1001;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1003;
$tmp1003 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1003->value = $tmp1002;
frost$core$Int $tmp1004 = (frost$core$Int) {18u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:433:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp1005 = &(&local7)->$rawValue;
*$tmp1005 = $tmp1004;
org$frostlang$frostc$Type$Kind $tmp1006 = *(&local7);
*(&local6) = $tmp1006;
org$frostlang$frostc$Type$Kind $tmp1007 = *(&local6);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1008;
$tmp1008 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1008->value = $tmp1007;
ITable* $tmp1009 = ((frost$core$Equatable*) $tmp1003)->$class->itable;
while ($tmp1009->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1009 = $tmp1009->next;
}
$fn1011 $tmp1010 = $tmp1009->methods[0];
frost$core$Bit $tmp1012 = $tmp1010(((frost$core$Equatable*) $tmp1003), ((frost$core$Equatable*) $tmp1008));
bool $tmp1013 = $tmp1012.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1008)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1003)));
if ($tmp1013) goto block2; else goto block3;
block3:;
frost$core$Int $tmp1014 = (frost$core$Int) {434u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1015, $tmp1014, &$s1016);
abort(); // unreachable
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:435
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:435:16
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp1017 = &$tmp961->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1018 = *$tmp1017;
frost$core$Bit $tmp1019 = (frost$core$Bit) {$tmp1018 != NULL};
bool $tmp1020 = $tmp1019.value;
if ($tmp1020) goto block12; else goto block13;
block13:;
frost$core$Int $tmp1021 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s1022, $tmp1021);
abort(); // unreachable
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp1023 = &$tmp961->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1024 = *$tmp1023;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1024));
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:435:25
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp1025 = &$tmp961->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1026 = *$tmp1025;
frost$core$Bit $tmp1027 = (frost$core$Bit) {$tmp1026 != NULL};
bool $tmp1028 = $tmp1027.value;
if ($tmp1028) goto block15; else goto block16;
block16:;
frost$core$Int $tmp1029 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s1030, $tmp1029);
abort(); // unreachable
block15:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp1031 = &$tmp961->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1032 = *$tmp1031;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1032));
ITable* $tmp1033 = ((frost$collections$CollectionView*) $tmp1032)->$class->itable;
while ($tmp1033->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1033 = $tmp1033->next;
}
$fn1035 $tmp1034 = $tmp1033->methods[0];
frost$core$Int $tmp1036 = $tmp1034(((frost$collections$CollectionView*) $tmp1032));
frost$core$Int $tmp1037 = (frost$core$Int) {1u};
int64_t $tmp1038 = $tmp1036.value;
int64_t $tmp1039 = $tmp1037.value;
int64_t $tmp1040 = $tmp1038 - $tmp1039;
frost$core$Int $tmp1041 = (frost$core$Int) {$tmp1040};
frost$core$Object* $tmp1042 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp1024, $tmp1041);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1042)));
frost$core$Frost$unref$frost$core$Object$Q($tmp1042);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1032));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1024));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1042)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1042)));
return ((org$frostlang$frostc$Type*) $tmp1042);

}
frost$core$String* org$frostlang$frostc$MethodRef$get_asString$R$frost$core$String(org$frostlang$frostc$MethodRef* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:122
org$frostlang$frostc$MethodDecl** $tmp1043 = &param0->value;
org$frostlang$frostc$MethodDecl* $tmp1044 = *$tmp1043;
frost$core$String* $tmp1045 = org$frostlang$frostc$MethodDecl$get_declaration$R$frost$core$String($tmp1044);
frost$core$String* $tmp1046 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1047, $tmp1045);
frost$core$String* $tmp1048 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1046, &$s1049);
org$frostlang$frostc$Type** $tmp1050 = &param0->effectiveType;
org$frostlang$frostc$Type* $tmp1051 = *$tmp1050;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from MethodRef.frost:122:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn1053 $tmp1052 = ($fn1053) ((frost$core$Object*) $tmp1051)->$class->vtable[0];
frost$core$String* $tmp1054 = $tmp1052(((frost$core$Object*) $tmp1051));
frost$core$String* $tmp1055 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1048, $tmp1054);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1055));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1055));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1054));
frost$core$String* $tmp1056 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1055, &$s1057);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1056));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1056));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1055));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1048));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1046));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1045));
return $tmp1056;

}
void org$frostlang$frostc$MethodRef$cleanup(org$frostlang$frostc$MethodRef* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:9
frost$core$Object$cleanup(((frost$core$Object*) param0));
org$frostlang$frostc$Type** $tmp1058 = &param0->target;
org$frostlang$frostc$Type* $tmp1059 = *$tmp1058;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1059));
org$frostlang$frostc$MethodDecl** $tmp1060 = &param0->value;
org$frostlang$frostc$MethodDecl* $tmp1061 = *$tmp1060;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1061));
org$frostlang$frostc$Type** $tmp1062 = &param0->effectiveType;
org$frostlang$frostc$Type* $tmp1063 = *$tmp1062;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1063));
return;

}

