#include "frost/collections/CollectionWriter.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/collections/CollectionView.h"
#include "frost/collections/Iterable.h"
#include "frost/collections/Iterator.h"
#include "frost/core/Bit.h"
#include "frost/core/Frost.h"


struct { frost$core$Class* cl; ITable* next; void* methods[5]; } frost$collections$CollectionWriter$_frost$collections$CollectionWriter = { (frost$core$Class*) &frost$collections$CollectionWriter$class, NULL, { NULL, NULL, frost$collections$CollectionWriter$addAll$frost$collections$CollectionView$LTfrost$collections$CollectionWriter$T$GT, NULL, NULL} };

static frost$core$String $s1;
frost$collections$CollectionWriter$class_type frost$collections$CollectionWriter$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &frost$collections$CollectionWriter$_frost$collections$CollectionWriter, { frost$core$Object$get_asString$R$frost$core$String, frost$core$Object$cleanup, NULL, NULL, frost$collections$CollectionWriter$addAll$frost$collections$CollectionView$LTfrost$collections$CollectionWriter$T$GT, NULL, NULL} };

typedef frost$collections$Iterator* (*$fn4)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn8)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn13)(frost$collections$Iterator*);
typedef void (*$fn19)(frost$collections$CollectionWriter*, frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x57\x72\x69\x74\x65\x72", 34, 4280469431822817607, NULL };

void frost$collections$CollectionWriter$addAll$frost$collections$CollectionView$LTfrost$collections$CollectionWriter$T$GT(frost$collections$CollectionWriter* param0, frost$collections$CollectionView* param1) {

frost$core$Object* local0 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/CollectionWriter.frost:29
ITable* $tmp2 = ((frost$collections$Iterable*) param1)->$class->itable;
while ($tmp2->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2 = $tmp2->next;
}
$fn4 $tmp3 = $tmp2->methods[0];
frost$collections$Iterator* $tmp5 = $tmp3(((frost$collections$Iterable*) param1));
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
*(&local0) = ((frost$core$Object*) NULL);
ITable* $tmp11 = $tmp5->$class->itable;
while ($tmp11->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp11 = $tmp11->next;
}
$fn13 $tmp12 = $tmp11->methods[1];
frost$core$Object* $tmp14 = $tmp12($tmp5);
frost$core$Frost$ref$frost$core$Object$Q($tmp14);
frost$core$Object* $tmp15 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q($tmp15);
*(&local0) = $tmp14;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/CollectionWriter.frost:30
frost$core$Object* $tmp16 = *(&local0);
ITable* $tmp17 = param0->$class->itable;
while ($tmp17->$class != (frost$core$Class*) &frost$collections$CollectionWriter$class) {
    $tmp17 = $tmp17->next;
}
$fn19 $tmp18 = $tmp17->methods[1];
$tmp18(param0, $tmp16);
frost$core$Frost$unref$frost$core$Object$Q($tmp14);
frost$core$Object* $tmp20 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q($tmp20);
*(&local0) = ((frost$core$Object*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5));
return;

}






