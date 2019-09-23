#pragma once
#include "frost_c.h"
#include "Closure_types.h"
typedef struct org$frostlang$frostc$Type org$frostlang$frostc$Type;
typedef struct org$frostlang$frostc$Compiler org$frostlang$frostc$Compiler;
#include "org/frostlang/frostc/Position_types.h"
#include "org/frostlang/frostc/MethodDecl/Kind_types.h"
typedef struct org$frostlang$frostc$FixedArray org$frostlang$frostc$FixedArray;
typedef struct org$frostlang$frostc$ASTNode org$frostlang$frostc$ASTNode;
#include "frost/core/Bit_types.h"
typedef struct org$frostlang$frostc$ClassDecl org$frostlang$frostc$ClassDecl;
typedef struct org$frostlang$frostc$MethodDecl org$frostlang$frostc$MethodDecl;
typedef struct frost$collections$CollectionView frost$collections$CollectionView;
typedef struct frost$collections$ListView frost$collections$ListView;
typedef struct org$frostlang$frostc$Compiler$TypeContext org$frostlang$frostc$Compiler$TypeContext;
typedef struct org$frostlang$frostc$IR$Value org$frostlang$frostc$IR$Value;
#include "org/frostlang/frostc/MethodPosition_types.h"
typedef struct org$frostlang$frostc$Pair org$frostlang$frostc$Pair;
typedef struct org$frostlang$frostc$expression$Closure org$frostlang$frostc$expression$Closure;

org$frostlang$frostc$Type* org$frostlang$frostc$expression$Closure$methodType$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$MethodDecl$Kind$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode$Q$frost$core$Bit$R$org$frostlang$frostc$Type$Q(org$frostlang$frostc$Compiler* p_compiler, org$frostlang$frostc$Position p_position, org$frostlang$frostc$MethodDecl$Kind p_kind, org$frostlang$frostc$FixedArray* p_parameters, org$frostlang$frostc$ASTNode* p_returnType, frost$core$Bit p_immutable);
org$frostlang$frostc$Type* org$frostlang$frostc$expression$Closure$capturedSelfType$org$frostlang$frostc$Compiler$R$org$frostlang$frostc$Type(org$frostlang$frostc$Compiler* p_compiler);
org$frostlang$frostc$ClassDecl* org$frostlang$frostc$expression$Closure$createClosureClass$org$frostlang$frostc$Compiler$org$frostlang$frostc$MethodDecl$frost$collections$CollectionView$LTorg$frostlang$frostc$Compiler$Capture$GT$R$org$frostlang$frostc$ClassDecl(org$frostlang$frostc$Compiler* p_compiler, org$frostlang$frostc$MethodDecl* p_m, frost$collections$CollectionView* p_captures);
org$frostlang$frostc$Type* org$frostlang$frostc$expression$Closure$typedLambdaType$org$frostlang$frostc$Compiler$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$Type$Q(org$frostlang$frostc$Compiler* p_compiler, frost$collections$ListView* p_rawParameters, org$frostlang$frostc$ASTNode* p_expr, org$frostlang$frostc$Compiler$TypeContext* p_type);
org$frostlang$frostc$IR$Value* org$frostlang$frostc$expression$Closure$compileTypedLambda$org$frostlang$frostc$Compiler$org$frostlang$frostc$MethodPosition$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(org$frostlang$frostc$Compiler* p_compiler, org$frostlang$frostc$MethodPosition p_position, org$frostlang$frostc$FixedArray* p_rawParameters, org$frostlang$frostc$ASTNode* p_expr, org$frostlang$frostc$Compiler$TypeContext* p_type);
frost$core$Bit org$frostlang$frostc$expression$Closure$$anonymous1$org$frostlang$frostc$Type$org$frostlang$frostc$Type$R$frost$core$Bit(org$frostlang$frostc$Type* p_t1, org$frostlang$frostc$Type* p_t2);
org$frostlang$frostc$IR$Value* org$frostlang$frostc$expression$Closure$compileUntypedLambda$org$frostlang$frostc$Compiler$org$frostlang$frostc$MethodPosition$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(org$frostlang$frostc$Compiler* p_compiler, org$frostlang$frostc$MethodPosition p_position, org$frostlang$frostc$FixedArray* p_rawParameters, org$frostlang$frostc$ASTNode* p_expr, org$frostlang$frostc$Compiler$TypeContext* p_type);
org$frostlang$frostc$Pair* org$frostlang$frostc$expression$Closure$untypedLambdaCoercionCost$org$frostlang$frostc$Compiler$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Type$R$org$frostlang$frostc$Pair$LTorg$frostlang$frostc$Type$Cfrost$core$Int$GT$Q(org$frostlang$frostc$Compiler* p_compiler, frost$collections$ListView* p_parameters, org$frostlang$frostc$ASTNode* p_body, org$frostlang$frostc$Type* p_target);
org$frostlang$frostc$Pair* org$frostlang$frostc$expression$Closure$typedLambdaCoercionCost$org$frostlang$frostc$Compiler$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Type$R$org$frostlang$frostc$Pair$LTorg$frostlang$frostc$Type$Cfrost$core$Int$GT$Q(org$frostlang$frostc$Compiler* p_compiler, frost$collections$ListView* p_parameters, org$frostlang$frostc$ASTNode* p_body, org$frostlang$frostc$Type* p_target);
org$frostlang$frostc$IR$Value* org$frostlang$frostc$expression$Closure$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$MethodPosition$org$frostlang$frostc$MethodDecl$Kind$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(org$frostlang$frostc$Compiler* p_compiler, org$frostlang$frostc$MethodPosition p_position, org$frostlang$frostc$MethodDecl$Kind p_kind, org$frostlang$frostc$FixedArray* p_rawParameters, org$frostlang$frostc$ASTNode* p_rawReturnType, org$frostlang$frostc$FixedArray* p_body, org$frostlang$frostc$Compiler$TypeContext* p_type);
void org$frostlang$frostc$expression$Closure$init(void* rawSelf);
void org$frostlang$frostc$expression$Closure$cleanup(void* rawSelf);

