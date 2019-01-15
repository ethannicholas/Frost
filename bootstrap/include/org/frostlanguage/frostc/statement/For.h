#pragma once
#include "frost_c.h"
#include "For_types.h"
#include "frost/core/Bit_types.h"
typedef struct org$frostlanguage$frostc$Compiler org$frostlanguage$frostc$Compiler;
#include "org/frostlanguage/frostc/Position_types.h"
typedef struct org$frostlanguage$frostc$Type org$frostlanguage$frostc$Type;
typedef struct frost$collections$ListView frost$collections$ListView;
typedef struct org$frostlanguage$frostc$IR$Value org$frostlanguage$frostc$IR$Value;
typedef struct frost$core$String frost$core$String;
typedef struct org$frostlanguage$frostc$Variable org$frostlanguage$frostc$Variable;
typedef struct org$frostlanguage$frostc$ASTNode org$frostlanguage$frostc$ASTNode;
typedef struct org$frostlanguage$frostc$statement$For org$frostlanguage$frostc$statement$For;

frost$core$Bit org$frostlanguage$frostc$statement$For$checkSteppedRangeTypes$org$frostlanguage$frostc$Compiler$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$Type$R$frost$core$Bit(org$frostlanguage$frostc$Compiler* p_compiler, org$frostlanguage$frostc$Position p_position, org$frostlanguage$frostc$Type* p_type);
org$frostlanguage$frostc$Type* org$frostlanguage$frostc$statement$For$signed$org$frostlanguage$frostc$Type$R$org$frostlanguage$frostc$Type(org$frostlanguage$frostc$Type* p_type);
org$frostlanguage$frostc$Type* org$frostlanguage$frostc$statement$For$unsigned$org$frostlanguage$frostc$Type$R$org$frostlanguage$frostc$Type(org$frostlanguage$frostc$Type* p_type);
frost$collections$ListView* org$frostlanguage$frostc$statement$For$arg$org$frostlanguage$frostc$IR$Value$R$frost$collections$ListView$LTorg$frostlanguage$frostc$ASTNode$GT(org$frostlanguage$frostc$IR$Value* p_a);
void org$frostlanguage$frostc$statement$For$compileSimpleRangeFor$org$frostlanguage$frostc$Compiler$org$frostlanguage$frostc$Position$frost$core$String$Q$org$frostlanguage$frostc$Variable$org$frostlanguage$frostc$IR$Value$frost$collections$ListView$LTorg$frostlanguage$frostc$ASTNode$GT(org$frostlanguage$frostc$Compiler* p_compiler, org$frostlanguage$frostc$Position p_position, frost$core$String* p_label, org$frostlanguage$frostc$Variable* p_index, org$frostlanguage$frostc$IR$Value* p_range, frost$collections$ListView* p_statements);
void org$frostlanguage$frostc$statement$For$compileSteppedRangeFor$org$frostlanguage$frostc$Compiler$org$frostlanguage$frostc$Position$frost$core$String$Q$org$frostlanguage$frostc$Variable$org$frostlanguage$frostc$IR$Value$frost$collections$ListView$LTorg$frostlanguage$frostc$ASTNode$GT(org$frostlanguage$frostc$Compiler* p_compiler, org$frostlanguage$frostc$Position p_position, frost$core$String* p_label, org$frostlanguage$frostc$Variable* p_index, org$frostlanguage$frostc$IR$Value* p_range, frost$collections$ListView* p_statements);
void org$frostlanguage$frostc$statement$For$compileRangeFor$org$frostlanguage$frostc$Compiler$org$frostlanguage$frostc$Position$frost$core$String$Q$org$frostlanguage$frostc$ASTNode$org$frostlanguage$frostc$IR$Value$frost$collections$ListView$LTorg$frostlanguage$frostc$ASTNode$GT(org$frostlanguage$frostc$Compiler* p_compiler, org$frostlanguage$frostc$Position p_position, frost$core$String* p_label, org$frostlanguage$frostc$ASTNode* p_astTarget, org$frostlanguage$frostc$IR$Value* p_list, frost$collections$ListView* p_statements);
void org$frostlanguage$frostc$statement$For$compileRangeFor$org$frostlanguage$frostc$Compiler$org$frostlanguage$frostc$Position$frost$core$String$Q$org$frostlanguage$frostc$ASTNode$org$frostlanguage$frostc$ASTNode$frost$collections$ListView$LTorg$frostlanguage$frostc$ASTNode$GT(org$frostlanguage$frostc$Compiler* p_compiler, org$frostlanguage$frostc$Position p_position, frost$core$String* p_label, org$frostlanguage$frostc$ASTNode* p_astTarget, org$frostlanguage$frostc$ASTNode* p_rawList, frost$collections$ListView* p_statements);
void org$frostlanguage$frostc$statement$For$compileIteratorFor$org$frostlanguage$frostc$Compiler$org$frostlanguage$frostc$Position$frost$core$String$Q$org$frostlanguage$frostc$ASTNode$org$frostlanguage$frostc$IR$Value$frost$collections$ListView$LTorg$frostlanguage$frostc$ASTNode$GT(org$frostlanguage$frostc$Compiler* p_compiler, org$frostlanguage$frostc$Position p_position, frost$core$String* p_label, org$frostlanguage$frostc$ASTNode* p_target, org$frostlanguage$frostc$IR$Value* p_iterator, frost$collections$ListView* p_statements);
void org$frostlanguage$frostc$statement$For$compile$org$frostlanguage$frostc$Compiler$org$frostlanguage$frostc$Position$frost$core$String$Q$org$frostlanguage$frostc$ASTNode$org$frostlanguage$frostc$ASTNode$frost$collections$ListView$LTorg$frostlanguage$frostc$ASTNode$GT(org$frostlanguage$frostc$Compiler* p_compiler, org$frostlanguage$frostc$Position p_position, frost$core$String* p_label, org$frostlanguage$frostc$ASTNode* p_rawTarget, org$frostlanguage$frostc$ASTNode* p_rawList, frost$collections$ListView* p_statements);
void org$frostlanguage$frostc$statement$For$init(org$frostlanguage$frostc$statement$For* self);
void org$frostlanguage$frostc$statement$For$cleanup(org$frostlanguage$frostc$statement$For* self);

