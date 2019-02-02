#include "frost/collections/MapView.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Tuple2.h"
#include "frost/core/Frost.h"
#include "frost/collections/Iterator.h"
#include "frost/core/Method.h"
#include "frost/core/Immutable.h"
#include "frost/core/MutableMethod.h"


struct { frost$core$Class* cl; ITable* next; void* methods[6]; } frost$collections$MapView$_frost$collections$MapView = { (frost$core$Class*) &frost$collections$MapView$class, NULL, { NULL, NULL, NULL, NULL, frost$collections$MapView$get_keys$R$frost$collections$Iterator$LTfrost$collections$MapView$K$GT, frost$collections$MapView$get_values$R$frost$collections$Iterator$LTfrost$collections$MapView$V$GT} };

static frost$core$String $s1;
frost$collections$MapView$class_type frost$collections$MapView$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &frost$collections$MapView$_frost$collections$MapView, { frost$core$Object$get_asString$R$frost$core$String, frost$core$Object$cleanup, NULL, NULL, NULL, NULL, frost$collections$MapView$get_keys$R$frost$collections$Iterator$LTfrost$collections$MapView$K$GT, frost$collections$MapView$get_values$R$frost$collections$Iterator$LTfrost$collections$MapView$V$GT} };

typedef frost$collections$Iterator* (*$fn6)(frost$collections$MapView*);
typedef frost$core$Object* (*$fn8)(frost$core$Tuple2*);
typedef frost$collections$Iterator* (*$fn12)(frost$collections$Iterator*, frost$core$MutableMethod*);
typedef frost$collections$Iterator* (*$fn18)(frost$collections$MapView*);
typedef frost$core$Object* (*$fn20)(frost$core$Tuple2*);
typedef frost$collections$Iterator* (*$fn24)(frost$collections$Iterator*, frost$core$MutableMethod*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4d\x61\x70\x56\x69\x65\x77", 25, -6526490020202153561, NULL };

frost$core$Object* frost$collections$MapView$$anonymous1$$LPfrost$collections$MapView$K$Cfrost$collections$MapView$V$RP$R$frost$collections$MapView$K(frost$core$Tuple2* param0) {

// line 51
frost$core$Object** $tmp2 = &param0->f0;
frost$core$Object* $tmp3 = *$tmp2;
frost$core$Frost$ref$frost$core$Object$Q($tmp3);
return $tmp3;

}
frost$collections$Iterator* frost$collections$MapView$get_keys$R$frost$collections$Iterator$LTfrost$collections$MapView$K$GT(frost$collections$MapView* param0) {

// line 51
ITable* $tmp4 = param0->$class->itable;
while ($tmp4->$class != (frost$core$Class*) &frost$collections$MapView$class) {
    $tmp4 = $tmp4->next;
}
$fn6 $tmp5 = $tmp4->methods[3];
frost$collections$Iterator* $tmp7 = $tmp5(param0);
FROST_ASSERT(32 == sizeof(frost$core$Method));
frost$core$Method* $tmp9 = (frost$core$Method*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$Method$class);
frost$core$Method$init$frost$unsafe$Pointer$LTfrost$core$Int8$GT$frost$core$Immutable$Q($tmp9, ((frost$core$Int8*) frost$collections$MapView$$anonymous1$$LPfrost$collections$MapView$K$Cfrost$collections$MapView$V$RP$R$frost$collections$MapView$K), ((frost$core$Immutable*) NULL));
ITable* $tmp10 = $tmp7->$class->itable;
while ($tmp10->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp10 = $tmp10->next;
}
$fn12 $tmp11 = $tmp10->methods[11];
frost$collections$Iterator* $tmp13 = $tmp11($tmp7, ((frost$core$MutableMethod*) $tmp9));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp13));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp13));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp9));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp7));
return $tmp13;

}
frost$core$Object* frost$collections$MapView$$anonymous2$$LPfrost$collections$MapView$K$Cfrost$collections$MapView$V$RP$R$frost$collections$MapView$V(frost$core$Tuple2* param0) {

// line 57
frost$core$Object** $tmp14 = &param0->f1;
frost$core$Object* $tmp15 = *$tmp14;
frost$core$Frost$ref$frost$core$Object$Q($tmp15);
return $tmp15;

}
frost$collections$Iterator* frost$collections$MapView$get_values$R$frost$collections$Iterator$LTfrost$collections$MapView$V$GT(frost$collections$MapView* param0) {

// line 57
ITable* $tmp16 = param0->$class->itable;
while ($tmp16->$class != (frost$core$Class*) &frost$collections$MapView$class) {
    $tmp16 = $tmp16->next;
}
$fn18 $tmp17 = $tmp16->methods[3];
frost$collections$Iterator* $tmp19 = $tmp17(param0);
FROST_ASSERT(32 == sizeof(frost$core$Method));
frost$core$Method* $tmp21 = (frost$core$Method*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$Method$class);
frost$core$Method$init$frost$unsafe$Pointer$LTfrost$core$Int8$GT$frost$core$Immutable$Q($tmp21, ((frost$core$Int8*) frost$collections$MapView$$anonymous2$$LPfrost$collections$MapView$K$Cfrost$collections$MapView$V$RP$R$frost$collections$MapView$V), ((frost$core$Immutable*) NULL));
ITable* $tmp22 = $tmp19->$class->itable;
while ($tmp22->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp22 = $tmp22->next;
}
$fn24 $tmp23 = $tmp22->methods[11];
frost$collections$Iterator* $tmp25 = $tmp23($tmp19, ((frost$core$MutableMethod*) $tmp21));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp25));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp25));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp21));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp19));
return $tmp25;

}






