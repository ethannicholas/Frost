#include "org/frostlang/frostc/MemoryLayout.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/Compiler.h"
#include "frost/collections/IdentityMap.h"
#include "frost/core/Weak.h"
#include "frost/core/Frost.h"
#include "frost/core/Int.h"
#include "org/frostlang/frostc/Type.h"
#include "frost/core/Bit.h"
#include "org/frostlang/frostc/ClassDecl.h"
#include "org/frostlang/frostc/FieldDecl.h"
#include "org/frostlang/frostc/Type/Kind.h"
#include "org/frostlang/frostc/Symbol.h"
#include "frost/core/Equatable.h"
#include "org/frostlang/frostc/Compiler/Settings.h"
#include "frost/collections/ListView.h"
#include "frost/collections/Iterable.h"
#include "frost/collections/Iterator.h"
#include "org/frostlang/frostc/Annotations.h"
#include "org/frostlang/frostc/Compiler/Resolution.h"
#include "org/frostlang/frostc/ChoiceCase.h"
#include "frost/collections/Array.h"
#include "frost/core/Range.LTfrost/core/Int.GT.h"
#include "frost/collections/CollectionView.h"
#include "frost/unsafe/Pointer.h"
#include "frost/core/Int64.h"

frost$unsafe$Pointer frost$unsafe$Pointer$init$builtin_int(int64_t p_value);

static frost$core$String $s1;
org$frostlang$frostc$MemoryLayout$class_type org$frostlang$frostc$MemoryLayout$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$MemoryLayout$cleanup, org$frostlang$frostc$MemoryLayout$get_intSize$R$frost$core$Int, org$frostlang$frostc$MemoryLayout$get_pointerSize$R$frost$core$Int, org$frostlang$frostc$MemoryLayout$fieldSize$org$frostlang$frostc$Type$R$frost$core$Int, org$frostlang$frostc$MemoryLayout$alignment$org$frostlang$frostc$Type$R$frost$core$Int, org$frostlang$frostc$MemoryLayout$computeLayout$org$frostlang$frostc$ClassDecl, org$frostlang$frostc$MemoryLayout$sizeOf$org$frostlang$frostc$Type$R$frost$core$Int, org$frostlang$frostc$MemoryLayout$stride$org$frostlang$frostc$Type$R$frost$core$Int, org$frostlang$frostc$MemoryLayout$sizeOfWrapper$org$frostlang$frostc$Type$R$frost$core$Int, org$frostlang$frostc$MemoryLayout$getChoiceDataSize$org$frostlang$frostc$ClassDecl$R$frost$core$Int, org$frostlang$frostc$MemoryLayout$getChoiceFieldOffset$org$frostlang$frostc$ChoiceCase$frost$core$Int$R$frost$core$Int} };

typedef frost$core$String* (*$fn2)(frost$core$Object*);
typedef frost$core$Bit (*$fn3)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn4)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int (*$fn5)(org$frostlang$frostc$MemoryLayout*);
typedef frost$collections$Iterator* (*$fn6)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn7)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn8)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn9)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int (*$fn10)(org$frostlang$frostc$MemoryLayout*, org$frostlang$frostc$ClassDecl*);
typedef frost$core$Int (*$fn11)(org$frostlang$frostc$MemoryLayout*, org$frostlang$frostc$Type*);
typedef frost$core$Bit (*$fn12)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int (*$fn13)(org$frostlang$frostc$MemoryLayout*, org$frostlang$frostc$Type*);
typedef frost$core$String* (*$fn14)(frost$core$Object*);
typedef frost$core$Int (*$fn40)(org$frostlang$frostc$MemoryLayout*);
typedef frost$core$Int (*$fn57)(org$frostlang$frostc$MemoryLayout*, org$frostlang$frostc$ClassDecl*);
typedef frost$core$Int (*$fn58)(org$frostlang$frostc$MemoryLayout*, org$frostlang$frostc$Type*);
typedef frost$core$Int (*$fn63)(org$frostlang$frostc$MemoryLayout*, org$frostlang$frostc$Type*);
typedef frost$core$Int (*$fn64)(org$frostlang$frostc$MemoryLayout*, org$frostlang$frostc$Type*);
typedef frost$core$Int (*$fn65)(org$frostlang$frostc$MemoryLayout*);
typedef frost$core$Int (*$fn66)(org$frostlang$frostc$MemoryLayout*);
typedef frost$collections$Iterator* (*$fn67)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn68)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn69)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn70)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int (*$fn71)(org$frostlang$frostc$MemoryLayout*, org$frostlang$frostc$Type*);
typedef frost$core$Int (*$fn72)(org$frostlang$frostc$MemoryLayout*, org$frostlang$frostc$Type*);
typedef frost$core$Int (*$fn80)(org$frostlang$frostc$MemoryLayout*);
typedef frost$core$Int (*$fn85)(org$frostlang$frostc$MemoryLayout*);
typedef frost$core$Int (*$fn104)(org$frostlang$frostc$MemoryLayout*, org$frostlang$frostc$Type*);
typedef frost$core$Int (*$fn108)(org$frostlang$frostc$MemoryLayout*, org$frostlang$frostc$Type*);
typedef frost$core$Int (*$fn109)(org$frostlang$frostc$MemoryLayout*, org$frostlang$frostc$Type*);
typedef frost$core$Int (*$fn110)(org$frostlang$frostc$MemoryLayout*, org$frostlang$frostc$Type*);
typedef frost$core$String* (*$fn111)(frost$core$Object*);
typedef frost$core$Bit (*$fn112)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$collections$Iterator* (*$fn113)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn114)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn115)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn116)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int (*$fn117)(org$frostlang$frostc$MemoryLayout*, org$frostlang$frostc$ClassDecl*);
typedef frost$core$Int (*$fn118)(org$frostlang$frostc$MemoryLayout*, org$frostlang$frostc$Type*);
typedef frost$core$Int (*$fn119)(org$frostlang$frostc$MemoryLayout*, org$frostlang$frostc$Type*);
typedef frost$core$String* (*$fn120)(frost$core$Object*);
typedef frost$core$String* (*$fn121)(frost$core$Object*);
typedef frost$core$String* (*$fn122)(frost$core$Object*);
typedef frost$core$Int (*$fn123)(org$frostlang$frostc$MemoryLayout*, org$frostlang$frostc$Type*);
typedef frost$core$Bit (*$fn124)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int (*$fn125)(org$frostlang$frostc$MemoryLayout*, org$frostlang$frostc$Type*);
typedef frost$core$Int (*$fn126)(org$frostlang$frostc$MemoryLayout*, org$frostlang$frostc$Type*);
typedef frost$core$String* (*$fn129)(frost$core$Object*);
typedef frost$core$Int (*$fn163)(org$frostlang$frostc$MemoryLayout*, org$frostlang$frostc$ClassDecl*);
typedef frost$core$Int (*$fn164)(org$frostlang$frostc$MemoryLayout*, org$frostlang$frostc$Type*);
typedef frost$core$Int (*$fn165)(org$frostlang$frostc$MemoryLayout*, org$frostlang$frostc$Type*);
typedef frost$core$String* (*$fn166)(frost$core$Object*);
typedef frost$core$String* (*$fn169)(frost$core$Object*);
typedef frost$core$String* (*$fn172)(frost$core$Object*);
typedef frost$core$Int (*$fn175)(org$frostlang$frostc$MemoryLayout*, org$frostlang$frostc$Type*);
typedef frost$core$Int (*$fn183)(org$frostlang$frostc$MemoryLayout*, org$frostlang$frostc$Type*);
typedef frost$core$Int (*$fn187)(org$frostlang$frostc$MemoryLayout*, org$frostlang$frostc$Type*);
typedef frost$core$Int (*$fn188)(org$frostlang$frostc$MemoryLayout*, org$frostlang$frostc$Type*);
typedef frost$core$Int (*$fn189)(org$frostlang$frostc$MemoryLayout*, org$frostlang$frostc$Type*);
typedef frost$collections$Iterator* (*$fn190)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn191)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn192)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn193)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int (*$fn194)(org$frostlang$frostc$MemoryLayout*, org$frostlang$frostc$ClassDecl*);
typedef frost$core$Int (*$fn195)(org$frostlang$frostc$MemoryLayout*, org$frostlang$frostc$Type*);
typedef frost$core$Bit (*$fn196)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int (*$fn206)(org$frostlang$frostc$MemoryLayout*, org$frostlang$frostc$Type*);
typedef frost$core$Int (*$fn223)(org$frostlang$frostc$MemoryLayout*, org$frostlang$frostc$ClassDecl*);
typedef frost$core$Int (*$fn224)(org$frostlang$frostc$MemoryLayout*, org$frostlang$frostc$Type*);
typedef frost$collections$Iterator* (*$fn229)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn230)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn231)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn232)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn233)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn234)(frost$collections$Iterator*);
typedef frost$core$Int (*$fn235)(org$frostlang$frostc$MemoryLayout*, org$frostlang$frostc$Type*);
typedef frost$core$Int (*$fn244)(org$frostlang$frostc$MemoryLayout*, org$frostlang$frostc$Type*);
typedef frost$core$Int (*$fn252)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn253)(org$frostlang$frostc$MemoryLayout*, org$frostlang$frostc$Type*);
typedef frost$core$Int (*$fn257)(org$frostlang$frostc$MemoryLayout*, org$frostlang$frostc$Type*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x6d\x6f\x72\x79\x4c\x61\x79\x6f\x75\x74", 33, 8784050979380734961, NULL };
static frost$core$String $s15 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x74\x79\x70\x65\x20", 5, -4937494473629816297, NULL };
static frost$core$String $s16 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x20\x77\x61\x73\x20\x75\x6e\x72\x65\x73\x6f\x6c\x76\x65\x64", 15, -7400242096793549389, NULL };
static frost$core$String $s17 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x4d\x65\x6d\x6f\x72\x79\x4c\x61\x79\x6f\x75\x74\x2e\x66\x72\x6f\x73\x74", 18, 5644840658914162624, NULL };
static frost$core$String $s18 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s19 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x64\x65\x72\x65\x66\x65\x72\x65\x6e\x63\x69\x6e\x67\x20\x77\x65\x61\x6b\x20\x70\x6f\x69\x6e\x74\x65\x72\x20\x61\x66\x74\x65\x72\x20\x69\x74\x73\x20\x72\x65\x66\x65\x72\x65\x6e\x74\x20\x77\x61\x73\x20\x64\x65\x73\x74\x72\x6f\x79\x65\x64", 59, 1822743730076196218, NULL };
static frost$core$String $s23 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x38", 1, -5808599754107409849, NULL };
static frost$core$String $s24 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x31\x36", 2, 574367315260998974, NULL };
static frost$core$String $s25 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x33\x32", 2, 576315649865810416, NULL };
static frost$core$String $s26 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x36\x34", 2, 573522890330722151, NULL };
static frost$core$String $s27 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s28 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x64\x65\x72\x65\x66\x65\x72\x65\x6e\x63\x69\x6e\x67\x20\x77\x65\x61\x6b\x20\x70\x6f\x69\x6e\x74\x65\x72\x20\x61\x66\x74\x65\x72\x20\x69\x74\x73\x20\x72\x65\x66\x65\x72\x65\x6e\x74\x20\x77\x61\x73\x20\x64\x65\x73\x74\x72\x6f\x79\x65\x64", 59, 1822743730076196218, NULL };
static frost$core$String $s29 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s30 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x64\x65\x72\x65\x66\x65\x72\x65\x6e\x63\x69\x6e\x67\x20\x77\x65\x61\x6b\x20\x70\x6f\x69\x6e\x74\x65\x72\x20\x61\x66\x74\x65\x72\x20\x69\x74\x73\x20\x72\x65\x66\x65\x72\x65\x6e\x74\x20\x77\x61\x73\x20\x64\x65\x73\x74\x72\x6f\x79\x65\x64", 59, 1822743730076196218, NULL };
static frost$core$String $s34 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s35 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x64\x65\x72\x65\x66\x65\x72\x65\x6e\x63\x69\x6e\x67\x20\x77\x65\x61\x6b\x20\x70\x6f\x69\x6e\x74\x65\x72\x20\x61\x66\x74\x65\x72\x20\x69\x74\x73\x20\x72\x65\x66\x65\x72\x65\x6e\x74\x20\x77\x61\x73\x20\x64\x65\x73\x74\x72\x6f\x79\x65\x64", 59, 1822743730076196218, NULL };
static frost$core$String $s36 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s37 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x64\x65\x72\x65\x66\x65\x72\x65\x6e\x63\x69\x6e\x67\x20\x77\x65\x61\x6b\x20\x70\x6f\x69\x6e\x74\x65\x72\x20\x61\x66\x74\x65\x72\x20\x69\x74\x73\x20\x72\x65\x66\x65\x72\x65\x6e\x74\x20\x77\x61\x73\x20\x64\x65\x73\x74\x72\x6f\x79\x65\x64", 59, 1822743730076196218, NULL };
static frost$core$String $s38 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x4d\x65\x6d\x6f\x72\x79\x4c\x61\x79\x6f\x75\x74\x2e\x66\x72\x6f\x73\x74", 18, 5644840658914162624, NULL };
static frost$core$String $s39 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, -4241746971283918425, NULL };
static frost$core$String $s41 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s42 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x64\x65\x72\x65\x66\x65\x72\x65\x6e\x63\x69\x6e\x67\x20\x77\x65\x61\x6b\x20\x70\x6f\x69\x6e\x74\x65\x72\x20\x61\x66\x74\x65\x72\x20\x69\x74\x73\x20\x72\x65\x66\x65\x72\x65\x6e\x74\x20\x77\x61\x73\x20\x64\x65\x73\x74\x72\x6f\x79\x65\x64", 59, 1822743730076196218, NULL };
static frost$core$String $s43 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x4d\x65\x6d\x6f\x72\x79\x4c\x61\x79\x6f\x75\x74\x2e\x66\x72\x6f\x73\x74", 18, 5644840658914162624, NULL };
static frost$core$String $s44 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, -4241746971283918425, NULL };
static frost$core$String $s48 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s49 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x64\x65\x72\x65\x66\x65\x72\x65\x6e\x63\x69\x6e\x67\x20\x77\x65\x61\x6b\x20\x70\x6f\x69\x6e\x74\x65\x72\x20\x61\x66\x74\x65\x72\x20\x69\x74\x73\x20\x72\x65\x66\x65\x72\x65\x6e\x74\x20\x77\x61\x73\x20\x64\x65\x73\x74\x72\x6f\x79\x65\x64", 59, 1822743730076196218, NULL };
static frost$core$String $s50 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s51 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x64\x65\x72\x65\x66\x65\x72\x65\x6e\x63\x69\x6e\x67\x20\x77\x65\x61\x6b\x20\x70\x6f\x69\x6e\x74\x65\x72\x20\x61\x66\x74\x65\x72\x20\x69\x74\x73\x20\x72\x65\x66\x65\x72\x65\x6e\x74\x20\x77\x61\x73\x20\x64\x65\x73\x74\x72\x6f\x79\x65\x64", 59, 1822743730076196218, NULL };
static frost$core$String $s55 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x4d\x65\x6d\x6f\x72\x79\x4c\x61\x79\x6f\x75\x74\x2e\x66\x72\x6f\x73\x74", 18, 5644840658914162624, NULL };
static frost$core$String $s56 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, -4241746971283918425, NULL };
static frost$core$String $s59 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x4d\x65\x6d\x6f\x72\x79\x4c\x61\x79\x6f\x75\x74\x2e\x66\x72\x6f\x73\x74", 18, 5644840658914162624, NULL };
static frost$core$String $s73 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s74 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x64\x65\x72\x65\x66\x65\x72\x65\x6e\x63\x69\x6e\x67\x20\x77\x65\x61\x6b\x20\x70\x6f\x69\x6e\x74\x65\x72\x20\x61\x66\x74\x65\x72\x20\x69\x74\x73\x20\x72\x65\x66\x65\x72\x65\x6e\x74\x20\x77\x61\x73\x20\x64\x65\x73\x74\x72\x6f\x79\x65\x64", 59, 1822743730076196218, NULL };
static frost$core$String $s75 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x4d\x65\x6d\x6f\x72\x79\x4c\x61\x79\x6f\x75\x74\x2e\x66\x72\x6f\x73\x74", 18, 5644840658914162624, NULL };
static frost$core$String $s76 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s77 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x64\x65\x72\x65\x66\x65\x72\x65\x6e\x63\x69\x6e\x67\x20\x77\x65\x61\x6b\x20\x70\x6f\x69\x6e\x74\x65\x72\x20\x61\x66\x74\x65\x72\x20\x69\x74\x73\x20\x72\x65\x66\x65\x72\x65\x6e\x74\x20\x77\x61\x73\x20\x64\x65\x73\x74\x72\x6f\x79\x65\x64", 59, 1822743730076196218, NULL };
static frost$core$String $s78 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x4d\x65\x6d\x6f\x72\x79\x4c\x61\x79\x6f\x75\x74\x2e\x66\x72\x6f\x73\x74", 18, 5644840658914162624, NULL };
static frost$core$String $s79 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, -4241746971283918425, NULL };
static frost$core$String $s81 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s82 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x64\x65\x72\x65\x66\x65\x72\x65\x6e\x63\x69\x6e\x67\x20\x77\x65\x61\x6b\x20\x70\x6f\x69\x6e\x74\x65\x72\x20\x61\x66\x74\x65\x72\x20\x69\x74\x73\x20\x72\x65\x66\x65\x72\x65\x6e\x74\x20\x77\x61\x73\x20\x64\x65\x73\x74\x72\x6f\x79\x65\x64", 59, 1822743730076196218, NULL };
static frost$core$String $s83 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x4d\x65\x6d\x6f\x72\x79\x4c\x61\x79\x6f\x75\x74\x2e\x66\x72\x6f\x73\x74", 18, 5644840658914162624, NULL };
static frost$core$String $s84 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, -4241746971283918425, NULL };
static frost$core$String $s86 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x4d\x65\x6d\x6f\x72\x79\x4c\x61\x79\x6f\x75\x74\x2e\x66\x72\x6f\x73\x74", 18, 5644840658914162624, NULL };
static frost$core$String $s87 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, -4241746971283918425, NULL };
static frost$core$String $s88 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x4d\x65\x6d\x6f\x72\x79\x4c\x61\x79\x6f\x75\x74\x2e\x66\x72\x6f\x73\x74", 18, 5644840658914162624, NULL };
static frost$core$String $s89 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 67, 6831135569071847533, NULL };
static frost$core$String $s90 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s91 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x64\x65\x72\x65\x66\x65\x72\x65\x6e\x63\x69\x6e\x67\x20\x77\x65\x61\x6b\x20\x70\x6f\x69\x6e\x74\x65\x72\x20\x61\x66\x74\x65\x72\x20\x69\x74\x73\x20\x72\x65\x66\x65\x72\x65\x6e\x74\x20\x77\x61\x73\x20\x64\x65\x73\x74\x72\x6f\x79\x65\x64", 59, 1822743730076196218, NULL };
static frost$core$String $s92 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x4d\x65\x6d\x6f\x72\x79\x4c\x61\x79\x6f\x75\x74\x2e\x66\x72\x6f\x73\x74", 18, 5644840658914162624, NULL };
static frost$core$String $s93 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, -4241746971283918425, NULL };
static frost$core$String $s97 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s98 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x64\x65\x72\x65\x66\x65\x72\x65\x6e\x63\x69\x6e\x67\x20\x77\x65\x61\x6b\x20\x70\x6f\x69\x6e\x74\x65\x72\x20\x61\x66\x74\x65\x72\x20\x69\x74\x73\x20\x72\x65\x66\x65\x72\x65\x6e\x74\x20\x77\x61\x73\x20\x64\x65\x73\x74\x72\x6f\x79\x65\x64", 59, 1822743730076196218, NULL };
static frost$core$String $s99 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s100 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x64\x65\x72\x65\x66\x65\x72\x65\x6e\x63\x69\x6e\x67\x20\x77\x65\x61\x6b\x20\x70\x6f\x69\x6e\x74\x65\x72\x20\x61\x66\x74\x65\x72\x20\x69\x74\x73\x20\x72\x65\x66\x65\x72\x65\x6e\x74\x20\x77\x61\x73\x20\x64\x65\x73\x74\x72\x6f\x79\x65\x64", 59, 1822743730076196218, NULL };
static frost$core$String $s105 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x4d\x65\x6d\x6f\x72\x79\x4c\x61\x79\x6f\x75\x74\x2e\x66\x72\x6f\x73\x74", 18, 5644840658914162624, NULL };
static frost$core$String $s106 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, -4241746971283918425, NULL };
static frost$core$String $s127 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s128 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x64\x65\x72\x65\x66\x65\x72\x65\x6e\x63\x69\x6e\x67\x20\x77\x65\x61\x6b\x20\x70\x6f\x69\x6e\x74\x65\x72\x20\x61\x66\x74\x65\x72\x20\x69\x74\x73\x20\x72\x65\x66\x65\x72\x65\x6e\x74\x20\x77\x61\x73\x20\x64\x65\x73\x74\x72\x6f\x79\x65\x64", 59, 1822743730076196218, NULL };
static frost$core$String $s130 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x63\x6f\x75\x6c\x64\x20\x6e\x6f\x74\x20\x6c\x6f\x61\x64\x20\x63\x6c\x61\x73\x73\x20\x27", 22, 2736994753796903104, NULL };
static frost$core$String $s131 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x27", 1, -5808629440921371546, NULL };
static frost$core$String $s132 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x4d\x65\x6d\x6f\x72\x79\x4c\x61\x79\x6f\x75\x74\x2e\x66\x72\x6f\x73\x74", 18, 5644840658914162624, NULL };
static frost$core$String $s133 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x4d\x65\x6d\x6f\x72\x79\x4c\x61\x79\x6f\x75\x74\x2e\x66\x72\x6f\x73\x74", 18, 5644840658914162624, NULL };
static frost$core$String $s134 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, -4241746971283918425, NULL };
static frost$core$String $s138 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x4d\x65\x6d\x6f\x72\x79\x4c\x61\x79\x6f\x75\x74\x2e\x66\x72\x6f\x73\x74", 18, 5644840658914162624, NULL };
static frost$core$String $s139 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, -4241746971283918425, NULL };
static frost$core$String $s140 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x64\x65\x74\x65\x72\x6d\x69\x6e\x69\x6e\x67\x20\x73\x69\x7a\x65\x20\x6f\x66\x20\x75\x6e\x72\x65\x73\x6f\x6c\x76\x65\x64\x20\x63\x6c\x61\x73\x73\x20", 37, -1042366941103869398, NULL };
static frost$core$String $s141 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "", 0, -3750763034362895579, NULL };
static frost$core$String $s142 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x4d\x65\x6d\x6f\x72\x79\x4c\x61\x79\x6f\x75\x74\x2e\x66\x72\x6f\x73\x74", 18, 5644840658914162624, NULL };
static frost$core$String $s143 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x4d\x65\x6d\x6f\x72\x79\x4c\x61\x79\x6f\x75\x74\x2e\x66\x72\x6f\x73\x74", 18, 5644840658914162624, NULL };
static frost$core$String $s144 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, -4241746971283918425, NULL };
static frost$core$String $s145 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x4d\x65\x6d\x6f\x72\x79\x4c\x61\x79\x6f\x75\x74\x2e\x66\x72\x6f\x73\x74", 18, 5644840658914162624, NULL };
static frost$core$String $s146 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 67, 6831135569071847533, NULL };
static frost$core$String $s147 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s148 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x64\x65\x72\x65\x66\x65\x72\x65\x6e\x63\x69\x6e\x67\x20\x77\x65\x61\x6b\x20\x70\x6f\x69\x6e\x74\x65\x72\x20\x61\x66\x74\x65\x72\x20\x69\x74\x73\x20\x72\x65\x66\x65\x72\x65\x6e\x74\x20\x77\x61\x73\x20\x64\x65\x73\x74\x72\x6f\x79\x65\x64", 59, 1822743730076196218, NULL };
static frost$core$String $s149 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x4d\x65\x6d\x6f\x72\x79\x4c\x61\x79\x6f\x75\x74\x2e\x66\x72\x6f\x73\x74", 18, 5644840658914162624, NULL };
static frost$core$String $s150 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, -4241746971283918425, NULL };
static frost$core$String $s154 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s155 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x64\x65\x72\x65\x66\x65\x72\x65\x6e\x63\x69\x6e\x67\x20\x77\x65\x61\x6b\x20\x70\x6f\x69\x6e\x74\x65\x72\x20\x61\x66\x74\x65\x72\x20\x69\x74\x73\x20\x72\x65\x66\x65\x72\x65\x6e\x74\x20\x77\x61\x73\x20\x64\x65\x73\x74\x72\x6f\x79\x65\x64", 59, 1822743730076196218, NULL };
static frost$core$String $s156 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s157 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x64\x65\x72\x65\x66\x65\x72\x65\x6e\x63\x69\x6e\x67\x20\x77\x65\x61\x6b\x20\x70\x6f\x69\x6e\x74\x65\x72\x20\x61\x66\x74\x65\x72\x20\x69\x74\x73\x20\x72\x65\x66\x65\x72\x65\x6e\x74\x20\x77\x61\x73\x20\x64\x65\x73\x74\x72\x6f\x79\x65\x64", 59, 1822743730076196218, NULL };
static frost$core$String $s161 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x4d\x65\x6d\x6f\x72\x79\x4c\x61\x79\x6f\x75\x74\x2e\x66\x72\x6f\x73\x74", 18, 5644840658914162624, NULL };
static frost$core$String $s162 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, -4241746971283918425, NULL };
static frost$core$String $s167 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x66\x69\x65\x6c\x64\x20", 6, 5264299414834697605, NULL };
static frost$core$String $s168 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x20\x68\x61\x73\x20\x61\x6c\x69\x67\x6e\x6d\x65\x6e\x74\x20", 15, 8659601875310714384, NULL };
static frost$core$String $s170 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x20\x62\x75\x74\x20\x69\x73\x20\x61\x74\x20\x6f\x66\x66\x73\x65\x74\x20", 18, -110593389782930674, NULL };
static frost$core$String $s173 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "", 0, -3750763034362895579, NULL };
static frost$core$String $s174 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x4d\x65\x6d\x6f\x72\x79\x4c\x61\x79\x6f\x75\x74\x2e\x66\x72\x6f\x73\x74", 18, 5644840658914162624, NULL };
static frost$core$String $s176 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s177 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x64\x65\x72\x65\x66\x65\x72\x65\x6e\x63\x69\x6e\x67\x20\x77\x65\x61\x6b\x20\x70\x6f\x69\x6e\x74\x65\x72\x20\x61\x66\x74\x65\x72\x20\x69\x74\x73\x20\x72\x65\x66\x65\x72\x65\x6e\x74\x20\x77\x61\x73\x20\x64\x65\x73\x74\x72\x6f\x79\x65\x64", 59, 1822743730076196218, NULL };
static frost$core$String $s178 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x4d\x65\x6d\x6f\x72\x79\x4c\x61\x79\x6f\x75\x74\x2e\x66\x72\x6f\x73\x74", 18, 5644840658914162624, NULL };
static frost$core$String $s179 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, -4241746971283918425, NULL };
static frost$core$String $s184 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x4d\x65\x6d\x6f\x72\x79\x4c\x61\x79\x6f\x75\x74\x2e\x66\x72\x6f\x73\x74", 18, 5644840658914162624, NULL };
static frost$core$String $s185 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, -4241746971283918425, NULL };
static frost$core$String $s197 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s198 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x64\x65\x72\x65\x66\x65\x72\x65\x6e\x63\x69\x6e\x67\x20\x77\x65\x61\x6b\x20\x70\x6f\x69\x6e\x74\x65\x72\x20\x61\x66\x74\x65\x72\x20\x69\x74\x73\x20\x72\x65\x66\x65\x72\x65\x6e\x74\x20\x77\x61\x73\x20\x64\x65\x73\x74\x72\x6f\x79\x65\x64", 59, 1822743730076196218, NULL };
static frost$core$String $s199 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s200 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x64\x65\x72\x65\x66\x65\x72\x65\x6e\x63\x69\x6e\x67\x20\x77\x65\x61\x6b\x20\x70\x6f\x69\x6e\x74\x65\x72\x20\x61\x66\x74\x65\x72\x20\x69\x74\x73\x20\x72\x65\x66\x65\x72\x65\x6e\x74\x20\x77\x61\x73\x20\x64\x65\x73\x74\x72\x6f\x79\x65\x64", 59, 1822743730076196218, NULL };
static frost$core$String $s201 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x4d\x65\x6d\x6f\x72\x79\x4c\x61\x79\x6f\x75\x74\x2e\x66\x72\x6f\x73\x74", 18, 5644840658914162624, NULL };
static frost$core$String $s202 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, -4241746971283918425, NULL };
static frost$core$String $s203 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x4d\x65\x6d\x6f\x72\x79\x4c\x61\x79\x6f\x75\x74\x2e\x66\x72\x6f\x73\x74", 18, 5644840658914162624, NULL };
static frost$core$String $s204 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s205 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x64\x65\x72\x65\x66\x65\x72\x65\x6e\x63\x69\x6e\x67\x20\x77\x65\x61\x6b\x20\x70\x6f\x69\x6e\x74\x65\x72\x20\x61\x66\x74\x65\x72\x20\x69\x74\x73\x20\x72\x65\x66\x65\x72\x65\x6e\x74\x20\x77\x61\x73\x20\x64\x65\x73\x74\x72\x6f\x79\x65\x64", 59, 1822743730076196218, NULL };
static frost$core$String $s207 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s208 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x64\x65\x72\x65\x66\x65\x72\x65\x6e\x63\x69\x6e\x67\x20\x77\x65\x61\x6b\x20\x70\x6f\x69\x6e\x74\x65\x72\x20\x61\x66\x74\x65\x72\x20\x69\x74\x73\x20\x72\x65\x66\x65\x72\x65\x6e\x74\x20\x77\x61\x73\x20\x64\x65\x73\x74\x72\x6f\x79\x65\x64", 59, 1822743730076196218, NULL };
static frost$core$String $s209 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x4d\x65\x6d\x6f\x72\x79\x4c\x61\x79\x6f\x75\x74\x2e\x66\x72\x6f\x73\x74", 18, 5644840658914162624, NULL };
static frost$core$String $s210 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, -4241746971283918425, NULL };
static frost$core$String $s214 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s215 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x64\x65\x72\x65\x66\x65\x72\x65\x6e\x63\x69\x6e\x67\x20\x77\x65\x61\x6b\x20\x70\x6f\x69\x6e\x74\x65\x72\x20\x61\x66\x74\x65\x72\x20\x69\x74\x73\x20\x72\x65\x66\x65\x72\x65\x6e\x74\x20\x77\x61\x73\x20\x64\x65\x73\x74\x72\x6f\x79\x65\x64", 59, 1822743730076196218, NULL };
static frost$core$String $s216 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s217 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x64\x65\x72\x65\x66\x65\x72\x65\x6e\x63\x69\x6e\x67\x20\x77\x65\x61\x6b\x20\x70\x6f\x69\x6e\x74\x65\x72\x20\x61\x66\x74\x65\x72\x20\x69\x74\x73\x20\x72\x65\x66\x65\x72\x65\x6e\x74\x20\x77\x61\x73\x20\x64\x65\x73\x74\x72\x6f\x79\x65\x64", 59, 1822743730076196218, NULL };
static frost$core$String $s221 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x4d\x65\x6d\x6f\x72\x79\x4c\x61\x79\x6f\x75\x74\x2e\x66\x72\x6f\x73\x74", 18, 5644840658914162624, NULL };
static frost$core$String $s222 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, -4241746971283918425, NULL };
static frost$core$String $s225 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x4d\x65\x6d\x6f\x72\x79\x4c\x61\x79\x6f\x75\x74\x2e\x66\x72\x6f\x73\x74", 18, 5644840658914162624, NULL };
static frost$core$String $s239 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s240 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x64\x65\x72\x65\x66\x65\x72\x65\x6e\x63\x69\x6e\x67\x20\x77\x65\x61\x6b\x20\x70\x6f\x69\x6e\x74\x65\x72\x20\x61\x66\x74\x65\x72\x20\x69\x74\x73\x20\x72\x65\x66\x65\x72\x65\x6e\x74\x20\x77\x61\x73\x20\x64\x65\x73\x74\x72\x6f\x79\x65\x64", 59, 1822743730076196218, NULL };
static frost$core$String $s245 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x4d\x65\x6d\x6f\x72\x79\x4c\x61\x79\x6f\x75\x74\x2e\x66\x72\x6f\x73\x74", 18, 5644840658914162624, NULL };
static frost$core$String $s246 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 67, 6831135569071847533, NULL };
static frost$core$String $s247 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x4d\x65\x6d\x6f\x72\x79\x4c\x61\x79\x6f\x75\x74\x2e\x66\x72\x6f\x73\x74", 18, 5644840658914162624, NULL };
static frost$core$String $s248 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 67, 6831135569071847533, NULL };
static frost$core$String $s250 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x4d\x65\x6d\x6f\x72\x79\x4c\x61\x79\x6f\x75\x74\x2e\x66\x72\x6f\x73\x74", 18, 5644840658914162624, NULL };
static frost$core$String $s251 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 67, 6831135569071847533, NULL };
static frost$core$String $s255 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s256 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };

void org$frostlang$frostc$MemoryLayout$init$org$frostlang$frostc$Compiler(void* rawSelf, org$frostlang$frostc$Compiler* param1) {
org$frostlang$frostc$MemoryLayout* param0 = (org$frostlang$frostc$MemoryLayout*) rawSelf;

frost$collections$IdentityMap* _1;
frost$core$Object* _3;
frost$collections$IdentityMap** _5;
frost$collections$IdentityMap* _6;
frost$core$Object* _7;
frost$collections$IdentityMap** _9;
frost$core$Object* _11;
frost$collections$IdentityMap* _14;
frost$core$Object* _16;
frost$collections$IdentityMap** _18;
frost$collections$IdentityMap* _19;
frost$core$Object* _20;
frost$collections$IdentityMap** _22;
frost$core$Object* _24;
frost$collections$IdentityMap* _27;
frost$core$Object* _29;
frost$collections$IdentityMap** _31;
frost$collections$IdentityMap* _32;
frost$core$Object* _33;
frost$collections$IdentityMap** _35;
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MemoryLayout.frost:20
_1 = (frost$collections$IdentityMap*) frostObjectAlloc(sizeof(frost$collections$IdentityMap), (frost$core$Class*) &frost$collections$IdentityMap$class);
frost$collections$IdentityMap$init(_1);
_3 = ((frost$core$Object*) _1);
frost$core$Frost$ref$frost$core$Object$Q(_3);
_5 = &param0->sizes;
_6 = *_5;
_7 = ((frost$core$Object*) _6);
frost$core$Frost$unref$frost$core$Object$Q(_7);
_9 = &param0->sizes;
*_9 = _1;
_11 = ((frost$core$Object*) _1);
frost$core$Frost$unref$frost$core$Object$Q(_11);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MemoryLayout.frost:23
_14 = (frost$collections$IdentityMap*) frostObjectAlloc(sizeof(frost$collections$IdentityMap), (frost$core$Class*) &frost$collections$IdentityMap$class);
frost$collections$IdentityMap$init(_14);
_16 = ((frost$core$Object*) _14);
frost$core$Frost$ref$frost$core$Object$Q(_16);
_18 = &param0->alignments;
_19 = *_18;
_20 = ((frost$core$Object*) _19);
frost$core$Frost$unref$frost$core$Object$Q(_20);
_22 = &param0->alignments;
*_22 = _14;
_24 = ((frost$core$Object*) _14);
frost$core$Frost$unref$frost$core$Object$Q(_24);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MemoryLayout.frost:26
_27 = (frost$collections$IdentityMap*) frostObjectAlloc(sizeof(frost$collections$IdentityMap), (frost$core$Class*) &frost$collections$IdentityMap$class);
frost$collections$IdentityMap$init(_27);
_29 = ((frost$core$Object*) _27);
frost$core$Frost$ref$frost$core$Object$Q(_29);
_31 = &param0->choiceDataSizes;
_32 = *_31;
_33 = ((frost$core$Object*) _32);
frost$core$Frost$unref$frost$core$Object$Q(_33);
_35 = &param0->choiceDataSizes;
*_35 = _27;
_37 = ((frost$core$Object*) _27);
frost$core$Frost$unref$frost$core$Object$Q(_37);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MemoryLayout.frost:33
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
frost$core$Int org$frostlang$frostc$MemoryLayout$get_intSize$R$frost$core$Int(void* rawSelf) {
org$frostlang$frostc$MemoryLayout* param0 = (org$frostlang$frostc$MemoryLayout*) rawSelf;

frost$core$Int _1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MemoryLayout.frost:37
_1 = (frost$core$Int) {8u};
return _1;

}
frost$core$Int org$frostlang$frostc$MemoryLayout$get_pointerSize$R$frost$core$Int(void* rawSelf) {
org$frostlang$frostc$MemoryLayout* param0 = (org$frostlang$frostc$MemoryLayout*) rawSelf;

frost$core$Int _1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MemoryLayout.frost:41
_1 = (frost$core$Int) {8u};
return _1;

}
frost$core$Int org$frostlang$frostc$MemoryLayout$fieldSize$org$frostlang$frostc$Type$R$frost$core$Int(void* rawSelf, org$frostlang$frostc$Type* param1) {
org$frostlang$frostc$MemoryLayout* param0 = (org$frostlang$frostc$MemoryLayout*) rawSelf;

frost$core$Bit local0;
frost$core$Bit local1;
org$frostlang$frostc$ClassDecl* local2 = NULL;
frost$core$Int local3;
org$frostlang$frostc$FieldDecl* local4 = NULL;
frost$core$Bit local5;
frost$core$Int local6;
frost$core$Int local7;
org$frostlang$frostc$Type$Kind local8;
org$frostlang$frostc$Type$Kind local9;
frost$core$Int local10;
frost$core$Bit* _1;
frost$core$Bit _2;
bool _3;
frost$core$Int _5;
frost$core$Object* _6;
$fn2 _9;
frost$core$String* _10;
frost$core$String* _11;
frost$core$Object* _12;
frost$core$Object* _14;
frost$core$Object* _16;
frost$core$String* _19;
frost$core$Object* _21;
frost$core$Object* _23;
frost$core$Weak** _27;
frost$core$Weak* _28;
frost$core$Bit* _33;
frost$core$Bit _34;
bool _36;
frost$core$Int _38;
frost$core$Object** _42;
frost$core$Object* _43;
frost$core$Object* _44;
frost$core$Object* _45;
org$frostlang$frostc$Compiler* _48;
org$frostlang$frostc$Type** _49;
org$frostlang$frostc$Type* _50;
org$frostlang$frostc$Symbol* _53;
frost$core$String** _54;
frost$core$String* _55;
org$frostlang$frostc$Symbol* _56;
frost$core$String** _57;
frost$core$String* _58;
frost$core$Bit _59;
bool _60;
org$frostlang$frostc$Type$Kind* _62;
org$frostlang$frostc$Type$Kind _63;
frost$core$Equatable* _64;
org$frostlang$frostc$Type$Kind* _65;
org$frostlang$frostc$Type$Kind _66;
frost$core$Equatable* _67;
$fn3 _68;
frost$core$Bit _69;
frost$core$Object* _70;
frost$core$Object* _72;
frost$core$Bit _78;
bool _80;
frost$core$Object* _81;
frost$core$Int _85;
frost$core$Bit _88;
bool _89;
org$frostlang$frostc$Symbol* _92;
frost$core$String** _93;
frost$core$String* _94;
frost$core$Bit _95;
bool _96;
frost$core$Int _99;
org$frostlang$frostc$Symbol* _102;
frost$core$String** _103;
frost$core$String* _104;
frost$core$Bit _105;
bool _106;
frost$core$Int _109;
org$frostlang$frostc$Symbol* _112;
frost$core$String** _113;
frost$core$String* _114;
frost$core$Bit _115;
bool _116;
frost$core$Int _119;
org$frostlang$frostc$Symbol* _122;
frost$core$String** _123;
frost$core$String* _124;
frost$core$Bit _125;
bool _126;
frost$core$Int _129;
frost$core$Weak** _132;
frost$core$Weak* _133;
frost$core$Bit* _138;
frost$core$Bit _139;
bool _141;
frost$core$Int _143;
frost$core$Object** _147;
frost$core$Object* _148;
frost$core$Object* _149;
frost$core$Object* _150;
org$frostlang$frostc$Compiler* _153;
org$frostlang$frostc$Compiler$Settings** _154;
org$frostlang$frostc$Compiler$Settings* _155;
frost$core$Int* _156;
frost$core$Int _157;
frost$core$Object* _158;
frost$core$Weak** _162;
frost$core$Weak* _163;
frost$core$Bit* _168;
frost$core$Bit _169;
bool _171;
frost$core$Int _173;
frost$core$Object** _177;
frost$core$Object* _178;
frost$core$Object* _179;
frost$core$Object* _180;
org$frostlang$frostc$Compiler* _183;
org$frostlang$frostc$Type** _184;
org$frostlang$frostc$Type* _185;
org$frostlang$frostc$Symbol* _188;
frost$core$String** _189;
frost$core$String* _190;
org$frostlang$frostc$Symbol* _191;
frost$core$String** _192;
frost$core$String* _193;
frost$core$Bit _194;
bool _195;
org$frostlang$frostc$Type$Kind* _197;
org$frostlang$frostc$Type$Kind _198;
frost$core$Equatable* _199;
org$frostlang$frostc$Type$Kind* _200;
org$frostlang$frostc$Type$Kind _201;
frost$core$Equatable* _202;
$fn4 _203;
frost$core$Bit _204;
frost$core$Object* _205;
frost$core$Object* _207;
frost$core$Bit _213;
bool _215;
frost$core$Object* _216;
frost$core$Int _220;
frost$core$Weak** _223;
frost$core$Weak* _224;
frost$core$Bit* _229;
frost$core$Bit _230;
bool _232;
frost$core$Int _234;
frost$core$Object** _238;
frost$core$Object* _239;
frost$core$Object* _240;
frost$core$Object* _241;
org$frostlang$frostc$Compiler* _244;
org$frostlang$frostc$ClassDecl* _245;
frost$core$Object* _247;
org$frostlang$frostc$ClassDecl* _249;
frost$core$Object* _250;
frost$core$Object* _253;
frost$core$Object* _255;
org$frostlang$frostc$ClassDecl* _258;
bool _259;
frost$core$Bit _260;
bool _261;
frost$core$Int _264;
org$frostlang$frostc$ClassDecl* _265;
frost$core$Object* _266;
frost$core$Weak** _271;
frost$core$Weak* _272;
frost$core$Bit* _277;
frost$core$Bit _278;
bool _280;
frost$core$Int _282;
frost$core$Object** _286;
frost$core$Object* _287;
frost$core$Object* _288;
frost$core$Object* _289;
org$frostlang$frostc$Compiler* _292;
org$frostlang$frostc$ClassDecl* _293;
bool _294;
frost$core$Bit _295;
bool _296;
frost$core$Int _298;
org$frostlang$frostc$ClassDecl* _301;
frost$core$Bit _302;
bool _305;
bool _306;
frost$core$Bit _307;
bool _309;
frost$core$Object* _310;
$fn5 _314;
frost$core$Int _315;
org$frostlang$frostc$ClassDecl* _316;
frost$core$Object* _317;
frost$core$Int _322;
frost$core$Weak** _325;
frost$core$Weak* _326;
frost$core$Bit* _331;
frost$core$Bit _332;
bool _334;
frost$core$Int _336;
frost$core$Object** _340;
frost$core$Object* _341;
frost$core$Object* _342;
frost$core$Object* _343;
org$frostlang$frostc$Compiler* _346;
org$frostlang$frostc$ClassDecl* _347;
bool _348;
frost$core$Bit _349;
bool _350;
frost$core$Int _352;
org$frostlang$frostc$ClassDecl* _355;
frost$collections$ListView* _356;
frost$collections$Iterable* _357;
$fn6 _358;
frost$collections$Iterator* _359;
$fn7 _361;
frost$core$Bit _362;
bool _363;
$fn8 _366;
frost$core$Object* _367;
org$frostlang$frostc$FieldDecl* _368;
frost$core$Object* _369;
org$frostlang$frostc$FieldDecl* _371;
frost$core$Object* _372;
org$frostlang$frostc$FieldDecl* _376;
org$frostlang$frostc$Annotations** _377;
org$frostlang$frostc$Annotations* _378;
frost$core$Int* _381;
frost$core$Int _382;
frost$core$Int _383;
int64_t _386;
int64_t _387;
int64_t _388;
frost$core$Int _389;
frost$core$Int _391;
int64_t _392;
int64_t _393;
bool _394;
frost$core$Bit _395;
bool _397;
frost$core$Object* _400;
org$frostlang$frostc$FieldDecl* _402;
frost$core$Object* _403;
frost$core$Weak** _408;
frost$core$Weak* _409;
frost$core$Bit* _414;
frost$core$Bit _415;
bool _417;
frost$core$Int _419;
frost$core$Object** _423;
frost$core$Object* _424;
frost$core$Object* _425;
frost$core$Object* _426;
org$frostlang$frostc$Compiler* _429;
org$frostlang$frostc$FieldDecl* _430;
frost$core$Bit _431;
frost$core$Object* _432;
org$frostlang$frostc$FieldDecl* _435;
org$frostlang$frostc$Type** _436;
org$frostlang$frostc$Type* _437;
frost$core$Weak** _438;
frost$core$Weak* _439;
frost$core$Bit* _444;
frost$core$Bit _445;
bool _447;
frost$core$Int _449;
frost$core$Object** _453;
frost$core$Object* _454;
frost$core$Object* _455;
frost$core$Object* _456;
org$frostlang$frostc$Compiler* _459;
org$frostlang$frostc$Type** _460;
org$frostlang$frostc$Type* _461;
org$frostlang$frostc$Symbol* _464;
frost$core$String** _465;
frost$core$String* _466;
org$frostlang$frostc$Symbol* _467;
frost$core$String** _468;
frost$core$String* _469;
frost$core$Bit _470;
bool _471;
org$frostlang$frostc$Type$Kind* _473;
org$frostlang$frostc$Type$Kind _474;
frost$core$Equatable* _475;
org$frostlang$frostc$Type$Kind* _476;
org$frostlang$frostc$Type$Kind _477;
frost$core$Equatable* _478;
$fn9 _479;
frost$core$Bit _480;
frost$core$Object* _481;
frost$core$Object* _483;
frost$core$Bit _489;
bool _491;
frost$core$Object* _492;
frost$core$Int _496;
org$frostlang$frostc$ClassDecl* _497;
bool _498;
frost$core$Bit _499;
bool _500;
frost$core$Int _502;
org$frostlang$frostc$ClassDecl* _505;
$fn10 _506;
frost$core$Int _507;
int64_t _508;
int64_t _509;
int64_t _510;
frost$core$Int _511;
org$frostlang$frostc$FieldDecl* _516;
org$frostlang$frostc$Type** _517;
org$frostlang$frostc$Type* _518;
$fn11 _519;
frost$core$Int _520;
frost$core$Int _523;
frost$core$Int _524;
int64_t _527;
int64_t _528;
int64_t _529;
frost$core$Int _530;
frost$core$Int _534;
frost$core$Int _535;
int64_t _536;
int64_t _537;
bool _538;
frost$core$Bit _539;
bool _540;
frost$core$Int _543;
frost$core$Int _544;
frost$core$Int _545;
int64_t _546;
int64_t _547;
int64_t _548;
frost$core$Int _549;
int64_t _550;
int64_t _551;
int64_t _552;
frost$core$Int _553;
frost$core$Int _557;
frost$core$Int _558;
int64_t _561;
int64_t _562;
int64_t _563;
frost$core$Int _564;
frost$core$Int _566;
int64_t _569;
int64_t _570;
bool _571;
frost$core$Bit _572;
bool _574;
frost$core$Int _576;
frost$core$Int _580;
frost$core$Int _581;
int64_t _582;
int64_t _583;
int64_t _584;
frost$core$Int _585;
frost$core$Object* _588;
org$frostlang$frostc$FieldDecl* _590;
frost$core$Object* _591;
frost$core$Object* _595;
frost$core$Object* _597;
frost$core$Object* _599;
org$frostlang$frostc$Type$Kind* _602;
org$frostlang$frostc$Type$Kind _603;
frost$core$Equatable* _604;
frost$core$Int _605;
frost$core$Int* _608;
org$frostlang$frostc$Type$Kind _610;
org$frostlang$frostc$Type$Kind _613;
frost$core$Equatable* _614;
$fn12 _615;
frost$core$Bit _616;
bool _617;
frost$core$Object* _618;
frost$core$Object* _620;
frost$core$Int _624;
frost$core$Int _625;
int64_t _626;
int64_t _627;
int64_t _628;
frost$core$Int _629;
$fn13 _633;
frost$core$Int _634;
frost$core$Int _637;
frost$core$Int _638;
int64_t _641;
int64_t _642;
int64_t _643;
frost$core$Int _644;
frost$core$Int _646;
int64_t _647;
int64_t _648;
bool _649;
frost$core$Bit _650;
bool _651;
frost$core$Int _654;
frost$core$Int _655;
frost$core$Int _656;
frost$core$Int _657;
int64_t _660;
int64_t _661;
int64_t _662;
frost$core$Int _663;
int64_t _665;
int64_t _666;
int64_t _667;
frost$core$Int _668;
int64_t _669;
int64_t _670;
int64_t _671;
frost$core$Int _672;
frost$core$Int _676;
org$frostlang$frostc$ClassDecl* _677;
frost$core$Object* _678;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MemoryLayout.frost:45
_1 = &param1->resolved;
_2 = *_1;
_3 = _2.value;
if (_3) goto block1; else goto block2;
block2:;
_5 = (frost$core$Int) {45u};
_6 = ((frost$core$Object*) param1);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from MemoryLayout.frost:45:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
_9 = ($fn14) _6->$class->vtable[0];
_10 = _9(_6);
_11 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s15, _10);
_12 = ((frost$core$Object*) _11);
frost$core$Frost$ref$frost$core$Object$Q(_12);
_14 = ((frost$core$Object*) _11);
frost$core$Frost$unref$frost$core$Object$Q(_14);
_16 = ((frost$core$Object*) _10);
frost$core$Frost$unref$frost$core$Object$Q(_16);
_19 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_11, &$s16);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s17, _5, _19);
_21 = ((frost$core$Object*) _19);
frost$core$Frost$unref$frost$core$Object$Q(_21);
_23 = ((frost$core$Object*) _11);
frost$core$Frost$unref$frost$core$Object$Q(_23);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MemoryLayout.frost:46
_27 = &param0->compiler;
_28 = *_27;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from MemoryLayout.frost:46:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
_33 = &_28->_valid;
_34 = *_33;
_36 = _34.value;
if (_36) goto block8; else goto block9;
block9:;
_38 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s18, _38, &$s19);
abort(); // unreachable
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
_42 = &_28->value;
_43 = *_42;
_44 = _43;
_45 = _44;
frost$core$Frost$ref$frost$core$Object$Q(_45);
_48 = ((org$frostlang$frostc$Compiler*) _44);
_49 = &_48->VOID_TYPE;
_50 = *_49;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from MemoryLayout.frost:46:14
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:256
_53 = ((org$frostlang$frostc$Symbol*) param1);
_54 = &_53->name;
_55 = *_54;
_56 = ((org$frostlang$frostc$Symbol*) _50);
_57 = &_56->name;
_58 = *_57;
_59 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(_55, _58);
_60 = _59.value;
if (_60) goto block11; else goto block12;
block11:;
_62 = &param1->typeKind;
_63 = *_62;
org$frostlang$frostc$Type$Kind$wrapper* $tmp20;
$tmp20 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp20->value = _63;
_64 = ((frost$core$Equatable*) $tmp20);
_65 = &_50->typeKind;
_66 = *_65;
org$frostlang$frostc$Type$Kind$wrapper* $tmp21;
$tmp21 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp21->value = _66;
_67 = ((frost$core$Equatable*) $tmp21);
ITable* $tmp22 = _64->$class->itable;
while ($tmp22->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp22 = $tmp22->next;
}
_68 = $tmp22->methods[0];
_69 = _68(_64, _67);
_70 = ((frost$core$Object*) _67);
frost$core$Frost$unref$frost$core$Object$Q(_70);
_72 = ((frost$core$Object*) _64);
frost$core$Frost$unref$frost$core$Object$Q(_72);
*(&local0) = _69;
goto block13;
block12:;
*(&local0) = _59;
goto block13;
block13:;
_78 = *(&local0);
_80 = _78.value;
_81 = _44;
frost$core$Frost$unref$frost$core$Object$Q(_81);
if (_80) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MemoryLayout.frost:48
_85 = (frost$core$Int) {1u};
return _85;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MemoryLayout.frost:50
_88 = org$frostlang$frostc$Type$get_isBuiltinNumber$R$frost$core$Bit(param1);
_89 = _88.value;
if (_89) goto block14; else goto block15;
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MemoryLayout.frost:51
_92 = ((org$frostlang$frostc$Symbol*) param1);
_93 = &_92->name;
_94 = *_93;
_95 = frost$core$String$endsWith$frost$core$String$R$frost$core$Bit(_94, &$s23);
_96 = _95.value;
if (_96) goto block16; else goto block17;
block16:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MemoryLayout.frost:52
_99 = (frost$core$Int) {1u};
return _99;
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MemoryLayout.frost:54
_102 = ((org$frostlang$frostc$Symbol*) param1);
_103 = &_102->name;
_104 = *_103;
_105 = frost$core$String$endsWith$frost$core$String$R$frost$core$Bit(_104, &$s24);
_106 = _105.value;
if (_106) goto block18; else goto block19;
block18:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MemoryLayout.frost:55
_109 = (frost$core$Int) {2u};
return _109;
block19:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MemoryLayout.frost:57
_112 = ((org$frostlang$frostc$Symbol*) param1);
_113 = &_112->name;
_114 = *_113;
_115 = frost$core$String$endsWith$frost$core$String$R$frost$core$Bit(_114, &$s25);
_116 = _115.value;
if (_116) goto block20; else goto block21;
block20:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MemoryLayout.frost:58
_119 = (frost$core$Int) {4u};
return _119;
block21:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MemoryLayout.frost:60
_122 = ((org$frostlang$frostc$Symbol*) param1);
_123 = &_122->name;
_124 = *_123;
_125 = frost$core$String$endsWith$frost$core$String$R$frost$core$Bit(_124, &$s26);
_126 = _125.value;
if (_126) goto block22; else goto block23;
block22:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MemoryLayout.frost:61
_129 = (frost$core$Int) {8u};
return _129;
block23:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MemoryLayout.frost:63
_132 = &param0->compiler;
_133 = *_132;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from MemoryLayout.frost:63:20
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
_138 = &_133->_valid;
_139 = *_138;
_141 = _139.value;
if (_141) goto block26; else goto block27;
block27:;
_143 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s27, _143, &$s28);
abort(); // unreachable
block26:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
_147 = &_133->value;
_148 = *_147;
_149 = _148;
_150 = _149;
frost$core$Frost$ref$frost$core$Object$Q(_150);
_153 = ((org$frostlang$frostc$Compiler*) _149);
_154 = &_153->settings;
_155 = *_154;
_156 = &_155->intSize;
_157 = *_156;
_158 = _149;
frost$core$Frost$unref$frost$core$Object$Q(_158);
return _157;
block15:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MemoryLayout.frost:65
_162 = &param0->compiler;
_163 = *_162;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from MemoryLayout.frost:65:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
_168 = &_163->_valid;
_169 = *_168;
_171 = _169.value;
if (_171) goto block32; else goto block33;
block33:;
_173 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s29, _173, &$s30);
abort(); // unreachable
block32:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
_177 = &_163->value;
_178 = *_177;
_179 = _178;
_180 = _179;
frost$core$Frost$ref$frost$core$Object$Q(_180);
_183 = ((org$frostlang$frostc$Compiler*) _179);
_184 = &_183->BUILTIN_BIT_TYPE;
_185 = *_184;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from MemoryLayout.frost:65:14
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:256
_188 = ((org$frostlang$frostc$Symbol*) param1);
_189 = &_188->name;
_190 = *_189;
_191 = ((org$frostlang$frostc$Symbol*) _185);
_192 = &_191->name;
_193 = *_192;
_194 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(_190, _193);
_195 = _194.value;
if (_195) goto block35; else goto block36;
block35:;
_197 = &param1->typeKind;
_198 = *_197;
org$frostlang$frostc$Type$Kind$wrapper* $tmp31;
$tmp31 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp31->value = _198;
_199 = ((frost$core$Equatable*) $tmp31);
_200 = &_185->typeKind;
_201 = *_200;
org$frostlang$frostc$Type$Kind$wrapper* $tmp32;
$tmp32 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp32->value = _201;
_202 = ((frost$core$Equatable*) $tmp32);
ITable* $tmp33 = _199->$class->itable;
while ($tmp33->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp33 = $tmp33->next;
}
_203 = $tmp33->methods[0];
_204 = _203(_199, _202);
_205 = ((frost$core$Object*) _202);
frost$core$Frost$unref$frost$core$Object$Q(_205);
_207 = ((frost$core$Object*) _199);
frost$core$Frost$unref$frost$core$Object$Q(_207);
*(&local1) = _204;
goto block37;
block36:;
*(&local1) = _194;
goto block37;
block37:;
_213 = *(&local1);
_215 = _213.value;
_216 = _179;
frost$core$Frost$unref$frost$core$Object$Q(_216);
if (_215) goto block28; else goto block29;
block28:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MemoryLayout.frost:66
_220 = (frost$core$Int) {1u};
return _220;
block29:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MemoryLayout.frost:68
_223 = &param0->compiler;
_224 = *_223;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from MemoryLayout.frost:68:19
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
_229 = &_224->_valid;
_230 = *_229;
_232 = _230.value;
if (_232) goto block40; else goto block41;
block41:;
_234 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s34, _234, &$s35);
abort(); // unreachable
block40:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
_238 = &_224->value;
_239 = *_238;
_240 = _239;
_241 = _240;
frost$core$Frost$ref$frost$core$Object$Q(_241);
_244 = ((org$frostlang$frostc$Compiler*) _240);
_245 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(_244, param1);
*(&local2) = ((org$frostlang$frostc$ClassDecl*) NULL);
_247 = ((frost$core$Object*) _245);
frost$core$Frost$ref$frost$core$Object$Q(_247);
_249 = *(&local2);
_250 = ((frost$core$Object*) _249);
frost$core$Frost$unref$frost$core$Object$Q(_250);
*(&local2) = _245;
_253 = ((frost$core$Object*) _245);
frost$core$Frost$unref$frost$core$Object$Q(_253);
_255 = _240;
frost$core$Frost$unref$frost$core$Object$Q(_255);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MemoryLayout.frost:69
_258 = *(&local2);
_259 = _258 == NULL;
_260 = (frost$core$Bit) {_259};
_261 = _260.value;
if (_261) goto block42; else goto block43;
block42:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MemoryLayout.frost:70
_264 = (frost$core$Int) {0u};
_265 = *(&local2);
_266 = ((frost$core$Object*) _265);
frost$core$Frost$unref$frost$core$Object$Q(_266);
*(&local2) = ((org$frostlang$frostc$ClassDecl*) NULL);
return _264;
block43:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MemoryLayout.frost:72
_271 = &param0->compiler;
_272 = *_271;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from MemoryLayout.frost:72:13
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
_277 = &_272->_valid;
_278 = *_277;
_280 = _278.value;
if (_280) goto block48; else goto block49;
block49:;
_282 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s36, _282, &$s37);
abort(); // unreachable
block48:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
_286 = &_272->value;
_287 = *_286;
_288 = _287;
_289 = _288;
frost$core$Frost$ref$frost$core$Object$Q(_289);
_292 = ((org$frostlang$frostc$Compiler*) _288);
_293 = *(&local2);
_294 = _293 != NULL;
_295 = (frost$core$Bit) {_294};
_296 = _295.value;
if (_296) goto block50; else goto block51;
block51:;
_298 = (frost$core$Int) {72u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s38, _298, &$s39);
abort(); // unreachable
block50:;
_301 = _293;
_302 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$ClassDecl$R$frost$core$Bit(_292, _301);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from MemoryLayout.frost:72:12
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
_305 = _302.value;
_306 = !_305;
_307 = (frost$core$Bit) {_306};
_309 = _307.value;
_310 = _288;
frost$core$Frost$unref$frost$core$Object$Q(_310);
if (_309) goto block44; else goto block45;
block44:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MemoryLayout.frost:73
_314 = ($fn40) param0->$class->vtable[3];
_315 = _314(param0);
_316 = *(&local2);
_317 = ((frost$core$Object*) _316);
frost$core$Frost$unref$frost$core$Object$Q(_317);
*(&local2) = ((org$frostlang$frostc$ClassDecl*) NULL);
return _315;
block45:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MemoryLayout.frost:75
_322 = (frost$core$Int) {0u};
*(&local3) = _322;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MemoryLayout.frost:76
_325 = &param0->compiler;
_326 = *_325;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from MemoryLayout.frost:76:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
_331 = &_326->_valid;
_332 = *_331;
_334 = _332.value;
if (_334) goto block55; else goto block56;
block56:;
_336 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s41, _336, &$s42);
abort(); // unreachable
block55:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
_340 = &_326->value;
_341 = *_340;
_342 = _341;
_343 = _342;
frost$core$Frost$ref$frost$core$Object$Q(_343);
_346 = ((org$frostlang$frostc$Compiler*) _342);
_347 = *(&local2);
_348 = _347 != NULL;
_349 = (frost$core$Bit) {_348};
_350 = _349.value;
if (_350) goto block57; else goto block58;
block58:;
_352 = (frost$core$Int) {76u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s43, _352, &$s44);
abort(); // unreachable
block57:;
_355 = _347;
_356 = org$frostlang$frostc$Compiler$instanceFields$org$frostlang$frostc$ClassDecl$R$frost$collections$ListView$LTorg$frostlang$frostc$FieldDecl$GT(_346, _355);
_357 = ((frost$collections$Iterable*) _356);
ITable* $tmp45 = _357->$class->itable;
while ($tmp45->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp45 = $tmp45->next;
}
_358 = $tmp45->methods[0];
_359 = _358(_357);
goto block59;
block59:;
ITable* $tmp46 = _359->$class->itable;
while ($tmp46->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp46 = $tmp46->next;
}
_361 = $tmp46->methods[0];
_362 = _361(_359);
_363 = _362.value;
if (_363) goto block61; else goto block60;
block60:;
*(&local4) = ((org$frostlang$frostc$FieldDecl*) NULL);
ITable* $tmp47 = _359->$class->itable;
while ($tmp47->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp47 = $tmp47->next;
}
_366 = $tmp47->methods[1];
_367 = _366(_359);
_368 = ((org$frostlang$frostc$FieldDecl*) _367);
_369 = ((frost$core$Object*) _368);
frost$core$Frost$ref$frost$core$Object$Q(_369);
_371 = *(&local4);
_372 = ((frost$core$Object*) _371);
frost$core$Frost$unref$frost$core$Object$Q(_372);
*(&local4) = _368;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MemoryLayout.frost:77
_376 = *(&local4);
_377 = &_376->annotations;
_378 = *_377;
// begin inline call to function org.frostlang.frostc.Annotations.get_isClass():frost.core.Bit from MemoryLayout.frost:77:29
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:125
_381 = &_378->flags;
_382 = *_381;
_383 = (frost$core$Int) {16u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:125:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:293
_386 = _382.value;
_387 = _383.value;
_388 = _386 & _387;
_389 = (frost$core$Int) {_388};
_391 = (frost$core$Int) {0u};
_392 = _389.value;
_393 = _391.value;
_394 = _392 != _393;
_395 = (frost$core$Bit) {_394};
_397 = _395.value;
if (_397) goto block62; else goto block63;
block62:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MemoryLayout.frost:78
_400 = _367;
frost$core$Frost$unref$frost$core$Object$Q(_400);
_402 = *(&local4);
_403 = ((frost$core$Object*) _402);
frost$core$Frost$unref$frost$core$Object$Q(_403);
*(&local4) = ((org$frostlang$frostc$FieldDecl*) NULL);
goto block59;
block63:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MemoryLayout.frost:80
_408 = &param0->compiler;
_409 = *_408;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from MemoryLayout.frost:80:13
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
_414 = &_409->_valid;
_415 = *_414;
_417 = _415.value;
if (_417) goto block68; else goto block69;
block69:;
_419 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s48, _419, &$s49);
abort(); // unreachable
block68:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
_423 = &_409->value;
_424 = *_423;
_425 = _424;
_426 = _425;
frost$core$Frost$ref$frost$core$Object$Q(_426);
_429 = ((org$frostlang$frostc$Compiler*) _425);
_430 = *(&local4);
_431 = org$frostlang$frostc$Compiler$resolve$org$frostlang$frostc$FieldDecl$R$frost$core$Bit(_429, _430);
_432 = _425;
frost$core$Frost$unref$frost$core$Object$Q(_432);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MemoryLayout.frost:81
_435 = *(&local4);
_436 = &_435->type;
_437 = *_436;
_438 = &param0->compiler;
_439 = *_438;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from MemoryLayout.frost:81:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
_444 = &_439->_valid;
_445 = *_444;
_447 = _445.value;
if (_447) goto block75; else goto block76;
block76:;
_449 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s50, _449, &$s51);
abort(); // unreachable
block75:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
_453 = &_439->value;
_454 = *_453;
_455 = _454;
_456 = _455;
frost$core$Frost$ref$frost$core$Object$Q(_456);
_459 = ((org$frostlang$frostc$Compiler*) _455);
_460 = &_459->CHOICE_DATA_TYPE;
_461 = *_460;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from MemoryLayout.frost:81:23
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:256
_464 = ((org$frostlang$frostc$Symbol*) _437);
_465 = &_464->name;
_466 = *_465;
_467 = ((org$frostlang$frostc$Symbol*) _461);
_468 = &_467->name;
_469 = *_468;
_470 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(_466, _469);
_471 = _470.value;
if (_471) goto block78; else goto block79;
block78:;
_473 = &_437->typeKind;
_474 = *_473;
org$frostlang$frostc$Type$Kind$wrapper* $tmp52;
$tmp52 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp52->value = _474;
_475 = ((frost$core$Equatable*) $tmp52);
_476 = &_461->typeKind;
_477 = *_476;
org$frostlang$frostc$Type$Kind$wrapper* $tmp53;
$tmp53 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp53->value = _477;
_478 = ((frost$core$Equatable*) $tmp53);
ITable* $tmp54 = _475->$class->itable;
while ($tmp54->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp54 = $tmp54->next;
}
_479 = $tmp54->methods[0];
_480 = _479(_475, _478);
_481 = ((frost$core$Object*) _478);
frost$core$Frost$unref$frost$core$Object$Q(_481);
_483 = ((frost$core$Object*) _475);
frost$core$Frost$unref$frost$core$Object$Q(_483);
*(&local5) = _480;
goto block80;
block79:;
*(&local5) = _470;
goto block80;
block80:;
_489 = *(&local5);
_491 = _489.value;
_492 = _455;
frost$core$Frost$unref$frost$core$Object$Q(_492);
if (_491) goto block70; else goto block72;
block70:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MemoryLayout.frost:83
_496 = *(&local3);
_497 = *(&local2);
_498 = _497 != NULL;
_499 = (frost$core$Bit) {_498};
_500 = _499.value;
if (_500) goto block81; else goto block82;
block82:;
_502 = (frost$core$Int) {83u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s55, _502, &$s56);
abort(); // unreachable
block81:;
_505 = _497;
_506 = ($fn57) param0->$class->vtable[10];
_507 = _506(param0, _505);
_508 = _496.value;
_509 = _507.value;
_510 = _508 + _509;
_511 = (frost$core$Int) {_510};
*(&local3) = _511;
goto block71;
block72:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MemoryLayout.frost:86
_516 = *(&local4);
_517 = &_516->type;
_518 = *_517;
_519 = ($fn58) param0->$class->vtable[4];
_520 = _519(param0, _518);
*(&local6) = _520;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MemoryLayout.frost:87
_523 = *(&local3);
_524 = *(&local6);
// begin inline call to function frost.core.Int.%(other:frost.core.Int):frost.core.Int from MemoryLayout.frost:87:37
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:198
_527 = _523.value;
_528 = _524.value;
_529 = _527 % _528;
_530 = (frost$core$Int) {_529};
*(&local7) = _530;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MemoryLayout.frost:88
_534 = *(&local7);
_535 = (frost$core$Int) {0u};
_536 = _534.value;
_537 = _535.value;
_538 = _536 != _537;
_539 = (frost$core$Bit) {_538};
_540 = _539.value;
if (_540) goto block84; else goto block85;
block84:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MemoryLayout.frost:89
_543 = *(&local3);
_544 = *(&local6);
_545 = *(&local7);
_546 = _544.value;
_547 = _545.value;
_548 = _546 - _547;
_549 = (frost$core$Int) {_548};
_550 = _543.value;
_551 = _549.value;
_552 = _550 + _551;
_553 = (frost$core$Int) {_552};
*(&local3) = _553;
goto block85;
block85:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MemoryLayout.frost:91
_557 = *(&local3);
_558 = *(&local6);
// begin inline call to function frost.core.Int.%(other:frost.core.Int):frost.core.Int from MemoryLayout.frost:91:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:198
_561 = _557.value;
_562 = _558.value;
_563 = _561 % _562;
_564 = (frost$core$Int) {_563};
_566 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from MemoryLayout.frost:91:38
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_569 = _564.value;
_570 = _566.value;
_571 = _569 == _570;
_572 = (frost$core$Bit) {_571};
_574 = _572.value;
if (_574) goto block88; else goto block89;
block89:;
_576 = (frost$core$Int) {91u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s59, _576);
abort(); // unreachable
block88:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MemoryLayout.frost:92
_580 = *(&local3);
_581 = *(&local6);
_582 = _580.value;
_583 = _581.value;
_584 = _582 + _583;
_585 = (frost$core$Int) {_584};
*(&local3) = _585;
goto block71;
block71:;
_588 = _367;
frost$core$Frost$unref$frost$core$Object$Q(_588);
_590 = *(&local4);
_591 = ((frost$core$Object*) _590);
frost$core$Frost$unref$frost$core$Object$Q(_591);
*(&local4) = ((org$frostlang$frostc$FieldDecl*) NULL);
goto block59;
block61:;
_595 = ((frost$core$Object*) _359);
frost$core$Frost$unref$frost$core$Object$Q(_595);
_597 = ((frost$core$Object*) _356);
frost$core$Frost$unref$frost$core$Object$Q(_597);
_599 = _342;
frost$core$Frost$unref$frost$core$Object$Q(_599);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MemoryLayout.frost:95
_602 = &param1->typeKind;
_603 = *_602;
org$frostlang$frostc$Type$Kind$wrapper* $tmp60;
$tmp60 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp60->value = _603;
_604 = ((frost$core$Equatable*) $tmp60);
_605 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from MemoryLayout.frost:95:34
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_608 = &(&local9)->$rawValue;
*_608 = _605;
_610 = *(&local9);
*(&local8) = _610;
_613 = *(&local8);
org$frostlang$frostc$Type$Kind$wrapper* $tmp61;
$tmp61 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp61->value = _613;
_614 = ((frost$core$Equatable*) $tmp61);
ITable* $tmp62 = _604->$class->itable;
while ($tmp62->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp62 = $tmp62->next;
}
_615 = $tmp62->methods[0];
_616 = _615(_604, _614);
_617 = _616.value;
_618 = ((frost$core$Object*) _614);
frost$core$Frost$unref$frost$core$Object$Q(_618);
_620 = ((frost$core$Object*) _604);
frost$core$Frost$unref$frost$core$Object$Q(_620);
if (_617) goto block90; else goto block91;
block90:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MemoryLayout.frost:96
_624 = *(&local3);
_625 = (frost$core$Int) {1u};
_626 = _624.value;
_627 = _625.value;
_628 = _626 + _627;
_629 = (frost$core$Int) {_628};
*(&local3) = _629;
goto block91;
block91:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MemoryLayout.frost:98
_633 = ($fn63) param0->$class->vtable[5];
_634 = _633(param0, param1);
*(&local10) = _634;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MemoryLayout.frost:99
_637 = *(&local3);
_638 = *(&local10);
// begin inline call to function frost.core.Int.%(other:frost.core.Int):frost.core.Int from MemoryLayout.frost:99:19
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:198
_641 = _637.value;
_642 = _638.value;
_643 = _641 % _642;
_644 = (frost$core$Int) {_643};
_646 = (frost$core$Int) {0u};
_647 = _644.value;
_648 = _646.value;
_649 = _647 != _648;
_650 = (frost$core$Bit) {_649};
_651 = _650.value;
if (_651) goto block93; else goto block94;
block93:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MemoryLayout.frost:100
_654 = *(&local3);
_655 = *(&local10);
_656 = *(&local3);
_657 = *(&local10);
// begin inline call to function frost.core.Int.%(other:frost.core.Int):frost.core.Int from MemoryLayout.frost:100:38
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:198
_660 = _656.value;
_661 = _657.value;
_662 = _660 % _661;
_663 = (frost$core$Int) {_662};
_665 = _655.value;
_666 = _663.value;
_667 = _665 - _666;
_668 = (frost$core$Int) {_667};
_669 = _654.value;
_670 = _668.value;
_671 = _669 + _670;
_672 = (frost$core$Int) {_671};
*(&local3) = _672;
goto block94;
block94:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MemoryLayout.frost:102
_676 = *(&local3);
_677 = *(&local2);
_678 = ((frost$core$Object*) _677);
frost$core$Frost$unref$frost$core$Object$Q(_678);
*(&local2) = ((org$frostlang$frostc$ClassDecl*) NULL);
return _676;

}
frost$core$Int org$frostlang$frostc$MemoryLayout$alignment$org$frostlang$frostc$Type$R$frost$core$Int(void* rawSelf, org$frostlang$frostc$Type* param1) {
org$frostlang$frostc$MemoryLayout* param0 = (org$frostlang$frostc$MemoryLayout*) rawSelf;

org$frostlang$frostc$ClassDecl* local0 = NULL;
frost$core$Int$nullable local1;
frost$core$Int local2;
org$frostlang$frostc$FieldDecl* local3 = NULL;
frost$core$Bit local4;
frost$core$Int local5;
frost$core$Int local6;
frost$core$Bit _1;
bool _4;
bool _5;
frost$core$Bit _6;
bool _8;
$fn64 _11;
frost$core$Int _12;
frost$core$Weak** _15;
frost$core$Weak* _16;
frost$core$Bit* _21;
frost$core$Bit _22;
bool _24;
frost$core$Int _26;
frost$core$Object** _30;
frost$core$Object* _31;
frost$core$Object* _32;
frost$core$Object* _33;
org$frostlang$frostc$Compiler* _36;
org$frostlang$frostc$ClassDecl* _37;
frost$core$Object* _39;
org$frostlang$frostc$ClassDecl* _41;
frost$core$Object* _42;
frost$core$Object* _45;
frost$core$Object* _47;
org$frostlang$frostc$ClassDecl* _50;
bool _51;
frost$core$Bit _52;
bool _53;
frost$core$Int _55;
frost$core$Weak** _59;
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
org$frostlang$frostc$ClassDecl* _81;
bool _82;
frost$core$Bit _83;
bool _84;
frost$core$Int _86;
org$frostlang$frostc$ClassDecl* _89;
frost$core$Bit _90;
bool _93;
bool _94;
frost$core$Bit _95;
bool _97;
frost$core$Object* _98;
$fn65 _102;
frost$core$Int _103;
org$frostlang$frostc$ClassDecl* _104;
frost$core$Object* _105;
frost$core$Weak** _110;
frost$core$Weak* _111;
frost$core$Bit* _116;
frost$core$Bit _117;
bool _119;
frost$core$Int _121;
frost$core$Object** _125;
frost$core$Object* _126;
frost$core$Object* _127;
frost$core$Object* _128;
org$frostlang$frostc$Compiler* _131;
org$frostlang$frostc$ClassDecl* _132;
bool _133;
frost$core$Bit _134;
bool _135;
frost$core$Int _137;
org$frostlang$frostc$ClassDecl* _140;
frost$core$Bit _141;
bool _144;
bool _145;
frost$core$Bit _146;
bool _148;
frost$core$Object* _149;
$fn66 _153;
frost$core$Int _154;
org$frostlang$frostc$ClassDecl* _155;
frost$core$Object* _156;
frost$collections$IdentityMap** _161;
frost$collections$IdentityMap* _162;
org$frostlang$frostc$ClassDecl* _163;
bool _164;
frost$core$Bit _165;
bool _166;
frost$core$Int _168;
org$frostlang$frostc$ClassDecl* _171;
frost$core$Object* _172;
frost$core$Object* _173;
frost$core$Int$nullable _174;
frost$core$Object* _176;
frost$core$Int$nullable _179;
bool _180;
frost$core$Bit _181;
bool _182;
frost$core$Int$nullable _185;
bool _186;
frost$core$Bit _187;
bool _188;
frost$core$Int _190;
frost$core$Int _193;
org$frostlang$frostc$ClassDecl* _194;
frost$core$Object* _195;
frost$core$Int _200;
frost$core$Weak** _203;
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
org$frostlang$frostc$ClassDecl* _225;
bool _226;
frost$core$Bit _227;
bool _228;
frost$core$Int _230;
org$frostlang$frostc$ClassDecl* _233;
frost$collections$ListView* _234;
frost$collections$Iterable* _235;
$fn67 _236;
frost$collections$Iterator* _237;
$fn68 _239;
frost$core$Bit _240;
bool _241;
$fn69 _244;
frost$core$Object* _245;
org$frostlang$frostc$FieldDecl* _246;
frost$core$Object* _247;
org$frostlang$frostc$FieldDecl* _249;
frost$core$Object* _250;
frost$core$Weak** _254;
frost$core$Weak* _255;
frost$core$Bit* _260;
frost$core$Bit _261;
bool _263;
frost$core$Int _265;
frost$core$Object** _269;
frost$core$Object* _270;
frost$core$Object* _271;
frost$core$Object* _272;
org$frostlang$frostc$Compiler* _275;
org$frostlang$frostc$FieldDecl* _276;
frost$core$Bit _277;
bool _280;
bool _281;
frost$core$Bit _282;
bool _284;
frost$core$Object* _285;
frost$core$Object* _289;
org$frostlang$frostc$FieldDecl* _291;
frost$core$Object* _292;
org$frostlang$frostc$FieldDecl* _297;
org$frostlang$frostc$Type** _298;
org$frostlang$frostc$Type* _299;
frost$core$Weak** _300;
frost$core$Weak* _301;
frost$core$Bit* _306;
frost$core$Bit _307;
bool _309;
frost$core$Int _311;
frost$core$Object** _315;
frost$core$Object* _316;
frost$core$Object* _317;
frost$core$Object* _318;
org$frostlang$frostc$Compiler* _321;
org$frostlang$frostc$Type** _322;
org$frostlang$frostc$Type* _323;
org$frostlang$frostc$Symbol* _326;
frost$core$String** _327;
frost$core$String* _328;
org$frostlang$frostc$Symbol* _329;
frost$core$String** _330;
frost$core$String* _331;
frost$core$Bit _332;
bool _333;
org$frostlang$frostc$Type$Kind* _335;
org$frostlang$frostc$Type$Kind _336;
frost$core$Equatable* _337;
org$frostlang$frostc$Type$Kind* _338;
org$frostlang$frostc$Type$Kind _339;
frost$core$Equatable* _340;
$fn70 _341;
frost$core$Bit _342;
frost$core$Object* _343;
frost$core$Object* _345;
frost$core$Bit _351;
bool _353;
frost$core$Object* _354;
frost$core$Int _358;
frost$core$Int _359;
int64_t _362;
int64_t _363;
bool _364;
frost$core$Bit _365;
bool _366;
int64_t _369;
frost$core$Int _370;
int64_t _374;
frost$core$Int _375;
frost$core$Int _378;
frost$core$Int _383;
org$frostlang$frostc$FieldDecl* _384;
org$frostlang$frostc$Type** _385;
org$frostlang$frostc$Type* _386;
$fn71 _387;
frost$core$Int _388;
int64_t _391;
int64_t _392;
bool _393;
frost$core$Bit _394;
bool _395;
int64_t _398;
frost$core$Int _399;
int64_t _403;
frost$core$Int _404;
frost$core$Int _407;
frost$core$Object* _410;
org$frostlang$frostc$FieldDecl* _412;
frost$core$Object* _413;
frost$core$Object* _417;
frost$core$Object* _419;
frost$core$Object* _421;
frost$collections$IdentityMap** _424;
frost$collections$IdentityMap* _425;
org$frostlang$frostc$ClassDecl* _426;
bool _427;
frost$core$Bit _428;
bool _429;
frost$core$Int _431;
org$frostlang$frostc$ClassDecl* _434;
frost$core$Object* _435;
frost$core$Int _436;
frost$core$Object* _437;
frost$core$Object* _439;
frost$core$Int _442;
org$frostlang$frostc$ClassDecl* _443;
frost$core$Object* _444;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MemoryLayout.frost:106
_1 = org$frostlang$frostc$Type$get_isClass$R$frost$core$Bit(param1);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from MemoryLayout.frost:106:12
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
_4 = _1.value;
_5 = !_4;
_6 = (frost$core$Bit) {_5};
_8 = _6.value;
if (_8) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MemoryLayout.frost:107
_11 = ($fn72) param0->$class->vtable[4];
_12 = _11(param0, param1);
return _12;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MemoryLayout.frost:109
_15 = &param0->compiler;
_16 = *_15;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from MemoryLayout.frost:109:19
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
_21 = &_16->_valid;
_22 = *_21;
_24 = _22.value;
if (_24) goto block6; else goto block7;
block7:;
_26 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s73, _26, &$s74);
abort(); // unreachable
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
_30 = &_16->value;
_31 = *_30;
_32 = _31;
_33 = _32;
frost$core$Frost$ref$frost$core$Object$Q(_33);
_36 = ((org$frostlang$frostc$Compiler*) _32);
_37 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(_36, param1);
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
_39 = ((frost$core$Object*) _37);
frost$core$Frost$ref$frost$core$Object$Q(_39);
_41 = *(&local0);
_42 = ((frost$core$Object*) _41);
frost$core$Frost$unref$frost$core$Object$Q(_42);
*(&local0) = _37;
_45 = ((frost$core$Object*) _37);
frost$core$Frost$unref$frost$core$Object$Q(_45);
_47 = _32;
frost$core$Frost$unref$frost$core$Object$Q(_47);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MemoryLayout.frost:110
_50 = *(&local0);
_51 = _50 != NULL;
_52 = (frost$core$Bit) {_51};
_53 = _52.value;
if (_53) goto block8; else goto block9;
block9:;
_55 = (frost$core$Int) {110u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s75, _55);
abort(); // unreachable
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MemoryLayout.frost:111
_59 = &param0->compiler;
_60 = *_59;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from MemoryLayout.frost:111:13
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
_65 = &_60->_valid;
_66 = *_65;
_68 = _66.value;
if (_68) goto block14; else goto block15;
block15:;
_70 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s76, _70, &$s77);
abort(); // unreachable
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
_74 = &_60->value;
_75 = *_74;
_76 = _75;
_77 = _76;
frost$core$Frost$ref$frost$core$Object$Q(_77);
_80 = ((org$frostlang$frostc$Compiler*) _76);
_81 = *(&local0);
_82 = _81 != NULL;
_83 = (frost$core$Bit) {_82};
_84 = _83.value;
if (_84) goto block16; else goto block17;
block17:;
_86 = (frost$core$Int) {111u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s78, _86, &$s79);
abort(); // unreachable
block16:;
_89 = _81;
_90 = org$frostlang$frostc$Compiler$resolve$org$frostlang$frostc$ClassDecl$R$frost$core$Bit(_80, _89);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from MemoryLayout.frost:111:12
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
_93 = _90.value;
_94 = !_93;
_95 = (frost$core$Bit) {_94};
_97 = _95.value;
_98 = _76;
frost$core$Frost$unref$frost$core$Object$Q(_98);
if (_97) goto block10; else goto block11;
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MemoryLayout.frost:112
_102 = ($fn80) param0->$class->vtable[3];
_103 = _102(param0);
_104 = *(&local0);
_105 = ((frost$core$Object*) _104);
frost$core$Frost$unref$frost$core$Object$Q(_105);
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return _103;
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MemoryLayout.frost:114
_110 = &param0->compiler;
_111 = *_110;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from MemoryLayout.frost:114:13
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
_116 = &_111->_valid;
_117 = *_116;
_119 = _117.value;
if (_119) goto block23; else goto block24;
block24:;
_121 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s81, _121, &$s82);
abort(); // unreachable
block23:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
_125 = &_111->value;
_126 = *_125;
_127 = _126;
_128 = _127;
frost$core$Frost$ref$frost$core$Object$Q(_128);
_131 = ((org$frostlang$frostc$Compiler*) _127);
_132 = *(&local0);
_133 = _132 != NULL;
_134 = (frost$core$Bit) {_133};
_135 = _134.value;
if (_135) goto block25; else goto block26;
block26:;
_137 = (frost$core$Int) {114u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s83, _137, &$s84);
abort(); // unreachable
block25:;
_140 = _132;
_141 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$ClassDecl$R$frost$core$Bit(_131, _140);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from MemoryLayout.frost:114:12
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
_144 = _141.value;
_145 = !_144;
_146 = (frost$core$Bit) {_145};
_148 = _146.value;
_149 = _127;
frost$core$Frost$unref$frost$core$Object$Q(_149);
if (_148) goto block19; else goto block20;
block19:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MemoryLayout.frost:115
_153 = ($fn85) param0->$class->vtable[3];
_154 = _153(param0);
_155 = *(&local0);
_156 = ((frost$core$Object*) _155);
frost$core$Frost$unref$frost$core$Object$Q(_156);
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return _154;
block20:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MemoryLayout.frost:117
_161 = &param0->alignments;
_162 = *_161;
_163 = *(&local0);
_164 = _163 != NULL;
_165 = (frost$core$Bit) {_164};
_166 = _165.value;
if (_166) goto block28; else goto block29;
block29:;
_168 = (frost$core$Int) {117u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s86, _168, &$s87);
abort(); // unreachable
block28:;
_171 = _163;
_172 = ((frost$core$Object*) _171);
_173 = frost$collections$IdentityMap$$IDX$frost$collections$IdentityMap$K$R$frost$collections$IdentityMap$V$Q(_162, _172);
_174 = (_173 != NULL ? ((frost$core$Int$nullable) { ((frost$core$Int$wrapper*) _173)->value, true }) : (frost$core$Int$nullable) { .nonnull = 0 });
*(&local1) = _174;
_176 = _173;
frost$core$Frost$unref$frost$core$Object$Q(_176);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MemoryLayout.frost:118
_179 = *(&local1);
_180 = _179.nonnull;
_181 = (frost$core$Bit) {_180};
_182 = _181.value;
if (_182) goto block30; else goto block31;
block30:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MemoryLayout.frost:119
_185 = *(&local1);
_186 = _185.nonnull;
_187 = (frost$core$Bit) {_186};
_188 = _187.value;
if (_188) goto block32; else goto block33;
block33:;
_190 = (frost$core$Int) {119u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s88, _190, &$s89);
abort(); // unreachable
block32:;
_193 = ((frost$core$Int) _185.value);
_194 = *(&local0);
_195 = ((frost$core$Object*) _194);
frost$core$Frost$unref$frost$core$Object$Q(_195);
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return _193;
block31:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MemoryLayout.frost:121
_200 = (frost$core$Int) {0u};
*(&local2) = _200;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MemoryLayout.frost:122
_203 = &param0->compiler;
_204 = *_203;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from MemoryLayout.frost:122:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
_209 = &_204->_valid;
_210 = *_209;
_212 = _210.value;
if (_212) goto block36; else goto block37;
block37:;
_214 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s90, _214, &$s91);
abort(); // unreachable
block36:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
_218 = &_204->value;
_219 = *_218;
_220 = _219;
_221 = _220;
frost$core$Frost$ref$frost$core$Object$Q(_221);
_224 = ((org$frostlang$frostc$Compiler*) _220);
_225 = *(&local0);
_226 = _225 != NULL;
_227 = (frost$core$Bit) {_226};
_228 = _227.value;
if (_228) goto block38; else goto block39;
block39:;
_230 = (frost$core$Int) {122u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s92, _230, &$s93);
abort(); // unreachable
block38:;
_233 = _225;
_234 = org$frostlang$frostc$Compiler$instanceFields$org$frostlang$frostc$ClassDecl$R$frost$collections$ListView$LTorg$frostlang$frostc$FieldDecl$GT(_224, _233);
_235 = ((frost$collections$Iterable*) _234);
ITable* $tmp94 = _235->$class->itable;
while ($tmp94->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp94 = $tmp94->next;
}
_236 = $tmp94->methods[0];
_237 = _236(_235);
goto block40;
block40:;
ITable* $tmp95 = _237->$class->itable;
while ($tmp95->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp95 = $tmp95->next;
}
_239 = $tmp95->methods[0];
_240 = _239(_237);
_241 = _240.value;
if (_241) goto block42; else goto block41;
block41:;
*(&local3) = ((org$frostlang$frostc$FieldDecl*) NULL);
ITable* $tmp96 = _237->$class->itable;
while ($tmp96->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp96 = $tmp96->next;
}
_244 = $tmp96->methods[1];
_245 = _244(_237);
_246 = ((org$frostlang$frostc$FieldDecl*) _245);
_247 = ((frost$core$Object*) _246);
frost$core$Frost$ref$frost$core$Object$Q(_247);
_249 = *(&local3);
_250 = ((frost$core$Object*) _249);
frost$core$Frost$unref$frost$core$Object$Q(_250);
*(&local3) = _246;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MemoryLayout.frost:123
_254 = &param0->compiler;
_255 = *_254;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from MemoryLayout.frost:123:17
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
_260 = &_255->_valid;
_261 = *_260;
_263 = _261.value;
if (_263) goto block47; else goto block48;
block48:;
_265 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s97, _265, &$s98);
abort(); // unreachable
block47:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
_269 = &_255->value;
_270 = *_269;
_271 = _270;
_272 = _271;
frost$core$Frost$ref$frost$core$Object$Q(_272);
_275 = ((org$frostlang$frostc$Compiler*) _271);
_276 = *(&local3);
_277 = org$frostlang$frostc$Compiler$resolve$org$frostlang$frostc$FieldDecl$R$frost$core$Bit(_275, _276);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from MemoryLayout.frost:123:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
_280 = _277.value;
_281 = !_280;
_282 = (frost$core$Bit) {_281};
_284 = _282.value;
_285 = _271;
frost$core$Frost$unref$frost$core$Object$Q(_285);
if (_284) goto block43; else goto block44;
block43:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MemoryLayout.frost:124
_289 = _245;
frost$core$Frost$unref$frost$core$Object$Q(_289);
_291 = *(&local3);
_292 = ((frost$core$Object*) _291);
frost$core$Frost$unref$frost$core$Object$Q(_292);
*(&local3) = ((org$frostlang$frostc$FieldDecl*) NULL);
goto block40;
block44:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MemoryLayout.frost:126
_297 = *(&local3);
_298 = &_297->type;
_299 = *_298;
_300 = &param0->compiler;
_301 = *_300;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from MemoryLayout.frost:126:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
_306 = &_301->_valid;
_307 = *_306;
_309 = _307.value;
if (_309) goto block55; else goto block56;
block56:;
_311 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s99, _311, &$s100);
abort(); // unreachable
block55:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
_315 = &_301->value;
_316 = *_315;
_317 = _316;
_318 = _317;
frost$core$Frost$ref$frost$core$Object$Q(_318);
_321 = ((org$frostlang$frostc$Compiler*) _317);
_322 = &_321->CHOICE_DATA_TYPE;
_323 = *_322;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from MemoryLayout.frost:126:23
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:256
_326 = ((org$frostlang$frostc$Symbol*) _299);
_327 = &_326->name;
_328 = *_327;
_329 = ((org$frostlang$frostc$Symbol*) _323);
_330 = &_329->name;
_331 = *_330;
_332 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(_328, _331);
_333 = _332.value;
if (_333) goto block58; else goto block59;
block58:;
_335 = &_299->typeKind;
_336 = *_335;
org$frostlang$frostc$Type$Kind$wrapper* $tmp101;
$tmp101 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp101->value = _336;
_337 = ((frost$core$Equatable*) $tmp101);
_338 = &_323->typeKind;
_339 = *_338;
org$frostlang$frostc$Type$Kind$wrapper* $tmp102;
$tmp102 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp102->value = _339;
_340 = ((frost$core$Equatable*) $tmp102);
ITable* $tmp103 = _337->$class->itable;
while ($tmp103->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp103 = $tmp103->next;
}
_341 = $tmp103->methods[0];
_342 = _341(_337, _340);
_343 = ((frost$core$Object*) _340);
frost$core$Frost$unref$frost$core$Object$Q(_343);
_345 = ((frost$core$Object*) _337);
frost$core$Frost$unref$frost$core$Object$Q(_345);
*(&local4) = _342;
goto block60;
block59:;
*(&local4) = _332;
goto block60;
block60:;
_351 = *(&local4);
_353 = _351.value;
_354 = _317;
frost$core$Frost$unref$frost$core$Object$Q(_354);
if (_353) goto block50; else goto block52;
block50:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MemoryLayout.frost:128
_358 = *(&local2);
_359 = (frost$core$Int) {8u};
// begin inline call to function frost.core.Int.max(other:frost.core.Int):frost.core.Int from MemoryLayout.frost:128:37
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:858
_362 = _358.value;
_363 = _359.value;
_364 = _362 > _363;
_365 = (frost$core$Bit) {_364};
_366 = _365.value;
if (_366) goto block62; else goto block63;
block62:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:859
_369 = _358.value;
_370 = (frost$core$Int) {_369};
*(&local5) = _370;
goto block61;
block63:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:861
_374 = _359.value;
_375 = (frost$core$Int) {_374};
*(&local5) = _375;
goto block61;
block61:;
_378 = *(&local5);
*(&local2) = _378;
goto block51;
block52:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MemoryLayout.frost:131
_383 = *(&local2);
_384 = *(&local3);
_385 = &_384->type;
_386 = *_385;
_387 = ($fn104) param0->$class->vtable[5];
_388 = _387(param0, _386);
// begin inline call to function frost.core.Int.max(other:frost.core.Int):frost.core.Int from MemoryLayout.frost:131:37
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:858
_391 = _383.value;
_392 = _388.value;
_393 = _391 > _392;
_394 = (frost$core$Bit) {_393};
_395 = _394.value;
if (_395) goto block65; else goto block66;
block65:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:859
_398 = _383.value;
_399 = (frost$core$Int) {_398};
*(&local6) = _399;
goto block64;
block66:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:861
_403 = _388.value;
_404 = (frost$core$Int) {_403};
*(&local6) = _404;
goto block64;
block64:;
_407 = *(&local6);
*(&local2) = _407;
goto block51;
block51:;
_410 = _245;
frost$core$Frost$unref$frost$core$Object$Q(_410);
_412 = *(&local3);
_413 = ((frost$core$Object*) _412);
frost$core$Frost$unref$frost$core$Object$Q(_413);
*(&local3) = ((org$frostlang$frostc$FieldDecl*) NULL);
goto block40;
block42:;
_417 = ((frost$core$Object*) _237);
frost$core$Frost$unref$frost$core$Object$Q(_417);
_419 = ((frost$core$Object*) _234);
frost$core$Frost$unref$frost$core$Object$Q(_419);
_421 = _220;
frost$core$Frost$unref$frost$core$Object$Q(_421);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MemoryLayout.frost:134
_424 = &param0->alignments;
_425 = *_424;
_426 = *(&local0);
_427 = _426 != NULL;
_428 = (frost$core$Bit) {_427};
_429 = _428.value;
if (_429) goto block67; else goto block68;
block68:;
_431 = (frost$core$Int) {134u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s105, _431, &$s106);
abort(); // unreachable
block67:;
_434 = _426;
_435 = ((frost$core$Object*) _434);
_436 = *(&local2);
frost$core$Int$wrapper* $tmp107;
$tmp107 = (frost$core$Int$wrapper*) frostObjectAlloc(sizeof(frost$core$Int$wrapper), (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp107->value = _436;
_437 = ((frost$core$Object*) $tmp107);
frost$collections$IdentityMap$$IDXEQ$frost$collections$IdentityMap$K$frost$collections$IdentityMap$V(_425, _435, _437);
_439 = _437;
frost$core$Frost$unref$frost$core$Object$Q(_439);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MemoryLayout.frost:135
_442 = *(&local2);
_443 = *(&local0);
_444 = ((frost$core$Object*) _443);
frost$core$Frost$unref$frost$core$Object$Q(_444);
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return _442;

}
void org$frostlang$frostc$MemoryLayout$computeLayout$org$frostlang$frostc$ClassDecl(void* rawSelf, org$frostlang$frostc$ClassDecl* param1) {
org$frostlang$frostc$MemoryLayout* param0 = (org$frostlang$frostc$MemoryLayout*) rawSelf;

org$frostlang$frostc$Type** _1;
org$frostlang$frostc$Type* _2;
$fn108 _3;
frost$core$Int _4;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MemoryLayout.frost:139
_1 = &param1->type;
_2 = *_1;
_3 = ($fn109) param0->$class->vtable[7];
_4 = _3(param0, _2);
return;

}
frost$core$Int org$frostlang$frostc$MemoryLayout$sizeOf$org$frostlang$frostc$Type$R$frost$core$Int(void* rawSelf, org$frostlang$frostc$Type* param1) {
org$frostlang$frostc$MemoryLayout* param0 = (org$frostlang$frostc$MemoryLayout*) rawSelf;

org$frostlang$frostc$ClassDecl* local0 = NULL;
org$frostlang$frostc$Compiler$Resolution local1;
org$frostlang$frostc$Compiler$Resolution local2;
frost$core$Int$nullable local3;
frost$core$Int local4;
org$frostlang$frostc$FieldDecl* local5 = NULL;
frost$core$Bit local6;
frost$core$Int local7;
org$frostlang$frostc$Type$Kind local8;
org$frostlang$frostc$Type$Kind local9;
frost$core$Int local10;
frost$core$Bit _1;
bool _4;
bool _5;
frost$core$Bit _6;
bool _8;
$fn110 _11;
frost$core$Int _12;
frost$core$Weak** _15;
frost$core$Weak* _16;
frost$core$Bit* _21;
frost$core$Bit _22;
bool _24;
frost$core$Int _26;
frost$core$Object** _30;
frost$core$Object* _31;
frost$core$Object* _32;
frost$core$Object* _33;
org$frostlang$frostc$Compiler* _36;
org$frostlang$frostc$ClassDecl* _37;
frost$core$Object* _39;
org$frostlang$frostc$ClassDecl* _41;
frost$core$Object* _42;
frost$core$Object* _45;
frost$core$Object* _47;
org$frostlang$frostc$ClassDecl* _50;
bool _51;
frost$core$Bit _52;
bool _53;
frost$core$Int _55;
frost$core$Object* _56;
$fn111 _59;
frost$core$String* _60;
frost$core$String* _61;
frost$core$Object* _62;
frost$core$Object* _64;
frost$core$Object* _66;
frost$core$String* _69;
frost$core$Object* _71;
frost$core$Object* _73;
org$frostlang$frostc$ClassDecl* _77;
bool _78;
frost$core$Bit _79;
bool _80;
frost$core$Int _82;
org$frostlang$frostc$ClassDecl* _85;
org$frostlang$frostc$Compiler$Resolution* _86;
org$frostlang$frostc$Compiler$Resolution _87;
frost$core$Equatable* _88;
frost$core$Int _89;
frost$core$Int* _92;
org$frostlang$frostc$Compiler$Resolution _94;
org$frostlang$frostc$Compiler$Resolution _97;
frost$core$Equatable* _98;
$fn112 _99;
frost$core$Bit _100;
bool _101;
frost$core$Int _103;
org$frostlang$frostc$ClassDecl* _104;
bool _105;
frost$core$Bit _106;
bool _107;
frost$core$Int _109;
org$frostlang$frostc$ClassDecl* _112;
frost$core$String** _113;
frost$core$String* _114;
frost$core$String* _115;
frost$core$String* _116;
frost$core$Object* _118;
frost$core$Object* _120;
frost$core$Object* _123;
frost$core$Object* _125;
frost$collections$IdentityMap** _128;
frost$collections$IdentityMap* _129;
org$frostlang$frostc$ClassDecl* _130;
bool _131;
frost$core$Bit _132;
bool _133;
frost$core$Int _135;
org$frostlang$frostc$ClassDecl* _138;
frost$core$Object* _139;
frost$core$Object* _140;
frost$core$Int$nullable _141;
frost$core$Object* _143;
frost$core$Int$nullable _146;
bool _147;
frost$core$Bit _148;
bool _149;
frost$core$Int$nullable _152;
bool _153;
frost$core$Bit _154;
bool _155;
frost$core$Int _157;
frost$core$Int _160;
org$frostlang$frostc$ClassDecl* _161;
frost$core$Object* _162;
frost$core$Int _167;
frost$core$Weak** _170;
frost$core$Weak* _171;
frost$core$Bit* _176;
frost$core$Bit _177;
bool _179;
frost$core$Int _181;
frost$core$Object** _185;
frost$core$Object* _186;
frost$core$Object* _187;
frost$core$Object* _188;
org$frostlang$frostc$Compiler* _191;
org$frostlang$frostc$ClassDecl* _192;
bool _193;
frost$core$Bit _194;
bool _195;
frost$core$Int _197;
org$frostlang$frostc$ClassDecl* _200;
frost$collections$ListView* _201;
frost$collections$Iterable* _202;
$fn113 _203;
frost$collections$Iterator* _204;
$fn114 _206;
frost$core$Bit _207;
bool _208;
$fn115 _211;
frost$core$Object* _212;
org$frostlang$frostc$FieldDecl* _213;
frost$core$Object* _214;
org$frostlang$frostc$FieldDecl* _216;
frost$core$Object* _217;
frost$core$Weak** _221;
frost$core$Weak* _222;
frost$core$Bit* _227;
frost$core$Bit _228;
bool _230;
frost$core$Int _232;
frost$core$Object** _236;
frost$core$Object* _237;
frost$core$Object* _238;
frost$core$Object* _239;
org$frostlang$frostc$Compiler* _242;
org$frostlang$frostc$FieldDecl* _243;
frost$core$Bit _244;
bool _247;
bool _248;
frost$core$Bit _249;
bool _251;
frost$core$Object* _252;
frost$core$Object* _256;
org$frostlang$frostc$FieldDecl* _258;
frost$core$Object* _259;
org$frostlang$frostc$FieldDecl* _264;
org$frostlang$frostc$Type** _265;
org$frostlang$frostc$Type* _266;
frost$core$Weak** _267;
frost$core$Weak* _268;
frost$core$Bit* _273;
frost$core$Bit _274;
bool _276;
frost$core$Int _278;
frost$core$Object** _282;
frost$core$Object* _283;
frost$core$Object* _284;
frost$core$Object* _285;
org$frostlang$frostc$Compiler* _288;
org$frostlang$frostc$Type** _289;
org$frostlang$frostc$Type* _290;
org$frostlang$frostc$Symbol* _293;
frost$core$String** _294;
frost$core$String* _295;
org$frostlang$frostc$Symbol* _296;
frost$core$String** _297;
frost$core$String* _298;
frost$core$Bit _299;
bool _300;
org$frostlang$frostc$Type$Kind* _302;
org$frostlang$frostc$Type$Kind _303;
frost$core$Equatable* _304;
org$frostlang$frostc$Type$Kind* _305;
org$frostlang$frostc$Type$Kind _306;
frost$core$Equatable* _307;
$fn116 _308;
frost$core$Bit _309;
frost$core$Object* _310;
frost$core$Object* _312;
frost$core$Bit _318;
bool _320;
frost$core$Object* _321;
frost$core$Int _325;
org$frostlang$frostc$ClassDecl* _326;
bool _327;
frost$core$Bit _328;
bool _329;
frost$core$Int _331;
org$frostlang$frostc$ClassDecl* _334;
$fn117 _335;
frost$core$Int _336;
int64_t _337;
int64_t _338;
int64_t _339;
frost$core$Int _340;
org$frostlang$frostc$FieldDecl* _345;
org$frostlang$frostc$Type** _346;
org$frostlang$frostc$Type* _347;
$fn118 _348;
frost$core$Int _349;
frost$core$Int _352;
frost$core$Int _353;
int64_t _356;
int64_t _357;
int64_t _358;
frost$core$Int _359;
frost$core$Int _361;
int64_t _362;
int64_t _363;
bool _364;
frost$core$Bit _365;
bool _366;
frost$core$Int _369;
frost$core$Int _370;
frost$core$Int _371;
frost$core$Int _372;
int64_t _375;
int64_t _376;
int64_t _377;
frost$core$Int _378;
int64_t _380;
int64_t _381;
int64_t _382;
frost$core$Int _383;
int64_t _384;
int64_t _385;
int64_t _386;
frost$core$Int _387;
frost$core$Int _391;
org$frostlang$frostc$FieldDecl* _392;
org$frostlang$frostc$Type** _393;
org$frostlang$frostc$Type* _394;
$fn119 _395;
frost$core$Int _396;
int64_t _399;
int64_t _400;
int64_t _401;
frost$core$Int _402;
frost$core$Int _404;
int64_t _407;
int64_t _408;
bool _409;
frost$core$Bit _410;
bool _412;
frost$core$Int _414;
org$frostlang$frostc$FieldDecl* _415;
frost$core$Object* _416;
$fn120 _419;
frost$core$String* _420;
frost$core$String* _421;
frost$core$Object* _422;
frost$core$Object* _424;
frost$core$Object* _426;
frost$core$String* _429;
org$frostlang$frostc$FieldDecl* _430;
org$frostlang$frostc$Type** _431;
org$frostlang$frostc$Type* _432;
frost$core$Object* _433;
$fn121 _436;
frost$core$String* _437;
frost$core$String* _438;
frost$core$Object* _439;
frost$core$Object* _441;
frost$core$Object* _443;
frost$core$String* _446;
frost$core$Int _447;
frost$core$Object* _448;
$fn122 _451;
frost$core$String* _452;
frost$core$String* _453;
frost$core$Object* _454;
frost$core$Object* _456;
frost$core$Object* _458;
frost$core$String* _461;
frost$core$Object* _463;
frost$core$Object* _465;
frost$core$Object* _467;
frost$core$Object* _469;
frost$core$Object* _471;
frost$core$Object* _473;
frost$core$Object* _475;
org$frostlang$frostc$FieldDecl* _479;
frost$core$Int _480;
frost$core$Int* _481;
frost$core$Int _484;
org$frostlang$frostc$FieldDecl* _485;
org$frostlang$frostc$Type** _486;
org$frostlang$frostc$Type* _487;
$fn123 _488;
frost$core$Int _489;
int64_t _490;
int64_t _491;
int64_t _492;
frost$core$Int _493;
frost$core$Object* _496;
org$frostlang$frostc$FieldDecl* _498;
frost$core$Object* _499;
frost$core$Object* _503;
frost$core$Object* _505;
frost$core$Object* _507;
frost$core$Weak** _510;
frost$core$Weak* _511;
frost$core$Bit* _516;
frost$core$Bit _517;
bool _519;
frost$core$Int _521;
frost$core$Object** _525;
frost$core$Object* _526;
frost$core$Object* _527;
frost$core$Object* _528;
org$frostlang$frostc$Compiler* _531;
org$frostlang$frostc$ClassDecl* _532;
bool _533;
frost$core$Bit _534;
bool _535;
frost$core$Int _537;
org$frostlang$frostc$ClassDecl* _540;
frost$core$Bit _541;
bool _542;
frost$core$Object* _543;
org$frostlang$frostc$Type$Kind* _546;
org$frostlang$frostc$Type$Kind _547;
frost$core$Equatable* _548;
frost$core$Int _549;
frost$core$Int* _552;
org$frostlang$frostc$Type$Kind _554;
org$frostlang$frostc$Type$Kind _557;
frost$core$Equatable* _558;
$fn124 _559;
frost$core$Bit _560;
bool _561;
frost$core$Object* _562;
frost$core$Object* _564;
frost$core$Int _568;
frost$core$Int _569;
int64_t _570;
int64_t _571;
int64_t _572;
frost$core$Int _573;
$fn125 _577;
frost$core$Int _578;
frost$core$Int _581;
frost$core$Int _582;
int64_t _585;
int64_t _586;
int64_t _587;
frost$core$Int _588;
frost$core$Int _590;
int64_t _591;
int64_t _592;
bool _593;
frost$core$Bit _594;
bool _595;
frost$core$Int _598;
frost$core$Int _599;
frost$core$Int _600;
frost$core$Int _601;
int64_t _604;
int64_t _605;
int64_t _606;
frost$core$Int _607;
int64_t _609;
int64_t _610;
int64_t _611;
frost$core$Int _612;
int64_t _613;
int64_t _614;
int64_t _615;
frost$core$Int _616;
frost$collections$IdentityMap** _620;
frost$collections$IdentityMap* _621;
org$frostlang$frostc$ClassDecl* _622;
bool _623;
frost$core$Bit _624;
bool _625;
frost$core$Int _627;
org$frostlang$frostc$ClassDecl* _630;
frost$core$Object* _631;
frost$core$Int _632;
frost$core$Object* _633;
frost$core$Object* _635;
frost$core$Int _638;
org$frostlang$frostc$ClassDecl* _639;
frost$core$Object* _640;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MemoryLayout.frost:143
_1 = org$frostlang$frostc$Type$get_isClass$R$frost$core$Bit(param1);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from MemoryLayout.frost:143:12
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
_4 = _1.value;
_5 = !_4;
_6 = (frost$core$Bit) {_5};
_8 = _6.value;
if (_8) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MemoryLayout.frost:144
_11 = ($fn126) param0->$class->vtable[4];
_12 = _11(param0, param1);
return _12;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MemoryLayout.frost:146
_15 = &param0->compiler;
_16 = *_15;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from MemoryLayout.frost:146:19
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
_21 = &_16->_valid;
_22 = *_21;
_24 = _22.value;
if (_24) goto block6; else goto block7;
block7:;
_26 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s127, _26, &$s128);
abort(); // unreachable
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
_30 = &_16->value;
_31 = *_30;
_32 = _31;
_33 = _32;
frost$core$Frost$ref$frost$core$Object$Q(_33);
_36 = ((org$frostlang$frostc$Compiler*) _32);
_37 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(_36, param1);
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
_39 = ((frost$core$Object*) _37);
frost$core$Frost$ref$frost$core$Object$Q(_39);
_41 = *(&local0);
_42 = ((frost$core$Object*) _41);
frost$core$Frost$unref$frost$core$Object$Q(_42);
*(&local0) = _37;
_45 = ((frost$core$Object*) _37);
frost$core$Frost$unref$frost$core$Object$Q(_45);
_47 = _32;
frost$core$Frost$unref$frost$core$Object$Q(_47);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MemoryLayout.frost:147
_50 = *(&local0);
_51 = _50 != NULL;
_52 = (frost$core$Bit) {_51};
_53 = _52.value;
if (_53) goto block8; else goto block9;
block9:;
_55 = (frost$core$Int) {147u};
_56 = ((frost$core$Object*) param1);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from MemoryLayout.frost:147:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
_59 = ($fn129) _56->$class->vtable[0];
_60 = _59(_56);
_61 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s130, _60);
_62 = ((frost$core$Object*) _61);
frost$core$Frost$ref$frost$core$Object$Q(_62);
_64 = ((frost$core$Object*) _61);
frost$core$Frost$unref$frost$core$Object$Q(_64);
_66 = ((frost$core$Object*) _60);
frost$core$Frost$unref$frost$core$Object$Q(_66);
_69 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_61, &$s131);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s132, _55, _69);
_71 = ((frost$core$Object*) _69);
frost$core$Frost$unref$frost$core$Object$Q(_71);
_73 = ((frost$core$Object*) _61);
frost$core$Frost$unref$frost$core$Object$Q(_73);
abort(); // unreachable
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MemoryLayout.frost:148
_77 = *(&local0);
_78 = _77 != NULL;
_79 = (frost$core$Bit) {_78};
_80 = _79.value;
if (_80) goto block11; else goto block12;
block12:;
_82 = (frost$core$Int) {148u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s133, _82, &$s134);
abort(); // unreachable
block11:;
_85 = _77;
_86 = &_85->resolved;
_87 = *_86;
org$frostlang$frostc$Compiler$Resolution$wrapper* $tmp135;
$tmp135 = (org$frostlang$frostc$Compiler$Resolution$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Compiler$Resolution$wrapper), (frost$core$Class*) &org$frostlang$frostc$Compiler$Resolution$wrapperclass);
$tmp135->value = _87;
_88 = ((frost$core$Equatable*) $tmp135);
_89 = (frost$core$Int) {2u};
// begin inline call to org.frostlang.frostc.Compiler.Resolution.init(rv:frost.core.Int):org.frostlang.frostc.Compiler.Resolution from MemoryLayout.frost:148:49
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:44
_92 = &(&local2)->$rawValue;
*_92 = _89;
_94 = *(&local2);
*(&local1) = _94;
_97 = *(&local1);
org$frostlang$frostc$Compiler$Resolution$wrapper* $tmp136;
$tmp136 = (org$frostlang$frostc$Compiler$Resolution$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Compiler$Resolution$wrapper), (frost$core$Class*) &org$frostlang$frostc$Compiler$Resolution$wrapperclass);
$tmp136->value = _97;
_98 = ((frost$core$Equatable*) $tmp136);
ITable* $tmp137 = _88->$class->itable;
while ($tmp137->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp137 = $tmp137->next;
}
_99 = $tmp137->methods[0];
_100 = _99(_88, _98);
_101 = _100.value;
if (_101) goto block14; else goto block15;
block15:;
_103 = (frost$core$Int) {148u};
_104 = *(&local0);
_105 = _104 != NULL;
_106 = (frost$core$Bit) {_105};
_107 = _106.value;
if (_107) goto block16; else goto block17;
block17:;
_109 = (frost$core$Int) {149u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s138, _109, &$s139);
abort(); // unreachable
block16:;
_112 = _104;
_113 = &_112->name;
_114 = *_113;
_115 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s140, _114);
_116 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_115, &$s141);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s142, _103, _116);
_118 = ((frost$core$Object*) _116);
frost$core$Frost$unref$frost$core$Object$Q(_118);
_120 = ((frost$core$Object*) _115);
frost$core$Frost$unref$frost$core$Object$Q(_120);
abort(); // unreachable
block14:;
_123 = ((frost$core$Object*) _98);
frost$core$Frost$unref$frost$core$Object$Q(_123);
_125 = ((frost$core$Object*) _88);
frost$core$Frost$unref$frost$core$Object$Q(_125);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MemoryLayout.frost:150
_128 = &param0->sizes;
_129 = *_128;
_130 = *(&local0);
_131 = _130 != NULL;
_132 = (frost$core$Bit) {_131};
_133 = _132.value;
if (_133) goto block18; else goto block19;
block19:;
_135 = (frost$core$Int) {150u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s143, _135, &$s144);
abort(); // unreachable
block18:;
_138 = _130;
_139 = ((frost$core$Object*) _138);
_140 = frost$collections$IdentityMap$$IDX$frost$collections$IdentityMap$K$R$frost$collections$IdentityMap$V$Q(_129, _139);
_141 = (_140 != NULL ? ((frost$core$Int$nullable) { ((frost$core$Int$wrapper*) _140)->value, true }) : (frost$core$Int$nullable) { .nonnull = 0 });
*(&local3) = _141;
_143 = _140;
frost$core$Frost$unref$frost$core$Object$Q(_143);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MemoryLayout.frost:151
_146 = *(&local3);
_147 = _146.nonnull;
_148 = (frost$core$Bit) {_147};
_149 = _148.value;
if (_149) goto block20; else goto block21;
block20:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MemoryLayout.frost:152
_152 = *(&local3);
_153 = _152.nonnull;
_154 = (frost$core$Bit) {_153};
_155 = _154.value;
if (_155) goto block22; else goto block23;
block23:;
_157 = (frost$core$Int) {152u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s145, _157, &$s146);
abort(); // unreachable
block22:;
_160 = ((frost$core$Int) _152.value);
_161 = *(&local0);
_162 = ((frost$core$Object*) _161);
frost$core$Frost$unref$frost$core$Object$Q(_162);
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return _160;
block21:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MemoryLayout.frost:154
_167 = (frost$core$Int) {0u};
*(&local4) = _167;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MemoryLayout.frost:155
_170 = &param0->compiler;
_171 = *_170;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from MemoryLayout.frost:155:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
_176 = &_171->_valid;
_177 = *_176;
_179 = _177.value;
if (_179) goto block26; else goto block27;
block27:;
_181 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s147, _181, &$s148);
abort(); // unreachable
block26:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
_185 = &_171->value;
_186 = *_185;
_187 = _186;
_188 = _187;
frost$core$Frost$ref$frost$core$Object$Q(_188);
_191 = ((org$frostlang$frostc$Compiler*) _187);
_192 = *(&local0);
_193 = _192 != NULL;
_194 = (frost$core$Bit) {_193};
_195 = _194.value;
if (_195) goto block28; else goto block29;
block29:;
_197 = (frost$core$Int) {155u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s149, _197, &$s150);
abort(); // unreachable
block28:;
_200 = _192;
_201 = org$frostlang$frostc$Compiler$instanceFields$org$frostlang$frostc$ClassDecl$R$frost$collections$ListView$LTorg$frostlang$frostc$FieldDecl$GT(_191, _200);
_202 = ((frost$collections$Iterable*) _201);
ITable* $tmp151 = _202->$class->itable;
while ($tmp151->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp151 = $tmp151->next;
}
_203 = $tmp151->methods[0];
_204 = _203(_202);
goto block30;
block30:;
ITable* $tmp152 = _204->$class->itable;
while ($tmp152->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp152 = $tmp152->next;
}
_206 = $tmp152->methods[0];
_207 = _206(_204);
_208 = _207.value;
if (_208) goto block32; else goto block31;
block31:;
*(&local5) = ((org$frostlang$frostc$FieldDecl*) NULL);
ITable* $tmp153 = _204->$class->itable;
while ($tmp153->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp153 = $tmp153->next;
}
_211 = $tmp153->methods[1];
_212 = _211(_204);
_213 = ((org$frostlang$frostc$FieldDecl*) _212);
_214 = ((frost$core$Object*) _213);
frost$core$Frost$ref$frost$core$Object$Q(_214);
_216 = *(&local5);
_217 = ((frost$core$Object*) _216);
frost$core$Frost$unref$frost$core$Object$Q(_217);
*(&local5) = _213;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MemoryLayout.frost:156
_221 = &param0->compiler;
_222 = *_221;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from MemoryLayout.frost:156:17
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
_227 = &_222->_valid;
_228 = *_227;
_230 = _228.value;
if (_230) goto block37; else goto block38;
block38:;
_232 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s154, _232, &$s155);
abort(); // unreachable
block37:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
_236 = &_222->value;
_237 = *_236;
_238 = _237;
_239 = _238;
frost$core$Frost$ref$frost$core$Object$Q(_239);
_242 = ((org$frostlang$frostc$Compiler*) _238);
_243 = *(&local5);
_244 = org$frostlang$frostc$Compiler$resolve$org$frostlang$frostc$FieldDecl$R$frost$core$Bit(_242, _243);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from MemoryLayout.frost:156:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
_247 = _244.value;
_248 = !_247;
_249 = (frost$core$Bit) {_248};
_251 = _249.value;
_252 = _238;
frost$core$Frost$unref$frost$core$Object$Q(_252);
if (_251) goto block33; else goto block34;
block33:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MemoryLayout.frost:157
_256 = _212;
frost$core$Frost$unref$frost$core$Object$Q(_256);
_258 = *(&local5);
_259 = ((frost$core$Object*) _258);
frost$core$Frost$unref$frost$core$Object$Q(_259);
*(&local5) = ((org$frostlang$frostc$FieldDecl*) NULL);
goto block30;
block34:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MemoryLayout.frost:159
_264 = *(&local5);
_265 = &_264->type;
_266 = *_265;
_267 = &param0->compiler;
_268 = *_267;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from MemoryLayout.frost:159:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
_273 = &_268->_valid;
_274 = *_273;
_276 = _274.value;
if (_276) goto block45; else goto block46;
block46:;
_278 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s156, _278, &$s157);
abort(); // unreachable
block45:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
_282 = &_268->value;
_283 = *_282;
_284 = _283;
_285 = _284;
frost$core$Frost$ref$frost$core$Object$Q(_285);
_288 = ((org$frostlang$frostc$Compiler*) _284);
_289 = &_288->CHOICE_DATA_TYPE;
_290 = *_289;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from MemoryLayout.frost:159:23
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:256
_293 = ((org$frostlang$frostc$Symbol*) _266);
_294 = &_293->name;
_295 = *_294;
_296 = ((org$frostlang$frostc$Symbol*) _290);
_297 = &_296->name;
_298 = *_297;
_299 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(_295, _298);
_300 = _299.value;
if (_300) goto block48; else goto block49;
block48:;
_302 = &_266->typeKind;
_303 = *_302;
org$frostlang$frostc$Type$Kind$wrapper* $tmp158;
$tmp158 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp158->value = _303;
_304 = ((frost$core$Equatable*) $tmp158);
_305 = &_290->typeKind;
_306 = *_305;
org$frostlang$frostc$Type$Kind$wrapper* $tmp159;
$tmp159 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp159->value = _306;
_307 = ((frost$core$Equatable*) $tmp159);
ITable* $tmp160 = _304->$class->itable;
while ($tmp160->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp160 = $tmp160->next;
}
_308 = $tmp160->methods[0];
_309 = _308(_304, _307);
_310 = ((frost$core$Object*) _307);
frost$core$Frost$unref$frost$core$Object$Q(_310);
_312 = ((frost$core$Object*) _304);
frost$core$Frost$unref$frost$core$Object$Q(_312);
*(&local6) = _309;
goto block50;
block49:;
*(&local6) = _299;
goto block50;
block50:;
_318 = *(&local6);
_320 = _318.value;
_321 = _284;
frost$core$Frost$unref$frost$core$Object$Q(_321);
if (_320) goto block40; else goto block42;
block40:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MemoryLayout.frost:161
_325 = *(&local4);
_326 = *(&local0);
_327 = _326 != NULL;
_328 = (frost$core$Bit) {_327};
_329 = _328.value;
if (_329) goto block51; else goto block52;
block52:;
_331 = (frost$core$Int) {161u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s161, _331, &$s162);
abort(); // unreachable
block51:;
_334 = _326;
_335 = ($fn163) param0->$class->vtable[10];
_336 = _335(param0, _334);
_337 = _325.value;
_338 = _336.value;
_339 = _337 + _338;
_340 = (frost$core$Int) {_339};
*(&local4) = _340;
goto block41;
block42:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MemoryLayout.frost:164
_345 = *(&local5);
_346 = &_345->type;
_347 = *_346;
_348 = ($fn164) param0->$class->vtable[5];
_349 = _348(param0, _347);
*(&local7) = _349;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MemoryLayout.frost:165
_352 = *(&local4);
_353 = *(&local7);
// begin inline call to function frost.core.Int.%(other:frost.core.Int):frost.core.Int from MemoryLayout.frost:165:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:198
_356 = _352.value;
_357 = _353.value;
_358 = _356 % _357;
_359 = (frost$core$Int) {_358};
_361 = (frost$core$Int) {0u};
_362 = _359.value;
_363 = _361.value;
_364 = _362 != _363;
_365 = (frost$core$Bit) {_364};
_366 = _365.value;
if (_366) goto block53; else goto block54;
block53:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MemoryLayout.frost:166
_369 = *(&local4);
_370 = *(&local7);
_371 = *(&local4);
_372 = *(&local7);
// begin inline call to function frost.core.Int.%(other:frost.core.Int):frost.core.Int from MemoryLayout.frost:166:46
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:198
_375 = _371.value;
_376 = _372.value;
_377 = _375 % _376;
_378 = (frost$core$Int) {_377};
_380 = _370.value;
_381 = _378.value;
_382 = _380 - _381;
_383 = (frost$core$Int) {_382};
_384 = _369.value;
_385 = _383.value;
_386 = _384 + _385;
_387 = (frost$core$Int) {_386};
*(&local4) = _387;
goto block54;
block54:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MemoryLayout.frost:168
_391 = *(&local4);
_392 = *(&local5);
_393 = &_392->type;
_394 = *_393;
_395 = ($fn165) param0->$class->vtable[5];
_396 = _395(param0, _394);
// begin inline call to function frost.core.Int.%(other:frost.core.Int):frost.core.Int from MemoryLayout.frost:168:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:198
_399 = _391.value;
_400 = _396.value;
_401 = _399 % _400;
_402 = (frost$core$Int) {_401};
_404 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from MemoryLayout.frost:168:51
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_407 = _402.value;
_408 = _404.value;
_409 = _407 == _408;
_410 = (frost$core$Bit) {_409};
_412 = _410.value;
if (_412) goto block59; else goto block60;
block60:;
_414 = (frost$core$Int) {168u};
_415 = *(&local5);
_416 = ((frost$core$Object*) _415);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from MemoryLayout.frost:169:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
_419 = ($fn166) _416->$class->vtable[0];
_420 = _419(_416);
_421 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s167, _420);
_422 = ((frost$core$Object*) _421);
frost$core$Frost$ref$frost$core$Object$Q(_422);
_424 = ((frost$core$Object*) _421);
frost$core$Frost$unref$frost$core$Object$Q(_424);
_426 = ((frost$core$Object*) _420);
frost$core$Frost$unref$frost$core$Object$Q(_426);
_429 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_421, &$s168);
_430 = *(&local5);
_431 = &_430->type;
_432 = *_431;
_433 = ((frost$core$Object*) _432);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from MemoryLayout.frost:169:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
_436 = ($fn169) _433->$class->vtable[0];
_437 = _436(_433);
_438 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_429, _437);
_439 = ((frost$core$Object*) _438);
frost$core$Frost$ref$frost$core$Object$Q(_439);
_441 = ((frost$core$Object*) _438);
frost$core$Frost$unref$frost$core$Object$Q(_441);
_443 = ((frost$core$Object*) _437);
frost$core$Frost$unref$frost$core$Object$Q(_443);
_446 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_438, &$s170);
_447 = *(&local4);
frost$core$Int$wrapper* $tmp171;
$tmp171 = (frost$core$Int$wrapper*) frostObjectAlloc(sizeof(frost$core$Int$wrapper), (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp171->value = _447;
_448 = ((frost$core$Object*) $tmp171);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from MemoryLayout.frost:169:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
_451 = ($fn172) _448->$class->vtable[0];
_452 = _451(_448);
_453 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_446, _452);
_454 = ((frost$core$Object*) _453);
frost$core$Frost$ref$frost$core$Object$Q(_454);
_456 = ((frost$core$Object*) _453);
frost$core$Frost$unref$frost$core$Object$Q(_456);
_458 = ((frost$core$Object*) _452);
frost$core$Frost$unref$frost$core$Object$Q(_458);
_461 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_453, &$s173);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s174, _414, _461);
_463 = ((frost$core$Object*) _461);
frost$core$Frost$unref$frost$core$Object$Q(_463);
_465 = ((frost$core$Object*) _453);
frost$core$Frost$unref$frost$core$Object$Q(_465);
_467 = _448;
frost$core$Frost$unref$frost$core$Object$Q(_467);
_469 = ((frost$core$Object*) _446);
frost$core$Frost$unref$frost$core$Object$Q(_469);
_471 = ((frost$core$Object*) _438);
frost$core$Frost$unref$frost$core$Object$Q(_471);
_473 = ((frost$core$Object*) _429);
frost$core$Frost$unref$frost$core$Object$Q(_473);
_475 = ((frost$core$Object*) _421);
frost$core$Frost$unref$frost$core$Object$Q(_475);
abort(); // unreachable
block59:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MemoryLayout.frost:170
_479 = *(&local5);
_480 = *(&local4);
_481 = &_479->offset;
*_481 = _480;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MemoryLayout.frost:171
_484 = *(&local4);
_485 = *(&local5);
_486 = &_485->type;
_487 = *_486;
_488 = ($fn175) param0->$class->vtable[4];
_489 = _488(param0, _487);
_490 = _484.value;
_491 = _489.value;
_492 = _490 + _491;
_493 = (frost$core$Int) {_492};
*(&local4) = _493;
goto block41;
block41:;
_496 = _212;
frost$core$Frost$unref$frost$core$Object$Q(_496);
_498 = *(&local5);
_499 = ((frost$core$Object*) _498);
frost$core$Frost$unref$frost$core$Object$Q(_499);
*(&local5) = ((org$frostlang$frostc$FieldDecl*) NULL);
goto block30;
block32:;
_503 = ((frost$core$Object*) _204);
frost$core$Frost$unref$frost$core$Object$Q(_503);
_505 = ((frost$core$Object*) _201);
frost$core$Frost$unref$frost$core$Object$Q(_505);
_507 = _187;
frost$core$Frost$unref$frost$core$Object$Q(_507);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MemoryLayout.frost:174
_510 = &param0->compiler;
_511 = *_510;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from MemoryLayout.frost:174:12
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
_516 = &_511->_valid;
_517 = *_516;
_519 = _517.value;
if (_519) goto block69; else goto block70;
block70:;
_521 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s176, _521, &$s177);
abort(); // unreachable
block69:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
_525 = &_511->value;
_526 = *_525;
_527 = _526;
_528 = _527;
frost$core$Frost$ref$frost$core$Object$Q(_528);
_531 = ((org$frostlang$frostc$Compiler*) _527);
_532 = *(&local0);
_533 = _532 != NULL;
_534 = (frost$core$Bit) {_533};
_535 = _534.value;
if (_535) goto block71; else goto block72;
block72:;
_537 = (frost$core$Int) {174u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s178, _537, &$s179);
abort(); // unreachable
block71:;
_540 = _532;
_541 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$ClassDecl$R$frost$core$Bit(_531, _540);
_542 = _541.value;
_543 = _527;
frost$core$Frost$unref$frost$core$Object$Q(_543);
if (_542) goto block66; else goto block65;
block66:;
_546 = &param1->typeKind;
_547 = *_546;
org$frostlang$frostc$Type$Kind$wrapper* $tmp180;
$tmp180 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp180->value = _547;
_548 = ((frost$core$Equatable*) $tmp180);
_549 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from MemoryLayout.frost:174:57
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_552 = &(&local9)->$rawValue;
*_552 = _549;
_554 = *(&local9);
*(&local8) = _554;
_557 = *(&local8);
org$frostlang$frostc$Type$Kind$wrapper* $tmp181;
$tmp181 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp181->value = _557;
_558 = ((frost$core$Equatable*) $tmp181);
ITable* $tmp182 = _548->$class->itable;
while ($tmp182->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp182 = $tmp182->next;
}
_559 = $tmp182->methods[0];
_560 = _559(_548, _558);
_561 = _560.value;
_562 = ((frost$core$Object*) _558);
frost$core$Frost$unref$frost$core$Object$Q(_562);
_564 = ((frost$core$Object*) _548);
frost$core$Frost$unref$frost$core$Object$Q(_564);
if (_561) goto block64; else goto block65;
block64:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MemoryLayout.frost:175
_568 = *(&local4);
_569 = (frost$core$Int) {1u};
_570 = _568.value;
_571 = _569.value;
_572 = _570 + _571;
_573 = (frost$core$Int) {_572};
*(&local4) = _573;
goto block65;
block65:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MemoryLayout.frost:177
_577 = ($fn183) param0->$class->vtable[5];
_578 = _577(param0, param1);
*(&local10) = _578;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MemoryLayout.frost:178
_581 = *(&local4);
_582 = *(&local10);
// begin inline call to function frost.core.Int.%(other:frost.core.Int):frost.core.Int from MemoryLayout.frost:178:19
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:198
_585 = _581.value;
_586 = _582.value;
_587 = _585 % _586;
_588 = (frost$core$Int) {_587};
_590 = (frost$core$Int) {0u};
_591 = _588.value;
_592 = _590.value;
_593 = _591 != _592;
_594 = (frost$core$Bit) {_593};
_595 = _594.value;
if (_595) goto block74; else goto block75;
block74:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MemoryLayout.frost:179
_598 = *(&local4);
_599 = *(&local10);
_600 = *(&local4);
_601 = *(&local10);
// begin inline call to function frost.core.Int.%(other:frost.core.Int):frost.core.Int from MemoryLayout.frost:179:38
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:198
_604 = _600.value;
_605 = _601.value;
_606 = _604 % _605;
_607 = (frost$core$Int) {_606};
_609 = _599.value;
_610 = _607.value;
_611 = _609 - _610;
_612 = (frost$core$Int) {_611};
_613 = _598.value;
_614 = _612.value;
_615 = _613 + _614;
_616 = (frost$core$Int) {_615};
*(&local4) = _616;
goto block75;
block75:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MemoryLayout.frost:181
_620 = &param0->sizes;
_621 = *_620;
_622 = *(&local0);
_623 = _622 != NULL;
_624 = (frost$core$Bit) {_623};
_625 = _624.value;
if (_625) goto block78; else goto block79;
block79:;
_627 = (frost$core$Int) {181u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s184, _627, &$s185);
abort(); // unreachable
block78:;
_630 = _622;
_631 = ((frost$core$Object*) _630);
_632 = *(&local4);
frost$core$Int$wrapper* $tmp186;
$tmp186 = (frost$core$Int$wrapper*) frostObjectAlloc(sizeof(frost$core$Int$wrapper), (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp186->value = _632;
_633 = ((frost$core$Object*) $tmp186);
frost$collections$IdentityMap$$IDXEQ$frost$collections$IdentityMap$K$frost$collections$IdentityMap$V(_621, _631, _633);
_635 = _633;
frost$core$Frost$unref$frost$core$Object$Q(_635);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MemoryLayout.frost:182
_638 = *(&local4);
_639 = *(&local0);
_640 = ((frost$core$Object*) _639);
frost$core$Frost$unref$frost$core$Object$Q(_640);
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return _638;

}
frost$core$Int org$frostlang$frostc$MemoryLayout$stride$org$frostlang$frostc$Type$R$frost$core$Int(void* rawSelf, org$frostlang$frostc$Type* param1) {
org$frostlang$frostc$MemoryLayout* param0 = (org$frostlang$frostc$MemoryLayout*) rawSelf;

$fn187 _1;
frost$core$Int _2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MemoryLayout.frost:186
_1 = ($fn188) param0->$class->vtable[4];
_2 = _1(param0, param1);
return _2;

}
frost$core$Int org$frostlang$frostc$MemoryLayout$sizeOfWrapper$org$frostlang$frostc$Type$R$frost$core$Int(void* rawSelf, org$frostlang$frostc$Type* param1) {
org$frostlang$frostc$MemoryLayout* param0 = (org$frostlang$frostc$MemoryLayout*) rawSelf;

org$frostlang$frostc$ClassDecl* local0 = NULL;
frost$core$Bit local1;
frost$core$Int local2;
org$frostlang$frostc$FieldDecl* local3 = NULL;
frost$core$Bit local4;
frost$core$Int local5;
frost$core$Int local6;
org$frostlang$frostc$Type$Kind local7;
org$frostlang$frostc$Type$Kind local8;
frost$core$Weak** _1;
frost$core$Weak* _2;
frost$core$Bit* _7;
frost$core$Bit _8;
bool _10;
frost$core$Int _12;
frost$core$Object** _16;
frost$core$Object* _17;
frost$core$Object* _18;
frost$core$Object* _19;
org$frostlang$frostc$Compiler* _22;
org$frostlang$frostc$ClassDecl* _23;
frost$core$Object* _25;
org$frostlang$frostc$ClassDecl* _27;
frost$core$Object* _28;
frost$core$Object* _31;
frost$core$Object* _33;
org$frostlang$frostc$ClassDecl* _36;
bool _37;
frost$core$Bit _38;
bool _39;
frost$core$Weak** _41;
frost$core$Weak* _42;
frost$core$Bit* _47;
frost$core$Bit _48;
bool _50;
frost$core$Int _52;
frost$core$Object** _56;
frost$core$Object* _57;
frost$core$Object* _58;
frost$core$Object* _59;
org$frostlang$frostc$Compiler* _62;
org$frostlang$frostc$ClassDecl* _63;
bool _64;
frost$core$Bit _65;
bool _66;
frost$core$Int _68;
org$frostlang$frostc$ClassDecl* _71;
frost$core$Bit _72;
frost$core$Object* _73;
frost$core$Bit _79;
bool _80;
frost$core$Int _82;
frost$core$Weak** _86;
frost$core$Weak* _87;
frost$core$Bit* _92;
frost$core$Bit _93;
bool _95;
frost$core$Int _97;
frost$core$Object** _101;
frost$core$Object* _102;
frost$core$Object* _103;
frost$core$Object* _104;
org$frostlang$frostc$Compiler* _107;
org$frostlang$frostc$Type** _108;
org$frostlang$frostc$Type* _109;
$fn189 _110;
frost$core$Int _111;
frost$core$Object* _113;
frost$core$Weak** _116;
frost$core$Weak* _117;
frost$core$Bit* _122;
frost$core$Bit _123;
bool _125;
frost$core$Int _127;
frost$core$Object** _131;
frost$core$Object* _132;
frost$core$Object* _133;
frost$core$Object* _134;
org$frostlang$frostc$Compiler* _137;
org$frostlang$frostc$ClassDecl* _138;
bool _139;
frost$core$Bit _140;
bool _141;
frost$core$Int _143;
org$frostlang$frostc$ClassDecl* _146;
frost$collections$ListView* _147;
frost$collections$Iterable* _148;
$fn190 _149;
frost$collections$Iterator* _150;
$fn191 _152;
frost$core$Bit _153;
bool _154;
$fn192 _157;
frost$core$Object* _158;
org$frostlang$frostc$FieldDecl* _159;
frost$core$Object* _160;
org$frostlang$frostc$FieldDecl* _162;
frost$core$Object* _163;
frost$core$Weak** _167;
frost$core$Weak* _168;
frost$core$Bit* _173;
frost$core$Bit _174;
bool _176;
frost$core$Int _178;
frost$core$Object** _182;
frost$core$Object* _183;
frost$core$Object* _184;
frost$core$Object* _185;
org$frostlang$frostc$Compiler* _188;
org$frostlang$frostc$FieldDecl* _189;
frost$core$Bit _190;
frost$core$Object* _191;
org$frostlang$frostc$FieldDecl* _194;
org$frostlang$frostc$Type** _195;
org$frostlang$frostc$Type* _196;
frost$core$Weak** _197;
frost$core$Weak* _198;
frost$core$Bit* _203;
frost$core$Bit _204;
bool _206;
frost$core$Int _208;
frost$core$Object** _212;
frost$core$Object* _213;
frost$core$Object* _214;
frost$core$Object* _215;
org$frostlang$frostc$Compiler* _218;
org$frostlang$frostc$Type** _219;
org$frostlang$frostc$Type* _220;
org$frostlang$frostc$Symbol* _223;
frost$core$String** _224;
frost$core$String* _225;
org$frostlang$frostc$Symbol* _226;
frost$core$String** _227;
frost$core$String* _228;
frost$core$Bit _229;
bool _230;
org$frostlang$frostc$Type$Kind* _232;
org$frostlang$frostc$Type$Kind _233;
frost$core$Equatable* _234;
org$frostlang$frostc$Type$Kind* _235;
org$frostlang$frostc$Type$Kind _236;
frost$core$Equatable* _237;
$fn193 _238;
frost$core$Bit _239;
frost$core$Object* _240;
frost$core$Object* _242;
frost$core$Bit _248;
bool _250;
frost$core$Object* _251;
frost$core$Int _255;
org$frostlang$frostc$ClassDecl* _256;
bool _257;
frost$core$Bit _258;
bool _259;
frost$core$Int _261;
org$frostlang$frostc$ClassDecl* _264;
$fn194 _265;
frost$core$Int _266;
int64_t _267;
int64_t _268;
int64_t _269;
frost$core$Int _270;
org$frostlang$frostc$FieldDecl* _275;
org$frostlang$frostc$Type** _276;
org$frostlang$frostc$Type* _277;
$fn195 _278;
frost$core$Int _279;
frost$core$Int _282;
frost$core$Int _283;
int64_t _286;
int64_t _287;
int64_t _288;
frost$core$Int _289;
frost$core$Int _293;
frost$core$Int _294;
int64_t _295;
int64_t _296;
bool _297;
frost$core$Bit _298;
bool _299;
frost$core$Int _302;
frost$core$Int _303;
frost$core$Int _304;
int64_t _305;
int64_t _306;
int64_t _307;
frost$core$Int _308;
int64_t _309;
int64_t _310;
int64_t _311;
frost$core$Int _312;
frost$core$Int _316;
frost$core$Int _317;
int64_t _320;
int64_t _321;
int64_t _322;
frost$core$Int _323;
frost$core$Int _325;
int64_t _328;
int64_t _329;
bool _330;
frost$core$Bit _331;
bool _333;
frost$core$Int _335;
frost$core$Int _339;
frost$core$Int _340;
int64_t _341;
int64_t _342;
int64_t _343;
frost$core$Int _344;
frost$core$Object* _347;
org$frostlang$frostc$FieldDecl* _349;
frost$core$Object* _350;
frost$core$Object* _354;
frost$core$Object* _356;
frost$core$Object* _358;
org$frostlang$frostc$Type$Kind* _361;
org$frostlang$frostc$Type$Kind _362;
frost$core$Equatable* _363;
frost$core$Int _364;
frost$core$Int* _367;
org$frostlang$frostc$Type$Kind _369;
org$frostlang$frostc$Type$Kind _372;
frost$core$Equatable* _373;
$fn196 _374;
frost$core$Bit _375;
bool _376;
frost$core$Object* _377;
frost$core$Object* _379;
frost$core$Int _383;
frost$core$Int _384;
int64_t _385;
int64_t _386;
int64_t _387;
frost$core$Int _388;
frost$core$Int _392;
org$frostlang$frostc$ClassDecl* _393;
frost$core$Object* _394;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MemoryLayout.frost:190
_1 = &param0->compiler;
_2 = *_1;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from MemoryLayout.frost:190:19
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
_7 = &_2->_valid;
_8 = *_7;
_10 = _8.value;
if (_10) goto block3; else goto block4;
block4:;
_12 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s197, _12, &$s198);
abort(); // unreachable
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
_16 = &_2->value;
_17 = *_16;
_18 = _17;
_19 = _18;
frost$core$Frost$ref$frost$core$Object$Q(_19);
_22 = ((org$frostlang$frostc$Compiler*) _18);
_23 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(_22, param1);
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
_25 = ((frost$core$Object*) _23);
frost$core$Frost$ref$frost$core$Object$Q(_25);
_27 = *(&local0);
_28 = ((frost$core$Object*) _27);
frost$core$Frost$unref$frost$core$Object$Q(_28);
*(&local0) = _23;
_31 = ((frost$core$Object*) _23);
frost$core$Frost$unref$frost$core$Object$Q(_31);
_33 = _18;
frost$core$Frost$unref$frost$core$Object$Q(_33);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MemoryLayout.frost:191
_36 = *(&local0);
_37 = _36 != NULL;
_38 = (frost$core$Bit) {_37};
_39 = _38.value;
if (_39) goto block5; else goto block6;
block5:;
_41 = &param0->compiler;
_42 = *_41;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from MemoryLayout.frost:191:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
_47 = &_42->_valid;
_48 = *_47;
_50 = _48.value;
if (_50) goto block10; else goto block11;
block11:;
_52 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s199, _52, &$s200);
abort(); // unreachable
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
_56 = &_42->value;
_57 = *_56;
_58 = _57;
_59 = _58;
frost$core$Frost$ref$frost$core$Object$Q(_59);
_62 = ((org$frostlang$frostc$Compiler*) _58);
_63 = *(&local0);
_64 = _63 != NULL;
_65 = (frost$core$Bit) {_64};
_66 = _65.value;
if (_66) goto block12; else goto block13;
block13:;
_68 = (frost$core$Int) {191u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s201, _68, &$s202);
abort(); // unreachable
block12:;
_71 = _63;
_72 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$ClassDecl$R$frost$core$Bit(_62, _71);
_73 = _58;
frost$core$Frost$unref$frost$core$Object$Q(_73);
*(&local1) = _72;
goto block7;
block6:;
*(&local1) = _38;
goto block7;
block7:;
_79 = *(&local1);
_80 = _79.value;
if (_80) goto block14; else goto block15;
block15:;
_82 = (frost$core$Int) {191u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s203, _82);
abort(); // unreachable
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MemoryLayout.frost:192
_86 = &param0->compiler;
_87 = *_86;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from MemoryLayout.frost:192:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
_92 = &_87->_valid;
_93 = *_92;
_95 = _93.value;
if (_95) goto block18; else goto block19;
block19:;
_97 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s204, _97, &$s205);
abort(); // unreachable
block18:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
_101 = &_87->value;
_102 = *_101;
_103 = _102;
_104 = _103;
frost$core$Frost$ref$frost$core$Object$Q(_104);
_107 = ((org$frostlang$frostc$Compiler*) _103);
_108 = &_107->OBJECT_TYPE;
_109 = *_108;
_110 = ($fn206) param0->$class->vtable[7];
_111 = _110(param0, _109);
*(&local2) = _111;
_113 = _103;
frost$core$Frost$unref$frost$core$Object$Q(_113);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MemoryLayout.frost:193
_116 = &param0->compiler;
_117 = *_116;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from MemoryLayout.frost:193:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
_122 = &_117->_valid;
_123 = *_122;
_125 = _123.value;
if (_125) goto block22; else goto block23;
block23:;
_127 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s207, _127, &$s208);
abort(); // unreachable
block22:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
_131 = &_117->value;
_132 = *_131;
_133 = _132;
_134 = _133;
frost$core$Frost$ref$frost$core$Object$Q(_134);
_137 = ((org$frostlang$frostc$Compiler*) _133);
_138 = *(&local0);
_139 = _138 != NULL;
_140 = (frost$core$Bit) {_139};
_141 = _140.value;
if (_141) goto block24; else goto block25;
block25:;
_143 = (frost$core$Int) {193u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s209, _143, &$s210);
abort(); // unreachable
block24:;
_146 = _138;
_147 = org$frostlang$frostc$Compiler$instanceFields$org$frostlang$frostc$ClassDecl$R$frost$collections$ListView$LTorg$frostlang$frostc$FieldDecl$GT(_137, _146);
_148 = ((frost$collections$Iterable*) _147);
ITable* $tmp211 = _148->$class->itable;
while ($tmp211->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp211 = $tmp211->next;
}
_149 = $tmp211->methods[0];
_150 = _149(_148);
goto block26;
block26:;
ITable* $tmp212 = _150->$class->itable;
while ($tmp212->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp212 = $tmp212->next;
}
_152 = $tmp212->methods[0];
_153 = _152(_150);
_154 = _153.value;
if (_154) goto block28; else goto block27;
block27:;
*(&local3) = ((org$frostlang$frostc$FieldDecl*) NULL);
ITable* $tmp213 = _150->$class->itable;
while ($tmp213->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp213 = $tmp213->next;
}
_157 = $tmp213->methods[1];
_158 = _157(_150);
_159 = ((org$frostlang$frostc$FieldDecl*) _158);
_160 = ((frost$core$Object*) _159);
frost$core$Frost$ref$frost$core$Object$Q(_160);
_162 = *(&local3);
_163 = ((frost$core$Object*) _162);
frost$core$Frost$unref$frost$core$Object$Q(_163);
*(&local3) = _159;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MemoryLayout.frost:194
_167 = &param0->compiler;
_168 = *_167;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from MemoryLayout.frost:194:13
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
_173 = &_168->_valid;
_174 = *_173;
_176 = _174.value;
if (_176) goto block31; else goto block32;
block32:;
_178 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s214, _178, &$s215);
abort(); // unreachable
block31:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
_182 = &_168->value;
_183 = *_182;
_184 = _183;
_185 = _184;
frost$core$Frost$ref$frost$core$Object$Q(_185);
_188 = ((org$frostlang$frostc$Compiler*) _184);
_189 = *(&local3);
_190 = org$frostlang$frostc$Compiler$resolve$org$frostlang$frostc$FieldDecl$R$frost$core$Bit(_188, _189);
_191 = _184;
frost$core$Frost$unref$frost$core$Object$Q(_191);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MemoryLayout.frost:195
_194 = *(&local3);
_195 = &_194->type;
_196 = *_195;
_197 = &param0->compiler;
_198 = *_197;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from MemoryLayout.frost:195:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
_203 = &_198->_valid;
_204 = *_203;
_206 = _204.value;
if (_206) goto block38; else goto block39;
block39:;
_208 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s216, _208, &$s217);
abort(); // unreachable
block38:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
_212 = &_198->value;
_213 = *_212;
_214 = _213;
_215 = _214;
frost$core$Frost$ref$frost$core$Object$Q(_215);
_218 = ((org$frostlang$frostc$Compiler*) _214);
_219 = &_218->CHOICE_DATA_TYPE;
_220 = *_219;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from MemoryLayout.frost:195:23
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:256
_223 = ((org$frostlang$frostc$Symbol*) _196);
_224 = &_223->name;
_225 = *_224;
_226 = ((org$frostlang$frostc$Symbol*) _220);
_227 = &_226->name;
_228 = *_227;
_229 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(_225, _228);
_230 = _229.value;
if (_230) goto block41; else goto block42;
block41:;
_232 = &_196->typeKind;
_233 = *_232;
org$frostlang$frostc$Type$Kind$wrapper* $tmp218;
$tmp218 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp218->value = _233;
_234 = ((frost$core$Equatable*) $tmp218);
_235 = &_220->typeKind;
_236 = *_235;
org$frostlang$frostc$Type$Kind$wrapper* $tmp219;
$tmp219 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp219->value = _236;
_237 = ((frost$core$Equatable*) $tmp219);
ITable* $tmp220 = _234->$class->itable;
while ($tmp220->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp220 = $tmp220->next;
}
_238 = $tmp220->methods[0];
_239 = _238(_234, _237);
_240 = ((frost$core$Object*) _237);
frost$core$Frost$unref$frost$core$Object$Q(_240);
_242 = ((frost$core$Object*) _234);
frost$core$Frost$unref$frost$core$Object$Q(_242);
*(&local4) = _239;
goto block43;
block42:;
*(&local4) = _229;
goto block43;
block43:;
_248 = *(&local4);
_250 = _248.value;
_251 = _214;
frost$core$Frost$unref$frost$core$Object$Q(_251);
if (_250) goto block33; else goto block35;
block33:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MemoryLayout.frost:197
_255 = *(&local2);
_256 = *(&local0);
_257 = _256 != NULL;
_258 = (frost$core$Bit) {_257};
_259 = _258.value;
if (_259) goto block44; else goto block45;
block45:;
_261 = (frost$core$Int) {197u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s221, _261, &$s222);
abort(); // unreachable
block44:;
_264 = _256;
_265 = ($fn223) param0->$class->vtable[10];
_266 = _265(param0, _264);
_267 = _255.value;
_268 = _266.value;
_269 = _267 + _268;
_270 = (frost$core$Int) {_269};
*(&local2) = _270;
goto block34;
block35:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MemoryLayout.frost:200
_275 = *(&local3);
_276 = &_275->type;
_277 = *_276;
_278 = ($fn224) param0->$class->vtable[4];
_279 = _278(param0, _277);
*(&local5) = _279;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MemoryLayout.frost:201
_282 = *(&local2);
_283 = *(&local5);
// begin inline call to function frost.core.Int.%(other:frost.core.Int):frost.core.Int from MemoryLayout.frost:201:37
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:198
_286 = _282.value;
_287 = _283.value;
_288 = _286 % _287;
_289 = (frost$core$Int) {_288};
*(&local6) = _289;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MemoryLayout.frost:202
_293 = *(&local6);
_294 = (frost$core$Int) {0u};
_295 = _293.value;
_296 = _294.value;
_297 = _295 != _296;
_298 = (frost$core$Bit) {_297};
_299 = _298.value;
if (_299) goto block47; else goto block48;
block47:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MemoryLayout.frost:203
_302 = *(&local2);
_303 = *(&local5);
_304 = *(&local6);
_305 = _303.value;
_306 = _304.value;
_307 = _305 - _306;
_308 = (frost$core$Int) {_307};
_309 = _302.value;
_310 = _308.value;
_311 = _309 + _310;
_312 = (frost$core$Int) {_311};
*(&local2) = _312;
goto block48;
block48:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MemoryLayout.frost:205
_316 = *(&local2);
_317 = *(&local5);
// begin inline call to function frost.core.Int.%(other:frost.core.Int):frost.core.Int from MemoryLayout.frost:205:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:198
_320 = _316.value;
_321 = _317.value;
_322 = _320 % _321;
_323 = (frost$core$Int) {_322};
_325 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from MemoryLayout.frost:205:38
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_328 = _323.value;
_329 = _325.value;
_330 = _328 == _329;
_331 = (frost$core$Bit) {_330};
_333 = _331.value;
if (_333) goto block51; else goto block52;
block52:;
_335 = (frost$core$Int) {205u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s225, _335);
abort(); // unreachable
block51:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MemoryLayout.frost:206
_339 = *(&local2);
_340 = *(&local5);
_341 = _339.value;
_342 = _340.value;
_343 = _341 + _342;
_344 = (frost$core$Int) {_343};
*(&local2) = _344;
goto block34;
block34:;
_347 = _158;
frost$core$Frost$unref$frost$core$Object$Q(_347);
_349 = *(&local3);
_350 = ((frost$core$Object*) _349);
frost$core$Frost$unref$frost$core$Object$Q(_350);
*(&local3) = ((org$frostlang$frostc$FieldDecl*) NULL);
goto block26;
block28:;
_354 = ((frost$core$Object*) _150);
frost$core$Frost$unref$frost$core$Object$Q(_354);
_356 = ((frost$core$Object*) _147);
frost$core$Frost$unref$frost$core$Object$Q(_356);
_358 = _133;
frost$core$Frost$unref$frost$core$Object$Q(_358);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MemoryLayout.frost:209
_361 = &param1->typeKind;
_362 = *_361;
org$frostlang$frostc$Type$Kind$wrapper* $tmp226;
$tmp226 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp226->value = _362;
_363 = ((frost$core$Equatable*) $tmp226);
_364 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from MemoryLayout.frost:209:34
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_367 = &(&local8)->$rawValue;
*_367 = _364;
_369 = *(&local8);
*(&local7) = _369;
_372 = *(&local7);
org$frostlang$frostc$Type$Kind$wrapper* $tmp227;
$tmp227 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp227->value = _372;
_373 = ((frost$core$Equatable*) $tmp227);
ITable* $tmp228 = _363->$class->itable;
while ($tmp228->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp228 = $tmp228->next;
}
_374 = $tmp228->methods[0];
_375 = _374(_363, _373);
_376 = _375.value;
_377 = ((frost$core$Object*) _373);
frost$core$Frost$unref$frost$core$Object$Q(_377);
_379 = ((frost$core$Object*) _363);
frost$core$Frost$unref$frost$core$Object$Q(_379);
if (_376) goto block53; else goto block54;
block53:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MemoryLayout.frost:210
_383 = *(&local2);
_384 = (frost$core$Int) {1u};
_385 = _383.value;
_386 = _384.value;
_387 = _385 + _386;
_388 = (frost$core$Int) {_387};
*(&local2) = _388;
goto block54;
block54:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MemoryLayout.frost:212
_392 = *(&local2);
_393 = *(&local0);
_394 = ((frost$core$Object*) _393);
frost$core$Frost$unref$frost$core$Object$Q(_394);
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return _392;

}
frost$core$Int org$frostlang$frostc$MemoryLayout$getChoiceDataSize$org$frostlang$frostc$ClassDecl$R$frost$core$Int(void* rawSelf, org$frostlang$frostc$ClassDecl* param1) {
org$frostlang$frostc$MemoryLayout* param0 = (org$frostlang$frostc$MemoryLayout*) rawSelf;

frost$core$Int$nullable local0;
org$frostlang$frostc$ChoiceCase* local1 = NULL;
frost$core$Int local2;
org$frostlang$frostc$Type* local3 = NULL;
frost$core$Int local4;
frost$collections$IdentityMap** _1;
frost$collections$IdentityMap* _2;
frost$core$Object* _3;
frost$core$Object* _4;
frost$core$Int$nullable _5;
frost$core$Object* _7;
frost$core$Int$nullable _10;
bool _11;
frost$core$Bit _12;
bool _13;
frost$core$Int _16;
frost$core$Int$nullable _17;
frost$collections$Array** _20;
frost$collections$Array* _21;
frost$collections$Iterable* _22;
$fn229 _23;
frost$collections$Iterator* _24;
$fn230 _26;
frost$core$Bit _27;
bool _28;
$fn231 _31;
frost$core$Object* _32;
org$frostlang$frostc$ChoiceCase* _33;
frost$core$Object* _34;
org$frostlang$frostc$ChoiceCase* _36;
frost$core$Object* _37;
frost$core$Weak** _41;
frost$core$Weak* _42;
frost$core$Bit* _47;
frost$core$Bit _48;
bool _50;
frost$core$Int _52;
frost$core$Object** _56;
frost$core$Object* _57;
frost$core$Object* _58;
frost$core$Object* _59;
org$frostlang$frostc$Compiler* _62;
org$frostlang$frostc$ChoiceCase* _63;
frost$core$Object* _65;
frost$core$Int _68;
org$frostlang$frostc$ChoiceCase* _71;
frost$collections$Array** _72;
frost$collections$Array* _73;
frost$collections$Iterable* _74;
$fn232 _75;
frost$collections$Iterator* _76;
$fn233 _78;
frost$core$Bit _79;
bool _80;
$fn234 _83;
frost$core$Object* _84;
org$frostlang$frostc$Type* _85;
frost$core$Object* _86;
org$frostlang$frostc$Type* _88;
frost$core$Object* _89;
frost$core$Int _93;
org$frostlang$frostc$Type* _94;
$fn235 _95;
frost$core$Int _96;
int64_t _97;
int64_t _98;
int64_t _99;
frost$core$Int _100;
frost$core$Object* _102;
org$frostlang$frostc$Type* _104;
frost$core$Object* _105;
frost$core$Object* _109;
frost$core$Int$nullable _112;
bool _113;
frost$core$Bit _114;
bool _115;
frost$core$Int _117;
frost$core$Int _120;
frost$core$Int _121;
int64_t _124;
int64_t _125;
bool _126;
frost$core$Bit _127;
bool _128;
int64_t _131;
frost$core$Int _132;
int64_t _136;
frost$core$Int _137;
frost$core$Int _140;
frost$core$Int$nullable _141;
frost$core$Object* _143;
org$frostlang$frostc$ChoiceCase* _145;
frost$core$Object* _146;
frost$core$Object* _150;
frost$collections$IdentityMap** _153;
frost$collections$IdentityMap* _154;
frost$core$Object* _155;
frost$core$Int$nullable _156;
bool _157;
frost$core$Bit _158;
bool _159;
frost$core$Int _161;
frost$core$Int _164;
frost$core$Object* _165;
frost$core$Object* _167;
frost$core$Int$nullable _171;
bool _172;
frost$core$Bit _173;
bool _174;
frost$core$Int _176;
frost$core$Int _179;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MemoryLayout.frost:216
_1 = &param0->choiceDataSizes;
_2 = *_1;
_3 = ((frost$core$Object*) param1);
_4 = frost$collections$IdentityMap$$IDX$frost$collections$IdentityMap$K$R$frost$collections$IdentityMap$V$Q(_2, _3);
_5 = (_4 != NULL ? ((frost$core$Int$nullable) { ((frost$core$Int$wrapper*) _4)->value, true }) : (frost$core$Int$nullable) { .nonnull = 0 });
*(&local0) = _5;
_7 = _4;
frost$core$Frost$unref$frost$core$Object$Q(_7);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MemoryLayout.frost:217
_10 = *(&local0);
_11 = !_10.nonnull;
_12 = (frost$core$Bit) {_11};
_13 = _12.value;
if (_13) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MemoryLayout.frost:218
_16 = (frost$core$Int) {0u};
_17 = ((frost$core$Int$nullable) { _16, true });
*(&local0) = _17;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MemoryLayout.frost:219
_20 = &param1->choiceCases;
_21 = *_20;
_22 = ((frost$collections$Iterable*) _21);
ITable* $tmp236 = _22->$class->itable;
while ($tmp236->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp236 = $tmp236->next;
}
_23 = $tmp236->methods[0];
_24 = _23(_22);
goto block3;
block3:;
ITable* $tmp237 = _24->$class->itable;
while ($tmp237->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp237 = $tmp237->next;
}
_26 = $tmp237->methods[0];
_27 = _26(_24);
_28 = _27.value;
if (_28) goto block5; else goto block4;
block4:;
*(&local1) = ((org$frostlang$frostc$ChoiceCase*) NULL);
ITable* $tmp238 = _24->$class->itable;
while ($tmp238->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp238 = $tmp238->next;
}
_31 = $tmp238->methods[1];
_32 = _31(_24);
_33 = ((org$frostlang$frostc$ChoiceCase*) _32);
_34 = ((frost$core$Object*) _33);
frost$core$Frost$ref$frost$core$Object$Q(_34);
_36 = *(&local1);
_37 = ((frost$core$Object*) _36);
frost$core$Frost$unref$frost$core$Object$Q(_37);
*(&local1) = _33;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MemoryLayout.frost:220
_41 = &param0->compiler;
_42 = *_41;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from MemoryLayout.frost:220:17
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
_47 = &_42->_valid;
_48 = *_47;
_50 = _48.value;
if (_50) goto block8; else goto block9;
block9:;
_52 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s239, _52, &$s240);
abort(); // unreachable
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
_56 = &_42->value;
_57 = *_56;
_58 = _57;
_59 = _58;
frost$core$Frost$ref$frost$core$Object$Q(_59);
_62 = ((org$frostlang$frostc$Compiler*) _58);
_63 = *(&local1);
org$frostlang$frostc$Compiler$resolve$org$frostlang$frostc$ChoiceCase(_62, _63);
_65 = _58;
frost$core$Frost$unref$frost$core$Object$Q(_65);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MemoryLayout.frost:221
_68 = (frost$core$Int) {0u};
*(&local2) = _68;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MemoryLayout.frost:222
_71 = *(&local1);
_72 = &_71->fields;
_73 = *_72;
_74 = ((frost$collections$Iterable*) _73);
ITable* $tmp241 = _74->$class->itable;
while ($tmp241->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp241 = $tmp241->next;
}
_75 = $tmp241->methods[0];
_76 = _75(_74);
goto block10;
block10:;
ITable* $tmp242 = _76->$class->itable;
while ($tmp242->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp242 = $tmp242->next;
}
_78 = $tmp242->methods[0];
_79 = _78(_76);
_80 = _79.value;
if (_80) goto block12; else goto block11;
block11:;
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
ITable* $tmp243 = _76->$class->itable;
while ($tmp243->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp243 = $tmp243->next;
}
_83 = $tmp243->methods[1];
_84 = _83(_76);
_85 = ((org$frostlang$frostc$Type*) _84);
_86 = ((frost$core$Object*) _85);
frost$core$Frost$ref$frost$core$Object$Q(_86);
_88 = *(&local3);
_89 = ((frost$core$Object*) _88);
frost$core$Frost$unref$frost$core$Object$Q(_89);
*(&local3) = _85;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MemoryLayout.frost:224
_93 = *(&local2);
_94 = *(&local3);
_95 = ($fn244) param0->$class->vtable[4];
_96 = _95(param0, _94);
_97 = _93.value;
_98 = _96.value;
_99 = _97 + _98;
_100 = (frost$core$Int) {_99};
*(&local2) = _100;
_102 = _84;
frost$core$Frost$unref$frost$core$Object$Q(_102);
_104 = *(&local3);
_105 = ((frost$core$Object*) _104);
frost$core$Frost$unref$frost$core$Object$Q(_105);
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
goto block10;
block12:;
_109 = ((frost$core$Object*) _76);
frost$core$Frost$unref$frost$core$Object$Q(_109);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MemoryLayout.frost:226
_112 = *(&local0);
_113 = _112.nonnull;
_114 = (frost$core$Bit) {_113};
_115 = _114.value;
if (_115) goto block13; else goto block14;
block14:;
_117 = (frost$core$Int) {226u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s245, _117, &$s246);
abort(); // unreachable
block13:;
_120 = ((frost$core$Int) _112.value);
_121 = *(&local2);
// begin inline call to function frost.core.Int.max(other:frost.core.Int):frost.core.Int from MemoryLayout.frost:226:37
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:858
_124 = _120.value;
_125 = _121.value;
_126 = _124 > _125;
_127 = (frost$core$Bit) {_126};
_128 = _127.value;
if (_128) goto block16; else goto block17;
block16:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:859
_131 = _120.value;
_132 = (frost$core$Int) {_131};
*(&local4) = _132;
goto block15;
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:861
_136 = _121.value;
_137 = (frost$core$Int) {_136};
*(&local4) = _137;
goto block15;
block15:;
_140 = *(&local4);
_141 = ((frost$core$Int$nullable) { _140, true });
*(&local0) = _141;
_143 = _32;
frost$core$Frost$unref$frost$core$Object$Q(_143);
_145 = *(&local1);
_146 = ((frost$core$Object*) _145);
frost$core$Frost$unref$frost$core$Object$Q(_146);
*(&local1) = ((org$frostlang$frostc$ChoiceCase*) NULL);
goto block3;
block5:;
_150 = ((frost$core$Object*) _24);
frost$core$Frost$unref$frost$core$Object$Q(_150);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MemoryLayout.frost:228
_153 = &param0->choiceDataSizes;
_154 = *_153;
_155 = ((frost$core$Object*) param1);
_156 = *(&local0);
_157 = _156.nonnull;
_158 = (frost$core$Bit) {_157};
_159 = _158.value;
if (_159) goto block18; else goto block19;
block19:;
_161 = (frost$core$Int) {228u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s247, _161, &$s248);
abort(); // unreachable
block18:;
_164 = ((frost$core$Int) _156.value);
frost$core$Int$wrapper* $tmp249;
$tmp249 = (frost$core$Int$wrapper*) frostObjectAlloc(sizeof(frost$core$Int$wrapper), (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp249->value = _164;
_165 = ((frost$core$Object*) $tmp249);
frost$collections$IdentityMap$$IDXEQ$frost$collections$IdentityMap$K$frost$collections$IdentityMap$V(_154, _155, _165);
_167 = _165;
frost$core$Frost$unref$frost$core$Object$Q(_167);
goto block2;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MemoryLayout.frost:230
_171 = *(&local0);
_172 = _171.nonnull;
_173 = (frost$core$Bit) {_172};
_174 = _173.value;
if (_174) goto block20; else goto block21;
block21:;
_176 = (frost$core$Int) {230u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s250, _176, &$s251);
abort(); // unreachable
block20:;
_179 = ((frost$core$Int) _171.value);
return _179;

}
frost$core$Int org$frostlang$frostc$MemoryLayout$getChoiceFieldOffset$org$frostlang$frostc$ChoiceCase$frost$core$Int$R$frost$core$Int(void* rawSelf, org$frostlang$frostc$ChoiceCase* param1, frost$core$Int param2) {
org$frostlang$frostc$MemoryLayout* param0 = (org$frostlang$frostc$MemoryLayout*) rawSelf;

frost$core$Int local0;
frost$core$Int local1;
frost$core$Int _1;
frost$core$Int _4;
frost$core$Bit _5;
frost$core$Range$LTfrost$core$Int$GT _6;
frost$core$Int _7;
frost$core$Int _9;
frost$core$Bit _10;
bool _11;
frost$core$Int _12;
int64_t _14;
int64_t _15;
bool _16;
frost$core$Bit _17;
bool _18;
int64_t _20;
int64_t _21;
bool _22;
frost$core$Bit _23;
bool _24;
frost$core$Int _27;
frost$collections$Array** _28;
frost$collections$Array* _29;
frost$core$Int _30;
frost$core$Int _32;
int64_t _33;
int64_t _34;
bool _35;
frost$core$Bit _36;
bool _37;
frost$collections$CollectionView* _39;
$fn252 _40;
frost$core$Int _41;
int64_t _42;
int64_t _43;
bool _44;
frost$core$Bit _45;
bool _46;
frost$core$Int _48;
frost$unsafe$Pointer* _52;
frost$unsafe$Pointer _53;
int64_t _54;
frost$core$Int64 _55;
int64_t _56;
frost$core$Object* _57;
frost$core$Object* _58;
org$frostlang$frostc$Type* _61;
$fn253 _62;
frost$core$Int _63;
int64_t _64;
int64_t _65;
int64_t _66;
frost$core$Int _67;
frost$core$Object* _69;
frost$core$Int _72;
int64_t _73;
int64_t _74;
int64_t _75;
frost$core$Int _76;
int64_t _78;
int64_t _79;
bool _80;
frost$core$Bit _81;
bool _82;
int64_t _84;
int64_t _85;
bool _86;
frost$core$Bit _87;
bool _88;
int64_t _90;
int64_t _91;
int64_t _92;
frost$core$Int _93;
frost$core$Int _97;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MemoryLayout.frost:234
_1 = (frost$core$Int) {0u};
*(&local0) = _1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MemoryLayout.frost:235
_4 = (frost$core$Int) {0u};
_5 = (frost$core$Bit) {false};
_6 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit(_4, param2, _5);
_7 = _6.min;
*(&local1) = _7;
_9 = _6.max;
_10 = _6.inclusive;
_11 = _10.value;
_12 = (frost$core$Int) {1u};
if (_11) goto block4; else goto block5;
block4:;
_14 = _7.value;
_15 = _9.value;
_16 = _14 <= _15;
_17 = (frost$core$Bit) {_16};
_18 = _17.value;
if (_18) goto block1; else goto block2;
block5:;
_20 = _7.value;
_21 = _9.value;
_22 = _20 < _21;
_23 = (frost$core$Bit) {_22};
_24 = _23.value;
if (_24) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MemoryLayout.frost:237
_27 = *(&local0);
_28 = &param1->fields;
_29 = *_28;
_30 = *(&local1);
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from MemoryLayout.frost:237:41
_32 = (frost$core$Int) {0u};
_33 = _30.value;
_34 = _32.value;
_35 = _33 >= _34;
_36 = (frost$core$Bit) {_35};
_37 = _36.value;
if (_37) goto block9; else goto block8;
block9:;
_39 = ((frost$collections$CollectionView*) _29);
ITable* $tmp254 = _39->$class->itable;
while ($tmp254->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp254 = $tmp254->next;
}
_40 = $tmp254->methods[0];
_41 = _40(_39);
_42 = _30.value;
_43 = _41.value;
_44 = _42 < _43;
_45 = (frost$core$Bit) {_44};
_46 = _45.value;
if (_46) goto block7; else goto block8;
block8:;
_48 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s255, _48, &$s256);
abort(); // unreachable
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
_52 = &_29->data;
_53 = *_52;
_54 = _53.value;
_55 = frost$core$Int64$init$frost$core$Int(_30);
_56 = _55.value;
_57 = ((frost$core$Object**)_54)[_56];
_58 = _57;
frost$core$Frost$ref$frost$core$Object$Q(_58);
_61 = ((org$frostlang$frostc$Type*) _57);
_62 = ($fn257) param0->$class->vtable[4];
_63 = _62(param0, _61);
_64 = _27.value;
_65 = _63.value;
_66 = _64 + _65;
_67 = (frost$core$Int) {_66};
*(&local0) = _67;
_69 = _57;
frost$core$Frost$unref$frost$core$Object$Q(_69);
_72 = *(&local1);
_73 = _9.value;
_74 = _72.value;
_75 = _73 - _74;
_76 = (frost$core$Int) {_75};
if (_11) goto block11; else goto block12;
block11:;
_78 = _76.value;
_79 = _12.value;
_80 = _78 >= _79;
_81 = (frost$core$Bit) {_80};
_82 = _81.value;
if (_82) goto block10; else goto block2;
block12:;
_84 = _76.value;
_85 = _12.value;
_86 = _84 > _85;
_87 = (frost$core$Bit) {_86};
_88 = _87.value;
if (_88) goto block10; else goto block2;
block10:;
_90 = _72.value;
_91 = _12.value;
_92 = _90 + _91;
_93 = (frost$core$Int) {_92};
*(&local1) = _93;
goto block1;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MemoryLayout.frost:239
_97 = *(&local0);
return _97;

}
void org$frostlang$frostc$MemoryLayout$cleanup(void* rawSelf) {
org$frostlang$frostc$MemoryLayout* param0 = (org$frostlang$frostc$MemoryLayout*) rawSelf;

frost$core$Object* _1;
frost$core$Weak** _3;
frost$core$Weak* _4;
frost$core$Object* _5;
frost$collections$IdentityMap** _7;
frost$collections$IdentityMap* _8;
frost$core$Object* _9;
frost$collections$IdentityMap** _11;
frost$collections$IdentityMap* _12;
frost$core$Object* _13;
frost$collections$IdentityMap** _15;
frost$collections$IdentityMap* _16;
frost$core$Object* _17;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MemoryLayout.frost:14
_1 = ((frost$core$Object*) param0);
frost$core$Object$cleanup(_1);
_3 = &param0->compiler;
_4 = *_3;
_5 = ((frost$core$Object*) _4);
frost$core$Frost$unref$frost$core$Object$Q(_5);
_7 = &param0->sizes;
_8 = *_7;
_9 = ((frost$core$Object*) _8);
frost$core$Frost$unref$frost$core$Object$Q(_9);
_11 = &param0->alignments;
_12 = *_11;
_13 = ((frost$core$Object*) _12);
frost$core$Frost$unref$frost$core$Object$Q(_13);
_15 = &param0->choiceDataSizes;
_16 = *_15;
_17 = ((frost$core$Object*) _16);
frost$core$Frost$unref$frost$core$Object$Q(_17);
return;

}

