#pragma once

#include "ParserUtil.h"

#include <vector>

struct Position {
    Position()
    : fLine(-1)
    , fColumn(-1) {}

    Position(String* name, int line, int column)
    : fName(name)
    , fLine(line)
    , fColumn(column) {}

    String* fName;
    int fLine;
    int fColumn;
};

struct ASTNode {
	enum Kind {
		kAnnotation_Kind,
		kAnnotations_Kind,
		kArray_Kind,
		kAs_Kind,
		kAssert_Kind,
		kAtReturn_Kind,
		kBinary_Kind,
		kBlock_Kind,
		kBodyEntries_Kind,
		kBool_Kind,
		kBreak_Kind,
		kCall_Kind,
		kChoice_Kind,
		kChoices_Kind,
		kChoiceValue_Kind,
		kClass_Kind,
		kClassLiteral_Kind,
		kClassMembers_Kind,
		kClassType_Kind,
		kConstant_Kind,
		kContinue_Kind,
		kDef_Kind,
		kDefault_Kind,
		kDo_Kind,
		kDoccomment_Kind,
		kDot_Kind,
		kExpression_Kind,
		kExpressions_Kind,
		kField_Kind,
		kFloat_Kind,
		kFor_Kind,
		kFormatExpression_Kind,
		kFormatField_Kind,
		kFunction_Kind,
		kFunctionType_Kind,
		kFunctionValue_Kind,
		kGenerics_Kind,
		kGenericsDeclarations_Kind,
		kIdentifier_Kind,
		kIf_Kind,
		kImmutableFunctionType_Kind,
		kImmutableMethodType_Kind,
		kIndex_Kind,
		kInit_Kind,
		kInstance_Kind,
		kInt_Kind,
		kInterface_Kind,
		kLambda_Kind,
		kLambdaParameters_Kind,
		kLoop_Kind,
		kMatch_Kind,
		kMethod_Kind,
		kMethodType_Kind,
		kMethodValue_Kind,
		kNested_Kind,
		kNull_Kind,
		kPackage_Kind,
		kParameter_Kind,
		kParameters_Kind,
		kPostfix_Kind,
		kPre_Kind,
		kPrefix_Kind,
		kProperty_Kind,
		kRangeExclusive_Kind,
		kRangeInclusive_Kind,
		kRegex_Kind,
		kReturn_Kind,
		kSelf_Kind,
		kStatements_Kind,
		kString_Kind,
		kSuper_Kind,
		kTuple_Kind,
		kTupleType_Kind,
		kType_Kind,
		kTypes_Kind,
		kUnreachable_Kind,
		kUses_Kind,
		kVar_Kind,
		kVoid_Kind,
		kWhen_Kind,
		kWhens_Kind,
		kWhile_Kind
	};

	ASTNode()
	: fKind(kVoid_Kind) {}

	ASTNode(Position position, Kind kind)
	: fPosition(position)
	, fKind(kind) {}

	ASTNode(Position position, Kind kind, String text)
	: fPosition(position)
	, fKind(kind)
	, fText(std::move(text)) {}

	ASTNode(Position position, Kind kind, int64_t value)
	: fPosition(position)
	, fKind(kind) {
		fValue.fInt = value;
	}

	ASTNode(Position position, Kind kind, double value)
	: fPosition(position)
	, fKind(kind) {
		fValue.fFloat = value;
	}

	ASTNode(Position position, Kind kind, bool value)
	: fPosition(position)
	, fKind(kind) {
		fValue.fBool = value;
	}

	ASTNode(Position position, Kind kind, std::vector<ASTNode> children)
	: fPosition(position)
	, fKind(kind)
	, fChildren(std::move(children)) {}

	ASTNode(Position position, Kind kind, String text, std::vector<ASTNode> children)
	: fPosition(position)
	, fKind(kind)
	, fText(std::move(text))
	, fChildren(std::move(children)) {}

	String description() const {
		String result;
		switch (fKind) {
		    case kAnnotation_Kind:            result += "Annotation"; break;
		    case kAnnotations_Kind:           result += "Annotations"; break;
		    case kArray_Kind:                 result += "Array"; break;
		    case kAs_Kind:                    result += "As"; break;
		    case kAssert_Kind:                result += "Assert"; break;
		    case kAtReturn_Kind:              result += "AtReturn"; break;
		    case kBinary_Kind:                result += "Binary"; break;
		    case kBlock_Kind:                 result += "Block"; break;
		    case kBodyEntries_Kind:           result += "BodyEntries"; break;
		    case kBool_Kind:                  result += "Bool"; break;
		    case kBreak_Kind:                 result += "Break"; break;
		    case kCall_Kind:                  result += "Call"; break;
		    case kChoice_Kind:                result += "Choice"; break;
		    case kChoices_Kind:               result += "Choices"; break;
		    case kChoiceValue_Kind:           result += "ChoiceValue"; break;
		    case kClass_Kind:                 result += "Class"; break;
		    case kClassLiteral_Kind:          result += "ClassLiteral"; break;
		    case kClassMembers_Kind:          result += "ClassMembers"; break;
		    case kClassType_Kind:             result += "ClassType"; break;
		    case kConstant_Kind:              result += "Constant"; break;
		    case kContinue_Kind:              result += "Continue"; break;
		    case kDef_Kind:                   result += "Def"; break;
		    case kDefault_Kind:               result += "Default"; break;
		    case kDo_Kind:                    result += "Do"; break;
		    case kDoccomment_Kind:            result += "Doccomment"; break;
		    case kDot_Kind:                   result += "Dot"; break;
		    case kExpression_Kind:            result += "Expression"; break;
		    case kExpressions_Kind:           result += "Expressions"; break;
		    case kField_Kind:                 result += "Field"; break;
		    case kFloat_Kind:                 result += "Float"; break;
		    case kFor_Kind:                   result += "For"; break;
		    case kFormatExpression_Kind:      result += "FormatExpression"; break;
		    case kFormatField_Kind:           result += "FormatField"; break;
		    case kFunction_Kind:              result += "Function"; break;
		    case kFunctionType_Kind:          result += "FunctionType"; break;
		    case kFunctionValue_Kind:         result += "FunctionValue"; break;
		    case kGenerics_Kind:              result += "Generics"; break;
		    case kGenericsDeclarations_Kind:  result += "GenericsDeclarations"; break;
		    case kIdentifier_Kind:            result += "Identifier"; break;
		    case kIf_Kind:                    result += "If"; break;
		    case kImmutableFunctionType_Kind: result += "ImmutableFunctionType"; break;
		    case kImmutableMethodType_Kind:   result += "ImmutableMethodType"; break;
		    case kIndex_Kind:                 result += "Index"; break;
		    case kInit_Kind:                  result += "Init"; break;
		    case kInstance_Kind:              result += "Instance"; break;
		    case kInt_Kind:                   result += "Int"; break;
		    case kInterface_Kind:             result += "Interface"; break;
		    case kLambda_Kind:                result += "Lambda"; break;
		    case kLambdaParameters_Kind:      result += "LambdaParameters"; break;
		    case kLoop_Kind:                  result += "Loop"; break;
		    case kMatch_Kind:                 result += "Match"; break;
		    case kMethod_Kind:                result += "Method"; break;
		    case kMethodType_Kind:            result += "MethodType"; break;
		    case kMethodValue_Kind:           result += "MethodValue"; break;
		    case kNested_Kind:                result += "Nested"; break;
		    case kNull_Kind:                  result += "Null"; break;
		    case kPackage_Kind:               result += "Package"; break;
		    case kParameter_Kind:             result += "Parameter"; break;
		    case kParameters_Kind:            result += "Parameters"; break;
		    case kPostfix_Kind:               result += "Postfix"; break;
		    case kPre_Kind:                   result += "Pre"; break;
		    case kPrefix_Kind:                result += "Prefix"; break;
		    case kProperty_Kind:              result += "Property"; break;
		    case kRangeExclusive_Kind:        result += "RangeExclusive"; break;
		    case kRangeInclusive_Kind:        result += "RangeInclusive"; break;
		    case kRegex_Kind:                 result += "Regex"; break;
		    case kReturn_Kind:                result += "Return"; break;
		    case kSelf_Kind:                  result += "Self"; break;
		    case kStatements_Kind:            result += "Statements"; break;
		    case kString_Kind:                result += "String"; break;
		    case kSuper_Kind:                 result += "Super"; break;
		    case kTuple_Kind:                 result += "Tuple"; break;
		    case kTupleType_Kind:             result += "TupleType"; break;
		    case kType_Kind:                  result += "Type"; break;
		    case kTypes_Kind:                 result += "Types"; break;
		    case kUnreachable_Kind:           result += "Unreachable"; break;
		    case kUses_Kind:                  result += "Uses"; break;
		    case kVar_Kind:                   result += "Var"; break;
		    case kVoid_Kind:                  result += "Void"; break;
		    case kWhen_Kind:                  result += "When"; break;
		    case kWhens_Kind:                 result += "Whens"; break;
		    case kWhile_Kind:                 result += "While"; break;
		}
		result += "(";
		const char* separator = "";
		if (fText.size()) {
			result += separator;
			result += '"' + fText + '"';
			separator = ", ";
		}
		if (fChildren.size()) {
			result += separator;
			result += "{ ";
			separator = "";
			for (const auto& c : fChildren) {
				result += separator;
				result += c.description();
				separator = ", ";
			}
			result += " }";
		}
		result += ")";
		return result;
	}

	Position fPosition;

	Kind fKind;

	// interpretation of this string depends upon the kind of node it is
	String fText;
	
	// used only by certain kinds of nodes
	union {
		int64_t fInt;
		double fFloat;
		bool fBool;
	} fValue;
	
	std::vector<ASTNode> fChildren;
};