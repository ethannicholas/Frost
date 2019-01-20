#include "org/frostlang/frostc/statement/Return.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/Compiler.h"
#include "org/frostlang/frostc/Position.h"
#include "org/frostlang/frostc/ASTNode.h"
#include "org/frostlang/frostc/IR.h"
#include "org/frostlang/frostc/ClassDecl.h"
#include "org/frostlang/frostc/MethodDecl.h"
#include "frost/core/Bit.h"
#include "org/frostlang/frostc/Type.h"
#include "org/frostlang/frostc/FieldDecl.h"
#include "org/frostlang/frostc/IR/Value.h"
#include "frost/core/Int64.h"
#include "frost/core/Frost.h"
#include "frost/collections/Stack.h"
#include "org/frostlang/frostc/Symbol.h"
#include "frost/collections/Array.h"
#include "frost/collections/CollectionView.h"
#include "frost/core/Weak.h"
#include "frost/core/Equatable.h"
#include "org/frostlang/frostc/FixedArray.h"
#include "frost/collections/Iterable.h"
#include "frost/collections/Iterator.h"
#include "org/frostlang/frostc/Annotations.h"
#include "org/frostlang/frostc/FieldDecl/Kind.h"
#include "org/frostlang/frostc/lvalue/FieldLValue.h"
#include "org/frostlang/frostc/Compiler/TypeContext.h"
#include "org/frostlang/frostc/Variable.h"
#include "org/frostlang/frostc/Variable/Storage.h"
#include "org/frostlang/frostc/IR/Statement.h"
#include "org/frostlang/frostc/IR/Statement/ID.h"
#include "org/frostlang/frostc/IR/Block/ID.h"
#include "org/frostlang/frostc/MethodDecl/Kind.h"


static frost$core$String $s1;
org$frostlang$frostc$statement$Return$class_type org$frostlang$frostc$statement$Return$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$statement$Return$cleanup} };

typedef frost$core$Int64 (*$fn26)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn41)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$collections$Iterator* (*$fn93)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn97)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn102)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn124)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$IR$Value* (*$fn143)(org$frostlang$frostc$lvalue$FieldLValue*);
typedef org$frostlang$frostc$Type* (*$fn207)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Type* (*$fn257)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn260)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn273)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn280)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef frost$core$Bit (*$fn289)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn301)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn333)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn339)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x73\x74\x61\x74\x65\x6d\x65\x6e\x74\x2e\x52\x65\x74\x75\x72\x6e", 37, 6365785573033434727, NULL };
static frost$core$String $s19 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x63\x6c\x65\x61\x6e\x75\x70", 7, 213449732148045, NULL };
static frost$core$String $s38 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x57\x65\x61\x6b", 15, -3508042023515554364, NULL };
static frost$core$String $s64 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x52\x65\x74\x75\x72\x6e\x2e\x66\x72\x6f\x73\x74", 12, 1309930554151192889, NULL };
static frost$core$String $s65 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 89, 2803708916022239501, NULL };
static frost$core$String $s74 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x63\x6c\x65\x61\x6e\x75\x70", 7, 213449732148045, NULL };
static frost$core$String $s82 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x52\x65\x74\x75\x72\x6e\x2e\x66\x72\x6f\x73\x74", 12, 1309930554151192889, NULL };
static frost$core$String $s137 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x66\x6f\x72\x63\x65\x5f\x73\x65\x6c\x66", 11, 9082710511498477169, NULL };
static frost$core$String $s158 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x52\x65\x74\x75\x72\x6e\x2e\x66\x72\x6f\x73\x74", 12, 1309930554151192889, NULL };
static frost$core$String $s159 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s166 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x52\x65\x74\x75\x72\x6e\x2e\x66\x72\x6f\x73\x74", 12, 1309930554151192889, NULL };
static frost$core$String $s177 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x63\x61\x6e\x6e\x6f\x74\x20\x72\x65\x74\x75\x72\x6e\x20\x61\x20\x76\x61\x6c\x75\x65\x20\x66\x72\x6f\x6d\x20\x61\x20\x6d\x65\x74\x68\x6f\x64\x20\x77\x69\x74\x68\x20\x6e\x6f\x20\x72\x65\x74\x75\x72\x6e\x20\x74\x79\x70\x65", 55, -6755143087675264705, NULL };
static frost$core$String $s184 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x52\x65\x74\x75\x72\x6e\x2e\x66\x72\x6f\x73\x74", 12, 1309930554151192889, NULL };
static frost$core$String $s185 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65", 95, -6292765482005070111, NULL };
static frost$core$String $s204 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x52\x65\x74\x75\x72\x6e\x2e\x66\x72\x6f\x73\x74", 12, 1309930554151192889, NULL };
static frost$core$String $s205 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s215 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x52\x65\x74\x75\x72\x6e\x2e\x66\x72\x6f\x73\x74", 12, 1309930554151192889, NULL };
static frost$core$String $s216 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s226 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x52\x65\x74\x75\x72\x6e\x2e\x66\x72\x6f\x73\x74", 12, 1309930554151192889, NULL };
static frost$core$String $s227 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x56\x61\x72\x69\x61\x62\x6c\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x56\x61\x72\x69\x61\x62\x6c\x65", 97, 8047758300052272989, NULL };
static frost$core$String $s245 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x52\x65\x74\x75\x72\x6e\x2e\x66\x72\x6f\x73\x74", 12, 1309930554151192889, NULL };
static frost$core$String $s246 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s254 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x52\x65\x74\x75\x72\x6e\x2e\x66\x72\x6f\x73\x74", 12, 1309930554151192889, NULL };
static frost$core$String $s255 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s270 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x52\x65\x74\x75\x72\x6e\x2e\x66\x72\x6f\x73\x74", 12, 1309930554151192889, NULL };
static frost$core$String $s271 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x42\x6c\x6f\x63\x6b\x2e\x49\x44\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x42\x6c\x6f\x63\x6b\x2e\x49\x44", 103, 1859744053345217943, NULL };
static frost$core$String $s313 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s315 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s317 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x72\x65\x74\x75\x72\x6e\x20\x76\x61\x6c\x75\x65\x20\x6f\x66\x20\x74\x79\x70\x65\x20", 32, 131125242360168676, NULL };
static frost$core$String $s330 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x52\x65\x74\x75\x72\x6e\x2e\x66\x72\x6f\x73\x74", 12, 1309930554151192889, NULL };
static frost$core$String $s331 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x42\x6c\x6f\x63\x6b\x2e\x49\x44\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x42\x6c\x6f\x63\x6b\x2e\x49\x44", 103, 1859744053345217943, NULL };

void org$frostlang$frostc$statement$Return$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Position param1, org$frostlang$frostc$ASTNode* param2) {

org$frostlang$frostc$IR* local0 = NULL;
org$frostlang$frostc$ClassDecl* local1 = NULL;
org$frostlang$frostc$MethodDecl* local2 = NULL;
frost$core$Bit local3;
frost$core$Bit local4;
frost$core$Bit local5;
org$frostlang$frostc$Type* local6 = NULL;
org$frostlang$frostc$FieldDecl* local7 = NULL;
frost$core$Bit local8;
frost$core$Bit local9;
frost$core$Bit local10;
org$frostlang$frostc$IR$Value* local11 = NULL;
org$frostlang$frostc$IR$Value* local12 = NULL;
frost$core$Int64 local13;
frost$core$Int64 local14;
// line 23
org$frostlang$frostc$IR** $tmp2 = &param0->ir;
org$frostlang$frostc$IR* $tmp3 = *$tmp2;
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3));
org$frostlang$frostc$IR* $tmp4 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4));
*(&local0) = $tmp3;
// line 24
frost$collections$Stack** $tmp5 = &param0->currentClass;
frost$collections$Stack* $tmp6 = *$tmp5;
frost$core$Int64 $tmp7 = (frost$core$Int64) {0};
frost$core$Object* $tmp8 = frost$collections$Stack$$IDX$frost$core$Int64$R$frost$collections$Stack$T($tmp6, $tmp7);
*(&local1) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ClassDecl*) $tmp8)));
org$frostlang$frostc$ClassDecl* $tmp9 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp9));
*(&local1) = ((org$frostlang$frostc$ClassDecl*) $tmp8);
frost$core$Frost$unref$frost$core$Object$Q($tmp8);
// unreffing REF($15:frost.collections.Stack.T)
// line 25
frost$collections$Stack** $tmp10 = &param0->currentMethod;
frost$collections$Stack* $tmp11 = *$tmp10;
frost$core$Int64 $tmp12 = (frost$core$Int64) {0};
frost$core$Object* $tmp13 = frost$collections$Stack$$IDX$frost$core$Int64$R$frost$collections$Stack$T($tmp11, $tmp12);
*(&local2) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$MethodDecl*) $tmp13)));
org$frostlang$frostc$MethodDecl* $tmp14 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp14));
*(&local2) = ((org$frostlang$frostc$MethodDecl*) $tmp13);
frost$core$Frost$unref$frost$core$Object$Q($tmp13);
// unreffing REF($32:frost.collections.Stack.T)
// line 26
org$frostlang$frostc$MethodDecl* $tmp15 = *(&local2);
frost$core$String** $tmp16 = &((org$frostlang$frostc$Symbol*) $tmp15)->name;
frost$core$String* $tmp17 = *$tmp16;
frost$core$Bit $tmp18 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp17, &$s19);
bool $tmp20 = $tmp18.value;
if ($tmp20) goto block3; else goto block4;
block3:;
org$frostlang$frostc$MethodDecl* $tmp21 = *(&local2);
frost$collections$Array** $tmp22 = &$tmp21->parameters;
frost$collections$Array* $tmp23 = *$tmp22;
ITable* $tmp24 = ((frost$collections$CollectionView*) $tmp23)->$class->itable;
while ($tmp24->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp24 = $tmp24->next;
}
$fn26 $tmp25 = $tmp24->methods[0];
frost$core$Int64 $tmp27 = $tmp25(((frost$collections$CollectionView*) $tmp23));
frost$core$Int64 $tmp28 = (frost$core$Int64) {0};
frost$core$Bit $tmp29 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp27, $tmp28);
*(&local4) = $tmp29;
goto block5;
block4:;
*(&local4) = $tmp18;
goto block5;
block5:;
frost$core$Bit $tmp30 = *(&local4);
bool $tmp31 = $tmp30.value;
if ($tmp31) goto block6; else goto block7;
block6:;
org$frostlang$frostc$MethodDecl* $tmp32 = *(&local2);
frost$core$Weak** $tmp33 = &$tmp32->owner;
frost$core$Weak* $tmp34 = *$tmp33;
frost$core$Object* $tmp35 = frost$core$Weak$get$R$frost$core$Weak$T($tmp34);
frost$core$String** $tmp36 = &((org$frostlang$frostc$ClassDecl*) $tmp35)->name;
frost$core$String* $tmp37 = *$tmp36;
ITable* $tmp39 = ((frost$core$Equatable*) $tmp37)->$class->itable;
while ($tmp39->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp39 = $tmp39->next;
}
$fn41 $tmp40 = $tmp39->methods[1];
frost$core$Bit $tmp42 = $tmp40(((frost$core$Equatable*) $tmp37), ((frost$core$Equatable*) &$s38));
frost$core$Frost$unref$frost$core$Object$Q($tmp35);
// unreffing REF($71:frost.core.Weak.T)
*(&local3) = $tmp42;
goto block8;
block7:;
*(&local3) = $tmp30;
goto block8;
block8:;
frost$core$Bit $tmp43 = *(&local3);
bool $tmp44 = $tmp43.value;
if ($tmp44) goto block1; else goto block2;
block1:;
// line 29
org$frostlang$frostc$ClassDecl* $tmp45 = *(&local1);
org$frostlang$frostc$Type** $tmp46 = &$tmp45->rawSuper;
org$frostlang$frostc$Type* $tmp47 = *$tmp46;
frost$core$Bit $tmp48 = frost$core$Bit$init$builtin_bit($tmp47 != NULL);
bool $tmp49 = $tmp48.value;
if ($tmp49) goto block11; else goto block12;
block11:;
org$frostlang$frostc$ClassDecl* $tmp50 = *(&local1);
frost$core$Bit $tmp51 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$ClassDecl$Q$R$frost$core$Bit(param0, $tmp50);
frost$core$Bit $tmp52 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp51);
*(&local5) = $tmp52;
goto block13;
block12:;
*(&local5) = $tmp48;
goto block13;
block13:;
frost$core$Bit $tmp53 = *(&local5);
bool $tmp54 = $tmp53.value;
if ($tmp54) goto block9; else goto block10;
block9:;
// line 30
org$frostlang$frostc$ClassDecl* $tmp55 = *(&local1);
org$frostlang$frostc$Type** $tmp56 = &$tmp55->type;
org$frostlang$frostc$Type* $tmp57 = *$tmp56;
org$frostlang$frostc$ClassDecl* $tmp58 = *(&local1);
org$frostlang$frostc$Type** $tmp59 = &$tmp58->rawSuper;
org$frostlang$frostc$Type* $tmp60 = *$tmp59;
frost$core$Bit $tmp61 = frost$core$Bit$init$builtin_bit($tmp60 != NULL);
bool $tmp62 = $tmp61.value;
if ($tmp62) goto block14; else goto block15;
block15:;
frost$core$Int64 $tmp63 = (frost$core$Int64) {30};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s64, $tmp63, &$s65);
abort(); // unreachable
block14:;
org$frostlang$frostc$Type* $tmp66 = org$frostlang$frostc$Compiler$remapType$org$frostlang$frostc$Type$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(param0, $tmp57, $tmp60);
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp66));
org$frostlang$frostc$Type* $tmp67 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp67));
*(&local6) = $tmp66;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp66));
// unreffing REF($124:org.frostlang.frostc.Type)
// line 31
org$frostlang$frostc$ASTNode* $tmp68 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp69 = (frost$core$Int64) {9};
org$frostlang$frostc$ASTNode* $tmp70 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp71 = (frost$core$Int64) {16};
org$frostlang$frostc$ASTNode* $tmp72 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp73 = (frost$core$Int64) {41};
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position($tmp72, $tmp73, param1);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$frost$core$String($tmp70, $tmp71, param1, $tmp72, &$s74);
org$frostlang$frostc$FixedArray* $tmp75 = (org$frostlang$frostc$FixedArray*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$FixedArray$class);
org$frostlang$frostc$FixedArray$init($tmp75);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT($tmp68, $tmp69, param1, $tmp70, $tmp75);
org$frostlang$frostc$Compiler$compileStatement$org$frostlang$frostc$ASTNode(param0, $tmp68);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp75));
// unreffing REF($144:org.frostlang.frostc.FixedArray<org.frostlang.frostc.ASTNode>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp72));
// unreffing REF($140:org.frostlang.frostc.ASTNode)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp70));
// unreffing REF($138:org.frostlang.frostc.ASTNode)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp68));
// unreffing REF($136:org.frostlang.frostc.ASTNode)
org$frostlang$frostc$Type* $tmp76 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp76));
// unreffing supertype
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
goto block10;
block10:;
// line 35
frost$core$Bit* $tmp77 = &param0->inFieldCleanup;
frost$core$Bit $tmp78 = *$tmp77;
frost$core$Bit $tmp79 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp78);
bool $tmp80 = $tmp79.value;
if ($tmp80) goto block16; else goto block17;
block17:;
frost$core$Int64 $tmp81 = (frost$core$Int64) {35};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s82, $tmp81);
abort(); // unreachable
block16:;
// line 36
frost$core$Bit $tmp83 = frost$core$Bit$init$builtin_bit(true);
frost$core$Bit* $tmp84 = &param0->inFieldCleanup;
*$tmp84 = $tmp83;
// line 37
org$frostlang$frostc$MethodDecl* $tmp85 = *(&local2);
frost$core$Weak** $tmp86 = &$tmp85->owner;
frost$core$Weak* $tmp87 = *$tmp86;
frost$core$Object* $tmp88 = frost$core$Weak$get$R$frost$core$Weak$T($tmp87);
frost$collections$Array** $tmp89 = &((org$frostlang$frostc$ClassDecl*) $tmp88)->fields;
frost$collections$Array* $tmp90 = *$tmp89;
ITable* $tmp91 = ((frost$collections$Iterable*) $tmp90)->$class->itable;
while ($tmp91->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp91 = $tmp91->next;
}
$fn93 $tmp92 = $tmp91->methods[0];
frost$collections$Iterator* $tmp94 = $tmp92(((frost$collections$Iterable*) $tmp90));
goto block18;
block18:;
ITable* $tmp95 = $tmp94->$class->itable;
while ($tmp95->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp95 = $tmp95->next;
}
$fn97 $tmp96 = $tmp95->methods[0];
frost$core$Bit $tmp98 = $tmp96($tmp94);
bool $tmp99 = $tmp98.value;
if ($tmp99) goto block20; else goto block19;
block19:;
*(&local7) = ((org$frostlang$frostc$FieldDecl*) NULL);
ITable* $tmp100 = $tmp94->$class->itable;
while ($tmp100->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp100 = $tmp100->next;
}
$fn102 $tmp101 = $tmp100->methods[1];
frost$core$Object* $tmp103 = $tmp101($tmp94);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FieldDecl*) $tmp103)));
org$frostlang$frostc$FieldDecl* $tmp104 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp104));
*(&local7) = ((org$frostlang$frostc$FieldDecl*) $tmp103);
// line 38
org$frostlang$frostc$FieldDecl* $tmp105 = *(&local7);
frost$core$Bit $tmp106 = org$frostlang$frostc$Compiler$resolve$org$frostlang$frostc$FieldDecl$R$frost$core$Bit(param0, $tmp105);
bool $tmp107 = $tmp106.value;
if ($tmp107) goto block23; else goto block24;
block23:;
org$frostlang$frostc$FieldDecl* $tmp108 = *(&local7);
org$frostlang$frostc$Annotations** $tmp109 = &$tmp108->annotations;
org$frostlang$frostc$Annotations* $tmp110 = *$tmp109;
frost$core$Bit $tmp111 = org$frostlang$frostc$Annotations$get_isClass$R$frost$core$Bit($tmp110);
frost$core$Bit $tmp112 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp111);
*(&local10) = $tmp112;
goto block25;
block24:;
*(&local10) = $tmp106;
goto block25;
block25:;
frost$core$Bit $tmp113 = *(&local10);
bool $tmp114 = $tmp113.value;
if ($tmp114) goto block26; else goto block27;
block26:;
org$frostlang$frostc$FieldDecl* $tmp115 = *(&local7);
org$frostlang$frostc$FieldDecl$Kind* $tmp116 = &$tmp115->fieldKind;
org$frostlang$frostc$FieldDecl$Kind $tmp117 = *$tmp116;
org$frostlang$frostc$FieldDecl$Kind$wrapper* $tmp118;
$tmp118 = (org$frostlang$frostc$FieldDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$FieldDecl$Kind$wrapperclass);
$tmp118->value = $tmp117;
frost$core$Int64 $tmp119 = (frost$core$Int64) {3};
org$frostlang$frostc$FieldDecl$Kind $tmp120 = org$frostlang$frostc$FieldDecl$Kind$init$frost$core$Int64($tmp119);
org$frostlang$frostc$FieldDecl$Kind$wrapper* $tmp121;
$tmp121 = (org$frostlang$frostc$FieldDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$FieldDecl$Kind$wrapperclass);
$tmp121->value = $tmp120;
ITable* $tmp122 = ((frost$core$Equatable*) $tmp118)->$class->itable;
while ($tmp122->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp122 = $tmp122->next;
}
$fn124 $tmp123 = $tmp122->methods[1];
frost$core$Bit $tmp125 = $tmp123(((frost$core$Equatable*) $tmp118), ((frost$core$Equatable*) $tmp121));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp121)));
// unreffing REF($235:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp118)));
// unreffing REF($231:frost.core.Equatable<org.frostlang.frostc.FieldDecl.Kind>)
*(&local9) = $tmp125;
goto block28;
block27:;
*(&local9) = $tmp113;
goto block28;
block28:;
frost$core$Bit $tmp126 = *(&local9);
bool $tmp127 = $tmp126.value;
if ($tmp127) goto block29; else goto block30;
block29:;
org$frostlang$frostc$FieldDecl* $tmp128 = *(&local7);
org$frostlang$frostc$Type** $tmp129 = &$tmp128->type;
org$frostlang$frostc$Type* $tmp130 = *$tmp129;
frost$core$Bit $tmp131 = org$frostlang$frostc$Compiler$isRefCounted$org$frostlang$frostc$Type$R$frost$core$Bit(param0, $tmp130);
*(&local8) = $tmp131;
goto block31;
block30:;
*(&local8) = $tmp126;
goto block31;
block31:;
frost$core$Bit $tmp132 = *(&local8);
bool $tmp133 = $tmp132.value;
if ($tmp133) goto block21; else goto block22;
block21:;
// line 40
org$frostlang$frostc$lvalue$FieldLValue* $tmp134 = (org$frostlang$frostc$lvalue$FieldLValue*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$lvalue$FieldLValue$class);
org$frostlang$frostc$ASTNode* $tmp135 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp136 = (frost$core$Int64) {22};
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String($tmp135, $tmp136, param1, &$s137);
org$frostlang$frostc$Compiler$TypeContext* $tmp138 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp139 = (frost$core$Int64) {0};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64($tmp138, $tmp139);
org$frostlang$frostc$IR$Value* $tmp140 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp135, $tmp138);
org$frostlang$frostc$FieldDecl* $tmp141 = *(&local7);
org$frostlang$frostc$lvalue$FieldLValue$init$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$FieldDecl($tmp134, param0, param1, $tmp140, $tmp141);
$fn143 $tmp142 = ($fn143) $tmp134->$class->vtable[3];
org$frostlang$frostc$IR$Value* $tmp144 = $tmp142($tmp134);
*(&local11) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp144));
org$frostlang$frostc$IR$Value* $tmp145 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp145));
*(&local11) = $tmp144;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp144));
// unreffing REF($274:org.frostlang.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp140));
// unreffing REF($270:org.frostlang.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp138));
// unreffing REF($267:org.frostlang.frostc.Compiler.TypeContext)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp135));
// unreffing REF($264:org.frostlang.frostc.ASTNode)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp134));
// unreffing REF($263:org.frostlang.frostc.lvalue.FieldLValue)
// line 44
org$frostlang$frostc$IR$Value* $tmp146 = *(&local11);
frost$core$Bit $tmp147 = frost$core$Bit$init$builtin_bit($tmp146 == NULL);
bool $tmp148 = $tmp147.value;
if ($tmp148) goto block32; else goto block33;
block32:;
// line 45
org$frostlang$frostc$IR$Value* $tmp149 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp149));
// unreffing load
*(&local11) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp103);
// unreffing REF($203:frost.collections.Iterator.T)
org$frostlang$frostc$FieldDecl* $tmp150 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp150));
// unreffing f
*(&local7) = ((org$frostlang$frostc$FieldDecl*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp94));
// unreffing REF($192:frost.collections.Iterator<frost.collections.Iterable.T>)
frost$core$Frost$unref$frost$core$Object$Q($tmp88);
// unreffing REF($185:frost.core.Weak.T)
org$frostlang$frostc$MethodDecl* $tmp151 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp151));
// unreffing currentMethod
*(&local2) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$ClassDecl* $tmp152 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp152));
// unreffing currentClass
*(&local1) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$IR* $tmp153 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp153));
// unreffing ir
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block33:;
// line 47
org$frostlang$frostc$IR$Value* $tmp154 = *(&local11);
frost$core$Bit $tmp155 = frost$core$Bit$init$builtin_bit($tmp154 != NULL);
bool $tmp156 = $tmp155.value;
if ($tmp156) goto block34; else goto block35;
block35:;
frost$core$Int64 $tmp157 = (frost$core$Int64) {47};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s158, $tmp157, &$s159);
abort(); // unreachable
block34:;
org$frostlang$frostc$Compiler$compileUnref$org$frostlang$frostc$IR$Value(param0, $tmp154);
org$frostlang$frostc$IR$Value* $tmp160 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp160));
// unreffing load
*(&local11) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block22;
block22:;
frost$core$Frost$unref$frost$core$Object$Q($tmp103);
// unreffing REF($203:frost.collections.Iterator.T)
org$frostlang$frostc$FieldDecl* $tmp161 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp161));
// unreffing f
*(&local7) = ((org$frostlang$frostc$FieldDecl*) NULL);
goto block18;
block20:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp94));
// unreffing REF($192:frost.collections.Iterator<frost.collections.Iterable.T>)
frost$core$Frost$unref$frost$core$Object$Q($tmp88);
// unreffing REF($185:frost.core.Weak.T)
// line 50
frost$core$Bit* $tmp162 = &param0->inFieldCleanup;
frost$core$Bit $tmp163 = *$tmp162;
bool $tmp164 = $tmp163.value;
if ($tmp164) goto block36; else goto block37;
block37:;
frost$core$Int64 $tmp165 = (frost$core$Int64) {50};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s166, $tmp165);
abort(); // unreachable
block36:;
// line 51
frost$core$Bit $tmp167 = frost$core$Bit$init$builtin_bit(false);
frost$core$Bit* $tmp168 = &param0->inFieldCleanup;
*$tmp168 = $tmp167;
goto block2;
block2:;
// line 53
frost$core$Bit $tmp169 = frost$core$Bit$init$builtin_bit(param2 != NULL);
bool $tmp170 = $tmp169.value;
if ($tmp170) goto block38; else goto block40;
block38:;
// line 54
org$frostlang$frostc$MethodDecl* $tmp171 = *(&local2);
org$frostlang$frostc$Type** $tmp172 = &$tmp171->returnType;
org$frostlang$frostc$Type* $tmp173 = *$tmp172;
org$frostlang$frostc$Type* $tmp174 = org$frostlang$frostc$Type$Void$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp175 = org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit($tmp173, $tmp174);
bool $tmp176 = $tmp175.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp174));
// unreffing REF($393:org.frostlang.frostc.Type)
if ($tmp176) goto block41; else goto block42;
block41:;
// line 55
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, &$s177);
// line 56
org$frostlang$frostc$MethodDecl* $tmp178 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp178));
// unreffing currentMethod
*(&local2) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$ClassDecl* $tmp179 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp179));
// unreffing currentClass
*(&local1) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$IR* $tmp180 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp180));
// unreffing ir
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block42:;
// line 58
frost$core$Bit $tmp181 = frost$core$Bit$init$builtin_bit(param2 != NULL);
bool $tmp182 = $tmp181.value;
if ($tmp182) goto block43; else goto block44;
block44:;
frost$core$Int64 $tmp183 = (frost$core$Int64) {58};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s184, $tmp183, &$s185);
abort(); // unreachable
block43:;
org$frostlang$frostc$Compiler$TypeContext* $tmp186 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp187 = (frost$core$Int64) {3};
org$frostlang$frostc$MethodDecl* $tmp188 = *(&local2);
org$frostlang$frostc$Type** $tmp189 = &$tmp188->returnType;
org$frostlang$frostc$Type* $tmp190 = *$tmp189;
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type($tmp186, $tmp187, $tmp190);
org$frostlang$frostc$IR$Value* $tmp191 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param2, $tmp186);
*(&local12) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp191));
org$frostlang$frostc$IR$Value* $tmp192 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp192));
*(&local12) = $tmp191;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp191));
// unreffing REF($434:org.frostlang.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp186));
// unreffing REF($428:org.frostlang.frostc.Compiler.TypeContext)
// line 60
org$frostlang$frostc$IR$Value* $tmp193 = *(&local12);
frost$core$Bit $tmp194 = frost$core$Bit$init$builtin_bit($tmp193 == NULL);
bool $tmp195 = $tmp194.value;
if ($tmp195) goto block45; else goto block46;
block45:;
// line 61
org$frostlang$frostc$IR$Value* $tmp196 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp196));
// unreffing compiled
*(&local12) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$MethodDecl* $tmp197 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp197));
// unreffing currentMethod
*(&local2) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$ClassDecl* $tmp198 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp198));
// unreffing currentClass
*(&local1) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$IR* $tmp199 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp199));
// unreffing ir
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block46:;
// line 63
org$frostlang$frostc$IR$Value* $tmp200 = *(&local12);
frost$core$Bit $tmp201 = frost$core$Bit$init$builtin_bit($tmp200 != NULL);
bool $tmp202 = $tmp201.value;
if ($tmp202) goto block49; else goto block50;
block50:;
frost$core$Int64 $tmp203 = (frost$core$Int64) {63};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s204, $tmp203, &$s205);
abort(); // unreachable
block49:;
$fn207 $tmp206 = ($fn207) $tmp200->$class->vtable[2];
org$frostlang$frostc$Type* $tmp208 = $tmp206($tmp200);
frost$core$Bit $tmp209 = org$frostlang$frostc$Compiler$isRefCounted$org$frostlang$frostc$Type$R$frost$core$Bit(param0, $tmp208);
bool $tmp210 = $tmp209.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp208));
// unreffing REF($487:org.frostlang.frostc.Type)
if ($tmp210) goto block47; else goto block48;
block47:;
// line 64
org$frostlang$frostc$IR$Value* $tmp211 = *(&local12);
frost$core$Bit $tmp212 = frost$core$Bit$init$builtin_bit($tmp211 != NULL);
bool $tmp213 = $tmp212.value;
if ($tmp213) goto block51; else goto block52;
block52:;
frost$core$Int64 $tmp214 = (frost$core$Int64) {64};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s215, $tmp214, &$s216);
abort(); // unreachable
block51:;
org$frostlang$frostc$Compiler$compileRef$org$frostlang$frostc$IR$Value(param0, $tmp211);
goto block48;
block48:;
// line 66
org$frostlang$frostc$Compiler$leaveAllScopes(param0);
// line 67
org$frostlang$frostc$Variable** $tmp217 = &param0->returnVar;
org$frostlang$frostc$Variable* $tmp218 = *$tmp217;
frost$core$Bit $tmp219 = frost$core$Bit$init$builtin_bit($tmp218 != NULL);
bool $tmp220 = $tmp219.value;
if ($tmp220) goto block53; else goto block55;
block53:;
// line 68
// line 69
org$frostlang$frostc$Variable** $tmp221 = &param0->returnVar;
org$frostlang$frostc$Variable* $tmp222 = *$tmp221;
frost$core$Bit $tmp223 = frost$core$Bit$init$builtin_bit($tmp222 != NULL);
bool $tmp224 = $tmp223.value;
if ($tmp224) goto block56; else goto block57;
block57:;
frost$core$Int64 $tmp225 = (frost$core$Int64) {69};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s226, $tmp225, &$s227);
abort(); // unreachable
block56:;
org$frostlang$frostc$Variable$Storage** $tmp228 = &$tmp222->storage;
org$frostlang$frostc$Variable$Storage* $tmp229 = *$tmp228;
frost$core$Int64* $tmp230 = &$tmp229->$rawValue;
frost$core$Int64 $tmp231 = *$tmp230;
frost$core$Int64 $tmp232 = (frost$core$Int64) {0};
frost$core$Bit $tmp233 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp231, $tmp232);
bool $tmp234 = $tmp233.value;
if ($tmp234) goto block59; else goto block58;
block59:;
frost$core$Int64* $tmp235 = (frost$core$Int64*) ($tmp229->$data + 0);
frost$core$Int64 $tmp236 = *$tmp235;
*(&local14) = $tmp236;
// line 71
frost$core$Int64 $tmp237 = *(&local14);
*(&local13) = $tmp237;
goto block58;
block58:;
// line 74
org$frostlang$frostc$IR* $tmp238 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp239 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp240 = (frost$core$Int64) {26};
org$frostlang$frostc$IR$Value* $tmp241 = *(&local12);
frost$core$Bit $tmp242 = frost$core$Bit$init$builtin_bit($tmp241 != NULL);
bool $tmp243 = $tmp242.value;
if ($tmp243) goto block60; else goto block61;
block61:;
frost$core$Int64 $tmp244 = (frost$core$Int64) {74};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s245, $tmp244, &$s246);
abort(); // unreachable
block60:;
org$frostlang$frostc$IR$Value* $tmp247 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp248 = (frost$core$Int64) {2};
frost$core$Int64 $tmp249 = *(&local13);
org$frostlang$frostc$IR$Value* $tmp250 = *(&local12);
frost$core$Bit $tmp251 = frost$core$Bit$init$builtin_bit($tmp250 != NULL);
bool $tmp252 = $tmp251.value;
if ($tmp252) goto block62; else goto block63;
block63:;
frost$core$Int64 $tmp253 = (frost$core$Int64) {75};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s254, $tmp253, &$s255);
abort(); // unreachable
block62:;
$fn257 $tmp256 = ($fn257) $tmp250->$class->vtable[2];
org$frostlang$frostc$Type* $tmp258 = $tmp256($tmp250);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$frost$core$Int64$org$frostlang$frostc$Type($tmp247, $tmp248, $tmp249, $tmp258);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value($tmp239, $tmp240, param1, $tmp241, $tmp247);
$fn260 $tmp259 = ($fn260) $tmp238->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp261 = $tmp259($tmp238, $tmp239);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp258));
// unreffing REF($568:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp247));
// unreffing REF($555:org.frostlang.frostc.IR.Value)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp239));
// unreffing REF($544:org.frostlang.frostc.IR.Statement)
// line 76
org$frostlang$frostc$IR* $tmp262 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp263 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp264 = (frost$core$Int64) {1};
org$frostlang$frostc$IR$Block$ID$nullable* $tmp265 = &param0->postconditionEntryBlock;
org$frostlang$frostc$IR$Block$ID$nullable $tmp266 = *$tmp265;
frost$core$Bit $tmp267 = frost$core$Bit$init$builtin_bit($tmp266.nonnull);
bool $tmp268 = $tmp267.value;
if ($tmp268) goto block64; else goto block65;
block65:;
frost$core$Int64 $tmp269 = (frost$core$Int64) {76};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s270, $tmp269, &$s271);
abort(); // unreachable
block64:;
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Block$ID($tmp263, $tmp264, param1, ((org$frostlang$frostc$IR$Block$ID) $tmp266.value));
$fn273 $tmp272 = ($fn273) $tmp262->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp274 = $tmp272($tmp262, $tmp263);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp263));
// unreffing REF($584:org.frostlang.frostc.IR.Statement)
goto block54;
block55:;
// line 1
// line 79
org$frostlang$frostc$IR* $tmp275 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp276 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp277 = (frost$core$Int64) {24};
org$frostlang$frostc$IR$Value* $tmp278 = *(&local12);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q($tmp276, $tmp277, param1, $tmp278);
$fn280 $tmp279 = ($fn280) $tmp275->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp281 = $tmp279($tmp275, $tmp276);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp276));
// unreffing REF($606:org.frostlang.frostc.IR.Statement)
goto block54;
block54:;
org$frostlang$frostc$IR$Value* $tmp282 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp282));
// unreffing compiled
*(&local12) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block39;
block40:;
// line 1
// line 83
org$frostlang$frostc$MethodDecl* $tmp283 = *(&local2);
org$frostlang$frostc$Type** $tmp284 = &$tmp283->returnType;
org$frostlang$frostc$Type* $tmp285 = *$tmp284;
org$frostlang$frostc$Type* $tmp286 = org$frostlang$frostc$Type$Void$R$org$frostlang$frostc$Type();
ITable* $tmp287 = ((frost$core$Equatable*) $tmp285)->$class->itable;
while ($tmp287->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp287 = $tmp287->next;
}
$fn289 $tmp288 = $tmp287->methods[1];
frost$core$Bit $tmp290 = $tmp288(((frost$core$Equatable*) $tmp285), ((frost$core$Equatable*) $tmp286));
bool $tmp291 = $tmp290.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp286));
// unreffing REF($629:org.frostlang.frostc.Type)
if ($tmp291) goto block66; else goto block67;
block66:;
// line 84
org$frostlang$frostc$MethodDecl* $tmp292 = *(&local2);
org$frostlang$frostc$MethodDecl$Kind* $tmp293 = &$tmp292->methodKind;
org$frostlang$frostc$MethodDecl$Kind $tmp294 = *$tmp293;
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp295;
$tmp295 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp295->value = $tmp294;
frost$core$Int64 $tmp296 = (frost$core$Int64) {2};
org$frostlang$frostc$MethodDecl$Kind $tmp297 = org$frostlang$frostc$MethodDecl$Kind$init$frost$core$Int64($tmp296);
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp298;
$tmp298 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp298->value = $tmp297;
ITable* $tmp299 = ((frost$core$Equatable*) $tmp295)->$class->itable;
while ($tmp299->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp299 = $tmp299->next;
}
$fn301 $tmp300 = $tmp299->methods[0];
frost$core$Bit $tmp302 = $tmp300(((frost$core$Equatable*) $tmp295), ((frost$core$Equatable*) $tmp298));
bool $tmp303 = $tmp302.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp298)));
// unreffing REF($646:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp295)));
// unreffing REF($642:frost.core.Equatable<org.frostlang.frostc.MethodDecl.Kind>)
if ($tmp303) goto block68; else goto block69;
block68:;
// line 85
org$frostlang$frostc$ASTNode* $tmp304 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp305 = (frost$core$Int64) {39};
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position($tmp304, $tmp305, param1);
org$frostlang$frostc$statement$Return$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q(param0, param1, $tmp304);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp304));
// unreffing REF($658:org.frostlang.frostc.ASTNode)
// line 86
org$frostlang$frostc$MethodDecl* $tmp306 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp306));
// unreffing currentMethod
*(&local2) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$ClassDecl* $tmp307 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp307));
// unreffing currentClass
*(&local1) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$IR* $tmp308 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp308));
// unreffing ir
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block69:;
// line 88
org$frostlang$frostc$MethodDecl* $tmp309 = *(&local2);
org$frostlang$frostc$Type** $tmp310 = &$tmp309->returnType;
org$frostlang$frostc$Type* $tmp311 = *$tmp310;
frost$core$String* $tmp312 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s313, ((frost$core$Object*) $tmp311));
frost$core$String* $tmp314 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp312, &$s315);
frost$core$String* $tmp316 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s317, $tmp314);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, $tmp316);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp316));
// unreffing REF($690:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp314));
// unreffing REF($689:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp312));
// unreffing REF($688:frost.core.String)
goto block67;
block67:;
// line 91
org$frostlang$frostc$Compiler$leaveAllScopes(param0);
// line 92
org$frostlang$frostc$IR$Block$ID$nullable* $tmp318 = &param0->postconditionEntryBlock;
org$frostlang$frostc$IR$Block$ID$nullable $tmp319 = *$tmp318;
frost$core$Bit $tmp320 = frost$core$Bit$init$builtin_bit($tmp319.nonnull);
bool $tmp321 = $tmp320.value;
if ($tmp321) goto block70; else goto block72;
block70:;
// line 93
org$frostlang$frostc$IR* $tmp322 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp323 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp324 = (frost$core$Int64) {1};
org$frostlang$frostc$IR$Block$ID$nullable* $tmp325 = &param0->postconditionEntryBlock;
org$frostlang$frostc$IR$Block$ID$nullable $tmp326 = *$tmp325;
frost$core$Bit $tmp327 = frost$core$Bit$init$builtin_bit($tmp326.nonnull);
bool $tmp328 = $tmp327.value;
if ($tmp328) goto block73; else goto block74;
block74:;
frost$core$Int64 $tmp329 = (frost$core$Int64) {93};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s330, $tmp329, &$s331);
abort(); // unreachable
block73:;
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Block$ID($tmp323, $tmp324, param1, ((org$frostlang$frostc$IR$Block$ID) $tmp326.value));
$fn333 $tmp332 = ($fn333) $tmp322->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp334 = $tmp332($tmp322, $tmp323);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp323));
// unreffing REF($713:org.frostlang.frostc.IR.Statement)
goto block71;
block72:;
// line 1
// line 96
org$frostlang$frostc$IR* $tmp335 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp336 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp337 = (frost$core$Int64) {24};
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q($tmp336, $tmp337, param1, ((org$frostlang$frostc$IR$Value*) NULL));
$fn339 $tmp338 = ($fn339) $tmp335->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp340 = $tmp338($tmp335, $tmp336);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp336));
// unreffing REF($735:org.frostlang.frostc.IR.Statement)
goto block71;
block71:;
goto block39;
block39:;
org$frostlang$frostc$MethodDecl* $tmp341 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp341));
// unreffing currentMethod
*(&local2) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$ClassDecl* $tmp342 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp342));
// unreffing currentClass
*(&local1) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$IR* $tmp343 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp343));
// unreffing ir
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;

}
void org$frostlang$frostc$statement$Return$init(org$frostlang$frostc$statement$Return* param0) {

return;

}
void org$frostlang$frostc$statement$Return$cleanup(org$frostlang$frostc$statement$Return* param0) {

// line 20
frost$core$Object$cleanup(((frost$core$Object*) param0));
return;

}






