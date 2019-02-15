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
typedef frost$collections$Iterator* (*$fn16)(frost$collections$Iterator*, frost$core$MutableMethod*);
typedef frost$collections$Iterator* (*$fn22)(frost$collections$MapView*);
typedef frost$core$Object* (*$fn24)(frost$core$Tuple2*);
typedef frost$collections$Iterator* (*$fn32)(frost$collections$Iterator*, frost$core$MutableMethod*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4d\x61\x70\x56\x69\x65\x77", 25, 236329803138584107, NULL };

frost$core$Object* frost$collections$MapView$$anonymous1$$LPfrost$collections$MapView$K$Cfrost$collections$MapView$V$RP$R$frost$collections$MapView$K(frost$core$Tuple2* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/MapView.frost:51
frost$core$Object** $tmp2 = &param0->f0;
frost$core$Object* $tmp3 = *$tmp2;
frost$core$Frost$ref$frost$core$Object$Q($tmp3);
return $tmp3;

}
frost$collections$Iterator* frost$collections$MapView$get_keys$R$frost$collections$Iterator$LTfrost$collections$MapView$K$GT(frost$collections$MapView* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/MapView.frost:51
ITable* $tmp4 = param0->$class->itable;
while ($tmp4->$class != (frost$core$Class*) &frost$collections$MapView$class) {
    $tmp4 = $tmp4->next;
}
$fn6 $tmp5 = $tmp4->methods[3];
frost$collections$Iterator* $tmp7 = $tmp5(param0);
FROST_ASSERT(32 == sizeof(frost$core$Method));
frost$core$Method* $tmp9 = (frost$core$Method*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$Method$class);
// begin inline call to frost.core.Method.init(pointer:frost.unsafe.Pointer<frost.core.Int8>, target:frost.core.Immutable?) from MapView.frost:51:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Method.frost:37
frost$core$Int8** $tmp10 = &$tmp9->pointer;
*$tmp10 = ((frost$core$Int8*) frost$collections$MapView$$anonymous1$$LPfrost$collections$MapView$K$Cfrost$collections$MapView$V$RP$R$frost$collections$MapView$K);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Method.frost:38
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Immutable*) NULL)));
frost$core$Immutable** $tmp11 = &$tmp9->target;
frost$core$Immutable* $tmp12 = *$tmp11;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp12));
frost$core$Immutable** $tmp13 = &$tmp9->target;
*$tmp13 = ((frost$core$Immutable*) NULL);
ITable* $tmp14 = $tmp7->$class->itable;
while ($tmp14->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp14 = $tmp14->next;
}
$fn16 $tmp15 = $tmp14->methods[11];
frost$collections$Iterator* $tmp17 = $tmp15($tmp7, ((frost$core$MutableMethod*) $tmp9));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp17));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp17));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp9));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp7));
return $tmp17;

}
frost$core$Object* frost$collections$MapView$$anonymous2$$LPfrost$collections$MapView$K$Cfrost$collections$MapView$V$RP$R$frost$collections$MapView$V(frost$core$Tuple2* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/MapView.frost:57
frost$core$Object** $tmp18 = &param0->f1;
frost$core$Object* $tmp19 = *$tmp18;
frost$core$Frost$ref$frost$core$Object$Q($tmp19);
return $tmp19;

}
frost$collections$Iterator* frost$collections$MapView$get_values$R$frost$collections$Iterator$LTfrost$collections$MapView$V$GT(frost$collections$MapView* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/MapView.frost:57
ITable* $tmp20 = param0->$class->itable;
while ($tmp20->$class != (frost$core$Class*) &frost$collections$MapView$class) {
    $tmp20 = $tmp20->next;
}
$fn22 $tmp21 = $tmp20->methods[3];
frost$collections$Iterator* $tmp23 = $tmp21(param0);
FROST_ASSERT(32 == sizeof(frost$core$Method));
frost$core$Method* $tmp25 = (frost$core$Method*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$Method$class);
// begin inline call to frost.core.Method.init(pointer:frost.unsafe.Pointer<frost.core.Int8>, target:frost.core.Immutable?) from MapView.frost:57:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Method.frost:37
frost$core$Int8** $tmp26 = &$tmp25->pointer;
*$tmp26 = ((frost$core$Int8*) frost$collections$MapView$$anonymous2$$LPfrost$collections$MapView$K$Cfrost$collections$MapView$V$RP$R$frost$collections$MapView$V);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Method.frost:38
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Immutable*) NULL)));
frost$core$Immutable** $tmp27 = &$tmp25->target;
frost$core$Immutable* $tmp28 = *$tmp27;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp28));
frost$core$Immutable** $tmp29 = &$tmp25->target;
*$tmp29 = ((frost$core$Immutable*) NULL);
ITable* $tmp30 = $tmp23->$class->itable;
while ($tmp30->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp30 = $tmp30->next;
}
$fn32 $tmp31 = $tmp30->methods[11];
frost$collections$Iterator* $tmp33 = $tmp31($tmp23, ((frost$core$MutableMethod*) $tmp25));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp33));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp33));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp25));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp23));
return $tmp33;

}






