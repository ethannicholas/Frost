#pragma once
#include "frost_c.h"
#include "Scanner_types.h"
typedef struct org$frostlanguage$frostc$Scanner org$frostlanguage$frostc$Scanner;
typedef struct org$frostlanguage$frostc$Compiler org$frostlanguage$frostc$Compiler;
typedef struct org$frostlanguage$frostc$Type org$frostlanguage$frostc$Type;
typedef struct org$frostlanguage$frostc$ASTNode org$frostlanguage$frostc$ASTNode;
#include "frost/core/Int64_types.h"
#include "org/frostlanguage/frostc/Position_types.h"
#include "frost/core/Bit_types.h"
typedef struct frost$core$String frost$core$String;
typedef struct org$frostlanguage$frostc$Annotations org$frostlanguage$frostc$Annotations;
typedef struct org$frostlanguage$frostc$FixedArray org$frostlanguage$frostc$FixedArray;
typedef struct org$frostlanguage$frostc$ClassDecl org$frostlanguage$frostc$ClassDecl;
typedef struct frost$collections$ListView frost$collections$ListView;
typedef struct org$frostlanguage$frostc$MethodDecl org$frostlanguage$frostc$MethodDecl;
#include "org/frostlanguage/frostc/MethodDecl/Kind_types.h"
typedef struct frost$io$File frost$io$File;
typedef struct frost$collections$MapView frost$collections$MapView;
#include "org/frostlanguage/frostc/ClassDecl/Kind_types.h"
typedef struct frost$collections$Array frost$collections$Array;
typedef struct frost$collections$List frost$collections$List;

void org$frostlanguage$frostc$Scanner$init$org$frostlanguage$frostc$Compiler(org$frostlanguage$frostc$Scanner* self, org$frostlanguage$frostc$Compiler* p_compiler);
org$frostlanguage$frostc$Type* org$frostlanguage$frostc$Scanner$convertType$org$frostlanguage$frostc$ASTNode$R$org$frostlanguage$frostc$Type(org$frostlanguage$frostc$Scanner* self, org$frostlanguage$frostc$ASTNode* p_type);
frost$core$Int64 org$frostlanguage$frostc$Scanner$add$org$frostlanguage$frostc$Position$frost$core$Int64$frost$core$Int64$R$frost$core$Int64(org$frostlanguage$frostc$Scanner* self, org$frostlanguage$frostc$Position p_position, frost$core$Int64 p_flags, frost$core$Int64 p_flag);
frost$core$Bit org$frostlanguage$frostc$Scanner$$anonymous1$org$frostlanguage$frostc$Scanner$org$frostlanguage$frostc$Position$frost$core$String$org$frostlanguage$frostc$ASTNode$Q$R$frost$core$Bit(org$frostlanguage$frostc$Scanner* p_scanner, org$frostlanguage$frostc$Position p_position, frost$core$String* p_text, org$frostlanguage$frostc$ASTNode* p_expr);
org$frostlanguage$frostc$Annotations* org$frostlanguage$frostc$Scanner$convertAnnotations$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT$R$org$frostlanguage$frostc$Annotations(org$frostlanguage$frostc$Scanner* self, org$frostlanguage$frostc$FixedArray* p_a);
void org$frostlanguage$frostc$Scanner$scanFields$org$frostlanguage$frostc$ClassDecl$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$ASTNode$Q$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT$org$frostlanguage$frostc$ASTNode(org$frostlanguage$frostc$Scanner* self, org$frostlanguage$frostc$ClassDecl* p_owner, org$frostlanguage$frostc$Position p_position, org$frostlanguage$frostc$ASTNode* p_rawDoccomment, org$frostlanguage$frostc$FixedArray* p_rawAnnotations, org$frostlanguage$frostc$ASTNode* p_varDecl);
frost$core$Int64 org$frostlanguage$frostc$Scanner$complexity$org$frostlanguage$frostc$ASTNode$R$frost$core$Int64(org$frostlanguage$frostc$Scanner* self, org$frostlanguage$frostc$ASTNode* p_node);
frost$core$Bit org$frostlanguage$frostc$Scanner$shouldInline$org$frostlanguage$frostc$Annotations$frost$collections$ListView$LTorg$frostlanguage$frostc$ASTNode$GT$R$frost$core$Bit(org$frostlanguage$frostc$Scanner* self, org$frostlanguage$frostc$Annotations* p_annotations, frost$collections$ListView* p_statements);
org$frostlanguage$frostc$MethodDecl* org$frostlanguage$frostc$Scanner$scanMethod$org$frostlanguage$frostc$ClassDecl$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$ASTNode$Q$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT$org$frostlanguage$frostc$MethodDecl$Kind$frost$core$String$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT$Q$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT$org$frostlanguage$frostc$ASTNode$Q$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT$Q$R$org$frostlanguage$frostc$MethodDecl$Q(org$frostlanguage$frostc$Scanner* self, org$frostlanguage$frostc$ClassDecl* p_owner, org$frostlanguage$frostc$Position p_position, org$frostlanguage$frostc$ASTNode* p_rawDoccomment, org$frostlanguage$frostc$FixedArray* p_rawAnnotations, org$frostlanguage$frostc$MethodDecl$Kind p_kind, frost$core$String* p_name, org$frostlanguage$frostc$FixedArray* p_rawGenerics, org$frostlanguage$frostc$FixedArray* p_rawParameters, org$frostlanguage$frostc$ASTNode* p_rawReturnType, org$frostlanguage$frostc$FixedArray* p_statements);
void org$frostlanguage$frostc$Scanner$scanClassChild$org$frostlanguage$frostc$ClassDecl$org$frostlanguage$frostc$ASTNode(org$frostlanguage$frostc$Scanner* self, org$frostlanguage$frostc$ClassDecl* p_cl, org$frostlanguage$frostc$ASTNode* p_node);
void org$frostlanguage$frostc$Scanner$scanChoiceCase$org$frostlanguage$frostc$ClassDecl$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$ASTNode$Q$frost$core$String$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT$Q(org$frostlanguage$frostc$Scanner* self, org$frostlanguage$frostc$ClassDecl* p_cl, org$frostlanguage$frostc$Position p_position, org$frostlanguage$frostc$ASTNode* p_rawDoccomment, frost$core$String* p_name, org$frostlanguage$frostc$FixedArray* p_rawFields);
org$frostlanguage$frostc$ClassDecl* org$frostlanguage$frostc$Scanner$scanClass$frost$io$File$frost$collections$MapView$LTfrost$core$String$Cfrost$core$String$GT$frost$core$String$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$ASTNode$Q$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT$org$frostlanguage$frostc$ClassDecl$Kind$frost$core$String$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT$Q$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT$Q$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT$R$org$frostlanguage$frostc$ClassDecl$Q(org$frostlanguage$frostc$Scanner* self, frost$io$File* p_source, frost$collections$MapView* p_aliases, frost$core$String* p_contextName, org$frostlanguage$frostc$Position p_position, org$frostlanguage$frostc$ASTNode* p_rawDoccomment, org$frostlanguage$frostc$FixedArray* p_rawAnnotations, org$frostlanguage$frostc$ClassDecl$Kind p_kind, frost$core$String* p_name, org$frostlanguage$frostc$FixedArray* p_generics, org$frostlanguage$frostc$FixedArray* p_rawSupertypes, org$frostlanguage$frostc$FixedArray* p_members);
void org$frostlanguage$frostc$Scanner$addClass$org$frostlanguage$frostc$ClassDecl$frost$collections$Array$LTorg$frostlanguage$frostc$ClassDecl$GT(org$frostlanguage$frostc$Scanner* self, org$frostlanguage$frostc$ClassDecl* p_cl, frost$collections$Array* p_arr);
void org$frostlanguage$frostc$Scanner$createBareCodeClass$frost$io$File$frost$collections$MapView$LTfrost$core$String$Cfrost$core$String$GT$frost$core$String$frost$collections$List$LTorg$frostlanguage$frostc$ClassDecl$GT(org$frostlanguage$frostc$Scanner* self, frost$io$File* p_source, frost$collections$MapView* p_aliases, frost$core$String* p_contextName, frost$collections$List* p_classes);
void org$frostlanguage$frostc$Scanner$error$org$frostlanguage$frostc$Position$frost$core$String(org$frostlanguage$frostc$Scanner* self, org$frostlanguage$frostc$Position p_position, frost$core$String* p_msg);
frost$collections$ListView* org$frostlanguage$frostc$Scanner$scan$frost$io$File$org$frostlanguage$frostc$ASTNode$R$frost$collections$ListView$LTorg$frostlanguage$frostc$ClassDecl$GT(org$frostlanguage$frostc$Scanner* self, frost$io$File* p_source, org$frostlanguage$frostc$ASTNode* p_file);
void org$frostlanguage$frostc$Scanner$cleanup(org$frostlanguage$frostc$Scanner* self);

