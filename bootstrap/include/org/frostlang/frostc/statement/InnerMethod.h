#pragma once
#include "frost_c.h"
#include "InnerMethod_types.h"
typedef struct org$frostlang$frostc$Compiler org$frostlang$frostc$Compiler;
#include "org/frostlang/frostc/MethodPosition_types.h"
#include "org/frostlang/frostc/MethodDecl/Kind_types.h"
typedef struct frost$core$String frost$core$String;
typedef struct org$frostlang$frostc$FixedArray org$frostlang$frostc$FixedArray;
typedef struct org$frostlang$frostc$ASTNode org$frostlang$frostc$ASTNode;
typedef struct org$frostlang$frostc$statement$InnerMethod org$frostlang$frostc$statement$InnerMethod;

void org$frostlang$frostc$statement$InnerMethod$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$MethodPosition$org$frostlang$frostc$MethodDecl$Kind$frost$core$String$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT(org$frostlang$frostc$Compiler* p_compiler, org$frostlang$frostc$MethodPosition p_position, org$frostlang$frostc$MethodDecl$Kind p_kind, frost$core$String* p_name, org$frostlang$frostc$FixedArray* p_rawParameters, org$frostlang$frostc$ASTNode* p_rawReturnType, org$frostlang$frostc$FixedArray* p_body);
void org$frostlang$frostc$statement$InnerMethod$init(void* rawSelf);
void org$frostlang$frostc$statement$InnerMethod$cleanup(void* rawSelf);

