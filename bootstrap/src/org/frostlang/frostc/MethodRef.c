#include "org/frostlang/frostc/MethodRef.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/Compiler.h"
#include "org/frostlang/frostc/Type.h"
#include "org/frostlang/frostc/MethodDecl.h"
#include "frost/collections/ListView.h"
#include "frost/core/Bit.h"
#include "frost/collections/Array.h"
#include "org/frostlang/frostc/Type/Kind.h"
#include "frost/collections/HashMap.h"
#include "frost/core/Int64.h"
#include "org/frostlang/frostc/Compiler/Resolution.h"
#include "frost/core/Equatable.h"
#include "frost/core/Frost.h"
#include "frost/core/Weak.h"
#include "org/frostlang/frostc/ClassDecl.h"
#include "org/frostlang/frostc/Annotations.h"
#include "org/frostlang/frostc/MethodDecl/Kind.h"
#include "org/frostlang/frostc/FixedArray.h"
#include "frost/collections/CollectionView.h"
#include "frost/core/Range.LTfrost/core/Int64.GT.h"
#include "org/frostlang/frostc/Symbol.h"
#include "org/frostlang/frostc/Position.h"
#include "frost/core/UInt64.h"
#include "org/frostlang/frostc/MethodDecl/GenericParameter.h"
#include "frost/collections/Key.h"


static frost$core$String $s1;
org$frostlang$frostc$MethodRef$class_type org$frostlang$frostc$MethodRef$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { org$frostlang$frostc$MethodRef$convert$R$frost$core$String, org$frostlang$frostc$MethodRef$cleanup, org$frostlang$frostc$MethodRef$get_parameterCount$R$frost$core$Int64, org$frostlang$frostc$MethodRef$parameterType$frost$core$Int64$R$org$frostlang$frostc$Type, org$frostlang$frostc$MethodRef$get_returnType$R$org$frostlang$frostc$Type} };

typedef frost$core$Bit (*$fn10)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn70)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int64 (*$fn109)(frost$collections$CollectionView*);
typedef frost$collections$ListView* (*$fn120)(frost$collections$ListView*, frost$core$Range$LTfrost$core$Int64$GT);
typedef frost$core$Bit (*$fn163)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int64 (*$fn207)(frost$collections$CollectionView*);
typedef frost$collections$ListView* (*$fn218)(frost$collections$ListView*, frost$core$Range$LTfrost$core$Int64$GT);
typedef frost$core$Int64 (*$fn261)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn303)(frost$collections$ListView*, frost$core$Int64);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x52\x65\x66", 30, 3424382132411029242, NULL };
static frost$core$String $s16 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x72\x65\x73\x6f\x6c\x76\x65\x64\x20\x6d\x65\x74\x68\x6f\x64\x20", 18, -7848168754699295719, NULL };
static frost$core$String $s18 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s19 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x2e\x66\x72\x6f\x73\x74", 15, 3211813928529461499, NULL };
static frost$core$String $s43 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x69\x6e\x64\x54\x79\x70\x65\x28", 9, 2209574360715635276, NULL };
static frost$core$String $s45 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s53 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29\x20\x66\x61\x69\x6c\x65\x64", 8, 15259372878142387, NULL };
static frost$core$String $s54 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x2e\x66\x72\x6f\x73\x74", 15, 3211813928529461499, NULL };
static frost$core$String $s85 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x2e\x66\x72\x6f\x73\x74", 15, 3211813928529461499, NULL };
static frost$core$String $s86 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 3774402104032250369, NULL };
static frost$core$String $s96 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x2e\x66\x72\x6f\x73\x74", 15, 3211813928529461499, NULL };
static frost$core$String $s97 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 150, -7011207366892436101, NULL };
static frost$core$String $s105 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x2e\x66\x72\x6f\x73\x74", 15, 3211813928529461499, NULL };
static frost$core$String $s106 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77", 129, -7565876279272390604, NULL };
static frost$core$String $s138 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x2e\x66\x72\x6f\x73\x74", 15, 3211813928529461499, NULL };
static frost$core$String $s183 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x2e\x66\x72\x6f\x73\x74", 15, 3211813928529461499, NULL };
static frost$core$String $s194 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x2e\x66\x72\x6f\x73\x74", 15, 3211813928529461499, NULL };
static frost$core$String $s195 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 150, -7011207366892436101, NULL };
static frost$core$String $s203 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x2e\x66\x72\x6f\x73\x74", 15, 3211813928529461499, NULL };
static frost$core$String $s204 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77", 129, -7565876279272390604, NULL };
static frost$core$String $s231 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x2e\x66\x72\x6f\x73\x74", 15, 3211813928529461499, NULL };
static frost$core$String $s232 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 89, 2803708916022239501, NULL };
static frost$core$String $s244 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e", 1, 147, NULL };
static frost$core$String $s249 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e", 1, 147, NULL };
static frost$core$String $s257 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x2e\x66\x72\x6f\x73\x74", 15, 3211813928529461499, NULL };
static frost$core$String $s258 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77", 124, -7251164082880389502, NULL };
static frost$core$String $s288 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x2e\x66\x72\x6f\x73\x74", 15, 3211813928529461499, NULL };
static frost$core$String $s289 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c\x2e\x47\x65\x6e\x65\x72\x69\x63\x50\x61\x72\x61\x6d\x65\x74\x65\x72\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c\x2e\x47\x65\x6e\x65\x72\x69\x63\x50\x61\x72\x61\x6d\x65\x74\x65\x72\x3e", 185, -6962729775976817809, NULL };
static frost$core$String $s298 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x2e\x66\x72\x6f\x73\x74", 15, 3211813928529461499, NULL };
static frost$core$String $s299 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 145, -1296492412665607071, NULL };
static frost$core$String $s350 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x2e\x66\x72\x6f\x73\x74", 15, 3211813928529461499, NULL };
static frost$core$String $s351 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 3774402104032250369, NULL };
static frost$core$String $s360 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x28", 10, -7131972655011641641, NULL };
static frost$core$String $s362 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s367 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };

void org$frostlang$frostc$MethodRef$init$org$frostlang$frostc$Compiler$org$frostlang$frostc$Type$org$frostlang$frostc$MethodDecl(org$frostlang$frostc$MethodRef* param0, org$frostlang$frostc$Compiler* param1, org$frostlang$frostc$Type* param2, org$frostlang$frostc$MethodDecl* param3) {

// line 28
org$frostlang$frostc$MethodRef$init$org$frostlang$frostc$Compiler$org$frostlang$frostc$Type$org$frostlang$frostc$MethodDecl$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$Q(param0, param1, param2, param3, ((frost$collections$ListView*) NULL));
return;

}
void org$frostlang$frostc$MethodRef$init$org$frostlang$frostc$Compiler$org$frostlang$frostc$Type$org$frostlang$frostc$MethodDecl$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$Q(org$frostlang$frostc$MethodRef* param0, org$frostlang$frostc$Compiler* param1, org$frostlang$frostc$Type* param2, org$frostlang$frostc$MethodDecl* param3, frost$collections$ListView* param4) {

frost$core$Bit local0;
org$frostlang$frostc$Type* local1 = NULL;
org$frostlang$frostc$Type* local2 = NULL;
frost$core$Bit local3;
frost$core$Bit local4;
frost$collections$Array* local5 = NULL;
org$frostlang$frostc$Type$Kind local6;
frost$core$Bit local7;
org$frostlang$frostc$Type$Kind local8;
org$frostlang$frostc$Type* local9 = NULL;
frost$core$String* local10 = NULL;
frost$collections$HashMap* local11 = NULL;
frost$core$Int64 local12;
// line 35
org$frostlang$frostc$Compiler$Resolution* $tmp2 = &param3->resolved;
org$frostlang$frostc$Compiler$Resolution $tmp3 = *$tmp2;
org$frostlang$frostc$Compiler$Resolution$wrapper* $tmp4;
$tmp4 = (org$frostlang$frostc$Compiler$Resolution$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Compiler$Resolution$wrapperclass);
$tmp4->value = $tmp3;
frost$core$Int64 $tmp5 = (frost$core$Int64) {0};
org$frostlang$frostc$Compiler$Resolution $tmp6 = org$frostlang$frostc$Compiler$Resolution$init$frost$core$Int64($tmp5);
org$frostlang$frostc$Compiler$Resolution$wrapper* $tmp7;
$tmp7 = (org$frostlang$frostc$Compiler$Resolution$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Compiler$Resolution$wrapperclass);
$tmp7->value = $tmp6;
ITable* $tmp8 = ((frost$core$Equatable*) $tmp4)->$class->itable;
while ($tmp8->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp8 = $tmp8->next;
}
$fn10 $tmp9 = $tmp8->methods[1];
frost$core$Bit $tmp11 = $tmp9(((frost$core$Equatable*) $tmp4), ((frost$core$Equatable*) $tmp7));
bool $tmp12 = $tmp11.value;
if ($tmp12) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp13 = (frost$core$Int64) {35};
frost$core$String* $tmp14 = org$frostlang$frostc$MethodDecl$get_signature$R$frost$core$String(param3);
frost$core$String* $tmp15 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s16, $tmp14);
frost$core$String* $tmp17 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp15, &$s18);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s19, $tmp13, $tmp17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp17));
// unreffing REF($15:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp15));
// unreffing REF($14:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp14));
// unreffing REF($13:frost.core.String)
abort(); // unreachable
block1:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp7)));
// unreffing REF($7:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp4)));
// unreffing REF($3:frost.core.Equatable<org.frostlang.frostc.Compiler.Resolution>)
// line 37
frost$core$Bit $tmp20 = frost$core$Bit$init$builtin_bit(param4 == NULL);
bool $tmp21 = $tmp20.value;
if ($tmp21) goto block3; else goto block4;
block3:;
frost$collections$Array** $tmp22 = &param3->genericParameters;
frost$collections$Array* $tmp23 = *$tmp22;
frost$core$Bit $tmp24 = frost$core$Bit$init$builtin_bit($tmp23 != NULL);
*(&local0) = $tmp24;
goto block5;
block4:;
*(&local0) = $tmp20;
goto block5;
block5:;
frost$core$Bit $tmp25 = *(&local0);
frost$core$Bit* $tmp26 = &param0->requiresTypeInference;
*$tmp26 = $tmp25;
// line 38
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$MethodDecl** $tmp27 = &param0->value;
org$frostlang$frostc$MethodDecl* $tmp28 = *$tmp27;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp28));
org$frostlang$frostc$MethodDecl** $tmp29 = &param0->value;
*$tmp29 = param3;
// line 39
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
org$frostlang$frostc$Type** $tmp30 = &param0->target;
org$frostlang$frostc$Type* $tmp31 = *$tmp30;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp31));
org$frostlang$frostc$Type** $tmp32 = &param0->target;
*$tmp32 = param2;
// line 40
frost$core$Weak** $tmp33 = &param3->owner;
frost$core$Weak* $tmp34 = *$tmp33;
frost$core$Object* $tmp35 = frost$core$Weak$get$R$frost$core$Weak$T($tmp34);
org$frostlang$frostc$Type* $tmp36 = org$frostlang$frostc$Compiler$findType$org$frostlang$frostc$Type$org$frostlang$frostc$ClassDecl$R$org$frostlang$frostc$Type$Q(param1, param2, ((org$frostlang$frostc$ClassDecl*) $tmp35));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp36));
org$frostlang$frostc$Type* $tmp37 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp37));
*(&local1) = $tmp36;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp36));
// unreffing REF($73:org.frostlang.frostc.Type?)
frost$core$Frost$unref$frost$core$Object$Q($tmp35);
// unreffing REF($71:frost.core.Weak.T)
// line 41
org$frostlang$frostc$Type* $tmp38 = *(&local1);
frost$core$Bit $tmp39 = frost$core$Bit$init$builtin_bit($tmp38 != NULL);
bool $tmp40 = $tmp39.value;
if ($tmp40) goto block6; else goto block7;
block7:;
frost$core$Int64 $tmp41 = (frost$core$Int64) {41};
frost$core$String* $tmp42 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s43, ((frost$core$Object*) param2));
frost$core$String* $tmp44 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp42, &$s45);
frost$core$Weak** $tmp46 = &param3->owner;
frost$core$Weak* $tmp47 = *$tmp46;
frost$core$Object* $tmp48 = frost$core$Weak$get$R$frost$core$Weak$T($tmp47);
frost$core$String** $tmp49 = &((org$frostlang$frostc$ClassDecl*) $tmp48)->name;
frost$core$String* $tmp50 = *$tmp49;
frost$core$String* $tmp51 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp44, $tmp50);
frost$core$String* $tmp52 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp51, &$s53);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s54, $tmp41, $tmp52);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp52));
// unreffing REF($105:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp51));
// unreffing REF($104:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q($tmp48);
// unreffing REF($100:frost.core.Weak.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp44));
// unreffing REF($96:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp42));
// unreffing REF($95:frost.core.String)
abort(); // unreachable
block6:;
// line 42
org$frostlang$frostc$Type* $tmp55 = org$frostlang$frostc$MethodDecl$get_type$R$org$frostlang$frostc$Type(param3);
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp55));
org$frostlang$frostc$Type* $tmp56 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp56));
*(&local2) = $tmp55;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp55));
// unreffing REF($124:org.frostlang.frostc.Type)
// line 43
org$frostlang$frostc$Annotations** $tmp57 = &param3->annotations;
org$frostlang$frostc$Annotations* $tmp58 = *$tmp57;
frost$core$Bit $tmp59 = org$frostlang$frostc$Annotations$get_isClass$R$frost$core$Bit($tmp58);
frost$core$Bit $tmp60 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp59);
bool $tmp61 = $tmp60.value;
if ($tmp61) goto block10; else goto block11;
block10:;
org$frostlang$frostc$MethodDecl$Kind* $tmp62 = &param3->methodKind;
org$frostlang$frostc$MethodDecl$Kind $tmp63 = *$tmp62;
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp64;
$tmp64 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp64->value = $tmp63;
frost$core$Int64 $tmp65 = (frost$core$Int64) {2};
org$frostlang$frostc$MethodDecl$Kind $tmp66 = org$frostlang$frostc$MethodDecl$Kind$init$frost$core$Int64($tmp65);
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp67;
$tmp67 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp67->value = $tmp66;
ITable* $tmp68 = ((frost$core$Equatable*) $tmp64)->$class->itable;
while ($tmp68->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp68 = $tmp68->next;
}
$fn70 $tmp69 = $tmp68->methods[1];
frost$core$Bit $tmp71 = $tmp69(((frost$core$Equatable*) $tmp64), ((frost$core$Equatable*) $tmp67));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp67)));
// unreffing REF($148:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp64)));
// unreffing REF($144:frost.core.Equatable<org.frostlang.frostc.MethodDecl.Kind>)
*(&local4) = $tmp71;
goto block12;
block11:;
*(&local4) = $tmp60;
goto block12;
block12:;
frost$core$Bit $tmp72 = *(&local4);
bool $tmp73 = $tmp72.value;
if ($tmp73) goto block13; else goto block14;
block13:;
frost$core$Bit $tmp74 = org$frostlang$frostc$Type$get_isClassLiteral$R$frost$core$Bit(param2);
*(&local3) = $tmp74;
goto block15;
block14:;
*(&local3) = $tmp72;
goto block15;
block15:;
frost$core$Bit $tmp75 = *(&local3);
bool $tmp76 = $tmp75.value;
if ($tmp76) goto block8; else goto block16;
block8:;
// line 45
frost$collections$Array* $tmp77 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp77);
*(&local5) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp77));
frost$collections$Array* $tmp78 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp78));
*(&local5) = $tmp77;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp77));
// unreffing REF($173:frost.collections.Array<org.frostlang.frostc.Type>)
// line 46
frost$collections$Array* $tmp79 = *(&local5);
org$frostlang$frostc$FixedArray** $tmp80 = &param2->subtypes;
org$frostlang$frostc$FixedArray* $tmp81 = *$tmp80;
frost$core$Bit $tmp82 = frost$core$Bit$init$builtin_bit($tmp81 != NULL);
bool $tmp83 = $tmp82.value;
if ($tmp83) goto block17; else goto block18;
block18:;
frost$core$Int64 $tmp84 = (frost$core$Int64) {46};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s85, $tmp84, &$s86);
abort(); // unreachable
block17:;
frost$core$Int64 $tmp87 = (frost$core$Int64) {1};
frost$core$Object* $tmp88 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp81, $tmp87);
frost$collections$Array$add$frost$collections$Array$T($tmp79, ((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp88)));
frost$core$Frost$unref$frost$core$Object$Q($tmp88);
// unreffing REF($201:org.frostlang.frostc.FixedArray.T)
// line 47
frost$collections$Array* $tmp89 = *(&local5);
org$frostlang$frostc$Type* $tmp90 = *(&local2);
org$frostlang$frostc$FixedArray** $tmp91 = &$tmp90->subtypes;
org$frostlang$frostc$FixedArray* $tmp92 = *$tmp91;
frost$core$Bit $tmp93 = frost$core$Bit$init$builtin_bit($tmp92 != NULL);
bool $tmp94 = $tmp93.value;
if ($tmp94) goto block19; else goto block20;
block20:;
frost$core$Int64 $tmp95 = (frost$core$Int64) {47};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s96, $tmp95, &$s97);
abort(); // unreachable
block19:;
frost$core$Int64 $tmp98 = (frost$core$Int64) {0};
org$frostlang$frostc$Type* $tmp99 = *(&local2);
org$frostlang$frostc$FixedArray** $tmp100 = &$tmp99->subtypes;
org$frostlang$frostc$FixedArray* $tmp101 = *$tmp100;
frost$core$Bit $tmp102 = frost$core$Bit$init$builtin_bit($tmp101 != NULL);
bool $tmp103 = $tmp102.value;
if ($tmp103) goto block21; else goto block22;
block22:;
frost$core$Int64 $tmp104 = (frost$core$Int64) {47};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s105, $tmp104, &$s106);
abort(); // unreachable
block21:;
ITable* $tmp107 = ((frost$collections$CollectionView*) $tmp101)->$class->itable;
while ($tmp107->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp107 = $tmp107->next;
}
$fn109 $tmp108 = $tmp107->methods[0];
frost$core$Int64 $tmp110 = $tmp108(((frost$collections$CollectionView*) $tmp101));
frost$core$Int64 $tmp111 = (frost$core$Int64) {1};
int64_t $tmp112 = $tmp110.value;
int64_t $tmp113 = $tmp111.value;
int64_t $tmp114 = $tmp112 - $tmp113;
frost$core$Int64 $tmp115 = (frost$core$Int64) {$tmp114};
frost$core$Bit $tmp116 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp117 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp98, $tmp115, $tmp116);
ITable* $tmp118 = ((frost$collections$ListView*) $tmp92)->$class->itable;
while ($tmp118->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp118 = $tmp118->next;
}
$fn120 $tmp119 = $tmp118->methods[1];
frost$collections$ListView* $tmp121 = $tmp119(((frost$collections$ListView*) $tmp92), $tmp117);
frost$collections$Array$addAll$frost$collections$CollectionView$LTfrost$collections$Array$T$GT($tmp89, ((frost$collections$CollectionView*) $tmp121));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp121));
// unreffing REF($245:frost.collections.ListView<frost.collections.ListView.T>)
// line 48
// line 49
org$frostlang$frostc$MethodDecl$Kind* $tmp122 = &param3->methodKind;
org$frostlang$frostc$MethodDecl$Kind $tmp123 = *$tmp122;
frost$core$Int64 $tmp124 = $tmp123.$rawValue;
frost$core$Int64 $tmp125 = (frost$core$Int64) {0};
frost$core$Bit $tmp126 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp124, $tmp125);
bool $tmp127 = $tmp126.value;
if ($tmp127) goto block24; else goto block25;
block24:;
// line 51
frost$core$Int64 $tmp128 = (frost$core$Int64) {18};
org$frostlang$frostc$Type$Kind $tmp129 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp128);
*(&local6) = $tmp129;
goto block23;
block25:;
frost$core$Int64 $tmp130 = (frost$core$Int64) {1};
frost$core$Bit $tmp131 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp124, $tmp130);
bool $tmp132 = $tmp131.value;
if ($tmp132) goto block26; else goto block27;
block26:;
// line 54
frost$core$Int64 $tmp133 = (frost$core$Int64) {17};
org$frostlang$frostc$Type$Kind $tmp134 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp133);
*(&local6) = $tmp134;
goto block23;
block27:;
// line 57
frost$core$Bit $tmp135 = frost$core$Bit$init$builtin_bit(false);
bool $tmp136 = $tmp135.value;
if ($tmp136) goto block28; else goto block29;
block29:;
frost$core$Int64 $tmp137 = (frost$core$Int64) {57};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s138, $tmp137);
abort(); // unreachable
block28:;
goto block23;
block23:;
// line 60
org$frostlang$frostc$Type* $tmp139 = *(&local2);
org$frostlang$frostc$Position* $tmp140 = &((org$frostlang$frostc$Symbol*) $tmp139)->position;
org$frostlang$frostc$Position $tmp141 = *$tmp140;
org$frostlang$frostc$Type$Kind $tmp142 = *(&local6);
frost$collections$Array* $tmp143 = *(&local5);
org$frostlang$frostc$Type* $tmp144 = *(&local2);
org$frostlang$frostc$Type* $tmp145 = org$frostlang$frostc$Type$get_returnType$R$org$frostlang$frostc$Type($tmp144);
org$frostlang$frostc$Type* $tmp146 = *(&local2);
frost$core$Int64* $tmp147 = &$tmp146->priority;
frost$core$Int64 $tmp148 = *$tmp147;
org$frostlang$frostc$Type* $tmp149 = org$frostlang$frostc$Type$methodType$org$frostlang$frostc$Position$org$frostlang$frostc$Type$Kind$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$org$frostlang$frostc$Type$frost$core$Int64$R$org$frostlang$frostc$Type($tmp141, $tmp142, ((frost$collections$ListView*) $tmp143), $tmp145, $tmp148);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp149));
org$frostlang$frostc$Type* $tmp150 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp150));
*(&local2) = $tmp149;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp149));
// unreffing REF($297:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp145));
// unreffing REF($293:org.frostlang.frostc.Type)
frost$collections$Array* $tmp151 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp151));
// unreffing parameterTypes
*(&local5) = ((frost$collections$Array*) NULL);
goto block9;
block16:;
// line 63
frost$core$Bit $tmp152 = org$frostlang$frostc$Compiler$isImmutable$org$frostlang$frostc$Type$R$frost$core$Bit(param1, param2);
frost$core$Bit $tmp153 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp152);
bool $tmp154 = $tmp153.value;
if ($tmp154) goto block32; else goto block33;
block32:;
org$frostlang$frostc$MethodDecl$Kind* $tmp155 = &param3->methodKind;
org$frostlang$frostc$MethodDecl$Kind $tmp156 = *$tmp155;
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp157;
$tmp157 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp157->value = $tmp156;
frost$core$Int64 $tmp158 = (frost$core$Int64) {2};
org$frostlang$frostc$MethodDecl$Kind $tmp159 = org$frostlang$frostc$MethodDecl$Kind$init$frost$core$Int64($tmp158);
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp160;
$tmp160 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp160->value = $tmp159;
ITable* $tmp161 = ((frost$core$Equatable*) $tmp157)->$class->itable;
while ($tmp161->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp161 = $tmp161->next;
}
$fn163 $tmp162 = $tmp161->methods[1];
frost$core$Bit $tmp164 = $tmp162(((frost$core$Equatable*) $tmp157), ((frost$core$Equatable*) $tmp160));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp160)));
// unreffing REF($327:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp157)));
// unreffing REF($323:frost.core.Equatable<org.frostlang.frostc.MethodDecl.Kind>)
*(&local7) = $tmp164;
goto block34;
block33:;
*(&local7) = $tmp153;
goto block34;
block34:;
frost$core$Bit $tmp165 = *(&local7);
bool $tmp166 = $tmp165.value;
if ($tmp166) goto block30; else goto block31;
block30:;
// line 64
// line 65
org$frostlang$frostc$MethodDecl$Kind* $tmp167 = &param3->methodKind;
org$frostlang$frostc$MethodDecl$Kind $tmp168 = *$tmp167;
frost$core$Int64 $tmp169 = $tmp168.$rawValue;
frost$core$Int64 $tmp170 = (frost$core$Int64) {0};
frost$core$Bit $tmp171 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp169, $tmp170);
bool $tmp172 = $tmp171.value;
if ($tmp172) goto block36; else goto block37;
block36:;
// line 67
frost$core$Int64 $tmp173 = (frost$core$Int64) {16};
org$frostlang$frostc$Type$Kind $tmp174 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp173);
*(&local8) = $tmp174;
goto block35;
block37:;
frost$core$Int64 $tmp175 = (frost$core$Int64) {1};
frost$core$Bit $tmp176 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp169, $tmp175);
bool $tmp177 = $tmp176.value;
if ($tmp177) goto block38; else goto block39;
block38:;
// line 70
frost$core$Int64 $tmp178 = (frost$core$Int64) {15};
org$frostlang$frostc$Type$Kind $tmp179 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp178);
*(&local8) = $tmp179;
goto block35;
block39:;
// line 73
frost$core$Bit $tmp180 = frost$core$Bit$init$builtin_bit(false);
bool $tmp181 = $tmp180.value;
if ($tmp181) goto block40; else goto block41;
block41:;
frost$core$Int64 $tmp182 = (frost$core$Int64) {73};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s183, $tmp182);
abort(); // unreachable
block40:;
goto block35;
block35:;
// line 76
org$frostlang$frostc$Type* $tmp184 = *(&local2);
org$frostlang$frostc$Position* $tmp185 = &((org$frostlang$frostc$Symbol*) $tmp184)->position;
org$frostlang$frostc$Position $tmp186 = *$tmp185;
org$frostlang$frostc$Type$Kind $tmp187 = *(&local8);
org$frostlang$frostc$Type* $tmp188 = *(&local2);
org$frostlang$frostc$FixedArray** $tmp189 = &$tmp188->subtypes;
org$frostlang$frostc$FixedArray* $tmp190 = *$tmp189;
frost$core$Bit $tmp191 = frost$core$Bit$init$builtin_bit($tmp190 != NULL);
bool $tmp192 = $tmp191.value;
if ($tmp192) goto block42; else goto block43;
block43:;
frost$core$Int64 $tmp193 = (frost$core$Int64) {77};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s194, $tmp193, &$s195);
abort(); // unreachable
block42:;
frost$core$Int64 $tmp196 = (frost$core$Int64) {0};
org$frostlang$frostc$Type* $tmp197 = *(&local2);
org$frostlang$frostc$FixedArray** $tmp198 = &$tmp197->subtypes;
org$frostlang$frostc$FixedArray* $tmp199 = *$tmp198;
frost$core$Bit $tmp200 = frost$core$Bit$init$builtin_bit($tmp199 != NULL);
bool $tmp201 = $tmp200.value;
if ($tmp201) goto block44; else goto block45;
block45:;
frost$core$Int64 $tmp202 = (frost$core$Int64) {77};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s203, $tmp202, &$s204);
abort(); // unreachable
block44:;
ITable* $tmp205 = ((frost$collections$CollectionView*) $tmp199)->$class->itable;
while ($tmp205->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp205 = $tmp205->next;
}
$fn207 $tmp206 = $tmp205->methods[0];
frost$core$Int64 $tmp208 = $tmp206(((frost$collections$CollectionView*) $tmp199));
frost$core$Int64 $tmp209 = (frost$core$Int64) {1};
int64_t $tmp210 = $tmp208.value;
int64_t $tmp211 = $tmp209.value;
int64_t $tmp212 = $tmp210 - $tmp211;
frost$core$Int64 $tmp213 = (frost$core$Int64) {$tmp212};
frost$core$Bit $tmp214 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp215 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp196, $tmp213, $tmp214);
ITable* $tmp216 = ((frost$collections$ListView*) $tmp190)->$class->itable;
while ($tmp216->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp216 = $tmp216->next;
}
$fn218 $tmp217 = $tmp216->methods[1];
frost$collections$ListView* $tmp219 = $tmp217(((frost$collections$ListView*) $tmp190), $tmp215);
org$frostlang$frostc$Type* $tmp220 = *(&local2);
org$frostlang$frostc$Type* $tmp221 = org$frostlang$frostc$Type$get_returnType$R$org$frostlang$frostc$Type($tmp220);
org$frostlang$frostc$Type* $tmp222 = *(&local2);
frost$core$Int64* $tmp223 = &$tmp222->priority;
frost$core$Int64 $tmp224 = *$tmp223;
org$frostlang$frostc$Type* $tmp225 = org$frostlang$frostc$Type$methodType$org$frostlang$frostc$Position$org$frostlang$frostc$Type$Kind$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$org$frostlang$frostc$Type$frost$core$Int64$R$org$frostlang$frostc$Type($tmp186, $tmp187, $tmp219, $tmp221, $tmp224);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp225));
org$frostlang$frostc$Type* $tmp226 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp226));
*(&local2) = $tmp225;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp225));
// unreffing REF($421:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp221));
// unreffing REF($417:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp219));
// unreffing REF($414:frost.collections.ListView<frost.collections.ListView.T>)
goto block31;
block31:;
goto block9;
block9:;
// line 80
org$frostlang$frostc$Type* $tmp227 = *(&local1);
frost$core$Bit $tmp228 = frost$core$Bit$init$builtin_bit($tmp227 != NULL);
bool $tmp229 = $tmp228.value;
if ($tmp229) goto block46; else goto block47;
block47:;
frost$core$Int64 $tmp230 = (frost$core$Int64) {80};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s231, $tmp230, &$s232);
abort(); // unreachable
block46:;
org$frostlang$frostc$Type* $tmp233 = *(&local2);
org$frostlang$frostc$Type* $tmp234 = org$frostlang$frostc$Compiler$remapType$org$frostlang$frostc$Type$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(param1, $tmp227, $tmp233);
*(&local9) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp234));
org$frostlang$frostc$Type* $tmp235 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp235));
*(&local9) = $tmp234;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp234));
// unreffing REF($450:org.frostlang.frostc.Type)
// line 81
frost$core$Bit $tmp236 = frost$core$Bit$init$builtin_bit(param4 != NULL);
bool $tmp237 = $tmp236.value;
if ($tmp237) goto block48; else goto block50;
block48:;
// line 82
frost$core$Weak** $tmp238 = &param3->owner;
frost$core$Weak* $tmp239 = *$tmp238;
frost$core$Object* $tmp240 = frost$core$Weak$get$R$frost$core$Weak$T($tmp239);
frost$core$String** $tmp241 = &((org$frostlang$frostc$ClassDecl*) $tmp240)->name;
frost$core$String* $tmp242 = *$tmp241;
frost$core$String* $tmp243 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp242, &$s244);
frost$core$String** $tmp245 = &((org$frostlang$frostc$Symbol*) param3)->name;
frost$core$String* $tmp246 = *$tmp245;
frost$core$String* $tmp247 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp243, $tmp246);
frost$core$String* $tmp248 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp247, &$s249);
*(&local10) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp248));
frost$core$String* $tmp250 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp250));
*(&local10) = $tmp248;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp248));
// unreffing REF($479:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp247));
// unreffing REF($478:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp243));
// unreffing REF($474:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q($tmp240);
// unreffing REF($470:frost.core.Weak.T)
// line 83
frost$collections$HashMap* $tmp251 = (frost$collections$HashMap*) frostObjectAlloc(56, (frost$core$Class*) &frost$collections$HashMap$class);
frost$collections$HashMap$init($tmp251);
*(&local11) = ((frost$collections$HashMap*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp251));
frost$collections$HashMap* $tmp252 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp252));
*(&local11) = $tmp251;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp251));
// unreffing REF($500:frost.collections.HashMap<frost.core.String, org.frostlang.frostc.Type>)
// line 84
frost$core$Int64 $tmp253 = (frost$core$Int64) {0};
frost$core$Bit $tmp254 = frost$core$Bit$init$builtin_bit(param4 != NULL);
bool $tmp255 = $tmp254.value;
if ($tmp255) goto block51; else goto block52;
block52:;
frost$core$Int64 $tmp256 = (frost$core$Int64) {84};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s257, $tmp256, &$s258);
abort(); // unreachable
block51:;
ITable* $tmp259 = ((frost$collections$CollectionView*) param4)->$class->itable;
while ($tmp259->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp259 = $tmp259->next;
}
$fn261 $tmp260 = $tmp259->methods[0];
frost$core$Int64 $tmp262 = $tmp260(((frost$collections$CollectionView*) param4));
frost$core$Bit $tmp263 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp264 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp253, $tmp262, $tmp263);
frost$core$Int64 $tmp265 = $tmp264.min;
*(&local12) = $tmp265;
frost$core$Int64 $tmp266 = $tmp264.max;
frost$core$Bit $tmp267 = $tmp264.inclusive;
bool $tmp268 = $tmp267.value;
frost$core$Int64 $tmp269 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp270 = frost$core$Int64$convert$R$frost$core$UInt64($tmp269);
if ($tmp268) goto block56; else goto block57;
block56:;
int64_t $tmp271 = $tmp265.value;
int64_t $tmp272 = $tmp266.value;
bool $tmp273 = $tmp271 <= $tmp272;
frost$core$Bit $tmp274 = (frost$core$Bit) {$tmp273};
bool $tmp275 = $tmp274.value;
if ($tmp275) goto block53; else goto block54;
block57:;
int64_t $tmp276 = $tmp265.value;
int64_t $tmp277 = $tmp266.value;
bool $tmp278 = $tmp276 < $tmp277;
frost$core$Bit $tmp279 = (frost$core$Bit) {$tmp278};
bool $tmp280 = $tmp279.value;
if ($tmp280) goto block53; else goto block54;
block53:;
// line 85
frost$collections$HashMap* $tmp281 = *(&local11);
frost$core$String* $tmp282 = *(&local10);
frost$collections$Array** $tmp283 = &param3->genericParameters;
frost$collections$Array* $tmp284 = *$tmp283;
frost$core$Bit $tmp285 = frost$core$Bit$init$builtin_bit($tmp284 != NULL);
bool $tmp286 = $tmp285.value;
if ($tmp286) goto block58; else goto block59;
block59:;
frost$core$Int64 $tmp287 = (frost$core$Int64) {85};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s288, $tmp287, &$s289);
abort(); // unreachable
block58:;
frost$core$Int64 $tmp290 = *(&local12);
frost$core$Object* $tmp291 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp284, $tmp290);
frost$core$String** $tmp292 = &((org$frostlang$frostc$Symbol*) ((org$frostlang$frostc$MethodDecl$GenericParameter*) $tmp291))->name;
frost$core$String* $tmp293 = *$tmp292;
frost$core$String* $tmp294 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp282, $tmp293);
frost$core$Bit $tmp295 = frost$core$Bit$init$builtin_bit(param4 != NULL);
bool $tmp296 = $tmp295.value;
if ($tmp296) goto block60; else goto block61;
block61:;
frost$core$Int64 $tmp297 = (frost$core$Int64) {85};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s298, $tmp297, &$s299);
abort(); // unreachable
block60:;
frost$core$Int64 $tmp300 = *(&local12);
ITable* $tmp301 = param4->$class->itable;
while ($tmp301->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp301 = $tmp301->next;
}
$fn303 $tmp302 = $tmp301->methods[0];
frost$core$Object* $tmp304 = $tmp302(param4, $tmp300);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp281, ((frost$collections$Key*) $tmp294), ((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp304)));
frost$core$Frost$unref$frost$core$Object$Q($tmp304);
// unreffing REF($581:frost.collections.ListView.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp294));
// unreffing REF($568:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q($tmp291);
// unreffing REF($563:frost.collections.Array.T)
goto block55;
block55:;
frost$core$Int64 $tmp305 = *(&local12);
int64_t $tmp306 = $tmp266.value;
int64_t $tmp307 = $tmp305.value;
int64_t $tmp308 = $tmp306 - $tmp307;
frost$core$Int64 $tmp309 = (frost$core$Int64) {$tmp308};
frost$core$UInt64 $tmp310 = frost$core$Int64$convert$R$frost$core$UInt64($tmp309);
if ($tmp268) goto block63; else goto block64;
block63:;
uint64_t $tmp311 = $tmp310.value;
uint64_t $tmp312 = $tmp270.value;
bool $tmp313 = $tmp311 >= $tmp312;
frost$core$Bit $tmp314 = (frost$core$Bit) {$tmp313};
bool $tmp315 = $tmp314.value;
if ($tmp315) goto block62; else goto block54;
block64:;
uint64_t $tmp316 = $tmp310.value;
uint64_t $tmp317 = $tmp270.value;
bool $tmp318 = $tmp316 > $tmp317;
frost$core$Bit $tmp319 = (frost$core$Bit) {$tmp318};
bool $tmp320 = $tmp319.value;
if ($tmp320) goto block62; else goto block54;
block62:;
int64_t $tmp321 = $tmp305.value;
int64_t $tmp322 = $tmp269.value;
int64_t $tmp323 = $tmp321 + $tmp322;
frost$core$Int64 $tmp324 = (frost$core$Int64) {$tmp323};
*(&local12) = $tmp324;
goto block53;
block54:;
// line 87
org$frostlang$frostc$Type* $tmp325 = *(&local9);
frost$collections$HashMap* $tmp326 = *(&local11);
org$frostlang$frostc$Type* $tmp327 = org$frostlang$frostc$Type$remap$frost$collections$HashMap$LTfrost$core$String$Corg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type($tmp325, $tmp326);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp327));
org$frostlang$frostc$Type** $tmp328 = &param0->effectiveType;
org$frostlang$frostc$Type* $tmp329 = *$tmp328;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp329));
org$frostlang$frostc$Type** $tmp330 = &param0->effectiveType;
*$tmp330 = $tmp327;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp327));
// unreffing REF($623:org.frostlang.frostc.Type)
frost$collections$HashMap* $tmp331 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp331));
// unreffing map
*(&local11) = ((frost$collections$HashMap*) NULL);
frost$core$String* $tmp332 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp332));
// unreffing prefix
*(&local10) = ((frost$core$String*) NULL);
goto block49;
block50:;
// line 1
// line 90
org$frostlang$frostc$Type* $tmp333 = *(&local9);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp333));
org$frostlang$frostc$Type** $tmp334 = &param0->effectiveType;
org$frostlang$frostc$Type* $tmp335 = *$tmp334;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp335));
org$frostlang$frostc$Type** $tmp336 = &param0->effectiveType;
*$tmp336 = $tmp333;
goto block49;
block49:;
org$frostlang$frostc$Type* $tmp337 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp337));
// unreffing effectiveType
*(&local9) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp338 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp338));
// unreffing methodType
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp339 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp339));
// unreffing found
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
return;

}
frost$core$Int64 org$frostlang$frostc$MethodRef$get_parameterCount$R$frost$core$Int64(org$frostlang$frostc$MethodRef* param0) {

// line 95
org$frostlang$frostc$Type** $tmp340 = &param0->effectiveType;
org$frostlang$frostc$Type* $tmp341 = *$tmp340;
frost$core$Int64 $tmp342 = org$frostlang$frostc$Type$get_parameterCount$R$frost$core$Int64($tmp341);
return $tmp342;

}
org$frostlang$frostc$Type* org$frostlang$frostc$MethodRef$parameterType$frost$core$Int64$R$org$frostlang$frostc$Type(org$frostlang$frostc$MethodRef* param0, frost$core$Int64 param1) {

// line 99
org$frostlang$frostc$Type** $tmp343 = &param0->effectiveType;
org$frostlang$frostc$Type* $tmp344 = *$tmp343;
org$frostlang$frostc$FixedArray** $tmp345 = &$tmp344->subtypes;
org$frostlang$frostc$FixedArray* $tmp346 = *$tmp345;
frost$core$Bit $tmp347 = frost$core$Bit$init$builtin_bit($tmp346 != NULL);
bool $tmp348 = $tmp347.value;
if ($tmp348) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp349 = (frost$core$Int64) {99};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s350, $tmp349, &$s351);
abort(); // unreachable
block1:;
frost$core$Object* $tmp352 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp346, param1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp352)));
frost$core$Frost$unref$frost$core$Object$Q($tmp352);
// unreffing REF($14:org.frostlang.frostc.FixedArray.T)
return ((org$frostlang$frostc$Type*) $tmp352);

}
org$frostlang$frostc$Type* org$frostlang$frostc$MethodRef$get_returnType$R$org$frostlang$frostc$Type(org$frostlang$frostc$MethodRef* param0) {

// line 103
org$frostlang$frostc$Type** $tmp353 = &param0->effectiveType;
org$frostlang$frostc$Type* $tmp354 = *$tmp353;
org$frostlang$frostc$Type* $tmp355 = org$frostlang$frostc$Type$get_returnType$R$org$frostlang$frostc$Type($tmp354);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp355));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp355));
// unreffing REF($3:org.frostlang.frostc.Type)
return $tmp355;

}
frost$core$String* org$frostlang$frostc$MethodRef$convert$R$frost$core$String(org$frostlang$frostc$MethodRef* param0) {

// line 108
org$frostlang$frostc$MethodDecl** $tmp356 = &param0->value;
org$frostlang$frostc$MethodDecl* $tmp357 = *$tmp356;
frost$core$String* $tmp358 = org$frostlang$frostc$MethodDecl$get_declaration$R$frost$core$String($tmp357);
frost$core$String* $tmp359 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s360, $tmp358);
frost$core$String* $tmp361 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp359, &$s362);
org$frostlang$frostc$Type** $tmp363 = &param0->effectiveType;
org$frostlang$frostc$Type* $tmp364 = *$tmp363;
frost$core$String* $tmp365 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp361, ((frost$core$Object*) $tmp364));
frost$core$String* $tmp366 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp365, &$s367);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp366));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp366));
// unreffing REF($10:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp365));
// unreffing REF($9:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp361));
// unreffing REF($5:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp359));
// unreffing REF($4:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp358));
// unreffing REF($3:frost.core.String)
return $tmp366;

}
void org$frostlang$frostc$MethodRef$cleanup(org$frostlang$frostc$MethodRef* param0) {

// line 9
frost$core$Object$cleanup(((frost$core$Object*) param0));
org$frostlang$frostc$Type** $tmp368 = &param0->target;
org$frostlang$frostc$Type* $tmp369 = *$tmp368;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp369));
org$frostlang$frostc$MethodDecl** $tmp370 = &param0->value;
org$frostlang$frostc$MethodDecl* $tmp371 = *$tmp370;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp371));
org$frostlang$frostc$Type** $tmp372 = &param0->effectiveType;
org$frostlang$frostc$Type* $tmp373 = *$tmp372;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp373));
return;

}

