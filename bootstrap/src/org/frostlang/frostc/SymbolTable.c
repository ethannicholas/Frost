#include "org/frostlang/frostc/SymbolTable.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/Compiler.h"
#include "frost/collections/HashMap.h"
#include "frost/collections/Array.h"
#include "frost/core/Weak.h"
#include "frost/core/Frost.h"
#include "frost/core/Bit.h"
#include "frost/core/Int.h"
#include "org/frostlang/frostc/Symbol.h"
#include "org/frostlang/frostc/Symbol/Kind.h"
#include "frost/collections/HashKey.h"
#include "frost/core/Equatable.h"
#include "org/frostlang/frostc/MethodDecl.h"
#include "org/frostlang/frostc/Methods.h"
#include "frost/collections/ListView.h"
#include "org/frostlang/frostc/FixedArray.h"
#include "frost/collections/CollectionView.h"
#include "org/frostlang/frostc/Position.h"
#include "frost/collections/List.h"
#include "org/frostlang/frostc/MethodDecl/Kind.h"
#include "frost/collections/Iterable.h"
#include "frost/collections/Iterator.h"
#include "org/frostlang/frostc/Annotations.h"
#include "frost/collections/CollectionWriter.h"


static frost$core$String $s1;
org$frostlang$frostc$SymbolTable$class_type org$frostlang$frostc$SymbolTable$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { org$frostlang$frostc$SymbolTable$get_asString$R$frost$core$String, org$frostlang$frostc$SymbolTable$cleanup, org$frostlang$frostc$SymbolTable$add$org$frostlang$frostc$Symbol, org$frostlang$frostc$SymbolTable$add$org$frostlang$frostc$Symbol$frost$core$String, org$frostlang$frostc$SymbolTable$addIfNotOverridden$org$frostlang$frostc$MethodDecl$frost$collections$List$LTorg$frostlang$frostc$MethodDecl$GT, org$frostlang$frostc$SymbolTable$merge$org$frostlang$frostc$Symbol$Q$org$frostlang$frostc$Symbol$Q$R$org$frostlang$frostc$Symbol$Q, org$frostlang$frostc$SymbolTable$$IDX$frost$core$String$R$org$frostlang$frostc$Symbol$Q} };

typedef frost$core$Bit (*$fn3)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$String* (*$fn4)(frost$core$Object*);
typedef frost$core$String* (*$fn16)(frost$core$Object*);
typedef frost$core$Bit (*$fn18)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$collections$Iterator* (*$fn19)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn20)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn21)(frost$collections$Iterator*);
typedef void (*$fn22)(frost$collections$CollectionWriter*, frost$core$Object*);
typedef frost$core$Bit (*$fn31)(org$frostlang$frostc$Symbol*);
typedef frost$collections$Iterator* (*$fn32)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn33)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn34)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn35)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn36)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn37)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn40)(org$frostlang$frostc$Symbol*);
typedef frost$collections$Iterator* (*$fn55)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn56)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn57)(frost$collections$Iterator*);
typedef frost$core$Int (*$fn63)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn64)(frost$core$Object*);
typedef frost$core$String* (*$fn65)(frost$core$Object*);
typedef frost$core$String* (*$fn68)(frost$core$Object*);
typedef frost$core$String* (*$fn71)(frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x79\x6d\x62\x6f\x6c\x54\x61\x62\x6c\x65", 32, 8199553873176202496, NULL };
static frost$core$String $s2 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x73\x74\x75\x62", 9, -1038031786811403499, NULL };
static frost$core$String $s8 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x79\x6d\x62\x6f\x6c\x54\x61\x62\x6c\x65\x2e\x66\x72\x6f\x73\x74", 17, 2603826108937223355, NULL };
static frost$core$String $s9 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x79\x6d\x62\x6f\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x79\x6d\x62\x6f\x6c", 93, -1793708938165963595, NULL };
static frost$core$String $s10 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x73\x74\x75\x62", 9, -1038031786811403499, NULL };
static frost$core$String $s11 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x64\x75\x70\x6c\x69\x63\x61\x74\x65\x20\x73\x79\x6d\x62\x6f\x6c\x20\x27", 18, -4567382734304966013, NULL };
static frost$core$String $s12 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x20\x28\x70\x72\x65\x76\x69\x6f\x75\x73\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x20\x77\x61\x73\x20\x61\x74\x20", 31, -294577661570171599, NULL };
static frost$core$String $s13 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x79\x6d\x62\x6f\x6c\x54\x61\x62\x6c\x65\x2e\x66\x72\x6f\x73\x74", 17, 2603826108937223355, NULL };
static frost$core$String $s14 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x79\x6d\x62\x6f\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x79\x6d\x62\x6f\x6c", 93, -1793708938165963595, NULL };
static frost$core$String $s17 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s29 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x73\x74\x75\x62", 9, -1038031786811403499, NULL };
static frost$core$String $s38 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x79\x6d\x62\x6f\x6c\x54\x61\x62\x6c\x65\x2e\x66\x72\x6f\x73\x74", 17, 2603826108937223355, NULL };
static frost$core$String $s39 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x79\x6d\x62\x6f\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x79\x6d\x62\x6f\x6c", 93, -1793708938165963595, NULL };
static frost$core$String $s41 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x79\x6d\x62\x6f\x6c\x54\x61\x62\x6c\x65\x2e\x66\x72\x6f\x73\x74", 17, 2603826108937223355, NULL };
static frost$core$String $s42 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x79\x6d\x62\x6f\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x79\x6d\x62\x6f\x6c", 93, -1793708938165963595, NULL };
static frost$core$String $s43 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x79\x6d\x62\x6f\x6c\x54\x61\x62\x6c\x65\x2e\x66\x72\x6f\x73\x74", 17, 2603826108937223355, NULL };
static frost$core$String $s44 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x79\x6d\x62\x6f\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x79\x6d\x62\x6f\x6c", 93, -1793708938165963595, NULL };
static frost$core$String $s48 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x73\x74\x75\x62", 9, -1038031786811403499, NULL };
static frost$core$String $s49 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x73\x74\x75\x62", 9, -1038031786811403499, NULL };
static frost$core$String $s50 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x79\x6d\x62\x6f\x6c\x54\x61\x62\x6c\x65\x2e\x66\x72\x6f\x73\x74", 17, 2603826108937223355, NULL };
static frost$core$String $s51 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x79\x6d\x62\x6f\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x79\x6d\x62\x6f\x6c", 93, -1793708938165963595, NULL };
static frost$core$String $s61 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x79\x6d\x62\x6f\x6c\x54\x61\x62\x6c\x65\x2e\x66\x72\x6f\x73\x74", 17, 2603826108937223355, NULL };
static frost$core$String $s62 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x79\x6d\x62\x6f\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x79\x6d\x62\x6f\x6c", 93, -1793708938165963595, NULL };
static frost$core$String $s69 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x79\x6d\x62\x6f\x6c\x54\x61\x62\x6c\x65\x3c\x70\x61\x72\x65\x6e\x74\x73\x28", 20, -2209595055148192426, NULL };
static frost$core$String $s70 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29\x2c\x20\x73\x79\x6d\x62\x6f\x6c\x73\x3d", 11, -4986810529602041312, NULL };
static frost$core$String $s72 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3e", 1, -5808601953130666271, NULL };

void org$frostlang$frostc$SymbolTable$init$org$frostlang$frostc$Compiler(org$frostlang$frostc$SymbolTable* param0, org$frostlang$frostc$Compiler* param1) {

frost$collections$HashMap* _1;
frost$collections$HashMap* _2;
frost$core$Object* _4;
frost$collections$HashMap** _6;
frost$collections$HashMap* _7;
frost$core$Object* _8;
frost$collections$HashMap** _10;
frost$core$Object* _12;
frost$collections$HashMap* _15;
frost$collections$HashMap* _16;
frost$core$Object* _18;
frost$collections$HashMap** _20;
frost$collections$HashMap* _21;
frost$core$Object* _22;
frost$collections$HashMap** _24;
frost$core$Object* _26;
frost$collections$Array* _29;
frost$collections$Array* _30;
frost$core$Object* _32;
frost$collections$Array** _34;
frost$collections$Array* _35;
frost$core$Object* _36;
frost$collections$Array** _38;
frost$core$Object* _40;
frost$core$Weak* _43;
frost$core$Weak* _44;
org$frostlang$frostc$Compiler* _45;
frost$core$Object* _46;
frost$core$Object* _48;
frost$core$Weak** _50;
frost$core$Weak* _51;
frost$core$Object* _52;
frost$core$Weak** _54;
frost$core$Object* _56;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:5
FROST_ASSERT(56 == sizeof(frost$collections$HashMap));
_1 = (frost$collections$HashMap*) frostObjectAlloc(56, (frost$core$Class*) &frost$collections$HashMap$class);
_2 = _1;
frost$collections$HashMap$init(_2);
_4 = ((frost$core$Object*) _1);
frost$core$Frost$ref$frost$core$Object$Q(_4);
_6 = &param0->symbols;
_7 = *_6;
_8 = ((frost$core$Object*) _7);
frost$core$Frost$unref$frost$core$Object$Q(_8);
_10 = &param0->symbols;
*_10 = _1;
_12 = ((frost$core$Object*) _1);
frost$core$Frost$unref$frost$core$Object$Q(_12);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:12
FROST_ASSERT(56 == sizeof(frost$collections$HashMap));
_15 = (frost$collections$HashMap*) frostObjectAlloc(56, (frost$core$Class*) &frost$collections$HashMap$class);
_16 = _15;
frost$collections$HashMap$init(_16);
_18 = ((frost$core$Object*) _15);
frost$core$Frost$ref$frost$core$Object$Q(_18);
_20 = &param0->merged;
_21 = *_20;
_22 = ((frost$core$Object*) _21);
frost$core$Frost$unref$frost$core$Object$Q(_22);
_24 = &param0->merged;
*_24 = _15;
_26 = ((frost$core$Object*) _15);
frost$core$Frost$unref$frost$core$Object$Q(_26);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:15
FROST_ASSERT(40 == sizeof(frost$collections$Array));
_29 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
_30 = _29;
frost$collections$Array$init(_30);
_32 = ((frost$core$Object*) _29);
frost$core$Frost$ref$frost$core$Object$Q(_32);
_34 = &param0->parents;
_35 = *_34;
_36 = ((frost$core$Object*) _35);
frost$core$Frost$unref$frost$core$Object$Q(_36);
_38 = &param0->parents;
*_38 = _29;
_40 = ((frost$core$Object*) _29);
frost$core$Frost$unref$frost$core$Object$Q(_40);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:18
FROST_ASSERT(32 == sizeof(frost$core$Weak));
_43 = (frost$core$Weak*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$Weak$class);
_44 = _43;
_45 = param1;
_46 = ((frost$core$Object*) _45);
frost$core$Weak$init$frost$core$Weak$T$Q(_44, _46);
_48 = ((frost$core$Object*) _43);
frost$core$Frost$ref$frost$core$Object$Q(_48);
_50 = &param0->compiler;
_51 = *_50;
_52 = ((frost$core$Object*) _51);
frost$core$Frost$unref$frost$core$Object$Q(_52);
_54 = &param0->compiler;
*_54 = _43;
_56 = ((frost$core$Object*) _43);
frost$core$Frost$unref$frost$core$Object$Q(_56);
return;

}
void org$frostlang$frostc$SymbolTable$init$org$frostlang$frostc$SymbolTable(org$frostlang$frostc$SymbolTable* param0, org$frostlang$frostc$SymbolTable* param1) {

frost$collections$HashMap* _1;
frost$collections$HashMap* _2;
frost$core$Object* _4;
frost$collections$HashMap** _6;
frost$collections$HashMap* _7;
frost$core$Object* _8;
frost$collections$HashMap** _10;
frost$core$Object* _12;
frost$collections$HashMap* _15;
frost$collections$HashMap* _16;
frost$core$Object* _18;
frost$collections$HashMap** _20;
frost$collections$HashMap* _21;
frost$core$Object* _22;
frost$collections$HashMap** _24;
frost$core$Object* _26;
frost$collections$Array* _29;
frost$collections$Array* _30;
frost$core$Object* _32;
frost$collections$Array** _34;
frost$collections$Array* _35;
frost$core$Object* _36;
frost$collections$Array** _38;
frost$core$Object* _40;
frost$core$Weak** _43;
frost$core$Weak* _44;
frost$core$Weak* _45;
frost$core$Bit* _50;
frost$core$Bit _51;
bool _53;
frost$core$Int _55;
frost$core$Object** _59;
frost$core$Object* _60;
frost$core$Object* _61;
frost$core$Object* _62;
org$frostlang$frostc$Compiler* _65;
frost$core$Weak* _66;
frost$core$Weak* _67;
org$frostlang$frostc$Compiler* _68;
frost$core$Object* _69;
frost$core$Object* _71;
frost$core$Weak** _73;
frost$core$Weak* _74;
frost$core$Object* _75;
frost$core$Weak** _77;
frost$core$Object* _79;
frost$core$Object* _81;
frost$collections$Array** _84;
frost$collections$Array* _85;
frost$collections$Array* _86;
frost$core$Object* _87;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:5
FROST_ASSERT(56 == sizeof(frost$collections$HashMap));
_1 = (frost$collections$HashMap*) frostObjectAlloc(56, (frost$core$Class*) &frost$collections$HashMap$class);
_2 = _1;
frost$collections$HashMap$init(_2);
_4 = ((frost$core$Object*) _1);
frost$core$Frost$ref$frost$core$Object$Q(_4);
_6 = &param0->symbols;
_7 = *_6;
_8 = ((frost$core$Object*) _7);
frost$core$Frost$unref$frost$core$Object$Q(_8);
_10 = &param0->symbols;
*_10 = _1;
_12 = ((frost$core$Object*) _1);
frost$core$Frost$unref$frost$core$Object$Q(_12);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:12
FROST_ASSERT(56 == sizeof(frost$collections$HashMap));
_15 = (frost$collections$HashMap*) frostObjectAlloc(56, (frost$core$Class*) &frost$collections$HashMap$class);
_16 = _15;
frost$collections$HashMap$init(_16);
_18 = ((frost$core$Object*) _15);
frost$core$Frost$ref$frost$core$Object$Q(_18);
_20 = &param0->merged;
_21 = *_20;
_22 = ((frost$core$Object*) _21);
frost$core$Frost$unref$frost$core$Object$Q(_22);
_24 = &param0->merged;
*_24 = _15;
_26 = ((frost$core$Object*) _15);
frost$core$Frost$unref$frost$core$Object$Q(_26);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:15
FROST_ASSERT(40 == sizeof(frost$collections$Array));
_29 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
_30 = _29;
frost$collections$Array$init(_30);
_32 = ((frost$core$Object*) _29);
frost$core$Frost$ref$frost$core$Object$Q(_32);
_34 = &param0->parents;
_35 = *_34;
_36 = ((frost$core$Object*) _35);
frost$core$Frost$unref$frost$core$Object$Q(_36);
_38 = &param0->parents;
*_38 = _29;
_40 = ((frost$core$Object*) _29);
frost$core$Frost$unref$frost$core$Object$Q(_40);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:22
_43 = &param1->compiler;
_44 = *_43;
_45 = _44;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from SymbolTable.frost:22:32
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:16
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.stub:16:9
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:21
_50 = &_45->_valid;
_51 = *_50;
_53 = _51.value;
if (_53) goto block3; else goto block4;
block4:;
_55 = (frost$core$Int) {16u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s2, _55);
abort(); // unreachable
block3:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:17
_59 = &_45->value;
_60 = *_59;
_61 = _60;
_62 = _61;
frost$core$Frost$ref$frost$core$Object$Q(_62);
_65 = ((org$frostlang$frostc$Compiler*) _61);
FROST_ASSERT(32 == sizeof(frost$core$Weak));
_66 = (frost$core$Weak*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$Weak$class);
_67 = _66;
_68 = _65;
_69 = ((frost$core$Object*) _68);
frost$core$Weak$init$frost$core$Weak$T$Q(_67, _69);
_71 = ((frost$core$Object*) _66);
frost$core$Frost$ref$frost$core$Object$Q(_71);
_73 = &param0->compiler;
_74 = *_73;
_75 = ((frost$core$Object*) _74);
frost$core$Frost$unref$frost$core$Object$Q(_75);
_77 = &param0->compiler;
*_77 = _66;
_79 = ((frost$core$Object*) _66);
frost$core$Frost$unref$frost$core$Object$Q(_79);
_81 = _61;
frost$core$Frost$unref$frost$core$Object$Q(_81);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:23
_84 = &param0->parents;
_85 = *_84;
_86 = _85;
_87 = ((frost$core$Object*) param1);
frost$collections$Array$add$frost$collections$Array$T(_86, _87);
return;

}
void org$frostlang$frostc$SymbolTable$add$org$frostlang$frostc$Symbol(org$frostlang$frostc$SymbolTable* param0, org$frostlang$frostc$Symbol* param1) {

frost$core$String** _1;
frost$core$String* _2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:27
_1 = &param1->name;
_2 = *_1;
org$frostlang$frostc$SymbolTable$add$org$frostlang$frostc$Symbol$frost$core$String(param0, param1, _2);
return;

}
void org$frostlang$frostc$SymbolTable$add$org$frostlang$frostc$Symbol$frost$core$String(org$frostlang$frostc$SymbolTable* param0, org$frostlang$frostc$Symbol* param1, frost$core$String* param2) {

org$frostlang$frostc$Symbol* local0 = NULL;
org$frostlang$frostc$Symbol$Kind local1;
org$frostlang$frostc$Symbol$Kind local2;
frost$collections$Array* local3 = NULL;
frost$collections$Array* local4 = NULL;
frost$collections$HashMap** _1;
frost$collections$HashMap* _2;
frost$collections$HashMap* _3;
frost$collections$HashKey* _4;
frost$collections$HashMap** _7;
frost$collections$HashMap* _8;
frost$collections$HashMap* _9;
frost$collections$HashKey* _10;
frost$core$Object* _11;
org$frostlang$frostc$Symbol* _12;
frost$core$Object* _14;
org$frostlang$frostc$Symbol* _16;
frost$core$Object* _17;
frost$core$Object* _20;
org$frostlang$frostc$Symbol* _23;
bool _24;
frost$core$Bit _25;
bool _26;
frost$collections$HashMap** _29;
frost$collections$HashMap* _30;
frost$collections$HashMap* _31;
frost$collections$HashKey* _32;
frost$core$Object* _33;
org$frostlang$frostc$Symbol* _36;
frost$core$Object* _37;
org$frostlang$frostc$Symbol$Kind* _42;
org$frostlang$frostc$Symbol$Kind _43;
frost$core$Equatable* _44;
frost$core$Equatable* _45;
frost$core$Int _46;
frost$core$Int* _49;
org$frostlang$frostc$Symbol$Kind _51;
org$frostlang$frostc$Symbol$Kind _54;
frost$core$Equatable* _55;
$fn3 _56;
frost$core$Bit _57;
bool _58;
frost$core$Object* _59;
frost$core$Object* _61;
org$frostlang$frostc$Symbol* _65;
bool _66;
frost$core$Bit _67;
bool _68;
frost$core$Int _70;
org$frostlang$frostc$Symbol* _73;
org$frostlang$frostc$Symbol$Kind* _74;
org$frostlang$frostc$Symbol$Kind _75;
frost$core$Int _76;
frost$core$Int _77;
int64_t _80;
int64_t _81;
bool _82;
frost$core$Bit _83;
bool _85;
frost$collections$Array* _88;
frost$collections$Array* _89;
frost$core$Object* _92;
frost$collections$Array* _94;
frost$core$Object* _95;
frost$core$Object* _98;
frost$collections$Array* _101;
frost$collections$Array* _102;
org$frostlang$frostc$MethodDecl* _103;
frost$core$Object* _104;
frost$collections$Array* _107;
frost$collections$Array* _108;
org$frostlang$frostc$Symbol* _109;
org$frostlang$frostc$MethodDecl* _110;
frost$core$Object* _111;
frost$collections$HashMap** _114;
frost$collections$HashMap* _115;
frost$collections$HashMap* _116;
frost$collections$HashKey* _117;
org$frostlang$frostc$Methods* _118;
frost$collections$Array* _119;
frost$collections$ListView* _120;
org$frostlang$frostc$Symbol* _122;
frost$core$Object* _123;
frost$core$Object* _125;
frost$collections$Array* _128;
frost$core$Object* _129;
org$frostlang$frostc$Symbol* _132;
frost$core$Object* _133;
frost$core$Int _137;
int64_t _140;
int64_t _141;
bool _142;
frost$core$Bit _143;
bool _145;
frost$collections$Array* _148;
frost$collections$Array* _149;
frost$core$Object* _152;
frost$collections$Array* _154;
frost$core$Object* _155;
frost$core$Object* _158;
frost$collections$Array* _161;
frost$collections$Array* _162;
org$frostlang$frostc$MethodDecl* _163;
frost$core$Object* _164;
frost$collections$Array* _167;
frost$collections$Array* _168;
org$frostlang$frostc$Symbol* _169;
org$frostlang$frostc$Methods* _170;
org$frostlang$frostc$FixedArray** _171;
org$frostlang$frostc$FixedArray* _172;
frost$collections$CollectionView* _173;
frost$collections$CollectionView* _174;
frost$collections$HashMap** _177;
frost$collections$HashMap* _178;
frost$collections$HashMap* _179;
frost$collections$HashKey* _180;
org$frostlang$frostc$Methods* _181;
frost$collections$Array* _182;
frost$collections$ListView* _183;
org$frostlang$frostc$Symbol* _185;
frost$core$Object* _186;
frost$core$Object* _188;
frost$collections$Array* _191;
frost$core$Object* _192;
org$frostlang$frostc$Symbol* _195;
frost$core$Object* _196;
frost$core$Weak** _202;
frost$core$Weak* _203;
frost$core$Weak* _204;
frost$core$Bit* _209;
frost$core$Bit _210;
bool _212;
frost$core$Int _214;
frost$core$Object** _218;
frost$core$Object* _219;
frost$core$Object* _220;
frost$core$Object* _221;
org$frostlang$frostc$Compiler* _224;
org$frostlang$frostc$Position* _225;
org$frostlang$frostc$Position _226;
frost$core$String* _227;
frost$core$String* _228;
org$frostlang$frostc$Symbol* _229;
bool _230;
frost$core$Bit _231;
bool _232;
frost$core$Int _234;
org$frostlang$frostc$Symbol* _237;
org$frostlang$frostc$Position* _238;
org$frostlang$frostc$Position _239;
frost$core$Object* _240;
$fn4 _243;
frost$core$String* _244;
frost$core$String* _245;
frost$core$Object* _246;
frost$core$Object* _248;
frost$core$Object* _250;
frost$core$String* _253;
frost$core$Object* _255;
frost$core$Object* _257;
frost$core$Object* _259;
frost$core$Object* _261;
frost$core$Object* _263;
frost$core$Object* _265;
org$frostlang$frostc$Symbol* _267;
frost$core$Object* _268;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:31
_1 = &param0->merged;
_2 = *_1;
_3 = _2;
_4 = ((frost$collections$HashKey*) param2);
frost$collections$HashMap$remove$frost$collections$HashMap$K(_3, _4);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:32
_7 = &param0->symbols;
_8 = *_7;
_9 = _8;
_10 = ((frost$collections$HashKey*) param2);
_11 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q(_9, _10);
_12 = ((org$frostlang$frostc$Symbol*) _11);
*(&local0) = ((org$frostlang$frostc$Symbol*) NULL);
_14 = ((frost$core$Object*) _12);
frost$core$Frost$ref$frost$core$Object$Q(_14);
_16 = *(&local0);
_17 = ((frost$core$Object*) _16);
frost$core$Frost$unref$frost$core$Object$Q(_17);
*(&local0) = _12;
_20 = _11;
frost$core$Frost$unref$frost$core$Object$Q(_20);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:33
_23 = *(&local0);
_24 = _23 == NULL;
_25 = (frost$core$Bit) {_24};
_26 = _25.value;
if (_26) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:34
_29 = &param0->symbols;
_30 = *_29;
_31 = _30;
_32 = ((frost$collections$HashKey*) param2);
_33 = ((frost$core$Object*) param1);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V(_31, _32, _33);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:35
_36 = *(&local0);
_37 = ((frost$core$Object*) _36);
frost$core$Frost$unref$frost$core$Object$Q(_37);
*(&local0) = ((org$frostlang$frostc$Symbol*) NULL);
return;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:37
_42 = &param1->kind;
_43 = *_42;
org$frostlang$frostc$Symbol$Kind$wrapper* $tmp5;
$tmp5 = (org$frostlang$frostc$Symbol$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Symbol$Kind$wrapperclass);
$tmp5->value = _43;
_44 = ((frost$core$Equatable*) $tmp5);
_45 = _44;
_46 = (frost$core$Int) {5u};
// begin inline call to org.frostlang.frostc.Symbol.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Symbol.Kind from SymbolTable.frost:37:32
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Symbol.frost:4
_49 = &(&local2)->$rawValue;
*_49 = _46;
_51 = *(&local2);
*(&local1) = _51;
_54 = *(&local1);
org$frostlang$frostc$Symbol$Kind$wrapper* $tmp6;
$tmp6 = (org$frostlang$frostc$Symbol$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Symbol$Kind$wrapperclass);
$tmp6->value = _54;
_55 = ((frost$core$Equatable*) $tmp6);
ITable* $tmp7 = _45->$class->itable;
while ($tmp7->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp7 = $tmp7->next;
}
_56 = $tmp7->methods[0];
_57 = _56(_45, _55);
_58 = _57.value;
_59 = ((frost$core$Object*) _55);
frost$core$Frost$unref$frost$core$Object$Q(_59);
_61 = ((frost$core$Object*) _44);
frost$core$Frost$unref$frost$core$Object$Q(_61);
if (_58) goto block3; else goto block4;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:38
_65 = *(&local0);
_66 = _65 != NULL;
_67 = (frost$core$Bit) {_66};
_68 = _67.value;
if (_68) goto block6; else goto block7;
block7:;
_70 = (frost$core$Int) {38u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s8, _70, &$s9);
abort(); // unreachable
block6:;
_73 = _65;
_74 = &_73->kind;
_75 = *_74;
_76 = _75.$rawValue;
_77 = (frost$core$Int) {5u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SymbolTable.frost:39:33
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_80 = _76.value;
_81 = _77.value;
_82 = _80 == _81;
_83 = (frost$core$Bit) {_82};
_85 = _83.value;
if (_85) goto block9; else goto block10;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:40
FROST_ASSERT(40 == sizeof(frost$collections$Array));
_88 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
_89 = _88;
frost$collections$Array$init(_89);
*(&local3) = ((frost$collections$Array*) NULL);
_92 = ((frost$core$Object*) _88);
frost$core$Frost$ref$frost$core$Object$Q(_92);
_94 = *(&local3);
_95 = ((frost$core$Object*) _94);
frost$core$Frost$unref$frost$core$Object$Q(_95);
*(&local3) = _88;
_98 = ((frost$core$Object*) _88);
frost$core$Frost$unref$frost$core$Object$Q(_98);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:41
_101 = *(&local3);
_102 = _101;
_103 = ((org$frostlang$frostc$MethodDecl*) param1);
_104 = ((frost$core$Object*) _103);
frost$collections$Array$add$frost$collections$Array$T(_102, _104);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:42
_107 = *(&local3);
_108 = _107;
_109 = *(&local0);
_110 = ((org$frostlang$frostc$MethodDecl*) _109);
_111 = ((frost$core$Object*) _110);
frost$collections$Array$add$frost$collections$Array$T(_108, _111);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:43
_114 = &param0->symbols;
_115 = *_114;
_116 = _115;
_117 = ((frost$collections$HashKey*) param2);
FROST_ASSERT(64 == sizeof(org$frostlang$frostc$Methods));
_118 = (org$frostlang$frostc$Methods*) frostObjectAlloc(64, (frost$core$Class*) &org$frostlang$frostc$Methods$class);
_119 = *(&local3);
_120 = ((frost$collections$ListView*) _119);
org$frostlang$frostc$Methods$init$frost$collections$ListView$LTorg$frostlang$frostc$MethodDecl$GT(_118, _120);
_122 = ((org$frostlang$frostc$Symbol*) _118);
_123 = ((frost$core$Object*) _122);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V(_116, _117, _123);
_125 = ((frost$core$Object*) _118);
frost$core$Frost$unref$frost$core$Object$Q(_125);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:44
_128 = *(&local3);
_129 = ((frost$core$Object*) _128);
frost$core$Frost$unref$frost$core$Object$Q(_129);
*(&local3) = ((frost$collections$Array*) NULL);
_132 = *(&local0);
_133 = ((frost$core$Object*) _132);
frost$core$Frost$unref$frost$core$Object$Q(_133);
*(&local0) = ((org$frostlang$frostc$Symbol*) NULL);
return;
block10:;
_137 = (frost$core$Int) {6u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SymbolTable.frost:46:33
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_140 = _76.value;
_141 = _137.value;
_142 = _140 == _141;
_143 = (frost$core$Bit) {_142};
_145 = _143.value;
if (_145) goto block12; else goto block8;
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:47
FROST_ASSERT(40 == sizeof(frost$collections$Array));
_148 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
_149 = _148;
frost$collections$Array$init(_149);
*(&local4) = ((frost$collections$Array*) NULL);
_152 = ((frost$core$Object*) _148);
frost$core$Frost$ref$frost$core$Object$Q(_152);
_154 = *(&local4);
_155 = ((frost$core$Object*) _154);
frost$core$Frost$unref$frost$core$Object$Q(_155);
*(&local4) = _148;
_158 = ((frost$core$Object*) _148);
frost$core$Frost$unref$frost$core$Object$Q(_158);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:48
_161 = *(&local4);
_162 = _161;
_163 = ((org$frostlang$frostc$MethodDecl*) param1);
_164 = ((frost$core$Object*) _163);
frost$collections$Array$add$frost$collections$Array$T(_162, _164);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:49
_167 = *(&local4);
_168 = _167;
_169 = *(&local0);
_170 = ((org$frostlang$frostc$Methods*) _169);
_171 = &_170->methods;
_172 = *_171;
_173 = ((frost$collections$CollectionView*) _172);
_174 = _173;
frost$collections$Array$addAll$frost$collections$CollectionView$LTfrost$collections$Array$T$GT(_168, _174);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:50
_177 = &param0->symbols;
_178 = *_177;
_179 = _178;
_180 = ((frost$collections$HashKey*) param2);
FROST_ASSERT(64 == sizeof(org$frostlang$frostc$Methods));
_181 = (org$frostlang$frostc$Methods*) frostObjectAlloc(64, (frost$core$Class*) &org$frostlang$frostc$Methods$class);
_182 = *(&local4);
_183 = ((frost$collections$ListView*) _182);
org$frostlang$frostc$Methods$init$frost$collections$ListView$LTorg$frostlang$frostc$MethodDecl$GT(_181, _183);
_185 = ((org$frostlang$frostc$Symbol*) _181);
_186 = ((frost$core$Object*) _185);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V(_179, _180, _186);
_188 = ((frost$core$Object*) _181);
frost$core$Frost$unref$frost$core$Object$Q(_188);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:51
_191 = *(&local4);
_192 = ((frost$core$Object*) _191);
frost$core$Frost$unref$frost$core$Object$Q(_192);
*(&local4) = ((frost$collections$Array*) NULL);
_195 = *(&local0);
_196 = ((frost$core$Object*) _195);
frost$core$Frost$unref$frost$core$Object$Q(_196);
*(&local0) = ((org$frostlang$frostc$Symbol*) NULL);
return;
block8:;
goto block4;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:55
_202 = &param0->compiler;
_203 = *_202;
_204 = _203;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from SymbolTable.frost:55:9
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:16
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.stub:16:9
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:21
_209 = &_204->_valid;
_210 = *_209;
_212 = _210.value;
if (_212) goto block16; else goto block17;
block17:;
_214 = (frost$core$Int) {16u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s10, _214);
abort(); // unreachable
block16:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:17
_218 = &_204->value;
_219 = *_218;
_220 = _219;
_221 = _220;
frost$core$Frost$ref$frost$core$Object$Q(_221);
_224 = ((org$frostlang$frostc$Compiler*) _220);
_225 = &param1->position;
_226 = *_225;
_227 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s11, param2);
_228 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_227, &$s12);
_229 = *(&local0);
_230 = _229 != NULL;
_231 = (frost$core$Bit) {_230};
_232 = _231.value;
if (_232) goto block18; else goto block19;
block19:;
_234 = (frost$core$Int) {56u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s13, _234, &$s14);
abort(); // unreachable
block18:;
_237 = _229;
_238 = &_237->position;
_239 = *_238;
org$frostlang$frostc$Position$wrapper* $tmp15;
$tmp15 = (org$frostlang$frostc$Position$wrapper*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Position$wrapperclass);
$tmp15->value = _239;
_240 = ((frost$core$Object*) $tmp15);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from SymbolTable.frost:55:95
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:155
_243 = ($fn16) _240->$class->vtable[0];
_244 = _243(_240);
_245 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_228, _244);
_246 = ((frost$core$Object*) _245);
frost$core$Frost$ref$frost$core$Object$Q(_246);
_248 = ((frost$core$Object*) _245);
frost$core$Frost$unref$frost$core$Object$Q(_248);
_250 = ((frost$core$Object*) _244);
frost$core$Frost$unref$frost$core$Object$Q(_250);
_253 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_245, &$s17);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(_224, _226, _253);
_255 = ((frost$core$Object*) _253);
frost$core$Frost$unref$frost$core$Object$Q(_255);
_257 = ((frost$core$Object*) _245);
frost$core$Frost$unref$frost$core$Object$Q(_257);
_259 = _240;
frost$core$Frost$unref$frost$core$Object$Q(_259);
_261 = ((frost$core$Object*) _228);
frost$core$Frost$unref$frost$core$Object$Q(_261);
_263 = ((frost$core$Object*) _227);
frost$core$Frost$unref$frost$core$Object$Q(_263);
_265 = _220;
frost$core$Frost$unref$frost$core$Object$Q(_265);
_267 = *(&local0);
_268 = ((frost$core$Object*) _267);
frost$core$Frost$unref$frost$core$Object$Q(_268);
*(&local0) = ((org$frostlang$frostc$Symbol*) NULL);
return;

}
void org$frostlang$frostc$SymbolTable$addIfNotOverridden$org$frostlang$frostc$MethodDecl$frost$collections$List$LTorg$frostlang$frostc$MethodDecl$GT(org$frostlang$frostc$SymbolTable* param0, org$frostlang$frostc$MethodDecl* param1, frost$collections$List* param2) {

org$frostlang$frostc$MethodDecl$Kind local0;
org$frostlang$frostc$MethodDecl$Kind local1;
org$frostlang$frostc$MethodDecl* local2 = NULL;
org$frostlang$frostc$MethodDecl* local3 = NULL;
org$frostlang$frostc$MethodDecl$Kind* _3;
org$frostlang$frostc$MethodDecl$Kind _4;
frost$core$Equatable* _5;
frost$core$Equatable* _6;
frost$core$Int _7;
frost$core$Int* _10;
org$frostlang$frostc$MethodDecl$Kind _12;
org$frostlang$frostc$MethodDecl$Kind _15;
frost$core$Equatable* _16;
$fn18 _17;
frost$core$Bit _18;
frost$core$Object* _19;
frost$core$Object* _21;
bool _26;
bool _27;
frost$core$Bit _28;
bool _30;
frost$collections$Iterable* _35;
frost$collections$Iterable* _36;
$fn19 _37;
frost$collections$Iterator* _38;
frost$collections$Iterator* _39;
frost$collections$Iterator* _41;
$fn20 _42;
frost$core$Bit _43;
bool _44;
frost$collections$Iterator* _47;
$fn21 _48;
frost$core$Object* _49;
org$frostlang$frostc$MethodDecl* _50;
frost$core$Object* _51;
org$frostlang$frostc$MethodDecl* _53;
frost$core$Object* _54;
frost$core$Weak** _58;
frost$core$Weak* _59;
frost$core$Weak* _60;
frost$core$Bit* _65;
frost$core$Bit _66;
bool _68;
frost$core$Int _70;
frost$core$Object** _74;
frost$core$Object* _75;
frost$core$Object* _76;
frost$core$Object* _77;
org$frostlang$frostc$Compiler* _80;
org$frostlang$frostc$MethodDecl* _81;
org$frostlang$frostc$MethodDecl* _82;
frost$core$Object* _84;
org$frostlang$frostc$MethodDecl* _86;
frost$core$Object* _87;
frost$core$Object* _90;
frost$core$Object* _92;
org$frostlang$frostc$MethodDecl* _95;
bool _96;
frost$core$Bit _97;
bool _98;
org$frostlang$frostc$MethodDecl* _101;
frost$core$Object* _102;
frost$core$Object* _105;
org$frostlang$frostc$MethodDecl* _107;
frost$core$Object* _108;
frost$core$Object* _111;
org$frostlang$frostc$Annotations** _115;
org$frostlang$frostc$Annotations* _116;
frost$core$Int* _119;
frost$core$Int _120;
frost$core$Int _121;
int64_t _124;
int64_t _125;
int64_t _126;
frost$core$Int _127;
frost$core$Int _129;
int64_t _130;
int64_t _131;
bool _132;
frost$core$Bit _133;
bool _135;
org$frostlang$frostc$MethodDecl* _137;
frost$core$String* _138;
frost$core$String* _139;
frost$core$Bit _140;
bool _141;
frost$core$Object* _142;
frost$core$Object* _144;
org$frostlang$frostc$MethodDecl* _148;
frost$core$Object* _149;
frost$core$Object* _152;
org$frostlang$frostc$MethodDecl* _154;
frost$core$Object* _155;
frost$core$Object* _158;
org$frostlang$frostc$MethodDecl* _161;
frost$core$Object* _162;
frost$core$Object* _165;
org$frostlang$frostc$MethodDecl* _167;
frost$core$Object* _168;
frost$core$Object* _172;
frost$collections$CollectionWriter* _175;
frost$core$Object* _176;
$fn22 _177;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:61
// begin inline call to function org.frostlang.frostc.MethodDecl.get_heritable():frost.core.Bit from SymbolTable.frost:61:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:104
_3 = &param1->methodKind;
_4 = *_3;
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp23;
$tmp23 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp23->value = _4;
_5 = ((frost$core$Equatable*) $tmp23);
_6 = _5;
_7 = (frost$core$Int) {2u};
// begin inline call to org.frostlang.frostc.MethodDecl.Kind.init(rv:frost.core.Int):org.frostlang.frostc.MethodDecl.Kind from MethodDecl.frost:104:34
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:7
_10 = &(&local1)->$rawValue;
*_10 = _7;
_12 = *(&local1);
*(&local0) = _12;
_15 = *(&local0);
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp24;
$tmp24 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp24->value = _15;
_16 = ((frost$core$Equatable*) $tmp24);
ITable* $tmp25 = _6->$class->itable;
while ($tmp25->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp25 = $tmp25->next;
}
_17 = $tmp25->methods[1];
_18 = _17(_6, _16);
_19 = ((frost$core$Object*) _16);
frost$core$Frost$unref$frost$core$Object$Q(_19);
_21 = ((frost$core$Object*) _5);
frost$core$Frost$unref$frost$core$Object$Q(_21);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from SymbolTable.frost:61:12
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
_26 = _18.value;
_27 = !_26;
_28 = (frost$core$Bit) {_27};
_30 = _28.value;
if (_30) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:62
return;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:64
_35 = ((frost$collections$Iterable*) param2);
_36 = _35;
ITable* $tmp26 = _36->$class->itable;
while ($tmp26->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp26 = $tmp26->next;
}
_37 = $tmp26->methods[0];
_38 = _37(_36);
_39 = _38;
goto block6;
block6:;
_41 = _39;
ITable* $tmp27 = _41->$class->itable;
while ($tmp27->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp27 = $tmp27->next;
}
_42 = $tmp27->methods[0];
_43 = _42(_41);
_44 = _43.value;
if (_44) goto block8; else goto block7;
block7:;
*(&local2) = ((org$frostlang$frostc$MethodDecl*) NULL);
_47 = _39;
ITable* $tmp28 = _47->$class->itable;
while ($tmp28->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp28 = $tmp28->next;
}
_48 = $tmp28->methods[1];
_49 = _48(_47);
_50 = ((org$frostlang$frostc$MethodDecl*) _49);
_51 = ((frost$core$Object*) _50);
frost$core$Frost$ref$frost$core$Object$Q(_51);
_53 = *(&local2);
_54 = ((frost$core$Object*) _53);
frost$core$Frost$unref$frost$core$Object$Q(_54);
*(&local2) = _50;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:65
_58 = &param0->compiler;
_59 = *_58;
_60 = _59;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from SymbolTable.frost:65:31
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:16
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.stub:16:9
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:21
_65 = &_60->_valid;
_66 = *_65;
_68 = _66.value;
if (_68) goto block11; else goto block12;
block12:;
_70 = (frost$core$Int) {16u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s29, _70);
abort(); // unreachable
block11:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:17
_74 = &_60->value;
_75 = *_74;
_76 = _75;
_77 = _76;
frost$core$Frost$ref$frost$core$Object$Q(_77);
_80 = ((org$frostlang$frostc$Compiler*) _76);
_81 = *(&local2);
_82 = org$frostlang$frostc$Compiler$getOverriddenMethod$org$frostlang$frostc$MethodDecl$R$org$frostlang$frostc$MethodDecl$Q(_80, _81);
*(&local3) = ((org$frostlang$frostc$MethodDecl*) NULL);
_84 = ((frost$core$Object*) _82);
frost$core$Frost$ref$frost$core$Object$Q(_84);
_86 = *(&local3);
_87 = ((frost$core$Object*) _86);
frost$core$Frost$unref$frost$core$Object$Q(_87);
*(&local3) = _82;
_90 = ((frost$core$Object*) _82);
frost$core$Frost$unref$frost$core$Object$Q(_90);
_92 = _76;
frost$core$Frost$unref$frost$core$Object$Q(_92);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:66
_95 = *(&local3);
_96 = _95 == param1;
_97 = (frost$core$Bit) {_96};
_98 = _97.value;
if (_98) goto block13; else goto block14;
block13:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:67
_101 = *(&local3);
_102 = ((frost$core$Object*) _101);
frost$core$Frost$unref$frost$core$Object$Q(_102);
*(&local3) = ((org$frostlang$frostc$MethodDecl*) NULL);
_105 = _49;
frost$core$Frost$unref$frost$core$Object$Q(_105);
_107 = *(&local2);
_108 = ((frost$core$Object*) _107);
frost$core$Frost$unref$frost$core$Object$Q(_108);
*(&local2) = ((org$frostlang$frostc$MethodDecl*) NULL);
_111 = ((frost$core$Object*) _38);
frost$core$Frost$unref$frost$core$Object$Q(_111);
return;
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:69
_115 = &param1->annotations;
_116 = *_115;
// begin inline call to function org.frostlang.frostc.Annotations.get_isDefault():frost.core.Bit from SymbolTable.frost:69:29
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:166
_119 = &_116->flags;
_120 = *_119;
_121 = (frost$core$Int) {32768u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:166:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:293
_124 = _120.value;
_125 = _121.value;
_126 = _124 & _125;
_127 = (frost$core$Int) {_126};
_129 = (frost$core$Int) {0u};
_130 = _127.value;
_131 = _129.value;
_132 = _130 != _131;
_133 = (frost$core$Bit) {_132};
_135 = _133.value;
if (_135) goto block17; else goto block16;
block17:;
_137 = *(&local2);
_138 = org$frostlang$frostc$MethodDecl$get_signature$R$frost$core$String(_137);
_139 = org$frostlang$frostc$MethodDecl$get_signature$R$frost$core$String(param1);
_140 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(_138, _139);
_141 = _140.value;
_142 = ((frost$core$Object*) _139);
frost$core$Frost$unref$frost$core$Object$Q(_142);
_144 = ((frost$core$Object*) _138);
frost$core$Frost$unref$frost$core$Object$Q(_144);
if (_141) goto block15; else goto block16;
block15:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:70
_148 = *(&local3);
_149 = ((frost$core$Object*) _148);
frost$core$Frost$unref$frost$core$Object$Q(_149);
*(&local3) = ((org$frostlang$frostc$MethodDecl*) NULL);
_152 = _49;
frost$core$Frost$unref$frost$core$Object$Q(_152);
_154 = *(&local2);
_155 = ((frost$core$Object*) _154);
frost$core$Frost$unref$frost$core$Object$Q(_155);
*(&local2) = ((org$frostlang$frostc$MethodDecl*) NULL);
_158 = ((frost$core$Object*) _38);
frost$core$Frost$unref$frost$core$Object$Q(_158);
return;
block16:;
_161 = *(&local3);
_162 = ((frost$core$Object*) _161);
frost$core$Frost$unref$frost$core$Object$Q(_162);
*(&local3) = ((org$frostlang$frostc$MethodDecl*) NULL);
_165 = _49;
frost$core$Frost$unref$frost$core$Object$Q(_165);
_167 = *(&local2);
_168 = ((frost$core$Object*) _167);
frost$core$Frost$unref$frost$core$Object$Q(_168);
*(&local2) = ((org$frostlang$frostc$MethodDecl*) NULL);
goto block6;
block8:;
_172 = ((frost$core$Object*) _38);
frost$core$Frost$unref$frost$core$Object$Q(_172);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:73
_175 = ((frost$collections$CollectionWriter*) param2);
_176 = ((frost$core$Object*) param1);
ITable* $tmp30 = _175->$class->itable;
while ($tmp30->$class != (frost$core$Class*) &frost$collections$CollectionWriter$class) {
    $tmp30 = $tmp30->next;
}
_177 = $tmp30->methods[1];
_177(_175, _176);
return;

}
org$frostlang$frostc$Symbol* org$frostlang$frostc$SymbolTable$merge$org$frostlang$frostc$Symbol$Q$org$frostlang$frostc$Symbol$Q$R$org$frostlang$frostc$Symbol$Q(org$frostlang$frostc$SymbolTable* param0, org$frostlang$frostc$Symbol* param1, org$frostlang$frostc$Symbol* param2) {

frost$collections$Array* local0 = NULL;
org$frostlang$frostc$MethodDecl* local1 = NULL;
org$frostlang$frostc$MethodDecl* local2 = NULL;
org$frostlang$frostc$MethodDecl* local3 = NULL;
frost$collections$Array* local4 = NULL;
frost$collections$Array* local5 = NULL;
org$frostlang$frostc$MethodDecl* local6 = NULL;
frost$collections$Array* local7 = NULL;
bool _1;
frost$core$Bit _2;
bool _3;
frost$core$Object* _6;
bool _10;
frost$core$Bit _11;
bool _12;
frost$core$Object* _15;
bool _19;
frost$core$Bit _20;
bool _21;
frost$core$Object* _24;
bool _28;
frost$core$Bit _29;
bool _30;
frost$core$Int _32;
org$frostlang$frostc$Symbol* _35;
$fn31 _36;
frost$core$Bit _37;
bool _40;
bool _41;
frost$core$Bit _42;
bool _44;
frost$core$Object* _47;
bool _51;
frost$core$Bit _52;
bool _53;
frost$core$Int _55;
org$frostlang$frostc$Symbol* _58;
org$frostlang$frostc$Symbol$Kind* _59;
org$frostlang$frostc$Symbol$Kind _60;
frost$core$Int _61;
frost$core$Int _62;
int64_t _65;
int64_t _66;
bool _67;
frost$core$Bit _68;
bool _70;
bool _73;
frost$core$Bit _74;
bool _75;
frost$core$Int _77;
org$frostlang$frostc$Symbol* _80;
org$frostlang$frostc$Symbol$Kind* _81;
org$frostlang$frostc$Symbol$Kind _82;
frost$core$Int _83;
frost$core$Int _84;
int64_t _87;
int64_t _88;
bool _89;
frost$core$Bit _90;
bool _92;
frost$collections$Array* _95;
frost$collections$Array* _96;
frost$core$Object* _99;
frost$collections$Array* _101;
frost$core$Object* _102;
frost$core$Object* _105;
frost$collections$Array* _108;
frost$collections$Array* _109;
org$frostlang$frostc$MethodDecl* _110;
frost$core$Object* _111;
org$frostlang$frostc$Methods* _114;
org$frostlang$frostc$FixedArray** _115;
org$frostlang$frostc$FixedArray* _116;
frost$collections$Iterable* _117;
frost$collections$Iterable* _118;
$fn32 _119;
frost$collections$Iterator* _120;
frost$collections$Iterator* _121;
frost$collections$Iterator* _123;
$fn33 _124;
frost$core$Bit _125;
bool _126;
frost$collections$Iterator* _129;
$fn34 _130;
frost$core$Object* _131;
org$frostlang$frostc$MethodDecl* _132;
frost$core$Object* _133;
org$frostlang$frostc$MethodDecl* _135;
frost$core$Object* _136;
org$frostlang$frostc$MethodDecl* _140;
frost$collections$Array* _141;
frost$collections$List* _142;
frost$core$Object* _144;
org$frostlang$frostc$MethodDecl* _146;
frost$core$Object* _147;
frost$core$Object* _151;
org$frostlang$frostc$Methods* _154;
frost$collections$Array* _155;
frost$collections$ListView* _156;
org$frostlang$frostc$Symbol* _158;
frost$core$Object* _159;
frost$core$Object* _161;
frost$collections$Array* _163;
frost$core$Object* _164;
frost$core$Int _168;
int64_t _171;
int64_t _172;
bool _173;
frost$core$Bit _174;
bool _176;
frost$core$Weak** _179;
frost$core$Weak* _180;
frost$core$Weak* _181;
frost$core$Bit* _186;
frost$core$Bit _187;
bool _189;
frost$core$Int _191;
frost$core$Object** _195;
frost$core$Object* _196;
frost$core$Object* _197;
frost$core$Object* _198;
org$frostlang$frostc$Compiler* _201;
org$frostlang$frostc$MethodDecl* _202;
org$frostlang$frostc$MethodDecl* _203;
frost$core$Object* _205;
org$frostlang$frostc$MethodDecl* _207;
frost$core$Object* _208;
frost$core$Object* _211;
frost$core$Object* _213;
frost$core$Weak** _216;
frost$core$Weak* _217;
frost$core$Weak* _218;
frost$core$Bit* _223;
frost$core$Bit _224;
bool _226;
frost$core$Int _228;
frost$core$Object** _232;
frost$core$Object* _233;
frost$core$Object* _234;
frost$core$Object* _235;
org$frostlang$frostc$Compiler* _238;
org$frostlang$frostc$MethodDecl* _239;
org$frostlang$frostc$MethodDecl* _240;
frost$core$Object* _242;
org$frostlang$frostc$MethodDecl* _244;
frost$core$Object* _245;
frost$core$Object* _248;
frost$core$Object* _250;
org$frostlang$frostc$MethodDecl* _253;
org$frostlang$frostc$MethodDecl* _254;
bool _255;
frost$core$Bit _256;
bool _257;
org$frostlang$frostc$MethodDecl* _259;
org$frostlang$frostc$MethodDecl* _260;
bool _261;
frost$core$Bit _262;
bool _263;
org$frostlang$frostc$MethodDecl* _265;
bool _266;
frost$core$Bit _267;
bool _268;
org$frostlang$frostc$MethodDecl* _270;
org$frostlang$frostc$MethodDecl* _271;
bool _272;
frost$core$Bit _273;
bool _274;
frost$core$Object* _277;
org$frostlang$frostc$MethodDecl* _279;
frost$core$Object* _280;
org$frostlang$frostc$MethodDecl* _283;
frost$core$Object* _284;
org$frostlang$frostc$MethodDecl* _289;
org$frostlang$frostc$Annotations** _290;
org$frostlang$frostc$Annotations* _291;
frost$core$Int* _294;
frost$core$Int _295;
frost$core$Int _296;
int64_t _299;
int64_t _300;
int64_t _301;
frost$core$Int _302;
frost$core$Int _304;
int64_t _305;
int64_t _306;
bool _307;
frost$core$Bit _308;
bool _310;
org$frostlang$frostc$MethodDecl* _312;
frost$core$String* _313;
org$frostlang$frostc$MethodDecl* _314;
frost$core$String* _315;
frost$core$Bit _316;
bool _317;
frost$core$Object* _318;
frost$core$Object* _320;
frost$core$Object* _324;
org$frostlang$frostc$MethodDecl* _326;
frost$core$Object* _327;
org$frostlang$frostc$MethodDecl* _330;
frost$core$Object* _331;
frost$collections$Array* _336;
frost$collections$Array* _337;
frost$core$Object* _340;
frost$collections$Array* _342;
frost$core$Object* _343;
frost$core$Object* _346;
frost$collections$Array* _349;
frost$collections$Array* _350;
org$frostlang$frostc$MethodDecl* _351;
frost$core$Object* _352;
frost$collections$Array* _355;
frost$collections$Array* _356;
org$frostlang$frostc$MethodDecl* _357;
frost$core$Object* _358;
org$frostlang$frostc$Methods* _361;
frost$collections$Array* _362;
frost$collections$ListView* _363;
org$frostlang$frostc$Symbol* _365;
frost$core$Object* _366;
frost$core$Object* _368;
frost$collections$Array* _370;
frost$core$Object* _371;
org$frostlang$frostc$MethodDecl* _374;
frost$core$Object* _375;
org$frostlang$frostc$MethodDecl* _378;
frost$core$Object* _379;
frost$core$Object* _384;
frost$core$Int _388;
int64_t _391;
int64_t _392;
bool _393;
frost$core$Bit _394;
bool _396;
bool _399;
frost$core$Bit _400;
bool _401;
frost$core$Int _403;
org$frostlang$frostc$Symbol* _406;
org$frostlang$frostc$Symbol$Kind* _407;
org$frostlang$frostc$Symbol$Kind _408;
frost$core$Int _409;
frost$core$Int _410;
int64_t _413;
int64_t _414;
bool _415;
frost$core$Bit _416;
bool _418;
frost$collections$Array* _421;
frost$collections$Array* _422;
org$frostlang$frostc$Methods* _423;
org$frostlang$frostc$FixedArray** _424;
org$frostlang$frostc$FixedArray* _425;
frost$collections$CollectionView* _426;
frost$collections$CollectionView* _427;
frost$core$Object* _430;
frost$collections$Array* _432;
frost$core$Object* _433;
frost$core$Object* _436;
org$frostlang$frostc$Methods* _439;
org$frostlang$frostc$FixedArray** _440;
org$frostlang$frostc$FixedArray* _441;
frost$collections$Iterable* _442;
frost$collections$Iterable* _443;
$fn35 _444;
frost$collections$Iterator* _445;
frost$collections$Iterator* _446;
frost$collections$Iterator* _448;
$fn36 _449;
frost$core$Bit _450;
bool _451;
frost$collections$Iterator* _454;
$fn37 _455;
frost$core$Object* _456;
org$frostlang$frostc$MethodDecl* _457;
frost$core$Object* _458;
org$frostlang$frostc$MethodDecl* _460;
frost$core$Object* _461;
org$frostlang$frostc$MethodDecl* _465;
frost$collections$Array* _466;
frost$collections$List* _467;
frost$core$Object* _469;
org$frostlang$frostc$MethodDecl* _471;
frost$core$Object* _472;
frost$core$Object* _476;
org$frostlang$frostc$Methods* _479;
frost$collections$Array* _480;
frost$collections$ListView* _481;
org$frostlang$frostc$Symbol* _483;
frost$core$Object* _484;
frost$core$Object* _486;
frost$collections$Array* _488;
frost$core$Object* _489;
frost$core$Int _493;
int64_t _496;
int64_t _497;
bool _498;
frost$core$Bit _499;
bool _501;
frost$collections$Array* _504;
frost$collections$Array* _505;
org$frostlang$frostc$Methods* _506;
org$frostlang$frostc$FixedArray** _507;
org$frostlang$frostc$FixedArray* _508;
frost$collections$CollectionView* _509;
frost$collections$CollectionView* _510;
frost$core$Object* _513;
frost$collections$Array* _515;
frost$core$Object* _516;
frost$core$Object* _519;
org$frostlang$frostc$MethodDecl* _522;
frost$collections$Array* _523;
frost$collections$List* _524;
org$frostlang$frostc$Methods* _527;
frost$collections$Array* _528;
frost$collections$ListView* _529;
org$frostlang$frostc$Symbol* _531;
frost$core$Object* _532;
frost$core$Object* _534;
frost$collections$Array* _536;
frost$core$Object* _537;
frost$core$Object* _542;
frost$core$Object* _547;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:78
_1 = param2 == NULL;
_2 = (frost$core$Bit) {_1};
_3 = _2.value;
if (_3) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:79
_6 = ((frost$core$Object*) param1);
frost$core$Frost$ref$frost$core$Object$Q(_6);
return param1;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:81
_10 = param1 == NULL;
_11 = (frost$core$Bit) {_10};
_12 = _11.value;
if (_12) goto block3; else goto block4;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:82
_15 = ((frost$core$Object*) param2);
frost$core$Frost$ref$frost$core$Object$Q(_15);
return param2;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:84
_19 = param1 == param2;
_20 = (frost$core$Bit) {_19};
_21 = _20.value;
if (_21) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:85
_24 = ((frost$core$Object*) param1);
frost$core$Frost$ref$frost$core$Object$Q(_24);
return param1;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:87
_28 = param2 != NULL;
_29 = (frost$core$Bit) {_28};
_30 = _29.value;
if (_30) goto block9; else goto block10;
block10:;
_32 = (frost$core$Int) {87u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s38, _32, &$s39);
abort(); // unreachable
block9:;
_35 = param2;
_36 = ($fn40) _35->$class->vtable[2];
_37 = _36(_35);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from SymbolTable.frost:87:12
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
_40 = _37.value;
_41 = !_40;
_42 = (frost$core$Bit) {_41};
_44 = _42.value;
if (_44) goto block7; else goto block8;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:88
_47 = ((frost$core$Object*) param1);
frost$core$Frost$ref$frost$core$Object$Q(_47);
return param1;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:90
_51 = param1 != NULL;
_52 = (frost$core$Bit) {_51};
_53 = _52.value;
if (_53) goto block12; else goto block13;
block13:;
_55 = (frost$core$Int) {90u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s41, _55, &$s42);
abort(); // unreachable
block12:;
_58 = param1;
_59 = &_58->kind;
_60 = *_59;
_61 = _60.$rawValue;
_62 = (frost$core$Int) {5u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SymbolTable.frost:91:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_65 = _61.value;
_66 = _62.value;
_67 = _65 == _66;
_68 = (frost$core$Bit) {_67};
_70 = _68.value;
if (_70) goto block15; else goto block16;
block15:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:92
_73 = param2 != NULL;
_74 = (frost$core$Bit) {_73};
_75 = _74.value;
if (_75) goto block18; else goto block19;
block19:;
_77 = (frost$core$Int) {92u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s43, _77, &$s44);
abort(); // unreachable
block18:;
_80 = param2;
_81 = &_80->kind;
_82 = *_81;
_83 = _82.$rawValue;
_84 = (frost$core$Int) {6u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SymbolTable.frost:93:37
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_87 = _83.value;
_88 = _84.value;
_89 = _87 == _88;
_90 = (frost$core$Bit) {_89};
_92 = _90.value;
if (_92) goto block21; else goto block22;
block21:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:94
FROST_ASSERT(40 == sizeof(frost$collections$Array));
_95 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
_96 = _95;
frost$collections$Array$init(_96);
*(&local0) = ((frost$collections$Array*) NULL);
_99 = ((frost$core$Object*) _95);
frost$core$Frost$ref$frost$core$Object$Q(_99);
_101 = *(&local0);
_102 = ((frost$core$Object*) _101);
frost$core$Frost$unref$frost$core$Object$Q(_102);
*(&local0) = _95;
_105 = ((frost$core$Object*) _95);
frost$core$Frost$unref$frost$core$Object$Q(_105);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:95
_108 = *(&local0);
_109 = _108;
_110 = ((org$frostlang$frostc$MethodDecl*) param1);
_111 = ((frost$core$Object*) _110);
frost$collections$Array$add$frost$collections$Array$T(_109, _111);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:96
_114 = ((org$frostlang$frostc$Methods*) param2);
_115 = &_114->methods;
_116 = *_115;
_117 = ((frost$collections$Iterable*) _116);
_118 = _117;
ITable* $tmp45 = _118->$class->itable;
while ($tmp45->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp45 = $tmp45->next;
}
_119 = $tmp45->methods[0];
_120 = _119(_118);
_121 = _120;
goto block24;
block24:;
_123 = _121;
ITable* $tmp46 = _123->$class->itable;
while ($tmp46->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp46 = $tmp46->next;
}
_124 = $tmp46->methods[0];
_125 = _124(_123);
_126 = _125.value;
if (_126) goto block26; else goto block25;
block25:;
*(&local1) = ((org$frostlang$frostc$MethodDecl*) NULL);
_129 = _121;
ITable* $tmp47 = _129->$class->itable;
while ($tmp47->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp47 = $tmp47->next;
}
_130 = $tmp47->methods[1];
_131 = _130(_129);
_132 = ((org$frostlang$frostc$MethodDecl*) _131);
_133 = ((frost$core$Object*) _132);
frost$core$Frost$ref$frost$core$Object$Q(_133);
_135 = *(&local1);
_136 = ((frost$core$Object*) _135);
frost$core$Frost$unref$frost$core$Object$Q(_136);
*(&local1) = _132;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:97
_140 = *(&local1);
_141 = *(&local0);
_142 = ((frost$collections$List*) _141);
org$frostlang$frostc$SymbolTable$addIfNotOverridden$org$frostlang$frostc$MethodDecl$frost$collections$List$LTorg$frostlang$frostc$MethodDecl$GT(param0, _140, _142);
_144 = _131;
frost$core$Frost$unref$frost$core$Object$Q(_144);
_146 = *(&local1);
_147 = ((frost$core$Object*) _146);
frost$core$Frost$unref$frost$core$Object$Q(_147);
*(&local1) = ((org$frostlang$frostc$MethodDecl*) NULL);
goto block24;
block26:;
_151 = ((frost$core$Object*) _120);
frost$core$Frost$unref$frost$core$Object$Q(_151);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:99
FROST_ASSERT(64 == sizeof(org$frostlang$frostc$Methods));
_154 = (org$frostlang$frostc$Methods*) frostObjectAlloc(64, (frost$core$Class*) &org$frostlang$frostc$Methods$class);
_155 = *(&local0);
_156 = ((frost$collections$ListView*) _155);
org$frostlang$frostc$Methods$init$frost$collections$ListView$LTorg$frostlang$frostc$MethodDecl$GT(_154, _156);
_158 = ((org$frostlang$frostc$Symbol*) _154);
_159 = ((frost$core$Object*) _158);
frost$core$Frost$ref$frost$core$Object$Q(_159);
_161 = ((frost$core$Object*) _154);
frost$core$Frost$unref$frost$core$Object$Q(_161);
_163 = *(&local0);
_164 = ((frost$core$Object*) _163);
frost$core$Frost$unref$frost$core$Object$Q(_164);
*(&local0) = ((frost$collections$Array*) NULL);
return _158;
block22:;
_168 = (frost$core$Int) {5u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SymbolTable.frost:101:37
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_171 = _83.value;
_172 = _168.value;
_173 = _171 == _172;
_174 = (frost$core$Bit) {_173};
_176 = _174.value;
if (_176) goto block27; else goto block28;
block27:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:102
_179 = &param0->compiler;
_180 = *_179;
_181 = _180;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from SymbolTable.frost:102:44
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:16
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.stub:16:9
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:21
_186 = &_181->_valid;
_187 = *_186;
_189 = _187.value;
if (_189) goto block32; else goto block33;
block33:;
_191 = (frost$core$Int) {16u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s48, _191);
abort(); // unreachable
block32:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:17
_195 = &_181->value;
_196 = *_195;
_197 = _196;
_198 = _197;
frost$core$Frost$ref$frost$core$Object$Q(_198);
_201 = ((org$frostlang$frostc$Compiler*) _197);
_202 = ((org$frostlang$frostc$MethodDecl*) param2);
_203 = org$frostlang$frostc$Compiler$getOverriddenMethod$org$frostlang$frostc$MethodDecl$R$org$frostlang$frostc$MethodDecl$Q(_201, _202);
*(&local2) = ((org$frostlang$frostc$MethodDecl*) NULL);
_205 = ((frost$core$Object*) _203);
frost$core$Frost$ref$frost$core$Object$Q(_205);
_207 = *(&local2);
_208 = ((frost$core$Object*) _207);
frost$core$Frost$unref$frost$core$Object$Q(_208);
*(&local2) = _203;
_211 = ((frost$core$Object*) _203);
frost$core$Frost$unref$frost$core$Object$Q(_211);
_213 = _197;
frost$core$Frost$unref$frost$core$Object$Q(_213);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:103
_216 = &param0->compiler;
_217 = *_216;
_218 = _217;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from SymbolTable.frost:103:44
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:16
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.stub:16:9
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:21
_223 = &_218->_valid;
_224 = *_223;
_226 = _224.value;
if (_226) goto block36; else goto block37;
block37:;
_228 = (frost$core$Int) {16u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s49, _228);
abort(); // unreachable
block36:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:17
_232 = &_218->value;
_233 = *_232;
_234 = _233;
_235 = _234;
frost$core$Frost$ref$frost$core$Object$Q(_235);
_238 = ((org$frostlang$frostc$Compiler*) _234);
_239 = ((org$frostlang$frostc$MethodDecl*) param1);
_240 = org$frostlang$frostc$Compiler$getOverriddenMethod$org$frostlang$frostc$MethodDecl$R$org$frostlang$frostc$MethodDecl$Q(_238, _239);
*(&local3) = ((org$frostlang$frostc$MethodDecl*) NULL);
_242 = ((frost$core$Object*) _240);
frost$core$Frost$ref$frost$core$Object$Q(_242);
_244 = *(&local3);
_245 = ((frost$core$Object*) _244);
frost$core$Frost$unref$frost$core$Object$Q(_245);
*(&local3) = _240;
_248 = ((frost$core$Object*) _240);
frost$core$Frost$unref$frost$core$Object$Q(_248);
_250 = _234;
frost$core$Frost$unref$frost$core$Object$Q(_250);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:104
_253 = *(&local2);
_254 = ((org$frostlang$frostc$MethodDecl*) param1);
_255 = _253 == _254;
_256 = (frost$core$Bit) {_255};
_257 = _256.value;
if (_257) goto block38; else goto block41;
block41:;
_259 = *(&local3);
_260 = ((org$frostlang$frostc$MethodDecl*) param2);
_261 = _259 == _260;
_262 = (frost$core$Bit) {_261};
_263 = _262.value;
if (_263) goto block38; else goto block40;
block40:;
_265 = *(&local2);
_266 = _265 != NULL;
_267 = (frost$core$Bit) {_266};
_268 = _267.value;
if (_268) goto block42; else goto block39;
block42:;
_270 = *(&local2);
_271 = *(&local3);
_272 = _270 == _271;
_273 = (frost$core$Bit) {_272};
_274 = _273.value;
if (_274) goto block38; else goto block39;
block38:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:107
_277 = ((frost$core$Object*) param1);
frost$core$Frost$ref$frost$core$Object$Q(_277);
_279 = *(&local3);
_280 = ((frost$core$Object*) _279);
frost$core$Frost$unref$frost$core$Object$Q(_280);
*(&local3) = ((org$frostlang$frostc$MethodDecl*) NULL);
_283 = *(&local2);
_284 = ((frost$core$Object*) _283);
frost$core$Frost$unref$frost$core$Object$Q(_284);
*(&local2) = ((org$frostlang$frostc$MethodDecl*) NULL);
return param1;
block39:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:109
_289 = ((org$frostlang$frostc$MethodDecl*) param2);
_290 = &_289->annotations;
_291 = *_290;
// begin inline call to function org.frostlang.frostc.Annotations.get_isDefault():frost.core.Bit from SymbolTable.frost:109:37
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:166
_294 = &_291->flags;
_295 = *_294;
_296 = (frost$core$Int) {32768u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:166:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:293
_299 = _295.value;
_300 = _296.value;
_301 = _299 & _300;
_302 = (frost$core$Int) {_301};
_304 = (frost$core$Int) {0u};
_305 = _302.value;
_306 = _304.value;
_307 = _305 != _306;
_308 = (frost$core$Bit) {_307};
_310 = _308.value;
if (_310) goto block45; else goto block44;
block45:;
_312 = ((org$frostlang$frostc$MethodDecl*) param2);
_313 = org$frostlang$frostc$MethodDecl$get_signature$R$frost$core$String(_312);
_314 = ((org$frostlang$frostc$MethodDecl*) param1);
_315 = org$frostlang$frostc$MethodDecl$get_signature$R$frost$core$String(_314);
_316 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(_313, _315);
_317 = _316.value;
_318 = ((frost$core$Object*) _315);
frost$core$Frost$unref$frost$core$Object$Q(_318);
_320 = ((frost$core$Object*) _313);
frost$core$Frost$unref$frost$core$Object$Q(_320);
if (_317) goto block43; else goto block44;
block43:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:111
_324 = ((frost$core$Object*) param1);
frost$core$Frost$ref$frost$core$Object$Q(_324);
_326 = *(&local3);
_327 = ((frost$core$Object*) _326);
frost$core$Frost$unref$frost$core$Object$Q(_327);
*(&local3) = ((org$frostlang$frostc$MethodDecl*) NULL);
_330 = *(&local2);
_331 = ((frost$core$Object*) _330);
frost$core$Frost$unref$frost$core$Object$Q(_331);
*(&local2) = ((org$frostlang$frostc$MethodDecl*) NULL);
return param1;
block44:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:113
FROST_ASSERT(40 == sizeof(frost$collections$Array));
_336 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
_337 = _336;
frost$collections$Array$init(_337);
*(&local4) = ((frost$collections$Array*) NULL);
_340 = ((frost$core$Object*) _336);
frost$core$Frost$ref$frost$core$Object$Q(_340);
_342 = *(&local4);
_343 = ((frost$core$Object*) _342);
frost$core$Frost$unref$frost$core$Object$Q(_343);
*(&local4) = _336;
_346 = ((frost$core$Object*) _336);
frost$core$Frost$unref$frost$core$Object$Q(_346);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:114
_349 = *(&local4);
_350 = _349;
_351 = ((org$frostlang$frostc$MethodDecl*) param1);
_352 = ((frost$core$Object*) _351);
frost$collections$Array$add$frost$collections$Array$T(_350, _352);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:115
_355 = *(&local4);
_356 = _355;
_357 = ((org$frostlang$frostc$MethodDecl*) param2);
_358 = ((frost$core$Object*) _357);
frost$collections$Array$add$frost$collections$Array$T(_356, _358);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:116
FROST_ASSERT(64 == sizeof(org$frostlang$frostc$Methods));
_361 = (org$frostlang$frostc$Methods*) frostObjectAlloc(64, (frost$core$Class*) &org$frostlang$frostc$Methods$class);
_362 = *(&local4);
_363 = ((frost$collections$ListView*) _362);
org$frostlang$frostc$Methods$init$frost$collections$ListView$LTorg$frostlang$frostc$MethodDecl$GT(_361, _363);
_365 = ((org$frostlang$frostc$Symbol*) _361);
_366 = ((frost$core$Object*) _365);
frost$core$Frost$ref$frost$core$Object$Q(_366);
_368 = ((frost$core$Object*) _361);
frost$core$Frost$unref$frost$core$Object$Q(_368);
_370 = *(&local4);
_371 = ((frost$core$Object*) _370);
frost$core$Frost$unref$frost$core$Object$Q(_371);
*(&local4) = ((frost$collections$Array*) NULL);
_374 = *(&local3);
_375 = ((frost$core$Object*) _374);
frost$core$Frost$unref$frost$core$Object$Q(_375);
*(&local3) = ((org$frostlang$frostc$MethodDecl*) NULL);
_378 = *(&local2);
_379 = ((frost$core$Object*) _378);
frost$core$Frost$unref$frost$core$Object$Q(_379);
*(&local2) = ((org$frostlang$frostc$MethodDecl*) NULL);
return _365;
block28:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:119
_384 = ((frost$core$Object*) param1);
frost$core$Frost$ref$frost$core$Object$Q(_384);
return param1;
block20:;
goto block14;
block16:;
_388 = (frost$core$Int) {6u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SymbolTable.frost:123:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_391 = _61.value;
_392 = _388.value;
_393 = _391 == _392;
_394 = (frost$core$Bit) {_393};
_396 = _394.value;
if (_396) goto block48; else goto block49;
block48:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:124
_399 = param2 != NULL;
_400 = (frost$core$Bit) {_399};
_401 = _400.value;
if (_401) goto block51; else goto block52;
block52:;
_403 = (frost$core$Int) {124u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s50, _403, &$s51);
abort(); // unreachable
block51:;
_406 = param2;
_407 = &_406->kind;
_408 = *_407;
_409 = _408.$rawValue;
_410 = (frost$core$Int) {6u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SymbolTable.frost:125:37
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_413 = _409.value;
_414 = _410.value;
_415 = _413 == _414;
_416 = (frost$core$Bit) {_415};
_418 = _416.value;
if (_418) goto block54; else goto block55;
block54:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:126
FROST_ASSERT(40 == sizeof(frost$collections$Array));
_421 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
_422 = _421;
_423 = ((org$frostlang$frostc$Methods*) param1);
_424 = &_423->methods;
_425 = *_424;
_426 = ((frost$collections$CollectionView*) _425);
_427 = _426;
frost$collections$Array$init$frost$collections$CollectionView$LTfrost$collections$Array$T$GT(_422, _427);
*(&local5) = ((frost$collections$Array*) NULL);
_430 = ((frost$core$Object*) _421);
frost$core$Frost$ref$frost$core$Object$Q(_430);
_432 = *(&local5);
_433 = ((frost$core$Object*) _432);
frost$core$Frost$unref$frost$core$Object$Q(_433);
*(&local5) = _421;
_436 = ((frost$core$Object*) _421);
frost$core$Frost$unref$frost$core$Object$Q(_436);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:127
_439 = ((org$frostlang$frostc$Methods*) param2);
_440 = &_439->methods;
_441 = *_440;
_442 = ((frost$collections$Iterable*) _441);
_443 = _442;
ITable* $tmp52 = _443->$class->itable;
while ($tmp52->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp52 = $tmp52->next;
}
_444 = $tmp52->methods[0];
_445 = _444(_443);
_446 = _445;
goto block57;
block57:;
_448 = _446;
ITable* $tmp53 = _448->$class->itable;
while ($tmp53->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp53 = $tmp53->next;
}
_449 = $tmp53->methods[0];
_450 = _449(_448);
_451 = _450.value;
if (_451) goto block59; else goto block58;
block58:;
*(&local6) = ((org$frostlang$frostc$MethodDecl*) NULL);
_454 = _446;
ITable* $tmp54 = _454->$class->itable;
while ($tmp54->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp54 = $tmp54->next;
}
_455 = $tmp54->methods[1];
_456 = _455(_454);
_457 = ((org$frostlang$frostc$MethodDecl*) _456);
_458 = ((frost$core$Object*) _457);
frost$core$Frost$ref$frost$core$Object$Q(_458);
_460 = *(&local6);
_461 = ((frost$core$Object*) _460);
frost$core$Frost$unref$frost$core$Object$Q(_461);
*(&local6) = _457;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:128
_465 = *(&local6);
_466 = *(&local5);
_467 = ((frost$collections$List*) _466);
org$frostlang$frostc$SymbolTable$addIfNotOverridden$org$frostlang$frostc$MethodDecl$frost$collections$List$LTorg$frostlang$frostc$MethodDecl$GT(param0, _465, _467);
_469 = _456;
frost$core$Frost$unref$frost$core$Object$Q(_469);
_471 = *(&local6);
_472 = ((frost$core$Object*) _471);
frost$core$Frost$unref$frost$core$Object$Q(_472);
*(&local6) = ((org$frostlang$frostc$MethodDecl*) NULL);
goto block57;
block59:;
_476 = ((frost$core$Object*) _445);
frost$core$Frost$unref$frost$core$Object$Q(_476);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:130
FROST_ASSERT(64 == sizeof(org$frostlang$frostc$Methods));
_479 = (org$frostlang$frostc$Methods*) frostObjectAlloc(64, (frost$core$Class*) &org$frostlang$frostc$Methods$class);
_480 = *(&local5);
_481 = ((frost$collections$ListView*) _480);
org$frostlang$frostc$Methods$init$frost$collections$ListView$LTorg$frostlang$frostc$MethodDecl$GT(_479, _481);
_483 = ((org$frostlang$frostc$Symbol*) _479);
_484 = ((frost$core$Object*) _483);
frost$core$Frost$ref$frost$core$Object$Q(_484);
_486 = ((frost$core$Object*) _479);
frost$core$Frost$unref$frost$core$Object$Q(_486);
_488 = *(&local5);
_489 = ((frost$core$Object*) _488);
frost$core$Frost$unref$frost$core$Object$Q(_489);
*(&local5) = ((frost$collections$Array*) NULL);
return _483;
block55:;
_493 = (frost$core$Int) {5u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SymbolTable.frost:132:37
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_496 = _409.value;
_497 = _493.value;
_498 = _496 == _497;
_499 = (frost$core$Bit) {_498};
_501 = _499.value;
if (_501) goto block60; else goto block61;
block60:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:133
FROST_ASSERT(40 == sizeof(frost$collections$Array));
_504 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
_505 = _504;
_506 = ((org$frostlang$frostc$Methods*) param1);
_507 = &_506->methods;
_508 = *_507;
_509 = ((frost$collections$CollectionView*) _508);
_510 = _509;
frost$collections$Array$init$frost$collections$CollectionView$LTfrost$collections$Array$T$GT(_505, _510);
*(&local7) = ((frost$collections$Array*) NULL);
_513 = ((frost$core$Object*) _504);
frost$core$Frost$ref$frost$core$Object$Q(_513);
_515 = *(&local7);
_516 = ((frost$core$Object*) _515);
frost$core$Frost$unref$frost$core$Object$Q(_516);
*(&local7) = _504;
_519 = ((frost$core$Object*) _504);
frost$core$Frost$unref$frost$core$Object$Q(_519);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:134
_522 = ((org$frostlang$frostc$MethodDecl*) param2);
_523 = *(&local7);
_524 = ((frost$collections$List*) _523);
org$frostlang$frostc$SymbolTable$addIfNotOverridden$org$frostlang$frostc$MethodDecl$frost$collections$List$LTorg$frostlang$frostc$MethodDecl$GT(param0, _522, _524);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:135
FROST_ASSERT(64 == sizeof(org$frostlang$frostc$Methods));
_527 = (org$frostlang$frostc$Methods*) frostObjectAlloc(64, (frost$core$Class*) &org$frostlang$frostc$Methods$class);
_528 = *(&local7);
_529 = ((frost$collections$ListView*) _528);
org$frostlang$frostc$Methods$init$frost$collections$ListView$LTorg$frostlang$frostc$MethodDecl$GT(_527, _529);
_531 = ((org$frostlang$frostc$Symbol*) _527);
_532 = ((frost$core$Object*) _531);
frost$core$Frost$ref$frost$core$Object$Q(_532);
_534 = ((frost$core$Object*) _527);
frost$core$Frost$unref$frost$core$Object$Q(_534);
_536 = *(&local7);
_537 = ((frost$core$Object*) _536);
frost$core$Frost$unref$frost$core$Object$Q(_537);
*(&local7) = ((frost$collections$Array*) NULL);
return _531;
block61:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:138
_542 = ((frost$core$Object*) param1);
frost$core$Frost$ref$frost$core$Object$Q(_542);
return param1;
block53:;
goto block14;
block49:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:143
_547 = ((frost$core$Object*) param1);
frost$core$Frost$ref$frost$core$Object$Q(_547);
return param1;
block14:;
goto block63;
block63:;

}
org$frostlang$frostc$Symbol* org$frostlang$frostc$SymbolTable$$IDX$frost$core$String$R$org$frostlang$frostc$Symbol$Q(org$frostlang$frostc$SymbolTable* param0, frost$core$String* param1) {

org$frostlang$frostc$Symbol* local0 = NULL;
org$frostlang$frostc$SymbolTable* local1 = NULL;
frost$collections$HashMap** _1;
frost$collections$HashMap* _2;
frost$collections$HashMap* _3;
frost$collections$HashKey* _4;
frost$core$Object* _5;
org$frostlang$frostc$Symbol* _6;
frost$core$Object* _8;
org$frostlang$frostc$Symbol* _10;
frost$core$Object* _11;
frost$core$Object* _14;
org$frostlang$frostc$Symbol* _17;
bool _18;
frost$core$Bit _19;
bool _20;
frost$collections$HashMap** _23;
frost$collections$HashMap* _24;
frost$collections$HashMap* _25;
frost$collections$HashKey* _26;
frost$core$Object* _27;
org$frostlang$frostc$Symbol* _28;
frost$core$Object* _29;
org$frostlang$frostc$Symbol* _31;
frost$core$Object* _32;
frost$core$Object* _35;
frost$collections$Array** _38;
frost$collections$Array* _39;
frost$collections$Iterable* _40;
frost$collections$Iterable* _41;
$fn55 _42;
frost$collections$Iterator* _43;
frost$collections$Iterator* _44;
frost$collections$Iterator* _46;
$fn56 _47;
frost$core$Bit _48;
bool _49;
frost$collections$Iterator* _52;
$fn57 _53;
frost$core$Object* _54;
org$frostlang$frostc$SymbolTable* _55;
frost$core$Object* _56;
org$frostlang$frostc$SymbolTable* _58;
frost$core$Object* _59;
org$frostlang$frostc$Symbol* _63;
org$frostlang$frostc$SymbolTable* _64;
org$frostlang$frostc$Symbol* _65;
org$frostlang$frostc$Symbol* _66;
frost$core$Object* _67;
org$frostlang$frostc$Symbol* _69;
frost$core$Object* _70;
frost$core$Object* _73;
frost$core$Object* _75;
frost$core$Object* _77;
org$frostlang$frostc$SymbolTable* _79;
frost$core$Object* _80;
frost$core$Object* _84;
org$frostlang$frostc$Symbol* _87;
bool _88;
frost$core$Bit _89;
bool _90;
frost$collections$HashMap** _93;
frost$collections$HashMap* _94;
frost$collections$HashMap* _95;
frost$collections$HashKey* _96;
org$frostlang$frostc$Symbol* _97;
bool _98;
frost$core$Bit _99;
bool _100;
frost$core$Int _102;
org$frostlang$frostc$Symbol* _105;
frost$core$Object* _106;
org$frostlang$frostc$Symbol* _111;
frost$core$Object* _112;
org$frostlang$frostc$Symbol* _114;
frost$core$Object* _115;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:149
_1 = &param0->merged;
_2 = *_1;
_3 = _2;
_4 = ((frost$collections$HashKey*) param1);
_5 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q(_3, _4);
_6 = ((org$frostlang$frostc$Symbol*) _5);
*(&local0) = ((org$frostlang$frostc$Symbol*) NULL);
_8 = ((frost$core$Object*) _6);
frost$core$Frost$ref$frost$core$Object$Q(_8);
_10 = *(&local0);
_11 = ((frost$core$Object*) _10);
frost$core$Frost$unref$frost$core$Object$Q(_11);
*(&local0) = _6;
_14 = _5;
frost$core$Frost$unref$frost$core$Object$Q(_14);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:150
_17 = *(&local0);
_18 = _17 == NULL;
_19 = (frost$core$Bit) {_18};
_20 = _19.value;
if (_20) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:151
_23 = &param0->symbols;
_24 = *_23;
_25 = _24;
_26 = ((frost$collections$HashKey*) param1);
_27 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q(_25, _26);
_28 = ((org$frostlang$frostc$Symbol*) _27);
_29 = ((frost$core$Object*) _28);
frost$core$Frost$ref$frost$core$Object$Q(_29);
_31 = *(&local0);
_32 = ((frost$core$Object*) _31);
frost$core$Frost$unref$frost$core$Object$Q(_32);
*(&local0) = _28;
_35 = _27;
frost$core$Frost$unref$frost$core$Object$Q(_35);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:152
_38 = &param0->parents;
_39 = *_38;
_40 = ((frost$collections$Iterable*) _39);
_41 = _40;
ITable* $tmp58 = _41->$class->itable;
while ($tmp58->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp58 = $tmp58->next;
}
_42 = $tmp58->methods[0];
_43 = _42(_41);
_44 = _43;
goto block3;
block3:;
_46 = _44;
ITable* $tmp59 = _46->$class->itable;
while ($tmp59->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp59 = $tmp59->next;
}
_47 = $tmp59->methods[0];
_48 = _47(_46);
_49 = _48.value;
if (_49) goto block5; else goto block4;
block4:;
*(&local1) = ((org$frostlang$frostc$SymbolTable*) NULL);
_52 = _44;
ITable* $tmp60 = _52->$class->itable;
while ($tmp60->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp60 = $tmp60->next;
}
_53 = $tmp60->methods[1];
_54 = _53(_52);
_55 = ((org$frostlang$frostc$SymbolTable*) _54);
_56 = ((frost$core$Object*) _55);
frost$core$Frost$ref$frost$core$Object$Q(_56);
_58 = *(&local1);
_59 = ((frost$core$Object*) _58);
frost$core$Frost$unref$frost$core$Object$Q(_59);
*(&local1) = _55;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:153
_63 = *(&local0);
_64 = *(&local1);
_65 = org$frostlang$frostc$SymbolTable$$IDX$frost$core$String$R$org$frostlang$frostc$Symbol$Q(_64, param1);
_66 = org$frostlang$frostc$SymbolTable$merge$org$frostlang$frostc$Symbol$Q$org$frostlang$frostc$Symbol$Q$R$org$frostlang$frostc$Symbol$Q(param0, _63, _65);
_67 = ((frost$core$Object*) _66);
frost$core$Frost$ref$frost$core$Object$Q(_67);
_69 = *(&local0);
_70 = ((frost$core$Object*) _69);
frost$core$Frost$unref$frost$core$Object$Q(_70);
*(&local0) = _66;
_73 = ((frost$core$Object*) _66);
frost$core$Frost$unref$frost$core$Object$Q(_73);
_75 = ((frost$core$Object*) _65);
frost$core$Frost$unref$frost$core$Object$Q(_75);
_77 = _54;
frost$core$Frost$unref$frost$core$Object$Q(_77);
_79 = *(&local1);
_80 = ((frost$core$Object*) _79);
frost$core$Frost$unref$frost$core$Object$Q(_80);
*(&local1) = ((org$frostlang$frostc$SymbolTable*) NULL);
goto block3;
block5:;
_84 = ((frost$core$Object*) _43);
frost$core$Frost$unref$frost$core$Object$Q(_84);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:155
_87 = *(&local0);
_88 = _87 != NULL;
_89 = (frost$core$Bit) {_88};
_90 = _89.value;
if (_90) goto block6; else goto block7;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:156
_93 = &param0->merged;
_94 = *_93;
_95 = _94;
_96 = ((frost$collections$HashKey*) param1);
_97 = *(&local0);
_98 = _97 != NULL;
_99 = (frost$core$Bit) {_98};
_100 = _99.value;
if (_100) goto block8; else goto block9;
block9:;
_102 = (frost$core$Int) {156u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s61, _102, &$s62);
abort(); // unreachable
block8:;
_105 = _97;
_106 = ((frost$core$Object*) _105);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V(_95, _96, _106);
goto block7;
block7:;
goto block2;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:159
_111 = *(&local0);
_112 = ((frost$core$Object*) _111);
frost$core$Frost$ref$frost$core$Object$Q(_112);
_114 = *(&local0);
_115 = ((frost$core$Object*) _114);
frost$core$Frost$unref$frost$core$Object$Q(_115);
*(&local0) = ((org$frostlang$frostc$Symbol*) NULL);
return _111;

}
frost$core$String* org$frostlang$frostc$SymbolTable$get_asString$R$frost$core$String(org$frostlang$frostc$SymbolTable* param0) {

frost$collections$Array** _1;
frost$collections$Array* _2;
frost$collections$CollectionView* _3;
$fn63 _4;
frost$core$Int _5;
frost$core$Object* _6;
$fn64 _9;
frost$core$String* _10;
frost$core$String* _11;
frost$core$Object* _12;
frost$core$Object* _14;
frost$core$Object* _16;
frost$core$String* _19;
frost$collections$HashMap** _20;
frost$collections$HashMap* _21;
frost$core$Object* _22;
$fn65 _25;
frost$core$String* _26;
frost$core$String* _27;
frost$core$Object* _28;
frost$core$Object* _30;
frost$core$Object* _32;
frost$core$String* _35;
frost$core$Object* _36;
frost$core$Object* _38;
frost$core$Object* _40;
frost$core$Object* _42;
frost$core$Object* _44;
frost$core$Object* _46;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:164
_1 = &param0->parents;
_2 = *_1;
_3 = ((frost$collections$CollectionView*) _2);
ITable* $tmp66 = _3->$class->itable;
while ($tmp66->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp66 = $tmp66->next;
}
_4 = $tmp66->methods[0];
_5 = _4(_3);
frost$core$Int$wrapper* $tmp67;
$tmp67 = (frost$core$Int$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp67->value = _5;
_6 = ((frost$core$Object*) $tmp67);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from SymbolTable.frost:164:16
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:155
_9 = ($fn68) _6->$class->vtable[0];
_10 = _9(_6);
_11 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s69, _10);
_12 = ((frost$core$Object*) _11);
frost$core$Frost$ref$frost$core$Object$Q(_12);
_14 = ((frost$core$Object*) _11);
frost$core$Frost$unref$frost$core$Object$Q(_14);
_16 = ((frost$core$Object*) _10);
frost$core$Frost$unref$frost$core$Object$Q(_16);
_19 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_11, &$s70);
_20 = &param0->symbols;
_21 = *_20;
_22 = ((frost$core$Object*) _21);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from SymbolTable.frost:164:16
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:155
_25 = ($fn71) _22->$class->vtable[0];
_26 = _25(_22);
_27 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_19, _26);
_28 = ((frost$core$Object*) _27);
frost$core$Frost$ref$frost$core$Object$Q(_28);
_30 = ((frost$core$Object*) _27);
frost$core$Frost$unref$frost$core$Object$Q(_30);
_32 = ((frost$core$Object*) _26);
frost$core$Frost$unref$frost$core$Object$Q(_32);
_35 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_27, &$s72);
_36 = ((frost$core$Object*) _35);
frost$core$Frost$ref$frost$core$Object$Q(_36);
_38 = ((frost$core$Object*) _35);
frost$core$Frost$unref$frost$core$Object$Q(_38);
_40 = ((frost$core$Object*) _27);
frost$core$Frost$unref$frost$core$Object$Q(_40);
_42 = ((frost$core$Object*) _19);
frost$core$Frost$unref$frost$core$Object$Q(_42);
_44 = ((frost$core$Object*) _11);
frost$core$Frost$unref$frost$core$Object$Q(_44);
_46 = _6;
frost$core$Frost$unref$frost$core$Object$Q(_46);
return _35;

}
void org$frostlang$frostc$SymbolTable$cleanup(org$frostlang$frostc$SymbolTable* param0) {

frost$core$Object* _1;
frost$collections$HashMap** _3;
frost$collections$HashMap* _4;
frost$core$Object* _5;
frost$core$Weak** _7;
frost$core$Weak* _8;
frost$core$Object* _9;
frost$collections$HashMap** _11;
frost$collections$HashMap* _12;
frost$core$Object* _13;
frost$collections$Array** _15;
frost$collections$Array* _16;
frost$core$Object* _17;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:4
_1 = ((frost$core$Object*) param0);
frost$core$Object$cleanup(_1);
_3 = &param0->symbols;
_4 = *_3;
_5 = ((frost$core$Object*) _4);
frost$core$Frost$unref$frost$core$Object$Q(_5);
_7 = &param0->compiler;
_8 = *_7;
_9 = ((frost$core$Object*) _8);
frost$core$Frost$unref$frost$core$Object$Q(_9);
_11 = &param0->merged;
_12 = *_11;
_13 = ((frost$core$Object*) _12);
frost$core$Frost$unref$frost$core$Object$Q(_13);
_15 = &param0->parents;
_16 = *_15;
_17 = ((frost$core$Object*) _16);
frost$core$Frost$unref$frost$core$Object$Q(_17);
return;

}






