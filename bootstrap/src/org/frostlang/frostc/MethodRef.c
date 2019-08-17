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
typedef frost$core$Int (*$fn145)(frost$collections$CollectionView*);
typedef frost$collections$ListView* (*$fn156)(frost$collections$ListView*, frost$core$Range$LTfrost$core$Int$GT);
typedef frost$core$Bit (*$fn199)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn212)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn225)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn238)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Object* (*$fn248)(frost$collections$ListView*);
typedef frost$core$Bit (*$fn271)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int (*$fn312)(frost$collections$CollectionView*);
typedef frost$collections$ListView* (*$fn323)(frost$collections$ListView*, frost$core$Range$LTfrost$core$Int$GT);
typedef frost$core$Bit (*$fn336)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn349)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn362)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn375)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Object* (*$fn385)(frost$collections$ListView*);
typedef frost$collections$Iterator* (*$fn396)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn400)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn405)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn451)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn464)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn477)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn490)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Object* (*$fn500)(frost$collections$ListView*);
typedef frost$core$Bit (*$fn521)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int (*$fn540)(frost$collections$CollectionView*);
typedef frost$collections$ListView* (*$fn551)(frost$collections$ListView*, frost$core$Range$LTfrost$core$Int$GT);
typedef frost$core$Bit (*$fn571)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int (*$fn599)(frost$collections$CollectionView*);
typedef frost$collections$ListView* (*$fn610)(frost$collections$ListView*, frost$core$Range$LTfrost$core$Int$GT);
typedef frost$core$Int (*$fn653)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn685)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn706)(frost$collections$ListView*, frost$core$Int);
typedef frost$core$Bit (*$fn755)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn768)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn781)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn794)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int (*$fn804)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn828)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn841)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn854)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn867)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Object* (*$fn877)(frost$collections$ListView*);
typedef frost$core$String* (*$fn889)(frost$core$Object*);

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
static frost$core$String $s125 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x43\x6c\x61\x73\x73", 16, -6222778858933417332, NULL };
static frost$core$String $s182 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x2e\x66\x72\x6f\x73\x74", 15, 1242067454507978657, NULL };
static frost$core$String $s242 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s243 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2e\x67\x65\x74\x5f\x72\x65\x74\x75\x72\x6e\x54\x79\x70\x65\x28\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 102, -8354441105231428072, NULL };
static frost$core$String $s298 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x2e\x66\x72\x6f\x73\x74", 15, 1242067454507978657, NULL };
static frost$core$String $s379 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s380 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2e\x67\x65\x74\x5f\x72\x65\x74\x75\x72\x6e\x54\x79\x70\x65\x28\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 102, -8354441105231428072, NULL };
static frost$core$String $s494 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s495 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2e\x67\x65\x74\x5f\x72\x65\x74\x75\x72\x6e\x54\x79\x70\x65\x28\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 102, -8354441105231428072, NULL };
static frost$core$String $s582 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4d\x61\x79\x62\x65", 16, -2055899992811416928, NULL };
static frost$core$String $s635 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s641 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e", 1, -5808619545316717647, NULL };
static frost$core$String $s646 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e", 1, -5808619545316717647, NULL };
static frost$core$String $s693 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s694 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s798 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s799 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2e\x67\x65\x74\x5f\x70\x61\x72\x61\x6d\x65\x74\x65\x72\x43\x6f\x75\x6e\x74\x28\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 95, -6421234203817919051, NULL };
static frost$core$String $s871 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s872 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2e\x67\x65\x74\x5f\x72\x65\x74\x75\x72\x6e\x54\x79\x70\x65\x28\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 102, -8354441105231428072, NULL };
static frost$core$String $s883 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x28", 10, -2809919968047225889, NULL };
static frost$core$String $s885 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s893 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };

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
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp119));
frost$core$Int $tmp120 = (frost$core$Int) {0u};
frost$core$Object* $tmp121 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp119, $tmp120);
frost$core$String** $tmp122 = &((org$frostlang$frostc$Symbol*) ((org$frostlang$frostc$Type*) $tmp121))->name;
frost$core$String* $tmp123 = *$tmp122;
frost$core$Bit $tmp124 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp123, &$s125);
frost$core$Frost$unref$frost$core$Object$Q($tmp121);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp119));
*(&local7) = $tmp124;
goto block31;
block30:;
*(&local7) = $tmp116;
goto block31;
block31:;
frost$core$Bit $tmp126 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp112)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp107)));
bool $tmp127 = $tmp126.value;
if ($tmp127) goto block18; else goto block20;
block18:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:45
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp128 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp128);
*(&local10) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp128));
frost$collections$Array* $tmp129 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp129));
*(&local10) = $tmp128;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp128));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:46
frost$collections$Array* $tmp130 = *(&local10);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from MethodRef.frost:46:38
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp131 = &param2->_subtypes;
org$frostlang$frostc$FixedArray* $tmp132 = *$tmp131;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp132));
frost$core$Int $tmp133 = (frost$core$Int) {1u};
frost$core$Object* $tmp134 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp132, $tmp133);
frost$collections$Array$add$frost$collections$Array$T($tmp130, ((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp134)));
frost$core$Frost$unref$frost$core$Object$Q($tmp134);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp132));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:47
frost$collections$Array* $tmp135 = *(&local10);
org$frostlang$frostc$Type* $tmp136 = *(&local4);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from MethodRef.frost:47:45
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp137 = &$tmp136->_subtypes;
org$frostlang$frostc$FixedArray* $tmp138 = *$tmp137;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp138));
frost$core$Int $tmp139 = (frost$core$Int) {0u};
org$frostlang$frostc$Type* $tmp140 = *(&local4);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from MethodRef.frost:47:70
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp141 = &$tmp140->_subtypes;
org$frostlang$frostc$FixedArray* $tmp142 = *$tmp141;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp142));
ITable* $tmp143 = ((frost$collections$CollectionView*) $tmp142)->$class->itable;
while ($tmp143->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp143 = $tmp143->next;
}
$fn145 $tmp144 = $tmp143->methods[0];
frost$core$Int $tmp146 = $tmp144(((frost$collections$CollectionView*) $tmp142));
frost$core$Int $tmp147 = (frost$core$Int) {1u};
int64_t $tmp148 = $tmp146.value;
int64_t $tmp149 = $tmp147.value;
int64_t $tmp150 = $tmp148 - $tmp149;
frost$core$Int $tmp151 = (frost$core$Int) {$tmp150};
frost$core$Bit $tmp152 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp153 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp139, $tmp151, $tmp152);
ITable* $tmp154 = ((frost$collections$ListView*) $tmp138)->$class->itable;
while ($tmp154->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp154 = $tmp154->next;
}
$fn156 $tmp155 = $tmp154->methods[1];
frost$collections$ListView* $tmp157 = $tmp155(((frost$collections$ListView*) $tmp138), $tmp153);
frost$collections$Array$addAll$frost$collections$CollectionView$LTfrost$collections$Array$T$GT($tmp135, ((frost$collections$CollectionView*) $tmp157));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp157));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp142));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp138));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:48
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:49
org$frostlang$frostc$MethodDecl$Kind* $tmp158 = &param3->methodKind;
org$frostlang$frostc$MethodDecl$Kind $tmp159 = *$tmp158;
frost$core$Int $tmp160 = $tmp159.$rawValue;
frost$core$Int $tmp161 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from MethodRef.frost:50:37
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp162 = $tmp160.value;
int64_t $tmp163 = $tmp161.value;
bool $tmp164 = $tmp162 == $tmp163;
frost$core$Bit $tmp165 = (frost$core$Bit) {$tmp164};
bool $tmp166 = $tmp165.value;
if ($tmp166) goto block37; else goto block38;
block37:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:51
frost$core$Int $tmp167 = (frost$core$Int) {18u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from MethodRef.frost:51:42
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp168 = &(&local13)->$rawValue;
*$tmp168 = $tmp167;
org$frostlang$frostc$Type$Kind $tmp169 = *(&local13);
*(&local12) = $tmp169;
org$frostlang$frostc$Type$Kind $tmp170 = *(&local12);
*(&local11) = $tmp170;
goto block36;
block38:;
frost$core$Int $tmp171 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from MethodRef.frost:53:37
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp172 = $tmp160.value;
int64_t $tmp173 = $tmp171.value;
bool $tmp174 = $tmp172 == $tmp173;
frost$core$Bit $tmp175 = (frost$core$Bit) {$tmp174};
bool $tmp176 = $tmp175.value;
if ($tmp176) goto block41; else goto block42;
block41:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:54
frost$core$Int $tmp177 = (frost$core$Int) {17u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from MethodRef.frost:54:42
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp178 = &(&local15)->$rawValue;
*$tmp178 = $tmp177;
org$frostlang$frostc$Type$Kind $tmp179 = *(&local15);
*(&local14) = $tmp179;
org$frostlang$frostc$Type$Kind $tmp180 = *(&local14);
*(&local11) = $tmp180;
goto block36;
block42:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:57
frost$core$Int $tmp181 = (frost$core$Int) {57u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s182, $tmp181);
abort(); // unreachable
block36:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:60
org$frostlang$frostc$Type* $tmp183 = *(&local4);
org$frostlang$frostc$Position* $tmp184 = &((org$frostlang$frostc$Symbol*) $tmp183)->position;
org$frostlang$frostc$Position $tmp185 = *$tmp184;
org$frostlang$frostc$Type$Kind $tmp186 = *(&local11);
frost$collections$Array* $tmp187 = *(&local10);
org$frostlang$frostc$Type* $tmp188 = *(&local4);
// begin inline call to function org.frostlang.frostc.Type.get_returnType():org.frostlang.frostc.Type from MethodRef.frost:61:31
org$frostlang$frostc$Type$Kind* $tmp189 = &$tmp188->typeKind;
org$frostlang$frostc$Type$Kind $tmp190 = *$tmp189;
org$frostlang$frostc$Type$Kind$wrapper* $tmp191;
$tmp191 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp191->value = $tmp190;
frost$core$Int $tmp192 = (frost$core$Int) {15u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:431:25
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp193 = &(&local17)->$rawValue;
*$tmp193 = $tmp192;
org$frostlang$frostc$Type$Kind $tmp194 = *(&local17);
*(&local16) = $tmp194;
org$frostlang$frostc$Type$Kind $tmp195 = *(&local16);
org$frostlang$frostc$Type$Kind$wrapper* $tmp196;
$tmp196 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp196->value = $tmp195;
ITable* $tmp197 = ((frost$core$Equatable*) $tmp191)->$class->itable;
while ($tmp197->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp197 = $tmp197->next;
}
$fn199 $tmp198 = $tmp197->methods[0];
frost$core$Bit $tmp200 = $tmp198(((frost$core$Equatable*) $tmp191), ((frost$core$Equatable*) $tmp196));
bool $tmp201 = $tmp200.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp196)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp191)));
if ($tmp201) goto block46; else goto block50;
block50:;
org$frostlang$frostc$Type$Kind* $tmp202 = &$tmp188->typeKind;
org$frostlang$frostc$Type$Kind $tmp203 = *$tmp202;
org$frostlang$frostc$Type$Kind$wrapper* $tmp204;
$tmp204 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp204->value = $tmp203;
frost$core$Int $tmp205 = (frost$core$Int) {16u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:431:52
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp206 = &(&local19)->$rawValue;
*$tmp206 = $tmp205;
org$frostlang$frostc$Type$Kind $tmp207 = *(&local19);
*(&local18) = $tmp207;
org$frostlang$frostc$Type$Kind $tmp208 = *(&local18);
org$frostlang$frostc$Type$Kind$wrapper* $tmp209;
$tmp209 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp209->value = $tmp208;
ITable* $tmp210 = ((frost$core$Equatable*) $tmp204)->$class->itable;
while ($tmp210->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp210 = $tmp210->next;
}
$fn212 $tmp211 = $tmp210->methods[0];
frost$core$Bit $tmp213 = $tmp211(((frost$core$Equatable*) $tmp204), ((frost$core$Equatable*) $tmp209));
bool $tmp214 = $tmp213.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp209)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp204)));
if ($tmp214) goto block46; else goto block49;
block49:;
org$frostlang$frostc$Type$Kind* $tmp215 = &$tmp188->typeKind;
org$frostlang$frostc$Type$Kind $tmp216 = *$tmp215;
org$frostlang$frostc$Type$Kind$wrapper* $tmp217;
$tmp217 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp217->value = $tmp216;
frost$core$Int $tmp218 = (frost$core$Int) {17u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:431:77
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp219 = &(&local21)->$rawValue;
*$tmp219 = $tmp218;
org$frostlang$frostc$Type$Kind $tmp220 = *(&local21);
*(&local20) = $tmp220;
org$frostlang$frostc$Type$Kind $tmp221 = *(&local20);
org$frostlang$frostc$Type$Kind$wrapper* $tmp222;
$tmp222 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp222->value = $tmp221;
ITable* $tmp223 = ((frost$core$Equatable*) $tmp217)->$class->itable;
while ($tmp223->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp223 = $tmp223->next;
}
$fn225 $tmp224 = $tmp223->methods[0];
frost$core$Bit $tmp226 = $tmp224(((frost$core$Equatable*) $tmp217), ((frost$core$Equatable*) $tmp222));
bool $tmp227 = $tmp226.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp222)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp217)));
if ($tmp227) goto block46; else goto block48;
block48:;
org$frostlang$frostc$Type$Kind* $tmp228 = &$tmp188->typeKind;
org$frostlang$frostc$Type$Kind $tmp229 = *$tmp228;
org$frostlang$frostc$Type$Kind$wrapper* $tmp230;
$tmp230 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp230->value = $tmp229;
frost$core$Int $tmp231 = (frost$core$Int) {18u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:432:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp232 = &(&local23)->$rawValue;
*$tmp232 = $tmp231;
org$frostlang$frostc$Type$Kind $tmp233 = *(&local23);
*(&local22) = $tmp233;
org$frostlang$frostc$Type$Kind $tmp234 = *(&local22);
org$frostlang$frostc$Type$Kind$wrapper* $tmp235;
$tmp235 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp235->value = $tmp234;
ITable* $tmp236 = ((frost$core$Equatable*) $tmp230)->$class->itable;
while ($tmp236->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp236 = $tmp236->next;
}
$fn238 $tmp237 = $tmp236->methods[0];
frost$core$Bit $tmp239 = $tmp237(((frost$core$Equatable*) $tmp230), ((frost$core$Equatable*) $tmp235));
bool $tmp240 = $tmp239.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp235)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp230)));
if ($tmp240) goto block46; else goto block47;
block47:;
frost$core$Int $tmp241 = (frost$core$Int) {433u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s242, $tmp241, &$s243);
abort(); // unreachable
block46:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:434
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:434:16
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp244 = &$tmp188->_subtypes;
org$frostlang$frostc$FixedArray* $tmp245 = *$tmp244;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp245));
ITable* $tmp246 = ((frost$collections$ListView*) $tmp245)->$class->itable;
while ($tmp246->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp246 = $tmp246->next;
}
$fn248 $tmp247 = $tmp246->methods[5];
frost$core$Object* $tmp249 = $tmp247(((frost$collections$ListView*) $tmp245));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp249)));
frost$core$Frost$unref$frost$core$Object$Q($tmp249);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp245));
org$frostlang$frostc$Type* $tmp250 = *(&local4);
frost$core$Int* $tmp251 = &$tmp250->priority;
frost$core$Int $tmp252 = *$tmp251;
org$frostlang$frostc$Type* $tmp253 = org$frostlang$frostc$Type$methodType$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$Type$Kind$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$org$frostlang$frostc$Type$frost$core$Int$R$org$frostlang$frostc$Type(param1, $tmp185, $tmp186, ((frost$collections$ListView*) $tmp187), ((org$frostlang$frostc$Type*) $tmp249), $tmp252);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp253));
org$frostlang$frostc$Type* $tmp254 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp254));
*(&local4) = $tmp253;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp253));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp249)));
frost$collections$Array* $tmp255 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp255));
*(&local10) = ((frost$collections$Array*) NULL);
goto block19;
block20:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:63
frost$core$Bit $tmp256 = org$frostlang$frostc$Compiler$isImmutable$org$frostlang$frostc$Type$R$frost$core$Bit(param1, param2);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from MethodRef.frost:63:17
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp257 = $tmp256.value;
bool $tmp258 = !$tmp257;
frost$core$Bit $tmp259 = (frost$core$Bit) {$tmp258};
bool $tmp260 = $tmp259.value;
if ($tmp260) goto block58; else goto block57;
block58:;
org$frostlang$frostc$MethodDecl$Kind* $tmp261 = &param3->methodKind;
org$frostlang$frostc$MethodDecl$Kind $tmp262 = *$tmp261;
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp263;
$tmp263 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp263->value = $tmp262;
frost$core$Int $tmp264 = (frost$core$Int) {2u};
// begin inline call to org.frostlang.frostc.MethodDecl.Kind.init(rv:frost.core.Int):org.frostlang.frostc.MethodDecl.Kind from MethodRef.frost:63:84
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:7
frost$core$Int* $tmp265 = &(&local25)->$rawValue;
*$tmp265 = $tmp264;
org$frostlang$frostc$MethodDecl$Kind $tmp266 = *(&local25);
*(&local24) = $tmp266;
org$frostlang$frostc$MethodDecl$Kind $tmp267 = *(&local24);
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp268;
$tmp268 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp268->value = $tmp267;
ITable* $tmp269 = ((frost$core$Equatable*) $tmp263)->$class->itable;
while ($tmp269->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp269 = $tmp269->next;
}
$fn271 $tmp270 = $tmp269->methods[1];
frost$core$Bit $tmp272 = $tmp270(((frost$core$Equatable*) $tmp263), ((frost$core$Equatable*) $tmp268));
bool $tmp273 = $tmp272.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp268)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp263)));
if ($tmp273) goto block56; else goto block57;
block56:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:64
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:65
org$frostlang$frostc$MethodDecl$Kind* $tmp274 = &param3->methodKind;
org$frostlang$frostc$MethodDecl$Kind $tmp275 = *$tmp274;
frost$core$Int $tmp276 = $tmp275.$rawValue;
frost$core$Int $tmp277 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from MethodRef.frost:66:37
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp278 = $tmp276.value;
int64_t $tmp279 = $tmp277.value;
bool $tmp280 = $tmp278 == $tmp279;
frost$core$Bit $tmp281 = (frost$core$Bit) {$tmp280};
bool $tmp282 = $tmp281.value;
if ($tmp282) goto block62; else goto block63;
block62:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:67
frost$core$Int $tmp283 = (frost$core$Int) {16u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from MethodRef.frost:67:42
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp284 = &(&local28)->$rawValue;
*$tmp284 = $tmp283;
org$frostlang$frostc$Type$Kind $tmp285 = *(&local28);
*(&local27) = $tmp285;
org$frostlang$frostc$Type$Kind $tmp286 = *(&local27);
*(&local26) = $tmp286;
goto block61;
block63:;
frost$core$Int $tmp287 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from MethodRef.frost:69:37
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp288 = $tmp276.value;
int64_t $tmp289 = $tmp287.value;
bool $tmp290 = $tmp288 == $tmp289;
frost$core$Bit $tmp291 = (frost$core$Bit) {$tmp290};
bool $tmp292 = $tmp291.value;
if ($tmp292) goto block66; else goto block67;
block66:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:70
frost$core$Int $tmp293 = (frost$core$Int) {15u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from MethodRef.frost:70:42
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp294 = &(&local30)->$rawValue;
*$tmp294 = $tmp293;
org$frostlang$frostc$Type$Kind $tmp295 = *(&local30);
*(&local29) = $tmp295;
org$frostlang$frostc$Type$Kind $tmp296 = *(&local29);
*(&local26) = $tmp296;
goto block61;
block67:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:73
frost$core$Int $tmp297 = (frost$core$Int) {73u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s298, $tmp297);
abort(); // unreachable
block61:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:76
org$frostlang$frostc$Type* $tmp299 = *(&local4);
org$frostlang$frostc$Position* $tmp300 = &((org$frostlang$frostc$Symbol*) $tmp299)->position;
org$frostlang$frostc$Position $tmp301 = *$tmp300;
org$frostlang$frostc$Type$Kind $tmp302 = *(&local26);
org$frostlang$frostc$Type* $tmp303 = *(&local4);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from MethodRef.frost:77:31
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp304 = &$tmp303->_subtypes;
org$frostlang$frostc$FixedArray* $tmp305 = *$tmp304;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp305));
frost$core$Int $tmp306 = (frost$core$Int) {0u};
org$frostlang$frostc$Type* $tmp307 = *(&local4);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from MethodRef.frost:77:56
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp308 = &$tmp307->_subtypes;
org$frostlang$frostc$FixedArray* $tmp309 = *$tmp308;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp309));
ITable* $tmp310 = ((frost$collections$CollectionView*) $tmp309)->$class->itable;
while ($tmp310->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp310 = $tmp310->next;
}
$fn312 $tmp311 = $tmp310->methods[0];
frost$core$Int $tmp313 = $tmp311(((frost$collections$CollectionView*) $tmp309));
frost$core$Int $tmp314 = (frost$core$Int) {1u};
int64_t $tmp315 = $tmp313.value;
int64_t $tmp316 = $tmp314.value;
int64_t $tmp317 = $tmp315 - $tmp316;
frost$core$Int $tmp318 = (frost$core$Int) {$tmp317};
frost$core$Bit $tmp319 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp320 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp306, $tmp318, $tmp319);
ITable* $tmp321 = ((frost$collections$ListView*) $tmp305)->$class->itable;
while ($tmp321->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp321 = $tmp321->next;
}
$fn323 $tmp322 = $tmp321->methods[1];
frost$collections$ListView* $tmp324 = $tmp322(((frost$collections$ListView*) $tmp305), $tmp320);
org$frostlang$frostc$Type* $tmp325 = *(&local4);
// begin inline call to function org.frostlang.frostc.Type.get_returnType():org.frostlang.frostc.Type from MethodRef.frost:78:31
org$frostlang$frostc$Type$Kind* $tmp326 = &$tmp325->typeKind;
org$frostlang$frostc$Type$Kind $tmp327 = *$tmp326;
org$frostlang$frostc$Type$Kind$wrapper* $tmp328;
$tmp328 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp328->value = $tmp327;
frost$core$Int $tmp329 = (frost$core$Int) {15u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:431:25
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp330 = &(&local32)->$rawValue;
*$tmp330 = $tmp329;
org$frostlang$frostc$Type$Kind $tmp331 = *(&local32);
*(&local31) = $tmp331;
org$frostlang$frostc$Type$Kind $tmp332 = *(&local31);
org$frostlang$frostc$Type$Kind$wrapper* $tmp333;
$tmp333 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp333->value = $tmp332;
ITable* $tmp334 = ((frost$core$Equatable*) $tmp328)->$class->itable;
while ($tmp334->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp334 = $tmp334->next;
}
$fn336 $tmp335 = $tmp334->methods[0];
frost$core$Bit $tmp337 = $tmp335(((frost$core$Equatable*) $tmp328), ((frost$core$Equatable*) $tmp333));
bool $tmp338 = $tmp337.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp333)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp328)));
if ($tmp338) goto block73; else goto block77;
block77:;
org$frostlang$frostc$Type$Kind* $tmp339 = &$tmp325->typeKind;
org$frostlang$frostc$Type$Kind $tmp340 = *$tmp339;
org$frostlang$frostc$Type$Kind$wrapper* $tmp341;
$tmp341 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp341->value = $tmp340;
frost$core$Int $tmp342 = (frost$core$Int) {16u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:431:52
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp343 = &(&local34)->$rawValue;
*$tmp343 = $tmp342;
org$frostlang$frostc$Type$Kind $tmp344 = *(&local34);
*(&local33) = $tmp344;
org$frostlang$frostc$Type$Kind $tmp345 = *(&local33);
org$frostlang$frostc$Type$Kind$wrapper* $tmp346;
$tmp346 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp346->value = $tmp345;
ITable* $tmp347 = ((frost$core$Equatable*) $tmp341)->$class->itable;
while ($tmp347->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp347 = $tmp347->next;
}
$fn349 $tmp348 = $tmp347->methods[0];
frost$core$Bit $tmp350 = $tmp348(((frost$core$Equatable*) $tmp341), ((frost$core$Equatable*) $tmp346));
bool $tmp351 = $tmp350.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp346)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp341)));
if ($tmp351) goto block73; else goto block76;
block76:;
org$frostlang$frostc$Type$Kind* $tmp352 = &$tmp325->typeKind;
org$frostlang$frostc$Type$Kind $tmp353 = *$tmp352;
org$frostlang$frostc$Type$Kind$wrapper* $tmp354;
$tmp354 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp354->value = $tmp353;
frost$core$Int $tmp355 = (frost$core$Int) {17u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:431:77
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp356 = &(&local36)->$rawValue;
*$tmp356 = $tmp355;
org$frostlang$frostc$Type$Kind $tmp357 = *(&local36);
*(&local35) = $tmp357;
org$frostlang$frostc$Type$Kind $tmp358 = *(&local35);
org$frostlang$frostc$Type$Kind$wrapper* $tmp359;
$tmp359 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp359->value = $tmp358;
ITable* $tmp360 = ((frost$core$Equatable*) $tmp354)->$class->itable;
while ($tmp360->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp360 = $tmp360->next;
}
$fn362 $tmp361 = $tmp360->methods[0];
frost$core$Bit $tmp363 = $tmp361(((frost$core$Equatable*) $tmp354), ((frost$core$Equatable*) $tmp359));
bool $tmp364 = $tmp363.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp359)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp354)));
if ($tmp364) goto block73; else goto block75;
block75:;
org$frostlang$frostc$Type$Kind* $tmp365 = &$tmp325->typeKind;
org$frostlang$frostc$Type$Kind $tmp366 = *$tmp365;
org$frostlang$frostc$Type$Kind$wrapper* $tmp367;
$tmp367 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp367->value = $tmp366;
frost$core$Int $tmp368 = (frost$core$Int) {18u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:432:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp369 = &(&local38)->$rawValue;
*$tmp369 = $tmp368;
org$frostlang$frostc$Type$Kind $tmp370 = *(&local38);
*(&local37) = $tmp370;
org$frostlang$frostc$Type$Kind $tmp371 = *(&local37);
org$frostlang$frostc$Type$Kind$wrapper* $tmp372;
$tmp372 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp372->value = $tmp371;
ITable* $tmp373 = ((frost$core$Equatable*) $tmp367)->$class->itable;
while ($tmp373->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp373 = $tmp373->next;
}
$fn375 $tmp374 = $tmp373->methods[0];
frost$core$Bit $tmp376 = $tmp374(((frost$core$Equatable*) $tmp367), ((frost$core$Equatable*) $tmp372));
bool $tmp377 = $tmp376.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp372)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp367)));
if ($tmp377) goto block73; else goto block74;
block74:;
frost$core$Int $tmp378 = (frost$core$Int) {433u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s379, $tmp378, &$s380);
abort(); // unreachable
block73:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:434
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:434:16
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp381 = &$tmp325->_subtypes;
org$frostlang$frostc$FixedArray* $tmp382 = *$tmp381;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp382));
ITable* $tmp383 = ((frost$collections$ListView*) $tmp382)->$class->itable;
while ($tmp383->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp383 = $tmp383->next;
}
$fn385 $tmp384 = $tmp383->methods[5];
frost$core$Object* $tmp386 = $tmp384(((frost$collections$ListView*) $tmp382));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp386)));
frost$core$Frost$unref$frost$core$Object$Q($tmp386);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp382));
org$frostlang$frostc$Type* $tmp387 = *(&local4);
frost$core$Int* $tmp388 = &$tmp387->priority;
frost$core$Int $tmp389 = *$tmp388;
org$frostlang$frostc$Type* $tmp390 = org$frostlang$frostc$Type$methodType$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$Type$Kind$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$org$frostlang$frostc$Type$frost$core$Int$R$org$frostlang$frostc$Type(param1, $tmp301, $tmp302, $tmp324, ((org$frostlang$frostc$Type*) $tmp386), $tmp389);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp390));
org$frostlang$frostc$Type* $tmp391 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp391));
*(&local4) = $tmp390;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp390));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp386)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp324));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp309));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp305));
goto block57;
block57:;
goto block19;
block19:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:80
// begin inline call to function org.frostlang.frostc.Compiler.getTryScope():org.frostlang.frostc.Pair<org.frostlang.frostc.IR.Block.ID?, org.frostlang.frostc.Variable?>? from MethodRef.frost:80:32
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5170
frost$collections$Stack** $tmp392 = &param1->enclosingContexts;
frost$collections$Stack* $tmp393 = *$tmp392;
ITable* $tmp394 = ((frost$collections$Iterable*) $tmp393)->$class->itable;
while ($tmp394->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp394 = $tmp394->next;
}
$fn396 $tmp395 = $tmp394->methods[0];
frost$collections$Iterator* $tmp397 = $tmp395(((frost$collections$Iterable*) $tmp393));
goto block86;
block86:;
ITable* $tmp398 = $tmp397->$class->itable;
while ($tmp398->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp398 = $tmp398->next;
}
$fn400 $tmp399 = $tmp398->methods[0];
frost$core$Bit $tmp401 = $tmp399($tmp397);
bool $tmp402 = $tmp401.value;
if ($tmp402) goto block88; else goto block87;
block87:;
*(&local40) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
ITable* $tmp403 = $tmp397->$class->itable;
while ($tmp403->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp403 = $tmp403->next;
}
$fn405 $tmp404 = $tmp403->methods[1];
frost$core$Object* $tmp406 = $tmp404($tmp397);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Compiler$EnclosingContext*) $tmp406)));
org$frostlang$frostc$Compiler$EnclosingContext* $tmp407 = *(&local40);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp407));
*(&local40) = ((org$frostlang$frostc$Compiler$EnclosingContext*) $tmp406);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5171
org$frostlang$frostc$Compiler$EnclosingContext* $tmp408 = *(&local40);
frost$core$Int* $tmp409 = &$tmp408->$rawValue;
frost$core$Int $tmp410 = *$tmp409;
frost$core$Int $tmp411 = (frost$core$Int) {5u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Compiler.frost:5172:38
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp412 = $tmp410.value;
int64_t $tmp413 = $tmp411.value;
bool $tmp414 = $tmp412 == $tmp413;
frost$core$Bit $tmp415 = (frost$core$Bit) {$tmp414};
bool $tmp416 = $tmp415.value;
if ($tmp416) goto block90; else goto block91;
block90:;
org$frostlang$frostc$IR$Block$ID$nullable* $tmp417 = (org$frostlang$frostc$IR$Block$ID$nullable*) ($tmp408->$data + 0);
org$frostlang$frostc$IR$Block$ID$nullable $tmp418 = *$tmp417;
*(&local41) = $tmp418;
org$frostlang$frostc$Variable** $tmp419 = (org$frostlang$frostc$Variable**) ($tmp408->$data + 9);
org$frostlang$frostc$Variable* $tmp420 = *$tmp419;
*(&local42) = ((org$frostlang$frostc$Variable*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp420));
org$frostlang$frostc$Variable* $tmp421 = *(&local42);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp421));
*(&local42) = $tmp420;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5173
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Pair));
org$frostlang$frostc$Pair* $tmp422 = (org$frostlang$frostc$Pair*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Pair$class);
org$frostlang$frostc$IR$Block$ID$nullable $tmp423 = *(&local41);
frost$core$Object* $tmp424;
if ($tmp423.nonnull) {
    org$frostlang$frostc$IR$Block$ID$wrapper* $tmp425;
    $tmp425 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
    $tmp425->value = ((org$frostlang$frostc$IR$Block$ID) $tmp423.value);
    $tmp424 = ((frost$core$Object*) $tmp425);
}
else {
    $tmp424 = NULL;
}
org$frostlang$frostc$Variable* $tmp426 = *(&local42);
org$frostlang$frostc$Pair$init$org$frostlang$frostc$Pair$A$org$frostlang$frostc$Pair$B($tmp422, $tmp424, ((frost$core$Object*) $tmp426));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp422));
frost$core$Frost$unref$frost$core$Object$Q($tmp424);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp422));
org$frostlang$frostc$Variable* $tmp427 = *(&local42);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp427));
*(&local42) = ((org$frostlang$frostc$Variable*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp406);
org$frostlang$frostc$Compiler$EnclosingContext* $tmp428 = *(&local40);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp428));
*(&local40) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp397));
*(&local39) = $tmp422;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp422));
goto block85;
block91:;
frost$core$Int $tmp429 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Compiler.frost:5175:38
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp430 = $tmp410.value;
int64_t $tmp431 = $tmp429.value;
bool $tmp432 = $tmp430 == $tmp431;
frost$core$Bit $tmp433 = (frost$core$Bit) {$tmp432};
bool $tmp434 = $tmp433.value;
if ($tmp434) goto block93; else goto block89;
block93:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5176
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Pair*) NULL)));
frost$core$Frost$unref$frost$core$Object$Q($tmp406);
org$frostlang$frostc$Compiler$EnclosingContext* $tmp435 = *(&local40);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp435));
*(&local40) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp397));
*(&local39) = ((org$frostlang$frostc$Pair*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Pair*) NULL)));
goto block85;
block89:;
frost$core$Frost$unref$frost$core$Object$Q($tmp406);
org$frostlang$frostc$Compiler$EnclosingContext* $tmp436 = *(&local40);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp436));
*(&local40) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
goto block86;
block88:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp397));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5180
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Pair*) NULL)));
*(&local39) = ((org$frostlang$frostc$Pair*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Pair*) NULL)));
goto block85;
block85:;
org$frostlang$frostc$Pair* $tmp437 = *(&local39);
frost$core$Bit $tmp438 = (frost$core$Bit) {$tmp437 != NULL};
bool $tmp439 = $tmp438.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp437));
if ($tmp439) goto block83; else goto block84;
block83:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:81
org$frostlang$frostc$Type* $tmp440 = *(&local4);
// begin inline call to function org.frostlang.frostc.Type.get_returnType():org.frostlang.frostc.Type from MethodRef.frost:81:41
org$frostlang$frostc$Type$Kind* $tmp441 = &$tmp440->typeKind;
org$frostlang$frostc$Type$Kind $tmp442 = *$tmp441;
org$frostlang$frostc$Type$Kind$wrapper* $tmp443;
$tmp443 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp443->value = $tmp442;
frost$core$Int $tmp444 = (frost$core$Int) {15u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:431:25
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp445 = &(&local44)->$rawValue;
*$tmp445 = $tmp444;
org$frostlang$frostc$Type$Kind $tmp446 = *(&local44);
*(&local43) = $tmp446;
org$frostlang$frostc$Type$Kind $tmp447 = *(&local43);
org$frostlang$frostc$Type$Kind$wrapper* $tmp448;
$tmp448 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp448->value = $tmp447;
ITable* $tmp449 = ((frost$core$Equatable*) $tmp443)->$class->itable;
while ($tmp449->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp449 = $tmp449->next;
}
$fn451 $tmp450 = $tmp449->methods[0];
frost$core$Bit $tmp452 = $tmp450(((frost$core$Equatable*) $tmp443), ((frost$core$Equatable*) $tmp448));
bool $tmp453 = $tmp452.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp448)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp443)));
if ($tmp453) goto block96; else goto block100;
block100:;
org$frostlang$frostc$Type$Kind* $tmp454 = &$tmp440->typeKind;
org$frostlang$frostc$Type$Kind $tmp455 = *$tmp454;
org$frostlang$frostc$Type$Kind$wrapper* $tmp456;
$tmp456 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp456->value = $tmp455;
frost$core$Int $tmp457 = (frost$core$Int) {16u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:431:52
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp458 = &(&local46)->$rawValue;
*$tmp458 = $tmp457;
org$frostlang$frostc$Type$Kind $tmp459 = *(&local46);
*(&local45) = $tmp459;
org$frostlang$frostc$Type$Kind $tmp460 = *(&local45);
org$frostlang$frostc$Type$Kind$wrapper* $tmp461;
$tmp461 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp461->value = $tmp460;
ITable* $tmp462 = ((frost$core$Equatable*) $tmp456)->$class->itable;
while ($tmp462->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp462 = $tmp462->next;
}
$fn464 $tmp463 = $tmp462->methods[0];
frost$core$Bit $tmp465 = $tmp463(((frost$core$Equatable*) $tmp456), ((frost$core$Equatable*) $tmp461));
bool $tmp466 = $tmp465.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp461)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp456)));
if ($tmp466) goto block96; else goto block99;
block99:;
org$frostlang$frostc$Type$Kind* $tmp467 = &$tmp440->typeKind;
org$frostlang$frostc$Type$Kind $tmp468 = *$tmp467;
org$frostlang$frostc$Type$Kind$wrapper* $tmp469;
$tmp469 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp469->value = $tmp468;
frost$core$Int $tmp470 = (frost$core$Int) {17u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:431:77
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp471 = &(&local48)->$rawValue;
*$tmp471 = $tmp470;
org$frostlang$frostc$Type$Kind $tmp472 = *(&local48);
*(&local47) = $tmp472;
org$frostlang$frostc$Type$Kind $tmp473 = *(&local47);
org$frostlang$frostc$Type$Kind$wrapper* $tmp474;
$tmp474 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp474->value = $tmp473;
ITable* $tmp475 = ((frost$core$Equatable*) $tmp469)->$class->itable;
while ($tmp475->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp475 = $tmp475->next;
}
$fn477 $tmp476 = $tmp475->methods[0];
frost$core$Bit $tmp478 = $tmp476(((frost$core$Equatable*) $tmp469), ((frost$core$Equatable*) $tmp474));
bool $tmp479 = $tmp478.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp474)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp469)));
if ($tmp479) goto block96; else goto block98;
block98:;
org$frostlang$frostc$Type$Kind* $tmp480 = &$tmp440->typeKind;
org$frostlang$frostc$Type$Kind $tmp481 = *$tmp480;
org$frostlang$frostc$Type$Kind$wrapper* $tmp482;
$tmp482 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp482->value = $tmp481;
frost$core$Int $tmp483 = (frost$core$Int) {18u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:432:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp484 = &(&local50)->$rawValue;
*$tmp484 = $tmp483;
org$frostlang$frostc$Type$Kind $tmp485 = *(&local50);
*(&local49) = $tmp485;
org$frostlang$frostc$Type$Kind $tmp486 = *(&local49);
org$frostlang$frostc$Type$Kind$wrapper* $tmp487;
$tmp487 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp487->value = $tmp486;
ITable* $tmp488 = ((frost$core$Equatable*) $tmp482)->$class->itable;
while ($tmp488->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp488 = $tmp488->next;
}
$fn490 $tmp489 = $tmp488->methods[0];
frost$core$Bit $tmp491 = $tmp489(((frost$core$Equatable*) $tmp482), ((frost$core$Equatable*) $tmp487));
bool $tmp492 = $tmp491.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp487)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp482)));
if ($tmp492) goto block96; else goto block97;
block97:;
frost$core$Int $tmp493 = (frost$core$Int) {433u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s494, $tmp493, &$s495);
abort(); // unreachable
block96:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:434
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:434:16
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp496 = &$tmp440->_subtypes;
org$frostlang$frostc$FixedArray* $tmp497 = *$tmp496;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp497));
ITable* $tmp498 = ((frost$collections$ListView*) $tmp497)->$class->itable;
while ($tmp498->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp498 = $tmp498->next;
}
$fn500 $tmp499 = $tmp498->methods[5];
frost$core$Object* $tmp501 = $tmp499(((frost$collections$ListView*) $tmp497));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp501)));
frost$core$Frost$unref$frost$core$Object$Q($tmp501);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp497));
*(&local51) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp501)));
org$frostlang$frostc$Type* $tmp502 = *(&local51);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp502));
*(&local51) = ((org$frostlang$frostc$Type*) $tmp501);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp501)));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:82
org$frostlang$frostc$Type* $tmp503 = *(&local51);
org$frostlang$frostc$Type** $tmp504 = &param1->ERROR_TYPE;
org$frostlang$frostc$Type* $tmp505 = *$tmp504;
org$frostlang$frostc$Type* $tmp506 = org$frostlang$frostc$Type$nullable$R$org$frostlang$frostc$Type($tmp505);
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from MethodRef.frost:82:27
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:252
frost$core$String** $tmp507 = &((org$frostlang$frostc$Symbol*) $tmp503)->name;
frost$core$String* $tmp508 = *$tmp507;
frost$core$String** $tmp509 = &((org$frostlang$frostc$Symbol*) $tmp506)->name;
frost$core$String* $tmp510 = *$tmp509;
frost$core$Bit $tmp511 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp508, $tmp510);
bool $tmp512 = $tmp511.value;
if ($tmp512) goto block110; else goto block111;
block110:;
org$frostlang$frostc$Type$Kind* $tmp513 = &$tmp503->typeKind;
org$frostlang$frostc$Type$Kind $tmp514 = *$tmp513;
org$frostlang$frostc$Type$Kind$wrapper* $tmp515;
$tmp515 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp515->value = $tmp514;
org$frostlang$frostc$Type$Kind* $tmp516 = &$tmp506->typeKind;
org$frostlang$frostc$Type$Kind $tmp517 = *$tmp516;
org$frostlang$frostc$Type$Kind$wrapper* $tmp518;
$tmp518 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp518->value = $tmp517;
ITable* $tmp519 = ((frost$core$Equatable*) $tmp515)->$class->itable;
while ($tmp519->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp519 = $tmp519->next;
}
$fn521 $tmp520 = $tmp519->methods[0];
frost$core$Bit $tmp522 = $tmp520(((frost$core$Equatable*) $tmp515), ((frost$core$Equatable*) $tmp518));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp518)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp515)));
*(&local52) = $tmp522;
goto block112;
block111:;
*(&local52) = $tmp511;
goto block112;
block112:;
frost$core$Bit $tmp523 = *(&local52);
bool $tmp524 = $tmp523.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp506));
if ($tmp524) goto block106; else goto block108;
block106:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:83
org$frostlang$frostc$Type* $tmp525 = *(&local4);
org$frostlang$frostc$Position* $tmp526 = &((org$frostlang$frostc$Symbol*) $tmp525)->position;
org$frostlang$frostc$Position $tmp527 = *$tmp526;
org$frostlang$frostc$Type* $tmp528 = *(&local4);
org$frostlang$frostc$Type$Kind* $tmp529 = &$tmp528->typeKind;
org$frostlang$frostc$Type$Kind $tmp530 = *$tmp529;
org$frostlang$frostc$Type* $tmp531 = *(&local4);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from MethodRef.frost:84:35
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp532 = &$tmp531->_subtypes;
org$frostlang$frostc$FixedArray* $tmp533 = *$tmp532;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp533));
frost$core$Int $tmp534 = (frost$core$Int) {0u};
org$frostlang$frostc$Type* $tmp535 = *(&local4);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from MethodRef.frost:84:60
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp536 = &$tmp535->_subtypes;
org$frostlang$frostc$FixedArray* $tmp537 = *$tmp536;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp537));
ITable* $tmp538 = ((frost$collections$CollectionView*) $tmp537)->$class->itable;
while ($tmp538->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp538 = $tmp538->next;
}
$fn540 $tmp539 = $tmp538->methods[0];
frost$core$Int $tmp541 = $tmp539(((frost$collections$CollectionView*) $tmp537));
frost$core$Int $tmp542 = (frost$core$Int) {1u};
int64_t $tmp543 = $tmp541.value;
int64_t $tmp544 = $tmp542.value;
int64_t $tmp545 = $tmp543 - $tmp544;
frost$core$Int $tmp546 = (frost$core$Int) {$tmp545};
frost$core$Bit $tmp547 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp548 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp534, $tmp546, $tmp547);
ITable* $tmp549 = ((frost$collections$ListView*) $tmp533)->$class->itable;
while ($tmp549->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp549 = $tmp549->next;
}
$fn551 $tmp550 = $tmp549->methods[1];
frost$collections$ListView* $tmp552 = $tmp550(((frost$collections$ListView*) $tmp533), $tmp548);
org$frostlang$frostc$Type** $tmp553 = &param1->VOID_TYPE;
org$frostlang$frostc$Type* $tmp554 = *$tmp553;
org$frostlang$frostc$Type* $tmp555 = *(&local4);
frost$core$Int* $tmp556 = &$tmp555->priority;
frost$core$Int $tmp557 = *$tmp556;
org$frostlang$frostc$Type* $tmp558 = org$frostlang$frostc$Type$methodType$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$Type$Kind$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$org$frostlang$frostc$Type$frost$core$Int$R$org$frostlang$frostc$Type(param1, $tmp527, $tmp530, $tmp552, $tmp554, $tmp557);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp558));
org$frostlang$frostc$Type* $tmp559 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp559));
*(&local4) = $tmp558;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp558));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp552));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp537));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp533));
goto block107;
block108:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:87
org$frostlang$frostc$Type* $tmp560 = *(&local51);
org$frostlang$frostc$Type$Kind* $tmp561 = &$tmp560->typeKind;
org$frostlang$frostc$Type$Kind $tmp562 = *$tmp561;
org$frostlang$frostc$Type$Kind$wrapper* $tmp563;
$tmp563 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp563->value = $tmp562;
frost$core$Int $tmp564 = (frost$core$Int) {11u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from MethodRef.frost:87:52
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp565 = &(&local54)->$rawValue;
*$tmp565 = $tmp564;
org$frostlang$frostc$Type$Kind $tmp566 = *(&local54);
*(&local53) = $tmp566;
org$frostlang$frostc$Type$Kind $tmp567 = *(&local53);
org$frostlang$frostc$Type$Kind$wrapper* $tmp568;
$tmp568 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp568->value = $tmp567;
ITable* $tmp569 = ((frost$core$Equatable*) $tmp563)->$class->itable;
while ($tmp569->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp569 = $tmp569->next;
}
$fn571 $tmp570 = $tmp569->methods[0];
frost$core$Bit $tmp572 = $tmp570(((frost$core$Equatable*) $tmp563), ((frost$core$Equatable*) $tmp568));
bool $tmp573 = $tmp572.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp568)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp563)));
if ($tmp573) goto block117; else goto block116;
block117:;
org$frostlang$frostc$Type* $tmp574 = *(&local51);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from MethodRef.frost:88:31
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp575 = &$tmp574->_subtypes;
org$frostlang$frostc$FixedArray* $tmp576 = *$tmp575;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp576));
frost$core$Int $tmp577 = (frost$core$Int) {0u};
frost$core$Object* $tmp578 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp576, $tmp577);
frost$core$String** $tmp579 = &((org$frostlang$frostc$Symbol*) ((org$frostlang$frostc$Type*) $tmp578))->name;
frost$core$String* $tmp580 = *$tmp579;
frost$core$Bit $tmp581 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp580, &$s582);
bool $tmp583 = $tmp581.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp578);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp576));
if ($tmp583) goto block115; else goto block116;
block115:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:89
org$frostlang$frostc$Type* $tmp584 = *(&local4);
org$frostlang$frostc$Position* $tmp585 = &((org$frostlang$frostc$Symbol*) $tmp584)->position;
org$frostlang$frostc$Position $tmp586 = *$tmp585;
org$frostlang$frostc$Type* $tmp587 = *(&local4);
org$frostlang$frostc$Type$Kind* $tmp588 = &$tmp587->typeKind;
org$frostlang$frostc$Type$Kind $tmp589 = *$tmp588;
org$frostlang$frostc$Type* $tmp590 = *(&local4);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from MethodRef.frost:90:35
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp591 = &$tmp590->_subtypes;
org$frostlang$frostc$FixedArray* $tmp592 = *$tmp591;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp592));
frost$core$Int $tmp593 = (frost$core$Int) {0u};
org$frostlang$frostc$Type* $tmp594 = *(&local4);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from MethodRef.frost:90:60
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp595 = &$tmp594->_subtypes;
org$frostlang$frostc$FixedArray* $tmp596 = *$tmp595;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp596));
ITable* $tmp597 = ((frost$collections$CollectionView*) $tmp596)->$class->itable;
while ($tmp597->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp597 = $tmp597->next;
}
$fn599 $tmp598 = $tmp597->methods[0];
frost$core$Int $tmp600 = $tmp598(((frost$collections$CollectionView*) $tmp596));
frost$core$Int $tmp601 = (frost$core$Int) {1u};
int64_t $tmp602 = $tmp600.value;
int64_t $tmp603 = $tmp601.value;
int64_t $tmp604 = $tmp602 - $tmp603;
frost$core$Int $tmp605 = (frost$core$Int) {$tmp604};
frost$core$Bit $tmp606 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp607 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp593, $tmp605, $tmp606);
ITable* $tmp608 = ((frost$collections$ListView*) $tmp592)->$class->itable;
while ($tmp608->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp608 = $tmp608->next;
}
$fn610 $tmp609 = $tmp608->methods[1];
frost$collections$ListView* $tmp611 = $tmp609(((frost$collections$ListView*) $tmp592), $tmp607);
org$frostlang$frostc$Type* $tmp612 = *(&local51);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from MethodRef.frost:91:35
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp613 = &$tmp612->_subtypes;
org$frostlang$frostc$FixedArray* $tmp614 = *$tmp613;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp614));
frost$core$Int $tmp615 = (frost$core$Int) {1u};
frost$core$Object* $tmp616 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp614, $tmp615);
org$frostlang$frostc$Type* $tmp617 = *(&local4);
frost$core$Int* $tmp618 = &$tmp617->priority;
frost$core$Int $tmp619 = *$tmp618;
org$frostlang$frostc$Type* $tmp620 = org$frostlang$frostc$Type$methodType$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$Type$Kind$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$org$frostlang$frostc$Type$frost$core$Int$R$org$frostlang$frostc$Type(param1, $tmp586, $tmp589, $tmp611, ((org$frostlang$frostc$Type*) $tmp616), $tmp619);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp620));
org$frostlang$frostc$Type* $tmp621 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp621));
*(&local4) = $tmp620;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp620));
frost$core$Frost$unref$frost$core$Object$Q($tmp616);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp614));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp611));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp596));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp592));
goto block116;
block116:;
goto block107;
block107:;
org$frostlang$frostc$Type* $tmp622 = *(&local51);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp622));
*(&local51) = ((org$frostlang$frostc$Type*) NULL);
goto block84;
block84:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:94
org$frostlang$frostc$Type* $tmp623 = *(&local3);
org$frostlang$frostc$Type* $tmp624 = *(&local4);
org$frostlang$frostc$Type* $tmp625 = org$frostlang$frostc$Compiler$remapType$org$frostlang$frostc$Type$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(param1, $tmp623, $tmp624);
*(&local55) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp625));
org$frostlang$frostc$Type* $tmp626 = *(&local55);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp626));
*(&local55) = $tmp625;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp625));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:95
frost$core$Bit $tmp627 = (frost$core$Bit) {param4 != NULL};
bool $tmp628 = $tmp627.value;
if ($tmp628) goto block123; else goto block125;
block123:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:96
frost$core$Weak** $tmp629 = &param3->owner;
frost$core$Weak* $tmp630 = *$tmp629;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from MethodRef.frost:96:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp631 = &$tmp630->_valid;
frost$core$Bit $tmp632 = *$tmp631;
bool $tmp633 = $tmp632.value;
if ($tmp633) goto block128; else goto block129;
block129:;
frost$core$Int $tmp634 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s635, $tmp634);
abort(); // unreachable
block128:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp636 = &$tmp630->value;
frost$core$Object* $tmp637 = *$tmp636;
frost$core$Frost$ref$frost$core$Object$Q($tmp637);
frost$core$String** $tmp638 = &((org$frostlang$frostc$ClassDecl*) $tmp637)->name;
frost$core$String* $tmp639 = *$tmp638;
frost$core$String* $tmp640 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp639, &$s641);
frost$core$String** $tmp642 = &((org$frostlang$frostc$Symbol*) param3)->name;
frost$core$String* $tmp643 = *$tmp642;
frost$core$String* $tmp644 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp640, $tmp643);
frost$core$String* $tmp645 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp644, &$s646);
*(&local56) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp645));
frost$core$String* $tmp647 = *(&local56);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp647));
*(&local56) = $tmp645;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp645));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp644));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp640));
frost$core$Frost$unref$frost$core$Object$Q($tmp637);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:97
FROST_ASSERT(56 == sizeof(frost$collections$HashMap));
frost$collections$HashMap* $tmp648 = (frost$collections$HashMap*) frostObjectAlloc(56, (frost$core$Class*) &frost$collections$HashMap$class);
frost$collections$HashMap$init($tmp648);
*(&local57) = ((frost$collections$HashMap*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp648));
frost$collections$HashMap* $tmp649 = *(&local57);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp649));
*(&local57) = $tmp648;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp648));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:98
frost$core$Int $tmp650 = (frost$core$Int) {0u};
ITable* $tmp651 = ((frost$collections$CollectionView*) param4)->$class->itable;
while ($tmp651->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp651 = $tmp651->next;
}
$fn653 $tmp652 = $tmp651->methods[0];
frost$core$Int $tmp654 = $tmp652(((frost$collections$CollectionView*) param4));
frost$core$Bit $tmp655 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp656 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp650, $tmp654, $tmp655);
frost$core$Int $tmp657 = $tmp656.min;
*(&local58) = $tmp657;
frost$core$Int $tmp658 = $tmp656.max;
frost$core$Bit $tmp659 = $tmp656.inclusive;
bool $tmp660 = $tmp659.value;
frost$core$Int $tmp661 = (frost$core$Int) {1u};
if ($tmp660) goto block133; else goto block134;
block133:;
int64_t $tmp662 = $tmp657.value;
int64_t $tmp663 = $tmp658.value;
bool $tmp664 = $tmp662 <= $tmp663;
frost$core$Bit $tmp665 = (frost$core$Bit) {$tmp664};
bool $tmp666 = $tmp665.value;
if ($tmp666) goto block130; else goto block131;
block134:;
int64_t $tmp667 = $tmp657.value;
int64_t $tmp668 = $tmp658.value;
bool $tmp669 = $tmp667 < $tmp668;
frost$core$Bit $tmp670 = (frost$core$Bit) {$tmp669};
bool $tmp671 = $tmp670.value;
if ($tmp671) goto block130; else goto block131;
block130:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:99
frost$collections$HashMap* $tmp672 = *(&local57);
frost$core$String* $tmp673 = *(&local56);
frost$collections$Array** $tmp674 = &param3->genericParameters;
frost$collections$Array* $tmp675 = *$tmp674;
frost$core$Int $tmp676 = *(&local58);
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from MethodRef.frost:99:53
frost$core$Int $tmp677 = (frost$core$Int) {0u};
int64_t $tmp678 = $tmp676.value;
int64_t $tmp679 = $tmp677.value;
bool $tmp680 = $tmp678 >= $tmp679;
frost$core$Bit $tmp681 = (frost$core$Bit) {$tmp680};
bool $tmp682 = $tmp681.value;
if ($tmp682) goto block138; else goto block137;
block138:;
ITable* $tmp683 = ((frost$collections$CollectionView*) $tmp675)->$class->itable;
while ($tmp683->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp683 = $tmp683->next;
}
$fn685 $tmp684 = $tmp683->methods[0];
frost$core$Int $tmp686 = $tmp684(((frost$collections$CollectionView*) $tmp675));
int64_t $tmp687 = $tmp676.value;
int64_t $tmp688 = $tmp686.value;
bool $tmp689 = $tmp687 < $tmp688;
frost$core$Bit $tmp690 = (frost$core$Bit) {$tmp689};
bool $tmp691 = $tmp690.value;
if ($tmp691) goto block136; else goto block137;
block137:;
frost$core$Int $tmp692 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s693, $tmp692, &$s694);
abort(); // unreachable
block136:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp695 = &$tmp675->data;
frost$core$Object** $tmp696 = *$tmp695;
frost$core$Int64 $tmp697 = frost$core$Int64$init$frost$core$Int($tmp676);
int64_t $tmp698 = $tmp697.value;
frost$core$Object* $tmp699 = $tmp696[$tmp698];
frost$core$Frost$ref$frost$core$Object$Q($tmp699);
frost$core$String** $tmp700 = &((org$frostlang$frostc$Symbol*) ((org$frostlang$frostc$MethodDecl$GenericParameter*) $tmp699))->name;
frost$core$String* $tmp701 = *$tmp700;
frost$core$String* $tmp702 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp673, $tmp701);
frost$core$Int $tmp703 = *(&local58);
ITable* $tmp704 = param4->$class->itable;
while ($tmp704->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp704 = $tmp704->next;
}
$fn706 $tmp705 = $tmp704->methods[0];
frost$core$Object* $tmp707 = $tmp705(param4, $tmp703);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp672, ((frost$collections$Key*) $tmp702), ((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp707)));
frost$core$Frost$unref$frost$core$Object$Q($tmp707);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp702));
frost$core$Frost$unref$frost$core$Object$Q($tmp699);
frost$core$Int $tmp708 = *(&local58);
int64_t $tmp709 = $tmp658.value;
int64_t $tmp710 = $tmp708.value;
int64_t $tmp711 = $tmp709 - $tmp710;
frost$core$Int $tmp712 = (frost$core$Int) {$tmp711};
if ($tmp660) goto block140; else goto block141;
block140:;
int64_t $tmp713 = $tmp712.value;
int64_t $tmp714 = $tmp661.value;
bool $tmp715 = $tmp713 >= $tmp714;
frost$core$Bit $tmp716 = (frost$core$Bit) {$tmp715};
bool $tmp717 = $tmp716.value;
if ($tmp717) goto block139; else goto block131;
block141:;
int64_t $tmp718 = $tmp712.value;
int64_t $tmp719 = $tmp661.value;
bool $tmp720 = $tmp718 > $tmp719;
frost$core$Bit $tmp721 = (frost$core$Bit) {$tmp720};
bool $tmp722 = $tmp721.value;
if ($tmp722) goto block139; else goto block131;
block139:;
int64_t $tmp723 = $tmp708.value;
int64_t $tmp724 = $tmp661.value;
int64_t $tmp725 = $tmp723 + $tmp724;
frost$core$Int $tmp726 = (frost$core$Int) {$tmp725};
*(&local58) = $tmp726;
goto block130;
block131:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:101
org$frostlang$frostc$Type* $tmp727 = *(&local55);
frost$collections$HashMap* $tmp728 = *(&local57);
org$frostlang$frostc$Type* $tmp729 = org$frostlang$frostc$Type$remap$org$frostlang$frostc$Compiler$frost$collections$HashMap$LTfrost$core$String$Corg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type($tmp727, param1, $tmp728);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp729));
org$frostlang$frostc$Type** $tmp730 = &param0->effectiveType;
org$frostlang$frostc$Type* $tmp731 = *$tmp730;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp731));
org$frostlang$frostc$Type** $tmp732 = &param0->effectiveType;
*$tmp732 = $tmp729;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp729));
frost$collections$HashMap* $tmp733 = *(&local57);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp733));
*(&local57) = ((frost$collections$HashMap*) NULL);
frost$core$String* $tmp734 = *(&local56);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp734));
*(&local56) = ((frost$core$String*) NULL);
goto block124;
block125:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:104
org$frostlang$frostc$Type* $tmp735 = *(&local55);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp735));
org$frostlang$frostc$Type** $tmp736 = &param0->effectiveType;
org$frostlang$frostc$Type* $tmp737 = *$tmp736;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp737));
org$frostlang$frostc$Type** $tmp738 = &param0->effectiveType;
*$tmp738 = $tmp735;
goto block124;
block124:;
org$frostlang$frostc$Type* $tmp739 = *(&local55);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp739));
*(&local55) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Pair* $tmp740 = *(&local39);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp740));
*(&local39) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$Type* $tmp741 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp741));
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp742 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp742));
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
org$frostlang$frostc$Type** $tmp743 = &param0->effectiveType;
org$frostlang$frostc$Type* $tmp744 = *$tmp743;
// begin inline call to function org.frostlang.frostc.Type.get_parameterCount():frost.core.Int from MethodRef.frost:109:29
org$frostlang$frostc$Type$Kind* $tmp745 = &$tmp744->typeKind;
org$frostlang$frostc$Type$Kind $tmp746 = *$tmp745;
org$frostlang$frostc$Type$Kind$wrapper* $tmp747;
$tmp747 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp747->value = $tmp746;
frost$core$Int $tmp748 = (frost$core$Int) {15u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:419:25
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp749 = &(&local1)->$rawValue;
*$tmp749 = $tmp748;
org$frostlang$frostc$Type$Kind $tmp750 = *(&local1);
*(&local0) = $tmp750;
org$frostlang$frostc$Type$Kind $tmp751 = *(&local0);
org$frostlang$frostc$Type$Kind$wrapper* $tmp752;
$tmp752 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp752->value = $tmp751;
ITable* $tmp753 = ((frost$core$Equatable*) $tmp747)->$class->itable;
while ($tmp753->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp753 = $tmp753->next;
}
$fn755 $tmp754 = $tmp753->methods[0];
frost$core$Bit $tmp756 = $tmp754(((frost$core$Equatable*) $tmp747), ((frost$core$Equatable*) $tmp752));
bool $tmp757 = $tmp756.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp752)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp747)));
if ($tmp757) goto block2; else goto block6;
block6:;
org$frostlang$frostc$Type$Kind* $tmp758 = &$tmp744->typeKind;
org$frostlang$frostc$Type$Kind $tmp759 = *$tmp758;
org$frostlang$frostc$Type$Kind$wrapper* $tmp760;
$tmp760 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp760->value = $tmp759;
frost$core$Int $tmp761 = (frost$core$Int) {16u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:419:52
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp762 = &(&local3)->$rawValue;
*$tmp762 = $tmp761;
org$frostlang$frostc$Type$Kind $tmp763 = *(&local3);
*(&local2) = $tmp763;
org$frostlang$frostc$Type$Kind $tmp764 = *(&local2);
org$frostlang$frostc$Type$Kind$wrapper* $tmp765;
$tmp765 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp765->value = $tmp764;
ITable* $tmp766 = ((frost$core$Equatable*) $tmp760)->$class->itable;
while ($tmp766->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp766 = $tmp766->next;
}
$fn768 $tmp767 = $tmp766->methods[0];
frost$core$Bit $tmp769 = $tmp767(((frost$core$Equatable*) $tmp760), ((frost$core$Equatable*) $tmp765));
bool $tmp770 = $tmp769.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp765)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp760)));
if ($tmp770) goto block2; else goto block5;
block5:;
org$frostlang$frostc$Type$Kind* $tmp771 = &$tmp744->typeKind;
org$frostlang$frostc$Type$Kind $tmp772 = *$tmp771;
org$frostlang$frostc$Type$Kind$wrapper* $tmp773;
$tmp773 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp773->value = $tmp772;
frost$core$Int $tmp774 = (frost$core$Int) {17u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:419:77
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp775 = &(&local5)->$rawValue;
*$tmp775 = $tmp774;
org$frostlang$frostc$Type$Kind $tmp776 = *(&local5);
*(&local4) = $tmp776;
org$frostlang$frostc$Type$Kind $tmp777 = *(&local4);
org$frostlang$frostc$Type$Kind$wrapper* $tmp778;
$tmp778 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp778->value = $tmp777;
ITable* $tmp779 = ((frost$core$Equatable*) $tmp773)->$class->itable;
while ($tmp779->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp779 = $tmp779->next;
}
$fn781 $tmp780 = $tmp779->methods[0];
frost$core$Bit $tmp782 = $tmp780(((frost$core$Equatable*) $tmp773), ((frost$core$Equatable*) $tmp778));
bool $tmp783 = $tmp782.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp778)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp773)));
if ($tmp783) goto block2; else goto block4;
block4:;
org$frostlang$frostc$Type$Kind* $tmp784 = &$tmp744->typeKind;
org$frostlang$frostc$Type$Kind $tmp785 = *$tmp784;
org$frostlang$frostc$Type$Kind$wrapper* $tmp786;
$tmp786 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp786->value = $tmp785;
frost$core$Int $tmp787 = (frost$core$Int) {18u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:420:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp788 = &(&local7)->$rawValue;
*$tmp788 = $tmp787;
org$frostlang$frostc$Type$Kind $tmp789 = *(&local7);
*(&local6) = $tmp789;
org$frostlang$frostc$Type$Kind $tmp790 = *(&local6);
org$frostlang$frostc$Type$Kind$wrapper* $tmp791;
$tmp791 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp791->value = $tmp790;
ITable* $tmp792 = ((frost$core$Equatable*) $tmp786)->$class->itable;
while ($tmp792->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp792 = $tmp792->next;
}
$fn794 $tmp793 = $tmp792->methods[0];
frost$core$Bit $tmp795 = $tmp793(((frost$core$Equatable*) $tmp786), ((frost$core$Equatable*) $tmp791));
bool $tmp796 = $tmp795.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp791)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp786)));
if ($tmp796) goto block2; else goto block3;
block3:;
frost$core$Int $tmp797 = (frost$core$Int) {421u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s798, $tmp797, &$s799);
abort(); // unreachable
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:422
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:422:16
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp800 = &$tmp744->_subtypes;
org$frostlang$frostc$FixedArray* $tmp801 = *$tmp800;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp801));
ITable* $tmp802 = ((frost$collections$CollectionView*) $tmp801)->$class->itable;
while ($tmp802->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp802 = $tmp802->next;
}
$fn804 $tmp803 = $tmp802->methods[0];
frost$core$Int $tmp805 = $tmp803(((frost$collections$CollectionView*) $tmp801));
frost$core$Int $tmp806 = (frost$core$Int) {1u};
int64_t $tmp807 = $tmp805.value;
int64_t $tmp808 = $tmp806.value;
int64_t $tmp809 = $tmp807 - $tmp808;
frost$core$Int $tmp810 = (frost$core$Int) {$tmp809};
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp801));
return $tmp810;

}
org$frostlang$frostc$Type* org$frostlang$frostc$MethodRef$parameterType$frost$core$Int$R$org$frostlang$frostc$Type(org$frostlang$frostc$MethodRef* param0, frost$core$Int param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:113
org$frostlang$frostc$Type** $tmp811 = &param0->effectiveType;
org$frostlang$frostc$Type* $tmp812 = *$tmp811;
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from MethodRef.frost:113:29
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp813 = &$tmp812->_subtypes;
org$frostlang$frostc$FixedArray* $tmp814 = *$tmp813;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp814));
frost$core$Object* $tmp815 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp814, param1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp815)));
frost$core$Frost$unref$frost$core$Object$Q($tmp815);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp814));
return ((org$frostlang$frostc$Type*) $tmp815);

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
org$frostlang$frostc$Type** $tmp816 = &param0->effectiveType;
org$frostlang$frostc$Type* $tmp817 = *$tmp816;
// begin inline call to function org.frostlang.frostc.Type.get_returnType():org.frostlang.frostc.Type from MethodRef.frost:117:29
org$frostlang$frostc$Type$Kind* $tmp818 = &$tmp817->typeKind;
org$frostlang$frostc$Type$Kind $tmp819 = *$tmp818;
org$frostlang$frostc$Type$Kind$wrapper* $tmp820;
$tmp820 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp820->value = $tmp819;
frost$core$Int $tmp821 = (frost$core$Int) {15u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:431:25
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp822 = &(&local1)->$rawValue;
*$tmp822 = $tmp821;
org$frostlang$frostc$Type$Kind $tmp823 = *(&local1);
*(&local0) = $tmp823;
org$frostlang$frostc$Type$Kind $tmp824 = *(&local0);
org$frostlang$frostc$Type$Kind$wrapper* $tmp825;
$tmp825 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp825->value = $tmp824;
ITable* $tmp826 = ((frost$core$Equatable*) $tmp820)->$class->itable;
while ($tmp826->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp826 = $tmp826->next;
}
$fn828 $tmp827 = $tmp826->methods[0];
frost$core$Bit $tmp829 = $tmp827(((frost$core$Equatable*) $tmp820), ((frost$core$Equatable*) $tmp825));
bool $tmp830 = $tmp829.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp825)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp820)));
if ($tmp830) goto block2; else goto block6;
block6:;
org$frostlang$frostc$Type$Kind* $tmp831 = &$tmp817->typeKind;
org$frostlang$frostc$Type$Kind $tmp832 = *$tmp831;
org$frostlang$frostc$Type$Kind$wrapper* $tmp833;
$tmp833 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp833->value = $tmp832;
frost$core$Int $tmp834 = (frost$core$Int) {16u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:431:52
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp835 = &(&local3)->$rawValue;
*$tmp835 = $tmp834;
org$frostlang$frostc$Type$Kind $tmp836 = *(&local3);
*(&local2) = $tmp836;
org$frostlang$frostc$Type$Kind $tmp837 = *(&local2);
org$frostlang$frostc$Type$Kind$wrapper* $tmp838;
$tmp838 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp838->value = $tmp837;
ITable* $tmp839 = ((frost$core$Equatable*) $tmp833)->$class->itable;
while ($tmp839->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp839 = $tmp839->next;
}
$fn841 $tmp840 = $tmp839->methods[0];
frost$core$Bit $tmp842 = $tmp840(((frost$core$Equatable*) $tmp833), ((frost$core$Equatable*) $tmp838));
bool $tmp843 = $tmp842.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp838)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp833)));
if ($tmp843) goto block2; else goto block5;
block5:;
org$frostlang$frostc$Type$Kind* $tmp844 = &$tmp817->typeKind;
org$frostlang$frostc$Type$Kind $tmp845 = *$tmp844;
org$frostlang$frostc$Type$Kind$wrapper* $tmp846;
$tmp846 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp846->value = $tmp845;
frost$core$Int $tmp847 = (frost$core$Int) {17u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:431:77
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp848 = &(&local5)->$rawValue;
*$tmp848 = $tmp847;
org$frostlang$frostc$Type$Kind $tmp849 = *(&local5);
*(&local4) = $tmp849;
org$frostlang$frostc$Type$Kind $tmp850 = *(&local4);
org$frostlang$frostc$Type$Kind$wrapper* $tmp851;
$tmp851 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp851->value = $tmp850;
ITable* $tmp852 = ((frost$core$Equatable*) $tmp846)->$class->itable;
while ($tmp852->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp852 = $tmp852->next;
}
$fn854 $tmp853 = $tmp852->methods[0];
frost$core$Bit $tmp855 = $tmp853(((frost$core$Equatable*) $tmp846), ((frost$core$Equatable*) $tmp851));
bool $tmp856 = $tmp855.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp851)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp846)));
if ($tmp856) goto block2; else goto block4;
block4:;
org$frostlang$frostc$Type$Kind* $tmp857 = &$tmp817->typeKind;
org$frostlang$frostc$Type$Kind $tmp858 = *$tmp857;
org$frostlang$frostc$Type$Kind$wrapper* $tmp859;
$tmp859 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp859->value = $tmp858;
frost$core$Int $tmp860 = (frost$core$Int) {18u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:432:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp861 = &(&local7)->$rawValue;
*$tmp861 = $tmp860;
org$frostlang$frostc$Type$Kind $tmp862 = *(&local7);
*(&local6) = $tmp862;
org$frostlang$frostc$Type$Kind $tmp863 = *(&local6);
org$frostlang$frostc$Type$Kind$wrapper* $tmp864;
$tmp864 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp864->value = $tmp863;
ITable* $tmp865 = ((frost$core$Equatable*) $tmp859)->$class->itable;
while ($tmp865->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp865 = $tmp865->next;
}
$fn867 $tmp866 = $tmp865->methods[0];
frost$core$Bit $tmp868 = $tmp866(((frost$core$Equatable*) $tmp859), ((frost$core$Equatable*) $tmp864));
bool $tmp869 = $tmp868.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp864)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp859)));
if ($tmp869) goto block2; else goto block3;
block3:;
frost$core$Int $tmp870 = (frost$core$Int) {433u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s871, $tmp870, &$s872);
abort(); // unreachable
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:434
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:434:16
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp873 = &$tmp817->_subtypes;
org$frostlang$frostc$FixedArray* $tmp874 = *$tmp873;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp874));
ITable* $tmp875 = ((frost$collections$ListView*) $tmp874)->$class->itable;
while ($tmp875->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp875 = $tmp875->next;
}
$fn877 $tmp876 = $tmp875->methods[5];
frost$core$Object* $tmp878 = $tmp876(((frost$collections$ListView*) $tmp874));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp878)));
frost$core$Frost$unref$frost$core$Object$Q($tmp878);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp874));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp878)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp878)));
return ((org$frostlang$frostc$Type*) $tmp878);

}
frost$core$String* org$frostlang$frostc$MethodRef$get_asString$R$frost$core$String(org$frostlang$frostc$MethodRef* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:122
org$frostlang$frostc$MethodDecl** $tmp879 = &param0->value;
org$frostlang$frostc$MethodDecl* $tmp880 = *$tmp879;
frost$core$String* $tmp881 = org$frostlang$frostc$MethodDecl$get_declaration$R$frost$core$String($tmp880);
frost$core$String* $tmp882 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s883, $tmp881);
frost$core$String* $tmp884 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp882, &$s885);
org$frostlang$frostc$Type** $tmp886 = &param0->effectiveType;
org$frostlang$frostc$Type* $tmp887 = *$tmp886;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from MethodRef.frost:122:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn889 $tmp888 = ($fn889) ((frost$core$Object*) $tmp887)->$class->vtable[0];
frost$core$String* $tmp890 = $tmp888(((frost$core$Object*) $tmp887));
frost$core$String* $tmp891 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp884, $tmp890);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp891));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp891));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp890));
frost$core$String* $tmp892 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp891, &$s893);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp892));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp892));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp891));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp884));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp882));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp881));
return $tmp892;

}
void org$frostlang$frostc$MethodRef$cleanup(org$frostlang$frostc$MethodRef* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:9
frost$core$Object$cleanup(((frost$core$Object*) param0));
org$frostlang$frostc$Type** $tmp894 = &param0->target;
org$frostlang$frostc$Type* $tmp895 = *$tmp894;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp895));
org$frostlang$frostc$MethodDecl** $tmp896 = &param0->value;
org$frostlang$frostc$MethodDecl* $tmp897 = *$tmp896;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp897));
org$frostlang$frostc$Type** $tmp898 = &param0->effectiveType;
org$frostlang$frostc$Type* $tmp899 = *$tmp898;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp899));
return;

}

