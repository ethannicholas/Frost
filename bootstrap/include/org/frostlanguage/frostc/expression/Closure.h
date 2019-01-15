#pragma once
#include "frost_c.h"
#include "Closure_types.h"
typedef struct org$frostlanguage$frostc$Type org$frostlanguage$frostc$Type;
typedef struct org$frostlanguage$frostc$Compiler org$frostlanguage$frostc$Compiler;
typedef struct org$frostlanguage$frostc$ClassDecl org$frostlanguage$frostc$ClassDecl;
typedef struct org$frostlanguage$frostc$MethodDecl org$frostlanguage$frostc$MethodDecl;
typedef struct frost$collections$CollectionView frost$collections$CollectionView;
typedef struct frost$collections$ListView frost$collections$ListView;
typedef struct org$frostlanguage$frostc$ASTNode org$frostlanguage$frostc$ASTNode;
typedef struct org$frostlanguage$frostc$Compiler$TypeContext org$frostlanguage$frostc$Compiler$TypeContext;
typedef struct org$frostlanguage$frostc$IR$Value org$frostlanguage$frostc$IR$Value;
#include "org/frostlanguage/frostc/Position_types.h"
typedef struct org$frostlanguage$frostc$FixedArray org$frostlanguage$frostc$FixedArray;
#include "org/frostlanguage/frostc/MethodDecl/Kind_types.h"
typedef struct org$frostlanguage$frostc$expression$Closure org$frostlanguage$frostc$expression$Closure;

org$frostlanguage$frostc$Type* org$frostlanguage$frostc$expression$Closure$capturedSelfType$org$frostlanguage$frostc$Compiler$R$org$frostlanguage$frostc$Type(org$frostlanguage$frostc$Compiler* p_compiler);
org$frostlanguage$frostc$ClassDecl* org$frostlanguage$frostc$expression$Closure$createClosureClass$org$frostlanguage$frostc$Compiler$org$frostlanguage$frostc$MethodDecl$frost$collections$CollectionView$LTorg$frostlanguage$frostc$Compiler$Capture$GT$R$org$frostlanguage$frostc$ClassDecl(org$frostlanguage$frostc$Compiler* p_compiler, org$frostlanguage$frostc$MethodDecl* p_m, frost$collections$CollectionView* p_captures);
org$frostlanguage$frostc$Type* org$frostlanguage$frostc$expression$Closure$typedLambdaType$org$frostlanguage$frostc$Compiler$frost$collections$ListView$LTorg$frostlanguage$frostc$ASTNode$GT$org$frostlanguage$frostc$ASTNode$org$frostlanguage$frostc$Compiler$TypeContext$R$org$frostlanguage$frostc$Type$Q(org$frostlanguage$frostc$Compiler* p_compiler, frost$collections$ListView* p_rawParameters, org$frostlanguage$frostc$ASTNode* p_expr, org$frostlanguage$frostc$Compiler$TypeContext* p_type);
org$frostlanguage$frostc$IR$Value* org$frostlanguage$frostc$expression$Closure$compileTypedLambda$org$frostlanguage$frostc$Compiler$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT$org$frostlanguage$frostc$ASTNode$org$frostlanguage$frostc$Compiler$TypeContext$R$org$frostlanguage$frostc$IR$Value$Q(org$frostlanguage$frostc$Compiler* p_compiler, org$frostlanguage$frostc$Position p_position, org$frostlanguage$frostc$FixedArray* p_rawParameters, org$frostlanguage$frostc$ASTNode* p_expr, org$frostlanguage$frostc$Compiler$TypeContext* p_type);
org$frostlanguage$frostc$IR$Value* org$frostlanguage$frostc$expression$Closure$compileUntypedLambda$org$frostlanguage$frostc$Compiler$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT$org$frostlanguage$frostc$ASTNode$org$frostlanguage$frostc$Compiler$TypeContext$R$org$frostlanguage$frostc$IR$Value$Q(org$frostlanguage$frostc$Compiler* p_compiler, org$frostlanguage$frostc$Position p_position, org$frostlanguage$frostc$FixedArray* p_rawParameters, org$frostlanguage$frostc$ASTNode* p_expr, org$frostlanguage$frostc$Compiler$TypeContext* p_type);
org$frostlanguage$frostc$IR$Value* org$frostlanguage$frostc$expression$Closure$compile$org$frostlanguage$frostc$Compiler$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$MethodDecl$Kind$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT$org$frostlanguage$frostc$ASTNode$Q$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT$org$frostlanguage$frostc$Compiler$TypeContext$R$org$frostlanguage$frostc$IR$Value$Q(org$frostlanguage$frostc$Compiler* p_compiler, org$frostlanguage$frostc$Position p_position, org$frostlanguage$frostc$MethodDecl$Kind p_kind, org$frostlanguage$frostc$FixedArray* p_rawParameters, org$frostlanguage$frostc$ASTNode* p_rawReturnType, org$frostlanguage$frostc$FixedArray* p_body, org$frostlanguage$frostc$Compiler$TypeContext* p_type);
void org$frostlanguage$frostc$expression$Closure$init(org$frostlanguage$frostc$expression$Closure* self);
void org$frostlanguage$frostc$expression$Closure$cleanup(org$frostlanguage$frostc$expression$Closure* self);

