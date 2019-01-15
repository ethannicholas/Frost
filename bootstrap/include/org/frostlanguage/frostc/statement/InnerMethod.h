#pragma once
#include "frost_c.h"
#include "InnerMethod_types.h"
typedef struct org$frostlanguage$frostc$Compiler org$frostlanguage$frostc$Compiler;
#include "org/frostlanguage/frostc/Position_types.h"
#include "org/frostlanguage/frostc/MethodDecl/Kind_types.h"
typedef struct frost$core$String frost$core$String;
typedef struct org$frostlanguage$frostc$FixedArray org$frostlanguage$frostc$FixedArray;
typedef struct org$frostlanguage$frostc$ASTNode org$frostlanguage$frostc$ASTNode;
typedef struct org$frostlanguage$frostc$statement$InnerMethod org$frostlanguage$frostc$statement$InnerMethod;

void org$frostlanguage$frostc$statement$InnerMethod$compile$org$frostlanguage$frostc$Compiler$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$MethodDecl$Kind$frost$core$String$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT$org$frostlanguage$frostc$ASTNode$Q$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT(org$frostlanguage$frostc$Compiler* p_compiler, org$frostlanguage$frostc$Position p_position, org$frostlanguage$frostc$MethodDecl$Kind p_kind, frost$core$String* p_name, org$frostlanguage$frostc$FixedArray* p_rawParameters, org$frostlanguage$frostc$ASTNode* p_rawReturnType, org$frostlanguage$frostc$FixedArray* p_body);
void org$frostlanguage$frostc$statement$InnerMethod$init(org$frostlanguage$frostc$statement$InnerMethod* self);
void org$frostlanguage$frostc$statement$InnerMethod$cleanup(org$frostlanguage$frostc$statement$InnerMethod* self);

