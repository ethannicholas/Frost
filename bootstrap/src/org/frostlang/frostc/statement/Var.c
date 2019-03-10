#include "org/frostlang/frostc/statement/Var.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/Compiler.h"
#include "org/frostlang/frostc/Position.h"
#include "org/frostlang/frostc/Variable/Kind.h"
#include "org/frostlang/frostc/FixedArray.h"
#include "org/frostlang/frostc/ASTNode.h"
#include "frost/collections/Iterable.h"
#include "frost/collections/Iterator.h"
#include "frost/core/Bit.h"
#include "frost/core/Frost.h"
#include "frost/core/Int64.h"


static frost$core$String $s1;
org$frostlang$frostc$statement$Var$class_type org$frostlang$frostc$statement$Var$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$statement$Var$cleanup} };

typedef frost$collections$Iterator* (*$fn4)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn8)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn13)(frost$collections$Iterator*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x73\x74\x61\x74\x65\x6d\x65\x6e\x74\x2e\x56\x61\x72", 34, -1895594640368022534, NULL };
static frost$core$String $s40 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x56\x61\x72\x2e\x66\x72\x6f\x73\x74", 9, 290294940600097642, NULL };

void org$frostlang$frostc$statement$Var$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$Variable$Kind$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Position param1, org$frostlang$frostc$Variable$Kind param2, org$frostlang$frostc$FixedArray* param3) {

org$frostlang$frostc$ASTNode* local0 = NULL;
org$frostlang$frostc$Position local1;
org$frostlang$frostc$ASTNode* local2 = NULL;
org$frostlang$frostc$ASTNode* local3 = NULL;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/statement/Var.frost:13
ITable* $tmp2 = ((frost$collections$Iterable*) param3)->$class->itable;
while ($tmp2->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2 = $tmp2->next;
}
$fn4 $tmp3 = $tmp2->methods[0];
frost$collections$Iterator* $tmp5 = $tmp3(((frost$collections$Iterable*) param3));
goto block1;
block1:;
ITable* $tmp6 = $tmp5->$class->itable;
while ($tmp6->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp6 = $tmp6->next;
}
$fn8 $tmp7 = $tmp6->methods[0];
frost$core$Bit $tmp9 = $tmp7($tmp5);
bool $tmp10 = $tmp9.value;
if ($tmp10) goto block3; else goto block2;
block2:;
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp11 = $tmp5->$class->itable;
while ($tmp11->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp11 = $tmp11->next;
}
$fn13 $tmp12 = $tmp11->methods[1];
frost$core$Object* $tmp14 = $tmp12($tmp5);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp14)));
org$frostlang$frostc$ASTNode* $tmp15 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp15));
*(&local0) = ((org$frostlang$frostc$ASTNode*) $tmp14);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/statement/Var.frost:14
org$frostlang$frostc$ASTNode* $tmp16 = *(&local0);
frost$core$Int64* $tmp17 = &$tmp16->$rawValue;
frost$core$Int64 $tmp18 = *$tmp17;
frost$core$Int64 $tmp19 = (frost$core$Int64) {14u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Var.frost:15:29
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp20 = $tmp18.value;
int64_t $tmp21 = $tmp19.value;
bool $tmp22 = $tmp20 == $tmp21;
frost$core$Bit $tmp23 = (frost$core$Bit) {$tmp22};
bool $tmp24 = $tmp23.value;
if ($tmp24) goto block5; else goto block6;
block5:;
org$frostlang$frostc$Position* $tmp25 = (org$frostlang$frostc$Position*) ($tmp16->$data + 0);
org$frostlang$frostc$Position $tmp26 = *$tmp25;
*(&local1) = $tmp26;
org$frostlang$frostc$ASTNode** $tmp27 = (org$frostlang$frostc$ASTNode**) ($tmp16->$data + 24);
org$frostlang$frostc$ASTNode* $tmp28 = *$tmp27;
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp28));
org$frostlang$frostc$ASTNode* $tmp29 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp29));
*(&local2) = $tmp28;
org$frostlang$frostc$ASTNode** $tmp30 = (org$frostlang$frostc$ASTNode**) ($tmp16->$data + 32);
org$frostlang$frostc$ASTNode* $tmp31 = *$tmp30;
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp31));
org$frostlang$frostc$ASTNode* $tmp32 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp32));
*(&local3) = $tmp31;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/statement/Var.frost:16
org$frostlang$frostc$Position $tmp33 = *(&local1);
org$frostlang$frostc$ASTNode* $tmp34 = *(&local2);
org$frostlang$frostc$ASTNode* $tmp35 = *(&local3);
org$frostlang$frostc$Compiler$compileDeclaration$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$Variable$Kind(param0, $tmp33, $tmp34, $tmp35, param2);
org$frostlang$frostc$ASTNode* $tmp36 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp36));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp37 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp37));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp14);
org$frostlang$frostc$ASTNode* $tmp38 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp38));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block6:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/statement/Var.frost:19
frost$core$Int64 $tmp39 = (frost$core$Int64) {19u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s40, $tmp39);
abort(); // unreachable
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5));
return;

}
void org$frostlang$frostc$statement$Var$init(org$frostlang$frostc$statement$Var* param0) {

return;

}
void org$frostlang$frostc$statement$Var$cleanup(org$frostlang$frostc$statement$Var* param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/statement/Var.frost:9
frost$core$Object$cleanup(((frost$core$Object*) param0));
return;

}






