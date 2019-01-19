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
#include "org/frostlang/frostc/Pair.h"
#include "frost/core/UInt64.h"
#include "org/frostlang/frostc/MethodDecl/GenericParameter.h"
#include "frost/collections/Key.h"


static frost$core$String $s1;
org$frostlang$frostc$MethodRef$class_type org$frostlang$frostc$MethodRef$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { org$frostlang$frostc$MethodRef$get_asString$R$frost$core$String, org$frostlang$frostc$MethodRef$cleanup, org$frostlang$frostc$MethodRef$get_parameterCount$R$frost$core$Int64, org$frostlang$frostc$MethodRef$parameterType$frost$core$Int64$R$org$frostlang$frostc$Type, org$frostlang$frostc$MethodRef$get_returnType$R$org$frostlang$frostc$Type} };

typedef frost$core$Bit (*$fn10)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn70)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int64 (*$fn109)(frost$collections$CollectionView*);
typedef frost$collections$ListView* (*$fn120)(frost$collections$ListView*, frost$core$Range$LTfrost$core$Int64$GT);
typedef frost$core$Bit (*$fn163)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int64 (*$fn207)(frost$collections$CollectionView*);
typedef frost$collections$ListView* (*$fn218)(frost$collections$ListView*, frost$core$Range$LTfrost$core$Int64$GT);
typedef frost$core$Int64 (*$fn263)(frost$collections$CollectionView*);
typedef frost$collections$ListView* (*$fn274)(frost$collections$ListView*, frost$core$Range$LTfrost$core$Int64$GT);
typedef frost$core$Bit (*$fn291)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int64 (*$fn335)(frost$collections$CollectionView*);
typedef frost$collections$ListView* (*$fn346)(frost$collections$ListView*, frost$core$Range$LTfrost$core$Int64$GT);
typedef frost$core$Int64 (*$fn398)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn440)(frost$collections$ListView*, frost$core$Int64);

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
static frost$core$String $s250 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x2e\x66\x72\x6f\x73\x74", 15, 3211813928529461499, NULL };
static frost$core$String $s251 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 150, -7011207366892436101, NULL };
static frost$core$String $s259 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x2e\x66\x72\x6f\x73\x74", 15, 3211813928529461499, NULL };
static frost$core$String $s260 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77", 129, -7565876279272390604, NULL };
static frost$core$String $s300 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x2e\x66\x72\x6f\x73\x74", 15, 3211813928529461499, NULL };
static frost$core$String $s301 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 3774402104032250369, NULL };
static frost$core$String $s307 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4d\x61\x79\x62\x65", 16, -3824106975633991258, NULL };
static frost$core$String $s322 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x2e\x66\x72\x6f\x73\x74", 15, 3211813928529461499, NULL };
static frost$core$String $s323 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 150, -7011207366892436101, NULL };
static frost$core$String $s331 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x2e\x66\x72\x6f\x73\x74", 15, 3211813928529461499, NULL };
static frost$core$String $s332 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77", 129, -7565876279272390604, NULL };
static frost$core$String $s354 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x2e\x66\x72\x6f\x73\x74", 15, 3211813928529461499, NULL };
static frost$core$String $s355 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 3774402104032250369, NULL };
static frost$core$String $s368 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x2e\x66\x72\x6f\x73\x74", 15, 3211813928529461499, NULL };
static frost$core$String $s369 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 89, 2803708916022239501, NULL };
static frost$core$String $s381 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e", 1, 147, NULL };
static frost$core$String $s386 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e", 1, 147, NULL };
static frost$core$String $s394 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x2e\x66\x72\x6f\x73\x74", 15, 3211813928529461499, NULL };
static frost$core$String $s395 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77", 124, -7251164082880389502, NULL };
static frost$core$String $s425 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x2e\x66\x72\x6f\x73\x74", 15, 3211813928529461499, NULL };
static frost$core$String $s426 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c\x2e\x47\x65\x6e\x65\x72\x69\x63\x50\x61\x72\x61\x6d\x65\x74\x65\x72\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c\x2e\x47\x65\x6e\x65\x72\x69\x63\x50\x61\x72\x61\x6d\x65\x74\x65\x72\x3e", 185, -6962729775976817809, NULL };
static frost$core$String $s435 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x2e\x66\x72\x6f\x73\x74", 15, 3211813928529461499, NULL };
static frost$core$String $s436 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 145, -1296492412665607071, NULL };
static frost$core$String $s487 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x2e\x66\x72\x6f\x73\x74", 15, 3211813928529461499, NULL };
static frost$core$String $s488 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 3774402104032250369, NULL };
static frost$core$String $s497 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x28", 10, -7131972655011641641, NULL };
static frost$core$String $s499 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s504 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };

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
frost$core$Bit local10;
org$frostlang$frostc$Type* local11 = NULL;
frost$core$String* local12 = NULL;
frost$collections$HashMap* local13 = NULL;
frost$core$Int64 local14;
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
org$frostlang$frostc$Pair* $tmp227 = org$frostlang$frostc$Compiler$getTryScope$R$org$frostlang$frostc$Pair$LTorg$frostlang$frostc$IR$Block$ID$Q$Corg$frostlang$frostc$Variable$Q$GT$Q(param1);
frost$core$Bit $tmp228 = frost$core$Bit$init$builtin_bit($tmp227 != NULL);
bool $tmp229 = $tmp228.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp227));
// unreffing REF($440:org.frostlang.frostc.Pair<org.frostlang.frostc.IR.Block.ID?, org.frostlang.frostc.Variable?>?)
if ($tmp229) goto block46; else goto block47;
block46:;
// line 81
org$frostlang$frostc$Type* $tmp230 = *(&local2);
org$frostlang$frostc$Type* $tmp231 = org$frostlang$frostc$Type$get_returnType$R$org$frostlang$frostc$Type($tmp230);
*(&local9) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp231));
org$frostlang$frostc$Type* $tmp232 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp232));
*(&local9) = $tmp231;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp231));
// unreffing REF($450:org.frostlang.frostc.Type)
// line 82
org$frostlang$frostc$Type* $tmp233 = *(&local9);
org$frostlang$frostc$Type* $tmp234 = org$frostlang$frostc$Type$Error$R$org$frostlang$frostc$Type();
org$frostlang$frostc$Type* $tmp235 = org$frostlang$frostc$Type$nullable$R$org$frostlang$frostc$Type($tmp234);
frost$core$Bit $tmp236 = org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit($tmp233, $tmp235);
bool $tmp237 = $tmp236.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp235));
// unreffing REF($464:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp234));
// unreffing REF($463:org.frostlang.frostc.Type)
if ($tmp237) goto block48; else goto block50;
block48:;
// line 83
org$frostlang$frostc$Type* $tmp238 = *(&local2);
org$frostlang$frostc$Position* $tmp239 = &((org$frostlang$frostc$Symbol*) $tmp238)->position;
org$frostlang$frostc$Position $tmp240 = *$tmp239;
org$frostlang$frostc$Type* $tmp241 = *(&local2);
org$frostlang$frostc$Type$Kind* $tmp242 = &$tmp241->typeKind;
org$frostlang$frostc$Type$Kind $tmp243 = *$tmp242;
org$frostlang$frostc$Type* $tmp244 = *(&local2);
org$frostlang$frostc$FixedArray** $tmp245 = &$tmp244->subtypes;
org$frostlang$frostc$FixedArray* $tmp246 = *$tmp245;
frost$core$Bit $tmp247 = frost$core$Bit$init$builtin_bit($tmp246 != NULL);
bool $tmp248 = $tmp247.value;
if ($tmp248) goto block51; else goto block52;
block52:;
frost$core$Int64 $tmp249 = (frost$core$Int64) {84};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s250, $tmp249, &$s251);
abort(); // unreachable
block51:;
frost$core$Int64 $tmp252 = (frost$core$Int64) {0};
org$frostlang$frostc$Type* $tmp253 = *(&local2);
org$frostlang$frostc$FixedArray** $tmp254 = &$tmp253->subtypes;
org$frostlang$frostc$FixedArray* $tmp255 = *$tmp254;
frost$core$Bit $tmp256 = frost$core$Bit$init$builtin_bit($tmp255 != NULL);
bool $tmp257 = $tmp256.value;
if ($tmp257) goto block53; else goto block54;
block54:;
frost$core$Int64 $tmp258 = (frost$core$Int64) {84};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s259, $tmp258, &$s260);
abort(); // unreachable
block53:;
ITable* $tmp261 = ((frost$collections$CollectionView*) $tmp255)->$class->itable;
while ($tmp261->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp261 = $tmp261->next;
}
$fn263 $tmp262 = $tmp261->methods[0];
frost$core$Int64 $tmp264 = $tmp262(((frost$collections$CollectionView*) $tmp255));
frost$core$Int64 $tmp265 = (frost$core$Int64) {1};
int64_t $tmp266 = $tmp264.value;
int64_t $tmp267 = $tmp265.value;
int64_t $tmp268 = $tmp266 - $tmp267;
frost$core$Int64 $tmp269 = (frost$core$Int64) {$tmp268};
frost$core$Bit $tmp270 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp271 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp252, $tmp269, $tmp270);
ITable* $tmp272 = ((frost$collections$ListView*) $tmp246)->$class->itable;
while ($tmp272->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp272 = $tmp272->next;
}
$fn274 $tmp273 = $tmp272->methods[1];
frost$collections$ListView* $tmp275 = $tmp273(((frost$collections$ListView*) $tmp246), $tmp271);
org$frostlang$frostc$Type* $tmp276 = org$frostlang$frostc$Type$Void$R$org$frostlang$frostc$Type();
org$frostlang$frostc$Type* $tmp277 = *(&local2);
frost$core$Int64* $tmp278 = &$tmp277->priority;
frost$core$Int64 $tmp279 = *$tmp278;
org$frostlang$frostc$Type* $tmp280 = org$frostlang$frostc$Type$methodType$org$frostlang$frostc$Position$org$frostlang$frostc$Type$Kind$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$org$frostlang$frostc$Type$frost$core$Int64$R$org$frostlang$frostc$Type($tmp240, $tmp243, $tmp275, $tmp276, $tmp279);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp280));
org$frostlang$frostc$Type* $tmp281 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp281));
*(&local2) = $tmp280;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp280));
// unreffing REF($522:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp276));
// unreffing REF($518:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp275));
// unreffing REF($516:frost.collections.ListView<frost.collections.ListView.T>)
goto block49;
block50:;
// line 87
org$frostlang$frostc$Type* $tmp282 = *(&local9);
org$frostlang$frostc$Type$Kind* $tmp283 = &$tmp282->typeKind;
org$frostlang$frostc$Type$Kind $tmp284 = *$tmp283;
org$frostlang$frostc$Type$Kind$wrapper* $tmp285;
$tmp285 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp285->value = $tmp284;
frost$core$Int64 $tmp286 = (frost$core$Int64) {11};
org$frostlang$frostc$Type$Kind $tmp287 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp286);
org$frostlang$frostc$Type$Kind$wrapper* $tmp288;
$tmp288 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp288->value = $tmp287;
ITable* $tmp289 = ((frost$core$Equatable*) $tmp285)->$class->itable;
while ($tmp289->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp289 = $tmp289->next;
}
$fn291 $tmp290 = $tmp289->methods[0];
frost$core$Bit $tmp292 = $tmp290(((frost$core$Equatable*) $tmp285), ((frost$core$Equatable*) $tmp288));
bool $tmp293 = $tmp292.value;
if ($tmp293) goto block57; else goto block58;
block57:;
org$frostlang$frostc$Type* $tmp294 = *(&local9);
org$frostlang$frostc$FixedArray** $tmp295 = &$tmp294->subtypes;
org$frostlang$frostc$FixedArray* $tmp296 = *$tmp295;
frost$core$Bit $tmp297 = frost$core$Bit$init$builtin_bit($tmp296 != NULL);
bool $tmp298 = $tmp297.value;
if ($tmp298) goto block60; else goto block61;
block61:;
frost$core$Int64 $tmp299 = (frost$core$Int64) {88};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s300, $tmp299, &$s301);
abort(); // unreachable
block60:;
frost$core$Int64 $tmp302 = (frost$core$Int64) {0};
frost$core$Object* $tmp303 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp296, $tmp302);
frost$core$String** $tmp304 = &((org$frostlang$frostc$Symbol*) ((org$frostlang$frostc$Type*) $tmp303))->name;
frost$core$String* $tmp305 = *$tmp304;
frost$core$Bit $tmp306 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp305, &$s307);
frost$core$Frost$unref$frost$core$Object$Q($tmp303);
// unreffing REF($565:org.frostlang.frostc.FixedArray.T)
*(&local10) = $tmp306;
goto block59;
block58:;
*(&local10) = $tmp292;
goto block59;
block59:;
frost$core$Bit $tmp308 = *(&local10);
bool $tmp309 = $tmp308.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp288)));
// unreffing REF($547:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp285)));
// unreffing REF($543:frost.core.Equatable<org.frostlang.frostc.Type.Kind>)
if ($tmp309) goto block55; else goto block56;
block55:;
// line 89
org$frostlang$frostc$Type* $tmp310 = *(&local2);
org$frostlang$frostc$Position* $tmp311 = &((org$frostlang$frostc$Symbol*) $tmp310)->position;
org$frostlang$frostc$Position $tmp312 = *$tmp311;
org$frostlang$frostc$Type* $tmp313 = *(&local2);
org$frostlang$frostc$Type$Kind* $tmp314 = &$tmp313->typeKind;
org$frostlang$frostc$Type$Kind $tmp315 = *$tmp314;
org$frostlang$frostc$Type* $tmp316 = *(&local2);
org$frostlang$frostc$FixedArray** $tmp317 = &$tmp316->subtypes;
org$frostlang$frostc$FixedArray* $tmp318 = *$tmp317;
frost$core$Bit $tmp319 = frost$core$Bit$init$builtin_bit($tmp318 != NULL);
bool $tmp320 = $tmp319.value;
if ($tmp320) goto block62; else goto block63;
block63:;
frost$core$Int64 $tmp321 = (frost$core$Int64) {90};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s322, $tmp321, &$s323);
abort(); // unreachable
block62:;
frost$core$Int64 $tmp324 = (frost$core$Int64) {0};
org$frostlang$frostc$Type* $tmp325 = *(&local2);
org$frostlang$frostc$FixedArray** $tmp326 = &$tmp325->subtypes;
org$frostlang$frostc$FixedArray* $tmp327 = *$tmp326;
frost$core$Bit $tmp328 = frost$core$Bit$init$builtin_bit($tmp327 != NULL);
bool $tmp329 = $tmp328.value;
if ($tmp329) goto block64; else goto block65;
block65:;
frost$core$Int64 $tmp330 = (frost$core$Int64) {90};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s331, $tmp330, &$s332);
abort(); // unreachable
block64:;
ITable* $tmp333 = ((frost$collections$CollectionView*) $tmp327)->$class->itable;
while ($tmp333->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp333 = $tmp333->next;
}
$fn335 $tmp334 = $tmp333->methods[0];
frost$core$Int64 $tmp336 = $tmp334(((frost$collections$CollectionView*) $tmp327));
frost$core$Int64 $tmp337 = (frost$core$Int64) {1};
int64_t $tmp338 = $tmp336.value;
int64_t $tmp339 = $tmp337.value;
int64_t $tmp340 = $tmp338 - $tmp339;
frost$core$Int64 $tmp341 = (frost$core$Int64) {$tmp340};
frost$core$Bit $tmp342 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp343 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp324, $tmp341, $tmp342);
ITable* $tmp344 = ((frost$collections$ListView*) $tmp318)->$class->itable;
while ($tmp344->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp344 = $tmp344->next;
}
$fn346 $tmp345 = $tmp344->methods[1];
frost$collections$ListView* $tmp347 = $tmp345(((frost$collections$ListView*) $tmp318), $tmp343);
org$frostlang$frostc$Type* $tmp348 = *(&local9);
org$frostlang$frostc$FixedArray** $tmp349 = &$tmp348->subtypes;
org$frostlang$frostc$FixedArray* $tmp350 = *$tmp349;
frost$core$Bit $tmp351 = frost$core$Bit$init$builtin_bit($tmp350 != NULL);
bool $tmp352 = $tmp351.value;
if ($tmp352) goto block66; else goto block67;
block67:;
frost$core$Int64 $tmp353 = (frost$core$Int64) {91};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s354, $tmp353, &$s355);
abort(); // unreachable
block66:;
frost$core$Int64 $tmp356 = (frost$core$Int64) {1};
frost$core$Object* $tmp357 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp350, $tmp356);
org$frostlang$frostc$Type* $tmp358 = *(&local2);
frost$core$Int64* $tmp359 = &$tmp358->priority;
frost$core$Int64 $tmp360 = *$tmp359;
org$frostlang$frostc$Type* $tmp361 = org$frostlang$frostc$Type$methodType$org$frostlang$frostc$Position$org$frostlang$frostc$Type$Kind$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$org$frostlang$frostc$Type$frost$core$Int64$R$org$frostlang$frostc$Type($tmp312, $tmp315, $tmp347, ((org$frostlang$frostc$Type*) $tmp357), $tmp360);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp361));
org$frostlang$frostc$Type* $tmp362 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp362));
*(&local2) = $tmp361;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp361));
// unreffing REF($649:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q($tmp357);
// unreffing REF($644:org.frostlang.frostc.FixedArray.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp347));
// unreffing REF($629:frost.collections.ListView<frost.collections.ListView.T>)
goto block56;
block56:;
goto block49;
block49:;
org$frostlang$frostc$Type* $tmp363 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp363));
// unreffing returnType
*(&local9) = ((org$frostlang$frostc$Type*) NULL);
goto block47;
block47:;
// line 94
org$frostlang$frostc$Type* $tmp364 = *(&local1);
frost$core$Bit $tmp365 = frost$core$Bit$init$builtin_bit($tmp364 != NULL);
bool $tmp366 = $tmp365.value;
if ($tmp366) goto block68; else goto block69;
block69:;
frost$core$Int64 $tmp367 = (frost$core$Int64) {94};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s368, $tmp367, &$s369);
abort(); // unreachable
block68:;
org$frostlang$frostc$Type* $tmp370 = *(&local2);
org$frostlang$frostc$Type* $tmp371 = org$frostlang$frostc$Compiler$remapType$org$frostlang$frostc$Type$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(param1, $tmp364, $tmp370);
*(&local11) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp371));
org$frostlang$frostc$Type* $tmp372 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp372));
*(&local11) = $tmp371;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp371));
// unreffing REF($684:org.frostlang.frostc.Type)
// line 95
frost$core$Bit $tmp373 = frost$core$Bit$init$builtin_bit(param4 != NULL);
bool $tmp374 = $tmp373.value;
if ($tmp374) goto block70; else goto block72;
block70:;
// line 96
frost$core$Weak** $tmp375 = &param3->owner;
frost$core$Weak* $tmp376 = *$tmp375;
frost$core$Object* $tmp377 = frost$core$Weak$get$R$frost$core$Weak$T($tmp376);
frost$core$String** $tmp378 = &((org$frostlang$frostc$ClassDecl*) $tmp377)->name;
frost$core$String* $tmp379 = *$tmp378;
frost$core$String* $tmp380 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp379, &$s381);
frost$core$String** $tmp382 = &((org$frostlang$frostc$Symbol*) param3)->name;
frost$core$String* $tmp383 = *$tmp382;
frost$core$String* $tmp384 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp380, $tmp383);
frost$core$String* $tmp385 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp384, &$s386);
*(&local12) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp385));
frost$core$String* $tmp387 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp387));
*(&local12) = $tmp385;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp385));
// unreffing REF($713:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp384));
// unreffing REF($712:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp380));
// unreffing REF($708:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q($tmp377);
// unreffing REF($704:frost.core.Weak.T)
// line 97
frost$collections$HashMap* $tmp388 = (frost$collections$HashMap*) frostObjectAlloc(56, (frost$core$Class*) &frost$collections$HashMap$class);
frost$collections$HashMap$init($tmp388);
*(&local13) = ((frost$collections$HashMap*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp388));
frost$collections$HashMap* $tmp389 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp389));
*(&local13) = $tmp388;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp388));
// unreffing REF($734:frost.collections.HashMap<frost.core.String, org.frostlang.frostc.Type>)
// line 98
frost$core$Int64 $tmp390 = (frost$core$Int64) {0};
frost$core$Bit $tmp391 = frost$core$Bit$init$builtin_bit(param4 != NULL);
bool $tmp392 = $tmp391.value;
if ($tmp392) goto block73; else goto block74;
block74:;
frost$core$Int64 $tmp393 = (frost$core$Int64) {98};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s394, $tmp393, &$s395);
abort(); // unreachable
block73:;
ITable* $tmp396 = ((frost$collections$CollectionView*) param4)->$class->itable;
while ($tmp396->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp396 = $tmp396->next;
}
$fn398 $tmp397 = $tmp396->methods[0];
frost$core$Int64 $tmp399 = $tmp397(((frost$collections$CollectionView*) param4));
frost$core$Bit $tmp400 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp401 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp390, $tmp399, $tmp400);
frost$core$Int64 $tmp402 = $tmp401.min;
*(&local14) = $tmp402;
frost$core$Int64 $tmp403 = $tmp401.max;
frost$core$Bit $tmp404 = $tmp401.inclusive;
bool $tmp405 = $tmp404.value;
frost$core$Int64 $tmp406 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp407 = frost$core$Int64$convert$R$frost$core$UInt64($tmp406);
if ($tmp405) goto block78; else goto block79;
block78:;
int64_t $tmp408 = $tmp402.value;
int64_t $tmp409 = $tmp403.value;
bool $tmp410 = $tmp408 <= $tmp409;
frost$core$Bit $tmp411 = (frost$core$Bit) {$tmp410};
bool $tmp412 = $tmp411.value;
if ($tmp412) goto block75; else goto block76;
block79:;
int64_t $tmp413 = $tmp402.value;
int64_t $tmp414 = $tmp403.value;
bool $tmp415 = $tmp413 < $tmp414;
frost$core$Bit $tmp416 = (frost$core$Bit) {$tmp415};
bool $tmp417 = $tmp416.value;
if ($tmp417) goto block75; else goto block76;
block75:;
// line 99
frost$collections$HashMap* $tmp418 = *(&local13);
frost$core$String* $tmp419 = *(&local12);
frost$collections$Array** $tmp420 = &param3->genericParameters;
frost$collections$Array* $tmp421 = *$tmp420;
frost$core$Bit $tmp422 = frost$core$Bit$init$builtin_bit($tmp421 != NULL);
bool $tmp423 = $tmp422.value;
if ($tmp423) goto block80; else goto block81;
block81:;
frost$core$Int64 $tmp424 = (frost$core$Int64) {99};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s425, $tmp424, &$s426);
abort(); // unreachable
block80:;
frost$core$Int64 $tmp427 = *(&local14);
frost$core$Object* $tmp428 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp421, $tmp427);
frost$core$String** $tmp429 = &((org$frostlang$frostc$Symbol*) ((org$frostlang$frostc$MethodDecl$GenericParameter*) $tmp428))->name;
frost$core$String* $tmp430 = *$tmp429;
frost$core$String* $tmp431 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp419, $tmp430);
frost$core$Bit $tmp432 = frost$core$Bit$init$builtin_bit(param4 != NULL);
bool $tmp433 = $tmp432.value;
if ($tmp433) goto block82; else goto block83;
block83:;
frost$core$Int64 $tmp434 = (frost$core$Int64) {99};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s435, $tmp434, &$s436);
abort(); // unreachable
block82:;
frost$core$Int64 $tmp437 = *(&local14);
ITable* $tmp438 = param4->$class->itable;
while ($tmp438->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp438 = $tmp438->next;
}
$fn440 $tmp439 = $tmp438->methods[0];
frost$core$Object* $tmp441 = $tmp439(param4, $tmp437);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp418, ((frost$collections$Key*) $tmp431), ((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp441)));
frost$core$Frost$unref$frost$core$Object$Q($tmp441);
// unreffing REF($815:frost.collections.ListView.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp431));
// unreffing REF($802:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q($tmp428);
// unreffing REF($797:frost.collections.Array.T)
goto block77;
block77:;
frost$core$Int64 $tmp442 = *(&local14);
int64_t $tmp443 = $tmp403.value;
int64_t $tmp444 = $tmp442.value;
int64_t $tmp445 = $tmp443 - $tmp444;
frost$core$Int64 $tmp446 = (frost$core$Int64) {$tmp445};
frost$core$UInt64 $tmp447 = frost$core$Int64$convert$R$frost$core$UInt64($tmp446);
if ($tmp405) goto block85; else goto block86;
block85:;
uint64_t $tmp448 = $tmp447.value;
uint64_t $tmp449 = $tmp407.value;
bool $tmp450 = $tmp448 >= $tmp449;
frost$core$Bit $tmp451 = (frost$core$Bit) {$tmp450};
bool $tmp452 = $tmp451.value;
if ($tmp452) goto block84; else goto block76;
block86:;
uint64_t $tmp453 = $tmp447.value;
uint64_t $tmp454 = $tmp407.value;
bool $tmp455 = $tmp453 > $tmp454;
frost$core$Bit $tmp456 = (frost$core$Bit) {$tmp455};
bool $tmp457 = $tmp456.value;
if ($tmp457) goto block84; else goto block76;
block84:;
int64_t $tmp458 = $tmp442.value;
int64_t $tmp459 = $tmp406.value;
int64_t $tmp460 = $tmp458 + $tmp459;
frost$core$Int64 $tmp461 = (frost$core$Int64) {$tmp460};
*(&local14) = $tmp461;
goto block75;
block76:;
// line 101
org$frostlang$frostc$Type* $tmp462 = *(&local11);
frost$collections$HashMap* $tmp463 = *(&local13);
org$frostlang$frostc$Type* $tmp464 = org$frostlang$frostc$Type$remap$frost$collections$HashMap$LTfrost$core$String$Corg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type($tmp462, $tmp463);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp464));
org$frostlang$frostc$Type** $tmp465 = &param0->effectiveType;
org$frostlang$frostc$Type* $tmp466 = *$tmp465;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp466));
org$frostlang$frostc$Type** $tmp467 = &param0->effectiveType;
*$tmp467 = $tmp464;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp464));
// unreffing REF($857:org.frostlang.frostc.Type)
frost$collections$HashMap* $tmp468 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp468));
// unreffing map
*(&local13) = ((frost$collections$HashMap*) NULL);
frost$core$String* $tmp469 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp469));
// unreffing prefix
*(&local12) = ((frost$core$String*) NULL);
goto block71;
block72:;
// line 1
// line 104
org$frostlang$frostc$Type* $tmp470 = *(&local11);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp470));
org$frostlang$frostc$Type** $tmp471 = &param0->effectiveType;
org$frostlang$frostc$Type* $tmp472 = *$tmp471;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp472));
org$frostlang$frostc$Type** $tmp473 = &param0->effectiveType;
*$tmp473 = $tmp470;
goto block71;
block71:;
org$frostlang$frostc$Type* $tmp474 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp474));
// unreffing effectiveType
*(&local11) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp475 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp475));
// unreffing methodType
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp476 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp476));
// unreffing found
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
return;

}
frost$core$Int64 org$frostlang$frostc$MethodRef$get_parameterCount$R$frost$core$Int64(org$frostlang$frostc$MethodRef* param0) {

// line 109
org$frostlang$frostc$Type** $tmp477 = &param0->effectiveType;
org$frostlang$frostc$Type* $tmp478 = *$tmp477;
frost$core$Int64 $tmp479 = org$frostlang$frostc$Type$get_parameterCount$R$frost$core$Int64($tmp478);
return $tmp479;

}
org$frostlang$frostc$Type* org$frostlang$frostc$MethodRef$parameterType$frost$core$Int64$R$org$frostlang$frostc$Type(org$frostlang$frostc$MethodRef* param0, frost$core$Int64 param1) {

// line 113
org$frostlang$frostc$Type** $tmp480 = &param0->effectiveType;
org$frostlang$frostc$Type* $tmp481 = *$tmp480;
org$frostlang$frostc$FixedArray** $tmp482 = &$tmp481->subtypes;
org$frostlang$frostc$FixedArray* $tmp483 = *$tmp482;
frost$core$Bit $tmp484 = frost$core$Bit$init$builtin_bit($tmp483 != NULL);
bool $tmp485 = $tmp484.value;
if ($tmp485) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp486 = (frost$core$Int64) {113};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s487, $tmp486, &$s488);
abort(); // unreachable
block1:;
frost$core$Object* $tmp489 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp483, param1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp489)));
frost$core$Frost$unref$frost$core$Object$Q($tmp489);
// unreffing REF($14:org.frostlang.frostc.FixedArray.T)
return ((org$frostlang$frostc$Type*) $tmp489);

}
org$frostlang$frostc$Type* org$frostlang$frostc$MethodRef$get_returnType$R$org$frostlang$frostc$Type(org$frostlang$frostc$MethodRef* param0) {

// line 117
org$frostlang$frostc$Type** $tmp490 = &param0->effectiveType;
org$frostlang$frostc$Type* $tmp491 = *$tmp490;
org$frostlang$frostc$Type* $tmp492 = org$frostlang$frostc$Type$get_returnType$R$org$frostlang$frostc$Type($tmp491);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp492));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp492));
// unreffing REF($3:org.frostlang.frostc.Type)
return $tmp492;

}
frost$core$String* org$frostlang$frostc$MethodRef$get_asString$R$frost$core$String(org$frostlang$frostc$MethodRef* param0) {

// line 122
org$frostlang$frostc$MethodDecl** $tmp493 = &param0->value;
org$frostlang$frostc$MethodDecl* $tmp494 = *$tmp493;
frost$core$String* $tmp495 = org$frostlang$frostc$MethodDecl$get_declaration$R$frost$core$String($tmp494);
frost$core$String* $tmp496 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s497, $tmp495);
frost$core$String* $tmp498 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp496, &$s499);
org$frostlang$frostc$Type** $tmp500 = &param0->effectiveType;
org$frostlang$frostc$Type* $tmp501 = *$tmp500;
frost$core$String* $tmp502 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp498, ((frost$core$Object*) $tmp501));
frost$core$String* $tmp503 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp502, &$s504);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp503));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp503));
// unreffing REF($10:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp502));
// unreffing REF($9:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp498));
// unreffing REF($5:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp496));
// unreffing REF($4:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp495));
// unreffing REF($3:frost.core.String)
return $tmp503;

}
void org$frostlang$frostc$MethodRef$cleanup(org$frostlang$frostc$MethodRef* param0) {

// line 9
frost$core$Object$cleanup(((frost$core$Object*) param0));
org$frostlang$frostc$Type** $tmp505 = &param0->target;
org$frostlang$frostc$Type* $tmp506 = *$tmp505;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp506));
org$frostlang$frostc$MethodDecl** $tmp507 = &param0->value;
org$frostlang$frostc$MethodDecl* $tmp508 = *$tmp507;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp508));
org$frostlang$frostc$Type** $tmp509 = &param0->effectiveType;
org$frostlang$frostc$Type* $tmp510 = *$tmp509;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp510));
return;

}

