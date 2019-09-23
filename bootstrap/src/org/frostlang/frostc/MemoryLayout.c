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
#include "frost/core/Int64.h"


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
typedef frost$core$Int (*$fn43)(org$frostlang$frostc$MemoryLayout*);
typedef frost$core$Int (*$fn60)(org$frostlang$frostc$MemoryLayout*, org$frostlang$frostc$ClassDecl*);
typedef frost$core$Int (*$fn61)(org$frostlang$frostc$MemoryLayout*, org$frostlang$frostc$Type*);
typedef frost$core$Int (*$fn66)(org$frostlang$frostc$MemoryLayout*, org$frostlang$frostc$Type*);
typedef frost$core$Int (*$fn67)(org$frostlang$frostc$MemoryLayout*, org$frostlang$frostc$Type*);
typedef frost$core$Int (*$fn68)(org$frostlang$frostc$MemoryLayout*);
typedef frost$core$Int (*$fn69)(org$frostlang$frostc$MemoryLayout*);
typedef frost$collections$Iterator* (*$fn70)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn71)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn72)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn73)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int (*$fn74)(org$frostlang$frostc$MemoryLayout*, org$frostlang$frostc$Type*);
typedef frost$core$Int (*$fn75)(org$frostlang$frostc$MemoryLayout*, org$frostlang$frostc$Type*);
typedef frost$core$Int (*$fn83)(org$frostlang$frostc$MemoryLayout*);
typedef frost$core$Int (*$fn91)(org$frostlang$frostc$MemoryLayout*);
typedef frost$core$Int (*$fn110)(org$frostlang$frostc$MemoryLayout*, org$frostlang$frostc$Type*);
typedef frost$core$Int (*$fn114)(org$frostlang$frostc$MemoryLayout*, org$frostlang$frostc$Type*);
typedef frost$core$Int (*$fn115)(org$frostlang$frostc$MemoryLayout*, org$frostlang$frostc$Type*);
typedef frost$core$Int (*$fn116)(org$frostlang$frostc$MemoryLayout*, org$frostlang$frostc$Type*);
typedef frost$core$Bit (*$fn117)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int (*$fn118)(org$frostlang$frostc$MemoryLayout*);
typedef frost$collections$Iterator* (*$fn119)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn120)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn121)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn122)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int (*$fn123)(org$frostlang$frostc$MemoryLayout*, org$frostlang$frostc$ClassDecl*);
typedef frost$core$Int (*$fn124)(org$frostlang$frostc$MemoryLayout*, org$frostlang$frostc$Type*);
typedef frost$core$Int (*$fn125)(org$frostlang$frostc$MemoryLayout*, org$frostlang$frostc$Type*);
typedef frost$core$String* (*$fn126)(frost$core$Object*);
typedef frost$core$String* (*$fn127)(frost$core$Object*);
typedef frost$core$String* (*$fn128)(frost$core$Object*);
typedef frost$core$Int (*$fn129)(org$frostlang$frostc$MemoryLayout*, org$frostlang$frostc$Type*);
typedef frost$core$Bit (*$fn130)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int (*$fn131)(org$frostlang$frostc$MemoryLayout*, org$frostlang$frostc$Type*);
typedef frost$core$Int (*$fn132)(org$frostlang$frostc$MemoryLayout*, org$frostlang$frostc$Type*);
typedef frost$core$Int (*$fn149)(org$frostlang$frostc$MemoryLayout*);
typedef frost$core$Int (*$fn170)(org$frostlang$frostc$MemoryLayout*, org$frostlang$frostc$ClassDecl*);
typedef frost$core$Int (*$fn171)(org$frostlang$frostc$MemoryLayout*, org$frostlang$frostc$Type*);
typedef frost$core$Int (*$fn172)(org$frostlang$frostc$MemoryLayout*, org$frostlang$frostc$Type*);
typedef frost$core$String* (*$fn173)(frost$core$Object*);
typedef frost$core$String* (*$fn176)(frost$core$Object*);
typedef frost$core$String* (*$fn179)(frost$core$Object*);
typedef frost$core$Int (*$fn182)(org$frostlang$frostc$MemoryLayout*, org$frostlang$frostc$Type*);
typedef frost$core$Int (*$fn190)(org$frostlang$frostc$MemoryLayout*, org$frostlang$frostc$Type*);
typedef frost$core$Int (*$fn194)(org$frostlang$frostc$MemoryLayout*, org$frostlang$frostc$Type*);
typedef frost$core$Int (*$fn195)(org$frostlang$frostc$MemoryLayout*, org$frostlang$frostc$Type*);
typedef frost$core$Int (*$fn196)(org$frostlang$frostc$MemoryLayout*, org$frostlang$frostc$Type*);
typedef frost$collections$Iterator* (*$fn197)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn198)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn199)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn200)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int (*$fn201)(org$frostlang$frostc$MemoryLayout*, org$frostlang$frostc$ClassDecl*);
typedef frost$core$Int (*$fn202)(org$frostlang$frostc$MemoryLayout*, org$frostlang$frostc$Type*);
typedef frost$core$Bit (*$fn203)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int (*$fn213)(org$frostlang$frostc$MemoryLayout*, org$frostlang$frostc$Type*);
typedef frost$core$Int (*$fn230)(org$frostlang$frostc$MemoryLayout*, org$frostlang$frostc$ClassDecl*);
typedef frost$core$Int (*$fn231)(org$frostlang$frostc$MemoryLayout*, org$frostlang$frostc$Type*);
typedef frost$collections$Iterator* (*$fn236)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn237)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn238)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn239)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn240)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn241)(frost$collections$Iterator*);
typedef frost$core$Int (*$fn242)(org$frostlang$frostc$MemoryLayout*, org$frostlang$frostc$Type*);
typedef frost$core$Int (*$fn251)(org$frostlang$frostc$MemoryLayout*, org$frostlang$frostc$Type*);
typedef frost$core$Int (*$fn259)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn260)(org$frostlang$frostc$MemoryLayout*, org$frostlang$frostc$Type*);
typedef frost$core$Int (*$fn264)(org$frostlang$frostc$MemoryLayout*, org$frostlang$frostc$Type*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x6d\x6f\x72\x79\x4c\x61\x79\x6f\x75\x74", 33, 8784050979380734961, NULL };
static frost$core$String $s15 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x74\x79\x70\x65\x20", 5, -4937494473629816297, NULL };
static frost$core$String $s16 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x77\x61\x73\x20\x75\x6e\x72\x65\x73\x6f\x6c\x76\x65\x64", 15, -7400242096793549389, NULL };
static frost$core$String $s17 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x65\x6d\x6f\x72\x79\x4c\x61\x79\x6f\x75\x74\x2e\x66\x72\x6f\x73\x74", 18, 5644840658914162624, NULL };
static frost$core$String $s18 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s19 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x64\x65\x72\x65\x66\x65\x72\x65\x6e\x63\x69\x6e\x67\x20\x77\x65\x61\x6b\x20\x70\x6f\x69\x6e\x74\x65\x72\x20\x61\x66\x74\x65\x72\x20\x69\x74\x73\x20\x72\x65\x66\x65\x72\x65\x6e\x74\x20\x77\x61\x73\x20\x64\x65\x73\x74\x72\x6f\x79\x65\x64", 59, 1822743730076196218, NULL };
static frost$core$String $s23 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x38", 1, -5808599754107409849, NULL };
static frost$core$String $s24 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x31\x36", 2, 574367315260998974, NULL };
static frost$core$String $s25 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x33\x32", 2, 576315649865810416, NULL };
static frost$core$String $s26 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x36\x34", 2, 573522890330722151, NULL };
static frost$core$String $s27 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s28 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x64\x65\x72\x65\x66\x65\x72\x65\x6e\x63\x69\x6e\x67\x20\x77\x65\x61\x6b\x20\x70\x6f\x69\x6e\x74\x65\x72\x20\x61\x66\x74\x65\x72\x20\x69\x74\x73\x20\x72\x65\x66\x65\x72\x65\x6e\x74\x20\x77\x61\x73\x20\x64\x65\x73\x74\x72\x6f\x79\x65\x64", 59, 1822743730076196218, NULL };
static frost$core$String $s29 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s30 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x64\x65\x72\x65\x66\x65\x72\x65\x6e\x63\x69\x6e\x67\x20\x77\x65\x61\x6b\x20\x70\x6f\x69\x6e\x74\x65\x72\x20\x61\x66\x74\x65\x72\x20\x69\x74\x73\x20\x72\x65\x66\x65\x72\x65\x6e\x74\x20\x77\x61\x73\x20\x64\x65\x73\x74\x72\x6f\x79\x65\x64", 59, 1822743730076196218, NULL };
static frost$core$String $s34 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s35 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x64\x65\x72\x65\x66\x65\x72\x65\x6e\x63\x69\x6e\x67\x20\x77\x65\x61\x6b\x20\x70\x6f\x69\x6e\x74\x65\x72\x20\x61\x66\x74\x65\x72\x20\x69\x74\x73\x20\x72\x65\x66\x65\x72\x65\x6e\x74\x20\x77\x61\x73\x20\x64\x65\x73\x74\x72\x6f\x79\x65\x64", 59, 1822743730076196218, NULL };
static frost$core$String $s36 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s37 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x64\x65\x72\x65\x66\x65\x72\x65\x6e\x63\x69\x6e\x67\x20\x77\x65\x61\x6b\x20\x70\x6f\x69\x6e\x74\x65\x72\x20\x61\x66\x74\x65\x72\x20\x69\x74\x73\x20\x72\x65\x66\x65\x72\x65\x6e\x74\x20\x77\x61\x73\x20\x64\x65\x73\x74\x72\x6f\x79\x65\x64", 59, 1822743730076196218, NULL };
static frost$core$String $s38 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x65\x6d\x6f\x72\x79\x4c\x61\x79\x6f\x75\x74\x2e\x66\x72\x6f\x73\x74", 18, 5644840658914162624, NULL };
static frost$core$String $s39 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, -4241746971283918425, NULL };
static frost$core$String $s40 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x65\x6d\x6f\x72\x79\x4c\x61\x79\x6f\x75\x74\x2e\x66\x72\x6f\x73\x74", 18, 5644840658914162624, NULL };
static frost$core$String $s41 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, -4241746971283918425, NULL };
static frost$core$String $s42 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -770938211666792916, NULL };
static frost$core$String $s44 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s45 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x64\x65\x72\x65\x66\x65\x72\x65\x6e\x63\x69\x6e\x67\x20\x77\x65\x61\x6b\x20\x70\x6f\x69\x6e\x74\x65\x72\x20\x61\x66\x74\x65\x72\x20\x69\x74\x73\x20\x72\x65\x66\x65\x72\x65\x6e\x74\x20\x77\x61\x73\x20\x64\x65\x73\x74\x72\x6f\x79\x65\x64", 59, 1822743730076196218, NULL };
static frost$core$String $s46 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x65\x6d\x6f\x72\x79\x4c\x61\x79\x6f\x75\x74\x2e\x66\x72\x6f\x73\x74", 18, 5644840658914162624, NULL };
static frost$core$String $s47 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, -4241746971283918425, NULL };
static frost$core$String $s51 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s52 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x64\x65\x72\x65\x66\x65\x72\x65\x6e\x63\x69\x6e\x67\x20\x77\x65\x61\x6b\x20\x70\x6f\x69\x6e\x74\x65\x72\x20\x61\x66\x74\x65\x72\x20\x69\x74\x73\x20\x72\x65\x66\x65\x72\x65\x6e\x74\x20\x77\x61\x73\x20\x64\x65\x73\x74\x72\x6f\x79\x65\x64", 59, 1822743730076196218, NULL };
static frost$core$String $s53 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s54 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x64\x65\x72\x65\x66\x65\x72\x65\x6e\x63\x69\x6e\x67\x20\x77\x65\x61\x6b\x20\x70\x6f\x69\x6e\x74\x65\x72\x20\x61\x66\x74\x65\x72\x20\x69\x74\x73\x20\x72\x65\x66\x65\x72\x65\x6e\x74\x20\x77\x61\x73\x20\x64\x65\x73\x74\x72\x6f\x79\x65\x64", 59, 1822743730076196218, NULL };
static frost$core$String $s58 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x65\x6d\x6f\x72\x79\x4c\x61\x79\x6f\x75\x74\x2e\x66\x72\x6f\x73\x74", 18, 5644840658914162624, NULL };
static frost$core$String $s59 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, -4241746971283918425, NULL };
static frost$core$String $s62 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x65\x6d\x6f\x72\x79\x4c\x61\x79\x6f\x75\x74\x2e\x66\x72\x6f\x73\x74", 18, 5644840658914162624, NULL };
static frost$core$String $s76 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s77 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x64\x65\x72\x65\x66\x65\x72\x65\x6e\x63\x69\x6e\x67\x20\x77\x65\x61\x6b\x20\x70\x6f\x69\x6e\x74\x65\x72\x20\x61\x66\x74\x65\x72\x20\x69\x74\x73\x20\x72\x65\x66\x65\x72\x65\x6e\x74\x20\x77\x61\x73\x20\x64\x65\x73\x74\x72\x6f\x79\x65\x64", 59, 1822743730076196218, NULL };
static frost$core$String $s78 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x65\x6d\x6f\x72\x79\x4c\x61\x79\x6f\x75\x74\x2e\x66\x72\x6f\x73\x74", 18, 5644840658914162624, NULL };
static frost$core$String $s79 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s80 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x64\x65\x72\x65\x66\x65\x72\x65\x6e\x63\x69\x6e\x67\x20\x77\x65\x61\x6b\x20\x70\x6f\x69\x6e\x74\x65\x72\x20\x61\x66\x74\x65\x72\x20\x69\x74\x73\x20\x72\x65\x66\x65\x72\x65\x6e\x74\x20\x77\x61\x73\x20\x64\x65\x73\x74\x72\x6f\x79\x65\x64", 59, 1822743730076196218, NULL };
static frost$core$String $s81 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x65\x6d\x6f\x72\x79\x4c\x61\x79\x6f\x75\x74\x2e\x66\x72\x6f\x73\x74", 18, 5644840658914162624, NULL };
static frost$core$String $s82 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, -4241746971283918425, NULL };
static frost$core$String $s84 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x65\x6d\x6f\x72\x79\x4c\x61\x79\x6f\x75\x74\x2e\x66\x72\x6f\x73\x74", 18, 5644840658914162624, NULL };
static frost$core$String $s85 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, -4241746971283918425, NULL };
static frost$core$String $s86 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -770938211666792916, NULL };
static frost$core$String $s87 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s88 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x64\x65\x72\x65\x66\x65\x72\x65\x6e\x63\x69\x6e\x67\x20\x77\x65\x61\x6b\x20\x70\x6f\x69\x6e\x74\x65\x72\x20\x61\x66\x74\x65\x72\x20\x69\x74\x73\x20\x72\x65\x66\x65\x72\x65\x6e\x74\x20\x77\x61\x73\x20\x64\x65\x73\x74\x72\x6f\x79\x65\x64", 59, 1822743730076196218, NULL };
static frost$core$String $s89 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x65\x6d\x6f\x72\x79\x4c\x61\x79\x6f\x75\x74\x2e\x66\x72\x6f\x73\x74", 18, 5644840658914162624, NULL };
static frost$core$String $s90 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, -4241746971283918425, NULL };
static frost$core$String $s92 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x65\x6d\x6f\x72\x79\x4c\x61\x79\x6f\x75\x74\x2e\x66\x72\x6f\x73\x74", 18, 5644840658914162624, NULL };
static frost$core$String $s93 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, -4241746971283918425, NULL };
static frost$core$String $s94 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x65\x6d\x6f\x72\x79\x4c\x61\x79\x6f\x75\x74\x2e\x66\x72\x6f\x73\x74", 18, 5644840658914162624, NULL };
static frost$core$String $s95 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 67, 6831135569071847533, NULL };
static frost$core$String $s96 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s97 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x64\x65\x72\x65\x66\x65\x72\x65\x6e\x63\x69\x6e\x67\x20\x77\x65\x61\x6b\x20\x70\x6f\x69\x6e\x74\x65\x72\x20\x61\x66\x74\x65\x72\x20\x69\x74\x73\x20\x72\x65\x66\x65\x72\x65\x6e\x74\x20\x77\x61\x73\x20\x64\x65\x73\x74\x72\x6f\x79\x65\x64", 59, 1822743730076196218, NULL };
static frost$core$String $s98 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x65\x6d\x6f\x72\x79\x4c\x61\x79\x6f\x75\x74\x2e\x66\x72\x6f\x73\x74", 18, 5644840658914162624, NULL };
static frost$core$String $s99 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, -4241746971283918425, NULL };
static frost$core$String $s103 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s104 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x64\x65\x72\x65\x66\x65\x72\x65\x6e\x63\x69\x6e\x67\x20\x77\x65\x61\x6b\x20\x70\x6f\x69\x6e\x74\x65\x72\x20\x61\x66\x74\x65\x72\x20\x69\x74\x73\x20\x72\x65\x66\x65\x72\x65\x6e\x74\x20\x77\x61\x73\x20\x64\x65\x73\x74\x72\x6f\x79\x65\x64", 59, 1822743730076196218, NULL };
static frost$core$String $s105 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s106 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x64\x65\x72\x65\x66\x65\x72\x65\x6e\x63\x69\x6e\x67\x20\x77\x65\x61\x6b\x20\x70\x6f\x69\x6e\x74\x65\x72\x20\x61\x66\x74\x65\x72\x20\x69\x74\x73\x20\x72\x65\x66\x65\x72\x65\x6e\x74\x20\x77\x61\x73\x20\x64\x65\x73\x74\x72\x6f\x79\x65\x64", 59, 1822743730076196218, NULL };
static frost$core$String $s111 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x65\x6d\x6f\x72\x79\x4c\x61\x79\x6f\x75\x74\x2e\x66\x72\x6f\x73\x74", 18, 5644840658914162624, NULL };
static frost$core$String $s112 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, -4241746971283918425, NULL };
static frost$core$String $s133 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s134 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x64\x65\x72\x65\x66\x65\x72\x65\x6e\x63\x69\x6e\x67\x20\x77\x65\x61\x6b\x20\x70\x6f\x69\x6e\x74\x65\x72\x20\x61\x66\x74\x65\x72\x20\x69\x74\x73\x20\x72\x65\x66\x65\x72\x65\x6e\x74\x20\x77\x61\x73\x20\x64\x65\x73\x74\x72\x6f\x79\x65\x64", 59, 1822743730076196218, NULL };
static frost$core$String $s135 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x65\x6d\x6f\x72\x79\x4c\x61\x79\x6f\x75\x74\x2e\x66\x72\x6f\x73\x74", 18, 5644840658914162624, NULL };
static frost$core$String $s136 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x65\x6d\x6f\x72\x79\x4c\x61\x79\x6f\x75\x74\x2e\x66\x72\x6f\x73\x74", 18, 5644840658914162624, NULL };
static frost$core$String $s137 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, -4241746971283918425, NULL };
static frost$core$String $s141 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x65\x6d\x6f\x72\x79\x4c\x61\x79\x6f\x75\x74\x2e\x66\x72\x6f\x73\x74", 18, 5644840658914162624, NULL };
static frost$core$String $s142 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, -4241746971283918425, NULL };
static frost$core$String $s143 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x64\x65\x74\x65\x72\x6d\x69\x6e\x69\x6e\x67\x20\x73\x69\x7a\x65\x20\x6f\x66\x20\x75\x6e\x72\x65\x73\x6f\x6c\x76\x65\x64\x20\x63\x6c\x61\x73\x73\x20", 37, -1042366941103869398, NULL };
static frost$core$String $s144 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s145 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x65\x6d\x6f\x72\x79\x4c\x61\x79\x6f\x75\x74\x2e\x66\x72\x6f\x73\x74", 18, 5644840658914162624, NULL };
static frost$core$String $s146 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x65\x6d\x6f\x72\x79\x4c\x61\x79\x6f\x75\x74\x2e\x66\x72\x6f\x73\x74", 18, 5644840658914162624, NULL };
static frost$core$String $s147 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, -4241746971283918425, NULL };
static frost$core$String $s148 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -770938211666792916, NULL };
static frost$core$String $s150 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x65\x6d\x6f\x72\x79\x4c\x61\x79\x6f\x75\x74\x2e\x66\x72\x6f\x73\x74", 18, 5644840658914162624, NULL };
static frost$core$String $s151 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, -4241746971283918425, NULL };
static frost$core$String $s152 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x65\x6d\x6f\x72\x79\x4c\x61\x79\x6f\x75\x74\x2e\x66\x72\x6f\x73\x74", 18, 5644840658914162624, NULL };
static frost$core$String $s153 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 67, 6831135569071847533, NULL };
static frost$core$String $s154 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s155 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x64\x65\x72\x65\x66\x65\x72\x65\x6e\x63\x69\x6e\x67\x20\x77\x65\x61\x6b\x20\x70\x6f\x69\x6e\x74\x65\x72\x20\x61\x66\x74\x65\x72\x20\x69\x74\x73\x20\x72\x65\x66\x65\x72\x65\x6e\x74\x20\x77\x61\x73\x20\x64\x65\x73\x74\x72\x6f\x79\x65\x64", 59, 1822743730076196218, NULL };
static frost$core$String $s156 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x65\x6d\x6f\x72\x79\x4c\x61\x79\x6f\x75\x74\x2e\x66\x72\x6f\x73\x74", 18, 5644840658914162624, NULL };
static frost$core$String $s157 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, -4241746971283918425, NULL };
static frost$core$String $s161 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s162 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x64\x65\x72\x65\x66\x65\x72\x65\x6e\x63\x69\x6e\x67\x20\x77\x65\x61\x6b\x20\x70\x6f\x69\x6e\x74\x65\x72\x20\x61\x66\x74\x65\x72\x20\x69\x74\x73\x20\x72\x65\x66\x65\x72\x65\x6e\x74\x20\x77\x61\x73\x20\x64\x65\x73\x74\x72\x6f\x79\x65\x64", 59, 1822743730076196218, NULL };
static frost$core$String $s163 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s164 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x64\x65\x72\x65\x66\x65\x72\x65\x6e\x63\x69\x6e\x67\x20\x77\x65\x61\x6b\x20\x70\x6f\x69\x6e\x74\x65\x72\x20\x61\x66\x74\x65\x72\x20\x69\x74\x73\x20\x72\x65\x66\x65\x72\x65\x6e\x74\x20\x77\x61\x73\x20\x64\x65\x73\x74\x72\x6f\x79\x65\x64", 59, 1822743730076196218, NULL };
static frost$core$String $s168 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x65\x6d\x6f\x72\x79\x4c\x61\x79\x6f\x75\x74\x2e\x66\x72\x6f\x73\x74", 18, 5644840658914162624, NULL };
static frost$core$String $s169 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, -4241746971283918425, NULL };
static frost$core$String $s174 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x69\x65\x6c\x64\x20", 6, 5264299414834697605, NULL };
static frost$core$String $s175 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x68\x61\x73\x20\x61\x6c\x69\x67\x6e\x6d\x65\x6e\x74\x20", 15, 8659601875310714384, NULL };
static frost$core$String $s177 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x62\x75\x74\x20\x69\x73\x20\x61\x74\x20\x6f\x66\x66\x73\x65\x74\x20", 18, -110593389782930674, NULL };
static frost$core$String $s180 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s181 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x65\x6d\x6f\x72\x79\x4c\x61\x79\x6f\x75\x74\x2e\x66\x72\x6f\x73\x74", 18, 5644840658914162624, NULL };
static frost$core$String $s183 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s184 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x64\x65\x72\x65\x66\x65\x72\x65\x6e\x63\x69\x6e\x67\x20\x77\x65\x61\x6b\x20\x70\x6f\x69\x6e\x74\x65\x72\x20\x61\x66\x74\x65\x72\x20\x69\x74\x73\x20\x72\x65\x66\x65\x72\x65\x6e\x74\x20\x77\x61\x73\x20\x64\x65\x73\x74\x72\x6f\x79\x65\x64", 59, 1822743730076196218, NULL };
static frost$core$String $s185 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x65\x6d\x6f\x72\x79\x4c\x61\x79\x6f\x75\x74\x2e\x66\x72\x6f\x73\x74", 18, 5644840658914162624, NULL };
static frost$core$String $s186 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, -4241746971283918425, NULL };
static frost$core$String $s191 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x65\x6d\x6f\x72\x79\x4c\x61\x79\x6f\x75\x74\x2e\x66\x72\x6f\x73\x74", 18, 5644840658914162624, NULL };
static frost$core$String $s192 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, -4241746971283918425, NULL };
static frost$core$String $s204 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s205 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x64\x65\x72\x65\x66\x65\x72\x65\x6e\x63\x69\x6e\x67\x20\x77\x65\x61\x6b\x20\x70\x6f\x69\x6e\x74\x65\x72\x20\x61\x66\x74\x65\x72\x20\x69\x74\x73\x20\x72\x65\x66\x65\x72\x65\x6e\x74\x20\x77\x61\x73\x20\x64\x65\x73\x74\x72\x6f\x79\x65\x64", 59, 1822743730076196218, NULL };
static frost$core$String $s206 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s207 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x64\x65\x72\x65\x66\x65\x72\x65\x6e\x63\x69\x6e\x67\x20\x77\x65\x61\x6b\x20\x70\x6f\x69\x6e\x74\x65\x72\x20\x61\x66\x74\x65\x72\x20\x69\x74\x73\x20\x72\x65\x66\x65\x72\x65\x6e\x74\x20\x77\x61\x73\x20\x64\x65\x73\x74\x72\x6f\x79\x65\x64", 59, 1822743730076196218, NULL };
static frost$core$String $s208 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x65\x6d\x6f\x72\x79\x4c\x61\x79\x6f\x75\x74\x2e\x66\x72\x6f\x73\x74", 18, 5644840658914162624, NULL };
static frost$core$String $s209 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, -4241746971283918425, NULL };
static frost$core$String $s210 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x65\x6d\x6f\x72\x79\x4c\x61\x79\x6f\x75\x74\x2e\x66\x72\x6f\x73\x74", 18, 5644840658914162624, NULL };
static frost$core$String $s211 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s212 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x64\x65\x72\x65\x66\x65\x72\x65\x6e\x63\x69\x6e\x67\x20\x77\x65\x61\x6b\x20\x70\x6f\x69\x6e\x74\x65\x72\x20\x61\x66\x74\x65\x72\x20\x69\x74\x73\x20\x72\x65\x66\x65\x72\x65\x6e\x74\x20\x77\x61\x73\x20\x64\x65\x73\x74\x72\x6f\x79\x65\x64", 59, 1822743730076196218, NULL };
static frost$core$String $s214 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s215 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x64\x65\x72\x65\x66\x65\x72\x65\x6e\x63\x69\x6e\x67\x20\x77\x65\x61\x6b\x20\x70\x6f\x69\x6e\x74\x65\x72\x20\x61\x66\x74\x65\x72\x20\x69\x74\x73\x20\x72\x65\x66\x65\x72\x65\x6e\x74\x20\x77\x61\x73\x20\x64\x65\x73\x74\x72\x6f\x79\x65\x64", 59, 1822743730076196218, NULL };
static frost$core$String $s216 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x65\x6d\x6f\x72\x79\x4c\x61\x79\x6f\x75\x74\x2e\x66\x72\x6f\x73\x74", 18, 5644840658914162624, NULL };
static frost$core$String $s217 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, -4241746971283918425, NULL };
static frost$core$String $s221 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s222 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x64\x65\x72\x65\x66\x65\x72\x65\x6e\x63\x69\x6e\x67\x20\x77\x65\x61\x6b\x20\x70\x6f\x69\x6e\x74\x65\x72\x20\x61\x66\x74\x65\x72\x20\x69\x74\x73\x20\x72\x65\x66\x65\x72\x65\x6e\x74\x20\x77\x61\x73\x20\x64\x65\x73\x74\x72\x6f\x79\x65\x64", 59, 1822743730076196218, NULL };
static frost$core$String $s223 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s224 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x64\x65\x72\x65\x66\x65\x72\x65\x6e\x63\x69\x6e\x67\x20\x77\x65\x61\x6b\x20\x70\x6f\x69\x6e\x74\x65\x72\x20\x61\x66\x74\x65\x72\x20\x69\x74\x73\x20\x72\x65\x66\x65\x72\x65\x6e\x74\x20\x77\x61\x73\x20\x64\x65\x73\x74\x72\x6f\x79\x65\x64", 59, 1822743730076196218, NULL };
static frost$core$String $s228 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x65\x6d\x6f\x72\x79\x4c\x61\x79\x6f\x75\x74\x2e\x66\x72\x6f\x73\x74", 18, 5644840658914162624, NULL };
static frost$core$String $s229 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, -4241746971283918425, NULL };
static frost$core$String $s232 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x65\x6d\x6f\x72\x79\x4c\x61\x79\x6f\x75\x74\x2e\x66\x72\x6f\x73\x74", 18, 5644840658914162624, NULL };
static frost$core$String $s246 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s247 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x64\x65\x72\x65\x66\x65\x72\x65\x6e\x63\x69\x6e\x67\x20\x77\x65\x61\x6b\x20\x70\x6f\x69\x6e\x74\x65\x72\x20\x61\x66\x74\x65\x72\x20\x69\x74\x73\x20\x72\x65\x66\x65\x72\x65\x6e\x74\x20\x77\x61\x73\x20\x64\x65\x73\x74\x72\x6f\x79\x65\x64", 59, 1822743730076196218, NULL };
static frost$core$String $s252 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x65\x6d\x6f\x72\x79\x4c\x61\x79\x6f\x75\x74\x2e\x66\x72\x6f\x73\x74", 18, 5644840658914162624, NULL };
static frost$core$String $s253 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 67, 6831135569071847533, NULL };
static frost$core$String $s254 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x65\x6d\x6f\x72\x79\x4c\x61\x79\x6f\x75\x74\x2e\x66\x72\x6f\x73\x74", 18, 5644840658914162624, NULL };
static frost$core$String $s255 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 67, 6831135569071847533, NULL };
static frost$core$String $s257 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x65\x6d\x6f\x72\x79\x4c\x61\x79\x6f\x75\x74\x2e\x66\x72\x6f\x73\x74", 18, 5644840658914162624, NULL };
static frost$core$String $s258 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 67, 6831135569071847533, NULL };
static frost$core$String $s262 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s263 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };

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
org$frostlang$frostc$ClassDecl* _313;
bool _314;
frost$core$Bit _315;
bool _316;
frost$core$Int _318;
org$frostlang$frostc$ClassDecl* _321;
frost$core$String** _322;
frost$core$String* _323;
frost$core$Bit _324;
bool _325;
$fn5 _328;
frost$core$Int _329;
org$frostlang$frostc$ClassDecl* _330;
frost$core$Object* _331;
frost$core$Int _336;
frost$core$Weak** _339;
frost$core$Weak* _340;
frost$core$Bit* _345;
frost$core$Bit _346;
bool _348;
frost$core$Int _350;
frost$core$Object** _354;
frost$core$Object* _355;
frost$core$Object* _356;
frost$core$Object* _357;
org$frostlang$frostc$Compiler* _360;
org$frostlang$frostc$ClassDecl* _361;
bool _362;
frost$core$Bit _363;
bool _364;
frost$core$Int _366;
org$frostlang$frostc$ClassDecl* _369;
frost$collections$ListView* _370;
frost$collections$Iterable* _371;
$fn6 _372;
frost$collections$Iterator* _373;
$fn7 _375;
frost$core$Bit _376;
bool _377;
$fn8 _380;
frost$core$Object* _381;
org$frostlang$frostc$FieldDecl* _382;
frost$core$Object* _383;
org$frostlang$frostc$FieldDecl* _385;
frost$core$Object* _386;
org$frostlang$frostc$FieldDecl* _390;
org$frostlang$frostc$Annotations** _391;
org$frostlang$frostc$Annotations* _392;
frost$core$Int* _395;
frost$core$Int _396;
frost$core$Int _397;
int64_t _400;
int64_t _401;
int64_t _402;
frost$core$Int _403;
frost$core$Int _405;
int64_t _406;
int64_t _407;
bool _408;
frost$core$Bit _409;
bool _411;
frost$core$Object* _414;
org$frostlang$frostc$FieldDecl* _416;
frost$core$Object* _417;
frost$core$Weak** _422;
frost$core$Weak* _423;
frost$core$Bit* _428;
frost$core$Bit _429;
bool _431;
frost$core$Int _433;
frost$core$Object** _437;
frost$core$Object* _438;
frost$core$Object* _439;
frost$core$Object* _440;
org$frostlang$frostc$Compiler* _443;
org$frostlang$frostc$FieldDecl* _444;
frost$core$Bit _445;
frost$core$Object* _446;
org$frostlang$frostc$FieldDecl* _449;
org$frostlang$frostc$Type** _450;
org$frostlang$frostc$Type* _451;
frost$core$Weak** _452;
frost$core$Weak* _453;
frost$core$Bit* _458;
frost$core$Bit _459;
bool _461;
frost$core$Int _463;
frost$core$Object** _467;
frost$core$Object* _468;
frost$core$Object* _469;
frost$core$Object* _470;
org$frostlang$frostc$Compiler* _473;
org$frostlang$frostc$Type** _474;
org$frostlang$frostc$Type* _475;
org$frostlang$frostc$Symbol* _478;
frost$core$String** _479;
frost$core$String* _480;
org$frostlang$frostc$Symbol* _481;
frost$core$String** _482;
frost$core$String* _483;
frost$core$Bit _484;
bool _485;
org$frostlang$frostc$Type$Kind* _487;
org$frostlang$frostc$Type$Kind _488;
frost$core$Equatable* _489;
org$frostlang$frostc$Type$Kind* _490;
org$frostlang$frostc$Type$Kind _491;
frost$core$Equatable* _492;
$fn9 _493;
frost$core$Bit _494;
frost$core$Object* _495;
frost$core$Object* _497;
frost$core$Bit _503;
bool _505;
frost$core$Object* _506;
frost$core$Int _510;
org$frostlang$frostc$ClassDecl* _511;
bool _512;
frost$core$Bit _513;
bool _514;
frost$core$Int _516;
org$frostlang$frostc$ClassDecl* _519;
$fn10 _520;
frost$core$Int _521;
int64_t _522;
int64_t _523;
int64_t _524;
frost$core$Int _525;
org$frostlang$frostc$FieldDecl* _530;
org$frostlang$frostc$Type** _531;
org$frostlang$frostc$Type* _532;
$fn11 _533;
frost$core$Int _534;
frost$core$Int _537;
frost$core$Int _538;
int64_t _541;
int64_t _542;
int64_t _543;
frost$core$Int _544;
frost$core$Int _548;
frost$core$Int _549;
int64_t _550;
int64_t _551;
bool _552;
frost$core$Bit _553;
bool _554;
frost$core$Int _557;
frost$core$Int _558;
frost$core$Int _559;
int64_t _560;
int64_t _561;
int64_t _562;
frost$core$Int _563;
int64_t _564;
int64_t _565;
int64_t _566;
frost$core$Int _567;
frost$core$Int _571;
frost$core$Int _572;
int64_t _575;
int64_t _576;
int64_t _577;
frost$core$Int _578;
frost$core$Int _580;
int64_t _583;
int64_t _584;
bool _585;
frost$core$Bit _586;
bool _588;
frost$core$Int _590;
frost$core$Int _594;
frost$core$Int _595;
int64_t _596;
int64_t _597;
int64_t _598;
frost$core$Int _599;
frost$core$Object* _602;
org$frostlang$frostc$FieldDecl* _604;
frost$core$Object* _605;
frost$core$Object* _609;
frost$core$Object* _611;
frost$core$Object* _613;
org$frostlang$frostc$Type$Kind* _616;
org$frostlang$frostc$Type$Kind _617;
frost$core$Equatable* _618;
frost$core$Int _619;
frost$core$Int* _622;
org$frostlang$frostc$Type$Kind _624;
org$frostlang$frostc$Type$Kind _627;
frost$core$Equatable* _628;
$fn12 _629;
frost$core$Bit _630;
bool _631;
frost$core$Object* _632;
frost$core$Object* _634;
frost$core$Int _638;
frost$core$Int _639;
int64_t _640;
int64_t _641;
int64_t _642;
frost$core$Int _643;
$fn13 _647;
frost$core$Int _648;
frost$core$Int _651;
frost$core$Int _652;
int64_t _655;
int64_t _656;
int64_t _657;
frost$core$Int _658;
frost$core$Int _660;
int64_t _661;
int64_t _662;
bool _663;
frost$core$Bit _664;
bool _665;
frost$core$Int _668;
frost$core$Int _669;
frost$core$Int _670;
frost$core$Int _671;
int64_t _674;
int64_t _675;
int64_t _676;
frost$core$Int _677;
int64_t _679;
int64_t _680;
int64_t _681;
frost$core$Int _682;
int64_t _683;
int64_t _684;
int64_t _685;
frost$core$Int _686;
frost$core$Int _690;
org$frostlang$frostc$ClassDecl* _691;
frost$core$Object* _692;
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:258
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:258
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
if (_280) goto block49; else goto block50;
block50:;
_282 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s36, _282, &$s37);
abort(); // unreachable
block49:;
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
if (_296) goto block51; else goto block52;
block52:;
_298 = (frost$core$Int) {72u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s38, _298, &$s39);
abort(); // unreachable
block51:;
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
if (_309) goto block44; else goto block46;
block46:;
_313 = *(&local2);
_314 = _313 != NULL;
_315 = (frost$core$Bit) {_314};
_316 = _315.value;
if (_316) goto block54; else goto block55;
block55:;
_318 = (frost$core$Int) {72u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s40, _318, &$s41);
abort(); // unreachable
block54:;
_321 = _313;
_322 = &_321->name;
_323 = *_322;
_324 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(_323, &$s42);
_325 = _324.value;
if (_325) goto block44; else goto block45;
block44:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MemoryLayout.frost:73
_328 = ($fn43) param0->$class->vtable[3];
_329 = _328(param0);
_330 = *(&local2);
_331 = ((frost$core$Object*) _330);
frost$core$Frost$unref$frost$core$Object$Q(_331);
*(&local2) = ((org$frostlang$frostc$ClassDecl*) NULL);
return _329;
block45:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MemoryLayout.frost:75
_336 = (frost$core$Int) {0u};
*(&local3) = _336;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MemoryLayout.frost:76
_339 = &param0->compiler;
_340 = *_339;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from MemoryLayout.frost:76:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
_345 = &_340->_valid;
_346 = *_345;
_348 = _346.value;
if (_348) goto block58; else goto block59;
block59:;
_350 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s44, _350, &$s45);
abort(); // unreachable
block58:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
_354 = &_340->value;
_355 = *_354;
_356 = _355;
_357 = _356;
frost$core$Frost$ref$frost$core$Object$Q(_357);
_360 = ((org$frostlang$frostc$Compiler*) _356);
_361 = *(&local2);
_362 = _361 != NULL;
_363 = (frost$core$Bit) {_362};
_364 = _363.value;
if (_364) goto block60; else goto block61;
block61:;
_366 = (frost$core$Int) {76u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s46, _366, &$s47);
abort(); // unreachable
block60:;
_369 = _361;
_370 = org$frostlang$frostc$Compiler$instanceFields$org$frostlang$frostc$ClassDecl$R$frost$collections$ListView$LTorg$frostlang$frostc$FieldDecl$GT(_360, _369);
_371 = ((frost$collections$Iterable*) _370);
ITable* $tmp48 = _371->$class->itable;
while ($tmp48->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp48 = $tmp48->next;
}
_372 = $tmp48->methods[0];
_373 = _372(_371);
goto block62;
block62:;
ITable* $tmp49 = _373->$class->itable;
while ($tmp49->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp49 = $tmp49->next;
}
_375 = $tmp49->methods[0];
_376 = _375(_373);
_377 = _376.value;
if (_377) goto block64; else goto block63;
block63:;
*(&local4) = ((org$frostlang$frostc$FieldDecl*) NULL);
ITable* $tmp50 = _373->$class->itable;
while ($tmp50->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp50 = $tmp50->next;
}
_380 = $tmp50->methods[1];
_381 = _380(_373);
_382 = ((org$frostlang$frostc$FieldDecl*) _381);
_383 = ((frost$core$Object*) _382);
frost$core$Frost$ref$frost$core$Object$Q(_383);
_385 = *(&local4);
_386 = ((frost$core$Object*) _385);
frost$core$Frost$unref$frost$core$Object$Q(_386);
*(&local4) = _382;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MemoryLayout.frost:77
_390 = *(&local4);
_391 = &_390->annotations;
_392 = *_391;
// begin inline call to function org.frostlang.frostc.Annotations.get_isClass():frost.core.Bit from MemoryLayout.frost:77:29
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:125
_395 = &_392->flags;
_396 = *_395;
_397 = (frost$core$Int) {16u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:125:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:293
_400 = _396.value;
_401 = _397.value;
_402 = _400 & _401;
_403 = (frost$core$Int) {_402};
_405 = (frost$core$Int) {0u};
_406 = _403.value;
_407 = _405.value;
_408 = _406 != _407;
_409 = (frost$core$Bit) {_408};
_411 = _409.value;
if (_411) goto block65; else goto block66;
block65:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MemoryLayout.frost:78
_414 = _381;
frost$core$Frost$unref$frost$core$Object$Q(_414);
_416 = *(&local4);
_417 = ((frost$core$Object*) _416);
frost$core$Frost$unref$frost$core$Object$Q(_417);
*(&local4) = ((org$frostlang$frostc$FieldDecl*) NULL);
goto block62;
block66:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MemoryLayout.frost:80
_422 = &param0->compiler;
_423 = *_422;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from MemoryLayout.frost:80:13
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
_428 = &_423->_valid;
_429 = *_428;
_431 = _429.value;
if (_431) goto block71; else goto block72;
block72:;
_433 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s51, _433, &$s52);
abort(); // unreachable
block71:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
_437 = &_423->value;
_438 = *_437;
_439 = _438;
_440 = _439;
frost$core$Frost$ref$frost$core$Object$Q(_440);
_443 = ((org$frostlang$frostc$Compiler*) _439);
_444 = *(&local4);
_445 = org$frostlang$frostc$Compiler$resolve$org$frostlang$frostc$FieldDecl$R$frost$core$Bit(_443, _444);
_446 = _439;
frost$core$Frost$unref$frost$core$Object$Q(_446);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MemoryLayout.frost:81
_449 = *(&local4);
_450 = &_449->type;
_451 = *_450;
_452 = &param0->compiler;
_453 = *_452;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from MemoryLayout.frost:81:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
_458 = &_453->_valid;
_459 = *_458;
_461 = _459.value;
if (_461) goto block78; else goto block79;
block79:;
_463 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s53, _463, &$s54);
abort(); // unreachable
block78:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
_467 = &_453->value;
_468 = *_467;
_469 = _468;
_470 = _469;
frost$core$Frost$ref$frost$core$Object$Q(_470);
_473 = ((org$frostlang$frostc$Compiler*) _469);
_474 = &_473->CHOICE_DATA_TYPE;
_475 = *_474;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from MemoryLayout.frost:81:23
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:258
_478 = ((org$frostlang$frostc$Symbol*) _451);
_479 = &_478->name;
_480 = *_479;
_481 = ((org$frostlang$frostc$Symbol*) _475);
_482 = &_481->name;
_483 = *_482;
_484 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(_480, _483);
_485 = _484.value;
if (_485) goto block81; else goto block82;
block81:;
_487 = &_451->typeKind;
_488 = *_487;
org$frostlang$frostc$Type$Kind$wrapper* $tmp55;
$tmp55 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp55->value = _488;
_489 = ((frost$core$Equatable*) $tmp55);
_490 = &_475->typeKind;
_491 = *_490;
org$frostlang$frostc$Type$Kind$wrapper* $tmp56;
$tmp56 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp56->value = _491;
_492 = ((frost$core$Equatable*) $tmp56);
ITable* $tmp57 = _489->$class->itable;
while ($tmp57->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp57 = $tmp57->next;
}
_493 = $tmp57->methods[0];
_494 = _493(_489, _492);
_495 = ((frost$core$Object*) _492);
frost$core$Frost$unref$frost$core$Object$Q(_495);
_497 = ((frost$core$Object*) _489);
frost$core$Frost$unref$frost$core$Object$Q(_497);
*(&local5) = _494;
goto block83;
block82:;
*(&local5) = _484;
goto block83;
block83:;
_503 = *(&local5);
_505 = _503.value;
_506 = _469;
frost$core$Frost$unref$frost$core$Object$Q(_506);
if (_505) goto block73; else goto block75;
block73:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MemoryLayout.frost:83
_510 = *(&local3);
_511 = *(&local2);
_512 = _511 != NULL;
_513 = (frost$core$Bit) {_512};
_514 = _513.value;
if (_514) goto block84; else goto block85;
block85:;
_516 = (frost$core$Int) {83u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s58, _516, &$s59);
abort(); // unreachable
block84:;
_519 = _511;
_520 = ($fn60) param0->$class->vtable[10];
_521 = _520(param0, _519);
_522 = _510.value;
_523 = _521.value;
_524 = _522 + _523;
_525 = (frost$core$Int) {_524};
*(&local3) = _525;
goto block74;
block75:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MemoryLayout.frost:86
_530 = *(&local4);
_531 = &_530->type;
_532 = *_531;
_533 = ($fn61) param0->$class->vtable[4];
_534 = _533(param0, _532);
*(&local6) = _534;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MemoryLayout.frost:87
_537 = *(&local3);
_538 = *(&local6);
// begin inline call to function frost.core.Int.%(other:frost.core.Int):frost.core.Int from MemoryLayout.frost:87:37
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:198
_541 = _537.value;
_542 = _538.value;
_543 = _541 % _542;
_544 = (frost$core$Int) {_543};
*(&local7) = _544;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MemoryLayout.frost:88
_548 = *(&local7);
_549 = (frost$core$Int) {0u};
_550 = _548.value;
_551 = _549.value;
_552 = _550 != _551;
_553 = (frost$core$Bit) {_552};
_554 = _553.value;
if (_554) goto block87; else goto block88;
block87:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MemoryLayout.frost:89
_557 = *(&local3);
_558 = *(&local6);
_559 = *(&local7);
_560 = _558.value;
_561 = _559.value;
_562 = _560 - _561;
_563 = (frost$core$Int) {_562};
_564 = _557.value;
_565 = _563.value;
_566 = _564 + _565;
_567 = (frost$core$Int) {_566};
*(&local3) = _567;
goto block88;
block88:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MemoryLayout.frost:91
_571 = *(&local3);
_572 = *(&local6);
// begin inline call to function frost.core.Int.%(other:frost.core.Int):frost.core.Int from MemoryLayout.frost:91:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:198
_575 = _571.value;
_576 = _572.value;
_577 = _575 % _576;
_578 = (frost$core$Int) {_577};
_580 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from MemoryLayout.frost:91:38
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_583 = _578.value;
_584 = _580.value;
_585 = _583 == _584;
_586 = (frost$core$Bit) {_585};
_588 = _586.value;
if (_588) goto block91; else goto block92;
block92:;
_590 = (frost$core$Int) {91u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s62, _590);
abort(); // unreachable
block91:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MemoryLayout.frost:92
_594 = *(&local3);
_595 = *(&local6);
_596 = _594.value;
_597 = _595.value;
_598 = _596 + _597;
_599 = (frost$core$Int) {_598};
*(&local3) = _599;
goto block74;
block74:;
_602 = _381;
frost$core$Frost$unref$frost$core$Object$Q(_602);
_604 = *(&local4);
_605 = ((frost$core$Object*) _604);
frost$core$Frost$unref$frost$core$Object$Q(_605);
*(&local4) = ((org$frostlang$frostc$FieldDecl*) NULL);
goto block62;
block64:;
_609 = ((frost$core$Object*) _373);
frost$core$Frost$unref$frost$core$Object$Q(_609);
_611 = ((frost$core$Object*) _370);
frost$core$Frost$unref$frost$core$Object$Q(_611);
_613 = _356;
frost$core$Frost$unref$frost$core$Object$Q(_613);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MemoryLayout.frost:95
_616 = &param1->typeKind;
_617 = *_616;
org$frostlang$frostc$Type$Kind$wrapper* $tmp63;
$tmp63 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp63->value = _617;
_618 = ((frost$core$Equatable*) $tmp63);
_619 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from MemoryLayout.frost:95:34
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_622 = &(&local9)->$rawValue;
*_622 = _619;
_624 = *(&local9);
*(&local8) = _624;
_627 = *(&local8);
org$frostlang$frostc$Type$Kind$wrapper* $tmp64;
$tmp64 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp64->value = _627;
_628 = ((frost$core$Equatable*) $tmp64);
ITable* $tmp65 = _618->$class->itable;
while ($tmp65->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp65 = $tmp65->next;
}
_629 = $tmp65->methods[0];
_630 = _629(_618, _628);
_631 = _630.value;
_632 = ((frost$core$Object*) _628);
frost$core$Frost$unref$frost$core$Object$Q(_632);
_634 = ((frost$core$Object*) _618);
frost$core$Frost$unref$frost$core$Object$Q(_634);
if (_631) goto block93; else goto block94;
block93:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MemoryLayout.frost:96
_638 = *(&local3);
_639 = (frost$core$Int) {1u};
_640 = _638.value;
_641 = _639.value;
_642 = _640 + _641;
_643 = (frost$core$Int) {_642};
*(&local3) = _643;
goto block94;
block94:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MemoryLayout.frost:98
_647 = ($fn66) param0->$class->vtable[5];
_648 = _647(param0, param1);
*(&local10) = _648;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MemoryLayout.frost:99
_651 = *(&local3);
_652 = *(&local10);
// begin inline call to function frost.core.Int.%(other:frost.core.Int):frost.core.Int from MemoryLayout.frost:99:19
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:198
_655 = _651.value;
_656 = _652.value;
_657 = _655 % _656;
_658 = (frost$core$Int) {_657};
_660 = (frost$core$Int) {0u};
_661 = _658.value;
_662 = _660.value;
_663 = _661 != _662;
_664 = (frost$core$Bit) {_663};
_665 = _664.value;
if (_665) goto block96; else goto block97;
block96:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MemoryLayout.frost:100
_668 = *(&local3);
_669 = *(&local10);
_670 = *(&local3);
_671 = *(&local10);
// begin inline call to function frost.core.Int.%(other:frost.core.Int):frost.core.Int from MemoryLayout.frost:100:38
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:198
_674 = _670.value;
_675 = _671.value;
_676 = _674 % _675;
_677 = (frost$core$Int) {_676};
_679 = _669.value;
_680 = _677.value;
_681 = _679 - _680;
_682 = (frost$core$Int) {_681};
_683 = _668.value;
_684 = _682.value;
_685 = _683 + _684;
_686 = (frost$core$Int) {_685};
*(&local3) = _686;
goto block97;
block97:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MemoryLayout.frost:102
_690 = *(&local3);
_691 = *(&local2);
_692 = ((frost$core$Object*) _691);
frost$core$Frost$unref$frost$core$Object$Q(_692);
*(&local2) = ((org$frostlang$frostc$ClassDecl*) NULL);
return _690;

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
$fn67 _11;
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
$fn68 _102;
frost$core$Int _103;
org$frostlang$frostc$ClassDecl* _104;
frost$core$Object* _105;
org$frostlang$frostc$ClassDecl* _110;
bool _111;
frost$core$Bit _112;
bool _113;
frost$core$Int _115;
org$frostlang$frostc$ClassDecl* _118;
frost$core$String** _119;
frost$core$String* _120;
frost$core$Bit _121;
bool _122;
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
org$frostlang$frostc$Compiler* _145;
org$frostlang$frostc$ClassDecl* _146;
bool _147;
frost$core$Bit _148;
bool _149;
frost$core$Int _151;
org$frostlang$frostc$ClassDecl* _154;
frost$core$Bit _155;
bool _158;
bool _159;
frost$core$Bit _160;
bool _162;
frost$core$Object* _163;
$fn69 _167;
frost$core$Int _168;
org$frostlang$frostc$ClassDecl* _169;
frost$core$Object* _170;
frost$collections$IdentityMap** _175;
frost$collections$IdentityMap* _176;
org$frostlang$frostc$ClassDecl* _177;
bool _178;
frost$core$Bit _179;
bool _180;
frost$core$Int _182;
org$frostlang$frostc$ClassDecl* _185;
frost$core$Object* _186;
frost$core$Object* _187;
frost$core$Int$nullable _188;
frost$core$Object* _190;
frost$core$Int$nullable _193;
bool _194;
frost$core$Bit _195;
bool _196;
frost$core$Int$nullable _199;
bool _200;
frost$core$Bit _201;
bool _202;
frost$core$Int _204;
frost$core$Int _207;
org$frostlang$frostc$ClassDecl* _208;
frost$core$Object* _209;
frost$core$Int _214;
frost$core$Weak** _217;
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
org$frostlang$frostc$ClassDecl* _239;
bool _240;
frost$core$Bit _241;
bool _242;
frost$core$Int _244;
org$frostlang$frostc$ClassDecl* _247;
frost$collections$ListView* _248;
frost$collections$Iterable* _249;
$fn70 _250;
frost$collections$Iterator* _251;
$fn71 _253;
frost$core$Bit _254;
bool _255;
$fn72 _258;
frost$core$Object* _259;
org$frostlang$frostc$FieldDecl* _260;
frost$core$Object* _261;
org$frostlang$frostc$FieldDecl* _263;
frost$core$Object* _264;
frost$core$Weak** _268;
frost$core$Weak* _269;
frost$core$Bit* _274;
frost$core$Bit _275;
bool _277;
frost$core$Int _279;
frost$core$Object** _283;
frost$core$Object* _284;
frost$core$Object* _285;
frost$core$Object* _286;
org$frostlang$frostc$Compiler* _289;
org$frostlang$frostc$FieldDecl* _290;
frost$core$Bit _291;
bool _294;
bool _295;
frost$core$Bit _296;
bool _298;
frost$core$Object* _299;
frost$core$Object* _303;
org$frostlang$frostc$FieldDecl* _305;
frost$core$Object* _306;
org$frostlang$frostc$FieldDecl* _311;
org$frostlang$frostc$Type** _312;
org$frostlang$frostc$Type* _313;
frost$core$Weak** _314;
frost$core$Weak* _315;
frost$core$Bit* _320;
frost$core$Bit _321;
bool _323;
frost$core$Int _325;
frost$core$Object** _329;
frost$core$Object* _330;
frost$core$Object* _331;
frost$core$Object* _332;
org$frostlang$frostc$Compiler* _335;
org$frostlang$frostc$Type** _336;
org$frostlang$frostc$Type* _337;
org$frostlang$frostc$Symbol* _340;
frost$core$String** _341;
frost$core$String* _342;
org$frostlang$frostc$Symbol* _343;
frost$core$String** _344;
frost$core$String* _345;
frost$core$Bit _346;
bool _347;
org$frostlang$frostc$Type$Kind* _349;
org$frostlang$frostc$Type$Kind _350;
frost$core$Equatable* _351;
org$frostlang$frostc$Type$Kind* _352;
org$frostlang$frostc$Type$Kind _353;
frost$core$Equatable* _354;
$fn73 _355;
frost$core$Bit _356;
frost$core$Object* _357;
frost$core$Object* _359;
frost$core$Bit _365;
bool _367;
frost$core$Object* _368;
frost$core$Int _372;
frost$core$Int _373;
int64_t _376;
int64_t _377;
bool _378;
frost$core$Bit _379;
bool _380;
int64_t _383;
frost$core$Int _384;
int64_t _388;
frost$core$Int _389;
frost$core$Int _392;
frost$core$Int _397;
org$frostlang$frostc$FieldDecl* _398;
org$frostlang$frostc$Type** _399;
org$frostlang$frostc$Type* _400;
$fn74 _401;
frost$core$Int _402;
int64_t _405;
int64_t _406;
bool _407;
frost$core$Bit _408;
bool _409;
int64_t _412;
frost$core$Int _413;
int64_t _417;
frost$core$Int _418;
frost$core$Int _421;
frost$core$Object* _424;
org$frostlang$frostc$FieldDecl* _426;
frost$core$Object* _427;
frost$core$Object* _431;
frost$core$Object* _433;
frost$core$Object* _435;
frost$collections$IdentityMap** _438;
frost$collections$IdentityMap* _439;
org$frostlang$frostc$ClassDecl* _440;
bool _441;
frost$core$Bit _442;
bool _443;
frost$core$Int _445;
org$frostlang$frostc$ClassDecl* _448;
frost$core$Object* _449;
frost$core$Int _450;
frost$core$Object* _451;
frost$core$Object* _453;
frost$core$Int _456;
org$frostlang$frostc$ClassDecl* _457;
frost$core$Object* _458;
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
_11 = ($fn75) param0->$class->vtable[4];
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
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s76, _26, &$s77);
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
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s78, _55);
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
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s79, _70, &$s80);
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
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s81, _86, &$s82);
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
_102 = ($fn83) param0->$class->vtable[3];
_103 = _102(param0);
_104 = *(&local0);
_105 = ((frost$core$Object*) _104);
frost$core$Frost$unref$frost$core$Object$Q(_105);
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return _103;
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MemoryLayout.frost:114
_110 = *(&local0);
_111 = _110 != NULL;
_112 = (frost$core$Bit) {_111};
_113 = _112.value;
if (_113) goto block22; else goto block23;
block23:;
_115 = (frost$core$Int) {114u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s84, _115, &$s85);
abort(); // unreachable
block22:;
_118 = _110;
_119 = &_118->name;
_120 = *_119;
_121 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(_120, &$s86);
_122 = _121.value;
if (_122) goto block19; else goto block21;
block21:;
_124 = &param0->compiler;
_125 = *_124;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from MemoryLayout.frost:114:48
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
_130 = &_125->_valid;
_131 = *_130;
_133 = _131.value;
if (_133) goto block26; else goto block27;
block27:;
_135 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s87, _135, &$s88);
abort(); // unreachable
block26:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
_139 = &_125->value;
_140 = *_139;
_141 = _140;
_142 = _141;
frost$core$Frost$ref$frost$core$Object$Q(_142);
_145 = ((org$frostlang$frostc$Compiler*) _141);
_146 = *(&local0);
_147 = _146 != NULL;
_148 = (frost$core$Bit) {_147};
_149 = _148.value;
if (_149) goto block28; else goto block29;
block29:;
_151 = (frost$core$Int) {114u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s89, _151, &$s90);
abort(); // unreachable
block28:;
_154 = _146;
_155 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$ClassDecl$R$frost$core$Bit(_145, _154);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from MemoryLayout.frost:114:47
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
_158 = _155.value;
_159 = !_158;
_160 = (frost$core$Bit) {_159};
_162 = _160.value;
_163 = _141;
frost$core$Frost$unref$frost$core$Object$Q(_163);
if (_162) goto block19; else goto block20;
block19:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MemoryLayout.frost:115
_167 = ($fn91) param0->$class->vtable[3];
_168 = _167(param0);
_169 = *(&local0);
_170 = ((frost$core$Object*) _169);
frost$core$Frost$unref$frost$core$Object$Q(_170);
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return _168;
block20:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MemoryLayout.frost:117
_175 = &param0->alignments;
_176 = *_175;
_177 = *(&local0);
_178 = _177 != NULL;
_179 = (frost$core$Bit) {_178};
_180 = _179.value;
if (_180) goto block31; else goto block32;
block32:;
_182 = (frost$core$Int) {117u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s92, _182, &$s93);
abort(); // unreachable
block31:;
_185 = _177;
_186 = ((frost$core$Object*) _185);
_187 = frost$collections$IdentityMap$$IDX$frost$collections$IdentityMap$K$R$frost$collections$IdentityMap$V$Q(_176, _186);
_188 = (_187 != NULL ? ((frost$core$Int$nullable) { ((frost$core$Int$wrapper*) _187)->value, true }) : (frost$core$Int$nullable) { .nonnull = 0 });
*(&local1) = _188;
_190 = _187;
frost$core$Frost$unref$frost$core$Object$Q(_190);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MemoryLayout.frost:118
_193 = *(&local1);
_194 = _193.nonnull;
_195 = (frost$core$Bit) {_194};
_196 = _195.value;
if (_196) goto block33; else goto block34;
block33:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MemoryLayout.frost:119
_199 = *(&local1);
_200 = _199.nonnull;
_201 = (frost$core$Bit) {_200};
_202 = _201.value;
if (_202) goto block35; else goto block36;
block36:;
_204 = (frost$core$Int) {119u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s94, _204, &$s95);
abort(); // unreachable
block35:;
_207 = ((frost$core$Int) _199.value);
_208 = *(&local0);
_209 = ((frost$core$Object*) _208);
frost$core$Frost$unref$frost$core$Object$Q(_209);
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return _207;
block34:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MemoryLayout.frost:121
_214 = (frost$core$Int) {0u};
*(&local2) = _214;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MemoryLayout.frost:122
_217 = &param0->compiler;
_218 = *_217;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from MemoryLayout.frost:122:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
_223 = &_218->_valid;
_224 = *_223;
_226 = _224.value;
if (_226) goto block39; else goto block40;
block40:;
_228 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s96, _228, &$s97);
abort(); // unreachable
block39:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
_232 = &_218->value;
_233 = *_232;
_234 = _233;
_235 = _234;
frost$core$Frost$ref$frost$core$Object$Q(_235);
_238 = ((org$frostlang$frostc$Compiler*) _234);
_239 = *(&local0);
_240 = _239 != NULL;
_241 = (frost$core$Bit) {_240};
_242 = _241.value;
if (_242) goto block41; else goto block42;
block42:;
_244 = (frost$core$Int) {122u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s98, _244, &$s99);
abort(); // unreachable
block41:;
_247 = _239;
_248 = org$frostlang$frostc$Compiler$instanceFields$org$frostlang$frostc$ClassDecl$R$frost$collections$ListView$LTorg$frostlang$frostc$FieldDecl$GT(_238, _247);
_249 = ((frost$collections$Iterable*) _248);
ITable* $tmp100 = _249->$class->itable;
while ($tmp100->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp100 = $tmp100->next;
}
_250 = $tmp100->methods[0];
_251 = _250(_249);
goto block43;
block43:;
ITable* $tmp101 = _251->$class->itable;
while ($tmp101->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp101 = $tmp101->next;
}
_253 = $tmp101->methods[0];
_254 = _253(_251);
_255 = _254.value;
if (_255) goto block45; else goto block44;
block44:;
*(&local3) = ((org$frostlang$frostc$FieldDecl*) NULL);
ITable* $tmp102 = _251->$class->itable;
while ($tmp102->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp102 = $tmp102->next;
}
_258 = $tmp102->methods[1];
_259 = _258(_251);
_260 = ((org$frostlang$frostc$FieldDecl*) _259);
_261 = ((frost$core$Object*) _260);
frost$core$Frost$ref$frost$core$Object$Q(_261);
_263 = *(&local3);
_264 = ((frost$core$Object*) _263);
frost$core$Frost$unref$frost$core$Object$Q(_264);
*(&local3) = _260;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MemoryLayout.frost:123
_268 = &param0->compiler;
_269 = *_268;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from MemoryLayout.frost:123:17
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
_274 = &_269->_valid;
_275 = *_274;
_277 = _275.value;
if (_277) goto block50; else goto block51;
block51:;
_279 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s103, _279, &$s104);
abort(); // unreachable
block50:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
_283 = &_269->value;
_284 = *_283;
_285 = _284;
_286 = _285;
frost$core$Frost$ref$frost$core$Object$Q(_286);
_289 = ((org$frostlang$frostc$Compiler*) _285);
_290 = *(&local3);
_291 = org$frostlang$frostc$Compiler$resolve$org$frostlang$frostc$FieldDecl$R$frost$core$Bit(_289, _290);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from MemoryLayout.frost:123:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
_294 = _291.value;
_295 = !_294;
_296 = (frost$core$Bit) {_295};
_298 = _296.value;
_299 = _285;
frost$core$Frost$unref$frost$core$Object$Q(_299);
if (_298) goto block46; else goto block47;
block46:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MemoryLayout.frost:124
_303 = _259;
frost$core$Frost$unref$frost$core$Object$Q(_303);
_305 = *(&local3);
_306 = ((frost$core$Object*) _305);
frost$core$Frost$unref$frost$core$Object$Q(_306);
*(&local3) = ((org$frostlang$frostc$FieldDecl*) NULL);
goto block43;
block47:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MemoryLayout.frost:126
_311 = *(&local3);
_312 = &_311->type;
_313 = *_312;
_314 = &param0->compiler;
_315 = *_314;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from MemoryLayout.frost:126:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
_320 = &_315->_valid;
_321 = *_320;
_323 = _321.value;
if (_323) goto block58; else goto block59;
block59:;
_325 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s105, _325, &$s106);
abort(); // unreachable
block58:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
_329 = &_315->value;
_330 = *_329;
_331 = _330;
_332 = _331;
frost$core$Frost$ref$frost$core$Object$Q(_332);
_335 = ((org$frostlang$frostc$Compiler*) _331);
_336 = &_335->CHOICE_DATA_TYPE;
_337 = *_336;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from MemoryLayout.frost:126:23
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:258
_340 = ((org$frostlang$frostc$Symbol*) _313);
_341 = &_340->name;
_342 = *_341;
_343 = ((org$frostlang$frostc$Symbol*) _337);
_344 = &_343->name;
_345 = *_344;
_346 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(_342, _345);
_347 = _346.value;
if (_347) goto block61; else goto block62;
block61:;
_349 = &_313->typeKind;
_350 = *_349;
org$frostlang$frostc$Type$Kind$wrapper* $tmp107;
$tmp107 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp107->value = _350;
_351 = ((frost$core$Equatable*) $tmp107);
_352 = &_337->typeKind;
_353 = *_352;
org$frostlang$frostc$Type$Kind$wrapper* $tmp108;
$tmp108 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp108->value = _353;
_354 = ((frost$core$Equatable*) $tmp108);
ITable* $tmp109 = _351->$class->itable;
while ($tmp109->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp109 = $tmp109->next;
}
_355 = $tmp109->methods[0];
_356 = _355(_351, _354);
_357 = ((frost$core$Object*) _354);
frost$core$Frost$unref$frost$core$Object$Q(_357);
_359 = ((frost$core$Object*) _351);
frost$core$Frost$unref$frost$core$Object$Q(_359);
*(&local4) = _356;
goto block63;
block62:;
*(&local4) = _346;
goto block63;
block63:;
_365 = *(&local4);
_367 = _365.value;
_368 = _331;
frost$core$Frost$unref$frost$core$Object$Q(_368);
if (_367) goto block53; else goto block55;
block53:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MemoryLayout.frost:128
_372 = *(&local2);
_373 = (frost$core$Int) {8u};
// begin inline call to function frost.core.Int.max(other:frost.core.Int):frost.core.Int from MemoryLayout.frost:128:37
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:858
_376 = _372.value;
_377 = _373.value;
_378 = _376 > _377;
_379 = (frost$core$Bit) {_378};
_380 = _379.value;
if (_380) goto block65; else goto block66;
block65:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:859
_383 = _372.value;
_384 = (frost$core$Int) {_383};
*(&local5) = _384;
goto block64;
block66:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:861
_388 = _373.value;
_389 = (frost$core$Int) {_388};
*(&local5) = _389;
goto block64;
block64:;
_392 = *(&local5);
*(&local2) = _392;
goto block54;
block55:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MemoryLayout.frost:131
_397 = *(&local2);
_398 = *(&local3);
_399 = &_398->type;
_400 = *_399;
_401 = ($fn110) param0->$class->vtable[5];
_402 = _401(param0, _400);
// begin inline call to function frost.core.Int.max(other:frost.core.Int):frost.core.Int from MemoryLayout.frost:131:37
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:858
_405 = _397.value;
_406 = _402.value;
_407 = _405 > _406;
_408 = (frost$core$Bit) {_407};
_409 = _408.value;
if (_409) goto block68; else goto block69;
block68:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:859
_412 = _397.value;
_413 = (frost$core$Int) {_412};
*(&local6) = _413;
goto block67;
block69:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:861
_417 = _402.value;
_418 = (frost$core$Int) {_417};
*(&local6) = _418;
goto block67;
block67:;
_421 = *(&local6);
*(&local2) = _421;
goto block54;
block54:;
_424 = _259;
frost$core$Frost$unref$frost$core$Object$Q(_424);
_426 = *(&local3);
_427 = ((frost$core$Object*) _426);
frost$core$Frost$unref$frost$core$Object$Q(_427);
*(&local3) = ((org$frostlang$frostc$FieldDecl*) NULL);
goto block43;
block45:;
_431 = ((frost$core$Object*) _251);
frost$core$Frost$unref$frost$core$Object$Q(_431);
_433 = ((frost$core$Object*) _248);
frost$core$Frost$unref$frost$core$Object$Q(_433);
_435 = _234;
frost$core$Frost$unref$frost$core$Object$Q(_435);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MemoryLayout.frost:134
_438 = &param0->alignments;
_439 = *_438;
_440 = *(&local0);
_441 = _440 != NULL;
_442 = (frost$core$Bit) {_441};
_443 = _442.value;
if (_443) goto block70; else goto block71;
block71:;
_445 = (frost$core$Int) {134u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s111, _445, &$s112);
abort(); // unreachable
block70:;
_448 = _440;
_449 = ((frost$core$Object*) _448);
_450 = *(&local2);
frost$core$Int$wrapper* $tmp113;
$tmp113 = (frost$core$Int$wrapper*) frostObjectAlloc(sizeof(frost$core$Int$wrapper), (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp113->value = _450;
_451 = ((frost$core$Object*) $tmp113);
frost$collections$IdentityMap$$IDXEQ$frost$collections$IdentityMap$K$frost$collections$IdentityMap$V(_439, _449, _451);
_453 = _451;
frost$core$Frost$unref$frost$core$Object$Q(_453);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MemoryLayout.frost:135
_456 = *(&local2);
_457 = *(&local0);
_458 = ((frost$core$Object*) _457);
frost$core$Frost$unref$frost$core$Object$Q(_458);
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return _456;

}
void org$frostlang$frostc$MemoryLayout$computeLayout$org$frostlang$frostc$ClassDecl(void* rawSelf, org$frostlang$frostc$ClassDecl* param1) {
org$frostlang$frostc$MemoryLayout* param0 = (org$frostlang$frostc$MemoryLayout*) rawSelf;

org$frostlang$frostc$Type** _1;
org$frostlang$frostc$Type* _2;
$fn114 _3;
frost$core$Int _4;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MemoryLayout.frost:139
_1 = &param1->type;
_2 = *_1;
_3 = ($fn115) param0->$class->vtable[7];
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
$fn116 _11;
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
org$frostlang$frostc$ClassDecl* _59;
bool _60;
frost$core$Bit _61;
bool _62;
frost$core$Int _64;
org$frostlang$frostc$ClassDecl* _67;
org$frostlang$frostc$Compiler$Resolution* _68;
org$frostlang$frostc$Compiler$Resolution _69;
frost$core$Equatable* _70;
frost$core$Int _71;
frost$core$Int* _74;
org$frostlang$frostc$Compiler$Resolution _76;
org$frostlang$frostc$Compiler$Resolution _79;
frost$core$Equatable* _80;
$fn117 _81;
frost$core$Bit _82;
bool _83;
frost$core$Int _85;
org$frostlang$frostc$ClassDecl* _86;
bool _87;
frost$core$Bit _88;
bool _89;
frost$core$Int _91;
org$frostlang$frostc$ClassDecl* _94;
frost$core$String** _95;
frost$core$String* _96;
frost$core$String* _97;
frost$core$String* _98;
frost$core$Object* _100;
frost$core$Object* _102;
frost$core$Object* _105;
frost$core$Object* _107;
org$frostlang$frostc$ClassDecl* _110;
bool _111;
frost$core$Bit _112;
bool _113;
frost$core$Int _115;
org$frostlang$frostc$ClassDecl* _118;
frost$core$String** _119;
frost$core$String* _120;
frost$core$Bit _121;
bool _122;
$fn118 _125;
frost$core$Int _126;
org$frostlang$frostc$ClassDecl* _127;
frost$core$Object* _128;
frost$collections$IdentityMap** _133;
frost$collections$IdentityMap* _134;
org$frostlang$frostc$ClassDecl* _135;
bool _136;
frost$core$Bit _137;
bool _138;
frost$core$Int _140;
org$frostlang$frostc$ClassDecl* _143;
frost$core$Object* _144;
frost$core$Object* _145;
frost$core$Int$nullable _146;
frost$core$Object* _148;
frost$core$Int$nullable _151;
bool _152;
frost$core$Bit _153;
bool _154;
frost$core$Int$nullable _157;
bool _158;
frost$core$Bit _159;
bool _160;
frost$core$Int _162;
frost$core$Int _165;
org$frostlang$frostc$ClassDecl* _166;
frost$core$Object* _167;
frost$core$Int _172;
frost$core$Weak** _175;
frost$core$Weak* _176;
frost$core$Bit* _181;
frost$core$Bit _182;
bool _184;
frost$core$Int _186;
frost$core$Object** _190;
frost$core$Object* _191;
frost$core$Object* _192;
frost$core$Object* _193;
org$frostlang$frostc$Compiler* _196;
org$frostlang$frostc$ClassDecl* _197;
bool _198;
frost$core$Bit _199;
bool _200;
frost$core$Int _202;
org$frostlang$frostc$ClassDecl* _205;
frost$collections$ListView* _206;
frost$collections$Iterable* _207;
$fn119 _208;
frost$collections$Iterator* _209;
$fn120 _211;
frost$core$Bit _212;
bool _213;
$fn121 _216;
frost$core$Object* _217;
org$frostlang$frostc$FieldDecl* _218;
frost$core$Object* _219;
org$frostlang$frostc$FieldDecl* _221;
frost$core$Object* _222;
frost$core$Weak** _226;
frost$core$Weak* _227;
frost$core$Bit* _232;
frost$core$Bit _233;
bool _235;
frost$core$Int _237;
frost$core$Object** _241;
frost$core$Object* _242;
frost$core$Object* _243;
frost$core$Object* _244;
org$frostlang$frostc$Compiler* _247;
org$frostlang$frostc$FieldDecl* _248;
frost$core$Bit _249;
bool _252;
bool _253;
frost$core$Bit _254;
bool _256;
frost$core$Object* _257;
frost$core$Object* _261;
org$frostlang$frostc$FieldDecl* _263;
frost$core$Object* _264;
org$frostlang$frostc$FieldDecl* _269;
org$frostlang$frostc$Type** _270;
org$frostlang$frostc$Type* _271;
frost$core$Weak** _272;
frost$core$Weak* _273;
frost$core$Bit* _278;
frost$core$Bit _279;
bool _281;
frost$core$Int _283;
frost$core$Object** _287;
frost$core$Object* _288;
frost$core$Object* _289;
frost$core$Object* _290;
org$frostlang$frostc$Compiler* _293;
org$frostlang$frostc$Type** _294;
org$frostlang$frostc$Type* _295;
org$frostlang$frostc$Symbol* _298;
frost$core$String** _299;
frost$core$String* _300;
org$frostlang$frostc$Symbol* _301;
frost$core$String** _302;
frost$core$String* _303;
frost$core$Bit _304;
bool _305;
org$frostlang$frostc$Type$Kind* _307;
org$frostlang$frostc$Type$Kind _308;
frost$core$Equatable* _309;
org$frostlang$frostc$Type$Kind* _310;
org$frostlang$frostc$Type$Kind _311;
frost$core$Equatable* _312;
$fn122 _313;
frost$core$Bit _314;
frost$core$Object* _315;
frost$core$Object* _317;
frost$core$Bit _323;
bool _325;
frost$core$Object* _326;
frost$core$Int _330;
org$frostlang$frostc$ClassDecl* _331;
bool _332;
frost$core$Bit _333;
bool _334;
frost$core$Int _336;
org$frostlang$frostc$ClassDecl* _339;
$fn123 _340;
frost$core$Int _341;
int64_t _342;
int64_t _343;
int64_t _344;
frost$core$Int _345;
org$frostlang$frostc$FieldDecl* _350;
org$frostlang$frostc$Type** _351;
org$frostlang$frostc$Type* _352;
$fn124 _353;
frost$core$Int _354;
frost$core$Int _357;
frost$core$Int _358;
int64_t _361;
int64_t _362;
int64_t _363;
frost$core$Int _364;
frost$core$Int _366;
int64_t _367;
int64_t _368;
bool _369;
frost$core$Bit _370;
bool _371;
frost$core$Int _374;
frost$core$Int _375;
frost$core$Int _376;
frost$core$Int _377;
int64_t _380;
int64_t _381;
int64_t _382;
frost$core$Int _383;
int64_t _385;
int64_t _386;
int64_t _387;
frost$core$Int _388;
int64_t _389;
int64_t _390;
int64_t _391;
frost$core$Int _392;
frost$core$Int _396;
org$frostlang$frostc$FieldDecl* _397;
org$frostlang$frostc$Type** _398;
org$frostlang$frostc$Type* _399;
$fn125 _400;
frost$core$Int _401;
int64_t _404;
int64_t _405;
int64_t _406;
frost$core$Int _407;
frost$core$Int _409;
int64_t _412;
int64_t _413;
bool _414;
frost$core$Bit _415;
bool _417;
frost$core$Int _419;
org$frostlang$frostc$FieldDecl* _420;
frost$core$Object* _421;
$fn126 _424;
frost$core$String* _425;
frost$core$String* _426;
frost$core$Object* _427;
frost$core$Object* _429;
frost$core$Object* _431;
frost$core$String* _434;
org$frostlang$frostc$FieldDecl* _435;
org$frostlang$frostc$Type** _436;
org$frostlang$frostc$Type* _437;
frost$core$Object* _438;
$fn127 _441;
frost$core$String* _442;
frost$core$String* _443;
frost$core$Object* _444;
frost$core$Object* _446;
frost$core$Object* _448;
frost$core$String* _451;
frost$core$Int _452;
frost$core$Object* _453;
$fn128 _456;
frost$core$String* _457;
frost$core$String* _458;
frost$core$Object* _459;
frost$core$Object* _461;
frost$core$Object* _463;
frost$core$String* _466;
frost$core$Object* _468;
frost$core$Object* _470;
frost$core$Object* _472;
frost$core$Object* _474;
frost$core$Object* _476;
frost$core$Object* _478;
frost$core$Object* _480;
org$frostlang$frostc$FieldDecl* _484;
frost$core$Int _485;
frost$core$Int* _486;
frost$core$Int _489;
org$frostlang$frostc$FieldDecl* _490;
org$frostlang$frostc$Type** _491;
org$frostlang$frostc$Type* _492;
$fn129 _493;
frost$core$Int _494;
int64_t _495;
int64_t _496;
int64_t _497;
frost$core$Int _498;
frost$core$Object* _501;
org$frostlang$frostc$FieldDecl* _503;
frost$core$Object* _504;
frost$core$Object* _508;
frost$core$Object* _510;
frost$core$Object* _512;
frost$core$Weak** _515;
frost$core$Weak* _516;
frost$core$Bit* _521;
frost$core$Bit _522;
bool _524;
frost$core$Int _526;
frost$core$Object** _530;
frost$core$Object* _531;
frost$core$Object* _532;
frost$core$Object* _533;
org$frostlang$frostc$Compiler* _536;
org$frostlang$frostc$ClassDecl* _537;
bool _538;
frost$core$Bit _539;
bool _540;
frost$core$Int _542;
org$frostlang$frostc$ClassDecl* _545;
frost$core$Bit _546;
bool _547;
frost$core$Object* _548;
org$frostlang$frostc$Type$Kind* _551;
org$frostlang$frostc$Type$Kind _552;
frost$core$Equatable* _553;
frost$core$Int _554;
frost$core$Int* _557;
org$frostlang$frostc$Type$Kind _559;
org$frostlang$frostc$Type$Kind _562;
frost$core$Equatable* _563;
$fn130 _564;
frost$core$Bit _565;
bool _566;
frost$core$Object* _567;
frost$core$Object* _569;
frost$core$Int _573;
frost$core$Int _574;
int64_t _575;
int64_t _576;
int64_t _577;
frost$core$Int _578;
$fn131 _582;
frost$core$Int _583;
frost$core$Int _586;
frost$core$Int _587;
int64_t _590;
int64_t _591;
int64_t _592;
frost$core$Int _593;
frost$core$Int _595;
int64_t _596;
int64_t _597;
bool _598;
frost$core$Bit _599;
bool _600;
frost$core$Int _603;
frost$core$Int _604;
frost$core$Int _605;
frost$core$Int _606;
int64_t _609;
int64_t _610;
int64_t _611;
frost$core$Int _612;
int64_t _614;
int64_t _615;
int64_t _616;
frost$core$Int _617;
int64_t _618;
int64_t _619;
int64_t _620;
frost$core$Int _621;
frost$collections$IdentityMap** _625;
frost$collections$IdentityMap* _626;
org$frostlang$frostc$ClassDecl* _627;
bool _628;
frost$core$Bit _629;
bool _630;
frost$core$Int _632;
org$frostlang$frostc$ClassDecl* _635;
frost$core$Object* _636;
frost$core$Int _637;
frost$core$Object* _638;
frost$core$Object* _640;
frost$core$Int _643;
org$frostlang$frostc$ClassDecl* _644;
frost$core$Object* _645;
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
_11 = ($fn132) param0->$class->vtable[4];
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
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s133, _26, &$s134);
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
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s135, _55);
abort(); // unreachable
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MemoryLayout.frost:148
_59 = *(&local0);
_60 = _59 != NULL;
_61 = (frost$core$Bit) {_60};
_62 = _61.value;
if (_62) goto block10; else goto block11;
block11:;
_64 = (frost$core$Int) {148u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s136, _64, &$s137);
abort(); // unreachable
block10:;
_67 = _59;
_68 = &_67->resolved;
_69 = *_68;
org$frostlang$frostc$Compiler$Resolution$wrapper* $tmp138;
$tmp138 = (org$frostlang$frostc$Compiler$Resolution$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Compiler$Resolution$wrapper), (frost$core$Class*) &org$frostlang$frostc$Compiler$Resolution$wrapperclass);
$tmp138->value = _69;
_70 = ((frost$core$Equatable*) $tmp138);
_71 = (frost$core$Int) {2u};
// begin inline call to org.frostlang.frostc.Compiler.Resolution.init(rv:frost.core.Int):org.frostlang.frostc.Compiler.Resolution from MemoryLayout.frost:148:49
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:44
_74 = &(&local2)->$rawValue;
*_74 = _71;
_76 = *(&local2);
*(&local1) = _76;
_79 = *(&local1);
org$frostlang$frostc$Compiler$Resolution$wrapper* $tmp139;
$tmp139 = (org$frostlang$frostc$Compiler$Resolution$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Compiler$Resolution$wrapper), (frost$core$Class*) &org$frostlang$frostc$Compiler$Resolution$wrapperclass);
$tmp139->value = _79;
_80 = ((frost$core$Equatable*) $tmp139);
ITable* $tmp140 = _70->$class->itable;
while ($tmp140->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp140 = $tmp140->next;
}
_81 = $tmp140->methods[0];
_82 = _81(_70, _80);
_83 = _82.value;
if (_83) goto block13; else goto block14;
block14:;
_85 = (frost$core$Int) {148u};
_86 = *(&local0);
_87 = _86 != NULL;
_88 = (frost$core$Bit) {_87};
_89 = _88.value;
if (_89) goto block15; else goto block16;
block16:;
_91 = (frost$core$Int) {149u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s141, _91, &$s142);
abort(); // unreachable
block15:;
_94 = _86;
_95 = &_94->name;
_96 = *_95;
_97 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s143, _96);
_98 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_97, &$s144);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s145, _85, _98);
_100 = ((frost$core$Object*) _98);
frost$core$Frost$unref$frost$core$Object$Q(_100);
_102 = ((frost$core$Object*) _97);
frost$core$Frost$unref$frost$core$Object$Q(_102);
abort(); // unreachable
block13:;
_105 = ((frost$core$Object*) _80);
frost$core$Frost$unref$frost$core$Object$Q(_105);
_107 = ((frost$core$Object*) _70);
frost$core$Frost$unref$frost$core$Object$Q(_107);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MemoryLayout.frost:150
_110 = *(&local0);
_111 = _110 != NULL;
_112 = (frost$core$Bit) {_111};
_113 = _112.value;
if (_113) goto block19; else goto block20;
block20:;
_115 = (frost$core$Int) {150u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s146, _115, &$s147);
abort(); // unreachable
block19:;
_118 = _110;
_119 = &_118->name;
_120 = *_119;
_121 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(_120, &$s148);
_122 = _121.value;
if (_122) goto block17; else goto block18;
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MemoryLayout.frost:151
_125 = ($fn149) param0->$class->vtable[3];
_126 = _125(param0);
_127 = *(&local0);
_128 = ((frost$core$Object*) _127);
frost$core$Frost$unref$frost$core$Object$Q(_128);
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return _126;
block18:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MemoryLayout.frost:153
_133 = &param0->sizes;
_134 = *_133;
_135 = *(&local0);
_136 = _135 != NULL;
_137 = (frost$core$Bit) {_136};
_138 = _137.value;
if (_138) goto block21; else goto block22;
block22:;
_140 = (frost$core$Int) {153u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s150, _140, &$s151);
abort(); // unreachable
block21:;
_143 = _135;
_144 = ((frost$core$Object*) _143);
_145 = frost$collections$IdentityMap$$IDX$frost$collections$IdentityMap$K$R$frost$collections$IdentityMap$V$Q(_134, _144);
_146 = (_145 != NULL ? ((frost$core$Int$nullable) { ((frost$core$Int$wrapper*) _145)->value, true }) : (frost$core$Int$nullable) { .nonnull = 0 });
*(&local3) = _146;
_148 = _145;
frost$core$Frost$unref$frost$core$Object$Q(_148);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MemoryLayout.frost:154
_151 = *(&local3);
_152 = _151.nonnull;
_153 = (frost$core$Bit) {_152};
_154 = _153.value;
if (_154) goto block23; else goto block24;
block23:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MemoryLayout.frost:155
_157 = *(&local3);
_158 = _157.nonnull;
_159 = (frost$core$Bit) {_158};
_160 = _159.value;
if (_160) goto block25; else goto block26;
block26:;
_162 = (frost$core$Int) {155u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s152, _162, &$s153);
abort(); // unreachable
block25:;
_165 = ((frost$core$Int) _157.value);
_166 = *(&local0);
_167 = ((frost$core$Object*) _166);
frost$core$Frost$unref$frost$core$Object$Q(_167);
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return _165;
block24:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MemoryLayout.frost:157
_172 = (frost$core$Int) {0u};
*(&local4) = _172;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MemoryLayout.frost:158
_175 = &param0->compiler;
_176 = *_175;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from MemoryLayout.frost:158:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
_181 = &_176->_valid;
_182 = *_181;
_184 = _182.value;
if (_184) goto block29; else goto block30;
block30:;
_186 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s154, _186, &$s155);
abort(); // unreachable
block29:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
_190 = &_176->value;
_191 = *_190;
_192 = _191;
_193 = _192;
frost$core$Frost$ref$frost$core$Object$Q(_193);
_196 = ((org$frostlang$frostc$Compiler*) _192);
_197 = *(&local0);
_198 = _197 != NULL;
_199 = (frost$core$Bit) {_198};
_200 = _199.value;
if (_200) goto block31; else goto block32;
block32:;
_202 = (frost$core$Int) {158u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s156, _202, &$s157);
abort(); // unreachable
block31:;
_205 = _197;
_206 = org$frostlang$frostc$Compiler$instanceFields$org$frostlang$frostc$ClassDecl$R$frost$collections$ListView$LTorg$frostlang$frostc$FieldDecl$GT(_196, _205);
_207 = ((frost$collections$Iterable*) _206);
ITable* $tmp158 = _207->$class->itable;
while ($tmp158->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp158 = $tmp158->next;
}
_208 = $tmp158->methods[0];
_209 = _208(_207);
goto block33;
block33:;
ITable* $tmp159 = _209->$class->itable;
while ($tmp159->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp159 = $tmp159->next;
}
_211 = $tmp159->methods[0];
_212 = _211(_209);
_213 = _212.value;
if (_213) goto block35; else goto block34;
block34:;
*(&local5) = ((org$frostlang$frostc$FieldDecl*) NULL);
ITable* $tmp160 = _209->$class->itable;
while ($tmp160->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp160 = $tmp160->next;
}
_216 = $tmp160->methods[1];
_217 = _216(_209);
_218 = ((org$frostlang$frostc$FieldDecl*) _217);
_219 = ((frost$core$Object*) _218);
frost$core$Frost$ref$frost$core$Object$Q(_219);
_221 = *(&local5);
_222 = ((frost$core$Object*) _221);
frost$core$Frost$unref$frost$core$Object$Q(_222);
*(&local5) = _218;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MemoryLayout.frost:159
_226 = &param0->compiler;
_227 = *_226;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from MemoryLayout.frost:159:17
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
_232 = &_227->_valid;
_233 = *_232;
_235 = _233.value;
if (_235) goto block40; else goto block41;
block41:;
_237 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s161, _237, &$s162);
abort(); // unreachable
block40:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
_241 = &_227->value;
_242 = *_241;
_243 = _242;
_244 = _243;
frost$core$Frost$ref$frost$core$Object$Q(_244);
_247 = ((org$frostlang$frostc$Compiler*) _243);
_248 = *(&local5);
_249 = org$frostlang$frostc$Compiler$resolve$org$frostlang$frostc$FieldDecl$R$frost$core$Bit(_247, _248);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from MemoryLayout.frost:159:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
_252 = _249.value;
_253 = !_252;
_254 = (frost$core$Bit) {_253};
_256 = _254.value;
_257 = _243;
frost$core$Frost$unref$frost$core$Object$Q(_257);
if (_256) goto block36; else goto block37;
block36:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MemoryLayout.frost:160
_261 = _217;
frost$core$Frost$unref$frost$core$Object$Q(_261);
_263 = *(&local5);
_264 = ((frost$core$Object*) _263);
frost$core$Frost$unref$frost$core$Object$Q(_264);
*(&local5) = ((org$frostlang$frostc$FieldDecl*) NULL);
goto block33;
block37:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MemoryLayout.frost:162
_269 = *(&local5);
_270 = &_269->type;
_271 = *_270;
_272 = &param0->compiler;
_273 = *_272;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from MemoryLayout.frost:162:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
_278 = &_273->_valid;
_279 = *_278;
_281 = _279.value;
if (_281) goto block48; else goto block49;
block49:;
_283 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s163, _283, &$s164);
abort(); // unreachable
block48:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
_287 = &_273->value;
_288 = *_287;
_289 = _288;
_290 = _289;
frost$core$Frost$ref$frost$core$Object$Q(_290);
_293 = ((org$frostlang$frostc$Compiler*) _289);
_294 = &_293->CHOICE_DATA_TYPE;
_295 = *_294;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from MemoryLayout.frost:162:23
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:258
_298 = ((org$frostlang$frostc$Symbol*) _271);
_299 = &_298->name;
_300 = *_299;
_301 = ((org$frostlang$frostc$Symbol*) _295);
_302 = &_301->name;
_303 = *_302;
_304 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(_300, _303);
_305 = _304.value;
if (_305) goto block51; else goto block52;
block51:;
_307 = &_271->typeKind;
_308 = *_307;
org$frostlang$frostc$Type$Kind$wrapper* $tmp165;
$tmp165 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp165->value = _308;
_309 = ((frost$core$Equatable*) $tmp165);
_310 = &_295->typeKind;
_311 = *_310;
org$frostlang$frostc$Type$Kind$wrapper* $tmp166;
$tmp166 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp166->value = _311;
_312 = ((frost$core$Equatable*) $tmp166);
ITable* $tmp167 = _309->$class->itable;
while ($tmp167->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp167 = $tmp167->next;
}
_313 = $tmp167->methods[0];
_314 = _313(_309, _312);
_315 = ((frost$core$Object*) _312);
frost$core$Frost$unref$frost$core$Object$Q(_315);
_317 = ((frost$core$Object*) _309);
frost$core$Frost$unref$frost$core$Object$Q(_317);
*(&local6) = _314;
goto block53;
block52:;
*(&local6) = _304;
goto block53;
block53:;
_323 = *(&local6);
_325 = _323.value;
_326 = _289;
frost$core$Frost$unref$frost$core$Object$Q(_326);
if (_325) goto block43; else goto block45;
block43:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MemoryLayout.frost:164
_330 = *(&local4);
_331 = *(&local0);
_332 = _331 != NULL;
_333 = (frost$core$Bit) {_332};
_334 = _333.value;
if (_334) goto block54; else goto block55;
block55:;
_336 = (frost$core$Int) {164u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s168, _336, &$s169);
abort(); // unreachable
block54:;
_339 = _331;
_340 = ($fn170) param0->$class->vtable[10];
_341 = _340(param0, _339);
_342 = _330.value;
_343 = _341.value;
_344 = _342 + _343;
_345 = (frost$core$Int) {_344};
*(&local4) = _345;
goto block44;
block45:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MemoryLayout.frost:167
_350 = *(&local5);
_351 = &_350->type;
_352 = *_351;
_353 = ($fn171) param0->$class->vtable[5];
_354 = _353(param0, _352);
*(&local7) = _354;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MemoryLayout.frost:168
_357 = *(&local4);
_358 = *(&local7);
// begin inline call to function frost.core.Int.%(other:frost.core.Int):frost.core.Int from MemoryLayout.frost:168:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:198
_361 = _357.value;
_362 = _358.value;
_363 = _361 % _362;
_364 = (frost$core$Int) {_363};
_366 = (frost$core$Int) {0u};
_367 = _364.value;
_368 = _366.value;
_369 = _367 != _368;
_370 = (frost$core$Bit) {_369};
_371 = _370.value;
if (_371) goto block56; else goto block57;
block56:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MemoryLayout.frost:169
_374 = *(&local4);
_375 = *(&local7);
_376 = *(&local4);
_377 = *(&local7);
// begin inline call to function frost.core.Int.%(other:frost.core.Int):frost.core.Int from MemoryLayout.frost:169:46
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:198
_380 = _376.value;
_381 = _377.value;
_382 = _380 % _381;
_383 = (frost$core$Int) {_382};
_385 = _375.value;
_386 = _383.value;
_387 = _385 - _386;
_388 = (frost$core$Int) {_387};
_389 = _374.value;
_390 = _388.value;
_391 = _389 + _390;
_392 = (frost$core$Int) {_391};
*(&local4) = _392;
goto block57;
block57:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MemoryLayout.frost:171
_396 = *(&local4);
_397 = *(&local5);
_398 = &_397->type;
_399 = *_398;
_400 = ($fn172) param0->$class->vtable[5];
_401 = _400(param0, _399);
// begin inline call to function frost.core.Int.%(other:frost.core.Int):frost.core.Int from MemoryLayout.frost:171:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:198
_404 = _396.value;
_405 = _401.value;
_406 = _404 % _405;
_407 = (frost$core$Int) {_406};
_409 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from MemoryLayout.frost:171:51
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_412 = _407.value;
_413 = _409.value;
_414 = _412 == _413;
_415 = (frost$core$Bit) {_414};
_417 = _415.value;
if (_417) goto block62; else goto block63;
block63:;
_419 = (frost$core$Int) {171u};
_420 = *(&local5);
_421 = ((frost$core$Object*) _420);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from MemoryLayout.frost:172:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
_424 = ($fn173) _421->$class->vtable[0];
_425 = _424(_421);
_426 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s174, _425);
_427 = ((frost$core$Object*) _426);
frost$core$Frost$ref$frost$core$Object$Q(_427);
_429 = ((frost$core$Object*) _426);
frost$core$Frost$unref$frost$core$Object$Q(_429);
_431 = ((frost$core$Object*) _425);
frost$core$Frost$unref$frost$core$Object$Q(_431);
_434 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_426, &$s175);
_435 = *(&local5);
_436 = &_435->type;
_437 = *_436;
_438 = ((frost$core$Object*) _437);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from MemoryLayout.frost:172:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
_441 = ($fn176) _438->$class->vtable[0];
_442 = _441(_438);
_443 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_434, _442);
_444 = ((frost$core$Object*) _443);
frost$core$Frost$ref$frost$core$Object$Q(_444);
_446 = ((frost$core$Object*) _443);
frost$core$Frost$unref$frost$core$Object$Q(_446);
_448 = ((frost$core$Object*) _442);
frost$core$Frost$unref$frost$core$Object$Q(_448);
_451 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_443, &$s177);
_452 = *(&local4);
frost$core$Int$wrapper* $tmp178;
$tmp178 = (frost$core$Int$wrapper*) frostObjectAlloc(sizeof(frost$core$Int$wrapper), (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp178->value = _452;
_453 = ((frost$core$Object*) $tmp178);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from MemoryLayout.frost:172:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
_456 = ($fn179) _453->$class->vtable[0];
_457 = _456(_453);
_458 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_451, _457);
_459 = ((frost$core$Object*) _458);
frost$core$Frost$ref$frost$core$Object$Q(_459);
_461 = ((frost$core$Object*) _458);
frost$core$Frost$unref$frost$core$Object$Q(_461);
_463 = ((frost$core$Object*) _457);
frost$core$Frost$unref$frost$core$Object$Q(_463);
_466 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_458, &$s180);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s181, _419, _466);
_468 = ((frost$core$Object*) _466);
frost$core$Frost$unref$frost$core$Object$Q(_468);
_470 = ((frost$core$Object*) _458);
frost$core$Frost$unref$frost$core$Object$Q(_470);
_472 = _453;
frost$core$Frost$unref$frost$core$Object$Q(_472);
_474 = ((frost$core$Object*) _451);
frost$core$Frost$unref$frost$core$Object$Q(_474);
_476 = ((frost$core$Object*) _443);
frost$core$Frost$unref$frost$core$Object$Q(_476);
_478 = ((frost$core$Object*) _434);
frost$core$Frost$unref$frost$core$Object$Q(_478);
_480 = ((frost$core$Object*) _426);
frost$core$Frost$unref$frost$core$Object$Q(_480);
abort(); // unreachable
block62:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MemoryLayout.frost:173
_484 = *(&local5);
_485 = *(&local4);
_486 = &_484->offset;
*_486 = _485;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MemoryLayout.frost:174
_489 = *(&local4);
_490 = *(&local5);
_491 = &_490->type;
_492 = *_491;
_493 = ($fn182) param0->$class->vtable[4];
_494 = _493(param0, _492);
_495 = _489.value;
_496 = _494.value;
_497 = _495 + _496;
_498 = (frost$core$Int) {_497};
*(&local4) = _498;
goto block44;
block44:;
_501 = _217;
frost$core$Frost$unref$frost$core$Object$Q(_501);
_503 = *(&local5);
_504 = ((frost$core$Object*) _503);
frost$core$Frost$unref$frost$core$Object$Q(_504);
*(&local5) = ((org$frostlang$frostc$FieldDecl*) NULL);
goto block33;
block35:;
_508 = ((frost$core$Object*) _209);
frost$core$Frost$unref$frost$core$Object$Q(_508);
_510 = ((frost$core$Object*) _206);
frost$core$Frost$unref$frost$core$Object$Q(_510);
_512 = _192;
frost$core$Frost$unref$frost$core$Object$Q(_512);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MemoryLayout.frost:177
_515 = &param0->compiler;
_516 = *_515;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from MemoryLayout.frost:177:12
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
_521 = &_516->_valid;
_522 = *_521;
_524 = _522.value;
if (_524) goto block72; else goto block73;
block73:;
_526 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s183, _526, &$s184);
abort(); // unreachable
block72:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
_530 = &_516->value;
_531 = *_530;
_532 = _531;
_533 = _532;
frost$core$Frost$ref$frost$core$Object$Q(_533);
_536 = ((org$frostlang$frostc$Compiler*) _532);
_537 = *(&local0);
_538 = _537 != NULL;
_539 = (frost$core$Bit) {_538};
_540 = _539.value;
if (_540) goto block74; else goto block75;
block75:;
_542 = (frost$core$Int) {177u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s185, _542, &$s186);
abort(); // unreachable
block74:;
_545 = _537;
_546 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$ClassDecl$R$frost$core$Bit(_536, _545);
_547 = _546.value;
_548 = _532;
frost$core$Frost$unref$frost$core$Object$Q(_548);
if (_547) goto block69; else goto block68;
block69:;
_551 = &param1->typeKind;
_552 = *_551;
org$frostlang$frostc$Type$Kind$wrapper* $tmp187;
$tmp187 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp187->value = _552;
_553 = ((frost$core$Equatable*) $tmp187);
_554 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from MemoryLayout.frost:177:57
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_557 = &(&local9)->$rawValue;
*_557 = _554;
_559 = *(&local9);
*(&local8) = _559;
_562 = *(&local8);
org$frostlang$frostc$Type$Kind$wrapper* $tmp188;
$tmp188 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp188->value = _562;
_563 = ((frost$core$Equatable*) $tmp188);
ITable* $tmp189 = _553->$class->itable;
while ($tmp189->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp189 = $tmp189->next;
}
_564 = $tmp189->methods[0];
_565 = _564(_553, _563);
_566 = _565.value;
_567 = ((frost$core$Object*) _563);
frost$core$Frost$unref$frost$core$Object$Q(_567);
_569 = ((frost$core$Object*) _553);
frost$core$Frost$unref$frost$core$Object$Q(_569);
if (_566) goto block67; else goto block68;
block67:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MemoryLayout.frost:178
_573 = *(&local4);
_574 = (frost$core$Int) {1u};
_575 = _573.value;
_576 = _574.value;
_577 = _575 + _576;
_578 = (frost$core$Int) {_577};
*(&local4) = _578;
goto block68;
block68:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MemoryLayout.frost:180
_582 = ($fn190) param0->$class->vtable[5];
_583 = _582(param0, param1);
*(&local10) = _583;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MemoryLayout.frost:181
_586 = *(&local4);
_587 = *(&local10);
// begin inline call to function frost.core.Int.%(other:frost.core.Int):frost.core.Int from MemoryLayout.frost:181:19
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:198
_590 = _586.value;
_591 = _587.value;
_592 = _590 % _591;
_593 = (frost$core$Int) {_592};
_595 = (frost$core$Int) {0u};
_596 = _593.value;
_597 = _595.value;
_598 = _596 != _597;
_599 = (frost$core$Bit) {_598};
_600 = _599.value;
if (_600) goto block77; else goto block78;
block77:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MemoryLayout.frost:182
_603 = *(&local4);
_604 = *(&local10);
_605 = *(&local4);
_606 = *(&local10);
// begin inline call to function frost.core.Int.%(other:frost.core.Int):frost.core.Int from MemoryLayout.frost:182:38
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:198
_609 = _605.value;
_610 = _606.value;
_611 = _609 % _610;
_612 = (frost$core$Int) {_611};
_614 = _604.value;
_615 = _612.value;
_616 = _614 - _615;
_617 = (frost$core$Int) {_616};
_618 = _603.value;
_619 = _617.value;
_620 = _618 + _619;
_621 = (frost$core$Int) {_620};
*(&local4) = _621;
goto block78;
block78:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MemoryLayout.frost:184
_625 = &param0->sizes;
_626 = *_625;
_627 = *(&local0);
_628 = _627 != NULL;
_629 = (frost$core$Bit) {_628};
_630 = _629.value;
if (_630) goto block81; else goto block82;
block82:;
_632 = (frost$core$Int) {184u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s191, _632, &$s192);
abort(); // unreachable
block81:;
_635 = _627;
_636 = ((frost$core$Object*) _635);
_637 = *(&local4);
frost$core$Int$wrapper* $tmp193;
$tmp193 = (frost$core$Int$wrapper*) frostObjectAlloc(sizeof(frost$core$Int$wrapper), (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp193->value = _637;
_638 = ((frost$core$Object*) $tmp193);
frost$collections$IdentityMap$$IDXEQ$frost$collections$IdentityMap$K$frost$collections$IdentityMap$V(_626, _636, _638);
_640 = _638;
frost$core$Frost$unref$frost$core$Object$Q(_640);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MemoryLayout.frost:185
_643 = *(&local4);
_644 = *(&local0);
_645 = ((frost$core$Object*) _644);
frost$core$Frost$unref$frost$core$Object$Q(_645);
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return _643;

}
frost$core$Int org$frostlang$frostc$MemoryLayout$stride$org$frostlang$frostc$Type$R$frost$core$Int(void* rawSelf, org$frostlang$frostc$Type* param1) {
org$frostlang$frostc$MemoryLayout* param0 = (org$frostlang$frostc$MemoryLayout*) rawSelf;

$fn194 _1;
frost$core$Int _2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MemoryLayout.frost:189
_1 = ($fn195) param0->$class->vtable[4];
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
$fn196 _110;
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
$fn197 _149;
frost$collections$Iterator* _150;
$fn198 _152;
frost$core$Bit _153;
bool _154;
$fn199 _157;
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
$fn200 _238;
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
$fn201 _265;
frost$core$Int _266;
int64_t _267;
int64_t _268;
int64_t _269;
frost$core$Int _270;
org$frostlang$frostc$FieldDecl* _275;
org$frostlang$frostc$Type** _276;
org$frostlang$frostc$Type* _277;
$fn202 _278;
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
$fn203 _374;
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MemoryLayout.frost:193
_1 = &param0->compiler;
_2 = *_1;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from MemoryLayout.frost:193:19
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
_7 = &_2->_valid;
_8 = *_7;
_10 = _8.value;
if (_10) goto block3; else goto block4;
block4:;
_12 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s204, _12, &$s205);
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MemoryLayout.frost:194
_36 = *(&local0);
_37 = _36 != NULL;
_38 = (frost$core$Bit) {_37};
_39 = _38.value;
if (_39) goto block5; else goto block6;
block5:;
_41 = &param0->compiler;
_42 = *_41;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from MemoryLayout.frost:194:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
_47 = &_42->_valid;
_48 = *_47;
_50 = _48.value;
if (_50) goto block10; else goto block11;
block11:;
_52 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s206, _52, &$s207);
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
_68 = (frost$core$Int) {194u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s208, _68, &$s209);
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
_82 = (frost$core$Int) {194u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s210, _82);
abort(); // unreachable
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MemoryLayout.frost:195
_86 = &param0->compiler;
_87 = *_86;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from MemoryLayout.frost:195:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
_92 = &_87->_valid;
_93 = *_92;
_95 = _93.value;
if (_95) goto block18; else goto block19;
block19:;
_97 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s211, _97, &$s212);
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
_110 = ($fn213) param0->$class->vtable[7];
_111 = _110(param0, _109);
*(&local2) = _111;
_113 = _103;
frost$core$Frost$unref$frost$core$Object$Q(_113);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MemoryLayout.frost:196
_116 = &param0->compiler;
_117 = *_116;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from MemoryLayout.frost:196:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
_122 = &_117->_valid;
_123 = *_122;
_125 = _123.value;
if (_125) goto block22; else goto block23;
block23:;
_127 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s214, _127, &$s215);
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
_143 = (frost$core$Int) {196u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s216, _143, &$s217);
abort(); // unreachable
block24:;
_146 = _138;
_147 = org$frostlang$frostc$Compiler$instanceFields$org$frostlang$frostc$ClassDecl$R$frost$collections$ListView$LTorg$frostlang$frostc$FieldDecl$GT(_137, _146);
_148 = ((frost$collections$Iterable*) _147);
ITable* $tmp218 = _148->$class->itable;
while ($tmp218->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp218 = $tmp218->next;
}
_149 = $tmp218->methods[0];
_150 = _149(_148);
goto block26;
block26:;
ITable* $tmp219 = _150->$class->itable;
while ($tmp219->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp219 = $tmp219->next;
}
_152 = $tmp219->methods[0];
_153 = _152(_150);
_154 = _153.value;
if (_154) goto block28; else goto block27;
block27:;
*(&local3) = ((org$frostlang$frostc$FieldDecl*) NULL);
ITable* $tmp220 = _150->$class->itable;
while ($tmp220->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp220 = $tmp220->next;
}
_157 = $tmp220->methods[1];
_158 = _157(_150);
_159 = ((org$frostlang$frostc$FieldDecl*) _158);
_160 = ((frost$core$Object*) _159);
frost$core$Frost$ref$frost$core$Object$Q(_160);
_162 = *(&local3);
_163 = ((frost$core$Object*) _162);
frost$core$Frost$unref$frost$core$Object$Q(_163);
*(&local3) = _159;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MemoryLayout.frost:197
_167 = &param0->compiler;
_168 = *_167;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from MemoryLayout.frost:197:13
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
_173 = &_168->_valid;
_174 = *_173;
_176 = _174.value;
if (_176) goto block31; else goto block32;
block32:;
_178 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s221, _178, &$s222);
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MemoryLayout.frost:198
_194 = *(&local3);
_195 = &_194->type;
_196 = *_195;
_197 = &param0->compiler;
_198 = *_197;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from MemoryLayout.frost:198:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
_203 = &_198->_valid;
_204 = *_203;
_206 = _204.value;
if (_206) goto block38; else goto block39;
block39:;
_208 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s223, _208, &$s224);
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
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from MemoryLayout.frost:198:23
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:258
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
org$frostlang$frostc$Type$Kind$wrapper* $tmp225;
$tmp225 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp225->value = _233;
_234 = ((frost$core$Equatable*) $tmp225);
_235 = &_220->typeKind;
_236 = *_235;
org$frostlang$frostc$Type$Kind$wrapper* $tmp226;
$tmp226 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp226->value = _236;
_237 = ((frost$core$Equatable*) $tmp226);
ITable* $tmp227 = _234->$class->itable;
while ($tmp227->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp227 = $tmp227->next;
}
_238 = $tmp227->methods[0];
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MemoryLayout.frost:200
_255 = *(&local2);
_256 = *(&local0);
_257 = _256 != NULL;
_258 = (frost$core$Bit) {_257};
_259 = _258.value;
if (_259) goto block44; else goto block45;
block45:;
_261 = (frost$core$Int) {200u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s228, _261, &$s229);
abort(); // unreachable
block44:;
_264 = _256;
_265 = ($fn230) param0->$class->vtable[10];
_266 = _265(param0, _264);
_267 = _255.value;
_268 = _266.value;
_269 = _267 + _268;
_270 = (frost$core$Int) {_269};
*(&local2) = _270;
goto block34;
block35:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MemoryLayout.frost:203
_275 = *(&local3);
_276 = &_275->type;
_277 = *_276;
_278 = ($fn231) param0->$class->vtable[4];
_279 = _278(param0, _277);
*(&local5) = _279;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MemoryLayout.frost:204
_282 = *(&local2);
_283 = *(&local5);
// begin inline call to function frost.core.Int.%(other:frost.core.Int):frost.core.Int from MemoryLayout.frost:204:37
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:198
_286 = _282.value;
_287 = _283.value;
_288 = _286 % _287;
_289 = (frost$core$Int) {_288};
*(&local6) = _289;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MemoryLayout.frost:205
_293 = *(&local6);
_294 = (frost$core$Int) {0u};
_295 = _293.value;
_296 = _294.value;
_297 = _295 != _296;
_298 = (frost$core$Bit) {_297};
_299 = _298.value;
if (_299) goto block47; else goto block48;
block47:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MemoryLayout.frost:206
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MemoryLayout.frost:208
_316 = *(&local2);
_317 = *(&local5);
// begin inline call to function frost.core.Int.%(other:frost.core.Int):frost.core.Int from MemoryLayout.frost:208:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:198
_320 = _316.value;
_321 = _317.value;
_322 = _320 % _321;
_323 = (frost$core$Int) {_322};
_325 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from MemoryLayout.frost:208:38
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_328 = _323.value;
_329 = _325.value;
_330 = _328 == _329;
_331 = (frost$core$Bit) {_330};
_333 = _331.value;
if (_333) goto block51; else goto block52;
block52:;
_335 = (frost$core$Int) {208u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s232, _335);
abort(); // unreachable
block51:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MemoryLayout.frost:209
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MemoryLayout.frost:212
_361 = &param1->typeKind;
_362 = *_361;
org$frostlang$frostc$Type$Kind$wrapper* $tmp233;
$tmp233 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp233->value = _362;
_363 = ((frost$core$Equatable*) $tmp233);
_364 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from MemoryLayout.frost:212:34
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_367 = &(&local8)->$rawValue;
*_367 = _364;
_369 = *(&local8);
*(&local7) = _369;
_372 = *(&local7);
org$frostlang$frostc$Type$Kind$wrapper* $tmp234;
$tmp234 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp234->value = _372;
_373 = ((frost$core$Equatable*) $tmp234);
ITable* $tmp235 = _363->$class->itable;
while ($tmp235->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp235 = $tmp235->next;
}
_374 = $tmp235->methods[0];
_375 = _374(_363, _373);
_376 = _375.value;
_377 = ((frost$core$Object*) _373);
frost$core$Frost$unref$frost$core$Object$Q(_377);
_379 = ((frost$core$Object*) _363);
frost$core$Frost$unref$frost$core$Object$Q(_379);
if (_376) goto block53; else goto block54;
block53:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MemoryLayout.frost:213
_383 = *(&local2);
_384 = (frost$core$Int) {1u};
_385 = _383.value;
_386 = _384.value;
_387 = _385 + _386;
_388 = (frost$core$Int) {_387};
*(&local2) = _388;
goto block54;
block54:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MemoryLayout.frost:215
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
$fn236 _23;
frost$collections$Iterator* _24;
$fn237 _26;
frost$core$Bit _27;
bool _28;
$fn238 _31;
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
$fn239 _75;
frost$collections$Iterator* _76;
$fn240 _78;
frost$core$Bit _79;
bool _80;
$fn241 _83;
frost$core$Object* _84;
org$frostlang$frostc$Type* _85;
frost$core$Object* _86;
org$frostlang$frostc$Type* _88;
frost$core$Object* _89;
frost$core$Int _93;
org$frostlang$frostc$Type* _94;
$fn242 _95;
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MemoryLayout.frost:219
_1 = &param0->choiceDataSizes;
_2 = *_1;
_3 = ((frost$core$Object*) param1);
_4 = frost$collections$IdentityMap$$IDX$frost$collections$IdentityMap$K$R$frost$collections$IdentityMap$V$Q(_2, _3);
_5 = (_4 != NULL ? ((frost$core$Int$nullable) { ((frost$core$Int$wrapper*) _4)->value, true }) : (frost$core$Int$nullable) { .nonnull = 0 });
*(&local0) = _5;
_7 = _4;
frost$core$Frost$unref$frost$core$Object$Q(_7);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MemoryLayout.frost:220
_10 = *(&local0);
_11 = !_10.nonnull;
_12 = (frost$core$Bit) {_11};
_13 = _12.value;
if (_13) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MemoryLayout.frost:221
_16 = (frost$core$Int) {0u};
_17 = ((frost$core$Int$nullable) { _16, true });
*(&local0) = _17;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MemoryLayout.frost:222
_20 = &param1->choiceCases;
_21 = *_20;
_22 = ((frost$collections$Iterable*) _21);
ITable* $tmp243 = _22->$class->itable;
while ($tmp243->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp243 = $tmp243->next;
}
_23 = $tmp243->methods[0];
_24 = _23(_22);
goto block3;
block3:;
ITable* $tmp244 = _24->$class->itable;
while ($tmp244->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp244 = $tmp244->next;
}
_26 = $tmp244->methods[0];
_27 = _26(_24);
_28 = _27.value;
if (_28) goto block5; else goto block4;
block4:;
*(&local1) = ((org$frostlang$frostc$ChoiceCase*) NULL);
ITable* $tmp245 = _24->$class->itable;
while ($tmp245->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp245 = $tmp245->next;
}
_31 = $tmp245->methods[1];
_32 = _31(_24);
_33 = ((org$frostlang$frostc$ChoiceCase*) _32);
_34 = ((frost$core$Object*) _33);
frost$core$Frost$ref$frost$core$Object$Q(_34);
_36 = *(&local1);
_37 = ((frost$core$Object*) _36);
frost$core$Frost$unref$frost$core$Object$Q(_37);
*(&local1) = _33;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MemoryLayout.frost:223
_41 = &param0->compiler;
_42 = *_41;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from MemoryLayout.frost:223:17
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
_47 = &_42->_valid;
_48 = *_47;
_50 = _48.value;
if (_50) goto block8; else goto block9;
block9:;
_52 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s246, _52, &$s247);
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MemoryLayout.frost:224
_68 = (frost$core$Int) {0u};
*(&local2) = _68;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MemoryLayout.frost:225
_71 = *(&local1);
_72 = &_71->fields;
_73 = *_72;
_74 = ((frost$collections$Iterable*) _73);
ITable* $tmp248 = _74->$class->itable;
while ($tmp248->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp248 = $tmp248->next;
}
_75 = $tmp248->methods[0];
_76 = _75(_74);
goto block10;
block10:;
ITable* $tmp249 = _76->$class->itable;
while ($tmp249->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp249 = $tmp249->next;
}
_78 = $tmp249->methods[0];
_79 = _78(_76);
_80 = _79.value;
if (_80) goto block12; else goto block11;
block11:;
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
ITable* $tmp250 = _76->$class->itable;
while ($tmp250->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp250 = $tmp250->next;
}
_83 = $tmp250->methods[1];
_84 = _83(_76);
_85 = ((org$frostlang$frostc$Type*) _84);
_86 = ((frost$core$Object*) _85);
frost$core$Frost$ref$frost$core$Object$Q(_86);
_88 = *(&local3);
_89 = ((frost$core$Object*) _88);
frost$core$Frost$unref$frost$core$Object$Q(_89);
*(&local3) = _85;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MemoryLayout.frost:227
_93 = *(&local2);
_94 = *(&local3);
_95 = ($fn251) param0->$class->vtable[4];
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MemoryLayout.frost:229
_112 = *(&local0);
_113 = _112.nonnull;
_114 = (frost$core$Bit) {_113};
_115 = _114.value;
if (_115) goto block13; else goto block14;
block14:;
_117 = (frost$core$Int) {229u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s252, _117, &$s253);
abort(); // unreachable
block13:;
_120 = ((frost$core$Int) _112.value);
_121 = *(&local2);
// begin inline call to function frost.core.Int.max(other:frost.core.Int):frost.core.Int from MemoryLayout.frost:229:37
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MemoryLayout.frost:231
_153 = &param0->choiceDataSizes;
_154 = *_153;
_155 = ((frost$core$Object*) param1);
_156 = *(&local0);
_157 = _156.nonnull;
_158 = (frost$core$Bit) {_157};
_159 = _158.value;
if (_159) goto block18; else goto block19;
block19:;
_161 = (frost$core$Int) {231u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s254, _161, &$s255);
abort(); // unreachable
block18:;
_164 = ((frost$core$Int) _156.value);
frost$core$Int$wrapper* $tmp256;
$tmp256 = (frost$core$Int$wrapper*) frostObjectAlloc(sizeof(frost$core$Int$wrapper), (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp256->value = _164;
_165 = ((frost$core$Object*) $tmp256);
frost$collections$IdentityMap$$IDXEQ$frost$collections$IdentityMap$K$frost$collections$IdentityMap$V(_154, _155, _165);
_167 = _165;
frost$core$Frost$unref$frost$core$Object$Q(_167);
goto block2;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MemoryLayout.frost:233
_171 = *(&local0);
_172 = _171.nonnull;
_173 = (frost$core$Bit) {_172};
_174 = _173.value;
if (_174) goto block20; else goto block21;
block21:;
_176 = (frost$core$Int) {233u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s257, _176, &$s258);
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
$fn259 _40;
frost$core$Int _41;
int64_t _42;
int64_t _43;
bool _44;
frost$core$Bit _45;
bool _46;
frost$core$Int _48;
frost$core$Object*** _52;
frost$core$Object** _53;
frost$core$Int64 _54;
int64_t _55;
frost$core$Object* _56;
frost$core$Object* _57;
org$frostlang$frostc$Type* _60;
$fn260 _61;
frost$core$Int _62;
int64_t _63;
int64_t _64;
int64_t _65;
frost$core$Int _66;
frost$core$Object* _68;
frost$core$Int _71;
int64_t _72;
int64_t _73;
int64_t _74;
frost$core$Int _75;
int64_t _77;
int64_t _78;
bool _79;
frost$core$Bit _80;
bool _81;
int64_t _83;
int64_t _84;
bool _85;
frost$core$Bit _86;
bool _87;
int64_t _89;
int64_t _90;
int64_t _91;
frost$core$Int _92;
frost$core$Int _96;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MemoryLayout.frost:237
_1 = (frost$core$Int) {0u};
*(&local0) = _1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MemoryLayout.frost:238
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MemoryLayout.frost:240
_27 = *(&local0);
_28 = &param1->fields;
_29 = *_28;
_30 = *(&local1);
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from MemoryLayout.frost:240:41
_32 = (frost$core$Int) {0u};
_33 = _30.value;
_34 = _32.value;
_35 = _33 >= _34;
_36 = (frost$core$Bit) {_35};
_37 = _36.value;
if (_37) goto block9; else goto block8;
block9:;
_39 = ((frost$collections$CollectionView*) _29);
ITable* $tmp261 = _39->$class->itable;
while ($tmp261->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp261 = $tmp261->next;
}
_40 = $tmp261->methods[0];
_41 = _40(_39);
_42 = _30.value;
_43 = _41.value;
_44 = _42 < _43;
_45 = (frost$core$Bit) {_44};
_46 = _45.value;
if (_46) goto block7; else goto block8;
block8:;
_48 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s262, _48, &$s263);
abort(); // unreachable
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
_52 = &_29->data;
_53 = *_52;
_54 = frost$core$Int64$init$frost$core$Int(_30);
_55 = _54.value;
_56 = _53[_55];
_57 = _56;
frost$core$Frost$ref$frost$core$Object$Q(_57);
_60 = ((org$frostlang$frostc$Type*) _56);
_61 = ($fn264) param0->$class->vtable[4];
_62 = _61(param0, _60);
_63 = _27.value;
_64 = _62.value;
_65 = _63 + _64;
_66 = (frost$core$Int) {_65};
*(&local0) = _66;
_68 = _56;
frost$core$Frost$unref$frost$core$Object$Q(_68);
_71 = *(&local1);
_72 = _9.value;
_73 = _71.value;
_74 = _72 - _73;
_75 = (frost$core$Int) {_74};
if (_11) goto block11; else goto block12;
block11:;
_77 = _75.value;
_78 = _12.value;
_79 = _77 >= _78;
_80 = (frost$core$Bit) {_79};
_81 = _80.value;
if (_81) goto block10; else goto block2;
block12:;
_83 = _75.value;
_84 = _12.value;
_85 = _83 > _84;
_86 = (frost$core$Bit) {_85};
_87 = _86.value;
if (_87) goto block10; else goto block2;
block10:;
_89 = _71.value;
_90 = _12.value;
_91 = _89 + _90;
_92 = (frost$core$Int) {_91};
*(&local1) = _92;
goto block1;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MemoryLayout.frost:242
_96 = *(&local0);
return _96;

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

