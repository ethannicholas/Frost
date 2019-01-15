#pragma once
#include "frost_c.h"
#include "Parser_types.h"
typedef struct org$frostlanguage$frostc$parser$Parser org$frostlanguage$frostc$parser$Parser;
typedef struct frost$threads$MessageQueue frost$threads$MessageQueue;
typedef struct frost$io$File frost$io$File;
typedef struct frost$core$String frost$core$String;
#include "org/frostlanguage/frostc/parser/Token_types.h"
#include "org/frostlanguage/frostc/parser/Token/Kind_types.h"
#include "org/frostlanguage/frostc/parser/SyntaxHighlighter/Kind_types.h"
typedef struct org$frostlanguage$frostc$ASTNode org$frostlanguage$frostc$ASTNode;
#include "frost/core/Bit_types.h"
typedef struct org$frostlanguage$frostc$FixedArray org$frostlanguage$frostc$FixedArray;

void org$frostlanguage$frostc$parser$Parser$init$frost$threads$MessageQueue$LTorg$frostlanguage$frostc$Compiler$Error$GT(org$frostlanguage$frostc$parser$Parser* self, frost$threads$MessageQueue* p_errors);
void org$frostlanguage$frostc$parser$Parser$start$frost$io$File$frost$core$String(org$frostlanguage$frostc$parser$Parser* self, frost$io$File* p_path, frost$core$String* p_source);
org$frostlanguage$frostc$parser$Token org$frostlanguage$frostc$parser$Parser$rawNext$R$org$frostlanguage$frostc$parser$Token(org$frostlanguage$frostc$parser$Parser* self);
org$frostlanguage$frostc$parser$Token org$frostlanguage$frostc$parser$Parser$next$R$org$frostlanguage$frostc$parser$Token(org$frostlanguage$frostc$parser$Parser* self);
void org$frostlanguage$frostc$parser$Parser$pushback$org$frostlanguage$frostc$parser$Token(org$frostlanguage$frostc$parser$Parser* self, org$frostlanguage$frostc$parser$Token p_token);
org$frostlanguage$frostc$parser$Token org$frostlanguage$frostc$parser$Parser$peek$R$org$frostlanguage$frostc$parser$Token(org$frostlanguage$frostc$parser$Parser* self);
org$frostlanguage$frostc$parser$Token$nullable org$frostlanguage$frostc$parser$Parser$checkNext$org$frostlanguage$frostc$parser$Token$Kind$R$org$frostlanguage$frostc$parser$Token$Q(org$frostlanguage$frostc$parser$Parser* self, org$frostlanguage$frostc$parser$Token$Kind p_kind);
org$frostlanguage$frostc$parser$Token$nullable org$frostlanguage$frostc$parser$Parser$expect$org$frostlanguage$frostc$parser$Token$Kind$frost$core$String$R$org$frostlanguage$frostc$parser$Token$Q(org$frostlanguage$frostc$parser$Parser* self, org$frostlanguage$frostc$parser$Token$Kind p_kind, frost$core$String* p_expected);
void org$frostlanguage$frostc$parser$Parser$error$org$frostlanguage$frostc$parser$Token$frost$core$String(org$frostlanguage$frostc$parser$Parser* self, org$frostlanguage$frostc$parser$Token p_token, frost$core$String* p_msg);
void org$frostlanguage$frostc$parser$Parser$open$org$frostlanguage$frostc$parser$SyntaxHighlighter$Kind(org$frostlanguage$frostc$parser$Parser* self, org$frostlanguage$frostc$parser$SyntaxHighlighter$Kind p_kind);
void org$frostlanguage$frostc$parser$Parser$close$org$frostlanguage$frostc$parser$SyntaxHighlighter$Kind(org$frostlanguage$frostc$parser$Parser* self, org$frostlanguage$frostc$parser$SyntaxHighlighter$Kind p_kind);
void org$frostlanguage$frostc$parser$Parser$startSpeculative(org$frostlanguage$frostc$parser$Parser* self);
void org$frostlanguage$frostc$parser$Parser$accept(org$frostlanguage$frostc$parser$Parser* self);
void org$frostlanguage$frostc$parser$Parser$rewind(org$frostlanguage$frostc$parser$Parser* self);
frost$core$String* org$frostlanguage$frostc$parser$Parser$text$org$frostlanguage$frostc$parser$Token$R$frost$core$String(org$frostlanguage$frostc$parser$Parser* self, org$frostlanguage$frostc$parser$Token p_token);
org$frostlanguage$frostc$ASTNode* org$frostlanguage$frostc$parser$Parser$addStringChunk$org$frostlanguage$frostc$ASTNode$Q$org$frostlanguage$frostc$ASTNode$R$org$frostlanguage$frostc$ASTNode(org$frostlanguage$frostc$parser$Parser* self, org$frostlanguage$frostc$ASTNode* p_string, org$frostlanguage$frostc$ASTNode* p_chunk);
frost$core$String* org$frostlanguage$frostc$parser$Parser$formatString$org$frostlanguage$frostc$parser$Token$R$frost$core$String$Q(org$frostlanguage$frostc$parser$Parser* self, org$frostlanguage$frostc$parser$Token p_start);
frost$core$String* org$frostlanguage$frostc$parser$Parser$alignmentString$org$frostlanguage$frostc$parser$Token$R$frost$core$String$Q(org$frostlanguage$frostc$parser$Parser* self, org$frostlanguage$frostc$parser$Token p_start);
org$frostlanguage$frostc$ASTNode* org$frostlanguage$frostc$parser$Parser$convertToString$org$frostlanguage$frostc$ASTNode$R$org$frostlanguage$frostc$ASTNode(org$frostlanguage$frostc$parser$Parser* self, org$frostlanguage$frostc$ASTNode* p_expr);
org$frostlanguage$frostc$ASTNode* org$frostlanguage$frostc$parser$Parser$string$R$org$frostlanguage$frostc$ASTNode$Q(org$frostlanguage$frostc$parser$Parser* self);
org$frostlanguage$frostc$ASTNode* org$frostlanguage$frostc$parser$Parser$parenthesizedExpression$R$org$frostlanguage$frostc$ASTNode$Q(org$frostlanguage$frostc$parser$Parser* self);
org$frostlanguage$frostc$ASTNode* org$frostlanguage$frostc$parser$Parser$arrayLiteral$R$org$frostlanguage$frostc$ASTNode$Q(org$frostlanguage$frostc$parser$Parser* self);
org$frostlanguage$frostc$ASTNode* org$frostlanguage$frostc$parser$Parser$lambda$R$org$frostlanguage$frostc$ASTNode$Q(org$frostlanguage$frostc$parser$Parser* self);
org$frostlanguage$frostc$ASTNode* org$frostlanguage$frostc$parser$Parser$regex$R$org$frostlanguage$frostc$ASTNode$Q(org$frostlanguage$frostc$parser$Parser* self);
org$frostlanguage$frostc$ASTNode* org$frostlanguage$frostc$parser$Parser$term$R$org$frostlanguage$frostc$ASTNode$Q(org$frostlanguage$frostc$parser$Parser* self);
frost$core$String* org$frostlanguage$frostc$parser$Parser$getClassName$org$frostlanguage$frostc$ASTNode$R$frost$core$String$Q(org$frostlanguage$frostc$ASTNode* p_expr);
frost$core$String* org$frostlanguage$frostc$parser$Parser$methodName$R$frost$core$String$Q(org$frostlanguage$frostc$parser$Parser* self);
org$frostlanguage$frostc$ASTNode* org$frostlanguage$frostc$parser$Parser$type$R$org$frostlanguage$frostc$ASTNode$Q(org$frostlanguage$frostc$parser$Parser* self);
org$frostlanguage$frostc$ASTNode* org$frostlanguage$frostc$parser$Parser$functionOrTupleType$R$org$frostlanguage$frostc$ASTNode$Q(org$frostlanguage$frostc$parser$Parser* self);
org$frostlanguage$frostc$ASTNode* org$frostlanguage$frostc$parser$Parser$type$frost$core$Bit$R$org$frostlanguage$frostc$ASTNode$Q(org$frostlanguage$frostc$parser$Parser* self, frost$core$Bit p_needSpeculativeParse);
org$frostlanguage$frostc$FixedArray* org$frostlanguage$frostc$parser$Parser$typeSpecifiers$R$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT$Q(org$frostlanguage$frostc$parser$Parser* self);
org$frostlanguage$frostc$ASTNode* org$frostlanguage$frostc$parser$Parser$callExpression$R$org$frostlanguage$frostc$ASTNode$Q(org$frostlanguage$frostc$parser$Parser* self);
org$frostlanguage$frostc$ASTNode* org$frostlanguage$frostc$parser$Parser$exponentExpression$R$org$frostlanguage$frostc$ASTNode$Q(org$frostlanguage$frostc$parser$Parser* self);
org$frostlanguage$frostc$ASTNode* org$frostlanguage$frostc$parser$Parser$prefixExpression$R$org$frostlanguage$frostc$ASTNode$Q(org$frostlanguage$frostc$parser$Parser* self);
org$frostlanguage$frostc$ASTNode* org$frostlanguage$frostc$parser$Parser$multiplicativeExpression$R$org$frostlanguage$frostc$ASTNode$Q(org$frostlanguage$frostc$parser$Parser* self);
org$frostlanguage$frostc$ASTNode* org$frostlanguage$frostc$parser$Parser$additiveExpression$R$org$frostlanguage$frostc$ASTNode$Q(org$frostlanguage$frostc$parser$Parser* self);
org$frostlanguage$frostc$ASTNode* org$frostlanguage$frostc$parser$Parser$rangeExpression$R$org$frostlanguage$frostc$ASTNode$Q(org$frostlanguage$frostc$parser$Parser* self);
org$frostlanguage$frostc$ASTNode* org$frostlanguage$frostc$parser$Parser$comparisonExpression$R$org$frostlanguage$frostc$ASTNode$Q(org$frostlanguage$frostc$parser$Parser* self);
org$frostlanguage$frostc$ASTNode* org$frostlanguage$frostc$parser$Parser$andExpression$R$org$frostlanguage$frostc$ASTNode$Q(org$frostlanguage$frostc$parser$Parser* self);
org$frostlanguage$frostc$ASTNode* org$frostlanguage$frostc$parser$Parser$expression$R$org$frostlanguage$frostc$ASTNode$Q(org$frostlanguage$frostc$parser$Parser* self);
org$frostlanguage$frostc$ASTNode* org$frostlanguage$frostc$parser$Parser$ifStatement$R$org$frostlanguage$frostc$ASTNode$Q(org$frostlanguage$frostc$parser$Parser* self);
org$frostlanguage$frostc$ASTNode* org$frostlanguage$frostc$parser$Parser$typeDeclaration$R$org$frostlanguage$frostc$ASTNode$Q(org$frostlanguage$frostc$parser$Parser* self);
org$frostlanguage$frostc$ASTNode* org$frostlanguage$frostc$parser$Parser$target$R$org$frostlanguage$frostc$ASTNode$Q(org$frostlanguage$frostc$parser$Parser* self);
org$frostlanguage$frostc$ASTNode* org$frostlanguage$frostc$parser$Parser$forLoop$frost$core$String$Q$R$org$frostlanguage$frostc$ASTNode$Q(org$frostlanguage$frostc$parser$Parser* self, frost$core$String* p_label);
org$frostlanguage$frostc$ASTNode* org$frostlanguage$frostc$parser$Parser$whileLoop$frost$core$String$Q$R$org$frostlanguage$frostc$ASTNode$Q(org$frostlanguage$frostc$parser$Parser* self, frost$core$String* p_label);
org$frostlanguage$frostc$ASTNode* org$frostlanguage$frostc$parser$Parser$doLoop$frost$core$String$Q$R$org$frostlanguage$frostc$ASTNode$Q(org$frostlanguage$frostc$parser$Parser* self, frost$core$String* p_label);
org$frostlanguage$frostc$ASTNode* org$frostlanguage$frostc$parser$Parser$loopLoop$frost$core$String$Q$R$org$frostlanguage$frostc$ASTNode$Q(org$frostlanguage$frostc$parser$Parser* self, frost$core$String* p_label);
org$frostlanguage$frostc$ASTNode* org$frostlanguage$frostc$parser$Parser$assertStatement$R$org$frostlanguage$frostc$ASTNode$Q(org$frostlanguage$frostc$parser$Parser* self);
org$frostlanguage$frostc$ASTNode* org$frostlanguage$frostc$parser$Parser$whenClause$R$org$frostlanguage$frostc$ASTNode$Q(org$frostlanguage$frostc$parser$Parser* self);
org$frostlanguage$frostc$ASTNode* org$frostlanguage$frostc$parser$Parser$matchStatement$R$org$frostlanguage$frostc$ASTNode$Q(org$frostlanguage$frostc$parser$Parser* self);
org$frostlanguage$frostc$FixedArray* org$frostlanguage$frostc$parser$Parser$blockStatements$R$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT$Q(org$frostlanguage$frostc$parser$Parser* self);
org$frostlanguage$frostc$ASTNode* org$frostlanguage$frostc$parser$Parser$block$R$org$frostlanguage$frostc$ASTNode$Q(org$frostlanguage$frostc$parser$Parser* self);
org$frostlanguage$frostc$ASTNode* org$frostlanguage$frostc$parser$Parser$expressionOrAssignment$R$org$frostlanguage$frostc$ASTNode$Q(org$frostlanguage$frostc$parser$Parser* self);
org$frostlanguage$frostc$ASTNode* org$frostlanguage$frostc$parser$Parser$singleVar$R$org$frostlanguage$frostc$ASTNode$Q(org$frostlanguage$frostc$parser$Parser* self);
org$frostlanguage$frostc$ASTNode* org$frostlanguage$frostc$parser$Parser$varDeclaration$R$org$frostlanguage$frostc$ASTNode$Q(org$frostlanguage$frostc$parser$Parser* self);
org$frostlanguage$frostc$ASTNode* org$frostlanguage$frostc$parser$Parser$initCall$R$org$frostlanguage$frostc$ASTNode$Q(org$frostlanguage$frostc$parser$Parser* self);
org$frostlanguage$frostc$ASTNode* org$frostlanguage$frostc$parser$Parser$breakStatement$R$org$frostlanguage$frostc$ASTNode$Q(org$frostlanguage$frostc$parser$Parser* self);
org$frostlanguage$frostc$ASTNode* org$frostlanguage$frostc$parser$Parser$continueStatement$R$org$frostlanguage$frostc$ASTNode$Q(org$frostlanguage$frostc$parser$Parser* self);
org$frostlanguage$frostc$ASTNode* org$frostlanguage$frostc$parser$Parser$returnStatement$R$org$frostlanguage$frostc$ASTNode$Q(org$frostlanguage$frostc$parser$Parser* self);
org$frostlanguage$frostc$ASTNode* org$frostlanguage$frostc$parser$Parser$terminalStatement$R$org$frostlanguage$frostc$ASTNode$Q(org$frostlanguage$frostc$parser$Parser* self);
org$frostlanguage$frostc$ASTNode* org$frostlanguage$frostc$parser$Parser$anyLoop$frost$core$String$Q$R$org$frostlanguage$frostc$ASTNode$Q(org$frostlanguage$frostc$parser$Parser* self, frost$core$String* p_label);
org$frostlanguage$frostc$ASTNode* org$frostlanguage$frostc$parser$Parser$innerMethod$R$org$frostlanguage$frostc$ASTNode$Q(org$frostlanguage$frostc$parser$Parser* self);
org$frostlanguage$frostc$ASTNode* org$frostlanguage$frostc$parser$Parser$statement$R$org$frostlanguage$frostc$ASTNode$Q(org$frostlanguage$frostc$parser$Parser* self);
org$frostlanguage$frostc$ASTNode* org$frostlanguage$frostc$parser$Parser$packageDeclaration$R$org$frostlanguage$frostc$ASTNode$Q(org$frostlanguage$frostc$parser$Parser* self);
org$frostlanguage$frostc$ASTNode* org$frostlanguage$frostc$parser$Parser$usesDeclaration$R$org$frostlanguage$frostc$ASTNode$Q(org$frostlanguage$frostc$parser$Parser* self);
org$frostlanguage$frostc$FixedArray* org$frostlanguage$frostc$parser$Parser$genericsDeclaration$R$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT$Q(org$frostlanguage$frostc$parser$Parser* self);
org$frostlanguage$frostc$FixedArray* org$frostlanguage$frostc$parser$Parser$supertypes$R$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT$Q(org$frostlanguage$frostc$parser$Parser* self);
org$frostlanguage$frostc$ASTNode* org$frostlanguage$frostc$parser$Parser$annotation$R$org$frostlanguage$frostc$ASTNode$Q(org$frostlanguage$frostc$parser$Parser* self);
org$frostlanguage$frostc$FixedArray* org$frostlanguage$frostc$parser$Parser$annotations$R$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT(org$frostlanguage$frostc$parser$Parser* self);
org$frostlanguage$frostc$ASTNode* org$frostlanguage$frostc$parser$Parser$doccomment$R$org$frostlanguage$frostc$ASTNode$Q(org$frostlanguage$frostc$parser$Parser* self);
org$frostlanguage$frostc$ASTNode* org$frostlanguage$frostc$parser$Parser$parameter$R$org$frostlanguage$frostc$ASTNode$Q(org$frostlanguage$frostc$parser$Parser* self);
org$frostlanguage$frostc$FixedArray* org$frostlanguage$frostc$parser$Parser$parameters$R$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT$Q(org$frostlanguage$frostc$parser$Parser* self);
org$frostlanguage$frostc$ASTNode* org$frostlanguage$frostc$parser$Parser$methodDeclaration$org$frostlanguage$frostc$ASTNode$Q$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT$R$org$frostlanguage$frostc$ASTNode$Q(org$frostlanguage$frostc$parser$Parser* self, org$frostlanguage$frostc$ASTNode* p_doccomment, org$frostlanguage$frostc$FixedArray* p_annotations);
org$frostlanguage$frostc$ASTNode* org$frostlanguage$frostc$parser$Parser$anonymousMethod$R$org$frostlanguage$frostc$ASTNode$Q(org$frostlanguage$frostc$parser$Parser* self);
org$frostlanguage$frostc$ASTNode* org$frostlanguage$frostc$parser$Parser$initDeclaration$org$frostlanguage$frostc$ASTNode$Q$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT$R$org$frostlanguage$frostc$ASTNode$Q(org$frostlanguage$frostc$parser$Parser* self, org$frostlanguage$frostc$ASTNode* p_doccomment, org$frostlanguage$frostc$FixedArray* p_annotations);
org$frostlanguage$frostc$ASTNode* org$frostlanguage$frostc$parser$Parser$fieldDeclaration$org$frostlanguage$frostc$ASTNode$Q$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT$R$org$frostlanguage$frostc$ASTNode$Q(org$frostlanguage$frostc$parser$Parser* self, org$frostlanguage$frostc$ASTNode* p_doccomment, org$frostlanguage$frostc$FixedArray* p_annotations);
org$frostlanguage$frostc$ASTNode* org$frostlanguage$frostc$parser$Parser$choiceCase$org$frostlanguage$frostc$ASTNode$Q$R$org$frostlanguage$frostc$ASTNode$Q(org$frostlanguage$frostc$parser$Parser* self, org$frostlanguage$frostc$ASTNode* p_doccomment);
org$frostlanguage$frostc$ASTNode* org$frostlanguage$frostc$parser$Parser$choiceDeclaration$org$frostlanguage$frostc$ASTNode$Q$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT$R$org$frostlanguage$frostc$ASTNode$Q(org$frostlanguage$frostc$parser$Parser* self, org$frostlanguage$frostc$ASTNode* p_choiceDoccomment, org$frostlanguage$frostc$FixedArray* p_choiceAnnotations);
org$frostlanguage$frostc$ASTNode* org$frostlanguage$frostc$parser$Parser$declaration$R$org$frostlanguage$frostc$ASTNode$Q(org$frostlanguage$frostc$parser$Parser* self);
org$frostlanguage$frostc$ASTNode* org$frostlanguage$frostc$parser$Parser$classDeclaration$org$frostlanguage$frostc$ASTNode$Q$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT$R$org$frostlanguage$frostc$ASTNode$Q(org$frostlanguage$frostc$parser$Parser* self, org$frostlanguage$frostc$ASTNode* p_doccomment, org$frostlanguage$frostc$FixedArray* p_annotations);
org$frostlanguage$frostc$ASTNode* org$frostlanguage$frostc$parser$Parser$interfaceDeclaration$org$frostlanguage$frostc$ASTNode$Q$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT$R$org$frostlanguage$frostc$ASTNode$Q(org$frostlanguage$frostc$parser$Parser* self, org$frostlanguage$frostc$ASTNode* p_doccomment, org$frostlanguage$frostc$FixedArray* p_annotations);
org$frostlanguage$frostc$ASTNode* org$frostlanguage$frostc$parser$Parser$bodyEntry$R$org$frostlanguage$frostc$ASTNode$Q(org$frostlanguage$frostc$parser$Parser* self);
org$frostlanguage$frostc$ASTNode* org$frostlanguage$frostc$parser$Parser$file$R$org$frostlanguage$frostc$ASTNode$Q(org$frostlanguage$frostc$parser$Parser* self);
void org$frostlanguage$frostc$parser$Parser$cleanup(org$frostlanguage$frostc$parser$Parser* self);

