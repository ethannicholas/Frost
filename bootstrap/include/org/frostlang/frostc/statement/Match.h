#pragma once
#include "frost_c.h"
#include "Match_types.h"
#include "frost/core/Bit_types.h"
typedef struct org$frostlang$frostc$Compiler org$frostlang$frostc$Compiler;
#include "org/frostlang/frostc/Position_types.h"
typedef struct org$frostlang$frostc$ChoiceCase org$frostlang$frostc$ChoiceCase;
typedef struct org$frostlang$frostc$ClassDecl org$frostlang$frostc$ClassDecl;
typedef struct org$frostlang$frostc$IR$Value org$frostlang$frostc$IR$Value;
typedef struct org$frostlang$frostc$FixedArray org$frostlang$frostc$FixedArray;
typedef struct org$frostlang$frostc$ASTNode org$frostlang$frostc$ASTNode;
typedef struct org$frostlang$frostc$statement$Match org$frostlang$frostc$statement$Match;

frost$core$Bit org$frostlang$frostc$statement$Match$checkChoiceMatch$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$ChoiceCase$Q$org$frostlang$frostc$ClassDecl$Q$org$frostlang$frostc$IR$Value$R$frost$core$Bit(org$frostlang$frostc$Compiler* p_compiler, org$frostlang$frostc$Position p_position, org$frostlang$frostc$ChoiceCase* p_cc, org$frostlang$frostc$ClassDecl* p_choiceClass, org$frostlang$frostc$IR$Value* p_value);
void org$frostlang$frostc$statement$Match$compileChainedIfMatch$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$ClassDecl$Q$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(org$frostlang$frostc$Compiler* p_compiler, org$frostlang$frostc$Position p_position, org$frostlang$frostc$IR$Value* p_value, org$frostlang$frostc$ClassDecl* p_choiceClass, org$frostlang$frostc$IR$Value* p_choiceRawValue, org$frostlang$frostc$FixedArray* p_whens, org$frostlang$frostc$FixedArray* p_other);
void org$frostlang$frostc$statement$Match$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(org$frostlang$frostc$Compiler* p_compiler, org$frostlang$frostc$Position p_position, org$frostlang$frostc$ASTNode* p_value, org$frostlang$frostc$FixedArray* p_whens, org$frostlang$frostc$FixedArray* p_other);
void org$frostlang$frostc$statement$Match$init(org$frostlang$frostc$statement$Match* self);
void org$frostlang$frostc$statement$Match$cleanup(org$frostlang$frostc$statement$Match* self);

