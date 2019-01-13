#pragma once
#include "panda_c.h"
#include "Closure_types.h"
typedef struct org$pandalanguage$pandac$Type org$pandalanguage$pandac$Type;
typedef struct org$pandalanguage$pandac$Compiler org$pandalanguage$pandac$Compiler;
typedef struct org$pandalanguage$pandac$ClassDecl org$pandalanguage$pandac$ClassDecl;
typedef struct org$pandalanguage$pandac$MethodDecl org$pandalanguage$pandac$MethodDecl;
typedef struct panda$collections$CollectionView panda$collections$CollectionView;
typedef struct panda$collections$ListView panda$collections$ListView;
typedef struct org$pandalanguage$pandac$ASTNode org$pandalanguage$pandac$ASTNode;
typedef struct org$pandalanguage$pandac$Compiler$TypeContext org$pandalanguage$pandac$Compiler$TypeContext;
typedef struct org$pandalanguage$pandac$IR$Value org$pandalanguage$pandac$IR$Value;
#include "org/pandalanguage/pandac/Position_types.h"
typedef struct org$pandalanguage$pandac$FixedArray org$pandalanguage$pandac$FixedArray;
#include "org/pandalanguage/pandac/MethodDecl/Kind_types.h"
typedef struct org$pandalanguage$pandac$expression$Closure org$pandalanguage$pandac$expression$Closure;

org$pandalanguage$pandac$Type* org$pandalanguage$pandac$expression$Closure$capturedSelfType$org$pandalanguage$pandac$Compiler$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler* p_compiler);
org$pandalanguage$pandac$ClassDecl* org$pandalanguage$pandac$expression$Closure$createClosureClass$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$MethodDecl$panda$collections$CollectionView$LTorg$pandalanguage$pandac$Compiler$Capture$GT$R$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$Compiler* p_compiler, org$pandalanguage$pandac$MethodDecl* p_m, panda$collections$CollectionView* p_captures);
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$expression$Closure$typedLambdaType$org$pandalanguage$pandac$Compiler$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$Type$Q(org$pandalanguage$pandac$Compiler* p_compiler, panda$collections$ListView* p_rawParameters, org$pandalanguage$pandac$ASTNode* p_expr, org$pandalanguage$pandac$Compiler$TypeContext* p_type);
org$pandalanguage$pandac$IR$Value* org$pandalanguage$pandac$expression$Closure$compileTypedLambda$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q(org$pandalanguage$pandac$Compiler* p_compiler, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$FixedArray* p_rawParameters, org$pandalanguage$pandac$ASTNode* p_expr, org$pandalanguage$pandac$Compiler$TypeContext* p_type);
org$pandalanguage$pandac$IR$Value* org$pandalanguage$pandac$expression$Closure$compileUntypedLambda$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q(org$pandalanguage$pandac$Compiler* p_compiler, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$FixedArray* p_rawParameters, org$pandalanguage$pandac$ASTNode* p_expr, org$pandalanguage$pandac$Compiler$TypeContext* p_type);
org$pandalanguage$pandac$IR$Value* org$pandalanguage$pandac$expression$Closure$compile$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$MethodDecl$Kind$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q(org$pandalanguage$pandac$Compiler* p_compiler, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$MethodDecl$Kind p_kind, org$pandalanguage$pandac$FixedArray* p_rawParameters, org$pandalanguage$pandac$ASTNode* p_rawReturnType, org$pandalanguage$pandac$FixedArray* p_body, org$pandalanguage$pandac$Compiler$TypeContext* p_type);
void org$pandalanguage$pandac$expression$Closure$init(org$pandalanguage$pandac$expression$Closure* self);
void org$pandalanguage$pandac$expression$Closure$cleanup(org$pandalanguage$pandac$expression$Closure* self);

