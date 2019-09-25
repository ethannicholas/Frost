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

frost$unsafe$Pointer frost$unsafe$Pointer$init$builtin_int(int64_t p_value);

static frost$core$String $s1;
org$frostlang$frostc$SymbolTable$class_type org$frostlang$frostc$SymbolTable$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { org$frostlang$frostc$SymbolTable$get_asString$R$frost$core$String, org$frostlang$frostc$SymbolTable$cleanup, org$frostlang$frostc$SymbolTable$add$org$frostlang$frostc$Symbol, org$frostlang$frostc$SymbolTable$add$org$frostlang$frostc$Symbol$frost$core$String, org$frostlang$frostc$SymbolTable$addIfNotOverridden$org$frostlang$frostc$MethodDecl$frost$collections$List$LTorg$frostlang$frostc$MethodDecl$GT, org$frostlang$frostc$SymbolTable$merge$org$frostlang$frostc$Symbol$Q$org$frostlang$frostc$Symbol$Q$R$org$frostlang$frostc$Symbol$Q, org$frostlang$frostc$SymbolTable$$IDX$frost$core$String$R$org$frostlang$frostc$Symbol$Q} };

typedef frost$core$Bit (*$fn4)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$String* (*$fn5)(frost$core$Object*);
typedef frost$core$String* (*$fn18)(frost$core$Object*);
typedef frost$core$Bit (*$fn20)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$collections$Iterator* (*$fn21)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn22)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn23)(frost$collections$Iterator*);
typedef void (*$fn24)(frost$collections$CollectionWriter*, frost$core$Object*);
typedef frost$core$Bit (*$fn34)(org$frostlang$frostc$Symbol*);
typedef frost$collections$Iterator* (*$fn35)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn36)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn37)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn38)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn39)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn40)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn43)(org$frostlang$frostc$Symbol*);
typedef frost$collections$Iterator* (*$fn60)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn61)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn62)(frost$collections$Iterator*);
typedef frost$core$Int (*$fn68)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn69)(frost$core$Object*);
typedef frost$core$String* (*$fn70)(frost$core$Object*);
typedef frost$core$String* (*$fn73)(frost$core$Object*);
typedef frost$core$String* (*$fn76)(frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x79\x6d\x62\x6f\x6c\x54\x61\x62\x6c\x65", 32, 8199553873176202496, NULL };
static frost$core$String $s2 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s3 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x64\x65\x72\x65\x66\x65\x72\x65\x6e\x63\x69\x6e\x67\x20\x77\x65\x61\x6b\x20\x70\x6f\x69\x6e\x74\x65\x72\x20\x61\x66\x74\x65\x72\x20\x69\x74\x73\x20\x72\x65\x66\x65\x72\x65\x6e\x74\x20\x77\x61\x73\x20\x64\x65\x73\x74\x72\x6f\x79\x65\x64", 59, 1822743730076196218, NULL };
static frost$core$String $s9 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x53\x79\x6d\x62\x6f\x6c\x54\x61\x62\x6c\x65\x2e\x66\x72\x6f\x73\x74", 17, 2603826108937223355, NULL };
static frost$core$String $s10 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x79\x6d\x62\x6f\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x79\x6d\x62\x6f\x6c", 93, -1793708938165963595, NULL };
static frost$core$String $s11 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s12 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x64\x65\x72\x65\x66\x65\x72\x65\x6e\x63\x69\x6e\x67\x20\x77\x65\x61\x6b\x20\x70\x6f\x69\x6e\x74\x65\x72\x20\x61\x66\x74\x65\x72\x20\x69\x74\x73\x20\x72\x65\x66\x65\x72\x65\x6e\x74\x20\x77\x61\x73\x20\x64\x65\x73\x74\x72\x6f\x79\x65\x64", 59, 1822743730076196218, NULL };
static frost$core$String $s13 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x64\x75\x70\x6c\x69\x63\x61\x74\x65\x20\x73\x79\x6d\x62\x6f\x6c\x20\x27", 18, -4567382734304966013, NULL };
static frost$core$String $s14 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x27\x20\x28\x70\x72\x65\x76\x69\x6f\x75\x73\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x20\x77\x61\x73\x20\x61\x74\x20", 31, -294577661570171599, NULL };
static frost$core$String $s15 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x53\x79\x6d\x62\x6f\x6c\x54\x61\x62\x6c\x65\x2e\x66\x72\x6f\x73\x74", 17, 2603826108937223355, NULL };
static frost$core$String $s16 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x79\x6d\x62\x6f\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x79\x6d\x62\x6f\x6c", 93, -1793708938165963595, NULL };
static frost$core$String $s19 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s31 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s32 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x64\x65\x72\x65\x66\x65\x72\x65\x6e\x63\x69\x6e\x67\x20\x77\x65\x61\x6b\x20\x70\x6f\x69\x6e\x74\x65\x72\x20\x61\x66\x74\x65\x72\x20\x69\x74\x73\x20\x72\x65\x66\x65\x72\x65\x6e\x74\x20\x77\x61\x73\x20\x64\x65\x73\x74\x72\x6f\x79\x65\x64", 59, 1822743730076196218, NULL };
static frost$core$String $s41 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x53\x79\x6d\x62\x6f\x6c\x54\x61\x62\x6c\x65\x2e\x66\x72\x6f\x73\x74", 17, 2603826108937223355, NULL };
static frost$core$String $s42 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x79\x6d\x62\x6f\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x79\x6d\x62\x6f\x6c", 93, -1793708938165963595, NULL };
static frost$core$String $s44 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x53\x79\x6d\x62\x6f\x6c\x54\x61\x62\x6c\x65\x2e\x66\x72\x6f\x73\x74", 17, 2603826108937223355, NULL };
static frost$core$String $s45 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x79\x6d\x62\x6f\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x79\x6d\x62\x6f\x6c", 93, -1793708938165963595, NULL };
static frost$core$String $s46 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x53\x79\x6d\x62\x6f\x6c\x54\x61\x62\x6c\x65\x2e\x66\x72\x6f\x73\x74", 17, 2603826108937223355, NULL };
static frost$core$String $s47 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x79\x6d\x62\x6f\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x79\x6d\x62\x6f\x6c", 93, -1793708938165963595, NULL };
static frost$core$String $s51 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s52 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x64\x65\x72\x65\x66\x65\x72\x65\x6e\x63\x69\x6e\x67\x20\x77\x65\x61\x6b\x20\x70\x6f\x69\x6e\x74\x65\x72\x20\x61\x66\x74\x65\x72\x20\x69\x74\x73\x20\x72\x65\x66\x65\x72\x65\x6e\x74\x20\x77\x61\x73\x20\x64\x65\x73\x74\x72\x6f\x79\x65\x64", 59, 1822743730076196218, NULL };
static frost$core$String $s53 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s54 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x64\x65\x72\x65\x66\x65\x72\x65\x6e\x63\x69\x6e\x67\x20\x77\x65\x61\x6b\x20\x70\x6f\x69\x6e\x74\x65\x72\x20\x61\x66\x74\x65\x72\x20\x69\x74\x73\x20\x72\x65\x66\x65\x72\x65\x6e\x74\x20\x77\x61\x73\x20\x64\x65\x73\x74\x72\x6f\x79\x65\x64", 59, 1822743730076196218, NULL };
static frost$core$String $s55 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x53\x79\x6d\x62\x6f\x6c\x54\x61\x62\x6c\x65\x2e\x66\x72\x6f\x73\x74", 17, 2603826108937223355, NULL };
static frost$core$String $s56 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x79\x6d\x62\x6f\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x79\x6d\x62\x6f\x6c", 93, -1793708938165963595, NULL };
static frost$core$String $s66 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x53\x79\x6d\x62\x6f\x6c\x54\x61\x62\x6c\x65\x2e\x66\x72\x6f\x73\x74", 17, 2603826108937223355, NULL };
static frost$core$String $s67 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x79\x6d\x62\x6f\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x79\x6d\x62\x6f\x6c", 93, -1793708938165963595, NULL };
static frost$core$String $s74 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x53\x79\x6d\x62\x6f\x6c\x54\x61\x62\x6c\x65\x3c\x70\x61\x72\x65\x6e\x74\x73\x28", 20, -2209595055148192426, NULL };
static frost$core$String $s75 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x29\x2c\x20\x73\x79\x6d\x62\x6f\x6c\x73\x3d", 11, -4986810529602041312, NULL };
static frost$core$String $s77 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x3e", 1, -5808601953130666271, NULL };

void org$frostlang$frostc$SymbolTable$init$org$frostlang$frostc$Compiler(void* rawSelf, org$frostlang$frostc$Compiler* param1) {
org$frostlang$frostc$SymbolTable* param0 = (org$frostlang$frostc$SymbolTable*) rawSelf;

frost$collections$HashMap* _1;
frost$core$Object* _3;
frost$collections$HashMap** _5;
frost$collections$HashMap* _6;
frost$core$Object* _7;
frost$collections$HashMap** _9;
frost$core$Object* _11;
frost$collections$HashMap* _14;
frost$core$Object* _16;
frost$collections$HashMap** _18;
frost$collections$HashMap* _19;
frost$core$Object* _20;
frost$collections$HashMap** _22;
frost$core$Object* _24;
frost$collections$Array* _27;
frost$core$Object* _29;
frost$collections$Array** _31;
frost$collections$Array* _32;
frost$core$Object* _33;
frost$collections$Array** _35;
frost$core$Object* _37;
frost$core$Weak* _40;
org$frostlang$frostc$Compiler* _41;
frost$core$Object* _42;
frost$core$Object* _44;
frost$core$Weak** _46;
frost$core$Weak* _47;
frost$core$Object* _48;
frost$core$Weak** _50;
frost$core$Object* _52;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:5
_1 = (frost$collections$HashMap*) frostObjectAlloc(sizeof(frost$collections$HashMap), (frost$core$Class*) &frost$collections$HashMap$class);
frost$collections$HashMap$init(_1);
_3 = ((frost$core$Object*) _1);
frost$core$Frost$ref$frost$core$Object$Q(_3);
_5 = &param0->symbols;
_6 = *_5;
_7 = ((frost$core$Object*) _6);
frost$core$Frost$unref$frost$core$Object$Q(_7);
_9 = &param0->symbols;
*_9 = _1;
_11 = ((frost$core$Object*) _1);
frost$core$Frost$unref$frost$core$Object$Q(_11);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:12
_14 = (frost$collections$HashMap*) frostObjectAlloc(sizeof(frost$collections$HashMap), (frost$core$Class*) &frost$collections$HashMap$class);
frost$collections$HashMap$init(_14);
_16 = ((frost$core$Object*) _14);
frost$core$Frost$ref$frost$core$Object$Q(_16);
_18 = &param0->merged;
_19 = *_18;
_20 = ((frost$core$Object*) _19);
frost$core$Frost$unref$frost$core$Object$Q(_20);
_22 = &param0->merged;
*_22 = _14;
_24 = ((frost$core$Object*) _14);
frost$core$Frost$unref$frost$core$Object$Q(_24);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:15
_27 = (frost$collections$Array*) frostObjectAlloc(sizeof(frost$collections$Array), (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init(_27);
_29 = ((frost$core$Object*) _27);
frost$core$Frost$ref$frost$core$Object$Q(_29);
_31 = &param0->parents;
_32 = *_31;
_33 = ((frost$core$Object*) _32);
frost$core$Frost$unref$frost$core$Object$Q(_33);
_35 = &param0->parents;
*_35 = _27;
_37 = ((frost$core$Object*) _27);
frost$core$Frost$unref$frost$core$Object$Q(_37);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:18
_40 = (frost$core$Weak*) frostObjectAlloc(sizeof(frost$core$Weak), (frost$core$Class*) &frost$core$Weak$class);
_41 = param1;
_42 = ((frost$core$Object*) _41);
frost$core$Weak$init$frost$core$Weak$T$Q(_40, _42);
_44 = ((frost$core$Object*) _40);
frost$core$Frost$ref$frost$core$Object$Q(_44);
_46 = &param0->compiler;
_47 = *_46;
_48 = ((frost$core$Object*) _47);
frost$core$Frost$unref$frost$core$Object$Q(_48);
_50 = &param0->compiler;
*_50 = _40;
_52 = ((frost$core$Object*) _40);
frost$core$Frost$unref$frost$core$Object$Q(_52);
return;

}
void org$frostlang$frostc$SymbolTable$init$org$frostlang$frostc$SymbolTable(void* rawSelf, org$frostlang$frostc$SymbolTable* param1) {
org$frostlang$frostc$SymbolTable* param0 = (org$frostlang$frostc$SymbolTable*) rawSelf;

frost$collections$HashMap* _1;
frost$core$Object* _3;
frost$collections$HashMap** _5;
frost$collections$HashMap* _6;
frost$core$Object* _7;
frost$collections$HashMap** _9;
frost$core$Object* _11;
frost$collections$HashMap* _14;
frost$core$Object* _16;
frost$collections$HashMap** _18;
frost$collections$HashMap* _19;
frost$core$Object* _20;
frost$collections$HashMap** _22;
frost$core$Object* _24;
frost$collections$Array* _27;
frost$core$Object* _29;
frost$collections$Array** _31;
frost$collections$Array* _32;
frost$core$Object* _33;
frost$collections$Array** _35;
frost$core$Object* _37;
frost$core$Weak** _40;
frost$core$Weak* _41;
frost$core$Bit* _46;
frost$core$Bit _47;
bool _49;
frost$core$Int _51;
frost$core$Object** _55;
frost$core$Object* _56;
frost$core$Object* _57;
frost$core$Object* _58;
org$frostlang$frostc$Compiler* _61;
frost$core$Weak* _62;
org$frostlang$frostc$Compiler* _63;
frost$core$Object* _64;
frost$core$Object* _66;
frost$core$Weak** _68;
frost$core$Weak* _69;
frost$core$Object* _70;
frost$core$Weak** _72;
frost$core$Object* _74;
frost$core$Object* _76;
frost$collections$Array** _79;
frost$collections$Array* _80;
frost$core$Object* _81;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:5
_1 = (frost$collections$HashMap*) frostObjectAlloc(sizeof(frost$collections$HashMap), (frost$core$Class*) &frost$collections$HashMap$class);
frost$collections$HashMap$init(_1);
_3 = ((frost$core$Object*) _1);
frost$core$Frost$ref$frost$core$Object$Q(_3);
_5 = &param0->symbols;
_6 = *_5;
_7 = ((frost$core$Object*) _6);
frost$core$Frost$unref$frost$core$Object$Q(_7);
_9 = &param0->symbols;
*_9 = _1;
_11 = ((frost$core$Object*) _1);
frost$core$Frost$unref$frost$core$Object$Q(_11);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:12
_14 = (frost$collections$HashMap*) frostObjectAlloc(sizeof(frost$collections$HashMap), (frost$core$Class*) &frost$collections$HashMap$class);
frost$collections$HashMap$init(_14);
_16 = ((frost$core$Object*) _14);
frost$core$Frost$ref$frost$core$Object$Q(_16);
_18 = &param0->merged;
_19 = *_18;
_20 = ((frost$core$Object*) _19);
frost$core$Frost$unref$frost$core$Object$Q(_20);
_22 = &param0->merged;
*_22 = _14;
_24 = ((frost$core$Object*) _14);
frost$core$Frost$unref$frost$core$Object$Q(_24);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:15
_27 = (frost$collections$Array*) frostObjectAlloc(sizeof(frost$collections$Array), (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init(_27);
_29 = ((frost$core$Object*) _27);
frost$core$Frost$ref$frost$core$Object$Q(_29);
_31 = &param0->parents;
_32 = *_31;
_33 = ((frost$core$Object*) _32);
frost$core$Frost$unref$frost$core$Object$Q(_33);
_35 = &param0->parents;
*_35 = _27;
_37 = ((frost$core$Object*) _27);
frost$core$Frost$unref$frost$core$Object$Q(_37);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:22
_40 = &param1->compiler;
_41 = *_40;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from SymbolTable.frost:22:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
_46 = &_41->_valid;
_47 = *_46;
_49 = _47.value;
if (_49) goto block3; else goto block4;
block4:;
_51 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2, _51, &$s3);
abort(); // unreachable
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
_55 = &_41->value;
_56 = *_55;
_57 = _56;
_58 = _57;
frost$core$Frost$ref$frost$core$Object$Q(_58);
_61 = ((org$frostlang$frostc$Compiler*) _57);
_62 = (frost$core$Weak*) frostObjectAlloc(sizeof(frost$core$Weak), (frost$core$Class*) &frost$core$Weak$class);
_63 = _61;
_64 = ((frost$core$Object*) _63);
frost$core$Weak$init$frost$core$Weak$T$Q(_62, _64);
_66 = ((frost$core$Object*) _62);
frost$core$Frost$ref$frost$core$Object$Q(_66);
_68 = &param0->compiler;
_69 = *_68;
_70 = ((frost$core$Object*) _69);
frost$core$Frost$unref$frost$core$Object$Q(_70);
_72 = &param0->compiler;
*_72 = _62;
_74 = ((frost$core$Object*) _62);
frost$core$Frost$unref$frost$core$Object$Q(_74);
_76 = _57;
frost$core$Frost$unref$frost$core$Object$Q(_76);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:23
_79 = &param0->parents;
_80 = *_79;
_81 = ((frost$core$Object*) param1);
frost$collections$Array$add$frost$collections$Array$T(_80, _81);
return;

}
void org$frostlang$frostc$SymbolTable$add$org$frostlang$frostc$Symbol(void* rawSelf, org$frostlang$frostc$Symbol* param1) {
org$frostlang$frostc$SymbolTable* param0 = (org$frostlang$frostc$SymbolTable*) rawSelf;

frost$core$String** _1;
frost$core$String* _2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:27
_1 = &param1->name;
_2 = *_1;
org$frostlang$frostc$SymbolTable$add$org$frostlang$frostc$Symbol$frost$core$String(param0, param1, _2);
return;

}
void org$frostlang$frostc$SymbolTable$add$org$frostlang$frostc$Symbol$frost$core$String(void* rawSelf, org$frostlang$frostc$Symbol* param1, frost$core$String* param2) {
org$frostlang$frostc$SymbolTable* param0 = (org$frostlang$frostc$SymbolTable*) rawSelf;

org$frostlang$frostc$Symbol* local0 = NULL;
org$frostlang$frostc$Symbol$Kind local1;
org$frostlang$frostc$Symbol$Kind local2;
frost$collections$Array* local3 = NULL;
frost$collections$Array* local4 = NULL;
frost$collections$HashMap** _1;
frost$collections$HashMap* _2;
frost$collections$HashKey* _3;
frost$collections$HashMap** _6;
frost$collections$HashMap* _7;
frost$collections$HashKey* _8;
frost$core$Object* _9;
org$frostlang$frostc$Symbol* _10;
frost$core$Object* _12;
org$frostlang$frostc$Symbol* _14;
frost$core$Object* _15;
frost$core$Object* _18;
org$frostlang$frostc$Symbol* _21;
bool _22;
frost$core$Bit _23;
bool _24;
frost$collections$HashMap** _27;
frost$collections$HashMap* _28;
frost$collections$HashKey* _29;
frost$core$Object* _30;
org$frostlang$frostc$Symbol* _33;
frost$core$Object* _34;
org$frostlang$frostc$Symbol$Kind* _39;
org$frostlang$frostc$Symbol$Kind _40;
frost$core$Equatable* _41;
frost$core$Int _42;
frost$core$Int* _45;
org$frostlang$frostc$Symbol$Kind _47;
org$frostlang$frostc$Symbol$Kind _50;
frost$core$Equatable* _51;
$fn4 _52;
frost$core$Bit _53;
bool _54;
frost$core$Object* _55;
frost$core$Object* _57;
org$frostlang$frostc$Symbol* _61;
bool _62;
frost$core$Bit _63;
bool _64;
frost$core$Int _66;
org$frostlang$frostc$Symbol* _69;
org$frostlang$frostc$Symbol$Kind* _70;
org$frostlang$frostc$Symbol$Kind _71;
frost$core$Int _72;
frost$core$Int _73;
int64_t _76;
int64_t _77;
bool _78;
frost$core$Bit _79;
bool _81;
frost$collections$Array* _84;
frost$core$Object* _87;
frost$collections$Array* _89;
frost$core$Object* _90;
frost$core$Object* _93;
frost$collections$Array* _96;
org$frostlang$frostc$MethodDecl* _97;
frost$core$Object* _98;
frost$collections$Array* _101;
org$frostlang$frostc$Symbol* _102;
org$frostlang$frostc$MethodDecl* _103;
frost$core$Object* _104;
frost$collections$HashMap** _107;
frost$collections$HashMap* _108;
frost$collections$HashKey* _109;
org$frostlang$frostc$Methods* _110;
frost$collections$Array* _111;
frost$collections$ListView* _112;
org$frostlang$frostc$Symbol* _114;
frost$core$Object* _115;
frost$core$Object* _117;
frost$collections$Array* _120;
frost$core$Object* _121;
org$frostlang$frostc$Symbol* _124;
frost$core$Object* _125;
frost$core$Int _129;
int64_t _132;
int64_t _133;
bool _134;
frost$core$Bit _135;
bool _137;
frost$collections$Array* _140;
frost$core$Object* _143;
frost$collections$Array* _145;
frost$core$Object* _146;
frost$core$Object* _149;
frost$collections$Array* _152;
org$frostlang$frostc$MethodDecl* _153;
frost$core$Object* _154;
frost$collections$Array* _157;
org$frostlang$frostc$Symbol* _158;
org$frostlang$frostc$Methods* _159;
org$frostlang$frostc$FixedArray** _160;
org$frostlang$frostc$FixedArray* _161;
frost$collections$CollectionView* _162;
frost$collections$HashMap** _165;
frost$collections$HashMap* _166;
frost$collections$HashKey* _167;
org$frostlang$frostc$Methods* _168;
frost$collections$Array* _169;
frost$collections$ListView* _170;
org$frostlang$frostc$Symbol* _172;
frost$core$Object* _173;
frost$core$Object* _175;
frost$collections$Array* _178;
frost$core$Object* _179;
org$frostlang$frostc$Symbol* _182;
frost$core$Object* _183;
frost$core$Weak** _189;
frost$core$Weak* _190;
frost$core$Bit* _195;
frost$core$Bit _196;
bool _198;
frost$core$Int _200;
frost$core$Object** _204;
frost$core$Object* _205;
frost$core$Object* _206;
frost$core$Object* _207;
org$frostlang$frostc$Compiler* _210;
org$frostlang$frostc$Position* _211;
org$frostlang$frostc$Position _212;
frost$core$String* _213;
frost$core$String* _214;
org$frostlang$frostc$Symbol* _215;
bool _216;
frost$core$Bit _217;
bool _218;
frost$core$Int _220;
org$frostlang$frostc$Symbol* _223;
org$frostlang$frostc$Position* _224;
org$frostlang$frostc$Position _225;
frost$core$Object* _226;
$fn5 _229;
frost$core$String* _230;
frost$core$String* _231;
frost$core$Object* _232;
frost$core$Object* _234;
frost$core$Object* _236;
frost$core$String* _239;
frost$core$Object* _241;
frost$core$Object* _243;
frost$core$Object* _245;
frost$core$Object* _247;
frost$core$Object* _249;
frost$core$Object* _251;
org$frostlang$frostc$Symbol* _253;
frost$core$Object* _254;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:31
_1 = &param0->merged;
_2 = *_1;
_3 = ((frost$collections$HashKey*) param2);
frost$collections$HashMap$remove$frost$collections$HashMap$K(_2, _3);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:32
_6 = &param0->symbols;
_7 = *_6;
_8 = ((frost$collections$HashKey*) param2);
_9 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q(_7, _8);
_10 = ((org$frostlang$frostc$Symbol*) _9);
*(&local0) = ((org$frostlang$frostc$Symbol*) NULL);
_12 = ((frost$core$Object*) _10);
frost$core$Frost$ref$frost$core$Object$Q(_12);
_14 = *(&local0);
_15 = ((frost$core$Object*) _14);
frost$core$Frost$unref$frost$core$Object$Q(_15);
*(&local0) = _10;
_18 = _9;
frost$core$Frost$unref$frost$core$Object$Q(_18);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:33
_21 = *(&local0);
_22 = _21 == NULL;
_23 = (frost$core$Bit) {_22};
_24 = _23.value;
if (_24) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:34
_27 = &param0->symbols;
_28 = *_27;
_29 = ((frost$collections$HashKey*) param2);
_30 = ((frost$core$Object*) param1);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V(_28, _29, _30);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:35
_33 = *(&local0);
_34 = ((frost$core$Object*) _33);
frost$core$Frost$unref$frost$core$Object$Q(_34);
*(&local0) = ((org$frostlang$frostc$Symbol*) NULL);
return;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:37
_39 = &param1->kind;
_40 = *_39;
org$frostlang$frostc$Symbol$Kind$wrapper* $tmp6;
$tmp6 = (org$frostlang$frostc$Symbol$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Symbol$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Symbol$Kind$wrapperclass);
$tmp6->value = _40;
_41 = ((frost$core$Equatable*) $tmp6);
_42 = (frost$core$Int) {5u};
// begin inline call to org.frostlang.frostc.Symbol.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Symbol.Kind from SymbolTable.frost:37:32
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Symbol.frost:4
_45 = &(&local2)->$rawValue;
*_45 = _42;
_47 = *(&local2);
*(&local1) = _47;
_50 = *(&local1);
org$frostlang$frostc$Symbol$Kind$wrapper* $tmp7;
$tmp7 = (org$frostlang$frostc$Symbol$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Symbol$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Symbol$Kind$wrapperclass);
$tmp7->value = _50;
_51 = ((frost$core$Equatable*) $tmp7);
ITable* $tmp8 = _41->$class->itable;
while ($tmp8->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp8 = $tmp8->next;
}
_52 = $tmp8->methods[0];
_53 = _52(_41, _51);
_54 = _53.value;
_55 = ((frost$core$Object*) _51);
frost$core$Frost$unref$frost$core$Object$Q(_55);
_57 = ((frost$core$Object*) _41);
frost$core$Frost$unref$frost$core$Object$Q(_57);
if (_54) goto block3; else goto block4;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:38
_61 = *(&local0);
_62 = _61 != NULL;
_63 = (frost$core$Bit) {_62};
_64 = _63.value;
if (_64) goto block6; else goto block7;
block7:;
_66 = (frost$core$Int) {38u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s9, _66, &$s10);
abort(); // unreachable
block6:;
_69 = _61;
_70 = &_69->kind;
_71 = *_70;
_72 = _71.$rawValue;
_73 = (frost$core$Int) {5u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SymbolTable.frost:39:33
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_76 = _72.value;
_77 = _73.value;
_78 = _76 == _77;
_79 = (frost$core$Bit) {_78};
_81 = _79.value;
if (_81) goto block9; else goto block10;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:40
_84 = (frost$collections$Array*) frostObjectAlloc(sizeof(frost$collections$Array), (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init(_84);
*(&local3) = ((frost$collections$Array*) NULL);
_87 = ((frost$core$Object*) _84);
frost$core$Frost$ref$frost$core$Object$Q(_87);
_89 = *(&local3);
_90 = ((frost$core$Object*) _89);
frost$core$Frost$unref$frost$core$Object$Q(_90);
*(&local3) = _84;
_93 = ((frost$core$Object*) _84);
frost$core$Frost$unref$frost$core$Object$Q(_93);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:41
_96 = *(&local3);
_97 = ((org$frostlang$frostc$MethodDecl*) param1);
_98 = ((frost$core$Object*) _97);
frost$collections$Array$add$frost$collections$Array$T(_96, _98);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:42
_101 = *(&local3);
_102 = *(&local0);
_103 = ((org$frostlang$frostc$MethodDecl*) _102);
_104 = ((frost$core$Object*) _103);
frost$collections$Array$add$frost$collections$Array$T(_101, _104);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:43
_107 = &param0->symbols;
_108 = *_107;
_109 = ((frost$collections$HashKey*) param2);
_110 = (org$frostlang$frostc$Methods*) frostObjectAlloc(sizeof(org$frostlang$frostc$Methods), (frost$core$Class*) &org$frostlang$frostc$Methods$class);
_111 = *(&local3);
_112 = ((frost$collections$ListView*) _111);
org$frostlang$frostc$Methods$init$frost$collections$ListView$LTorg$frostlang$frostc$MethodDecl$GT(_110, _112);
_114 = ((org$frostlang$frostc$Symbol*) _110);
_115 = ((frost$core$Object*) _114);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V(_108, _109, _115);
_117 = ((frost$core$Object*) _110);
frost$core$Frost$unref$frost$core$Object$Q(_117);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:44
_120 = *(&local3);
_121 = ((frost$core$Object*) _120);
frost$core$Frost$unref$frost$core$Object$Q(_121);
*(&local3) = ((frost$collections$Array*) NULL);
_124 = *(&local0);
_125 = ((frost$core$Object*) _124);
frost$core$Frost$unref$frost$core$Object$Q(_125);
*(&local0) = ((org$frostlang$frostc$Symbol*) NULL);
return;
block10:;
_129 = (frost$core$Int) {6u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SymbolTable.frost:46:33
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_132 = _72.value;
_133 = _129.value;
_134 = _132 == _133;
_135 = (frost$core$Bit) {_134};
_137 = _135.value;
if (_137) goto block12; else goto block8;
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:47
_140 = (frost$collections$Array*) frostObjectAlloc(sizeof(frost$collections$Array), (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init(_140);
*(&local4) = ((frost$collections$Array*) NULL);
_143 = ((frost$core$Object*) _140);
frost$core$Frost$ref$frost$core$Object$Q(_143);
_145 = *(&local4);
_146 = ((frost$core$Object*) _145);
frost$core$Frost$unref$frost$core$Object$Q(_146);
*(&local4) = _140;
_149 = ((frost$core$Object*) _140);
frost$core$Frost$unref$frost$core$Object$Q(_149);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:48
_152 = *(&local4);
_153 = ((org$frostlang$frostc$MethodDecl*) param1);
_154 = ((frost$core$Object*) _153);
frost$collections$Array$add$frost$collections$Array$T(_152, _154);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:49
_157 = *(&local4);
_158 = *(&local0);
_159 = ((org$frostlang$frostc$Methods*) _158);
_160 = &_159->methods;
_161 = *_160;
_162 = ((frost$collections$CollectionView*) _161);
frost$collections$Array$addAll$frost$collections$CollectionView$LTfrost$collections$Array$T$GT(_157, _162);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:50
_165 = &param0->symbols;
_166 = *_165;
_167 = ((frost$collections$HashKey*) param2);
_168 = (org$frostlang$frostc$Methods*) frostObjectAlloc(sizeof(org$frostlang$frostc$Methods), (frost$core$Class*) &org$frostlang$frostc$Methods$class);
_169 = *(&local4);
_170 = ((frost$collections$ListView*) _169);
org$frostlang$frostc$Methods$init$frost$collections$ListView$LTorg$frostlang$frostc$MethodDecl$GT(_168, _170);
_172 = ((org$frostlang$frostc$Symbol*) _168);
_173 = ((frost$core$Object*) _172);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V(_166, _167, _173);
_175 = ((frost$core$Object*) _168);
frost$core$Frost$unref$frost$core$Object$Q(_175);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:51
_178 = *(&local4);
_179 = ((frost$core$Object*) _178);
frost$core$Frost$unref$frost$core$Object$Q(_179);
*(&local4) = ((frost$collections$Array*) NULL);
_182 = *(&local0);
_183 = ((frost$core$Object*) _182);
frost$core$Frost$unref$frost$core$Object$Q(_183);
*(&local0) = ((org$frostlang$frostc$Symbol*) NULL);
return;
block8:;
goto block4;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:55
_189 = &param0->compiler;
_190 = *_189;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from SymbolTable.frost:55:9
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
_195 = &_190->_valid;
_196 = *_195;
_198 = _196.value;
if (_198) goto block16; else goto block17;
block17:;
_200 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s11, _200, &$s12);
abort(); // unreachable
block16:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
_204 = &_190->value;
_205 = *_204;
_206 = _205;
_207 = _206;
frost$core$Frost$ref$frost$core$Object$Q(_207);
_210 = ((org$frostlang$frostc$Compiler*) _206);
_211 = &param1->position;
_212 = *_211;
_213 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s13, param2);
_214 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_213, &$s14);
_215 = *(&local0);
_216 = _215 != NULL;
_217 = (frost$core$Bit) {_216};
_218 = _217.value;
if (_218) goto block18; else goto block19;
block19:;
_220 = (frost$core$Int) {56u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s15, _220, &$s16);
abort(); // unreachable
block18:;
_223 = _215;
_224 = &_223->position;
_225 = *_224;
org$frostlang$frostc$Position$wrapper* $tmp17;
$tmp17 = (org$frostlang$frostc$Position$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Position$wrapper), (frost$core$Class*) &org$frostlang$frostc$Position$wrapperclass);
$tmp17->value = _225;
_226 = ((frost$core$Object*) $tmp17);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from SymbolTable.frost:55:95
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
_229 = ($fn18) _226->$class->vtable[0];
_230 = _229(_226);
_231 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_214, _230);
_232 = ((frost$core$Object*) _231);
frost$core$Frost$ref$frost$core$Object$Q(_232);
_234 = ((frost$core$Object*) _231);
frost$core$Frost$unref$frost$core$Object$Q(_234);
_236 = ((frost$core$Object*) _230);
frost$core$Frost$unref$frost$core$Object$Q(_236);
_239 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_231, &$s19);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(_210, _212, _239);
_241 = ((frost$core$Object*) _239);
frost$core$Frost$unref$frost$core$Object$Q(_241);
_243 = ((frost$core$Object*) _231);
frost$core$Frost$unref$frost$core$Object$Q(_243);
_245 = _226;
frost$core$Frost$unref$frost$core$Object$Q(_245);
_247 = ((frost$core$Object*) _214);
frost$core$Frost$unref$frost$core$Object$Q(_247);
_249 = ((frost$core$Object*) _213);
frost$core$Frost$unref$frost$core$Object$Q(_249);
_251 = _206;
frost$core$Frost$unref$frost$core$Object$Q(_251);
_253 = *(&local0);
_254 = ((frost$core$Object*) _253);
frost$core$Frost$unref$frost$core$Object$Q(_254);
*(&local0) = ((org$frostlang$frostc$Symbol*) NULL);
return;

}
void org$frostlang$frostc$SymbolTable$addIfNotOverridden$org$frostlang$frostc$MethodDecl$frost$collections$List$LTorg$frostlang$frostc$MethodDecl$GT(void* rawSelf, org$frostlang$frostc$MethodDecl* param1, frost$collections$List* param2) {
org$frostlang$frostc$SymbolTable* param0 = (org$frostlang$frostc$SymbolTable*) rawSelf;

org$frostlang$frostc$MethodDecl$Kind local0;
org$frostlang$frostc$MethodDecl$Kind local1;
org$frostlang$frostc$MethodDecl* local2 = NULL;
org$frostlang$frostc$MethodDecl* local3 = NULL;
org$frostlang$frostc$MethodDecl$Kind* _3;
org$frostlang$frostc$MethodDecl$Kind _4;
frost$core$Equatable* _5;
frost$core$Int _6;
frost$core$Int* _9;
org$frostlang$frostc$MethodDecl$Kind _11;
org$frostlang$frostc$MethodDecl$Kind _14;
frost$core$Equatable* _15;
$fn20 _16;
frost$core$Bit _17;
frost$core$Object* _18;
frost$core$Object* _20;
bool _25;
bool _26;
frost$core$Bit _27;
bool _29;
frost$collections$Iterable* _34;
$fn21 _35;
frost$collections$Iterator* _36;
$fn22 _38;
frost$core$Bit _39;
bool _40;
$fn23 _43;
frost$core$Object* _44;
org$frostlang$frostc$MethodDecl* _45;
frost$core$Object* _46;
org$frostlang$frostc$MethodDecl* _48;
frost$core$Object* _49;
frost$core$Weak** _53;
frost$core$Weak* _54;
frost$core$Bit* _59;
frost$core$Bit _60;
bool _62;
frost$core$Int _64;
frost$core$Object** _68;
frost$core$Object* _69;
frost$core$Object* _70;
frost$core$Object* _71;
org$frostlang$frostc$Compiler* _74;
org$frostlang$frostc$MethodDecl* _75;
org$frostlang$frostc$MethodDecl* _76;
frost$core$Object* _78;
org$frostlang$frostc$MethodDecl* _80;
frost$core$Object* _81;
frost$core$Object* _84;
frost$core$Object* _86;
org$frostlang$frostc$MethodDecl* _89;
bool _90;
frost$core$Bit _91;
bool _92;
org$frostlang$frostc$MethodDecl* _95;
frost$core$Object* _96;
frost$core$Object* _99;
org$frostlang$frostc$MethodDecl* _101;
frost$core$Object* _102;
frost$core$Object* _105;
org$frostlang$frostc$Annotations** _109;
org$frostlang$frostc$Annotations* _110;
frost$core$Int* _113;
frost$core$Int _114;
frost$core$Int _115;
int64_t _118;
int64_t _119;
int64_t _120;
frost$core$Int _121;
frost$core$Int _123;
int64_t _124;
int64_t _125;
bool _126;
frost$core$Bit _127;
bool _129;
org$frostlang$frostc$MethodDecl* _131;
frost$core$String* _132;
frost$core$String* _133;
frost$core$Bit _134;
bool _135;
frost$core$Object* _136;
frost$core$Object* _138;
org$frostlang$frostc$MethodDecl* _142;
frost$core$Object* _143;
frost$core$Object* _146;
org$frostlang$frostc$MethodDecl* _148;
frost$core$Object* _149;
frost$core$Object* _152;
org$frostlang$frostc$MethodDecl* _155;
frost$core$Object* _156;
frost$core$Object* _159;
org$frostlang$frostc$MethodDecl* _161;
frost$core$Object* _162;
frost$core$Object* _166;
frost$collections$CollectionWriter* _169;
frost$core$Object* _170;
$fn24 _171;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:61
// begin inline call to function org.frostlang.frostc.MethodDecl.get_heritable():frost.core.Bit from SymbolTable.frost:61:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:113
_3 = &param1->methodKind;
_4 = *_3;
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp25;
$tmp25 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$MethodDecl$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp25->value = _4;
_5 = ((frost$core$Equatable*) $tmp25);
_6 = (frost$core$Int) {2u};
// begin inline call to org.frostlang.frostc.MethodDecl.Kind.init(rv:frost.core.Int):org.frostlang.frostc.MethodDecl.Kind from MethodDecl.frost:113:34
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:7
_9 = &(&local1)->$rawValue;
*_9 = _6;
_11 = *(&local1);
*(&local0) = _11;
_14 = *(&local0);
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp26;
$tmp26 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$MethodDecl$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp26->value = _14;
_15 = ((frost$core$Equatable*) $tmp26);
ITable* $tmp27 = _5->$class->itable;
while ($tmp27->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp27 = $tmp27->next;
}
_16 = $tmp27->methods[1];
_17 = _16(_5, _15);
_18 = ((frost$core$Object*) _15);
frost$core$Frost$unref$frost$core$Object$Q(_18);
_20 = ((frost$core$Object*) _5);
frost$core$Frost$unref$frost$core$Object$Q(_20);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from SymbolTable.frost:61:12
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
_25 = _17.value;
_26 = !_25;
_27 = (frost$core$Bit) {_26};
_29 = _27.value;
if (_29) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:62
return;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:64
_34 = ((frost$collections$Iterable*) param2);
ITable* $tmp28 = _34->$class->itable;
while ($tmp28->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp28 = $tmp28->next;
}
_35 = $tmp28->methods[0];
_36 = _35(_34);
goto block6;
block6:;
ITable* $tmp29 = _36->$class->itable;
while ($tmp29->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp29 = $tmp29->next;
}
_38 = $tmp29->methods[0];
_39 = _38(_36);
_40 = _39.value;
if (_40) goto block8; else goto block7;
block7:;
*(&local2) = ((org$frostlang$frostc$MethodDecl*) NULL);
ITable* $tmp30 = _36->$class->itable;
while ($tmp30->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp30 = $tmp30->next;
}
_43 = $tmp30->methods[1];
_44 = _43(_36);
_45 = ((org$frostlang$frostc$MethodDecl*) _44);
_46 = ((frost$core$Object*) _45);
frost$core$Frost$ref$frost$core$Object$Q(_46);
_48 = *(&local2);
_49 = ((frost$core$Object*) _48);
frost$core$Frost$unref$frost$core$Object$Q(_49);
*(&local2) = _45;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:65
_53 = &param0->compiler;
_54 = *_53;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from SymbolTable.frost:65:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
_59 = &_54->_valid;
_60 = *_59;
_62 = _60.value;
if (_62) goto block11; else goto block12;
block12:;
_64 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s31, _64, &$s32);
abort(); // unreachable
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
_68 = &_54->value;
_69 = *_68;
_70 = _69;
_71 = _70;
frost$core$Frost$ref$frost$core$Object$Q(_71);
_74 = ((org$frostlang$frostc$Compiler*) _70);
_75 = *(&local2);
_76 = org$frostlang$frostc$Compiler$getOverriddenMethod$org$frostlang$frostc$MethodDecl$R$org$frostlang$frostc$MethodDecl$Q(_74, _75);
*(&local3) = ((org$frostlang$frostc$MethodDecl*) NULL);
_78 = ((frost$core$Object*) _76);
frost$core$Frost$ref$frost$core$Object$Q(_78);
_80 = *(&local3);
_81 = ((frost$core$Object*) _80);
frost$core$Frost$unref$frost$core$Object$Q(_81);
*(&local3) = _76;
_84 = ((frost$core$Object*) _76);
frost$core$Frost$unref$frost$core$Object$Q(_84);
_86 = _70;
frost$core$Frost$unref$frost$core$Object$Q(_86);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:66
_89 = *(&local3);
_90 = _89 == param1;
_91 = (frost$core$Bit) {_90};
_92 = _91.value;
if (_92) goto block13; else goto block14;
block13:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:67
_95 = *(&local3);
_96 = ((frost$core$Object*) _95);
frost$core$Frost$unref$frost$core$Object$Q(_96);
*(&local3) = ((org$frostlang$frostc$MethodDecl*) NULL);
_99 = _44;
frost$core$Frost$unref$frost$core$Object$Q(_99);
_101 = *(&local2);
_102 = ((frost$core$Object*) _101);
frost$core$Frost$unref$frost$core$Object$Q(_102);
*(&local2) = ((org$frostlang$frostc$MethodDecl*) NULL);
_105 = ((frost$core$Object*) _36);
frost$core$Frost$unref$frost$core$Object$Q(_105);
return;
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:69
_109 = &param1->annotations;
_110 = *_109;
// begin inline call to function org.frostlang.frostc.Annotations.get_isDefault():frost.core.Bit from SymbolTable.frost:69:29
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:169
_113 = &_110->flags;
_114 = *_113;
_115 = (frost$core$Int) {32768u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:169:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:293
_118 = _114.value;
_119 = _115.value;
_120 = _118 & _119;
_121 = (frost$core$Int) {_120};
_123 = (frost$core$Int) {0u};
_124 = _121.value;
_125 = _123.value;
_126 = _124 != _125;
_127 = (frost$core$Bit) {_126};
_129 = _127.value;
if (_129) goto block17; else goto block16;
block17:;
_131 = *(&local2);
_132 = org$frostlang$frostc$MethodDecl$get_signature$R$frost$core$String(_131);
_133 = org$frostlang$frostc$MethodDecl$get_signature$R$frost$core$String(param1);
_134 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(_132, _133);
_135 = _134.value;
_136 = ((frost$core$Object*) _133);
frost$core$Frost$unref$frost$core$Object$Q(_136);
_138 = ((frost$core$Object*) _132);
frost$core$Frost$unref$frost$core$Object$Q(_138);
if (_135) goto block15; else goto block16;
block15:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:70
_142 = *(&local3);
_143 = ((frost$core$Object*) _142);
frost$core$Frost$unref$frost$core$Object$Q(_143);
*(&local3) = ((org$frostlang$frostc$MethodDecl*) NULL);
_146 = _44;
frost$core$Frost$unref$frost$core$Object$Q(_146);
_148 = *(&local2);
_149 = ((frost$core$Object*) _148);
frost$core$Frost$unref$frost$core$Object$Q(_149);
*(&local2) = ((org$frostlang$frostc$MethodDecl*) NULL);
_152 = ((frost$core$Object*) _36);
frost$core$Frost$unref$frost$core$Object$Q(_152);
return;
block16:;
_155 = *(&local3);
_156 = ((frost$core$Object*) _155);
frost$core$Frost$unref$frost$core$Object$Q(_156);
*(&local3) = ((org$frostlang$frostc$MethodDecl*) NULL);
_159 = _44;
frost$core$Frost$unref$frost$core$Object$Q(_159);
_161 = *(&local2);
_162 = ((frost$core$Object*) _161);
frost$core$Frost$unref$frost$core$Object$Q(_162);
*(&local2) = ((org$frostlang$frostc$MethodDecl*) NULL);
goto block6;
block8:;
_166 = ((frost$core$Object*) _36);
frost$core$Frost$unref$frost$core$Object$Q(_166);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:73
_169 = ((frost$collections$CollectionWriter*) param2);
_170 = ((frost$core$Object*) param1);
ITable* $tmp33 = _169->$class->itable;
while ($tmp33->$class != (frost$core$Class*) &frost$collections$CollectionWriter$class) {
    $tmp33 = $tmp33->next;
}
_171 = $tmp33->methods[1];
_171(_169, _170);
return;

}
org$frostlang$frostc$Symbol* org$frostlang$frostc$SymbolTable$merge$org$frostlang$frostc$Symbol$Q$org$frostlang$frostc$Symbol$Q$R$org$frostlang$frostc$Symbol$Q(void* rawSelf, org$frostlang$frostc$Symbol* param1, org$frostlang$frostc$Symbol* param2) {
org$frostlang$frostc$SymbolTable* param0 = (org$frostlang$frostc$SymbolTable*) rawSelf;

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
$fn34 _36;
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
frost$core$Object* _98;
frost$collections$Array* _100;
frost$core$Object* _101;
frost$core$Object* _104;
frost$collections$Array* _107;
org$frostlang$frostc$MethodDecl* _108;
frost$core$Object* _109;
org$frostlang$frostc$Methods* _112;
org$frostlang$frostc$FixedArray** _113;
org$frostlang$frostc$FixedArray* _114;
frost$collections$Iterable* _115;
$fn35 _116;
frost$collections$Iterator* _117;
$fn36 _119;
frost$core$Bit _120;
bool _121;
$fn37 _124;
frost$core$Object* _125;
org$frostlang$frostc$MethodDecl* _126;
frost$core$Object* _127;
org$frostlang$frostc$MethodDecl* _129;
frost$core$Object* _130;
org$frostlang$frostc$MethodDecl* _134;
frost$collections$Array* _135;
frost$collections$List* _136;
frost$core$Object* _138;
org$frostlang$frostc$MethodDecl* _140;
frost$core$Object* _141;
frost$core$Object* _145;
org$frostlang$frostc$Methods* _148;
frost$collections$Array* _149;
frost$collections$ListView* _150;
org$frostlang$frostc$Symbol* _152;
frost$core$Object* _153;
frost$core$Object* _155;
frost$collections$Array* _157;
frost$core$Object* _158;
frost$core$Int _162;
int64_t _165;
int64_t _166;
bool _167;
frost$core$Bit _168;
bool _170;
frost$core$Weak** _173;
frost$core$Weak* _174;
frost$core$Bit* _179;
frost$core$Bit _180;
bool _182;
frost$core$Int _184;
frost$core$Object** _188;
frost$core$Object* _189;
frost$core$Object* _190;
frost$core$Object* _191;
org$frostlang$frostc$Compiler* _194;
org$frostlang$frostc$MethodDecl* _195;
org$frostlang$frostc$MethodDecl* _196;
frost$core$Object* _198;
org$frostlang$frostc$MethodDecl* _200;
frost$core$Object* _201;
frost$core$Object* _204;
frost$core$Object* _206;
frost$core$Weak** _209;
frost$core$Weak* _210;
frost$core$Bit* _215;
frost$core$Bit _216;
bool _218;
frost$core$Int _220;
frost$core$Object** _224;
frost$core$Object* _225;
frost$core$Object* _226;
frost$core$Object* _227;
org$frostlang$frostc$Compiler* _230;
org$frostlang$frostc$MethodDecl* _231;
org$frostlang$frostc$MethodDecl* _232;
frost$core$Object* _234;
org$frostlang$frostc$MethodDecl* _236;
frost$core$Object* _237;
frost$core$Object* _240;
frost$core$Object* _242;
org$frostlang$frostc$MethodDecl* _245;
org$frostlang$frostc$MethodDecl* _246;
bool _247;
frost$core$Bit _248;
bool _249;
org$frostlang$frostc$MethodDecl* _251;
org$frostlang$frostc$MethodDecl* _252;
bool _253;
frost$core$Bit _254;
bool _255;
org$frostlang$frostc$MethodDecl* _257;
bool _258;
frost$core$Bit _259;
bool _260;
org$frostlang$frostc$MethodDecl* _262;
org$frostlang$frostc$MethodDecl* _263;
bool _264;
frost$core$Bit _265;
bool _266;
frost$core$Object* _269;
org$frostlang$frostc$MethodDecl* _271;
frost$core$Object* _272;
org$frostlang$frostc$MethodDecl* _275;
frost$core$Object* _276;
org$frostlang$frostc$MethodDecl* _281;
org$frostlang$frostc$Annotations** _282;
org$frostlang$frostc$Annotations* _283;
frost$core$Int* _286;
frost$core$Int _287;
frost$core$Int _288;
int64_t _291;
int64_t _292;
int64_t _293;
frost$core$Int _294;
frost$core$Int _296;
int64_t _297;
int64_t _298;
bool _299;
frost$core$Bit _300;
bool _302;
org$frostlang$frostc$MethodDecl* _304;
frost$core$String* _305;
org$frostlang$frostc$MethodDecl* _306;
frost$core$String* _307;
frost$core$Bit _308;
bool _309;
frost$core$Object* _310;
frost$core$Object* _312;
frost$core$Object* _316;
org$frostlang$frostc$MethodDecl* _318;
frost$core$Object* _319;
org$frostlang$frostc$MethodDecl* _322;
frost$core$Object* _323;
frost$collections$Array* _328;
frost$core$Object* _331;
frost$collections$Array* _333;
frost$core$Object* _334;
frost$core$Object* _337;
frost$collections$Array* _340;
org$frostlang$frostc$MethodDecl* _341;
frost$core$Object* _342;
frost$collections$Array* _345;
org$frostlang$frostc$MethodDecl* _346;
frost$core$Object* _347;
org$frostlang$frostc$Methods* _350;
frost$collections$Array* _351;
frost$collections$ListView* _352;
org$frostlang$frostc$Symbol* _354;
frost$core$Object* _355;
frost$core$Object* _357;
frost$collections$Array* _359;
frost$core$Object* _360;
org$frostlang$frostc$MethodDecl* _363;
frost$core$Object* _364;
org$frostlang$frostc$MethodDecl* _367;
frost$core$Object* _368;
frost$core$Object* _373;
frost$core$Int _377;
int64_t _380;
int64_t _381;
bool _382;
frost$core$Bit _383;
bool _385;
bool _388;
frost$core$Bit _389;
bool _390;
frost$core$Int _392;
org$frostlang$frostc$Symbol* _395;
org$frostlang$frostc$Symbol$Kind* _396;
org$frostlang$frostc$Symbol$Kind _397;
frost$core$Int _398;
frost$core$Int _399;
int64_t _402;
int64_t _403;
bool _404;
frost$core$Bit _405;
bool _407;
frost$collections$Array* _410;
org$frostlang$frostc$Methods* _411;
org$frostlang$frostc$FixedArray** _412;
org$frostlang$frostc$FixedArray* _413;
frost$collections$CollectionView* _414;
frost$core$Object* _417;
frost$collections$Array* _419;
frost$core$Object* _420;
frost$core$Object* _423;
org$frostlang$frostc$Methods* _426;
org$frostlang$frostc$FixedArray** _427;
org$frostlang$frostc$FixedArray* _428;
frost$collections$Iterable* _429;
$fn38 _430;
frost$collections$Iterator* _431;
$fn39 _433;
frost$core$Bit _434;
bool _435;
$fn40 _438;
frost$core$Object* _439;
org$frostlang$frostc$MethodDecl* _440;
frost$core$Object* _441;
org$frostlang$frostc$MethodDecl* _443;
frost$core$Object* _444;
org$frostlang$frostc$MethodDecl* _448;
frost$collections$Array* _449;
frost$collections$List* _450;
frost$core$Object* _452;
org$frostlang$frostc$MethodDecl* _454;
frost$core$Object* _455;
frost$core$Object* _459;
org$frostlang$frostc$Methods* _462;
frost$collections$Array* _463;
frost$collections$ListView* _464;
org$frostlang$frostc$Symbol* _466;
frost$core$Object* _467;
frost$core$Object* _469;
frost$collections$Array* _471;
frost$core$Object* _472;
frost$core$Int _476;
int64_t _479;
int64_t _480;
bool _481;
frost$core$Bit _482;
bool _484;
frost$collections$Array* _487;
org$frostlang$frostc$Methods* _488;
org$frostlang$frostc$FixedArray** _489;
org$frostlang$frostc$FixedArray* _490;
frost$collections$CollectionView* _491;
frost$core$Object* _494;
frost$collections$Array* _496;
frost$core$Object* _497;
frost$core$Object* _500;
org$frostlang$frostc$MethodDecl* _503;
frost$collections$Array* _504;
frost$collections$List* _505;
org$frostlang$frostc$Methods* _508;
frost$collections$Array* _509;
frost$collections$ListView* _510;
org$frostlang$frostc$Symbol* _512;
frost$core$Object* _513;
frost$core$Object* _515;
frost$collections$Array* _517;
frost$core$Object* _518;
frost$core$Object* _523;
frost$core$Object* _528;
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
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s41, _32, &$s42);
abort(); // unreachable
block9:;
_35 = param2;
_36 = ($fn43) _35->$class->vtable[2];
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
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s44, _55, &$s45);
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
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s46, _77, &$s47);
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
_95 = (frost$collections$Array*) frostObjectAlloc(sizeof(frost$collections$Array), (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init(_95);
*(&local0) = ((frost$collections$Array*) NULL);
_98 = ((frost$core$Object*) _95);
frost$core$Frost$ref$frost$core$Object$Q(_98);
_100 = *(&local0);
_101 = ((frost$core$Object*) _100);
frost$core$Frost$unref$frost$core$Object$Q(_101);
*(&local0) = _95;
_104 = ((frost$core$Object*) _95);
frost$core$Frost$unref$frost$core$Object$Q(_104);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:95
_107 = *(&local0);
_108 = ((org$frostlang$frostc$MethodDecl*) param1);
_109 = ((frost$core$Object*) _108);
frost$collections$Array$add$frost$collections$Array$T(_107, _109);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:96
_112 = ((org$frostlang$frostc$Methods*) param2);
_113 = &_112->methods;
_114 = *_113;
_115 = ((frost$collections$Iterable*) _114);
ITable* $tmp48 = _115->$class->itable;
while ($tmp48->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp48 = $tmp48->next;
}
_116 = $tmp48->methods[0];
_117 = _116(_115);
goto block24;
block24:;
ITable* $tmp49 = _117->$class->itable;
while ($tmp49->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp49 = $tmp49->next;
}
_119 = $tmp49->methods[0];
_120 = _119(_117);
_121 = _120.value;
if (_121) goto block26; else goto block25;
block25:;
*(&local1) = ((org$frostlang$frostc$MethodDecl*) NULL);
ITable* $tmp50 = _117->$class->itable;
while ($tmp50->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp50 = $tmp50->next;
}
_124 = $tmp50->methods[1];
_125 = _124(_117);
_126 = ((org$frostlang$frostc$MethodDecl*) _125);
_127 = ((frost$core$Object*) _126);
frost$core$Frost$ref$frost$core$Object$Q(_127);
_129 = *(&local1);
_130 = ((frost$core$Object*) _129);
frost$core$Frost$unref$frost$core$Object$Q(_130);
*(&local1) = _126;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:97
_134 = *(&local1);
_135 = *(&local0);
_136 = ((frost$collections$List*) _135);
org$frostlang$frostc$SymbolTable$addIfNotOverridden$org$frostlang$frostc$MethodDecl$frost$collections$List$LTorg$frostlang$frostc$MethodDecl$GT(param0, _134, _136);
_138 = _125;
frost$core$Frost$unref$frost$core$Object$Q(_138);
_140 = *(&local1);
_141 = ((frost$core$Object*) _140);
frost$core$Frost$unref$frost$core$Object$Q(_141);
*(&local1) = ((org$frostlang$frostc$MethodDecl*) NULL);
goto block24;
block26:;
_145 = ((frost$core$Object*) _117);
frost$core$Frost$unref$frost$core$Object$Q(_145);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:99
_148 = (org$frostlang$frostc$Methods*) frostObjectAlloc(sizeof(org$frostlang$frostc$Methods), (frost$core$Class*) &org$frostlang$frostc$Methods$class);
_149 = *(&local0);
_150 = ((frost$collections$ListView*) _149);
org$frostlang$frostc$Methods$init$frost$collections$ListView$LTorg$frostlang$frostc$MethodDecl$GT(_148, _150);
_152 = ((org$frostlang$frostc$Symbol*) _148);
_153 = ((frost$core$Object*) _152);
frost$core$Frost$ref$frost$core$Object$Q(_153);
_155 = ((frost$core$Object*) _148);
frost$core$Frost$unref$frost$core$Object$Q(_155);
_157 = *(&local0);
_158 = ((frost$core$Object*) _157);
frost$core$Frost$unref$frost$core$Object$Q(_158);
*(&local0) = ((frost$collections$Array*) NULL);
return _152;
block22:;
_162 = (frost$core$Int) {5u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SymbolTable.frost:101:37
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_165 = _83.value;
_166 = _162.value;
_167 = _165 == _166;
_168 = (frost$core$Bit) {_167};
_170 = _168.value;
if (_170) goto block27; else goto block28;
block27:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:102
_173 = &param0->compiler;
_174 = *_173;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from SymbolTable.frost:102:44
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
_179 = &_174->_valid;
_180 = *_179;
_182 = _180.value;
if (_182) goto block32; else goto block33;
block33:;
_184 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s51, _184, &$s52);
abort(); // unreachable
block32:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
_188 = &_174->value;
_189 = *_188;
_190 = _189;
_191 = _190;
frost$core$Frost$ref$frost$core$Object$Q(_191);
_194 = ((org$frostlang$frostc$Compiler*) _190);
_195 = ((org$frostlang$frostc$MethodDecl*) param2);
_196 = org$frostlang$frostc$Compiler$getOverriddenMethod$org$frostlang$frostc$MethodDecl$R$org$frostlang$frostc$MethodDecl$Q(_194, _195);
*(&local2) = ((org$frostlang$frostc$MethodDecl*) NULL);
_198 = ((frost$core$Object*) _196);
frost$core$Frost$ref$frost$core$Object$Q(_198);
_200 = *(&local2);
_201 = ((frost$core$Object*) _200);
frost$core$Frost$unref$frost$core$Object$Q(_201);
*(&local2) = _196;
_204 = ((frost$core$Object*) _196);
frost$core$Frost$unref$frost$core$Object$Q(_204);
_206 = _190;
frost$core$Frost$unref$frost$core$Object$Q(_206);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:103
_209 = &param0->compiler;
_210 = *_209;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from SymbolTable.frost:103:44
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
_215 = &_210->_valid;
_216 = *_215;
_218 = _216.value;
if (_218) goto block36; else goto block37;
block37:;
_220 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s53, _220, &$s54);
abort(); // unreachable
block36:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
_224 = &_210->value;
_225 = *_224;
_226 = _225;
_227 = _226;
frost$core$Frost$ref$frost$core$Object$Q(_227);
_230 = ((org$frostlang$frostc$Compiler*) _226);
_231 = ((org$frostlang$frostc$MethodDecl*) param1);
_232 = org$frostlang$frostc$Compiler$getOverriddenMethod$org$frostlang$frostc$MethodDecl$R$org$frostlang$frostc$MethodDecl$Q(_230, _231);
*(&local3) = ((org$frostlang$frostc$MethodDecl*) NULL);
_234 = ((frost$core$Object*) _232);
frost$core$Frost$ref$frost$core$Object$Q(_234);
_236 = *(&local3);
_237 = ((frost$core$Object*) _236);
frost$core$Frost$unref$frost$core$Object$Q(_237);
*(&local3) = _232;
_240 = ((frost$core$Object*) _232);
frost$core$Frost$unref$frost$core$Object$Q(_240);
_242 = _226;
frost$core$Frost$unref$frost$core$Object$Q(_242);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:104
_245 = *(&local2);
_246 = ((org$frostlang$frostc$MethodDecl*) param1);
_247 = _245 == _246;
_248 = (frost$core$Bit) {_247};
_249 = _248.value;
if (_249) goto block38; else goto block41;
block41:;
_251 = *(&local3);
_252 = ((org$frostlang$frostc$MethodDecl*) param2);
_253 = _251 == _252;
_254 = (frost$core$Bit) {_253};
_255 = _254.value;
if (_255) goto block38; else goto block40;
block40:;
_257 = *(&local2);
_258 = _257 != NULL;
_259 = (frost$core$Bit) {_258};
_260 = _259.value;
if (_260) goto block42; else goto block39;
block42:;
_262 = *(&local2);
_263 = *(&local3);
_264 = _262 == _263;
_265 = (frost$core$Bit) {_264};
_266 = _265.value;
if (_266) goto block38; else goto block39;
block38:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:107
_269 = ((frost$core$Object*) param1);
frost$core$Frost$ref$frost$core$Object$Q(_269);
_271 = *(&local3);
_272 = ((frost$core$Object*) _271);
frost$core$Frost$unref$frost$core$Object$Q(_272);
*(&local3) = ((org$frostlang$frostc$MethodDecl*) NULL);
_275 = *(&local2);
_276 = ((frost$core$Object*) _275);
frost$core$Frost$unref$frost$core$Object$Q(_276);
*(&local2) = ((org$frostlang$frostc$MethodDecl*) NULL);
return param1;
block39:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:109
_281 = ((org$frostlang$frostc$MethodDecl*) param2);
_282 = &_281->annotations;
_283 = *_282;
// begin inline call to function org.frostlang.frostc.Annotations.get_isDefault():frost.core.Bit from SymbolTable.frost:109:37
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:169
_286 = &_283->flags;
_287 = *_286;
_288 = (frost$core$Int) {32768u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:169:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:293
_291 = _287.value;
_292 = _288.value;
_293 = _291 & _292;
_294 = (frost$core$Int) {_293};
_296 = (frost$core$Int) {0u};
_297 = _294.value;
_298 = _296.value;
_299 = _297 != _298;
_300 = (frost$core$Bit) {_299};
_302 = _300.value;
if (_302) goto block45; else goto block44;
block45:;
_304 = ((org$frostlang$frostc$MethodDecl*) param2);
_305 = org$frostlang$frostc$MethodDecl$get_signature$R$frost$core$String(_304);
_306 = ((org$frostlang$frostc$MethodDecl*) param1);
_307 = org$frostlang$frostc$MethodDecl$get_signature$R$frost$core$String(_306);
_308 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(_305, _307);
_309 = _308.value;
_310 = ((frost$core$Object*) _307);
frost$core$Frost$unref$frost$core$Object$Q(_310);
_312 = ((frost$core$Object*) _305);
frost$core$Frost$unref$frost$core$Object$Q(_312);
if (_309) goto block43; else goto block44;
block43:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:111
_316 = ((frost$core$Object*) param1);
frost$core$Frost$ref$frost$core$Object$Q(_316);
_318 = *(&local3);
_319 = ((frost$core$Object*) _318);
frost$core$Frost$unref$frost$core$Object$Q(_319);
*(&local3) = ((org$frostlang$frostc$MethodDecl*) NULL);
_322 = *(&local2);
_323 = ((frost$core$Object*) _322);
frost$core$Frost$unref$frost$core$Object$Q(_323);
*(&local2) = ((org$frostlang$frostc$MethodDecl*) NULL);
return param1;
block44:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:113
_328 = (frost$collections$Array*) frostObjectAlloc(sizeof(frost$collections$Array), (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init(_328);
*(&local4) = ((frost$collections$Array*) NULL);
_331 = ((frost$core$Object*) _328);
frost$core$Frost$ref$frost$core$Object$Q(_331);
_333 = *(&local4);
_334 = ((frost$core$Object*) _333);
frost$core$Frost$unref$frost$core$Object$Q(_334);
*(&local4) = _328;
_337 = ((frost$core$Object*) _328);
frost$core$Frost$unref$frost$core$Object$Q(_337);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:114
_340 = *(&local4);
_341 = ((org$frostlang$frostc$MethodDecl*) param1);
_342 = ((frost$core$Object*) _341);
frost$collections$Array$add$frost$collections$Array$T(_340, _342);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:115
_345 = *(&local4);
_346 = ((org$frostlang$frostc$MethodDecl*) param2);
_347 = ((frost$core$Object*) _346);
frost$collections$Array$add$frost$collections$Array$T(_345, _347);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:116
_350 = (org$frostlang$frostc$Methods*) frostObjectAlloc(sizeof(org$frostlang$frostc$Methods), (frost$core$Class*) &org$frostlang$frostc$Methods$class);
_351 = *(&local4);
_352 = ((frost$collections$ListView*) _351);
org$frostlang$frostc$Methods$init$frost$collections$ListView$LTorg$frostlang$frostc$MethodDecl$GT(_350, _352);
_354 = ((org$frostlang$frostc$Symbol*) _350);
_355 = ((frost$core$Object*) _354);
frost$core$Frost$ref$frost$core$Object$Q(_355);
_357 = ((frost$core$Object*) _350);
frost$core$Frost$unref$frost$core$Object$Q(_357);
_359 = *(&local4);
_360 = ((frost$core$Object*) _359);
frost$core$Frost$unref$frost$core$Object$Q(_360);
*(&local4) = ((frost$collections$Array*) NULL);
_363 = *(&local3);
_364 = ((frost$core$Object*) _363);
frost$core$Frost$unref$frost$core$Object$Q(_364);
*(&local3) = ((org$frostlang$frostc$MethodDecl*) NULL);
_367 = *(&local2);
_368 = ((frost$core$Object*) _367);
frost$core$Frost$unref$frost$core$Object$Q(_368);
*(&local2) = ((org$frostlang$frostc$MethodDecl*) NULL);
return _354;
block28:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:119
_373 = ((frost$core$Object*) param1);
frost$core$Frost$ref$frost$core$Object$Q(_373);
return param1;
block20:;
goto block14;
block16:;
_377 = (frost$core$Int) {6u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SymbolTable.frost:123:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_380 = _61.value;
_381 = _377.value;
_382 = _380 == _381;
_383 = (frost$core$Bit) {_382};
_385 = _383.value;
if (_385) goto block48; else goto block49;
block48:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:124
_388 = param2 != NULL;
_389 = (frost$core$Bit) {_388};
_390 = _389.value;
if (_390) goto block51; else goto block52;
block52:;
_392 = (frost$core$Int) {124u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s55, _392, &$s56);
abort(); // unreachable
block51:;
_395 = param2;
_396 = &_395->kind;
_397 = *_396;
_398 = _397.$rawValue;
_399 = (frost$core$Int) {6u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SymbolTable.frost:125:37
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_402 = _398.value;
_403 = _399.value;
_404 = _402 == _403;
_405 = (frost$core$Bit) {_404};
_407 = _405.value;
if (_407) goto block54; else goto block55;
block54:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:126
_410 = (frost$collections$Array*) frostObjectAlloc(sizeof(frost$collections$Array), (frost$core$Class*) &frost$collections$Array$class);
_411 = ((org$frostlang$frostc$Methods*) param1);
_412 = &_411->methods;
_413 = *_412;
_414 = ((frost$collections$CollectionView*) _413);
frost$collections$Array$init$frost$collections$CollectionView$LTfrost$collections$Array$T$GT(_410, _414);
*(&local5) = ((frost$collections$Array*) NULL);
_417 = ((frost$core$Object*) _410);
frost$core$Frost$ref$frost$core$Object$Q(_417);
_419 = *(&local5);
_420 = ((frost$core$Object*) _419);
frost$core$Frost$unref$frost$core$Object$Q(_420);
*(&local5) = _410;
_423 = ((frost$core$Object*) _410);
frost$core$Frost$unref$frost$core$Object$Q(_423);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:127
_426 = ((org$frostlang$frostc$Methods*) param2);
_427 = &_426->methods;
_428 = *_427;
_429 = ((frost$collections$Iterable*) _428);
ITable* $tmp57 = _429->$class->itable;
while ($tmp57->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp57 = $tmp57->next;
}
_430 = $tmp57->methods[0];
_431 = _430(_429);
goto block57;
block57:;
ITable* $tmp58 = _431->$class->itable;
while ($tmp58->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp58 = $tmp58->next;
}
_433 = $tmp58->methods[0];
_434 = _433(_431);
_435 = _434.value;
if (_435) goto block59; else goto block58;
block58:;
*(&local6) = ((org$frostlang$frostc$MethodDecl*) NULL);
ITable* $tmp59 = _431->$class->itable;
while ($tmp59->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp59 = $tmp59->next;
}
_438 = $tmp59->methods[1];
_439 = _438(_431);
_440 = ((org$frostlang$frostc$MethodDecl*) _439);
_441 = ((frost$core$Object*) _440);
frost$core$Frost$ref$frost$core$Object$Q(_441);
_443 = *(&local6);
_444 = ((frost$core$Object*) _443);
frost$core$Frost$unref$frost$core$Object$Q(_444);
*(&local6) = _440;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:128
_448 = *(&local6);
_449 = *(&local5);
_450 = ((frost$collections$List*) _449);
org$frostlang$frostc$SymbolTable$addIfNotOverridden$org$frostlang$frostc$MethodDecl$frost$collections$List$LTorg$frostlang$frostc$MethodDecl$GT(param0, _448, _450);
_452 = _439;
frost$core$Frost$unref$frost$core$Object$Q(_452);
_454 = *(&local6);
_455 = ((frost$core$Object*) _454);
frost$core$Frost$unref$frost$core$Object$Q(_455);
*(&local6) = ((org$frostlang$frostc$MethodDecl*) NULL);
goto block57;
block59:;
_459 = ((frost$core$Object*) _431);
frost$core$Frost$unref$frost$core$Object$Q(_459);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:130
_462 = (org$frostlang$frostc$Methods*) frostObjectAlloc(sizeof(org$frostlang$frostc$Methods), (frost$core$Class*) &org$frostlang$frostc$Methods$class);
_463 = *(&local5);
_464 = ((frost$collections$ListView*) _463);
org$frostlang$frostc$Methods$init$frost$collections$ListView$LTorg$frostlang$frostc$MethodDecl$GT(_462, _464);
_466 = ((org$frostlang$frostc$Symbol*) _462);
_467 = ((frost$core$Object*) _466);
frost$core$Frost$ref$frost$core$Object$Q(_467);
_469 = ((frost$core$Object*) _462);
frost$core$Frost$unref$frost$core$Object$Q(_469);
_471 = *(&local5);
_472 = ((frost$core$Object*) _471);
frost$core$Frost$unref$frost$core$Object$Q(_472);
*(&local5) = ((frost$collections$Array*) NULL);
return _466;
block55:;
_476 = (frost$core$Int) {5u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SymbolTable.frost:132:37
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_479 = _398.value;
_480 = _476.value;
_481 = _479 == _480;
_482 = (frost$core$Bit) {_481};
_484 = _482.value;
if (_484) goto block60; else goto block61;
block60:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:133
_487 = (frost$collections$Array*) frostObjectAlloc(sizeof(frost$collections$Array), (frost$core$Class*) &frost$collections$Array$class);
_488 = ((org$frostlang$frostc$Methods*) param1);
_489 = &_488->methods;
_490 = *_489;
_491 = ((frost$collections$CollectionView*) _490);
frost$collections$Array$init$frost$collections$CollectionView$LTfrost$collections$Array$T$GT(_487, _491);
*(&local7) = ((frost$collections$Array*) NULL);
_494 = ((frost$core$Object*) _487);
frost$core$Frost$ref$frost$core$Object$Q(_494);
_496 = *(&local7);
_497 = ((frost$core$Object*) _496);
frost$core$Frost$unref$frost$core$Object$Q(_497);
*(&local7) = _487;
_500 = ((frost$core$Object*) _487);
frost$core$Frost$unref$frost$core$Object$Q(_500);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:134
_503 = ((org$frostlang$frostc$MethodDecl*) param2);
_504 = *(&local7);
_505 = ((frost$collections$List*) _504);
org$frostlang$frostc$SymbolTable$addIfNotOverridden$org$frostlang$frostc$MethodDecl$frost$collections$List$LTorg$frostlang$frostc$MethodDecl$GT(param0, _503, _505);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:135
_508 = (org$frostlang$frostc$Methods*) frostObjectAlloc(sizeof(org$frostlang$frostc$Methods), (frost$core$Class*) &org$frostlang$frostc$Methods$class);
_509 = *(&local7);
_510 = ((frost$collections$ListView*) _509);
org$frostlang$frostc$Methods$init$frost$collections$ListView$LTorg$frostlang$frostc$MethodDecl$GT(_508, _510);
_512 = ((org$frostlang$frostc$Symbol*) _508);
_513 = ((frost$core$Object*) _512);
frost$core$Frost$ref$frost$core$Object$Q(_513);
_515 = ((frost$core$Object*) _508);
frost$core$Frost$unref$frost$core$Object$Q(_515);
_517 = *(&local7);
_518 = ((frost$core$Object*) _517);
frost$core$Frost$unref$frost$core$Object$Q(_518);
*(&local7) = ((frost$collections$Array*) NULL);
return _512;
block61:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:138
_523 = ((frost$core$Object*) param1);
frost$core$Frost$ref$frost$core$Object$Q(_523);
return param1;
block53:;
goto block14;
block49:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:143
_528 = ((frost$core$Object*) param1);
frost$core$Frost$ref$frost$core$Object$Q(_528);
return param1;
block14:;
goto block63;
block63:;

}
org$frostlang$frostc$Symbol* org$frostlang$frostc$SymbolTable$$IDX$frost$core$String$R$org$frostlang$frostc$Symbol$Q(void* rawSelf, frost$core$String* param1) {
org$frostlang$frostc$SymbolTable* param0 = (org$frostlang$frostc$SymbolTable*) rawSelf;

org$frostlang$frostc$Symbol* local0 = NULL;
org$frostlang$frostc$SymbolTable* local1 = NULL;
frost$collections$HashMap** _1;
frost$collections$HashMap* _2;
frost$collections$HashKey* _3;
frost$core$Object* _4;
org$frostlang$frostc$Symbol* _5;
frost$core$Object* _7;
org$frostlang$frostc$Symbol* _9;
frost$core$Object* _10;
frost$core$Object* _13;
org$frostlang$frostc$Symbol* _16;
bool _17;
frost$core$Bit _18;
bool _19;
frost$collections$HashMap** _22;
frost$collections$HashMap* _23;
frost$collections$HashKey* _24;
frost$core$Object* _25;
org$frostlang$frostc$Symbol* _26;
frost$core$Object* _27;
org$frostlang$frostc$Symbol* _29;
frost$core$Object* _30;
frost$core$Object* _33;
frost$collections$Array** _36;
frost$collections$Array* _37;
frost$collections$Iterable* _38;
$fn60 _39;
frost$collections$Iterator* _40;
$fn61 _42;
frost$core$Bit _43;
bool _44;
$fn62 _47;
frost$core$Object* _48;
org$frostlang$frostc$SymbolTable* _49;
frost$core$Object* _50;
org$frostlang$frostc$SymbolTable* _52;
frost$core$Object* _53;
org$frostlang$frostc$Symbol* _57;
org$frostlang$frostc$SymbolTable* _58;
org$frostlang$frostc$Symbol* _59;
org$frostlang$frostc$Symbol* _60;
frost$core$Object* _61;
org$frostlang$frostc$Symbol* _63;
frost$core$Object* _64;
frost$core$Object* _67;
frost$core$Object* _69;
frost$core$Object* _71;
org$frostlang$frostc$SymbolTable* _73;
frost$core$Object* _74;
frost$core$Object* _78;
org$frostlang$frostc$Symbol* _81;
bool _82;
frost$core$Bit _83;
bool _84;
frost$collections$HashMap** _87;
frost$collections$HashMap* _88;
frost$collections$HashKey* _89;
org$frostlang$frostc$Symbol* _90;
bool _91;
frost$core$Bit _92;
bool _93;
frost$core$Int _95;
org$frostlang$frostc$Symbol* _98;
frost$core$Object* _99;
org$frostlang$frostc$Symbol* _104;
frost$core$Object* _105;
org$frostlang$frostc$Symbol* _107;
frost$core$Object* _108;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:149
_1 = &param0->merged;
_2 = *_1;
_3 = ((frost$collections$HashKey*) param1);
_4 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q(_2, _3);
_5 = ((org$frostlang$frostc$Symbol*) _4);
*(&local0) = ((org$frostlang$frostc$Symbol*) NULL);
_7 = ((frost$core$Object*) _5);
frost$core$Frost$ref$frost$core$Object$Q(_7);
_9 = *(&local0);
_10 = ((frost$core$Object*) _9);
frost$core$Frost$unref$frost$core$Object$Q(_10);
*(&local0) = _5;
_13 = _4;
frost$core$Frost$unref$frost$core$Object$Q(_13);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:150
_16 = *(&local0);
_17 = _16 == NULL;
_18 = (frost$core$Bit) {_17};
_19 = _18.value;
if (_19) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:151
_22 = &param0->symbols;
_23 = *_22;
_24 = ((frost$collections$HashKey*) param1);
_25 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q(_23, _24);
_26 = ((org$frostlang$frostc$Symbol*) _25);
_27 = ((frost$core$Object*) _26);
frost$core$Frost$ref$frost$core$Object$Q(_27);
_29 = *(&local0);
_30 = ((frost$core$Object*) _29);
frost$core$Frost$unref$frost$core$Object$Q(_30);
*(&local0) = _26;
_33 = _25;
frost$core$Frost$unref$frost$core$Object$Q(_33);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:152
_36 = &param0->parents;
_37 = *_36;
_38 = ((frost$collections$Iterable*) _37);
ITable* $tmp63 = _38->$class->itable;
while ($tmp63->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp63 = $tmp63->next;
}
_39 = $tmp63->methods[0];
_40 = _39(_38);
goto block3;
block3:;
ITable* $tmp64 = _40->$class->itable;
while ($tmp64->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp64 = $tmp64->next;
}
_42 = $tmp64->methods[0];
_43 = _42(_40);
_44 = _43.value;
if (_44) goto block5; else goto block4;
block4:;
*(&local1) = ((org$frostlang$frostc$SymbolTable*) NULL);
ITable* $tmp65 = _40->$class->itable;
while ($tmp65->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp65 = $tmp65->next;
}
_47 = $tmp65->methods[1];
_48 = _47(_40);
_49 = ((org$frostlang$frostc$SymbolTable*) _48);
_50 = ((frost$core$Object*) _49);
frost$core$Frost$ref$frost$core$Object$Q(_50);
_52 = *(&local1);
_53 = ((frost$core$Object*) _52);
frost$core$Frost$unref$frost$core$Object$Q(_53);
*(&local1) = _49;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:153
_57 = *(&local0);
_58 = *(&local1);
_59 = org$frostlang$frostc$SymbolTable$$IDX$frost$core$String$R$org$frostlang$frostc$Symbol$Q(_58, param1);
_60 = org$frostlang$frostc$SymbolTable$merge$org$frostlang$frostc$Symbol$Q$org$frostlang$frostc$Symbol$Q$R$org$frostlang$frostc$Symbol$Q(param0, _57, _59);
_61 = ((frost$core$Object*) _60);
frost$core$Frost$ref$frost$core$Object$Q(_61);
_63 = *(&local0);
_64 = ((frost$core$Object*) _63);
frost$core$Frost$unref$frost$core$Object$Q(_64);
*(&local0) = _60;
_67 = ((frost$core$Object*) _60);
frost$core$Frost$unref$frost$core$Object$Q(_67);
_69 = ((frost$core$Object*) _59);
frost$core$Frost$unref$frost$core$Object$Q(_69);
_71 = _48;
frost$core$Frost$unref$frost$core$Object$Q(_71);
_73 = *(&local1);
_74 = ((frost$core$Object*) _73);
frost$core$Frost$unref$frost$core$Object$Q(_74);
*(&local1) = ((org$frostlang$frostc$SymbolTable*) NULL);
goto block3;
block5:;
_78 = ((frost$core$Object*) _40);
frost$core$Frost$unref$frost$core$Object$Q(_78);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:155
_81 = *(&local0);
_82 = _81 != NULL;
_83 = (frost$core$Bit) {_82};
_84 = _83.value;
if (_84) goto block6; else goto block7;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:156
_87 = &param0->merged;
_88 = *_87;
_89 = ((frost$collections$HashKey*) param1);
_90 = *(&local0);
_91 = _90 != NULL;
_92 = (frost$core$Bit) {_91};
_93 = _92.value;
if (_93) goto block8; else goto block9;
block9:;
_95 = (frost$core$Int) {156u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s66, _95, &$s67);
abort(); // unreachable
block8:;
_98 = _90;
_99 = ((frost$core$Object*) _98);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V(_88, _89, _99);
goto block7;
block7:;
goto block2;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:159
_104 = *(&local0);
_105 = ((frost$core$Object*) _104);
frost$core$Frost$ref$frost$core$Object$Q(_105);
_107 = *(&local0);
_108 = ((frost$core$Object*) _107);
frost$core$Frost$unref$frost$core$Object$Q(_108);
*(&local0) = ((org$frostlang$frostc$Symbol*) NULL);
return _104;

}
frost$core$String* org$frostlang$frostc$SymbolTable$get_asString$R$frost$core$String(void* rawSelf) {
org$frostlang$frostc$SymbolTable* param0 = (org$frostlang$frostc$SymbolTable*) rawSelf;

frost$collections$Array** _1;
frost$collections$Array* _2;
frost$collections$CollectionView* _3;
$fn68 _4;
frost$core$Int _5;
frost$core$Object* _6;
$fn69 _9;
frost$core$String* _10;
frost$core$String* _11;
frost$core$Object* _12;
frost$core$Object* _14;
frost$core$Object* _16;
frost$core$String* _19;
frost$collections$HashMap** _20;
frost$collections$HashMap* _21;
frost$core$Object* _22;
$fn70 _25;
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
ITable* $tmp71 = _3->$class->itable;
while ($tmp71->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp71 = $tmp71->next;
}
_4 = $tmp71->methods[0];
_5 = _4(_3);
frost$core$Int$wrapper* $tmp72;
$tmp72 = (frost$core$Int$wrapper*) frostObjectAlloc(sizeof(frost$core$Int$wrapper), (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp72->value = _5;
_6 = ((frost$core$Object*) $tmp72);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from SymbolTable.frost:164:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
_9 = ($fn73) _6->$class->vtable[0];
_10 = _9(_6);
_11 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s74, _10);
_12 = ((frost$core$Object*) _11);
frost$core$Frost$ref$frost$core$Object$Q(_12);
_14 = ((frost$core$Object*) _11);
frost$core$Frost$unref$frost$core$Object$Q(_14);
_16 = ((frost$core$Object*) _10);
frost$core$Frost$unref$frost$core$Object$Q(_16);
_19 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_11, &$s75);
_20 = &param0->symbols;
_21 = *_20;
_22 = ((frost$core$Object*) _21);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from SymbolTable.frost:164:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
_25 = ($fn76) _22->$class->vtable[0];
_26 = _25(_22);
_27 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_19, _26);
_28 = ((frost$core$Object*) _27);
frost$core$Frost$ref$frost$core$Object$Q(_28);
_30 = ((frost$core$Object*) _27);
frost$core$Frost$unref$frost$core$Object$Q(_30);
_32 = ((frost$core$Object*) _26);
frost$core$Frost$unref$frost$core$Object$Q(_32);
_35 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_27, &$s77);
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
void org$frostlang$frostc$SymbolTable$cleanup(void* rawSelf) {
org$frostlang$frostc$SymbolTable* param0 = (org$frostlang$frostc$SymbolTable*) rawSelf;

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


frost$unsafe$Pointer frost$unsafe$Pointer$init$builtin_int(int64_t p_value);




