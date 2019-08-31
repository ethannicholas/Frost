#include "frost/collections/IdentitySet/_Closure2.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/MutableMethod.h"
#include "frost/core/Frost.h"
#include "frost/core/Bit.h"


static frost$core$String $s1;
frost$collections$IdentitySet$_Closure2$class_type frost$collections$IdentitySet$_Closure2$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, frost$collections$IdentitySet$_Closure2$cleanup, frost$collections$IdentitySet$_Closure2$$anonymous1$frost$collections$IdentitySet$T$frost$collections$IdentitySet$T$R$frost$core$Bit} };

typedef frost$core$Bit (*$fn14)(frost$core$Object*);
typedef frost$core$Bit (*$fn16)(frost$core$Object*, frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x53\x65\x74\x2e\x5f\x43\x6c\x6f\x73\x75\x72\x65\x32", 39, 4710045827721624792, NULL };

void frost$collections$IdentitySet$_Closure2$init$$LPfrost$collections$IdentitySet$T$RP$EQ$GT$LPfrost$core$Bit$RP(frost$collections$IdentitySet$_Closure2* param0, frost$core$MutableMethod* param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentitySet.frost:54
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
frost$core$MutableMethod** $tmp2 = &param0->test;
frost$core$MutableMethod* $tmp3 = *$tmp2;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3));
frost$core$MutableMethod** $tmp4 = &param0->test;
*$tmp4 = param1;
return;

}
void frost$collections$IdentitySet$_Closure2$cleanup(frost$collections$IdentitySet$_Closure2* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentitySet.frost:54
frost$core$Object$cleanup(((frost$core$Object*) param0));
frost$core$MutableMethod** $tmp5 = &param0->test;
frost$core$MutableMethod* $tmp6 = *$tmp5;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6));
return;

}
frost$core$Bit frost$collections$IdentitySet$_Closure2$$anonymous1$frost$collections$IdentitySet$T$frost$collections$IdentitySet$T$R$frost$core$Bit(frost$collections$IdentitySet$_Closure2* param0, frost$core$Object* param1, frost$core$Object* param2) {

frost$core$Bit local0;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentitySet.frost:54
frost$core$MutableMethod** $tmp7 = &param0->test;
frost$core$MutableMethod* $tmp8 = *$tmp7;
frost$core$Int8** $tmp9 = &$tmp8->pointer;
frost$core$Int8* $tmp10 = *$tmp9;
frost$core$Object** $tmp11 = &$tmp8->target;
frost$core$Object* $tmp12 = *$tmp11;
bool $tmp13 = $tmp12 != ((frost$core$Object*) NULL);
if ($tmp13) goto block1; else goto block2;
block2:;
frost$core$Bit $tmp15 = (($fn14) $tmp10)(param1);
*(&local0) = $tmp15;
goto block3;
block1:;
frost$core$Bit $tmp17 = (($fn16) $tmp10)($tmp12, param1);
*(&local0) = $tmp17;
goto block3;
block3:;
frost$core$Bit $tmp18 = *(&local0);
return $tmp18;

}






