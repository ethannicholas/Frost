#include "org/frostlang/frostc/Compiler/Settings.h"
#include "frost/core/Immutable.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Object.h"
#include "frost/io/File.h"
#include "frost/collections/ListView.h"
#include "frost/core/Int64.h"
#include "frost/core/Bit.h"
#include "frost/core/Frost.h"
#include "frost/collections/ImmutableArray.h"

__attribute__((weak)) void org$frostlang$frostc$Compiler$Settings$cleanup$shim(org$frostlang$frostc$Compiler$Settings* p0) {
    org$frostlang$frostc$Compiler$Settings$cleanup(p0);

}

static frost$core$String $s1;
org$frostlang$frostc$Compiler$Settings$class_type org$frostlang$frostc$Compiler$Settings$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Immutable$class, NULL, { frost$core$Object$convert$R$frost$core$String, org$frostlang$frostc$Compiler$Settings$cleanup$shim} };


static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x53\x65\x74\x74\x69\x6e\x67\x73", 38, -7290543572484638794, NULL };

void org$frostlang$frostc$Compiler$Settings$init$frost$io$File$frost$collections$ListView$LTfrost$io$File$GT$frost$core$Int64$frost$core$Int64$frost$core$Bit(org$frostlang$frostc$Compiler$Settings* param0, frost$io$File* param1, frost$collections$ListView* param2, frost$core$Int64 param3, frost$core$Int64 param4, frost$core$Bit param5) {

// line 287
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
frost$io$File** $tmp2 = &param0->frostHome;
frost$io$File* $tmp3 = *$tmp2;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3));
frost$io$File** $tmp4 = &param0->frostHome;
*$tmp4 = param1;
// line 288
frost$collections$ImmutableArray* $tmp5 = (frost$collections$ImmutableArray*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$ImmutableArray$class);
frost$collections$ImmutableArray$init$frost$collections$ListView$LTfrost$collections$ImmutableArray$T$GT($tmp5, param2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5));
frost$collections$ImmutableArray** $tmp6 = &param0->importDirs;
frost$collections$ImmutableArray* $tmp7 = *$tmp6;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp7));
frost$collections$ImmutableArray** $tmp8 = &param0->importDirs;
*$tmp8 = $tmp5;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5));
// unreffing REF($10:frost.collections.ImmutableArray<frost.io.File>)
// line 289
frost$core$Int64* $tmp9 = &param0->optimizationLevel;
*$tmp9 = param3;
// line 290
frost$core$Int64* $tmp10 = &param0->safetyLevel;
*$tmp10 = param4;
// line 291
frost$core$Bit* $tmp11 = &param0->debug;
*$tmp11 = param5;
return;

}
void org$frostlang$frostc$Compiler$Settings$cleanup(org$frostlang$frostc$Compiler$Settings* param0) {

// line 274
frost$core$Immutable$cleanup(((frost$core$Immutable*) param0));
frost$io$File** $tmp12 = &param0->frostHome;
frost$io$File* $tmp13 = *$tmp12;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp13));
frost$collections$ImmutableArray** $tmp14 = &param0->importDirs;
frost$collections$ImmutableArray* $tmp15 = *$tmp14;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp15));
return;

}

