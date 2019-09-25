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
#include "frost/unsafe/Pointer.h"
#include "frost/core/Int64.h"
#include "org/frostlang/frostc/MethodDecl/GenericParameter.h"
#include "frost/collections/HashKey.h"
#include "frost/core/Frost.h"

frost$unsafe$Pointer frost$unsafe$Pointer$init$builtin_int(int64_t p_value);

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
typedef frost$core$String* (*$fn46)(frost$core$Object*);
typedef frost$core$Bit (*$fn177)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn178)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn179)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn180)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int (*$fn181)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn201)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn202)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn203)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn204)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Object* (*$fn205)(frost$collections$ListView*);
typedef frost$core$String* (*$fn223)(frost$core$Object*);
typedef frost$core$String* (*$fn226)(frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x52\x65\x66", 30, -1382371847710016002, NULL };
static frost$core$String $s41 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x72\x65\x73\x6f\x6c\x76\x65\x64\x20\x6d\x65\x74\x68\x6f\x64\x20", 18, 903832688028414089, NULL };
static frost$core$String $s42 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "", 0, -3750763034362895579, NULL };
static frost$core$String $s43 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x2e\x66\x72\x6f\x73\x74", 15, 1242067454507978657, NULL };
static frost$core$String $s44 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s45 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x64\x65\x72\x65\x66\x65\x72\x65\x6e\x63\x69\x6e\x67\x20\x77\x65\x61\x6b\x20\x70\x6f\x69\x6e\x74\x65\x72\x20\x61\x66\x74\x65\x72\x20\x69\x74\x73\x20\x72\x65\x66\x65\x72\x65\x6e\x74\x20\x77\x61\x73\x20\x64\x65\x73\x74\x72\x6f\x79\x65\x64", 59, 1822743730076196218, NULL };
static frost$core$String $s47 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x66\x69\x6e\x64\x54\x79\x70\x65\x28", 9, -6510821745887560362, NULL };
static frost$core$String $s48 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s49 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s50 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x64\x65\x72\x65\x66\x65\x72\x65\x6e\x63\x69\x6e\x67\x20\x77\x65\x61\x6b\x20\x70\x6f\x69\x6e\x74\x65\x72\x20\x61\x66\x74\x65\x72\x20\x69\x74\x73\x20\x72\x65\x66\x65\x72\x65\x6e\x74\x20\x77\x61\x73\x20\x64\x65\x73\x74\x72\x6f\x79\x65\x64", 59, 1822743730076196218, NULL };
static frost$core$String $s51 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x29\x20\x66\x61\x69\x6c\x65\x64", 8, -3227922608979297983, NULL };
static frost$core$String $s52 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x2e\x66\x72\x6f\x73\x74", 15, 1242067454507978657, NULL };
static frost$core$String $s59 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s60 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s61 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x43\x6c\x61\x73\x73", 16, -6222778858933417332, NULL };
static frost$core$String $s62 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s63 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s64 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s65 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s66 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s67 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s70 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x2e\x66\x72\x6f\x73\x74", 15, 1242067454507978657, NULL };
static frost$core$String $s83 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s84 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2e\x67\x65\x74\x5f\x72\x65\x74\x75\x72\x6e\x54\x79\x70\x65\x28\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 102, -8354441105231428072, NULL };
static frost$core$String $s85 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s86 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s91 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x2e\x66\x72\x6f\x73\x74", 15, 1242067454507978657, NULL };
static frost$core$String $s92 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s93 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s94 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s95 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s110 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s111 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2e\x67\x65\x74\x5f\x72\x65\x74\x75\x72\x6e\x54\x79\x70\x65\x28\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 102, -8354441105231428072, NULL };
static frost$core$String $s112 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s113 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s132 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s133 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2e\x67\x65\x74\x5f\x72\x65\x74\x75\x72\x6e\x54\x79\x70\x65\x28\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 102, -8354441105231428072, NULL };
static frost$core$String $s134 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s135 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s140 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s141 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s142 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s143 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s149 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s150 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s151 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4d\x61\x79\x62\x65", 16, -2055899992811416928, NULL };
static frost$core$String $s152 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s153 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s154 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s155 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s158 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s159 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s160 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x2e\x66\x72\x6f\x73\x74", 15, 1242067454507978657, NULL };
static frost$core$String $s161 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 89, 6559565496330182789, NULL };
static frost$core$String $s162 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s163 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x64\x65\x72\x65\x66\x65\x72\x65\x6e\x63\x69\x6e\x67\x20\x77\x65\x61\x6b\x20\x70\x6f\x69\x6e\x74\x65\x72\x20\x61\x66\x74\x65\x72\x20\x69\x74\x73\x20\x72\x65\x66\x65\x72\x65\x6e\x74\x20\x77\x61\x73\x20\x64\x65\x73\x74\x72\x6f\x79\x65\x64", 59, 1822743730076196218, NULL };
static frost$core$String $s164 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x2e", 1, -5808619545316717647, NULL };
static frost$core$String $s165 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x2e", 1, -5808619545316717647, NULL };
static frost$core$String $s166 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x2e\x66\x72\x6f\x73\x74", 15, 1242067454507978657, NULL };
static frost$core$String $s167 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77", 124, -5519893476519700322, NULL };
static frost$core$String $s169 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x2e\x66\x72\x6f\x73\x74", 15, 1242067454507978657, NULL };
static frost$core$String $s170 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c\x2e\x47\x65\x6e\x65\x72\x69\x63\x50\x61\x72\x61\x6d\x65\x74\x65\x72\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c\x2e\x47\x65\x6e\x65\x72\x69\x63\x50\x61\x72\x61\x6d\x65\x74\x65\x72\x3e", 185, -5094521397292670579, NULL };
static frost$core$String $s172 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s173 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s174 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x2e\x66\x72\x6f\x73\x74", 15, 1242067454507978657, NULL };
static frost$core$String $s175 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 145, -7136974715878729295, NULL };
static frost$core$String $s194 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s195 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2e\x67\x65\x74\x5f\x70\x61\x72\x61\x6d\x65\x74\x65\x72\x43\x6f\x75\x6e\x74\x28\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 95, -6421234203817919051, NULL };
static frost$core$String $s196 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s197 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s199 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s200 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s218 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s219 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2e\x67\x65\x74\x5f\x72\x65\x74\x75\x72\x6e\x54\x79\x70\x65\x28\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 102, -8354441105231428072, NULL };
static frost$core$String $s220 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s221 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s224 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x28", 10, -2809919968047225889, NULL };
static frost$core$String $s225 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s227 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x29", 1, -5808618445805089436, NULL };

void org$frostlang$frostc$MethodRef$init$org$frostlang$frostc$Compiler$org$frostlang$frostc$Type$org$frostlang$frostc$MethodDecl(void* rawSelf, org$frostlang$frostc$Compiler* param1, org$frostlang$frostc$Type* param2, org$frostlang$frostc$MethodDecl* param3) {
org$frostlang$frostc$MethodRef* param0 = (org$frostlang$frostc$MethodRef*) rawSelf;

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:28
org$frostlang$frostc$MethodRef$init$org$frostlang$frostc$Compiler$org$frostlang$frostc$Type$org$frostlang$frostc$MethodDecl$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$Q(param0, param1, param2, param3, ((frost$collections$ListView*) NULL));
return;

}
void org$frostlang$frostc$MethodRef$init$org$frostlang$frostc$Compiler$org$frostlang$frostc$Type$org$frostlang$frostc$MethodDecl$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$Q(void* rawSelf, org$frostlang$frostc$Compiler* param1, org$frostlang$frostc$Type* param2, org$frostlang$frostc$MethodDecl* param3, frost$collections$ListView* param4) {
org$frostlang$frostc$MethodRef* param0 = (org$frostlang$frostc$MethodRef*) rawSelf;

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
frost$core$Int _4;
frost$core$Int* _7;
org$frostlang$frostc$Compiler$Resolution _9;
org$frostlang$frostc$Compiler$Resolution _12;
frost$core$Equatable* _13;
$fn2 _14;
frost$core$Bit _15;
bool _16;
frost$core$Int _18;
frost$core$String* _19;
frost$core$String* _20;
frost$core$String* _21;
frost$core$Object* _23;
frost$core$Object* _25;
frost$core$Object* _27;
frost$core$Object* _30;
frost$core$Object* _32;
bool _35;
frost$core$Bit _36;
bool _37;
frost$collections$Array** _39;
frost$collections$Array* _40;
bool _41;
frost$core$Bit _42;
frost$core$Bit _47;
frost$core$Bit* _48;
frost$core$Object* _51;
org$frostlang$frostc$MethodDecl** _53;
org$frostlang$frostc$MethodDecl* _54;
frost$core$Object* _55;
org$frostlang$frostc$MethodDecl** _57;
frost$core$Object* _60;
org$frostlang$frostc$Type** _62;
org$frostlang$frostc$Type* _63;
frost$core$Object* _64;
org$frostlang$frostc$Type** _66;
frost$core$Weak** _69;
frost$core$Weak* _70;
frost$core$Bit* _75;
frost$core$Bit _76;
bool _78;
frost$core$Int _80;
frost$core$Object** _84;
frost$core$Object* _85;
frost$core$Object* _86;
frost$core$Object* _87;
org$frostlang$frostc$ClassDecl* _90;
org$frostlang$frostc$Type* _91;
frost$core$Object* _93;
org$frostlang$frostc$Type* _95;
frost$core$Object* _96;
frost$core$Object* _99;
frost$core$Object* _101;
org$frostlang$frostc$Type* _104;
bool _105;
frost$core$Bit _106;
bool _107;
frost$core$Int _109;
frost$core$Object* _110;
$fn3 _113;
frost$core$String* _114;
frost$core$String* _115;
frost$core$Object* _116;
frost$core$Object* _118;
frost$core$Object* _120;
frost$core$String* _123;
frost$core$Weak** _124;
frost$core$Weak* _125;
frost$core$Bit* _130;
frost$core$Bit _131;
bool _133;
frost$core$Int _135;
frost$core$Object** _139;
frost$core$Object* _140;
frost$core$Object* _141;
frost$core$Object* _142;
org$frostlang$frostc$ClassDecl* _145;
frost$core$String** _146;
frost$core$String* _147;
frost$core$String* _148;
frost$core$String* _149;
frost$core$Object* _151;
frost$core$Object* _153;
frost$core$Object* _155;
frost$core$Object* _157;
frost$core$Object* _159;
org$frostlang$frostc$Type* _163;
frost$core$Object* _165;
org$frostlang$frostc$Type* _167;
frost$core$Object* _168;
frost$core$Object* _171;
org$frostlang$frostc$Annotations** _174;
org$frostlang$frostc$Annotations* _175;
frost$core$Int* _178;
frost$core$Int _179;
frost$core$Int _180;
int64_t _183;
int64_t _184;
int64_t _185;
frost$core$Int _186;
frost$core$Int _188;
int64_t _189;
int64_t _190;
bool _191;
frost$core$Bit _192;
bool _196;
bool _197;
frost$core$Bit _198;
bool _200;
org$frostlang$frostc$MethodDecl$Kind* _202;
org$frostlang$frostc$MethodDecl$Kind _203;
frost$core$Equatable* _204;
frost$core$Int _205;
frost$core$Int* _208;
org$frostlang$frostc$MethodDecl$Kind _210;
org$frostlang$frostc$MethodDecl$Kind _213;
frost$core$Equatable* _214;
$fn4 _215;
frost$core$Bit _216;
bool _217;
frost$core$Object* _218;
frost$core$Object* _220;
org$frostlang$frostc$Type$Kind* _225;
org$frostlang$frostc$Type$Kind _226;
frost$core$Equatable* _227;
frost$core$Int _228;
frost$core$Int* _231;
org$frostlang$frostc$Type$Kind _233;
org$frostlang$frostc$Type$Kind _236;
frost$core$Equatable* _237;
$fn5 _238;
frost$core$Bit _239;
bool _240;
org$frostlang$frostc$FixedArray** _244;
org$frostlang$frostc$FixedArray* _245;
bool _246;
frost$core$Bit _247;
bool _248;
frost$core$Int _250;
org$frostlang$frostc$FixedArray* _253;
frost$core$Object* _254;
frost$core$Int _257;
frost$core$Object* _258;
org$frostlang$frostc$Type* _259;
org$frostlang$frostc$Symbol* _260;
frost$core$String** _261;
frost$core$String* _262;
frost$core$Bit _263;
frost$core$Object* _264;
frost$core$Object* _266;
frost$core$Bit _272;
frost$core$Object* _273;
frost$core$Object* _275;
bool _278;
frost$collections$Array* _281;
frost$core$Object* _284;
frost$collections$Array* _286;
frost$core$Object* _287;
frost$core$Object* _290;
frost$collections$Array* _293;
org$frostlang$frostc$FixedArray** _296;
org$frostlang$frostc$FixedArray* _297;
bool _298;
frost$core$Bit _299;
bool _300;
frost$core$Int _302;
org$frostlang$frostc$FixedArray* _305;
frost$core$Object* _306;
frost$core$Int _309;
frost$core$Object* _310;
org$frostlang$frostc$Type* _311;
frost$core$Object* _312;
frost$core$Object* _314;
frost$core$Object* _316;
frost$collections$Array* _319;
org$frostlang$frostc$Type* _320;
org$frostlang$frostc$FixedArray** _323;
org$frostlang$frostc$FixedArray* _324;
bool _325;
frost$core$Bit _326;
bool _327;
frost$core$Int _329;
org$frostlang$frostc$FixedArray* _332;
frost$core$Object* _333;
frost$collections$ListView* _336;
frost$core$Int _337;
org$frostlang$frostc$Type* _338;
org$frostlang$frostc$FixedArray** _341;
org$frostlang$frostc$FixedArray* _342;
bool _343;
frost$core$Bit _344;
bool _345;
frost$core$Int _347;
org$frostlang$frostc$FixedArray* _350;
frost$core$Object* _351;
frost$collections$CollectionView* _354;
$fn6 _355;
frost$core$Int _356;
frost$core$Int _357;
int64_t _358;
int64_t _359;
int64_t _360;
frost$core$Int _361;
frost$core$Bit _362;
frost$core$Range$LTfrost$core$Int$GT _363;
$fn7 _364;
frost$collections$ListView* _365;
frost$collections$CollectionView* _366;
frost$core$Object* _368;
frost$core$Object* _370;
frost$core$Object* _372;
org$frostlang$frostc$MethodDecl$Kind* _376;
org$frostlang$frostc$MethodDecl$Kind _377;
frost$core$Int _378;
frost$core$Int _379;
int64_t _382;
int64_t _383;
bool _384;
frost$core$Bit _385;
bool _387;
frost$core$Int _390;
frost$core$Int* _393;
org$frostlang$frostc$Type$Kind _395;
org$frostlang$frostc$Type$Kind _398;
frost$core$Int _401;
int64_t _404;
int64_t _405;
bool _406;
frost$core$Bit _407;
bool _409;
frost$core$Int _412;
frost$core$Int* _415;
org$frostlang$frostc$Type$Kind _417;
org$frostlang$frostc$Type$Kind _420;
frost$core$Int _424;
org$frostlang$frostc$Type* _428;
org$frostlang$frostc$Symbol* _429;
org$frostlang$frostc$Position* _430;
org$frostlang$frostc$Position _431;
org$frostlang$frostc$Type$Kind _432;
frost$collections$Array* _433;
frost$collections$ListView* _434;
org$frostlang$frostc$Type* _435;
org$frostlang$frostc$Type$Kind* _437;
org$frostlang$frostc$Type$Kind _438;
frost$core$Equatable* _439;
frost$core$Int _440;
frost$core$Int* _443;
org$frostlang$frostc$Type$Kind _445;
org$frostlang$frostc$Type$Kind _448;
frost$core$Equatable* _449;
$fn8 _450;
frost$core$Bit _451;
bool _452;
frost$core$Object* _453;
frost$core$Object* _455;
org$frostlang$frostc$Type$Kind* _458;
org$frostlang$frostc$Type$Kind _459;
frost$core$Equatable* _460;
frost$core$Int _461;
frost$core$Int* _464;
org$frostlang$frostc$Type$Kind _466;
org$frostlang$frostc$Type$Kind _469;
frost$core$Equatable* _470;
$fn9 _471;
frost$core$Bit _472;
bool _473;
frost$core$Object* _474;
frost$core$Object* _476;
org$frostlang$frostc$Type$Kind* _479;
org$frostlang$frostc$Type$Kind _480;
frost$core$Equatable* _481;
frost$core$Int _482;
frost$core$Int* _485;
org$frostlang$frostc$Type$Kind _487;
org$frostlang$frostc$Type$Kind _490;
frost$core$Equatable* _491;
$fn10 _492;
frost$core$Bit _493;
bool _494;
frost$core$Object* _495;
frost$core$Object* _497;
org$frostlang$frostc$Type$Kind* _500;
org$frostlang$frostc$Type$Kind _501;
frost$core$Equatable* _502;
frost$core$Int _503;
frost$core$Int* _506;
org$frostlang$frostc$Type$Kind _508;
org$frostlang$frostc$Type$Kind _511;
frost$core$Equatable* _512;
$fn11 _513;
frost$core$Bit _514;
bool _515;
frost$core$Object* _516;
frost$core$Object* _518;
frost$core$Int _521;
org$frostlang$frostc$FixedArray** _527;
org$frostlang$frostc$FixedArray* _528;
bool _529;
frost$core$Bit _530;
bool _531;
frost$core$Int _533;
org$frostlang$frostc$FixedArray* _536;
frost$core$Object* _537;
frost$collections$ListView* _540;
$fn12 _541;
frost$core$Object* _542;
org$frostlang$frostc$Type* _543;
frost$core$Object* _544;
frost$core$Object* _546;
frost$core$Object* _548;
org$frostlang$frostc$Type* _551;
frost$core$Int* _552;
frost$core$Int _553;
org$frostlang$frostc$Type* _554;
frost$core$Object* _555;
org$frostlang$frostc$Type* _557;
frost$core$Object* _558;
frost$core$Object* _561;
frost$core$Object* _563;
frost$collections$Array* _565;
frost$core$Object* _566;
frost$core$Bit _571;
bool _574;
bool _575;
frost$core$Bit _576;
bool _578;
org$frostlang$frostc$MethodDecl$Kind* _580;
org$frostlang$frostc$MethodDecl$Kind _581;
frost$core$Equatable* _582;
frost$core$Int _583;
frost$core$Int* _586;
org$frostlang$frostc$MethodDecl$Kind _588;
org$frostlang$frostc$MethodDecl$Kind _591;
frost$core$Equatable* _592;
$fn13 _593;
frost$core$Bit _594;
bool _595;
frost$core$Object* _596;
frost$core$Object* _598;
org$frostlang$frostc$MethodDecl$Kind* _603;
org$frostlang$frostc$MethodDecl$Kind _604;
frost$core$Int _605;
frost$core$Int _606;
int64_t _609;
int64_t _610;
bool _611;
frost$core$Bit _612;
bool _614;
frost$core$Int _617;
frost$core$Int* _620;
org$frostlang$frostc$Type$Kind _622;
org$frostlang$frostc$Type$Kind _625;
frost$core$Int _628;
int64_t _631;
int64_t _632;
bool _633;
frost$core$Bit _634;
bool _636;
frost$core$Int _639;
frost$core$Int* _642;
org$frostlang$frostc$Type$Kind _644;
org$frostlang$frostc$Type$Kind _647;
frost$core$Int _651;
org$frostlang$frostc$Type* _655;
org$frostlang$frostc$Symbol* _656;
org$frostlang$frostc$Position* _657;
org$frostlang$frostc$Position _658;
org$frostlang$frostc$Type$Kind _659;
org$frostlang$frostc$Type* _660;
org$frostlang$frostc$FixedArray** _663;
org$frostlang$frostc$FixedArray* _664;
bool _665;
frost$core$Bit _666;
bool _667;
frost$core$Int _669;
org$frostlang$frostc$FixedArray* _672;
frost$core$Object* _673;
frost$collections$ListView* _676;
frost$core$Int _677;
org$frostlang$frostc$Type* _678;
org$frostlang$frostc$FixedArray** _681;
org$frostlang$frostc$FixedArray* _682;
bool _683;
frost$core$Bit _684;
bool _685;
frost$core$Int _687;
org$frostlang$frostc$FixedArray* _690;
frost$core$Object* _691;
frost$collections$CollectionView* _694;
$fn14 _695;
frost$core$Int _696;
frost$core$Int _697;
int64_t _698;
int64_t _699;
int64_t _700;
frost$core$Int _701;
frost$core$Bit _702;
frost$core$Range$LTfrost$core$Int$GT _703;
$fn15 _704;
frost$collections$ListView* _705;
org$frostlang$frostc$Type* _706;
org$frostlang$frostc$Type$Kind* _708;
org$frostlang$frostc$Type$Kind _709;
frost$core$Equatable* _710;
frost$core$Int _711;
frost$core$Int* _714;
org$frostlang$frostc$Type$Kind _716;
org$frostlang$frostc$Type$Kind _719;
frost$core$Equatable* _720;
$fn16 _721;
frost$core$Bit _722;
bool _723;
frost$core$Object* _724;
frost$core$Object* _726;
org$frostlang$frostc$Type$Kind* _729;
org$frostlang$frostc$Type$Kind _730;
frost$core$Equatable* _731;
frost$core$Int _732;
frost$core$Int* _735;
org$frostlang$frostc$Type$Kind _737;
org$frostlang$frostc$Type$Kind _740;
frost$core$Equatable* _741;
$fn17 _742;
frost$core$Bit _743;
bool _744;
frost$core$Object* _745;
frost$core$Object* _747;
org$frostlang$frostc$Type$Kind* _750;
org$frostlang$frostc$Type$Kind _751;
frost$core$Equatable* _752;
frost$core$Int _753;
frost$core$Int* _756;
org$frostlang$frostc$Type$Kind _758;
org$frostlang$frostc$Type$Kind _761;
frost$core$Equatable* _762;
$fn18 _763;
frost$core$Bit _764;
bool _765;
frost$core$Object* _766;
frost$core$Object* _768;
org$frostlang$frostc$Type$Kind* _771;
org$frostlang$frostc$Type$Kind _772;
frost$core$Equatable* _773;
frost$core$Int _774;
frost$core$Int* _777;
org$frostlang$frostc$Type$Kind _779;
org$frostlang$frostc$Type$Kind _782;
frost$core$Equatable* _783;
$fn19 _784;
frost$core$Bit _785;
bool _786;
frost$core$Object* _787;
frost$core$Object* _789;
frost$core$Int _792;
org$frostlang$frostc$FixedArray** _798;
org$frostlang$frostc$FixedArray* _799;
bool _800;
frost$core$Bit _801;
bool _802;
frost$core$Int _804;
org$frostlang$frostc$FixedArray* _807;
frost$core$Object* _808;
frost$collections$ListView* _811;
$fn20 _812;
frost$core$Object* _813;
org$frostlang$frostc$Type* _814;
frost$core$Object* _815;
frost$core$Object* _817;
frost$core$Object* _819;
org$frostlang$frostc$Type* _822;
frost$core$Int* _823;
frost$core$Int _824;
org$frostlang$frostc$Type* _825;
frost$core$Object* _826;
org$frostlang$frostc$Type* _828;
frost$core$Object* _829;
frost$core$Object* _832;
frost$core$Object* _834;
frost$core$Object* _836;
frost$core$Object* _838;
frost$core$Object* _840;
frost$collections$Stack** _847;
frost$collections$Stack* _848;
frost$collections$Iterable* _849;
$fn21 _850;
frost$collections$Iterator* _851;
$fn22 _853;
frost$core$Bit _854;
bool _855;
$fn23 _858;
frost$core$Object* _859;
org$frostlang$frostc$Compiler$EnclosingContext* _860;
frost$core$Object* _861;
org$frostlang$frostc$Compiler$EnclosingContext* _863;
frost$core$Object* _864;
org$frostlang$frostc$Compiler$EnclosingContext* _868;
frost$core$Int* _869;
frost$core$Int _870;
frost$core$Int _871;
int64_t _874;
int64_t _875;
bool _876;
frost$core$Bit _877;
bool _879;
org$frostlang$frostc$IR$Block$ID$nullable* _881;
org$frostlang$frostc$IR$Block$ID$nullable _882;
org$frostlang$frostc$Variable** _884;
org$frostlang$frostc$Variable* _885;
frost$core$Object* _887;
org$frostlang$frostc$Variable* _889;
frost$core$Object* _890;
org$frostlang$frostc$Pair* _894;
org$frostlang$frostc$IR$Block$ID$nullable _895;
frost$core$Object* _896;
org$frostlang$frostc$Variable* _897;
frost$core$Object* _898;
org$frostlang$frostc$Pair* _900;
frost$core$Object* _901;
frost$core$Object* _903;
frost$core$Object* _905;
org$frostlang$frostc$Variable* _907;
frost$core$Object* _908;
frost$core$Object* _911;
org$frostlang$frostc$Compiler$EnclosingContext* _913;
frost$core$Object* _914;
frost$core$Object* _917;
frost$core$Object* _920;
frost$core$Int _923;
int64_t _926;
int64_t _927;
bool _928;
frost$core$Bit _929;
bool _931;
frost$core$Object* _934;
frost$core$Object* _936;
org$frostlang$frostc$Compiler$EnclosingContext* _938;
frost$core$Object* _939;
frost$core$Object* _942;
frost$core$Object* _945;
frost$core$Object* _948;
org$frostlang$frostc$Compiler$EnclosingContext* _950;
frost$core$Object* _951;
frost$core$Object* _955;
frost$core$Object* _958;
frost$core$Object* _961;
org$frostlang$frostc$Pair* _964;
bool _965;
frost$core$Bit _966;
bool _967;
frost$core$Object* _968;
org$frostlang$frostc$Type* _972;
org$frostlang$frostc$Type$Kind* _974;
org$frostlang$frostc$Type$Kind _975;
frost$core$Equatable* _976;
frost$core$Int _977;
frost$core$Int* _980;
org$frostlang$frostc$Type$Kind _982;
org$frostlang$frostc$Type$Kind _985;
frost$core$Equatable* _986;
$fn24 _987;
frost$core$Bit _988;
bool _989;
frost$core$Object* _990;
frost$core$Object* _992;
org$frostlang$frostc$Type$Kind* _995;
org$frostlang$frostc$Type$Kind _996;
frost$core$Equatable* _997;
frost$core$Int _998;
frost$core$Int* _1001;
org$frostlang$frostc$Type$Kind _1003;
org$frostlang$frostc$Type$Kind _1006;
frost$core$Equatable* _1007;
$fn25 _1008;
frost$core$Bit _1009;
bool _1010;
frost$core$Object* _1011;
frost$core$Object* _1013;
org$frostlang$frostc$Type$Kind* _1016;
org$frostlang$frostc$Type$Kind _1017;
frost$core$Equatable* _1018;
frost$core$Int _1019;
frost$core$Int* _1022;
org$frostlang$frostc$Type$Kind _1024;
org$frostlang$frostc$Type$Kind _1027;
frost$core$Equatable* _1028;
$fn26 _1029;
frost$core$Bit _1030;
bool _1031;
frost$core$Object* _1032;
frost$core$Object* _1034;
org$frostlang$frostc$Type$Kind* _1037;
org$frostlang$frostc$Type$Kind _1038;
frost$core$Equatable* _1039;
frost$core$Int _1040;
frost$core$Int* _1043;
org$frostlang$frostc$Type$Kind _1045;
org$frostlang$frostc$Type$Kind _1048;
frost$core$Equatable* _1049;
$fn27 _1050;
frost$core$Bit _1051;
bool _1052;
frost$core$Object* _1053;
frost$core$Object* _1055;
frost$core$Int _1058;
org$frostlang$frostc$FixedArray** _1064;
org$frostlang$frostc$FixedArray* _1065;
bool _1066;
frost$core$Bit _1067;
bool _1068;
frost$core$Int _1070;
org$frostlang$frostc$FixedArray* _1073;
frost$core$Object* _1074;
frost$collections$ListView* _1077;
$fn28 _1078;
frost$core$Object* _1079;
org$frostlang$frostc$Type* _1080;
frost$core$Object* _1081;
frost$core$Object* _1083;
frost$core$Object* _1085;
frost$core$Object* _1089;
org$frostlang$frostc$Type* _1091;
frost$core$Object* _1092;
frost$core$Object* _1095;
org$frostlang$frostc$Type* _1098;
org$frostlang$frostc$Type** _1099;
org$frostlang$frostc$Type* _1100;
org$frostlang$frostc$Type* _1101;
org$frostlang$frostc$Symbol* _1104;
frost$core$String** _1105;
frost$core$String* _1106;
org$frostlang$frostc$Symbol* _1107;
frost$core$String** _1108;
frost$core$String* _1109;
frost$core$Bit _1110;
bool _1111;
org$frostlang$frostc$Type$Kind* _1113;
org$frostlang$frostc$Type$Kind _1114;
frost$core$Equatable* _1115;
org$frostlang$frostc$Type$Kind* _1116;
org$frostlang$frostc$Type$Kind _1117;
frost$core$Equatable* _1118;
$fn29 _1119;
frost$core$Bit _1120;
frost$core$Object* _1121;
frost$core$Object* _1123;
frost$core$Bit _1129;
bool _1131;
frost$core$Object* _1132;
org$frostlang$frostc$Type* _1136;
org$frostlang$frostc$Symbol* _1137;
org$frostlang$frostc$Position* _1138;
org$frostlang$frostc$Position _1139;
org$frostlang$frostc$Type* _1140;
org$frostlang$frostc$Type$Kind* _1141;
org$frostlang$frostc$Type$Kind _1142;
org$frostlang$frostc$Type* _1143;
org$frostlang$frostc$FixedArray** _1146;
org$frostlang$frostc$FixedArray* _1147;
bool _1148;
frost$core$Bit _1149;
bool _1150;
frost$core$Int _1152;
org$frostlang$frostc$FixedArray* _1155;
frost$core$Object* _1156;
frost$collections$ListView* _1159;
frost$core$Int _1160;
org$frostlang$frostc$Type* _1161;
org$frostlang$frostc$FixedArray** _1164;
org$frostlang$frostc$FixedArray* _1165;
bool _1166;
frost$core$Bit _1167;
bool _1168;
frost$core$Int _1170;
org$frostlang$frostc$FixedArray* _1173;
frost$core$Object* _1174;
frost$collections$CollectionView* _1177;
$fn30 _1178;
frost$core$Int _1179;
frost$core$Int _1180;
int64_t _1181;
int64_t _1182;
int64_t _1183;
frost$core$Int _1184;
frost$core$Bit _1185;
frost$core$Range$LTfrost$core$Int$GT _1186;
$fn31 _1187;
frost$collections$ListView* _1188;
org$frostlang$frostc$Type** _1189;
org$frostlang$frostc$Type* _1190;
org$frostlang$frostc$Type* _1191;
frost$core$Int* _1192;
frost$core$Int _1193;
org$frostlang$frostc$Type* _1194;
frost$core$Object* _1195;
org$frostlang$frostc$Type* _1197;
frost$core$Object* _1198;
frost$core$Object* _1201;
frost$core$Object* _1203;
frost$core$Object* _1205;
frost$core$Object* _1207;
org$frostlang$frostc$Type* _1211;
org$frostlang$frostc$Type$Kind* _1212;
org$frostlang$frostc$Type$Kind _1213;
frost$core$Equatable* _1214;
frost$core$Int _1215;
frost$core$Int* _1218;
org$frostlang$frostc$Type$Kind _1220;
org$frostlang$frostc$Type$Kind _1223;
frost$core$Equatable* _1224;
$fn32 _1225;
frost$core$Bit _1226;
bool _1227;
frost$core$Object* _1228;
frost$core$Object* _1230;
org$frostlang$frostc$Type* _1233;
org$frostlang$frostc$FixedArray** _1236;
org$frostlang$frostc$FixedArray* _1237;
bool _1238;
frost$core$Bit _1239;
bool _1240;
frost$core$Int _1242;
org$frostlang$frostc$FixedArray* _1245;
frost$core$Object* _1246;
frost$core$Int _1249;
frost$core$Object* _1250;
org$frostlang$frostc$Type* _1251;
org$frostlang$frostc$Symbol* _1252;
frost$core$String** _1253;
frost$core$String* _1254;
frost$core$Bit _1255;
bool _1256;
frost$core$Object* _1257;
frost$core$Object* _1259;
org$frostlang$frostc$Type* _1263;
org$frostlang$frostc$Symbol* _1264;
org$frostlang$frostc$Position* _1265;
org$frostlang$frostc$Position _1266;
org$frostlang$frostc$Type* _1267;
org$frostlang$frostc$Type$Kind* _1268;
org$frostlang$frostc$Type$Kind _1269;
org$frostlang$frostc$Type* _1270;
org$frostlang$frostc$FixedArray** _1273;
org$frostlang$frostc$FixedArray* _1274;
bool _1275;
frost$core$Bit _1276;
bool _1277;
frost$core$Int _1279;
org$frostlang$frostc$FixedArray* _1282;
frost$core$Object* _1283;
frost$collections$ListView* _1286;
frost$core$Int _1287;
org$frostlang$frostc$Type* _1288;
org$frostlang$frostc$FixedArray** _1291;
org$frostlang$frostc$FixedArray* _1292;
bool _1293;
frost$core$Bit _1294;
bool _1295;
frost$core$Int _1297;
org$frostlang$frostc$FixedArray* _1300;
frost$core$Object* _1301;
frost$collections$CollectionView* _1304;
$fn33 _1305;
frost$core$Int _1306;
frost$core$Int _1307;
int64_t _1308;
int64_t _1309;
int64_t _1310;
frost$core$Int _1311;
frost$core$Bit _1312;
frost$core$Range$LTfrost$core$Int$GT _1313;
$fn34 _1314;
frost$collections$ListView* _1315;
org$frostlang$frostc$Type* _1316;
org$frostlang$frostc$FixedArray** _1319;
org$frostlang$frostc$FixedArray* _1320;
bool _1321;
frost$core$Bit _1322;
bool _1323;
frost$core$Int _1325;
org$frostlang$frostc$FixedArray* _1328;
frost$core$Object* _1329;
frost$core$Int _1332;
frost$core$Object* _1333;
org$frostlang$frostc$Type* _1334;
org$frostlang$frostc$Type* _1335;
frost$core$Int* _1336;
frost$core$Int _1337;
org$frostlang$frostc$Type* _1338;
frost$core$Object* _1339;
org$frostlang$frostc$Type* _1341;
frost$core$Object* _1342;
frost$core$Object* _1345;
frost$core$Object* _1347;
frost$core$Object* _1349;
frost$core$Object* _1351;
frost$core$Object* _1353;
frost$core$Object* _1355;
org$frostlang$frostc$Type* _1359;
frost$core$Object* _1360;
org$frostlang$frostc$Type* _1365;
bool _1366;
frost$core$Bit _1367;
bool _1368;
frost$core$Int _1370;
org$frostlang$frostc$Type* _1373;
org$frostlang$frostc$Type* _1374;
org$frostlang$frostc$Type* _1375;
frost$core$Object* _1377;
org$frostlang$frostc$Type* _1379;
frost$core$Object* _1380;
frost$core$Object* _1383;
bool _1386;
frost$core$Bit _1387;
bool _1388;
frost$core$Weak** _1391;
frost$core$Weak* _1392;
frost$core$Bit* _1397;
frost$core$Bit _1398;
bool _1400;
frost$core$Int _1402;
frost$core$Object** _1406;
frost$core$Object* _1407;
frost$core$Object* _1408;
frost$core$Object* _1409;
org$frostlang$frostc$ClassDecl* _1412;
frost$core$String** _1413;
frost$core$String* _1414;
frost$core$String* _1415;
org$frostlang$frostc$Symbol* _1416;
frost$core$String** _1417;
frost$core$String* _1418;
frost$core$String* _1419;
frost$core$String* _1420;
frost$core$Object* _1422;
frost$core$String* _1424;
frost$core$Object* _1425;
frost$core$Object* _1428;
frost$core$Object* _1430;
frost$core$Object* _1432;
frost$core$Object* _1434;
frost$collections$HashMap* _1437;
frost$core$Object* _1440;
frost$collections$HashMap* _1442;
frost$core$Object* _1443;
frost$core$Object* _1446;
frost$core$Int _1449;
bool _1450;
frost$core$Bit _1451;
bool _1452;
frost$core$Int _1454;
frost$collections$CollectionView* _1457;
$fn35 _1458;
frost$core$Int _1459;
frost$core$Bit _1460;
frost$core$Range$LTfrost$core$Int$GT _1461;
frost$core$Int _1462;
frost$core$Int _1464;
frost$core$Bit _1465;
bool _1466;
frost$core$Int _1467;
int64_t _1469;
int64_t _1470;
bool _1471;
frost$core$Bit _1472;
bool _1473;
int64_t _1475;
int64_t _1476;
bool _1477;
frost$core$Bit _1478;
bool _1479;
frost$collections$HashMap* _1482;
frost$core$String* _1483;
frost$collections$Array** _1484;
frost$collections$Array* _1485;
bool _1486;
frost$core$Bit _1487;
bool _1488;
frost$core$Int _1490;
frost$collections$Array* _1493;
frost$core$Int _1494;
frost$core$Int _1496;
int64_t _1497;
int64_t _1498;
bool _1499;
frost$core$Bit _1500;
bool _1501;
frost$collections$CollectionView* _1503;
$fn36 _1504;
frost$core$Int _1505;
int64_t _1506;
int64_t _1507;
bool _1508;
frost$core$Bit _1509;
bool _1510;
frost$core$Int _1512;
frost$unsafe$Pointer* _1516;
frost$unsafe$Pointer _1517;
int64_t _1518;
frost$core$Int64 _1519;
int64_t _1520;
frost$core$Object* _1521;
frost$core$Object* _1522;
org$frostlang$frostc$MethodDecl$GenericParameter* _1525;
org$frostlang$frostc$Symbol* _1526;
frost$core$String** _1527;
frost$core$String* _1528;
frost$core$String* _1529;
frost$collections$HashKey* _1530;
bool _1531;
frost$core$Bit _1532;
bool _1533;
frost$core$Int _1535;
frost$collections$ListView* _1538;
frost$core$Int _1539;
$fn37 _1540;
frost$core$Object* _1541;
org$frostlang$frostc$Type* _1542;
frost$core$Object* _1543;
frost$core$Object* _1545;
frost$core$Object* _1547;
frost$core$Object* _1549;
frost$core$Int _1552;
int64_t _1553;
int64_t _1554;
int64_t _1555;
frost$core$Int _1556;
int64_t _1558;
int64_t _1559;
bool _1560;
frost$core$Bit _1561;
bool _1562;
int64_t _1564;
int64_t _1565;
bool _1566;
frost$core$Bit _1567;
bool _1568;
int64_t _1570;
int64_t _1571;
int64_t _1572;
frost$core$Int _1573;
org$frostlang$frostc$Type* _1577;
frost$collections$HashMap* _1578;
org$frostlang$frostc$Type* _1579;
frost$core$Object* _1580;
org$frostlang$frostc$Type** _1582;
org$frostlang$frostc$Type* _1583;
frost$core$Object* _1584;
org$frostlang$frostc$Type** _1586;
frost$core$Object* _1588;
frost$collections$HashMap* _1590;
frost$core$Object* _1591;
frost$core$String* _1594;
frost$core$Object* _1595;
org$frostlang$frostc$Type* _1601;
frost$core$Object* _1602;
org$frostlang$frostc$Type** _1604;
org$frostlang$frostc$Type* _1605;
frost$core$Object* _1606;
org$frostlang$frostc$Type** _1608;
org$frostlang$frostc$Type* _1611;
frost$core$Object* _1612;
org$frostlang$frostc$Pair* _1615;
frost$core$Object* _1616;
org$frostlang$frostc$Type* _1619;
frost$core$Object* _1620;
org$frostlang$frostc$Type* _1623;
frost$core$Object* _1624;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:35
_1 = &param3->resolved;
_2 = *_1;
org$frostlang$frostc$Compiler$Resolution$wrapper* $tmp38;
$tmp38 = (org$frostlang$frostc$Compiler$Resolution$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Compiler$Resolution$wrapper), (frost$core$Class*) &org$frostlang$frostc$Compiler$Resolution$wrapperclass);
$tmp38->value = _2;
_3 = ((frost$core$Equatable*) $tmp38);
_4 = (frost$core$Int) {0u};
// begin inline call to org.frostlang.frostc.Compiler.Resolution.init(rv:frost.core.Int):org.frostlang.frostc.Compiler.Resolution from MethodRef.frost:35:53
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:44
_7 = &(&local1)->$rawValue;
*_7 = _4;
_9 = *(&local1);
*(&local0) = _9;
_12 = *(&local0);
org$frostlang$frostc$Compiler$Resolution$wrapper* $tmp39;
$tmp39 = (org$frostlang$frostc$Compiler$Resolution$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Compiler$Resolution$wrapper), (frost$core$Class*) &org$frostlang$frostc$Compiler$Resolution$wrapperclass);
$tmp39->value = _12;
_13 = ((frost$core$Equatable*) $tmp39);
ITable* $tmp40 = _3->$class->itable;
while ($tmp40->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp40 = $tmp40->next;
}
_14 = $tmp40->methods[1];
_15 = _14(_3, _13);
_16 = _15.value;
if (_16) goto block2; else goto block3;
block3:;
_18 = (frost$core$Int) {35u};
_19 = org$frostlang$frostc$MethodDecl$get_signature$R$frost$core$String(param3);
_20 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s41, _19);
_21 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_20, &$s42);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s43, _18, _21);
_23 = ((frost$core$Object*) _21);
frost$core$Frost$unref$frost$core$Object$Q(_23);
_25 = ((frost$core$Object*) _20);
frost$core$Frost$unref$frost$core$Object$Q(_25);
_27 = ((frost$core$Object*) _19);
frost$core$Frost$unref$frost$core$Object$Q(_27);
abort(); // unreachable
block2:;
_30 = ((frost$core$Object*) _13);
frost$core$Frost$unref$frost$core$Object$Q(_30);
_32 = ((frost$core$Object*) _3);
frost$core$Frost$unref$frost$core$Object$Q(_32);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:37
_35 = param4 == NULL;
_36 = (frost$core$Bit) {_35};
_37 = _36.value;
if (_37) goto block4; else goto block5;
block4:;
_39 = &param3->genericParameters;
_40 = *_39;
_41 = _40 != NULL;
_42 = (frost$core$Bit) {_41};
*(&local2) = _42;
goto block6;
block5:;
*(&local2) = _36;
goto block6;
block6:;
_47 = *(&local2);
_48 = &param0->requiresTypeInference;
*_48 = _47;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:38
_51 = ((frost$core$Object*) param3);
frost$core$Frost$ref$frost$core$Object$Q(_51);
_53 = &param0->value;
_54 = *_53;
_55 = ((frost$core$Object*) _54);
frost$core$Frost$unref$frost$core$Object$Q(_55);
_57 = &param0->value;
*_57 = param3;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:39
_60 = ((frost$core$Object*) param2);
frost$core$Frost$ref$frost$core$Object$Q(_60);
_62 = &param0->target;
_63 = *_62;
_64 = ((frost$core$Object*) _63);
frost$core$Frost$unref$frost$core$Object$Q(_64);
_66 = &param0->target;
*_66 = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:40
_69 = &param3->owner;
_70 = *_69;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from MethodRef.frost:40:53
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
_75 = &_70->_valid;
_76 = *_75;
_78 = _76.value;
if (_78) goto block9; else goto block10;
block10:;
_80 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s44, _80, &$s45);
abort(); // unreachable
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
_84 = &_70->value;
_85 = *_84;
_86 = _85;
_87 = _86;
frost$core$Frost$ref$frost$core$Object$Q(_87);
_90 = ((org$frostlang$frostc$ClassDecl*) _86);
_91 = org$frostlang$frostc$Compiler$findType$org$frostlang$frostc$Type$org$frostlang$frostc$ClassDecl$R$org$frostlang$frostc$Type$Q(param1, param2, _90);
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
_93 = ((frost$core$Object*) _91);
frost$core$Frost$ref$frost$core$Object$Q(_93);
_95 = *(&local3);
_96 = ((frost$core$Object*) _95);
frost$core$Frost$unref$frost$core$Object$Q(_96);
*(&local3) = _91;
_99 = ((frost$core$Object*) _91);
frost$core$Frost$unref$frost$core$Object$Q(_99);
_101 = _86;
frost$core$Frost$unref$frost$core$Object$Q(_101);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:41
_104 = *(&local3);
_105 = _104 != NULL;
_106 = (frost$core$Bit) {_105};
_107 = _106.value;
if (_107) goto block11; else goto block12;
block12:;
_109 = (frost$core$Int) {41u};
_110 = ((frost$core$Object*) param2);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from MethodRef.frost:41:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
_113 = ($fn46) _110->$class->vtable[0];
_114 = _113(_110);
_115 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s47, _114);
_116 = ((frost$core$Object*) _115);
frost$core$Frost$ref$frost$core$Object$Q(_116);
_118 = ((frost$core$Object*) _115);
frost$core$Frost$unref$frost$core$Object$Q(_118);
_120 = ((frost$core$Object*) _114);
frost$core$Frost$unref$frost$core$Object$Q(_120);
_123 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_115, &$s48);
_124 = &param3->owner;
_125 = *_124;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from MethodRef.frost:41:60
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
_130 = &_125->_valid;
_131 = *_130;
_133 = _131.value;
if (_133) goto block16; else goto block17;
block17:;
_135 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s49, _135, &$s50);
abort(); // unreachable
block16:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
_139 = &_125->value;
_140 = *_139;
_141 = _140;
_142 = _141;
frost$core$Frost$ref$frost$core$Object$Q(_142);
_145 = ((org$frostlang$frostc$ClassDecl*) _141);
_146 = &_145->name;
_147 = *_146;
_148 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_123, _147);
_149 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_148, &$s51);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s52, _109, _149);
_151 = ((frost$core$Object*) _149);
frost$core$Frost$unref$frost$core$Object$Q(_151);
_153 = ((frost$core$Object*) _148);
frost$core$Frost$unref$frost$core$Object$Q(_153);
_155 = _141;
frost$core$Frost$unref$frost$core$Object$Q(_155);
_157 = ((frost$core$Object*) _123);
frost$core$Frost$unref$frost$core$Object$Q(_157);
_159 = ((frost$core$Object*) _115);
frost$core$Frost$unref$frost$core$Object$Q(_159);
abort(); // unreachable
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:42
_163 = org$frostlang$frostc$MethodDecl$type$org$frostlang$frostc$Compiler$R$org$frostlang$frostc$Type(param3, param1);
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
_165 = ((frost$core$Object*) _163);
frost$core$Frost$ref$frost$core$Object$Q(_165);
_167 = *(&local4);
_168 = ((frost$core$Object*) _167);
frost$core$Frost$unref$frost$core$Object$Q(_168);
*(&local4) = _163;
_171 = ((frost$core$Object*) _163);
frost$core$Frost$unref$frost$core$Object$Q(_171);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:43
_174 = &param3->annotations;
_175 = *_174;
// begin inline call to function org.frostlang.frostc.Annotations.get_isClass():frost.core.Bit from MethodRef.frost:43:30
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:125
_178 = &_175->flags;
_179 = *_178;
_180 = (frost$core$Int) {16u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:125:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:293
_183 = _179.value;
_184 = _180.value;
_185 = _183 & _184;
_186 = (frost$core$Int) {_185};
_188 = (frost$core$Int) {0u};
_189 = _186.value;
_190 = _188.value;
_191 = _189 != _190;
_192 = (frost$core$Bit) {_191};
// begin inline call to function frost.core.Bit.!():frost.core.Bit from MethodRef.frost:43:12
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
_196 = _192.value;
_197 = !_196;
_198 = (frost$core$Bit) {_197};
_200 = _198.value;
if (_200) goto block22; else goto block20;
block22:;
_202 = &param3->methodKind;
_203 = *_202;
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp53;
$tmp53 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$MethodDecl$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp53->value = _203;
_204 = ((frost$core$Equatable*) $tmp53);
_205 = (frost$core$Int) {2u};
// begin inline call to org.frostlang.frostc.MethodDecl.Kind.init(rv:frost.core.Int):org.frostlang.frostc.MethodDecl.Kind from MethodRef.frost:43:76
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:7
_208 = &(&local6)->$rawValue;
*_208 = _205;
_210 = *(&local6);
*(&local5) = _210;
_213 = *(&local5);
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp54;
$tmp54 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$MethodDecl$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp54->value = _213;
_214 = ((frost$core$Equatable*) $tmp54);
ITable* $tmp55 = _204->$class->itable;
while ($tmp55->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp55 = $tmp55->next;
}
_215 = $tmp55->methods[1];
_216 = _215(_204, _214);
_217 = _216.value;
_218 = ((frost$core$Object*) _214);
frost$core$Frost$unref$frost$core$Object$Q(_218);
_220 = ((frost$core$Object*) _204);
frost$core$Frost$unref$frost$core$Object$Q(_220);
if (_217) goto block21; else goto block20;
block21:;
// begin inline call to function org.frostlang.frostc.Type.get_isClassLiteral():frost.core.Bit from MethodRef.frost:44:23
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:379
_225 = &param2->typeKind;
_226 = *_225;
org$frostlang$frostc$Type$Kind$wrapper* $tmp56;
$tmp56 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp56->value = _226;
_227 = ((frost$core$Equatable*) $tmp56);
_228 = (frost$core$Int) {11u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:379:31
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_231 = &(&local9)->$rawValue;
*_231 = _228;
_233 = *(&local9);
*(&local8) = _233;
_236 = *(&local8);
org$frostlang$frostc$Type$Kind$wrapper* $tmp57;
$tmp57 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp57->value = _236;
_237 = ((frost$core$Equatable*) $tmp57);
ITable* $tmp58 = _227->$class->itable;
while ($tmp58->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp58 = $tmp58->next;
}
_238 = $tmp58->methods[0];
_239 = _238(_227, _237);
_240 = _239.value;
if (_240) goto block29; else goto block30;
block29:;
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:379:42
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:246
_244 = &param2->_subtypes;
_245 = *_244;
_246 = _245 != NULL;
_247 = (frost$core$Bit) {_246};
_248 = _247.value;
if (_248) goto block33; else goto block34;
block34:;
_250 = (frost$core$Int) {246u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s59, _250, &$s60);
abort(); // unreachable
block33:;
_253 = _245;
_254 = ((frost$core$Object*) _253);
frost$core$Frost$ref$frost$core$Object$Q(_254);
_257 = (frost$core$Int) {0u};
_258 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T(_253, _257);
_259 = ((org$frostlang$frostc$Type*) _258);
_260 = ((org$frostlang$frostc$Symbol*) _259);
_261 = &_260->name;
_262 = *_261;
_263 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(_262, &$s61);
_264 = _258;
frost$core$Frost$unref$frost$core$Object$Q(_264);
_266 = ((frost$core$Object*) _253);
frost$core$Frost$unref$frost$core$Object$Q(_266);
*(&local7) = _263;
goto block31;
block30:;
*(&local7) = _239;
goto block31;
block31:;
_272 = *(&local7);
_273 = ((frost$core$Object*) _237);
frost$core$Frost$unref$frost$core$Object$Q(_273);
_275 = ((frost$core$Object*) _227);
frost$core$Frost$unref$frost$core$Object$Q(_275);
_278 = _272.value;
if (_278) goto block18; else goto block20;
block18:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:45
_281 = (frost$collections$Array*) frostObjectAlloc(sizeof(frost$collections$Array), (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init(_281);
*(&local10) = ((frost$collections$Array*) NULL);
_284 = ((frost$core$Object*) _281);
frost$core$Frost$ref$frost$core$Object$Q(_284);
_286 = *(&local10);
_287 = ((frost$core$Object*) _286);
frost$core$Frost$unref$frost$core$Object$Q(_287);
*(&local10) = _281;
_290 = ((frost$core$Object*) _281);
frost$core$Frost$unref$frost$core$Object$Q(_290);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:46
_293 = *(&local10);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from MethodRef.frost:46:38
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:246
_296 = &param2->_subtypes;
_297 = *_296;
_298 = _297 != NULL;
_299 = (frost$core$Bit) {_298};
_300 = _299.value;
if (_300) goto block36; else goto block37;
block37:;
_302 = (frost$core$Int) {246u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s62, _302, &$s63);
abort(); // unreachable
block36:;
_305 = _297;
_306 = ((frost$core$Object*) _305);
frost$core$Frost$ref$frost$core$Object$Q(_306);
_309 = (frost$core$Int) {1u};
_310 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T(_305, _309);
_311 = ((org$frostlang$frostc$Type*) _310);
_312 = ((frost$core$Object*) _311);
frost$collections$Array$add$frost$collections$Array$T(_293, _312);
_314 = _310;
frost$core$Frost$unref$frost$core$Object$Q(_314);
_316 = ((frost$core$Object*) _305);
frost$core$Frost$unref$frost$core$Object$Q(_316);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:47
_319 = *(&local10);
_320 = *(&local4);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from MethodRef.frost:47:45
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:246
_323 = &_320->_subtypes;
_324 = *_323;
_325 = _324 != NULL;
_326 = (frost$core$Bit) {_325};
_327 = _326.value;
if (_327) goto block39; else goto block40;
block40:;
_329 = (frost$core$Int) {246u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s64, _329, &$s65);
abort(); // unreachable
block39:;
_332 = _324;
_333 = ((frost$core$Object*) _332);
frost$core$Frost$ref$frost$core$Object$Q(_333);
_336 = ((frost$collections$ListView*) _332);
_337 = (frost$core$Int) {0u};
_338 = *(&local4);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from MethodRef.frost:47:70
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:246
_341 = &_338->_subtypes;
_342 = *_341;
_343 = _342 != NULL;
_344 = (frost$core$Bit) {_343};
_345 = _344.value;
if (_345) goto block42; else goto block43;
block43:;
_347 = (frost$core$Int) {246u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s66, _347, &$s67);
abort(); // unreachable
block42:;
_350 = _342;
_351 = ((frost$core$Object*) _350);
frost$core$Frost$ref$frost$core$Object$Q(_351);
_354 = ((frost$collections$CollectionView*) _350);
ITable* $tmp68 = _354->$class->itable;
while ($tmp68->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp68 = $tmp68->next;
}
_355 = $tmp68->methods[0];
_356 = _355(_354);
_357 = (frost$core$Int) {1u};
_358 = _356.value;
_359 = _357.value;
_360 = _358 - _359;
_361 = (frost$core$Int) {_360};
_362 = (frost$core$Bit) {false};
_363 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit(_337, _361, _362);
ITable* $tmp69 = _336->$class->itable;
while ($tmp69->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp69 = $tmp69->next;
}
_364 = $tmp69->methods[1];
_365 = _364(_336, _363);
_366 = ((frost$collections$CollectionView*) _365);
frost$collections$Array$addAll$frost$collections$CollectionView$LTfrost$collections$Array$T$GT(_319, _366);
_368 = ((frost$core$Object*) _365);
frost$core$Frost$unref$frost$core$Object$Q(_368);
_370 = ((frost$core$Object*) _350);
frost$core$Frost$unref$frost$core$Object$Q(_370);
_372 = ((frost$core$Object*) _332);
frost$core$Frost$unref$frost$core$Object$Q(_372);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:48
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:49
_376 = &param3->methodKind;
_377 = *_376;
_378 = _377.$rawValue;
_379 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from MethodRef.frost:50:37
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_382 = _378.value;
_383 = _379.value;
_384 = _382 == _383;
_385 = (frost$core$Bit) {_384};
_387 = _385.value;
if (_387) goto block45; else goto block46;
block45:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:51
_390 = (frost$core$Int) {18u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from MethodRef.frost:51:42
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_393 = &(&local13)->$rawValue;
*_393 = _390;
_395 = *(&local13);
*(&local12) = _395;
_398 = *(&local12);
*(&local11) = _398;
goto block44;
block46:;
_401 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from MethodRef.frost:53:37
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_404 = _378.value;
_405 = _401.value;
_406 = _404 == _405;
_407 = (frost$core$Bit) {_406};
_409 = _407.value;
if (_409) goto block49; else goto block50;
block49:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:54
_412 = (frost$core$Int) {17u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from MethodRef.frost:54:42
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_415 = &(&local15)->$rawValue;
*_415 = _412;
_417 = *(&local15);
*(&local14) = _417;
_420 = *(&local14);
*(&local11) = _420;
goto block44;
block50:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:57
_424 = (frost$core$Int) {57u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s70, _424);
abort(); // unreachable
block44:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:60
_428 = *(&local4);
_429 = ((org$frostlang$frostc$Symbol*) _428);
_430 = &_429->position;
_431 = *_430;
_432 = *(&local11);
_433 = *(&local10);
_434 = ((frost$collections$ListView*) _433);
_435 = *(&local4);
// begin inline call to function org.frostlang.frostc.Type.get_returnType():org.frostlang.frostc.Type from MethodRef.frost:61:31
_437 = &_435->typeKind;
_438 = *_437;
org$frostlang$frostc$Type$Kind$wrapper* $tmp71;
$tmp71 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp71->value = _438;
_439 = ((frost$core$Equatable*) $tmp71);
_440 = (frost$core$Int) {15u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:445:25
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_443 = &(&local17)->$rawValue;
*_443 = _440;
_445 = *(&local17);
*(&local16) = _445;
_448 = *(&local16);
org$frostlang$frostc$Type$Kind$wrapper* $tmp72;
$tmp72 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp72->value = _448;
_449 = ((frost$core$Equatable*) $tmp72);
ITable* $tmp73 = _439->$class->itable;
while ($tmp73->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp73 = $tmp73->next;
}
_450 = $tmp73->methods[0];
_451 = _450(_439, _449);
_452 = _451.value;
_453 = ((frost$core$Object*) _449);
frost$core$Frost$unref$frost$core$Object$Q(_453);
_455 = ((frost$core$Object*) _439);
frost$core$Frost$unref$frost$core$Object$Q(_455);
if (_452) goto block54; else goto block58;
block58:;
_458 = &_435->typeKind;
_459 = *_458;
org$frostlang$frostc$Type$Kind$wrapper* $tmp74;
$tmp74 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp74->value = _459;
_460 = ((frost$core$Equatable*) $tmp74);
_461 = (frost$core$Int) {16u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:445:52
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_464 = &(&local19)->$rawValue;
*_464 = _461;
_466 = *(&local19);
*(&local18) = _466;
_469 = *(&local18);
org$frostlang$frostc$Type$Kind$wrapper* $tmp75;
$tmp75 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp75->value = _469;
_470 = ((frost$core$Equatable*) $tmp75);
ITable* $tmp76 = _460->$class->itable;
while ($tmp76->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp76 = $tmp76->next;
}
_471 = $tmp76->methods[0];
_472 = _471(_460, _470);
_473 = _472.value;
_474 = ((frost$core$Object*) _470);
frost$core$Frost$unref$frost$core$Object$Q(_474);
_476 = ((frost$core$Object*) _460);
frost$core$Frost$unref$frost$core$Object$Q(_476);
if (_473) goto block54; else goto block57;
block57:;
_479 = &_435->typeKind;
_480 = *_479;
org$frostlang$frostc$Type$Kind$wrapper* $tmp77;
$tmp77 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp77->value = _480;
_481 = ((frost$core$Equatable*) $tmp77);
_482 = (frost$core$Int) {17u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:445:77
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_485 = &(&local21)->$rawValue;
*_485 = _482;
_487 = *(&local21);
*(&local20) = _487;
_490 = *(&local20);
org$frostlang$frostc$Type$Kind$wrapper* $tmp78;
$tmp78 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp78->value = _490;
_491 = ((frost$core$Equatable*) $tmp78);
ITable* $tmp79 = _481->$class->itable;
while ($tmp79->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp79 = $tmp79->next;
}
_492 = $tmp79->methods[0];
_493 = _492(_481, _491);
_494 = _493.value;
_495 = ((frost$core$Object*) _491);
frost$core$Frost$unref$frost$core$Object$Q(_495);
_497 = ((frost$core$Object*) _481);
frost$core$Frost$unref$frost$core$Object$Q(_497);
if (_494) goto block54; else goto block56;
block56:;
_500 = &_435->typeKind;
_501 = *_500;
org$frostlang$frostc$Type$Kind$wrapper* $tmp80;
$tmp80 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp80->value = _501;
_502 = ((frost$core$Equatable*) $tmp80);
_503 = (frost$core$Int) {18u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:446:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_506 = &(&local23)->$rawValue;
*_506 = _503;
_508 = *(&local23);
*(&local22) = _508;
_511 = *(&local22);
org$frostlang$frostc$Type$Kind$wrapper* $tmp81;
$tmp81 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp81->value = _511;
_512 = ((frost$core$Equatable*) $tmp81);
ITable* $tmp82 = _502->$class->itable;
while ($tmp82->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp82 = $tmp82->next;
}
_513 = $tmp82->methods[0];
_514 = _513(_502, _512);
_515 = _514.value;
_516 = ((frost$core$Object*) _512);
frost$core$Frost$unref$frost$core$Object$Q(_516);
_518 = ((frost$core$Object*) _502);
frost$core$Frost$unref$frost$core$Object$Q(_518);
if (_515) goto block54; else goto block55;
block55:;
_521 = (frost$core$Int) {447u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s83, _521, &$s84);
abort(); // unreachable
block54:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:448
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:448:16
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:246
_527 = &_435->_subtypes;
_528 = *_527;
_529 = _528 != NULL;
_530 = (frost$core$Bit) {_529};
_531 = _530.value;
if (_531) goto block64; else goto block65;
block65:;
_533 = (frost$core$Int) {246u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s85, _533, &$s86);
abort(); // unreachable
block64:;
_536 = _528;
_537 = ((frost$core$Object*) _536);
frost$core$Frost$ref$frost$core$Object$Q(_537);
_540 = ((frost$collections$ListView*) _536);
ITable* $tmp87 = _540->$class->itable;
while ($tmp87->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp87 = $tmp87->next;
}
_541 = $tmp87->methods[5];
_542 = _541(_540);
_543 = ((org$frostlang$frostc$Type*) _542);
_544 = ((frost$core$Object*) _543);
frost$core$Frost$ref$frost$core$Object$Q(_544);
_546 = _542;
frost$core$Frost$unref$frost$core$Object$Q(_546);
_548 = ((frost$core$Object*) _536);
frost$core$Frost$unref$frost$core$Object$Q(_548);
_551 = *(&local4);
_552 = &_551->priority;
_553 = *_552;
_554 = org$frostlang$frostc$Type$methodType$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$Type$Kind$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$org$frostlang$frostc$Type$frost$core$Int$R$org$frostlang$frostc$Type(param1, _431, _432, _434, _543, _553);
_555 = ((frost$core$Object*) _554);
frost$core$Frost$ref$frost$core$Object$Q(_555);
_557 = *(&local4);
_558 = ((frost$core$Object*) _557);
frost$core$Frost$unref$frost$core$Object$Q(_558);
*(&local4) = _554;
_561 = ((frost$core$Object*) _554);
frost$core$Frost$unref$frost$core$Object$Q(_561);
_563 = ((frost$core$Object*) _543);
frost$core$Frost$unref$frost$core$Object$Q(_563);
_565 = *(&local10);
_566 = ((frost$core$Object*) _565);
frost$core$Frost$unref$frost$core$Object$Q(_566);
*(&local10) = ((frost$collections$Array*) NULL);
goto block19;
block20:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:63
_571 = org$frostlang$frostc$Compiler$isImmutable$org$frostlang$frostc$Type$R$frost$core$Bit(param1, param2);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from MethodRef.frost:63:17
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
_574 = _571.value;
_575 = !_574;
_576 = (frost$core$Bit) {_575};
_578 = _576.value;
if (_578) goto block68; else goto block67;
block68:;
_580 = &param3->methodKind;
_581 = *_580;
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp88;
$tmp88 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$MethodDecl$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp88->value = _581;
_582 = ((frost$core$Equatable*) $tmp88);
_583 = (frost$core$Int) {2u};
// begin inline call to org.frostlang.frostc.MethodDecl.Kind.init(rv:frost.core.Int):org.frostlang.frostc.MethodDecl.Kind from MethodRef.frost:63:84
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:7
_586 = &(&local25)->$rawValue;
*_586 = _583;
_588 = *(&local25);
*(&local24) = _588;
_591 = *(&local24);
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp89;
$tmp89 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$MethodDecl$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp89->value = _591;
_592 = ((frost$core$Equatable*) $tmp89);
ITable* $tmp90 = _582->$class->itable;
while ($tmp90->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp90 = $tmp90->next;
}
_593 = $tmp90->methods[1];
_594 = _593(_582, _592);
_595 = _594.value;
_596 = ((frost$core$Object*) _592);
frost$core$Frost$unref$frost$core$Object$Q(_596);
_598 = ((frost$core$Object*) _582);
frost$core$Frost$unref$frost$core$Object$Q(_598);
if (_595) goto block66; else goto block67;
block66:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:64
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:65
_603 = &param3->methodKind;
_604 = *_603;
_605 = _604.$rawValue;
_606 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from MethodRef.frost:66:37
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_609 = _605.value;
_610 = _606.value;
_611 = _609 == _610;
_612 = (frost$core$Bit) {_611};
_614 = _612.value;
if (_614) goto block72; else goto block73;
block72:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:67
_617 = (frost$core$Int) {16u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from MethodRef.frost:67:42
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_620 = &(&local28)->$rawValue;
*_620 = _617;
_622 = *(&local28);
*(&local27) = _622;
_625 = *(&local27);
*(&local26) = _625;
goto block71;
block73:;
_628 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from MethodRef.frost:69:37
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_631 = _605.value;
_632 = _628.value;
_633 = _631 == _632;
_634 = (frost$core$Bit) {_633};
_636 = _634.value;
if (_636) goto block76; else goto block77;
block76:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:70
_639 = (frost$core$Int) {15u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from MethodRef.frost:70:42
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_642 = &(&local30)->$rawValue;
*_642 = _639;
_644 = *(&local30);
*(&local29) = _644;
_647 = *(&local29);
*(&local26) = _647;
goto block71;
block77:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:73
_651 = (frost$core$Int) {73u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s91, _651);
abort(); // unreachable
block71:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:76
_655 = *(&local4);
_656 = ((org$frostlang$frostc$Symbol*) _655);
_657 = &_656->position;
_658 = *_657;
_659 = *(&local26);
_660 = *(&local4);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from MethodRef.frost:77:31
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:246
_663 = &_660->_subtypes;
_664 = *_663;
_665 = _664 != NULL;
_666 = (frost$core$Bit) {_665};
_667 = _666.value;
if (_667) goto block81; else goto block82;
block82:;
_669 = (frost$core$Int) {246u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s92, _669, &$s93);
abort(); // unreachable
block81:;
_672 = _664;
_673 = ((frost$core$Object*) _672);
frost$core$Frost$ref$frost$core$Object$Q(_673);
_676 = ((frost$collections$ListView*) _672);
_677 = (frost$core$Int) {0u};
_678 = *(&local4);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from MethodRef.frost:77:56
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:246
_681 = &_678->_subtypes;
_682 = *_681;
_683 = _682 != NULL;
_684 = (frost$core$Bit) {_683};
_685 = _684.value;
if (_685) goto block84; else goto block85;
block85:;
_687 = (frost$core$Int) {246u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s94, _687, &$s95);
abort(); // unreachable
block84:;
_690 = _682;
_691 = ((frost$core$Object*) _690);
frost$core$Frost$ref$frost$core$Object$Q(_691);
_694 = ((frost$collections$CollectionView*) _690);
ITable* $tmp96 = _694->$class->itable;
while ($tmp96->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp96 = $tmp96->next;
}
_695 = $tmp96->methods[0];
_696 = _695(_694);
_697 = (frost$core$Int) {1u};
_698 = _696.value;
_699 = _697.value;
_700 = _698 - _699;
_701 = (frost$core$Int) {_700};
_702 = (frost$core$Bit) {false};
_703 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit(_677, _701, _702);
ITable* $tmp97 = _676->$class->itable;
while ($tmp97->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp97 = $tmp97->next;
}
_704 = $tmp97->methods[1];
_705 = _704(_676, _703);
_706 = *(&local4);
// begin inline call to function org.frostlang.frostc.Type.get_returnType():org.frostlang.frostc.Type from MethodRef.frost:78:31
_708 = &_706->typeKind;
_709 = *_708;
org$frostlang$frostc$Type$Kind$wrapper* $tmp98;
$tmp98 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp98->value = _709;
_710 = ((frost$core$Equatable*) $tmp98);
_711 = (frost$core$Int) {15u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:445:25
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_714 = &(&local32)->$rawValue;
*_714 = _711;
_716 = *(&local32);
*(&local31) = _716;
_719 = *(&local31);
org$frostlang$frostc$Type$Kind$wrapper* $tmp99;
$tmp99 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp99->value = _719;
_720 = ((frost$core$Equatable*) $tmp99);
ITable* $tmp100 = _710->$class->itable;
while ($tmp100->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp100 = $tmp100->next;
}
_721 = $tmp100->methods[0];
_722 = _721(_710, _720);
_723 = _722.value;
_724 = ((frost$core$Object*) _720);
frost$core$Frost$unref$frost$core$Object$Q(_724);
_726 = ((frost$core$Object*) _710);
frost$core$Frost$unref$frost$core$Object$Q(_726);
if (_723) goto block87; else goto block91;
block91:;
_729 = &_706->typeKind;
_730 = *_729;
org$frostlang$frostc$Type$Kind$wrapper* $tmp101;
$tmp101 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp101->value = _730;
_731 = ((frost$core$Equatable*) $tmp101);
_732 = (frost$core$Int) {16u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:445:52
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_735 = &(&local34)->$rawValue;
*_735 = _732;
_737 = *(&local34);
*(&local33) = _737;
_740 = *(&local33);
org$frostlang$frostc$Type$Kind$wrapper* $tmp102;
$tmp102 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp102->value = _740;
_741 = ((frost$core$Equatable*) $tmp102);
ITable* $tmp103 = _731->$class->itable;
while ($tmp103->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp103 = $tmp103->next;
}
_742 = $tmp103->methods[0];
_743 = _742(_731, _741);
_744 = _743.value;
_745 = ((frost$core$Object*) _741);
frost$core$Frost$unref$frost$core$Object$Q(_745);
_747 = ((frost$core$Object*) _731);
frost$core$Frost$unref$frost$core$Object$Q(_747);
if (_744) goto block87; else goto block90;
block90:;
_750 = &_706->typeKind;
_751 = *_750;
org$frostlang$frostc$Type$Kind$wrapper* $tmp104;
$tmp104 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp104->value = _751;
_752 = ((frost$core$Equatable*) $tmp104);
_753 = (frost$core$Int) {17u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:445:77
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_756 = &(&local36)->$rawValue;
*_756 = _753;
_758 = *(&local36);
*(&local35) = _758;
_761 = *(&local35);
org$frostlang$frostc$Type$Kind$wrapper* $tmp105;
$tmp105 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp105->value = _761;
_762 = ((frost$core$Equatable*) $tmp105);
ITable* $tmp106 = _752->$class->itable;
while ($tmp106->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp106 = $tmp106->next;
}
_763 = $tmp106->methods[0];
_764 = _763(_752, _762);
_765 = _764.value;
_766 = ((frost$core$Object*) _762);
frost$core$Frost$unref$frost$core$Object$Q(_766);
_768 = ((frost$core$Object*) _752);
frost$core$Frost$unref$frost$core$Object$Q(_768);
if (_765) goto block87; else goto block89;
block89:;
_771 = &_706->typeKind;
_772 = *_771;
org$frostlang$frostc$Type$Kind$wrapper* $tmp107;
$tmp107 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp107->value = _772;
_773 = ((frost$core$Equatable*) $tmp107);
_774 = (frost$core$Int) {18u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:446:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_777 = &(&local38)->$rawValue;
*_777 = _774;
_779 = *(&local38);
*(&local37) = _779;
_782 = *(&local37);
org$frostlang$frostc$Type$Kind$wrapper* $tmp108;
$tmp108 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp108->value = _782;
_783 = ((frost$core$Equatable*) $tmp108);
ITable* $tmp109 = _773->$class->itable;
while ($tmp109->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp109 = $tmp109->next;
}
_784 = $tmp109->methods[0];
_785 = _784(_773, _783);
_786 = _785.value;
_787 = ((frost$core$Object*) _783);
frost$core$Frost$unref$frost$core$Object$Q(_787);
_789 = ((frost$core$Object*) _773);
frost$core$Frost$unref$frost$core$Object$Q(_789);
if (_786) goto block87; else goto block88;
block88:;
_792 = (frost$core$Int) {447u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s110, _792, &$s111);
abort(); // unreachable
block87:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:448
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:448:16
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:246
_798 = &_706->_subtypes;
_799 = *_798;
_800 = _799 != NULL;
_801 = (frost$core$Bit) {_800};
_802 = _801.value;
if (_802) goto block97; else goto block98;
block98:;
_804 = (frost$core$Int) {246u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s112, _804, &$s113);
abort(); // unreachable
block97:;
_807 = _799;
_808 = ((frost$core$Object*) _807);
frost$core$Frost$ref$frost$core$Object$Q(_808);
_811 = ((frost$collections$ListView*) _807);
ITable* $tmp114 = _811->$class->itable;
while ($tmp114->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp114 = $tmp114->next;
}
_812 = $tmp114->methods[5];
_813 = _812(_811);
_814 = ((org$frostlang$frostc$Type*) _813);
_815 = ((frost$core$Object*) _814);
frost$core$Frost$ref$frost$core$Object$Q(_815);
_817 = _813;
frost$core$Frost$unref$frost$core$Object$Q(_817);
_819 = ((frost$core$Object*) _807);
frost$core$Frost$unref$frost$core$Object$Q(_819);
_822 = *(&local4);
_823 = &_822->priority;
_824 = *_823;
_825 = org$frostlang$frostc$Type$methodType$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$Type$Kind$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$org$frostlang$frostc$Type$frost$core$Int$R$org$frostlang$frostc$Type(param1, _658, _659, _705, _814, _824);
_826 = ((frost$core$Object*) _825);
frost$core$Frost$ref$frost$core$Object$Q(_826);
_828 = *(&local4);
_829 = ((frost$core$Object*) _828);
frost$core$Frost$unref$frost$core$Object$Q(_829);
*(&local4) = _825;
_832 = ((frost$core$Object*) _825);
frost$core$Frost$unref$frost$core$Object$Q(_832);
_834 = ((frost$core$Object*) _814);
frost$core$Frost$unref$frost$core$Object$Q(_834);
_836 = ((frost$core$Object*) _705);
frost$core$Frost$unref$frost$core$Object$Q(_836);
_838 = ((frost$core$Object*) _690);
frost$core$Frost$unref$frost$core$Object$Q(_838);
_840 = ((frost$core$Object*) _672);
frost$core$Frost$unref$frost$core$Object$Q(_840);
goto block67;
block67:;
goto block19;
block19:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:80
// begin inline call to function org.frostlang.frostc.Compiler.getTryScope():org.frostlang.frostc.Pair<org.frostlang.frostc.IR.Block.ID?, org.frostlang.frostc.Variable?>? from MethodRef.frost:80:32
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5068
_847 = &param1->enclosingContexts;
_848 = *_847;
_849 = ((frost$collections$Iterable*) _848);
ITable* $tmp115 = _849->$class->itable;
while ($tmp115->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp115 = $tmp115->next;
}
_850 = $tmp115->methods[0];
_851 = _850(_849);
goto block102;
block102:;
ITable* $tmp116 = _851->$class->itable;
while ($tmp116->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp116 = $tmp116->next;
}
_853 = $tmp116->methods[0];
_854 = _853(_851);
_855 = _854.value;
if (_855) goto block104; else goto block103;
block103:;
*(&local40) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
ITable* $tmp117 = _851->$class->itable;
while ($tmp117->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp117 = $tmp117->next;
}
_858 = $tmp117->methods[1];
_859 = _858(_851);
_860 = ((org$frostlang$frostc$Compiler$EnclosingContext*) _859);
_861 = ((frost$core$Object*) _860);
frost$core$Frost$ref$frost$core$Object$Q(_861);
_863 = *(&local40);
_864 = ((frost$core$Object*) _863);
frost$core$Frost$unref$frost$core$Object$Q(_864);
*(&local40) = _860;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5069
_868 = *(&local40);
_869 = &_868->$rawValue;
_870 = *_869;
_871 = (frost$core$Int) {5u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Compiler.frost:5070:38
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_874 = _870.value;
_875 = _871.value;
_876 = _874 == _875;
_877 = (frost$core$Bit) {_876};
_879 = _877.value;
if (_879) goto block106; else goto block107;
block106:;
_881 = &_868->$data.$TRY_SCOPE.field0;
_882 = *_881;
*(&local41) = _882;
_884 = &_868->$data.$TRY_SCOPE.field1;
_885 = *_884;
*(&local42) = ((org$frostlang$frostc$Variable*) NULL);
_887 = ((frost$core$Object*) _885);
frost$core$Frost$ref$frost$core$Object$Q(_887);
_889 = *(&local42);
_890 = ((frost$core$Object*) _889);
frost$core$Frost$unref$frost$core$Object$Q(_890);
*(&local42) = _885;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5071
_894 = (org$frostlang$frostc$Pair*) frostObjectAlloc(sizeof(org$frostlang$frostc$Pair), (frost$core$Class*) &org$frostlang$frostc$Pair$class);
_895 = *(&local41);
frost$core$Object* $tmp118;
if (_895.nonnull) {
    org$frostlang$frostc$IR$Block$ID$wrapper* $tmp119;
    $tmp119 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$IR$Block$ID$wrapper), (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
    $tmp119->value = ((org$frostlang$frostc$IR$Block$ID) _895.value);
    $tmp118 = ((frost$core$Object*) $tmp119);
}
else {
    $tmp118 = NULL;
}
_896 = $tmp118;
_897 = *(&local42);
_898 = ((frost$core$Object*) _897);
org$frostlang$frostc$Pair$init$org$frostlang$frostc$Pair$A$org$frostlang$frostc$Pair$B(_894, _896, _898);
_900 = _894;
_901 = ((frost$core$Object*) _900);
frost$core$Frost$ref$frost$core$Object$Q(_901);
_903 = _896;
frost$core$Frost$unref$frost$core$Object$Q(_903);
_905 = ((frost$core$Object*) _894);
frost$core$Frost$unref$frost$core$Object$Q(_905);
_907 = *(&local42);
_908 = ((frost$core$Object*) _907);
frost$core$Frost$unref$frost$core$Object$Q(_908);
*(&local42) = ((org$frostlang$frostc$Variable*) NULL);
_911 = _859;
frost$core$Frost$unref$frost$core$Object$Q(_911);
_913 = *(&local40);
_914 = ((frost$core$Object*) _913);
frost$core$Frost$unref$frost$core$Object$Q(_914);
*(&local40) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
_917 = ((frost$core$Object*) _851);
frost$core$Frost$unref$frost$core$Object$Q(_917);
*(&local39) = _900;
_920 = ((frost$core$Object*) _900);
frost$core$Frost$ref$frost$core$Object$Q(_920);
goto block101;
block107:;
_923 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Compiler.frost:5073:38
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_926 = _870.value;
_927 = _923.value;
_928 = _926 == _927;
_929 = (frost$core$Bit) {_928};
_931 = _929.value;
if (_931) goto block109; else goto block105;
block109:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5074
_934 = ((frost$core$Object*) ((org$frostlang$frostc$Pair*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_934);
_936 = _859;
frost$core$Frost$unref$frost$core$Object$Q(_936);
_938 = *(&local40);
_939 = ((frost$core$Object*) _938);
frost$core$Frost$unref$frost$core$Object$Q(_939);
*(&local40) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
_942 = ((frost$core$Object*) _851);
frost$core$Frost$unref$frost$core$Object$Q(_942);
*(&local39) = ((org$frostlang$frostc$Pair*) NULL);
_945 = ((frost$core$Object*) ((org$frostlang$frostc$Pair*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_945);
goto block101;
block105:;
_948 = _859;
frost$core$Frost$unref$frost$core$Object$Q(_948);
_950 = *(&local40);
_951 = ((frost$core$Object*) _950);
frost$core$Frost$unref$frost$core$Object$Q(_951);
*(&local40) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
goto block102;
block104:;
_955 = ((frost$core$Object*) _851);
frost$core$Frost$unref$frost$core$Object$Q(_955);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5078
_958 = ((frost$core$Object*) ((org$frostlang$frostc$Pair*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_958);
*(&local39) = ((org$frostlang$frostc$Pair*) NULL);
_961 = ((frost$core$Object*) ((org$frostlang$frostc$Pair*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_961);
goto block101;
block101:;
_964 = *(&local39);
_965 = _964 != NULL;
_966 = (frost$core$Bit) {_965};
_967 = _966.value;
_968 = ((frost$core$Object*) _964);
frost$core$Frost$unref$frost$core$Object$Q(_968);
if (_967) goto block99; else goto block100;
block99:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:81
_972 = *(&local4);
// begin inline call to function org.frostlang.frostc.Type.get_returnType():org.frostlang.frostc.Type from MethodRef.frost:81:41
_974 = &_972->typeKind;
_975 = *_974;
org$frostlang$frostc$Type$Kind$wrapper* $tmp120;
$tmp120 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp120->value = _975;
_976 = ((frost$core$Equatable*) $tmp120);
_977 = (frost$core$Int) {15u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:445:25
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_980 = &(&local44)->$rawValue;
*_980 = _977;
_982 = *(&local44);
*(&local43) = _982;
_985 = *(&local43);
org$frostlang$frostc$Type$Kind$wrapper* $tmp121;
$tmp121 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp121->value = _985;
_986 = ((frost$core$Equatable*) $tmp121);
ITable* $tmp122 = _976->$class->itable;
while ($tmp122->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp122 = $tmp122->next;
}
_987 = $tmp122->methods[0];
_988 = _987(_976, _986);
_989 = _988.value;
_990 = ((frost$core$Object*) _986);
frost$core$Frost$unref$frost$core$Object$Q(_990);
_992 = ((frost$core$Object*) _976);
frost$core$Frost$unref$frost$core$Object$Q(_992);
if (_989) goto block112; else goto block116;
block116:;
_995 = &_972->typeKind;
_996 = *_995;
org$frostlang$frostc$Type$Kind$wrapper* $tmp123;
$tmp123 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp123->value = _996;
_997 = ((frost$core$Equatable*) $tmp123);
_998 = (frost$core$Int) {16u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:445:52
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_1001 = &(&local46)->$rawValue;
*_1001 = _998;
_1003 = *(&local46);
*(&local45) = _1003;
_1006 = *(&local45);
org$frostlang$frostc$Type$Kind$wrapper* $tmp124;
$tmp124 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp124->value = _1006;
_1007 = ((frost$core$Equatable*) $tmp124);
ITable* $tmp125 = _997->$class->itable;
while ($tmp125->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp125 = $tmp125->next;
}
_1008 = $tmp125->methods[0];
_1009 = _1008(_997, _1007);
_1010 = _1009.value;
_1011 = ((frost$core$Object*) _1007);
frost$core$Frost$unref$frost$core$Object$Q(_1011);
_1013 = ((frost$core$Object*) _997);
frost$core$Frost$unref$frost$core$Object$Q(_1013);
if (_1010) goto block112; else goto block115;
block115:;
_1016 = &_972->typeKind;
_1017 = *_1016;
org$frostlang$frostc$Type$Kind$wrapper* $tmp126;
$tmp126 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp126->value = _1017;
_1018 = ((frost$core$Equatable*) $tmp126);
_1019 = (frost$core$Int) {17u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:445:77
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_1022 = &(&local48)->$rawValue;
*_1022 = _1019;
_1024 = *(&local48);
*(&local47) = _1024;
_1027 = *(&local47);
org$frostlang$frostc$Type$Kind$wrapper* $tmp127;
$tmp127 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp127->value = _1027;
_1028 = ((frost$core$Equatable*) $tmp127);
ITable* $tmp128 = _1018->$class->itable;
while ($tmp128->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp128 = $tmp128->next;
}
_1029 = $tmp128->methods[0];
_1030 = _1029(_1018, _1028);
_1031 = _1030.value;
_1032 = ((frost$core$Object*) _1028);
frost$core$Frost$unref$frost$core$Object$Q(_1032);
_1034 = ((frost$core$Object*) _1018);
frost$core$Frost$unref$frost$core$Object$Q(_1034);
if (_1031) goto block112; else goto block114;
block114:;
_1037 = &_972->typeKind;
_1038 = *_1037;
org$frostlang$frostc$Type$Kind$wrapper* $tmp129;
$tmp129 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp129->value = _1038;
_1039 = ((frost$core$Equatable*) $tmp129);
_1040 = (frost$core$Int) {18u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:446:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_1043 = &(&local50)->$rawValue;
*_1043 = _1040;
_1045 = *(&local50);
*(&local49) = _1045;
_1048 = *(&local49);
org$frostlang$frostc$Type$Kind$wrapper* $tmp130;
$tmp130 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp130->value = _1048;
_1049 = ((frost$core$Equatable*) $tmp130);
ITable* $tmp131 = _1039->$class->itable;
while ($tmp131->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp131 = $tmp131->next;
}
_1050 = $tmp131->methods[0];
_1051 = _1050(_1039, _1049);
_1052 = _1051.value;
_1053 = ((frost$core$Object*) _1049);
frost$core$Frost$unref$frost$core$Object$Q(_1053);
_1055 = ((frost$core$Object*) _1039);
frost$core$Frost$unref$frost$core$Object$Q(_1055);
if (_1052) goto block112; else goto block113;
block113:;
_1058 = (frost$core$Int) {447u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s132, _1058, &$s133);
abort(); // unreachable
block112:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:448
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:448:16
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:246
_1064 = &_972->_subtypes;
_1065 = *_1064;
_1066 = _1065 != NULL;
_1067 = (frost$core$Bit) {_1066};
_1068 = _1067.value;
if (_1068) goto block122; else goto block123;
block123:;
_1070 = (frost$core$Int) {246u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s134, _1070, &$s135);
abort(); // unreachable
block122:;
_1073 = _1065;
_1074 = ((frost$core$Object*) _1073);
frost$core$Frost$ref$frost$core$Object$Q(_1074);
_1077 = ((frost$collections$ListView*) _1073);
ITable* $tmp136 = _1077->$class->itable;
while ($tmp136->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp136 = $tmp136->next;
}
_1078 = $tmp136->methods[5];
_1079 = _1078(_1077);
_1080 = ((org$frostlang$frostc$Type*) _1079);
_1081 = ((frost$core$Object*) _1080);
frost$core$Frost$ref$frost$core$Object$Q(_1081);
_1083 = _1079;
frost$core$Frost$unref$frost$core$Object$Q(_1083);
_1085 = ((frost$core$Object*) _1073);
frost$core$Frost$unref$frost$core$Object$Q(_1085);
*(&local51) = ((org$frostlang$frostc$Type*) NULL);
_1089 = ((frost$core$Object*) _1080);
frost$core$Frost$ref$frost$core$Object$Q(_1089);
_1091 = *(&local51);
_1092 = ((frost$core$Object*) _1091);
frost$core$Frost$unref$frost$core$Object$Q(_1092);
*(&local51) = _1080;
_1095 = ((frost$core$Object*) _1080);
frost$core$Frost$unref$frost$core$Object$Q(_1095);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:82
_1098 = *(&local51);
_1099 = &param1->ERROR_TYPE;
_1100 = *_1099;
_1101 = org$frostlang$frostc$Type$nullable$R$org$frostlang$frostc$Type(_1100);
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from MethodRef.frost:82:27
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:256
_1104 = ((org$frostlang$frostc$Symbol*) _1098);
_1105 = &_1104->name;
_1106 = *_1105;
_1107 = ((org$frostlang$frostc$Symbol*) _1101);
_1108 = &_1107->name;
_1109 = *_1108;
_1110 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(_1106, _1109);
_1111 = _1110.value;
if (_1111) goto block128; else goto block129;
block128:;
_1113 = &_1098->typeKind;
_1114 = *_1113;
org$frostlang$frostc$Type$Kind$wrapper* $tmp137;
$tmp137 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp137->value = _1114;
_1115 = ((frost$core$Equatable*) $tmp137);
_1116 = &_1101->typeKind;
_1117 = *_1116;
org$frostlang$frostc$Type$Kind$wrapper* $tmp138;
$tmp138 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp138->value = _1117;
_1118 = ((frost$core$Equatable*) $tmp138);
ITable* $tmp139 = _1115->$class->itable;
while ($tmp139->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp139 = $tmp139->next;
}
_1119 = $tmp139->methods[0];
_1120 = _1119(_1115, _1118);
_1121 = ((frost$core$Object*) _1118);
frost$core$Frost$unref$frost$core$Object$Q(_1121);
_1123 = ((frost$core$Object*) _1115);
frost$core$Frost$unref$frost$core$Object$Q(_1123);
*(&local52) = _1120;
goto block130;
block129:;
*(&local52) = _1110;
goto block130;
block130:;
_1129 = *(&local52);
_1131 = _1129.value;
_1132 = ((frost$core$Object*) _1101);
frost$core$Frost$unref$frost$core$Object$Q(_1132);
if (_1131) goto block124; else goto block126;
block124:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:83
_1136 = *(&local4);
_1137 = ((org$frostlang$frostc$Symbol*) _1136);
_1138 = &_1137->position;
_1139 = *_1138;
_1140 = *(&local4);
_1141 = &_1140->typeKind;
_1142 = *_1141;
_1143 = *(&local4);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from MethodRef.frost:84:35
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:246
_1146 = &_1143->_subtypes;
_1147 = *_1146;
_1148 = _1147 != NULL;
_1149 = (frost$core$Bit) {_1148};
_1150 = _1149.value;
if (_1150) goto block132; else goto block133;
block133:;
_1152 = (frost$core$Int) {246u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s140, _1152, &$s141);
abort(); // unreachable
block132:;
_1155 = _1147;
_1156 = ((frost$core$Object*) _1155);
frost$core$Frost$ref$frost$core$Object$Q(_1156);
_1159 = ((frost$collections$ListView*) _1155);
_1160 = (frost$core$Int) {0u};
_1161 = *(&local4);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from MethodRef.frost:84:60
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:246
_1164 = &_1161->_subtypes;
_1165 = *_1164;
_1166 = _1165 != NULL;
_1167 = (frost$core$Bit) {_1166};
_1168 = _1167.value;
if (_1168) goto block135; else goto block136;
block136:;
_1170 = (frost$core$Int) {246u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s142, _1170, &$s143);
abort(); // unreachable
block135:;
_1173 = _1165;
_1174 = ((frost$core$Object*) _1173);
frost$core$Frost$ref$frost$core$Object$Q(_1174);
_1177 = ((frost$collections$CollectionView*) _1173);
ITable* $tmp144 = _1177->$class->itable;
while ($tmp144->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp144 = $tmp144->next;
}
_1178 = $tmp144->methods[0];
_1179 = _1178(_1177);
_1180 = (frost$core$Int) {1u};
_1181 = _1179.value;
_1182 = _1180.value;
_1183 = _1181 - _1182;
_1184 = (frost$core$Int) {_1183};
_1185 = (frost$core$Bit) {false};
_1186 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit(_1160, _1184, _1185);
ITable* $tmp145 = _1159->$class->itable;
while ($tmp145->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp145 = $tmp145->next;
}
_1187 = $tmp145->methods[1];
_1188 = _1187(_1159, _1186);
_1189 = &param1->VOID_TYPE;
_1190 = *_1189;
_1191 = *(&local4);
_1192 = &_1191->priority;
_1193 = *_1192;
_1194 = org$frostlang$frostc$Type$methodType$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$Type$Kind$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$org$frostlang$frostc$Type$frost$core$Int$R$org$frostlang$frostc$Type(param1, _1139, _1142, _1188, _1190, _1193);
_1195 = ((frost$core$Object*) _1194);
frost$core$Frost$ref$frost$core$Object$Q(_1195);
_1197 = *(&local4);
_1198 = ((frost$core$Object*) _1197);
frost$core$Frost$unref$frost$core$Object$Q(_1198);
*(&local4) = _1194;
_1201 = ((frost$core$Object*) _1194);
frost$core$Frost$unref$frost$core$Object$Q(_1201);
_1203 = ((frost$core$Object*) _1188);
frost$core$Frost$unref$frost$core$Object$Q(_1203);
_1205 = ((frost$core$Object*) _1173);
frost$core$Frost$unref$frost$core$Object$Q(_1205);
_1207 = ((frost$core$Object*) _1155);
frost$core$Frost$unref$frost$core$Object$Q(_1207);
goto block125;
block126:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:87
_1211 = *(&local51);
_1212 = &_1211->typeKind;
_1213 = *_1212;
org$frostlang$frostc$Type$Kind$wrapper* $tmp146;
$tmp146 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp146->value = _1213;
_1214 = ((frost$core$Equatable*) $tmp146);
_1215 = (frost$core$Int) {11u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from MethodRef.frost:87:52
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_1218 = &(&local54)->$rawValue;
*_1218 = _1215;
_1220 = *(&local54);
*(&local53) = _1220;
_1223 = *(&local53);
org$frostlang$frostc$Type$Kind$wrapper* $tmp147;
$tmp147 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp147->value = _1223;
_1224 = ((frost$core$Equatable*) $tmp147);
ITable* $tmp148 = _1214->$class->itable;
while ($tmp148->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp148 = $tmp148->next;
}
_1225 = $tmp148->methods[0];
_1226 = _1225(_1214, _1224);
_1227 = _1226.value;
_1228 = ((frost$core$Object*) _1224);
frost$core$Frost$unref$frost$core$Object$Q(_1228);
_1230 = ((frost$core$Object*) _1214);
frost$core$Frost$unref$frost$core$Object$Q(_1230);
if (_1227) goto block139; else goto block138;
block139:;
_1233 = *(&local51);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from MethodRef.frost:88:31
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:246
_1236 = &_1233->_subtypes;
_1237 = *_1236;
_1238 = _1237 != NULL;
_1239 = (frost$core$Bit) {_1238};
_1240 = _1239.value;
if (_1240) goto block142; else goto block143;
block143:;
_1242 = (frost$core$Int) {246u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s149, _1242, &$s150);
abort(); // unreachable
block142:;
_1245 = _1237;
_1246 = ((frost$core$Object*) _1245);
frost$core$Frost$ref$frost$core$Object$Q(_1246);
_1249 = (frost$core$Int) {0u};
_1250 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T(_1245, _1249);
_1251 = ((org$frostlang$frostc$Type*) _1250);
_1252 = ((org$frostlang$frostc$Symbol*) _1251);
_1253 = &_1252->name;
_1254 = *_1253;
_1255 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(_1254, &$s151);
_1256 = _1255.value;
_1257 = _1250;
frost$core$Frost$unref$frost$core$Object$Q(_1257);
_1259 = ((frost$core$Object*) _1245);
frost$core$Frost$unref$frost$core$Object$Q(_1259);
if (_1256) goto block137; else goto block138;
block137:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:89
_1263 = *(&local4);
_1264 = ((org$frostlang$frostc$Symbol*) _1263);
_1265 = &_1264->position;
_1266 = *_1265;
_1267 = *(&local4);
_1268 = &_1267->typeKind;
_1269 = *_1268;
_1270 = *(&local4);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from MethodRef.frost:90:35
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:246
_1273 = &_1270->_subtypes;
_1274 = *_1273;
_1275 = _1274 != NULL;
_1276 = (frost$core$Bit) {_1275};
_1277 = _1276.value;
if (_1277) goto block145; else goto block146;
block146:;
_1279 = (frost$core$Int) {246u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s152, _1279, &$s153);
abort(); // unreachable
block145:;
_1282 = _1274;
_1283 = ((frost$core$Object*) _1282);
frost$core$Frost$ref$frost$core$Object$Q(_1283);
_1286 = ((frost$collections$ListView*) _1282);
_1287 = (frost$core$Int) {0u};
_1288 = *(&local4);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from MethodRef.frost:90:60
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:246
_1291 = &_1288->_subtypes;
_1292 = *_1291;
_1293 = _1292 != NULL;
_1294 = (frost$core$Bit) {_1293};
_1295 = _1294.value;
if (_1295) goto block148; else goto block149;
block149:;
_1297 = (frost$core$Int) {246u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s154, _1297, &$s155);
abort(); // unreachable
block148:;
_1300 = _1292;
_1301 = ((frost$core$Object*) _1300);
frost$core$Frost$ref$frost$core$Object$Q(_1301);
_1304 = ((frost$collections$CollectionView*) _1300);
ITable* $tmp156 = _1304->$class->itable;
while ($tmp156->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp156 = $tmp156->next;
}
_1305 = $tmp156->methods[0];
_1306 = _1305(_1304);
_1307 = (frost$core$Int) {1u};
_1308 = _1306.value;
_1309 = _1307.value;
_1310 = _1308 - _1309;
_1311 = (frost$core$Int) {_1310};
_1312 = (frost$core$Bit) {false};
_1313 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit(_1287, _1311, _1312);
ITable* $tmp157 = _1286->$class->itable;
while ($tmp157->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp157 = $tmp157->next;
}
_1314 = $tmp157->methods[1];
_1315 = _1314(_1286, _1313);
_1316 = *(&local51);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from MethodRef.frost:91:35
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:246
_1319 = &_1316->_subtypes;
_1320 = *_1319;
_1321 = _1320 != NULL;
_1322 = (frost$core$Bit) {_1321};
_1323 = _1322.value;
if (_1323) goto block151; else goto block152;
block152:;
_1325 = (frost$core$Int) {246u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s158, _1325, &$s159);
abort(); // unreachable
block151:;
_1328 = _1320;
_1329 = ((frost$core$Object*) _1328);
frost$core$Frost$ref$frost$core$Object$Q(_1329);
_1332 = (frost$core$Int) {1u};
_1333 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T(_1328, _1332);
_1334 = ((org$frostlang$frostc$Type*) _1333);
_1335 = *(&local4);
_1336 = &_1335->priority;
_1337 = *_1336;
_1338 = org$frostlang$frostc$Type$methodType$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$Type$Kind$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$org$frostlang$frostc$Type$frost$core$Int$R$org$frostlang$frostc$Type(param1, _1266, _1269, _1315, _1334, _1337);
_1339 = ((frost$core$Object*) _1338);
frost$core$Frost$ref$frost$core$Object$Q(_1339);
_1341 = *(&local4);
_1342 = ((frost$core$Object*) _1341);
frost$core$Frost$unref$frost$core$Object$Q(_1342);
*(&local4) = _1338;
_1345 = ((frost$core$Object*) _1338);
frost$core$Frost$unref$frost$core$Object$Q(_1345);
_1347 = _1333;
frost$core$Frost$unref$frost$core$Object$Q(_1347);
_1349 = ((frost$core$Object*) _1328);
frost$core$Frost$unref$frost$core$Object$Q(_1349);
_1351 = ((frost$core$Object*) _1315);
frost$core$Frost$unref$frost$core$Object$Q(_1351);
_1353 = ((frost$core$Object*) _1300);
frost$core$Frost$unref$frost$core$Object$Q(_1353);
_1355 = ((frost$core$Object*) _1282);
frost$core$Frost$unref$frost$core$Object$Q(_1355);
goto block138;
block138:;
goto block125;
block125:;
_1359 = *(&local51);
_1360 = ((frost$core$Object*) _1359);
frost$core$Frost$unref$frost$core$Object$Q(_1360);
*(&local51) = ((org$frostlang$frostc$Type*) NULL);
goto block100;
block100:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:94
_1365 = *(&local3);
_1366 = _1365 != NULL;
_1367 = (frost$core$Bit) {_1366};
_1368 = _1367.value;
if (_1368) goto block153; else goto block154;
block154:;
_1370 = (frost$core$Int) {94u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s160, _1370, &$s161);
abort(); // unreachable
block153:;
_1373 = _1365;
_1374 = *(&local4);
_1375 = org$frostlang$frostc$Compiler$remapType$org$frostlang$frostc$Type$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(param1, _1373, _1374);
*(&local55) = ((org$frostlang$frostc$Type*) NULL);
_1377 = ((frost$core$Object*) _1375);
frost$core$Frost$ref$frost$core$Object$Q(_1377);
_1379 = *(&local55);
_1380 = ((frost$core$Object*) _1379);
frost$core$Frost$unref$frost$core$Object$Q(_1380);
*(&local55) = _1375;
_1383 = ((frost$core$Object*) _1375);
frost$core$Frost$unref$frost$core$Object$Q(_1383);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:95
_1386 = param4 != NULL;
_1387 = (frost$core$Bit) {_1386};
_1388 = _1387.value;
if (_1388) goto block155; else goto block157;
block155:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:96
_1391 = &param3->owner;
_1392 = *_1391;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from MethodRef.frost:96:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
_1397 = &_1392->_valid;
_1398 = *_1397;
_1400 = _1398.value;
if (_1400) goto block160; else goto block161;
block161:;
_1402 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s162, _1402, &$s163);
abort(); // unreachable
block160:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
_1406 = &_1392->value;
_1407 = *_1406;
_1408 = _1407;
_1409 = _1408;
frost$core$Frost$ref$frost$core$Object$Q(_1409);
_1412 = ((org$frostlang$frostc$ClassDecl*) _1408);
_1413 = &_1412->name;
_1414 = *_1413;
_1415 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_1414, &$s164);
_1416 = ((org$frostlang$frostc$Symbol*) param3);
_1417 = &_1416->name;
_1418 = *_1417;
_1419 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_1415, _1418);
_1420 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_1419, &$s165);
*(&local56) = ((frost$core$String*) NULL);
_1422 = ((frost$core$Object*) _1420);
frost$core$Frost$ref$frost$core$Object$Q(_1422);
_1424 = *(&local56);
_1425 = ((frost$core$Object*) _1424);
frost$core$Frost$unref$frost$core$Object$Q(_1425);
*(&local56) = _1420;
_1428 = ((frost$core$Object*) _1420);
frost$core$Frost$unref$frost$core$Object$Q(_1428);
_1430 = ((frost$core$Object*) _1419);
frost$core$Frost$unref$frost$core$Object$Q(_1430);
_1432 = ((frost$core$Object*) _1415);
frost$core$Frost$unref$frost$core$Object$Q(_1432);
_1434 = _1408;
frost$core$Frost$unref$frost$core$Object$Q(_1434);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:97
_1437 = (frost$collections$HashMap*) frostObjectAlloc(sizeof(frost$collections$HashMap), (frost$core$Class*) &frost$collections$HashMap$class);
frost$collections$HashMap$init(_1437);
*(&local57) = ((frost$collections$HashMap*) NULL);
_1440 = ((frost$core$Object*) _1437);
frost$core$Frost$ref$frost$core$Object$Q(_1440);
_1442 = *(&local57);
_1443 = ((frost$core$Object*) _1442);
frost$core$Frost$unref$frost$core$Object$Q(_1443);
*(&local57) = _1437;
_1446 = ((frost$core$Object*) _1437);
frost$core$Frost$unref$frost$core$Object$Q(_1446);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:98
_1449 = (frost$core$Int) {0u};
_1450 = param4 != NULL;
_1451 = (frost$core$Bit) {_1450};
_1452 = _1451.value;
if (_1452) goto block162; else goto block163;
block163:;
_1454 = (frost$core$Int) {98u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s166, _1454, &$s167);
abort(); // unreachable
block162:;
_1457 = ((frost$collections$CollectionView*) param4);
ITable* $tmp168 = _1457->$class->itable;
while ($tmp168->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp168 = $tmp168->next;
}
_1458 = $tmp168->methods[0];
_1459 = _1458(_1457);
_1460 = (frost$core$Bit) {false};
_1461 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit(_1449, _1459, _1460);
_1462 = _1461.min;
*(&local58) = _1462;
_1464 = _1461.max;
_1465 = _1461.inclusive;
_1466 = _1465.value;
_1467 = (frost$core$Int) {1u};
if (_1466) goto block167; else goto block168;
block167:;
_1469 = _1462.value;
_1470 = _1464.value;
_1471 = _1469 <= _1470;
_1472 = (frost$core$Bit) {_1471};
_1473 = _1472.value;
if (_1473) goto block164; else goto block165;
block168:;
_1475 = _1462.value;
_1476 = _1464.value;
_1477 = _1475 < _1476;
_1478 = (frost$core$Bit) {_1477};
_1479 = _1478.value;
if (_1479) goto block164; else goto block165;
block164:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:99
_1482 = *(&local57);
_1483 = *(&local56);
_1484 = &param3->genericParameters;
_1485 = *_1484;
_1486 = _1485 != NULL;
_1487 = (frost$core$Bit) {_1486};
_1488 = _1487.value;
if (_1488) goto block169; else goto block170;
block170:;
_1490 = (frost$core$Int) {99u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s169, _1490, &$s170);
abort(); // unreachable
block169:;
_1493 = _1485;
_1494 = *(&local58);
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from MethodRef.frost:99:53
_1496 = (frost$core$Int) {0u};
_1497 = _1494.value;
_1498 = _1496.value;
_1499 = _1497 >= _1498;
_1500 = (frost$core$Bit) {_1499};
_1501 = _1500.value;
if (_1501) goto block174; else goto block173;
block174:;
_1503 = ((frost$collections$CollectionView*) _1493);
ITable* $tmp171 = _1503->$class->itable;
while ($tmp171->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp171 = $tmp171->next;
}
_1504 = $tmp171->methods[0];
_1505 = _1504(_1503);
_1506 = _1494.value;
_1507 = _1505.value;
_1508 = _1506 < _1507;
_1509 = (frost$core$Bit) {_1508};
_1510 = _1509.value;
if (_1510) goto block172; else goto block173;
block173:;
_1512 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s172, _1512, &$s173);
abort(); // unreachable
block172:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
_1516 = &_1493->data;
_1517 = *_1516;
_1518 = _1517.value;
_1519 = frost$core$Int64$init$frost$core$Int(_1494);
_1520 = _1519.value;
_1521 = ((frost$core$Object**)_1518)[_1520];
_1522 = _1521;
frost$core$Frost$ref$frost$core$Object$Q(_1522);
_1525 = ((org$frostlang$frostc$MethodDecl$GenericParameter*) _1521);
_1526 = ((org$frostlang$frostc$Symbol*) _1525);
_1527 = &_1526->name;
_1528 = *_1527;
_1529 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_1483, _1528);
_1530 = ((frost$collections$HashKey*) _1529);
_1531 = param4 != NULL;
_1532 = (frost$core$Bit) {_1531};
_1533 = _1532.value;
if (_1533) goto block175; else goto block176;
block176:;
_1535 = (frost$core$Int) {99u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s174, _1535, &$s175);
abort(); // unreachable
block175:;
_1538 = param4;
_1539 = *(&local58);
ITable* $tmp176 = _1538->$class->itable;
while ($tmp176->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp176 = $tmp176->next;
}
_1540 = $tmp176->methods[0];
_1541 = _1540(_1538, _1539);
_1542 = ((org$frostlang$frostc$Type*) _1541);
_1543 = ((frost$core$Object*) _1542);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V(_1482, _1530, _1543);
_1545 = _1541;
frost$core$Frost$unref$frost$core$Object$Q(_1545);
_1547 = ((frost$core$Object*) _1529);
frost$core$Frost$unref$frost$core$Object$Q(_1547);
_1549 = _1521;
frost$core$Frost$unref$frost$core$Object$Q(_1549);
_1552 = *(&local58);
_1553 = _1464.value;
_1554 = _1552.value;
_1555 = _1553 - _1554;
_1556 = (frost$core$Int) {_1555};
if (_1466) goto block178; else goto block179;
block178:;
_1558 = _1556.value;
_1559 = _1467.value;
_1560 = _1558 >= _1559;
_1561 = (frost$core$Bit) {_1560};
_1562 = _1561.value;
if (_1562) goto block177; else goto block165;
block179:;
_1564 = _1556.value;
_1565 = _1467.value;
_1566 = _1564 > _1565;
_1567 = (frost$core$Bit) {_1566};
_1568 = _1567.value;
if (_1568) goto block177; else goto block165;
block177:;
_1570 = _1552.value;
_1571 = _1467.value;
_1572 = _1570 + _1571;
_1573 = (frost$core$Int) {_1572};
*(&local58) = _1573;
goto block164;
block165:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:101
_1577 = *(&local55);
_1578 = *(&local57);
_1579 = org$frostlang$frostc$Type$remap$org$frostlang$frostc$Compiler$frost$collections$HashMap$LTfrost$core$String$Corg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type(_1577, param1, _1578);
_1580 = ((frost$core$Object*) _1579);
frost$core$Frost$ref$frost$core$Object$Q(_1580);
_1582 = &param0->effectiveType;
_1583 = *_1582;
_1584 = ((frost$core$Object*) _1583);
frost$core$Frost$unref$frost$core$Object$Q(_1584);
_1586 = &param0->effectiveType;
*_1586 = _1579;
_1588 = ((frost$core$Object*) _1579);
frost$core$Frost$unref$frost$core$Object$Q(_1588);
_1590 = *(&local57);
_1591 = ((frost$core$Object*) _1590);
frost$core$Frost$unref$frost$core$Object$Q(_1591);
*(&local57) = ((frost$collections$HashMap*) NULL);
_1594 = *(&local56);
_1595 = ((frost$core$Object*) _1594);
frost$core$Frost$unref$frost$core$Object$Q(_1595);
*(&local56) = ((frost$core$String*) NULL);
goto block156;
block157:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:104
_1601 = *(&local55);
_1602 = ((frost$core$Object*) _1601);
frost$core$Frost$ref$frost$core$Object$Q(_1602);
_1604 = &param0->effectiveType;
_1605 = *_1604;
_1606 = ((frost$core$Object*) _1605);
frost$core$Frost$unref$frost$core$Object$Q(_1606);
_1608 = &param0->effectiveType;
*_1608 = _1601;
goto block156;
block156:;
_1611 = *(&local55);
_1612 = ((frost$core$Object*) _1611);
frost$core$Frost$unref$frost$core$Object$Q(_1612);
*(&local55) = ((org$frostlang$frostc$Type*) NULL);
_1615 = *(&local39);
_1616 = ((frost$core$Object*) _1615);
frost$core$Frost$unref$frost$core$Object$Q(_1616);
*(&local39) = ((org$frostlang$frostc$Pair*) NULL);
_1619 = *(&local4);
_1620 = ((frost$core$Object*) _1619);
frost$core$Frost$unref$frost$core$Object$Q(_1620);
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
_1623 = *(&local3);
_1624 = ((frost$core$Object*) _1623);
frost$core$Frost$unref$frost$core$Object$Q(_1624);
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
return;

}
frost$core$Int org$frostlang$frostc$MethodRef$get_parameterCount$R$frost$core$Int(void* rawSelf) {
org$frostlang$frostc$MethodRef* param0 = (org$frostlang$frostc$MethodRef*) rawSelf;

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
frost$core$Int _7;
frost$core$Int* _10;
org$frostlang$frostc$Type$Kind _12;
org$frostlang$frostc$Type$Kind _15;
frost$core$Equatable* _16;
$fn177 _17;
frost$core$Bit _18;
bool _19;
frost$core$Object* _20;
frost$core$Object* _22;
org$frostlang$frostc$Type$Kind* _25;
org$frostlang$frostc$Type$Kind _26;
frost$core$Equatable* _27;
frost$core$Int _28;
frost$core$Int* _31;
org$frostlang$frostc$Type$Kind _33;
org$frostlang$frostc$Type$Kind _36;
frost$core$Equatable* _37;
$fn178 _38;
frost$core$Bit _39;
bool _40;
frost$core$Object* _41;
frost$core$Object* _43;
org$frostlang$frostc$Type$Kind* _46;
org$frostlang$frostc$Type$Kind _47;
frost$core$Equatable* _48;
frost$core$Int _49;
frost$core$Int* _52;
org$frostlang$frostc$Type$Kind _54;
org$frostlang$frostc$Type$Kind _57;
frost$core$Equatable* _58;
$fn179 _59;
frost$core$Bit _60;
bool _61;
frost$core$Object* _62;
frost$core$Object* _64;
org$frostlang$frostc$Type$Kind* _67;
org$frostlang$frostc$Type$Kind _68;
frost$core$Equatable* _69;
frost$core$Int _70;
frost$core$Int* _73;
org$frostlang$frostc$Type$Kind _75;
org$frostlang$frostc$Type$Kind _78;
frost$core$Equatable* _79;
$fn180 _80;
frost$core$Bit _81;
bool _82;
frost$core$Object* _83;
frost$core$Object* _85;
frost$core$Int _88;
org$frostlang$frostc$FixedArray** _94;
org$frostlang$frostc$FixedArray* _95;
bool _96;
frost$core$Bit _97;
bool _98;
frost$core$Int _100;
org$frostlang$frostc$FixedArray* _103;
frost$core$Object* _104;
frost$collections$CollectionView* _107;
$fn181 _108;
frost$core$Int _109;
frost$core$Int _110;
int64_t _111;
int64_t _112;
int64_t _113;
frost$core$Int _114;
frost$core$Object* _115;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:109
_1 = &param0->effectiveType;
_2 = *_1;
// begin inline call to function org.frostlang.frostc.Type.get_parameterCount():frost.core.Int from MethodRef.frost:109:29
_4 = &_2->typeKind;
_5 = *_4;
org$frostlang$frostc$Type$Kind$wrapper* $tmp182;
$tmp182 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp182->value = _5;
_6 = ((frost$core$Equatable*) $tmp182);
_7 = (frost$core$Int) {15u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:429:25
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_10 = &(&local1)->$rawValue;
*_10 = _7;
_12 = *(&local1);
*(&local0) = _12;
_15 = *(&local0);
org$frostlang$frostc$Type$Kind$wrapper* $tmp183;
$tmp183 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp183->value = _15;
_16 = ((frost$core$Equatable*) $tmp183);
ITable* $tmp184 = _6->$class->itable;
while ($tmp184->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp184 = $tmp184->next;
}
_17 = $tmp184->methods[0];
_18 = _17(_6, _16);
_19 = _18.value;
_20 = ((frost$core$Object*) _16);
frost$core$Frost$unref$frost$core$Object$Q(_20);
_22 = ((frost$core$Object*) _6);
frost$core$Frost$unref$frost$core$Object$Q(_22);
if (_19) goto block2; else goto block6;
block6:;
_25 = &_2->typeKind;
_26 = *_25;
org$frostlang$frostc$Type$Kind$wrapper* $tmp185;
$tmp185 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp185->value = _26;
_27 = ((frost$core$Equatable*) $tmp185);
_28 = (frost$core$Int) {16u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:429:52
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_31 = &(&local3)->$rawValue;
*_31 = _28;
_33 = *(&local3);
*(&local2) = _33;
_36 = *(&local2);
org$frostlang$frostc$Type$Kind$wrapper* $tmp186;
$tmp186 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp186->value = _36;
_37 = ((frost$core$Equatable*) $tmp186);
ITable* $tmp187 = _27->$class->itable;
while ($tmp187->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp187 = $tmp187->next;
}
_38 = $tmp187->methods[0];
_39 = _38(_27, _37);
_40 = _39.value;
_41 = ((frost$core$Object*) _37);
frost$core$Frost$unref$frost$core$Object$Q(_41);
_43 = ((frost$core$Object*) _27);
frost$core$Frost$unref$frost$core$Object$Q(_43);
if (_40) goto block2; else goto block5;
block5:;
_46 = &_2->typeKind;
_47 = *_46;
org$frostlang$frostc$Type$Kind$wrapper* $tmp188;
$tmp188 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp188->value = _47;
_48 = ((frost$core$Equatable*) $tmp188);
_49 = (frost$core$Int) {17u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:429:77
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_52 = &(&local5)->$rawValue;
*_52 = _49;
_54 = *(&local5);
*(&local4) = _54;
_57 = *(&local4);
org$frostlang$frostc$Type$Kind$wrapper* $tmp189;
$tmp189 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp189->value = _57;
_58 = ((frost$core$Equatable*) $tmp189);
ITable* $tmp190 = _48->$class->itable;
while ($tmp190->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp190 = $tmp190->next;
}
_59 = $tmp190->methods[0];
_60 = _59(_48, _58);
_61 = _60.value;
_62 = ((frost$core$Object*) _58);
frost$core$Frost$unref$frost$core$Object$Q(_62);
_64 = ((frost$core$Object*) _48);
frost$core$Frost$unref$frost$core$Object$Q(_64);
if (_61) goto block2; else goto block4;
block4:;
_67 = &_2->typeKind;
_68 = *_67;
org$frostlang$frostc$Type$Kind$wrapper* $tmp191;
$tmp191 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp191->value = _68;
_69 = ((frost$core$Equatable*) $tmp191);
_70 = (frost$core$Int) {18u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:430:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_73 = &(&local7)->$rawValue;
*_73 = _70;
_75 = *(&local7);
*(&local6) = _75;
_78 = *(&local6);
org$frostlang$frostc$Type$Kind$wrapper* $tmp192;
$tmp192 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp192->value = _78;
_79 = ((frost$core$Equatable*) $tmp192);
ITable* $tmp193 = _69->$class->itable;
while ($tmp193->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp193 = $tmp193->next;
}
_80 = $tmp193->methods[0];
_81 = _80(_69, _79);
_82 = _81.value;
_83 = ((frost$core$Object*) _79);
frost$core$Frost$unref$frost$core$Object$Q(_83);
_85 = ((frost$core$Object*) _69);
frost$core$Frost$unref$frost$core$Object$Q(_85);
if (_82) goto block2; else goto block3;
block3:;
_88 = (frost$core$Int) {431u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s194, _88, &$s195);
abort(); // unreachable
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:432
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:432:16
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:246
_94 = &_2->_subtypes;
_95 = *_94;
_96 = _95 != NULL;
_97 = (frost$core$Bit) {_96};
_98 = _97.value;
if (_98) goto block12; else goto block13;
block13:;
_100 = (frost$core$Int) {246u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s196, _100, &$s197);
abort(); // unreachable
block12:;
_103 = _95;
_104 = ((frost$core$Object*) _103);
frost$core$Frost$ref$frost$core$Object$Q(_104);
_107 = ((frost$collections$CollectionView*) _103);
ITable* $tmp198 = _107->$class->itable;
while ($tmp198->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp198 = $tmp198->next;
}
_108 = $tmp198->methods[0];
_109 = _108(_107);
_110 = (frost$core$Int) {1u};
_111 = _109.value;
_112 = _110.value;
_113 = _111 - _112;
_114 = (frost$core$Int) {_113};
_115 = ((frost$core$Object*) _103);
frost$core$Frost$unref$frost$core$Object$Q(_115);
return _114;

}
org$frostlang$frostc$Type* org$frostlang$frostc$MethodRef$parameterType$frost$core$Int$R$org$frostlang$frostc$Type(void* rawSelf, frost$core$Int param1) {
org$frostlang$frostc$MethodRef* param0 = (org$frostlang$frostc$MethodRef*) rawSelf;

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
frost$core$Object* _18;
org$frostlang$frostc$Type* _19;
frost$core$Object* _20;
frost$core$Object* _22;
frost$core$Object* _24;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:113
_1 = &param0->effectiveType;
_2 = *_1;
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from MethodRef.frost:113:29
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:246
_5 = &_2->_subtypes;
_6 = *_5;
_7 = _6 != NULL;
_8 = (frost$core$Bit) {_7};
_9 = _8.value;
if (_9) goto block2; else goto block3;
block3:;
_11 = (frost$core$Int) {246u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s199, _11, &$s200);
abort(); // unreachable
block2:;
_14 = _6;
_15 = ((frost$core$Object*) _14);
frost$core$Frost$ref$frost$core$Object$Q(_15);
_18 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T(_14, param1);
_19 = ((org$frostlang$frostc$Type*) _18);
_20 = ((frost$core$Object*) _19);
frost$core$Frost$ref$frost$core$Object$Q(_20);
_22 = _18;
frost$core$Frost$unref$frost$core$Object$Q(_22);
_24 = ((frost$core$Object*) _14);
frost$core$Frost$unref$frost$core$Object$Q(_24);
return _19;

}
org$frostlang$frostc$Type* org$frostlang$frostc$MethodRef$get_returnType$R$org$frostlang$frostc$Type(void* rawSelf) {
org$frostlang$frostc$MethodRef* param0 = (org$frostlang$frostc$MethodRef*) rawSelf;

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
frost$core$Int _7;
frost$core$Int* _10;
org$frostlang$frostc$Type$Kind _12;
org$frostlang$frostc$Type$Kind _15;
frost$core$Equatable* _16;
$fn201 _17;
frost$core$Bit _18;
bool _19;
frost$core$Object* _20;
frost$core$Object* _22;
org$frostlang$frostc$Type$Kind* _25;
org$frostlang$frostc$Type$Kind _26;
frost$core$Equatable* _27;
frost$core$Int _28;
frost$core$Int* _31;
org$frostlang$frostc$Type$Kind _33;
org$frostlang$frostc$Type$Kind _36;
frost$core$Equatable* _37;
$fn202 _38;
frost$core$Bit _39;
bool _40;
frost$core$Object* _41;
frost$core$Object* _43;
org$frostlang$frostc$Type$Kind* _46;
org$frostlang$frostc$Type$Kind _47;
frost$core$Equatable* _48;
frost$core$Int _49;
frost$core$Int* _52;
org$frostlang$frostc$Type$Kind _54;
org$frostlang$frostc$Type$Kind _57;
frost$core$Equatable* _58;
$fn203 _59;
frost$core$Bit _60;
bool _61;
frost$core$Object* _62;
frost$core$Object* _64;
org$frostlang$frostc$Type$Kind* _67;
org$frostlang$frostc$Type$Kind _68;
frost$core$Equatable* _69;
frost$core$Int _70;
frost$core$Int* _73;
org$frostlang$frostc$Type$Kind _75;
org$frostlang$frostc$Type$Kind _78;
frost$core$Equatable* _79;
$fn204 _80;
frost$core$Bit _81;
bool _82;
frost$core$Object* _83;
frost$core$Object* _85;
frost$core$Int _88;
org$frostlang$frostc$FixedArray** _94;
org$frostlang$frostc$FixedArray* _95;
bool _96;
frost$core$Bit _97;
bool _98;
frost$core$Int _100;
org$frostlang$frostc$FixedArray* _103;
frost$core$Object* _104;
frost$collections$ListView* _107;
$fn205 _108;
frost$core$Object* _109;
org$frostlang$frostc$Type* _110;
frost$core$Object* _111;
frost$core$Object* _113;
frost$core$Object* _115;
frost$core$Object* _118;
frost$core$Object* _120;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:117
_1 = &param0->effectiveType;
_2 = *_1;
// begin inline call to function org.frostlang.frostc.Type.get_returnType():org.frostlang.frostc.Type from MethodRef.frost:117:29
_4 = &_2->typeKind;
_5 = *_4;
org$frostlang$frostc$Type$Kind$wrapper* $tmp206;
$tmp206 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp206->value = _5;
_6 = ((frost$core$Equatable*) $tmp206);
_7 = (frost$core$Int) {15u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:445:25
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_10 = &(&local1)->$rawValue;
*_10 = _7;
_12 = *(&local1);
*(&local0) = _12;
_15 = *(&local0);
org$frostlang$frostc$Type$Kind$wrapper* $tmp207;
$tmp207 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp207->value = _15;
_16 = ((frost$core$Equatable*) $tmp207);
ITable* $tmp208 = _6->$class->itable;
while ($tmp208->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp208 = $tmp208->next;
}
_17 = $tmp208->methods[0];
_18 = _17(_6, _16);
_19 = _18.value;
_20 = ((frost$core$Object*) _16);
frost$core$Frost$unref$frost$core$Object$Q(_20);
_22 = ((frost$core$Object*) _6);
frost$core$Frost$unref$frost$core$Object$Q(_22);
if (_19) goto block2; else goto block6;
block6:;
_25 = &_2->typeKind;
_26 = *_25;
org$frostlang$frostc$Type$Kind$wrapper* $tmp209;
$tmp209 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp209->value = _26;
_27 = ((frost$core$Equatable*) $tmp209);
_28 = (frost$core$Int) {16u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:445:52
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_31 = &(&local3)->$rawValue;
*_31 = _28;
_33 = *(&local3);
*(&local2) = _33;
_36 = *(&local2);
org$frostlang$frostc$Type$Kind$wrapper* $tmp210;
$tmp210 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp210->value = _36;
_37 = ((frost$core$Equatable*) $tmp210);
ITable* $tmp211 = _27->$class->itable;
while ($tmp211->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp211 = $tmp211->next;
}
_38 = $tmp211->methods[0];
_39 = _38(_27, _37);
_40 = _39.value;
_41 = ((frost$core$Object*) _37);
frost$core$Frost$unref$frost$core$Object$Q(_41);
_43 = ((frost$core$Object*) _27);
frost$core$Frost$unref$frost$core$Object$Q(_43);
if (_40) goto block2; else goto block5;
block5:;
_46 = &_2->typeKind;
_47 = *_46;
org$frostlang$frostc$Type$Kind$wrapper* $tmp212;
$tmp212 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp212->value = _47;
_48 = ((frost$core$Equatable*) $tmp212);
_49 = (frost$core$Int) {17u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:445:77
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_52 = &(&local5)->$rawValue;
*_52 = _49;
_54 = *(&local5);
*(&local4) = _54;
_57 = *(&local4);
org$frostlang$frostc$Type$Kind$wrapper* $tmp213;
$tmp213 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp213->value = _57;
_58 = ((frost$core$Equatable*) $tmp213);
ITable* $tmp214 = _48->$class->itable;
while ($tmp214->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp214 = $tmp214->next;
}
_59 = $tmp214->methods[0];
_60 = _59(_48, _58);
_61 = _60.value;
_62 = ((frost$core$Object*) _58);
frost$core$Frost$unref$frost$core$Object$Q(_62);
_64 = ((frost$core$Object*) _48);
frost$core$Frost$unref$frost$core$Object$Q(_64);
if (_61) goto block2; else goto block4;
block4:;
_67 = &_2->typeKind;
_68 = *_67;
org$frostlang$frostc$Type$Kind$wrapper* $tmp215;
$tmp215 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp215->value = _68;
_69 = ((frost$core$Equatable*) $tmp215);
_70 = (frost$core$Int) {18u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:446:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_73 = &(&local7)->$rawValue;
*_73 = _70;
_75 = *(&local7);
*(&local6) = _75;
_78 = *(&local6);
org$frostlang$frostc$Type$Kind$wrapper* $tmp216;
$tmp216 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp216->value = _78;
_79 = ((frost$core$Equatable*) $tmp216);
ITable* $tmp217 = _69->$class->itable;
while ($tmp217->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp217 = $tmp217->next;
}
_80 = $tmp217->methods[0];
_81 = _80(_69, _79);
_82 = _81.value;
_83 = ((frost$core$Object*) _79);
frost$core$Frost$unref$frost$core$Object$Q(_83);
_85 = ((frost$core$Object*) _69);
frost$core$Frost$unref$frost$core$Object$Q(_85);
if (_82) goto block2; else goto block3;
block3:;
_88 = (frost$core$Int) {447u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s218, _88, &$s219);
abort(); // unreachable
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:448
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:448:16
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:246
_94 = &_2->_subtypes;
_95 = *_94;
_96 = _95 != NULL;
_97 = (frost$core$Bit) {_96};
_98 = _97.value;
if (_98) goto block12; else goto block13;
block13:;
_100 = (frost$core$Int) {246u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s220, _100, &$s221);
abort(); // unreachable
block12:;
_103 = _95;
_104 = ((frost$core$Object*) _103);
frost$core$Frost$ref$frost$core$Object$Q(_104);
_107 = ((frost$collections$ListView*) _103);
ITable* $tmp222 = _107->$class->itable;
while ($tmp222->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp222 = $tmp222->next;
}
_108 = $tmp222->methods[5];
_109 = _108(_107);
_110 = ((org$frostlang$frostc$Type*) _109);
_111 = ((frost$core$Object*) _110);
frost$core$Frost$ref$frost$core$Object$Q(_111);
_113 = _109;
frost$core$Frost$unref$frost$core$Object$Q(_113);
_115 = ((frost$core$Object*) _103);
frost$core$Frost$unref$frost$core$Object$Q(_115);
_118 = ((frost$core$Object*) _110);
frost$core$Frost$ref$frost$core$Object$Q(_118);
_120 = ((frost$core$Object*) _110);
frost$core$Frost$unref$frost$core$Object$Q(_120);
return _110;

}
frost$core$String* org$frostlang$frostc$MethodRef$get_asString$R$frost$core$String(void* rawSelf) {
org$frostlang$frostc$MethodRef* param0 = (org$frostlang$frostc$MethodRef*) rawSelf;

org$frostlang$frostc$MethodDecl** _1;
org$frostlang$frostc$MethodDecl* _2;
frost$core$String* _3;
frost$core$String* _4;
frost$core$String* _5;
org$frostlang$frostc$Type** _6;
org$frostlang$frostc$Type* _7;
frost$core$Object* _8;
$fn223 _11;
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
_4 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s224, _3);
_5 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_4, &$s225);
_6 = &param0->effectiveType;
_7 = *_6;
_8 = ((frost$core$Object*) _7);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from MethodRef.frost:122:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
_11 = ($fn226) _8->$class->vtable[0];
_12 = _11(_8);
_13 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_5, _12);
_14 = ((frost$core$Object*) _13);
frost$core$Frost$ref$frost$core$Object$Q(_14);
_16 = ((frost$core$Object*) _13);
frost$core$Frost$unref$frost$core$Object$Q(_16);
_18 = ((frost$core$Object*) _12);
frost$core$Frost$unref$frost$core$Object$Q(_18);
_21 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_13, &$s227);
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
void org$frostlang$frostc$MethodRef$cleanup(void* rawSelf) {
org$frostlang$frostc$MethodRef* param0 = (org$frostlang$frostc$MethodRef*) rawSelf;

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

