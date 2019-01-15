#include "org/frostlanguage/frostc/Compiler/AutoScope.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlanguage/frostc/Compiler.h"
#include "org/frostlanguage/frostc/SymbolTable.h"
#include "frost/core/Frost.h"
#include "frost/collections/Stack.h"
#include "org/frostlanguage/frostc/Compiler/EnclosingContext.h"
#include "frost/core/Int64.h"
#include "frost/core/Bit.h"


static frost$core$String $s1;
org$frostlanguage$frostc$Compiler$AutoScope$class_type org$frostlanguage$frostc$Compiler$AutoScope$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$convert$R$frost$core$String, org$frostlanguage$frostc$Compiler$AutoScope$cleanup} };


static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x41\x75\x74\x6f\x53\x63\x6f\x70\x65", 43, 8698095898828530030, NULL };
static frost$core$String $s48 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x66\x72\x6f\x73\x74", 14, -3408958966132496692, NULL };
static frost$core$String $s60 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x66\x72\x6f\x73\x74", 14, -3408958966132496692, NULL };

void org$frostlanguage$frostc$Compiler$AutoScope$init$org$frostlanguage$frostc$Compiler(org$frostlanguage$frostc$Compiler$AutoScope* param0, org$frostlanguage$frostc$Compiler* param1) {

// line 220
org$frostlanguage$frostc$SymbolTable* $tmp2 = (org$frostlanguage$frostc$SymbolTable*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlanguage$frostc$SymbolTable$class);
org$frostlanguage$frostc$SymbolTable** $tmp3 = &param1->symbolTable;
org$frostlanguage$frostc$SymbolTable* $tmp4 = *$tmp3;
org$frostlanguage$frostc$SymbolTable$init$org$frostlanguage$frostc$SymbolTable($tmp2, $tmp4);
org$frostlanguage$frostc$Compiler$AutoScope$init$org$frostlanguage$frostc$Compiler$org$frostlanguage$frostc$SymbolTable(param0, param1, $tmp2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2));
// unreffing REF($1:org.frostlanguage.frostc.SymbolTable)
return;

}
void org$frostlanguage$frostc$Compiler$AutoScope$init$org$frostlanguage$frostc$Compiler$org$frostlanguage$frostc$SymbolTable(org$frostlanguage$frostc$Compiler$AutoScope* param0, org$frostlanguage$frostc$Compiler* param1, org$frostlanguage$frostc$SymbolTable* param2) {

// line 224
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
org$frostlanguage$frostc$Compiler** $tmp5 = &param0->compiler;
org$frostlanguage$frostc$Compiler* $tmp6 = *$tmp5;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6));
org$frostlanguage$frostc$Compiler** $tmp7 = &param0->compiler;
*$tmp7 = param1;
// line 225
org$frostlanguage$frostc$SymbolTable** $tmp8 = &param1->symbolTable;
org$frostlanguage$frostc$SymbolTable* $tmp9 = *$tmp8;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp9));
org$frostlanguage$frostc$SymbolTable** $tmp10 = &param0->oldSymbolTable;
org$frostlanguage$frostc$SymbolTable* $tmp11 = *$tmp10;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp11));
org$frostlanguage$frostc$SymbolTable** $tmp12 = &param0->oldSymbolTable;
*$tmp12 = $tmp9;
// line 226
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
org$frostlanguage$frostc$SymbolTable** $tmp13 = &param0->newSymbolTable;
org$frostlanguage$frostc$SymbolTable* $tmp14 = *$tmp13;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp14));
org$frostlanguage$frostc$SymbolTable** $tmp15 = &param0->newSymbolTable;
*$tmp15 = param2;
// line 227
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
org$frostlanguage$frostc$SymbolTable** $tmp16 = &param1->symbolTable;
org$frostlanguage$frostc$SymbolTable* $tmp17 = *$tmp16;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp17));
org$frostlanguage$frostc$SymbolTable** $tmp18 = &param1->symbolTable;
*$tmp18 = param2;
// line 228
frost$collections$Stack** $tmp19 = &param1->enclosingContexts;
frost$collections$Stack* $tmp20 = *$tmp19;
org$frostlanguage$frostc$Compiler$EnclosingContext* $tmp21 = (org$frostlanguage$frostc$Compiler$EnclosingContext*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlanguage$frostc$Compiler$EnclosingContext$class);
frost$core$Int64 $tmp22 = (frost$core$Int64) {1};
org$frostlanguage$frostc$Compiler$EnclosingContext$init$frost$core$Int64($tmp21, $tmp22);
frost$collections$Stack$push$frost$collections$Stack$T($tmp20, ((frost$core$Object*) $tmp21));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp21));
// unreffing REF($42:org.frostlanguage.frostc.Compiler.EnclosingContext)
return;

}
void org$frostlanguage$frostc$Compiler$AutoScope$cleanup(org$frostlanguage$frostc$Compiler$AutoScope* param0) {

org$frostlanguage$frostc$Compiler$EnclosingContext* local0 = NULL;
// line 233
goto block1;
block1:;
// line 234
org$frostlanguage$frostc$Compiler** $tmp23 = &param0->compiler;
org$frostlanguage$frostc$Compiler* $tmp24 = *$tmp23;
frost$collections$Stack** $tmp25 = &$tmp24->enclosingContexts;
frost$collections$Stack* $tmp26 = *$tmp25;
frost$core$Object* $tmp27 = frost$collections$Stack$pop$R$frost$collections$Stack$T($tmp26);
*(&local0) = ((org$frostlanguage$frostc$Compiler$EnclosingContext*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$Compiler$EnclosingContext*) $tmp27)));
org$frostlanguage$frostc$Compiler$EnclosingContext* $tmp28 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp28));
*(&local0) = ((org$frostlanguage$frostc$Compiler$EnclosingContext*) $tmp27);
frost$core$Frost$unref$frost$core$Object$Q($tmp27);
// unreffing REF($8:frost.collections.Stack.T)
// line 235
org$frostlanguage$frostc$Compiler$EnclosingContext* $tmp29 = *(&local0);
frost$core$Int64* $tmp30 = &$tmp29->$rawValue;
frost$core$Int64 $tmp31 = *$tmp30;
frost$core$Int64 $tmp32 = (frost$core$Int64) {1};
frost$core$Bit $tmp33 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp31, $tmp32);
bool $tmp34 = $tmp33.value;
if ($tmp34) goto block4; else goto block5;
block4:;
// line 237
org$frostlanguage$frostc$Compiler$EnclosingContext* $tmp35 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp35));
// unreffing pop
*(&local0) = ((org$frostlanguage$frostc$Compiler$EnclosingContext*) NULL);
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
// line 240
org$frostlanguage$frostc$Compiler** $tmp42 = &param0->compiler;
org$frostlanguage$frostc$Compiler* $tmp43 = *$tmp42;
org$frostlanguage$frostc$Compiler$EnclosingContext* $tmp44 = *(&local0);
org$frostlanguage$frostc$Compiler$leaveScope$org$frostlanguage$frostc$Compiler$EnclosingContext($tmp43, $tmp44);
goto block3;
block8:;
// line 243
frost$core$Bit $tmp45 = frost$core$Bit$init$builtin_bit(false);
bool $tmp46 = $tmp45.value;
if ($tmp46) goto block9; else goto block10;
block10:;
frost$core$Int64 $tmp47 = (frost$core$Int64) {243};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s48, $tmp47);
abort(); // unreachable
block9:;
goto block3;
block3:;
org$frostlanguage$frostc$Compiler$EnclosingContext* $tmp49 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp49));
// unreffing pop
*(&local0) = ((org$frostlanguage$frostc$Compiler$EnclosingContext*) NULL);
goto block1;
block2:;
// line 247
org$frostlanguage$frostc$Compiler** $tmp50 = &param0->compiler;
org$frostlanguage$frostc$Compiler* $tmp51 = *$tmp50;
org$frostlanguage$frostc$SymbolTable** $tmp52 = &$tmp51->symbolTable;
org$frostlanguage$frostc$SymbolTable* $tmp53 = *$tmp52;
org$frostlanguage$frostc$SymbolTable** $tmp54 = &param0->newSymbolTable;
org$frostlanguage$frostc$SymbolTable* $tmp55 = *$tmp54;
bool $tmp56 = $tmp53 == $tmp55;
frost$core$Bit $tmp57 = frost$core$Bit$init$builtin_bit($tmp56);
bool $tmp58 = $tmp57.value;
if ($tmp58) goto block11; else goto block12;
block12:;
frost$core$Int64 $tmp59 = (frost$core$Int64) {247};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s60, $tmp59);
abort(); // unreachable
block11:;
// line 248
org$frostlanguage$frostc$Compiler** $tmp61 = &param0->compiler;
org$frostlanguage$frostc$Compiler* $tmp62 = *$tmp61;
org$frostlanguage$frostc$SymbolTable** $tmp63 = &param0->oldSymbolTable;
org$frostlanguage$frostc$SymbolTable* $tmp64 = *$tmp63;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp64));
org$frostlanguage$frostc$SymbolTable** $tmp65 = &$tmp62->symbolTable;
org$frostlanguage$frostc$SymbolTable* $tmp66 = *$tmp65;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp66));
org$frostlanguage$frostc$SymbolTable** $tmp67 = &$tmp62->symbolTable;
*$tmp67 = $tmp64;
// line 232
frost$core$Object$cleanup(((frost$core$Object*) param0));
org$frostlanguage$frostc$Compiler** $tmp68 = &param0->compiler;
org$frostlanguage$frostc$Compiler* $tmp69 = *$tmp68;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp69));
org$frostlanguage$frostc$SymbolTable** $tmp70 = &param0->oldSymbolTable;
org$frostlanguage$frostc$SymbolTable* $tmp71 = *$tmp70;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp71));
org$frostlanguage$frostc$SymbolTable** $tmp72 = &param0->newSymbolTable;
org$frostlanguage$frostc$SymbolTable* $tmp73 = *$tmp72;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp73));
return;

}

