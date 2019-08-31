#include "org/frostlang/frostc/statement/Assignment.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/Compiler.h"
#include "org/frostlang/frostc/Position.h"
#include "org/frostlang/frostc/ASTNode.h"
#include "org/frostlang/frostc/expression/Binary/Operator.h"
#include "frost/collections/Array.h"
#include "org/frostlang/frostc/IR/Value.h"
#include "org/frostlang/frostc/lvalue/LValue.h"
#include "frost/core/Bit.h"
#include "frost/core/Equatable.h"
#include "frost/core/Int.h"
#include "frost/core/Frost.h"
#include "org/frostlang/frostc/Compiler/TypeContext.h"
#include "frost/collections/ListView.h"
#include "org/frostlang/frostc/expression/Call.h"
#include "org/frostlang/frostc/Type.h"
#include "org/frostlang/frostc/expression/Binary.h"


static frost$core$String $s1;
org$frostlang$frostc$statement$Assignment$class_type org$frostlang$frostc$statement$Assignment$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$statement$Assignment$cleanup} };

typedef frost$core$Bit (*$fn16)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn46)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn98)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Type* (*$fn111)(org$frostlang$frostc$lvalue$LValue*);
typedef org$frostlang$frostc$IR$Value* (*$fn124)(org$frostlang$frostc$lvalue$LValue*);
typedef org$frostlang$frostc$Type* (*$fn152)(org$frostlang$frostc$lvalue$LValue*);
typedef void (*$fn177)(org$frostlang$frostc$lvalue$LValue*, org$frostlang$frostc$IR$Value*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x73\x74\x61\x74\x65\x6d\x65\x6e\x74\x2e\x41\x73\x73\x69\x67\x6e\x6d\x65\x6e\x74", 41, 2998949642810861948, NULL };
static frost$core$String $s7 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6e\x6f\x74\x20\x61\x20\x73\x74\x61\x74\x65\x6d\x65\x6e\x74", 15, 7724162655211760908, NULL };
static frost$core$String $s71 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x73\x73\x69\x67\x6e\x6d\x65\x6e\x74\x2e\x66\x72\x6f\x73\x74", 16, 4890295877816459128, NULL };
static frost$core$String $s72 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, 7559595925391356673, NULL };
static frost$core$String $s77 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5b\x5d\x3a\x3d", 4, 8142898892933095984, NULL };
static frost$core$String $s107 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x73\x73\x69\x67\x6e\x6d\x65\x6e\x74\x2e\x66\x72\x6f\x73\x74", 16, 4890295877816459128, NULL };
static frost$core$String $s108 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x6c\x76\x61\x6c\x75\x65\x2e\x4c\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x6c\x76\x61\x6c\x75\x65\x2e\x4c\x56\x61\x6c\x75\x65", 107, 5030970485974034943, NULL };
static frost$core$String $s120 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x73\x73\x69\x67\x6e\x6d\x65\x6e\x74\x2e\x66\x72\x6f\x73\x74", 16, 4890295877816459128, NULL };
static frost$core$String $s121 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x6c\x76\x61\x6c\x75\x65\x2e\x4c\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x6c\x76\x61\x6c\x75\x65\x2e\x4c\x56\x61\x6c\x75\x65", 107, 5030970485974034943, NULL };
static frost$core$String $s139 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x73\x73\x69\x67\x6e\x6d\x65\x6e\x74\x2e\x66\x72\x6f\x73\x74", 16, 4890295877816459128, NULL };
static frost$core$String $s140 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, 7559595925391356673, NULL };
static frost$core$String $s148 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x73\x73\x69\x67\x6e\x6d\x65\x6e\x74\x2e\x66\x72\x6f\x73\x74", 16, 4890295877816459128, NULL };
static frost$core$String $s149 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x6c\x76\x61\x6c\x75\x65\x2e\x4c\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x6c\x76\x61\x6c\x75\x65\x2e\x4c\x56\x61\x6c\x75\x65", 107, 5030970485974034943, NULL };
static frost$core$String $s167 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x73\x73\x69\x67\x6e\x6d\x65\x6e\x74\x2e\x66\x72\x6f\x73\x74", 16, 4890295877816459128, NULL };
static frost$core$String $s168 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x6c\x76\x61\x6c\x75\x65\x2e\x4c\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x6c\x76\x61\x6c\x75\x65\x2e\x4c\x56\x61\x6c\x75\x65", 107, 5030970485974034943, NULL };
static frost$core$String $s173 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x73\x73\x69\x67\x6e\x6d\x65\x6e\x74\x2e\x66\x72\x6f\x73\x74", 16, 4890295877816459128, NULL };
static frost$core$String $s174 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, 7559595925391356673, NULL };

void org$frostlang$frostc$statement$Assignment$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$ASTNode(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Position param1, org$frostlang$frostc$ASTNode* param2, org$frostlang$frostc$expression$Binary$Operator param3, org$frostlang$frostc$ASTNode* param4) {

org$frostlang$frostc$expression$Binary$Operator local0;
org$frostlang$frostc$expression$Binary$Operator local1;
org$frostlang$frostc$Position local2;
org$frostlang$frostc$ASTNode* local3 = NULL;
org$frostlang$frostc$expression$Binary$Operator local4;
org$frostlang$frostc$ASTNode* local5 = NULL;
org$frostlang$frostc$expression$Binary$Operator local6;
org$frostlang$frostc$expression$Binary$Operator local7;
frost$collections$Array* local8 = NULL;
org$frostlang$frostc$IR$Value* local9 = NULL;
org$frostlang$frostc$lvalue$LValue* local10 = NULL;
org$frostlang$frostc$IR$Value* local11 = NULL;
org$frostlang$frostc$expression$Binary$Operator local12;
org$frostlang$frostc$expression$Binary$Operator local13;
org$frostlang$frostc$IR$Value* local14 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Assignment.frost:16
frost$core$Bit $tmp2 = org$frostlang$frostc$expression$Binary$Operator$get_isAssignment$R$frost$core$Bit(param3);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Assignment.frost:16:12
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp3 = $tmp2.value;
bool $tmp4 = !$tmp3;
frost$core$Bit $tmp5 = (frost$core$Bit) {$tmp4};
bool $tmp6 = $tmp5.value;
if ($tmp6) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Assignment.frost:17
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, &$s7);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Assignment.frost:18
return;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Assignment.frost:20
org$frostlang$frostc$expression$Binary$Operator$wrapper* $tmp8;
$tmp8 = (org$frostlang$frostc$expression$Binary$Operator$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$expression$Binary$Operator$wrapperclass);
$tmp8->value = param3;
frost$core$Int $tmp9 = (frost$core$Int) {24u};
// begin inline call to org.frostlang.frostc.expression.Binary.Operator.init(rv:frost.core.Int):org.frostlang.frostc.expression.Binary.Operator from Assignment.frost:20:32
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
frost$core$Int* $tmp10 = &(&local1)->$rawValue;
*$tmp10 = $tmp9;
org$frostlang$frostc$expression$Binary$Operator $tmp11 = *(&local1);
*(&local0) = $tmp11;
org$frostlang$frostc$expression$Binary$Operator $tmp12 = *(&local0);
org$frostlang$frostc$expression$Binary$Operator$wrapper* $tmp13;
$tmp13 = (org$frostlang$frostc$expression$Binary$Operator$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$expression$Binary$Operator$wrapperclass);
$tmp13->value = $tmp12;
ITable* $tmp14 = ((frost$core$Equatable*) $tmp8)->$class->itable;
while ($tmp14->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp14 = $tmp14->next;
}
$fn16 $tmp15 = $tmp14->methods[0];
frost$core$Bit $tmp17 = $tmp15(((frost$core$Equatable*) $tmp8), ((frost$core$Equatable*) $tmp13));
bool $tmp18 = $tmp17.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp13)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp8)));
if ($tmp18) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Assignment.frost:21
frost$core$Int* $tmp19 = &param2->$rawValue;
frost$core$Int $tmp20 = *$tmp19;
frost$core$Int $tmp21 = (frost$core$Int) {5u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Assignment.frost:22:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp22 = $tmp20.value;
int64_t $tmp23 = $tmp21.value;
bool $tmp24 = $tmp22 == $tmp23;
frost$core$Bit $tmp25 = (frost$core$Bit) {$tmp24};
bool $tmp26 = $tmp25.value;
if ($tmp26) goto block8; else goto block7;
block8:;
org$frostlang$frostc$Position* $tmp27 = (org$frostlang$frostc$Position*) (param2->$data + 0);
org$frostlang$frostc$Position $tmp28 = *$tmp27;
*(&local2) = $tmp28;
org$frostlang$frostc$ASTNode** $tmp29 = (org$frostlang$frostc$ASTNode**) (param2->$data + 24);
org$frostlang$frostc$ASTNode* $tmp30 = *$tmp29;
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp30));
org$frostlang$frostc$ASTNode* $tmp31 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp31));
*(&local3) = $tmp30;
org$frostlang$frostc$expression$Binary$Operator* $tmp32 = (org$frostlang$frostc$expression$Binary$Operator*) (param2->$data + 32);
org$frostlang$frostc$expression$Binary$Operator $tmp33 = *$tmp32;
*(&local4) = $tmp33;
org$frostlang$frostc$ASTNode** $tmp34 = (org$frostlang$frostc$ASTNode**) (param2->$data + 40);
org$frostlang$frostc$ASTNode* $tmp35 = *$tmp34;
*(&local5) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp35));
org$frostlang$frostc$ASTNode* $tmp36 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp36));
*(&local5) = $tmp35;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Assignment.frost:23
org$frostlang$frostc$expression$Binary$Operator $tmp37 = *(&local4);
org$frostlang$frostc$expression$Binary$Operator$wrapper* $tmp38;
$tmp38 = (org$frostlang$frostc$expression$Binary$Operator$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$expression$Binary$Operator$wrapperclass);
$tmp38->value = $tmp37;
frost$core$Int $tmp39 = (frost$core$Int) {20u};
// begin inline call to org.frostlang.frostc.expression.Binary.Operator.init(rv:frost.core.Int):org.frostlang.frostc.expression.Binary.Operator from Assignment.frost:23:44
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
frost$core$Int* $tmp40 = &(&local7)->$rawValue;
*$tmp40 = $tmp39;
org$frostlang$frostc$expression$Binary$Operator $tmp41 = *(&local7);
*(&local6) = $tmp41;
org$frostlang$frostc$expression$Binary$Operator $tmp42 = *(&local6);
org$frostlang$frostc$expression$Binary$Operator$wrapper* $tmp43;
$tmp43 = (org$frostlang$frostc$expression$Binary$Operator$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$expression$Binary$Operator$wrapperclass);
$tmp43->value = $tmp42;
ITable* $tmp44 = ((frost$core$Equatable*) $tmp38)->$class->itable;
while ($tmp44->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp44 = $tmp44->next;
}
$fn46 $tmp45 = $tmp44->methods[0];
frost$core$Bit $tmp47 = $tmp45(((frost$core$Equatable*) $tmp38), ((frost$core$Equatable*) $tmp43));
bool $tmp48 = $tmp47.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp43)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp38)));
if ($tmp48) goto block10; else goto block11;
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Assignment.frost:24
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp49 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp49);
*(&local8) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp49));
frost$collections$Array* $tmp50 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp50));
*(&local8) = $tmp49;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp49));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Assignment.frost:25
org$frostlang$frostc$ASTNode* $tmp51 = *(&local3);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp52 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int $tmp53 = (frost$core$Int) {1u};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int($tmp52, $tmp53);
org$frostlang$frostc$IR$Value* $tmp54 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp51, $tmp52);
*(&local9) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp54));
org$frostlang$frostc$IR$Value* $tmp55 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp55));
*(&local9) = $tmp54;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp54));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp52));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Assignment.frost:26
org$frostlang$frostc$IR$Value* $tmp56 = *(&local9);
frost$core$Bit $tmp57 = (frost$core$Bit) {$tmp56 == NULL};
bool $tmp58 = $tmp57.value;
if ($tmp58) goto block13; else goto block14;
block13:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Assignment.frost:27
org$frostlang$frostc$IR$Value* $tmp59 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp59));
*(&local9) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$collections$Array* $tmp60 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp60));
*(&local8) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$ASTNode* $tmp61 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp61));
*(&local5) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp62 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp62));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
return;
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Assignment.frost:29
frost$collections$Array* $tmp63 = *(&local8);
org$frostlang$frostc$ASTNode* $tmp64 = *(&local5);
frost$collections$Array$add$frost$collections$Array$T($tmp63, ((frost$core$Object*) $tmp64));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Assignment.frost:30
frost$collections$Array* $tmp65 = *(&local8);
frost$collections$Array$add$frost$collections$Array$T($tmp65, ((frost$core$Object*) param4));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Assignment.frost:31
org$frostlang$frostc$Position $tmp66 = *(&local2);
org$frostlang$frostc$IR$Value* $tmp67 = *(&local9);
frost$core$Bit $tmp68 = (frost$core$Bit) {$tmp67 != NULL};
bool $tmp69 = $tmp68.value;
if ($tmp69) goto block15; else goto block16;
block16:;
frost$core$Int $tmp70 = (frost$core$Int) {31u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s71, $tmp70, &$s72);
abort(); // unreachable
block15:;
frost$collections$Array* $tmp73 = *(&local8);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp74 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int $tmp75 = (frost$core$Int) {0u};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int($tmp74, $tmp75);
org$frostlang$frostc$IR$Value* $tmp76 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp66, $tmp67, &$s77, ((frost$collections$ListView*) $tmp73), $tmp74);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp76));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp74));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Assignment.frost:33
org$frostlang$frostc$IR$Value* $tmp78 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp78));
*(&local9) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$collections$Array* $tmp79 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp79));
*(&local8) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$ASTNode* $tmp80 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp80));
*(&local5) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp81 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp81));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
return;
block11:;
org$frostlang$frostc$ASTNode* $tmp82 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp82));
*(&local5) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp83 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp83));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block7;
block7:;
goto block5;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Assignment.frost:38
org$frostlang$frostc$lvalue$LValue* $tmp84 = org$frostlang$frostc$lvalue$LValue$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$lvalue$LValue$Q(param0, param2);
*(&local10) = ((org$frostlang$frostc$lvalue$LValue*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp84));
org$frostlang$frostc$lvalue$LValue* $tmp85 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp85));
*(&local10) = $tmp84;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp84));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Assignment.frost:39
org$frostlang$frostc$lvalue$LValue* $tmp86 = *(&local10);
frost$core$Bit $tmp87 = (frost$core$Bit) {$tmp86 == NULL};
bool $tmp88 = $tmp87.value;
if ($tmp88) goto block17; else goto block18;
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Assignment.frost:40
org$frostlang$frostc$lvalue$LValue* $tmp89 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp89));
*(&local10) = ((org$frostlang$frostc$lvalue$LValue*) NULL);
return;
block18:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Assignment.frost:42
*(&local11) = ((org$frostlang$frostc$IR$Value*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Assignment.frost:43
org$frostlang$frostc$expression$Binary$Operator$wrapper* $tmp90;
$tmp90 = (org$frostlang$frostc$expression$Binary$Operator$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$expression$Binary$Operator$wrapperclass);
$tmp90->value = param3;
frost$core$Int $tmp91 = (frost$core$Int) {24u};
// begin inline call to org.frostlang.frostc.expression.Binary.Operator.init(rv:frost.core.Int):org.frostlang.frostc.expression.Binary.Operator from Assignment.frost:43:32
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
frost$core$Int* $tmp92 = &(&local13)->$rawValue;
*$tmp92 = $tmp91;
org$frostlang$frostc$expression$Binary$Operator $tmp93 = *(&local13);
*(&local12) = $tmp93;
org$frostlang$frostc$expression$Binary$Operator $tmp94 = *(&local12);
org$frostlang$frostc$expression$Binary$Operator$wrapper* $tmp95;
$tmp95 = (org$frostlang$frostc$expression$Binary$Operator$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$expression$Binary$Operator$wrapperclass);
$tmp95->value = $tmp94;
ITable* $tmp96 = ((frost$core$Equatable*) $tmp90)->$class->itable;
while ($tmp96->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp96 = $tmp96->next;
}
$fn98 $tmp97 = $tmp96->methods[0];
frost$core$Bit $tmp99 = $tmp97(((frost$core$Equatable*) $tmp90), ((frost$core$Equatable*) $tmp95));
bool $tmp100 = $tmp99.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp95)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp90)));
if ($tmp100) goto block19; else goto block21;
block19:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Assignment.frost:44
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp101 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int $tmp102 = (frost$core$Int) {3u};
org$frostlang$frostc$lvalue$LValue* $tmp103 = *(&local10);
frost$core$Bit $tmp104 = (frost$core$Bit) {$tmp103 != NULL};
bool $tmp105 = $tmp104.value;
if ($tmp105) goto block23; else goto block24;
block24:;
frost$core$Int $tmp106 = (frost$core$Int) {44u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s107, $tmp106, &$s108);
abort(); // unreachable
block23:;
ITable* $tmp109 = $tmp103->$class->itable;
while ($tmp109->$class != (frost$core$Class*) &org$frostlang$frostc$lvalue$LValue$class) {
    $tmp109 = $tmp109->next;
}
$fn111 $tmp110 = $tmp109->methods[0];
org$frostlang$frostc$Type* $tmp112 = $tmp110($tmp103);
frost$core$Bit $tmp113 = (frost$core$Bit) {false};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int$org$frostlang$frostc$Type$frost$core$Bit($tmp101, $tmp102, $tmp112, $tmp113);
org$frostlang$frostc$IR$Value* $tmp114 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param4, $tmp101);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp114));
org$frostlang$frostc$IR$Value* $tmp115 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp115));
*(&local11) = $tmp114;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp114));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp112));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp101));
goto block20;
block21:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Assignment.frost:47
org$frostlang$frostc$lvalue$LValue* $tmp116 = *(&local10);
frost$core$Bit $tmp117 = (frost$core$Bit) {$tmp116 != NULL};
bool $tmp118 = $tmp117.value;
if ($tmp118) goto block25; else goto block26;
block26:;
frost$core$Int $tmp119 = (frost$core$Int) {47u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s120, $tmp119, &$s121);
abort(); // unreachable
block25:;
ITable* $tmp122 = $tmp116->$class->itable;
while ($tmp122->$class != (frost$core$Class*) &org$frostlang$frostc$lvalue$LValue$class) {
    $tmp122 = $tmp122->next;
}
$fn124 $tmp123 = $tmp122->methods[1];
org$frostlang$frostc$IR$Value* $tmp125 = $tmp123($tmp116);
*(&local14) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp125));
org$frostlang$frostc$IR$Value* $tmp126 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp126));
*(&local14) = $tmp125;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp125));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Assignment.frost:48
org$frostlang$frostc$IR$Value* $tmp127 = *(&local14);
frost$core$Bit $tmp128 = (frost$core$Bit) {$tmp127 == NULL};
bool $tmp129 = $tmp128.value;
if ($tmp129) goto block27; else goto block28;
block27:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Assignment.frost:49
org$frostlang$frostc$IR$Value* $tmp130 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp130));
*(&local14) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp131 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp131));
*(&local11) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$lvalue$LValue* $tmp132 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp132));
*(&local10) = ((org$frostlang$frostc$lvalue$LValue*) NULL);
return;
block28:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Assignment.frost:51
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp133 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp134 = (frost$core$Int) {26u};
org$frostlang$frostc$IR$Value* $tmp135 = *(&local14);
frost$core$Bit $tmp136 = (frost$core$Bit) {$tmp135 != NULL};
bool $tmp137 = $tmp136.value;
if ($tmp137) goto block29; else goto block30;
block30:;
frost$core$Int $tmp138 = (frost$core$Int) {51u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s139, $tmp138, &$s140);
abort(); // unreachable
block29:;
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp133, $tmp134, param1, $tmp135);
org$frostlang$frostc$expression$Binary$Operator $tmp141 = org$frostlang$frostc$expression$Binary$Operator$removeAssignment$R$org$frostlang$frostc$expression$Binary$Operator(param3);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp142 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int $tmp143 = (frost$core$Int) {3u};
org$frostlang$frostc$lvalue$LValue* $tmp144 = *(&local10);
frost$core$Bit $tmp145 = (frost$core$Bit) {$tmp144 != NULL};
bool $tmp146 = $tmp145.value;
if ($tmp146) goto block31; else goto block32;
block32:;
frost$core$Int $tmp147 = (frost$core$Int) {52u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s148, $tmp147, &$s149);
abort(); // unreachable
block31:;
ITable* $tmp150 = $tmp144->$class->itable;
while ($tmp150->$class != (frost$core$Class*) &org$frostlang$frostc$lvalue$LValue$class) {
    $tmp150 = $tmp150->next;
}
$fn152 $tmp151 = $tmp150->methods[0];
org$frostlang$frostc$Type* $tmp153 = $tmp151($tmp144);
frost$core$Bit $tmp154 = (frost$core$Bit) {false};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int$org$frostlang$frostc$Type$frost$core$Bit($tmp142, $tmp143, $tmp153, $tmp154);
org$frostlang$frostc$IR$Value* $tmp155 = org$frostlang$frostc$expression$Binary$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp133, $tmp141, param4, $tmp142);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp155));
org$frostlang$frostc$IR$Value* $tmp156 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp156));
*(&local11) = $tmp155;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp155));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp153));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp142));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp133));
org$frostlang$frostc$IR$Value* $tmp157 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp157));
*(&local14) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block20;
block20:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Assignment.frost:54
org$frostlang$frostc$IR$Value* $tmp158 = *(&local11);
frost$core$Bit $tmp159 = (frost$core$Bit) {$tmp158 == NULL};
bool $tmp160 = $tmp159.value;
if ($tmp160) goto block33; else goto block34;
block33:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Assignment.frost:55
org$frostlang$frostc$IR$Value* $tmp161 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp161));
*(&local11) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$lvalue$LValue* $tmp162 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp162));
*(&local10) = ((org$frostlang$frostc$lvalue$LValue*) NULL);
return;
block34:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Assignment.frost:57
org$frostlang$frostc$lvalue$LValue* $tmp163 = *(&local10);
frost$core$Bit $tmp164 = (frost$core$Bit) {$tmp163 != NULL};
bool $tmp165 = $tmp164.value;
if ($tmp165) goto block35; else goto block36;
block36:;
frost$core$Int $tmp166 = (frost$core$Int) {57u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s167, $tmp166, &$s168);
abort(); // unreachable
block35:;
org$frostlang$frostc$IR$Value* $tmp169 = *(&local11);
frost$core$Bit $tmp170 = (frost$core$Bit) {$tmp169 != NULL};
bool $tmp171 = $tmp170.value;
if ($tmp171) goto block37; else goto block38;
block38:;
frost$core$Int $tmp172 = (frost$core$Int) {57u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s173, $tmp172, &$s174);
abort(); // unreachable
block37:;
ITable* $tmp175 = $tmp163->$class->itable;
while ($tmp175->$class != (frost$core$Class*) &org$frostlang$frostc$lvalue$LValue$class) {
    $tmp175 = $tmp175->next;
}
$fn177 $tmp176 = $tmp175->methods[2];
$tmp176($tmp163, $tmp169);
org$frostlang$frostc$IR$Value* $tmp178 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp178));
*(&local11) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$lvalue$LValue* $tmp179 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp179));
*(&local10) = ((org$frostlang$frostc$lvalue$LValue*) NULL);
return;

}
void org$frostlang$frostc$statement$Assignment$init(org$frostlang$frostc$statement$Assignment* param0) {

return;

}
void org$frostlang$frostc$statement$Assignment$cleanup(org$frostlang$frostc$statement$Assignment* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Assignment.frost:12
frost$core$Object$cleanup(((frost$core$Object*) param0));
return;

}






