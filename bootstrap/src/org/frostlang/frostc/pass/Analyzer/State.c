#include "org/frostlang/frostc/pass/Analyzer/State.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/collections/Array.h"
#include "frost/core/Frost.h"
#include "frost/core/Int.h"
#include "frost/collections/CollectionView.h"
#include "frost/core/Bit.h"
#include "frost/core/Range.LTfrost/core/Int.GT.h"
#include "frost/core/Int64.h"
#include "frost/collections/IdentitySet.h"
#include "frost/core/Method.h"
#include "frost/core/Immutable.h"
#include "org/frostlang/frostc/Compiler.h"
#include "org/frostlang/frostc/pass/Analyzer/DataFlowValue.h"
#include "org/frostlang/frostc/Type.h"
#include "frost/core/Equatable.h"


static frost$core$String $s1;
org$frostlang$frostc$pass$Analyzer$State$class_type org$frostlang$frostc$pass$Analyzer$State$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { org$frostlang$frostc$pass$Analyzer$State$get_asString$R$frost$core$String, org$frostlang$frostc$pass$Analyzer$State$cleanup, org$frostlang$frostc$pass$Analyzer$State$add$org$frostlang$frostc$Compiler$org$frostlang$frostc$pass$Analyzer$State$R$frost$core$Bit} };

typedef frost$core$Int (*$fn16)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn45)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn75)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn103)(frost$collections$CollectionView*);
typedef frost$collections$Array* (*$fn151)(frost$collections$Array*);
typedef frost$core$Int (*$fn164)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn170)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn184)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn214)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn240)(frost$collections$CollectionView*);
typedef org$frostlang$frostc$pass$Analyzer$DataFlowValue* (*$fn256)(org$frostlang$frostc$pass$Analyzer$DataFlowValue*, org$frostlang$frostc$Compiler*, org$frostlang$frostc$pass$Analyzer$DataFlowValue*);
typedef frost$core$Int (*$fn271)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn288)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int (*$fn304)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn344)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn374)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn400)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn429)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn446)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int (*$fn462)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn501)(frost$core$Object*);
typedef frost$core$String* (*$fn510)(frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x70\x61\x73\x73\x2e\x41\x6e\x61\x6c\x79\x7a\x65\x72\x2e\x53\x74\x61\x74\x65", 40, -2255277803817197792, NULL };
static frost$core$String $s53 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s54 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s83 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s84 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s93 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x6e\x61\x6c\x79\x7a\x65\x72\x2e\x66\x72\x6f\x73\x74", 14, -791630141084995549, NULL };
static frost$core$String $s94 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x53\x65\x74\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x65\x6c\x64\x44\x65\x63\x6c\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x53\x65\x74\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x65\x6c\x64\x44\x65\x63\x6c\x3e", 161, 6394213867009526233, NULL };
static frost$core$String $s111 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s112 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x3a\x3d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x2c\x20\x76\x61\x6c\x75\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54\x29", 115, -1630266006860672840, NULL };
static frost$core$String $s178 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x6e\x61\x6c\x79\x7a\x65\x72\x2e\x66\x72\x6f\x73\x74", 14, -791630141084995549, NULL };
static frost$core$String $s222 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s223 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s248 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s249 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s279 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s280 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s312 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s313 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x3a\x3d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x2c\x20\x76\x61\x6c\x75\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54\x29", 115, -1630266006860672840, NULL };
static frost$core$String $s382 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s383 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s408 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s409 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s437 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s438 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s470 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s471 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x3a\x3d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x2c\x20\x76\x61\x6c\x75\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54\x29", 115, -1630266006860672840, NULL };
static frost$core$String $s504 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x61\x74\x65\x28", 6, -5947964825372280646, NULL };
static frost$core$String $s506 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s514 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };

void org$frostlang$frostc$pass$Analyzer$State$init(org$frostlang$frostc$pass$Analyzer$State* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:223
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp2 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2));
frost$collections$Array** $tmp3 = &param0->locals;
frost$collections$Array* $tmp4 = *$tmp3;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4));
frost$collections$Array** $tmp5 = &param0->locals;
*$tmp5 = $tmp2;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:224
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp6 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp6);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp6));
frost$collections$Array** $tmp7 = &param0->parameters;
frost$collections$Array* $tmp8 = *$tmp7;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp8));
frost$collections$Array** $tmp9 = &param0->parameters;
*$tmp9 = $tmp6;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6));
return;

}
frost$collections$Array* org$frostlang$frostc$pass$Analyzer$State$$anonymous2$frost$collections$Array$LTfrost$collections$IdentitySet$LTorg$frostlang$frostc$FieldDecl$GT$Q$GT$R$frost$collections$Array$LTfrost$collections$IdentitySet$LTorg$frostlang$frostc$FieldDecl$GT$Q$GT(frost$collections$Array* param0) {

frost$collections$Array* local0 = NULL;
frost$core$Int local1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:232
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp10 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init$frost$collections$CollectionView$LTfrost$collections$Array$T$GT($tmp10, ((frost$collections$CollectionView*) param0));
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp10));
frost$collections$Array* $tmp11 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp11));
*(&local0) = $tmp10;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp10));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:233
frost$core$Int $tmp12 = (frost$core$Int) {0u};
frost$collections$Array* $tmp13 = *(&local0);
ITable* $tmp14 = ((frost$collections$CollectionView*) $tmp13)->$class->itable;
while ($tmp14->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp14 = $tmp14->next;
}
$fn16 $tmp15 = $tmp14->methods[0];
frost$core$Int $tmp17 = $tmp15(((frost$collections$CollectionView*) $tmp13));
frost$core$Bit $tmp18 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp19 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp12, $tmp17, $tmp18);
frost$core$Int $tmp20 = $tmp19.min;
*(&local1) = $tmp20;
frost$core$Int $tmp21 = $tmp19.max;
frost$core$Bit $tmp22 = $tmp19.inclusive;
bool $tmp23 = $tmp22.value;
frost$core$Int $tmp24 = (frost$core$Int) {1u};
if ($tmp23) goto block4; else goto block5;
block4:;
int64_t $tmp25 = $tmp20.value;
int64_t $tmp26 = $tmp21.value;
bool $tmp27 = $tmp25 <= $tmp26;
frost$core$Bit $tmp28 = (frost$core$Bit) {$tmp27};
bool $tmp29 = $tmp28.value;
if ($tmp29) goto block1; else goto block2;
block5:;
int64_t $tmp30 = $tmp20.value;
int64_t $tmp31 = $tmp21.value;
bool $tmp32 = $tmp30 < $tmp31;
frost$core$Bit $tmp33 = (frost$core$Bit) {$tmp32};
bool $tmp34 = $tmp33.value;
if ($tmp34) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:234
frost$collections$Array* $tmp35 = *(&local0);
frost$core$Int $tmp36 = *(&local1);
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Analyzer.frost:234:30
frost$core$Int $tmp37 = (frost$core$Int) {0u};
int64_t $tmp38 = $tmp36.value;
int64_t $tmp39 = $tmp37.value;
bool $tmp40 = $tmp38 >= $tmp39;
frost$core$Bit $tmp41 = (frost$core$Bit) {$tmp40};
bool $tmp42 = $tmp41.value;
if ($tmp42) goto block11; else goto block10;
block11:;
ITable* $tmp43 = ((frost$collections$CollectionView*) $tmp35)->$class->itable;
while ($tmp43->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp43 = $tmp43->next;
}
$fn45 $tmp44 = $tmp43->methods[0];
frost$core$Int $tmp46 = $tmp44(((frost$collections$CollectionView*) $tmp35));
int64_t $tmp47 = $tmp36.value;
int64_t $tmp48 = $tmp46.value;
bool $tmp49 = $tmp47 < $tmp48;
frost$core$Bit $tmp50 = (frost$core$Bit) {$tmp49};
bool $tmp51 = $tmp50.value;
if ($tmp51) goto block9; else goto block10;
block10:;
frost$core$Int $tmp52 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s53, $tmp52, &$s54);
abort(); // unreachable
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp55 = &$tmp35->data;
frost$core$Object** $tmp56 = *$tmp55;
frost$core$Int64 $tmp57 = frost$core$Int64$init$frost$core$Int($tmp36);
int64_t $tmp58 = $tmp57.value;
frost$core$Object* $tmp59 = $tmp56[$tmp58];
frost$core$Frost$ref$frost$core$Object$Q($tmp59);
frost$core$Bit $tmp60 = (frost$core$Bit) {((frost$collections$IdentitySet*) $tmp59) != NULL};
bool $tmp61 = $tmp60.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp59);
if ($tmp61) goto block6; else goto block7;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:235
frost$collections$Array* $tmp62 = *(&local0);
frost$core$Int $tmp63 = *(&local1);
FROST_ASSERT(24 == sizeof(frost$collections$IdentitySet));
frost$collections$IdentitySet* $tmp64 = (frost$collections$IdentitySet*) frostObjectAlloc(24, (frost$core$Class*) &frost$collections$IdentitySet$class);
frost$collections$Array* $tmp65 = *(&local0);
frost$core$Int $tmp66 = *(&local1);
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Analyzer.frost:235:85
frost$core$Int $tmp67 = (frost$core$Int) {0u};
int64_t $tmp68 = $tmp66.value;
int64_t $tmp69 = $tmp67.value;
bool $tmp70 = $tmp68 >= $tmp69;
frost$core$Bit $tmp71 = (frost$core$Bit) {$tmp70};
bool $tmp72 = $tmp71.value;
if ($tmp72) goto block15; else goto block14;
block15:;
ITable* $tmp73 = ((frost$collections$CollectionView*) $tmp65)->$class->itable;
while ($tmp73->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp73 = $tmp73->next;
}
$fn75 $tmp74 = $tmp73->methods[0];
frost$core$Int $tmp76 = $tmp74(((frost$collections$CollectionView*) $tmp65));
int64_t $tmp77 = $tmp66.value;
int64_t $tmp78 = $tmp76.value;
bool $tmp79 = $tmp77 < $tmp78;
frost$core$Bit $tmp80 = (frost$core$Bit) {$tmp79};
bool $tmp81 = $tmp80.value;
if ($tmp81) goto block13; else goto block14;
block14:;
frost$core$Int $tmp82 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s83, $tmp82, &$s84);
abort(); // unreachable
block13:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp85 = &$tmp65->data;
frost$core$Object** $tmp86 = *$tmp85;
frost$core$Int64 $tmp87 = frost$core$Int64$init$frost$core$Int($tmp66);
int64_t $tmp88 = $tmp87.value;
frost$core$Object* $tmp89 = $tmp86[$tmp88];
frost$core$Frost$ref$frost$core$Object$Q($tmp89);
frost$core$Bit $tmp90 = (frost$core$Bit) {((frost$collections$IdentitySet*) $tmp89) != NULL};
bool $tmp91 = $tmp90.value;
if ($tmp91) goto block16; else goto block17;
block17:;
frost$core$Int $tmp92 = (frost$core$Int) {235u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s93, $tmp92, &$s94);
abort(); // unreachable
block16:;
frost$collections$IdentitySet$init$frost$collections$CollectionView$LTfrost$collections$IdentitySet$T$GT($tmp64, ((frost$collections$CollectionView*) ((frost$collections$IdentitySet*) $tmp89)));
// begin inline call to method frost.collections.Array.[]:=(index:frost.core.Int, value:frost.collections.Array.T) from Analyzer.frost:235:31
frost$core$Int $tmp95 = (frost$core$Int) {0u};
int64_t $tmp96 = $tmp63.value;
int64_t $tmp97 = $tmp95.value;
bool $tmp98 = $tmp96 >= $tmp97;
frost$core$Bit $tmp99 = (frost$core$Bit) {$tmp98};
bool $tmp100 = $tmp99.value;
if ($tmp100) goto block21; else goto block20;
block21:;
ITable* $tmp101 = ((frost$collections$CollectionView*) $tmp62)->$class->itable;
while ($tmp101->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp101 = $tmp101->next;
}
$fn103 $tmp102 = $tmp101->methods[0];
frost$core$Int $tmp104 = $tmp102(((frost$collections$CollectionView*) $tmp62));
int64_t $tmp105 = $tmp63.value;
int64_t $tmp106 = $tmp104.value;
bool $tmp107 = $tmp105 < $tmp106;
frost$core$Bit $tmp108 = (frost$core$Bit) {$tmp107};
bool $tmp109 = $tmp108.value;
if ($tmp109) goto block19; else goto block20;
block20:;
frost$core$Int $tmp110 = (frost$core$Int) {79u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s111, $tmp110, &$s112);
abort(); // unreachable
block19:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:80
frost$core$Object*** $tmp113 = &$tmp62->data;
frost$core$Object** $tmp114 = *$tmp113;
frost$core$Int64 $tmp115 = frost$core$Int64$init$frost$core$Int($tmp63);
int64_t $tmp116 = $tmp115.value;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp64));
frost$core$Object* $tmp117 = $tmp114[$tmp116];
frost$core$Frost$unref$frost$core$Object$Q($tmp117);
$tmp114[$tmp116] = ((frost$core$Object*) $tmp64);
frost$core$Frost$unref$frost$core$Object$Q($tmp89);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp64));
goto block7;
block7:;
frost$core$Int $tmp118 = *(&local1);
int64_t $tmp119 = $tmp21.value;
int64_t $tmp120 = $tmp118.value;
int64_t $tmp121 = $tmp119 - $tmp120;
frost$core$Int $tmp122 = (frost$core$Int) {$tmp121};
if ($tmp23) goto block23; else goto block24;
block23:;
int64_t $tmp123 = $tmp122.value;
int64_t $tmp124 = $tmp24.value;
bool $tmp125 = $tmp123 >= $tmp124;
frost$core$Bit $tmp126 = (frost$core$Bit) {$tmp125};
bool $tmp127 = $tmp126.value;
if ($tmp127) goto block22; else goto block2;
block24:;
int64_t $tmp128 = $tmp122.value;
int64_t $tmp129 = $tmp24.value;
bool $tmp130 = $tmp128 > $tmp129;
frost$core$Bit $tmp131 = (frost$core$Bit) {$tmp130};
bool $tmp132 = $tmp131.value;
if ($tmp132) goto block22; else goto block2;
block22:;
int64_t $tmp133 = $tmp118.value;
int64_t $tmp134 = $tmp24.value;
int64_t $tmp135 = $tmp133 + $tmp134;
frost$core$Int $tmp136 = (frost$core$Int) {$tmp135};
*(&local1) = $tmp136;
goto block1;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:238
frost$collections$Array* $tmp137 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp137));
frost$collections$Array* $tmp138 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp138));
*(&local0) = ((frost$collections$Array*) NULL);
return $tmp137;

}
void org$frostlang$frostc$pass$Analyzer$State$init$org$frostlang$frostc$pass$Analyzer$State(org$frostlang$frostc$pass$Analyzer$State* param0, org$frostlang$frostc$pass$Analyzer$State* param1) {

frost$core$Method* local0 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:228
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp139 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array** $tmp140 = &param1->locals;
frost$collections$Array* $tmp141 = *$tmp140;
frost$collections$Array$init$frost$collections$CollectionView$LTfrost$collections$Array$T$GT($tmp139, ((frost$collections$CollectionView*) $tmp141));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp139));
frost$collections$Array** $tmp142 = &param0->locals;
frost$collections$Array* $tmp143 = *$tmp142;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp143));
frost$collections$Array** $tmp144 = &param0->locals;
*$tmp144 = $tmp139;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp139));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:229
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp145 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array** $tmp146 = &param1->parameters;
frost$collections$Array* $tmp147 = *$tmp146;
frost$collections$Array$init$frost$collections$CollectionView$LTfrost$collections$Array$T$GT($tmp145, ((frost$collections$CollectionView*) $tmp147));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp145));
frost$collections$Array** $tmp148 = &param0->parameters;
frost$collections$Array* $tmp149 = *$tmp148;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp149));
frost$collections$Array** $tmp150 = &param0->parameters;
*$tmp150 = $tmp145;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp145));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:230
FROST_ASSERT(32 == sizeof(frost$core$Method));
frost$core$Method* $tmp152 = (frost$core$Method*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$Method$class);
// begin inline call to frost.core.Method.init(pointer:frost.unsafe.Pointer<frost.core.Int8>, target:frost.core.Immutable?) from Analyzer.frost:230:13
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Method.frost:37
frost$core$Int8** $tmp153 = &$tmp152->pointer;
*$tmp153 = ((frost$core$Int8*) org$frostlang$frostc$pass$Analyzer$State$$anonymous2$frost$collections$Array$LTfrost$collections$IdentitySet$LTorg$frostlang$frostc$FieldDecl$GT$Q$GT$R$frost$collections$Array$LTfrost$collections$IdentitySet$LTorg$frostlang$frostc$FieldDecl$GT$Q$GT);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Method.frost:38
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Immutable*) NULL)));
frost$core$Immutable** $tmp154 = &$tmp152->target;
frost$core$Immutable* $tmp155 = *$tmp154;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp155));
frost$core$Immutable** $tmp156 = &$tmp152->target;
*$tmp156 = ((frost$core$Immutable*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:230
*(&local0) = ((frost$core$Method*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp152));
frost$core$Method* $tmp157 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp157));
*(&local0) = $tmp152;
frost$core$Method* $tmp158 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp158));
*(&local0) = ((frost$core$Method*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp152));
return;

}
frost$core$Bit org$frostlang$frostc$pass$Analyzer$State$add$org$frostlang$frostc$Compiler$org$frostlang$frostc$pass$Analyzer$State$R$frost$core$Bit(org$frostlang$frostc$pass$Analyzer$State* param0, org$frostlang$frostc$Compiler* param1, org$frostlang$frostc$pass$Analyzer$State* param2) {

frost$core$Bit local0;
frost$core$Int local1;
org$frostlang$frostc$pass$Analyzer$DataFlowValue* local2 = NULL;
frost$core$Int local3;
org$frostlang$frostc$Type* local4 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:243
frost$core$Bit $tmp159 = (frost$core$Bit) {false};
*(&local0) = $tmp159;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:244
frost$collections$Array** $tmp160 = &param0->locals;
frost$collections$Array* $tmp161 = *$tmp160;
ITable* $tmp162 = ((frost$collections$CollectionView*) $tmp161)->$class->itable;
while ($tmp162->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp162 = $tmp162->next;
}
$fn164 $tmp163 = $tmp162->methods[0];
frost$core$Int $tmp165 = $tmp163(((frost$collections$CollectionView*) $tmp161));
frost$collections$Array** $tmp166 = &param2->locals;
frost$collections$Array* $tmp167 = *$tmp166;
ITable* $tmp168 = ((frost$collections$CollectionView*) $tmp167)->$class->itable;
while ($tmp168->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp168 = $tmp168->next;
}
$fn170 $tmp169 = $tmp168->methods[0];
frost$core$Int $tmp171 = $tmp169(((frost$collections$CollectionView*) $tmp167));
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:244:33
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp172 = $tmp165.value;
int64_t $tmp173 = $tmp171.value;
bool $tmp174 = $tmp172 == $tmp173;
frost$core$Bit $tmp175 = (frost$core$Bit) {$tmp174};
bool $tmp176 = $tmp175.value;
if ($tmp176) goto block2; else goto block3;
block3:;
frost$core$Int $tmp177 = (frost$core$Int) {244u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s178, $tmp177);
abort(); // unreachable
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:245
frost$core$Int $tmp179 = (frost$core$Int) {0u};
frost$collections$Array** $tmp180 = &param0->locals;
frost$collections$Array* $tmp181 = *$tmp180;
ITable* $tmp182 = ((frost$collections$CollectionView*) $tmp181)->$class->itable;
while ($tmp182->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp182 = $tmp182->next;
}
$fn184 $tmp183 = $tmp182->methods[0];
frost$core$Int $tmp185 = $tmp183(((frost$collections$CollectionView*) $tmp181));
frost$core$Bit $tmp186 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp187 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp179, $tmp185, $tmp186);
frost$core$Int $tmp188 = $tmp187.min;
*(&local1) = $tmp188;
frost$core$Int $tmp189 = $tmp187.max;
frost$core$Bit $tmp190 = $tmp187.inclusive;
bool $tmp191 = $tmp190.value;
frost$core$Int $tmp192 = (frost$core$Int) {1u};
if ($tmp191) goto block7; else goto block8;
block7:;
int64_t $tmp193 = $tmp188.value;
int64_t $tmp194 = $tmp189.value;
bool $tmp195 = $tmp193 <= $tmp194;
frost$core$Bit $tmp196 = (frost$core$Bit) {$tmp195};
bool $tmp197 = $tmp196.value;
if ($tmp197) goto block4; else goto block5;
block8:;
int64_t $tmp198 = $tmp188.value;
int64_t $tmp199 = $tmp189.value;
bool $tmp200 = $tmp198 < $tmp199;
frost$core$Bit $tmp201 = (frost$core$Bit) {$tmp200};
bool $tmp202 = $tmp201.value;
if ($tmp202) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:246
frost$collections$Array** $tmp203 = &param0->locals;
frost$collections$Array* $tmp204 = *$tmp203;
frost$core$Int $tmp205 = *(&local1);
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Analyzer.frost:246:36
frost$core$Int $tmp206 = (frost$core$Int) {0u};
int64_t $tmp207 = $tmp205.value;
int64_t $tmp208 = $tmp206.value;
bool $tmp209 = $tmp207 >= $tmp208;
frost$core$Bit $tmp210 = (frost$core$Bit) {$tmp209};
bool $tmp211 = $tmp210.value;
if ($tmp211) goto block12; else goto block11;
block12:;
ITable* $tmp212 = ((frost$collections$CollectionView*) $tmp204)->$class->itable;
while ($tmp212->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp212 = $tmp212->next;
}
$fn214 $tmp213 = $tmp212->methods[0];
frost$core$Int $tmp215 = $tmp213(((frost$collections$CollectionView*) $tmp204));
int64_t $tmp216 = $tmp205.value;
int64_t $tmp217 = $tmp215.value;
bool $tmp218 = $tmp216 < $tmp217;
frost$core$Bit $tmp219 = (frost$core$Bit) {$tmp218};
bool $tmp220 = $tmp219.value;
if ($tmp220) goto block10; else goto block11;
block11:;
frost$core$Int $tmp221 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s222, $tmp221, &$s223);
abort(); // unreachable
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp224 = &$tmp204->data;
frost$core$Object** $tmp225 = *$tmp224;
frost$core$Int64 $tmp226 = frost$core$Int64$init$frost$core$Int($tmp205);
int64_t $tmp227 = $tmp226.value;
frost$core$Object* $tmp228 = $tmp225[$tmp227];
frost$core$Frost$ref$frost$core$Object$Q($tmp228);
frost$collections$Array** $tmp229 = &param2->locals;
frost$collections$Array* $tmp230 = *$tmp229;
frost$core$Int $tmp231 = *(&local1);
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Analyzer.frost:246:64
frost$core$Int $tmp232 = (frost$core$Int) {0u};
int64_t $tmp233 = $tmp231.value;
int64_t $tmp234 = $tmp232.value;
bool $tmp235 = $tmp233 >= $tmp234;
frost$core$Bit $tmp236 = (frost$core$Bit) {$tmp235};
bool $tmp237 = $tmp236.value;
if ($tmp237) goto block16; else goto block15;
block16:;
ITable* $tmp238 = ((frost$collections$CollectionView*) $tmp230)->$class->itable;
while ($tmp238->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp238 = $tmp238->next;
}
$fn240 $tmp239 = $tmp238->methods[0];
frost$core$Int $tmp241 = $tmp239(((frost$collections$CollectionView*) $tmp230));
int64_t $tmp242 = $tmp231.value;
int64_t $tmp243 = $tmp241.value;
bool $tmp244 = $tmp242 < $tmp243;
frost$core$Bit $tmp245 = (frost$core$Bit) {$tmp244};
bool $tmp246 = $tmp245.value;
if ($tmp246) goto block14; else goto block15;
block15:;
frost$core$Int $tmp247 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s248, $tmp247, &$s249);
abort(); // unreachable
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp250 = &$tmp230->data;
frost$core$Object** $tmp251 = *$tmp250;
frost$core$Int64 $tmp252 = frost$core$Int64$init$frost$core$Int($tmp231);
int64_t $tmp253 = $tmp252.value;
frost$core$Object* $tmp254 = $tmp251[$tmp253];
frost$core$Frost$ref$frost$core$Object$Q($tmp254);
$fn256 $tmp255 = ($fn256) ((org$frostlang$frostc$pass$Analyzer$DataFlowValue*) $tmp228)->$class->vtable[3];
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp257 = $tmp255(((org$frostlang$frostc$pass$Analyzer$DataFlowValue*) $tmp228), param1, ((org$frostlang$frostc$pass$Analyzer$DataFlowValue*) $tmp254));
*(&local2) = ((org$frostlang$frostc$pass$Analyzer$DataFlowValue*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp257));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp258 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp258));
*(&local2) = $tmp257;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp257));
frost$core$Frost$unref$frost$core$Object$Q($tmp254);
frost$core$Frost$unref$frost$core$Object$Q($tmp228);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:247
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp259 = *(&local2);
frost$collections$Array** $tmp260 = &param0->locals;
frost$collections$Array* $tmp261 = *$tmp260;
frost$core$Int $tmp262 = *(&local1);
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Analyzer.frost:247:35
frost$core$Int $tmp263 = (frost$core$Int) {0u};
int64_t $tmp264 = $tmp262.value;
int64_t $tmp265 = $tmp263.value;
bool $tmp266 = $tmp264 >= $tmp265;
frost$core$Bit $tmp267 = (frost$core$Bit) {$tmp266};
bool $tmp268 = $tmp267.value;
if ($tmp268) goto block22; else goto block21;
block22:;
ITable* $tmp269 = ((frost$collections$CollectionView*) $tmp261)->$class->itable;
while ($tmp269->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp269 = $tmp269->next;
}
$fn271 $tmp270 = $tmp269->methods[0];
frost$core$Int $tmp272 = $tmp270(((frost$collections$CollectionView*) $tmp261));
int64_t $tmp273 = $tmp262.value;
int64_t $tmp274 = $tmp272.value;
bool $tmp275 = $tmp273 < $tmp274;
frost$core$Bit $tmp276 = (frost$core$Bit) {$tmp275};
bool $tmp277 = $tmp276.value;
if ($tmp277) goto block20; else goto block21;
block21:;
frost$core$Int $tmp278 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s279, $tmp278, &$s280);
abort(); // unreachable
block20:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp281 = &$tmp261->data;
frost$core$Object** $tmp282 = *$tmp281;
frost$core$Int64 $tmp283 = frost$core$Int64$init$frost$core$Int($tmp262);
int64_t $tmp284 = $tmp283.value;
frost$core$Object* $tmp285 = $tmp282[$tmp284];
frost$core$Frost$ref$frost$core$Object$Q($tmp285);
ITable* $tmp286 = ((frost$core$Equatable*) $tmp259)->$class->itable;
while ($tmp286->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp286 = $tmp286->next;
}
$fn288 $tmp287 = $tmp286->methods[1];
frost$core$Bit $tmp289 = $tmp287(((frost$core$Equatable*) $tmp259), ((frost$core$Equatable*) ((org$frostlang$frostc$pass$Analyzer$DataFlowValue*) $tmp285)));
bool $tmp290 = $tmp289.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp285);
if ($tmp290) goto block17; else goto block18;
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:248
frost$core$Bit $tmp291 = (frost$core$Bit) {true};
*(&local0) = $tmp291;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:249
frost$collections$Array** $tmp292 = &param0->locals;
frost$collections$Array* $tmp293 = *$tmp292;
frost$core$Int $tmp294 = *(&local1);
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp295 = *(&local2);
// begin inline call to method frost.collections.Array.[]:=(index:frost.core.Int, value:frost.collections.Array.T) from Analyzer.frost:249:27
frost$core$Int $tmp296 = (frost$core$Int) {0u};
int64_t $tmp297 = $tmp294.value;
int64_t $tmp298 = $tmp296.value;
bool $tmp299 = $tmp297 >= $tmp298;
frost$core$Bit $tmp300 = (frost$core$Bit) {$tmp299};
bool $tmp301 = $tmp300.value;
if ($tmp301) goto block26; else goto block25;
block26:;
ITable* $tmp302 = ((frost$collections$CollectionView*) $tmp293)->$class->itable;
while ($tmp302->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp302 = $tmp302->next;
}
$fn304 $tmp303 = $tmp302->methods[0];
frost$core$Int $tmp305 = $tmp303(((frost$collections$CollectionView*) $tmp293));
int64_t $tmp306 = $tmp294.value;
int64_t $tmp307 = $tmp305.value;
bool $tmp308 = $tmp306 < $tmp307;
frost$core$Bit $tmp309 = (frost$core$Bit) {$tmp308};
bool $tmp310 = $tmp309.value;
if ($tmp310) goto block24; else goto block25;
block25:;
frost$core$Int $tmp311 = (frost$core$Int) {79u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s312, $tmp311, &$s313);
abort(); // unreachable
block24:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:80
frost$core$Object*** $tmp314 = &$tmp293->data;
frost$core$Object** $tmp315 = *$tmp314;
frost$core$Int64 $tmp316 = frost$core$Int64$init$frost$core$Int($tmp294);
int64_t $tmp317 = $tmp316.value;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp295));
frost$core$Object* $tmp318 = $tmp315[$tmp317];
frost$core$Frost$unref$frost$core$Object$Q($tmp318);
$tmp315[$tmp317] = ((frost$core$Object*) $tmp295);
goto block18;
block18:;
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp319 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp319));
*(&local2) = ((org$frostlang$frostc$pass$Analyzer$DataFlowValue*) NULL);
frost$core$Int $tmp320 = *(&local1);
int64_t $tmp321 = $tmp189.value;
int64_t $tmp322 = $tmp320.value;
int64_t $tmp323 = $tmp321 - $tmp322;
frost$core$Int $tmp324 = (frost$core$Int) {$tmp323};
if ($tmp191) goto block28; else goto block29;
block28:;
int64_t $tmp325 = $tmp324.value;
int64_t $tmp326 = $tmp192.value;
bool $tmp327 = $tmp325 >= $tmp326;
frost$core$Bit $tmp328 = (frost$core$Bit) {$tmp327};
bool $tmp329 = $tmp328.value;
if ($tmp329) goto block27; else goto block5;
block29:;
int64_t $tmp330 = $tmp324.value;
int64_t $tmp331 = $tmp192.value;
bool $tmp332 = $tmp330 > $tmp331;
frost$core$Bit $tmp333 = (frost$core$Bit) {$tmp332};
bool $tmp334 = $tmp333.value;
if ($tmp334) goto block27; else goto block5;
block27:;
int64_t $tmp335 = $tmp320.value;
int64_t $tmp336 = $tmp192.value;
int64_t $tmp337 = $tmp335 + $tmp336;
frost$core$Int $tmp338 = (frost$core$Int) {$tmp337};
*(&local1) = $tmp338;
goto block4;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:252
frost$core$Int $tmp339 = (frost$core$Int) {0u};
frost$collections$Array** $tmp340 = &param0->parameters;
frost$collections$Array* $tmp341 = *$tmp340;
ITable* $tmp342 = ((frost$collections$CollectionView*) $tmp341)->$class->itable;
while ($tmp342->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp342 = $tmp342->next;
}
$fn344 $tmp343 = $tmp342->methods[0];
frost$core$Int $tmp345 = $tmp343(((frost$collections$CollectionView*) $tmp341));
frost$core$Bit $tmp346 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp347 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp339, $tmp345, $tmp346);
frost$core$Int $tmp348 = $tmp347.min;
*(&local3) = $tmp348;
frost$core$Int $tmp349 = $tmp347.max;
frost$core$Bit $tmp350 = $tmp347.inclusive;
bool $tmp351 = $tmp350.value;
frost$core$Int $tmp352 = (frost$core$Int) {1u};
if ($tmp351) goto block33; else goto block34;
block33:;
int64_t $tmp353 = $tmp348.value;
int64_t $tmp354 = $tmp349.value;
bool $tmp355 = $tmp353 <= $tmp354;
frost$core$Bit $tmp356 = (frost$core$Bit) {$tmp355};
bool $tmp357 = $tmp356.value;
if ($tmp357) goto block30; else goto block31;
block34:;
int64_t $tmp358 = $tmp348.value;
int64_t $tmp359 = $tmp349.value;
bool $tmp360 = $tmp358 < $tmp359;
frost$core$Bit $tmp361 = (frost$core$Bit) {$tmp360};
bool $tmp362 = $tmp361.value;
if ($tmp362) goto block30; else goto block31;
block30:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:253
frost$collections$Array** $tmp363 = &param0->parameters;
frost$collections$Array* $tmp364 = *$tmp363;
frost$core$Int $tmp365 = *(&local3);
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Analyzer.frost:253:40
frost$core$Int $tmp366 = (frost$core$Int) {0u};
int64_t $tmp367 = $tmp365.value;
int64_t $tmp368 = $tmp366.value;
bool $tmp369 = $tmp367 >= $tmp368;
frost$core$Bit $tmp370 = (frost$core$Bit) {$tmp369};
bool $tmp371 = $tmp370.value;
if ($tmp371) goto block38; else goto block37;
block38:;
ITable* $tmp372 = ((frost$collections$CollectionView*) $tmp364)->$class->itable;
while ($tmp372->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp372 = $tmp372->next;
}
$fn374 $tmp373 = $tmp372->methods[0];
frost$core$Int $tmp375 = $tmp373(((frost$collections$CollectionView*) $tmp364));
int64_t $tmp376 = $tmp365.value;
int64_t $tmp377 = $tmp375.value;
bool $tmp378 = $tmp376 < $tmp377;
frost$core$Bit $tmp379 = (frost$core$Bit) {$tmp378};
bool $tmp380 = $tmp379.value;
if ($tmp380) goto block36; else goto block37;
block37:;
frost$core$Int $tmp381 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s382, $tmp381, &$s383);
abort(); // unreachable
block36:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp384 = &$tmp364->data;
frost$core$Object** $tmp385 = *$tmp384;
frost$core$Int64 $tmp386 = frost$core$Int64$init$frost$core$Int($tmp365);
int64_t $tmp387 = $tmp386.value;
frost$core$Object* $tmp388 = $tmp385[$tmp387];
frost$core$Frost$ref$frost$core$Object$Q($tmp388);
frost$collections$Array** $tmp389 = &param2->parameters;
frost$collections$Array* $tmp390 = *$tmp389;
frost$core$Int $tmp391 = *(&local3);
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Analyzer.frost:253:72
frost$core$Int $tmp392 = (frost$core$Int) {0u};
int64_t $tmp393 = $tmp391.value;
int64_t $tmp394 = $tmp392.value;
bool $tmp395 = $tmp393 >= $tmp394;
frost$core$Bit $tmp396 = (frost$core$Bit) {$tmp395};
bool $tmp397 = $tmp396.value;
if ($tmp397) goto block42; else goto block41;
block42:;
ITable* $tmp398 = ((frost$collections$CollectionView*) $tmp390)->$class->itable;
while ($tmp398->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp398 = $tmp398->next;
}
$fn400 $tmp399 = $tmp398->methods[0];
frost$core$Int $tmp401 = $tmp399(((frost$collections$CollectionView*) $tmp390));
int64_t $tmp402 = $tmp391.value;
int64_t $tmp403 = $tmp401.value;
bool $tmp404 = $tmp402 < $tmp403;
frost$core$Bit $tmp405 = (frost$core$Bit) {$tmp404};
bool $tmp406 = $tmp405.value;
if ($tmp406) goto block40; else goto block41;
block41:;
frost$core$Int $tmp407 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s408, $tmp407, &$s409);
abort(); // unreachable
block40:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp410 = &$tmp390->data;
frost$core$Object** $tmp411 = *$tmp410;
frost$core$Int64 $tmp412 = frost$core$Int64$init$frost$core$Int($tmp391);
int64_t $tmp413 = $tmp412.value;
frost$core$Object* $tmp414 = $tmp411[$tmp413];
frost$core$Frost$ref$frost$core$Object$Q($tmp414);
org$frostlang$frostc$Type* $tmp415 = org$frostlang$frostc$Type$union$org$frostlang$frostc$Compiler$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(((org$frostlang$frostc$Type*) $tmp388), param1, ((org$frostlang$frostc$Type*) $tmp414));
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp415));
org$frostlang$frostc$Type* $tmp416 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp416));
*(&local4) = $tmp415;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp415));
frost$core$Frost$unref$frost$core$Object$Q($tmp414);
frost$core$Frost$unref$frost$core$Object$Q($tmp388);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:254
org$frostlang$frostc$Type* $tmp417 = *(&local4);
frost$collections$Array** $tmp418 = &param0->parameters;
frost$collections$Array* $tmp419 = *$tmp418;
frost$core$Int $tmp420 = *(&local3);
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Analyzer.frost:254:39
frost$core$Int $tmp421 = (frost$core$Int) {0u};
int64_t $tmp422 = $tmp420.value;
int64_t $tmp423 = $tmp421.value;
bool $tmp424 = $tmp422 >= $tmp423;
frost$core$Bit $tmp425 = (frost$core$Bit) {$tmp424};
bool $tmp426 = $tmp425.value;
if ($tmp426) goto block48; else goto block47;
block48:;
ITable* $tmp427 = ((frost$collections$CollectionView*) $tmp419)->$class->itable;
while ($tmp427->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp427 = $tmp427->next;
}
$fn429 $tmp428 = $tmp427->methods[0];
frost$core$Int $tmp430 = $tmp428(((frost$collections$CollectionView*) $tmp419));
int64_t $tmp431 = $tmp420.value;
int64_t $tmp432 = $tmp430.value;
bool $tmp433 = $tmp431 < $tmp432;
frost$core$Bit $tmp434 = (frost$core$Bit) {$tmp433};
bool $tmp435 = $tmp434.value;
if ($tmp435) goto block46; else goto block47;
block47:;
frost$core$Int $tmp436 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s437, $tmp436, &$s438);
abort(); // unreachable
block46:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp439 = &$tmp419->data;
frost$core$Object** $tmp440 = *$tmp439;
frost$core$Int64 $tmp441 = frost$core$Int64$init$frost$core$Int($tmp420);
int64_t $tmp442 = $tmp441.value;
frost$core$Object* $tmp443 = $tmp440[$tmp442];
frost$core$Frost$ref$frost$core$Object$Q($tmp443);
ITable* $tmp444 = ((frost$core$Equatable*) $tmp417)->$class->itable;
while ($tmp444->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp444 = $tmp444->next;
}
$fn446 $tmp445 = $tmp444->methods[1];
frost$core$Bit $tmp447 = $tmp445(((frost$core$Equatable*) $tmp417), ((frost$core$Equatable*) ((org$frostlang$frostc$Type*) $tmp443)));
bool $tmp448 = $tmp447.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp443);
if ($tmp448) goto block43; else goto block44;
block43:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:255
frost$core$Bit $tmp449 = (frost$core$Bit) {true};
*(&local0) = $tmp449;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:256
frost$collections$Array** $tmp450 = &param0->parameters;
frost$collections$Array* $tmp451 = *$tmp450;
frost$core$Int $tmp452 = *(&local3);
org$frostlang$frostc$Type* $tmp453 = *(&local4);
// begin inline call to method frost.collections.Array.[]:=(index:frost.core.Int, value:frost.collections.Array.T) from Analyzer.frost:256:31
frost$core$Int $tmp454 = (frost$core$Int) {0u};
int64_t $tmp455 = $tmp452.value;
int64_t $tmp456 = $tmp454.value;
bool $tmp457 = $tmp455 >= $tmp456;
frost$core$Bit $tmp458 = (frost$core$Bit) {$tmp457};
bool $tmp459 = $tmp458.value;
if ($tmp459) goto block52; else goto block51;
block52:;
ITable* $tmp460 = ((frost$collections$CollectionView*) $tmp451)->$class->itable;
while ($tmp460->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp460 = $tmp460->next;
}
$fn462 $tmp461 = $tmp460->methods[0];
frost$core$Int $tmp463 = $tmp461(((frost$collections$CollectionView*) $tmp451));
int64_t $tmp464 = $tmp452.value;
int64_t $tmp465 = $tmp463.value;
bool $tmp466 = $tmp464 < $tmp465;
frost$core$Bit $tmp467 = (frost$core$Bit) {$tmp466};
bool $tmp468 = $tmp467.value;
if ($tmp468) goto block50; else goto block51;
block51:;
frost$core$Int $tmp469 = (frost$core$Int) {79u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s470, $tmp469, &$s471);
abort(); // unreachable
block50:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:80
frost$core$Object*** $tmp472 = &$tmp451->data;
frost$core$Object** $tmp473 = *$tmp472;
frost$core$Int64 $tmp474 = frost$core$Int64$init$frost$core$Int($tmp452);
int64_t $tmp475 = $tmp474.value;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp453));
frost$core$Object* $tmp476 = $tmp473[$tmp475];
frost$core$Frost$unref$frost$core$Object$Q($tmp476);
$tmp473[$tmp475] = ((frost$core$Object*) $tmp453);
goto block44;
block44:;
org$frostlang$frostc$Type* $tmp477 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp477));
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Int $tmp478 = *(&local3);
int64_t $tmp479 = $tmp349.value;
int64_t $tmp480 = $tmp478.value;
int64_t $tmp481 = $tmp479 - $tmp480;
frost$core$Int $tmp482 = (frost$core$Int) {$tmp481};
if ($tmp351) goto block54; else goto block55;
block54:;
int64_t $tmp483 = $tmp482.value;
int64_t $tmp484 = $tmp352.value;
bool $tmp485 = $tmp483 >= $tmp484;
frost$core$Bit $tmp486 = (frost$core$Bit) {$tmp485};
bool $tmp487 = $tmp486.value;
if ($tmp487) goto block53; else goto block31;
block55:;
int64_t $tmp488 = $tmp482.value;
int64_t $tmp489 = $tmp352.value;
bool $tmp490 = $tmp488 > $tmp489;
frost$core$Bit $tmp491 = (frost$core$Bit) {$tmp490};
bool $tmp492 = $tmp491.value;
if ($tmp492) goto block53; else goto block31;
block53:;
int64_t $tmp493 = $tmp478.value;
int64_t $tmp494 = $tmp352.value;
int64_t $tmp495 = $tmp493 + $tmp494;
frost$core$Int $tmp496 = (frost$core$Int) {$tmp495};
*(&local3) = $tmp496;
goto block30;
block31:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:259
frost$core$Bit $tmp497 = *(&local0);
return $tmp497;

}
frost$core$String* org$frostlang$frostc$pass$Analyzer$State$get_asString$R$frost$core$String(org$frostlang$frostc$pass$Analyzer$State* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:264
frost$collections$Array** $tmp498 = &param0->locals;
frost$collections$Array* $tmp499 = *$tmp498;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Analyzer.frost:264:20
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn501 $tmp500 = ($fn501) ((frost$core$Object*) $tmp499)->$class->vtable[0];
frost$core$String* $tmp502 = $tmp500(((frost$core$Object*) $tmp499));
frost$core$String* $tmp503 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s504, $tmp502);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp503));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp503));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp502));
frost$core$String* $tmp505 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp503, &$s506);
frost$collections$Array** $tmp507 = &param0->parameters;
frost$collections$Array* $tmp508 = *$tmp507;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Analyzer.frost:264:20
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn510 $tmp509 = ($fn510) ((frost$core$Object*) $tmp508)->$class->vtable[0];
frost$core$String* $tmp511 = $tmp509(((frost$core$Object*) $tmp508));
frost$core$String* $tmp512 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp505, $tmp511);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp512));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp512));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp511));
frost$core$String* $tmp513 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp512, &$s514);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp513));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp513));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp512));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp505));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp503));
return $tmp513;

}
void org$frostlang$frostc$pass$Analyzer$State$cleanup(org$frostlang$frostc$pass$Analyzer$State* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:217
frost$core$Object$cleanup(((frost$core$Object*) param0));
frost$collections$Array** $tmp515 = &param0->locals;
frost$collections$Array* $tmp516 = *$tmp515;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp516));
frost$collections$Array** $tmp517 = &param0->parameters;
frost$collections$Array* $tmp518 = *$tmp517;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp518));
return;

}






