#pragma once
#include "frost_c.h"
#include "Match_types.h"
#include "frost/core/Bit_types.h"
typedef struct org$frostlanguage$frostc$Compiler org$frostlanguage$frostc$Compiler;
#include "org/frostlanguage/frostc/Position_types.h"
typedef struct org$frostlanguage$frostc$ChoiceCase org$frostlanguage$frostc$ChoiceCase;
typedef struct org$frostlanguage$frostc$ClassDecl org$frostlanguage$frostc$ClassDecl;
typedef struct org$frostlanguage$frostc$IR$Value org$frostlanguage$frostc$IR$Value;
typedef struct org$frostlanguage$frostc$FixedArray org$frostlanguage$frostc$FixedArray;
typedef struct org$frostlanguage$frostc$ASTNode org$frostlanguage$frostc$ASTNode;
typedef struct org$frostlanguage$frostc$statement$Match org$frostlanguage$frostc$statement$Match;

frost$core$Bit org$frostlanguage$frostc$statement$Match$checkChoiceMatch$org$frostlanguage$frostc$Compiler$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$ChoiceCase$Q$org$frostlanguage$frostc$ClassDecl$Q$org$frostlanguage$frostc$IR$Value$R$frost$core$Bit(org$frostlanguage$frostc$Compiler* p_compiler, org$frostlanguage$frostc$Position p_position, org$frostlanguage$frostc$ChoiceCase* p_cc, org$frostlanguage$frostc$ClassDecl* p_choiceClass, org$frostlanguage$frostc$IR$Value* p_value);
void org$frostlanguage$frostc$statement$Match$compileChainedIfMatch$org$frostlanguage$frostc$Compiler$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$IR$Value$org$frostlanguage$frostc$ClassDecl$Q$org$frostlanguage$frostc$IR$Value$Q$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT$Q(org$frostlanguage$frostc$Compiler* p_compiler, org$frostlanguage$frostc$Position p_position, org$frostlanguage$frostc$IR$Value* p_value, org$frostlanguage$frostc$ClassDecl* p_choiceClass, org$frostlanguage$frostc$IR$Value* p_choiceRawValue, org$frostlanguage$frostc$FixedArray* p_whens, org$frostlanguage$frostc$FixedArray* p_other);
void org$frostlanguage$frostc$statement$Match$compile$org$frostlanguage$frostc$Compiler$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$ASTNode$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT$Q(org$frostlanguage$frostc$Compiler* p_compiler, org$frostlanguage$frostc$Position p_position, org$frostlanguage$frostc$ASTNode* p_value, org$frostlanguage$frostc$FixedArray* p_whens, org$frostlanguage$frostc$FixedArray* p_other);
void org$frostlanguage$frostc$statement$Match$init(org$frostlanguage$frostc$statement$Match* self);
void org$frostlanguage$frostc$statement$Match$cleanup(org$frostlanguage$frostc$statement$Match* self);

