#include "org/frostlang/frostc/Compiler/AutoScope.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/Compiler.h"
#include "org/frostlang/frostc/SymbolTable.h"
#include "frost/core/Frost.h"
#include "frost/collections/Stack.h"
#include "org/frostlang/frostc/Compiler/EnclosingContext.h"
#include "frost/core/Int64.h"
#include "frost/core/Bit.h"


static frost$core$String $s1;
org$frostlang$frostc$Compiler$AutoScope$class_type org$frostlang$frostc$Compiler$AutoScope$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$Compiler$AutoScope$cleanup} };


static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x41\x75\x74\x6f\x53\x63\x6f\x70\x65", 39, 1331663282132780012, NULL };
static frost$core$String $s46 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x66\x72\x6f\x73\x74", 14, -3408958966132496692, NULL };
static frost$core$String $s58 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x66\x72\x6f\x73\x74", 14, -3408958966132496692, NULL };

void org$frostlang$frostc$Compiler$AutoScope$init$org$frostlang$frostc$Compiler(org$frostlang$frostc$Compiler$AutoScope* param0, org$frostlang$frostc$Compiler* param1) {

// line 231
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$SymbolTable));
org$frostlang$frostc$SymbolTable* $tmp2 = (org$frostlang$frostc$SymbolTable*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$SymbolTable$class);
org$frostlang$frostc$SymbolTable** $tmp3 = &param1->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp4 = *$tmp3;
org$frostlang$frostc$SymbolTable$init$org$frostlang$frostc$SymbolTable($tmp2, $tmp4);
org$frostlang$frostc$Compiler$AutoScope$init$org$frostlang$frostc$Compiler$org$frostlang$frostc$SymbolTable(param0, param1, $tmp2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2));
return;

}
void org$frostlang$frostc$Compiler$AutoScope$init$org$frostlang$frostc$Compiler$org$frostlang$frostc$SymbolTable(org$frostlang$frostc$Compiler$AutoScope* param0, org$frostlang$frostc$Compiler* param1, org$frostlang$frostc$SymbolTable* param2) {

// line 235
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
org$frostlang$frostc$Compiler** $tmp5 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp6 = *$tmp5;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6));
org$frostlang$frostc$Compiler** $tmp7 = &param0->compiler;
*$tmp7 = param1;
// line 236
org$frostlang$frostc$SymbolTable** $tmp8 = &param1->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp9 = *$tmp8;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp9));
org$frostlang$frostc$SymbolTable** $tmp10 = &param0->oldSymbolTable;
org$frostlang$frostc$SymbolTable* $tmp11 = *$tmp10;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp11));
org$frostlang$frostc$SymbolTable** $tmp12 = &param0->oldSymbolTable;
*$tmp12 = $tmp9;
// line 237
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
org$frostlang$frostc$SymbolTable** $tmp13 = &param0->newSymbolTable;
org$frostlang$frostc$SymbolTable* $tmp14 = *$tmp13;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp14));
org$frostlang$frostc$SymbolTable** $tmp15 = &param0->newSymbolTable;
*$tmp15 = param2;
// line 238
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
org$frostlang$frostc$SymbolTable** $tmp16 = &param1->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp17 = *$tmp16;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp17));
org$frostlang$frostc$SymbolTable** $tmp18 = &param1->symbolTable;
*$tmp18 = param2;
// line 239
frost$collections$Stack** $tmp19 = &param1->enclosingContexts;
frost$collections$Stack* $tmp20 = *$tmp19;
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$Compiler$EnclosingContext));
org$frostlang$frostc$Compiler$EnclosingContext* $tmp21 = (org$frostlang$frostc$Compiler$EnclosingContext*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$Compiler$EnclosingContext$class);
frost$core$Int64 $tmp22 = (frost$core$Int64) {1};
org$frostlang$frostc$Compiler$EnclosingContext$init$frost$core$Int64($tmp21, $tmp22);
frost$collections$Stack$push$frost$collections$Stack$T($tmp20, ((frost$core$Object*) $tmp21));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp21));
return;

}
void org$frostlang$frostc$Compiler$AutoScope$cleanup(org$frostlang$frostc$Compiler$AutoScope* param0) {

org$frostlang$frostc$Compiler$EnclosingContext* local0 = NULL;
// line 244
goto block1;
block1:;
// line 245
org$frostlang$frostc$Compiler** $tmp23 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp24 = *$tmp23;
frost$collections$Stack** $tmp25 = &$tmp24->enclosingContexts;
frost$collections$Stack* $tmp26 = *$tmp25;
frost$core$Object* $tmp27 = frost$collections$Stack$pop$R$frost$collections$Stack$T($tmp26);
*(&local0) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Compiler$EnclosingContext*) $tmp27)));
org$frostlang$frostc$Compiler$EnclosingContext* $tmp28 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp28));
*(&local0) = ((org$frostlang$frostc$Compiler$EnclosingContext*) $tmp27);
frost$core$Frost$unref$frost$core$Object$Q($tmp27);
// line 246
org$frostlang$frostc$Compiler$EnclosingContext* $tmp29 = *(&local0);
frost$core$Int64* $tmp30 = &$tmp29->$rawValue;
frost$core$Int64 $tmp31 = *$tmp30;
frost$core$Int64 $tmp32 = (frost$core$Int64) {1};
frost$core$Bit $tmp33 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp31, $tmp32);
bool $tmp34 = $tmp33.value;
if ($tmp34) goto block4; else goto block5;
block4:;
// line 248
org$frostlang$frostc$Compiler$EnclosingContext* $tmp35 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp35));
*(&local0) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
goto block2;
block5:;
frost$core$Int64 $tmp36 = (frost$core$Int64) {2};
frost$core$Bit $tmp37 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp31, $tmp36);
bool $tmp38 = $tmp37.value;
if ($tmp38) goto block6; else goto block7;
block7:;
frost$core$Int64 $tmp39 = (frost$core$Int64) {3};
frost$core$Bit $tmp40 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp31, $tmp39);
bool $tmp41 = $tmp40.value;
if ($tmp41) goto block6; else goto block8;
block6:;
// line 251
org$frostlang$frostc$Compiler** $tmp42 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp43 = *$tmp42;
org$frostlang$frostc$Compiler$EnclosingContext* $tmp44 = *(&local0);
org$frostlang$frostc$Compiler$leaveScope$org$frostlang$frostc$Compiler$EnclosingContext($tmp43, $tmp44);
goto block3;
block8:;
// line 254
frost$core$Int64 $tmp45 = (frost$core$Int64) {254};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s46, $tmp45);
abort(); // unreachable
block3:;
org$frostlang$frostc$Compiler$EnclosingContext* $tmp47 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp47));
*(&local0) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
goto block1;
block2:;
// line 258
org$frostlang$frostc$Compiler** $tmp48 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp49 = *$tmp48;
org$frostlang$frostc$SymbolTable** $tmp50 = &$tmp49->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp51 = *$tmp50;
org$frostlang$frostc$SymbolTable** $tmp52 = &param0->newSymbolTable;
org$frostlang$frostc$SymbolTable* $tmp53 = *$tmp52;
bool $tmp54 = $tmp51 == $tmp53;
frost$core$Bit $tmp55 = frost$core$Bit$init$builtin_bit($tmp54);
bool $tmp56 = $tmp55.value;
if ($tmp56) goto block9; else goto block10;
block10:;
frost$core$Int64 $tmp57 = (frost$core$Int64) {258};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s58, $tmp57);
abort(); // unreachable
block9:;
// line 259
org$frostlang$frostc$Compiler** $tmp59 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp60 = *$tmp59;
org$frostlang$frostc$SymbolTable** $tmp61 = &param0->oldSymbolTable;
org$frostlang$frostc$SymbolTable* $tmp62 = *$tmp61;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp62));
org$frostlang$frostc$SymbolTable** $tmp63 = &$tmp60->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp64 = *$tmp63;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp64));
org$frostlang$frostc$SymbolTable** $tmp65 = &$tmp60->symbolTable;
*$tmp65 = $tmp62;
// line 243
frost$core$Object$cleanup(((frost$core$Object*) param0));
org$frostlang$frostc$Compiler** $tmp66 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp67 = *$tmp66;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp67));
org$frostlang$frostc$SymbolTable** $tmp68 = &param0->oldSymbolTable;
org$frostlang$frostc$SymbolTable* $tmp69 = *$tmp68;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp69));
org$frostlang$frostc$SymbolTable** $tmp70 = &param0->newSymbolTable;
org$frostlang$frostc$SymbolTable* $tmp71 = *$tmp70;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp71));
return;

}

