#include "org/frostlang/frostc/frostdoc/Markdown.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/MutableMethod.h"
#include "frost/threads/MessageQueue.h"
#include "org/frostlang/frostc/parser/Parser.h"
#include "frost/collections/HashMap.h"
#include "org/frostlang/frostc/frostdoc/Protector.h"
#include "frost/math/Random.h"
#include "frost/core/Int.h"
#include "frost/io/File.h"
#include "org/frostlang/frostc/parser/SyntaxHighlighter.h"
#include "frost/core/Frost.h"
#include "frost/core/MutableString.h"
#include "frost/core/Matcher.h"
#include "frost/core/RegularExpression.h"
#include "frost/core/Bit.h"
#include "frost/collections/ListView.h"
#include "frost/core/String/UTF8List.h"
#include "frost/core/Char8.h"
#include "frost/collections/Iterable.h"
#include "frost/collections/Iterator.h"
#include "frost/core/String/Index.h"
#include "frost/core/Range.LTfrost/core/String/Index.Q.GT.h"
#include "org/frostlang/frostc/frostdoc/Markdown/_Closure2.h"
#include "frost/collections/Array.h"
#include "frost/collections/CollectionView.h"
#include "org/frostlang/frostc/frostdoc/Markdown/_Closure4.h"
#include "frost/core/Int64.h"
#include "frost/core/Range.LTfrost/core/Int.GT.h"
#include "frost/unsafe/NewPointer.h"
#include "frost/core/Range.LTfrost/core/MutableString/Index.Q.GT.h"
#include "frost/core/MutableString/Index.h"
#include "org/frostlang/frostc/frostdoc/Markdown/_Closure6.h"
#include "frost/collections/MapView.h"
#include "frost/core/Char32.h"
#include "frost/core/Real64.h"
#include "frost/core/Int32.h"
#include "frost/core/UInt64.h"
#include "org/frostlang/frostc/frostdoc/Markdown/_Closure9.h"
#include "frost/core/Method.h"
#include "frost/core/Immutable.h"
#include "org/frostlang/frostc/frostdoc/Markdown/CodeReplacer.h"
#include "org/frostlang/frostc/frostdoc/Markdown/_Closure12.h"
#include "org/frostlang/frostc/parser/SyntaxHighlighter/Kind.h"
#include "org/frostlang/frostc/Pair.h"
#include "frost/core/Equatable.h"
#include "org/frostlang/frostc/parser/Token.h"
#include "frost/core/Range.LTfrost/core/String/Index.GT.h"
#include "org/frostlang/frostc/parser/Token/Kind.h"
#include "org/frostlang/frostc/ASTNode.h"
#include "frost/threads/ScopedLock.h"
#include "frost/threads/Lock.h"
#include "frost/collections/SpecializedArray.LTorg/frostlang/frostc/parser/Token.GT.h"
#include "org/frostlang/frostc/frostdoc/Markdown/_Closure14.h"
#include "org/frostlang/frostc/frostdoc/Markdown/_Closure16.h"
#include "org/frostlang/frostc/frostdoc/Markdown/_Closure18.h"
#include "org/frostlang/frostc/frostdoc/Markdown/_Closure20.h"
#include "org/frostlang/frostc/frostdoc/Markdown/_Closure22.h"
#include "org/frostlang/frostc/frostdoc/Markdown/_Closure24.h"
#include "frost/core/Comparable.h"
#include "org/frostlang/frostc/frostdoc/Markdown/HTMLToken.h"
#include "org/frostlang/frostc/frostdoc/Markdown/_Closure26.h"
#include "frost/core/Error.h"
#include "org/frostlang/frostc/frostdoc/Markdown/_Closure28.h"
#include "frost/core/String/MatchIterator.h"
#include "frost/io/OutputStream.h"
#include "org/frostlang/frostc/frostdoc/Markdown/_Closure30.h"
#include "frost/io/Console.h"
#include "frost/core/System.h"
#include "org/frostlang/frostc/frostdoc/Markdown/_Closure32.h"


static frost$core$String $s1;
org$frostlang$frostc$frostdoc$Markdown$class_type org$frostlang$frostc$frostdoc$Markdown$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$frostdoc$Markdown$cleanup, org$frostlang$frostc$frostdoc$Markdown$process$frost$core$String$R$frost$core$String, org$frostlang$frostc$frostdoc$Markdown$encodeBackslashEscapes$frost$core$MutableString, org$frostlang$frostc$frostdoc$Markdown$encodeEscapes$frost$core$MutableString$frost$collections$ListView$LTfrost$core$Char8$GT$frost$core$String, org$frostlang$frostc$frostdoc$Markdown$stripLinkDefinitions$frost$core$MutableString, org$frostlang$frostc$frostdoc$Markdown$runBlockGamut$frost$core$MutableString, org$frostlang$frostc$frostdoc$Markdown$doHorizontalRules$frost$core$MutableString, org$frostlang$frostc$frostdoc$Markdown$hashHTMLBlocks$frost$core$MutableString, org$frostlang$frostc$frostdoc$Markdown$formParagraphs$frost$core$MutableString, org$frostlang$frostc$frostdoc$Markdown$doAutoLinks$frost$core$MutableString, org$frostlang$frostc$frostdoc$Markdown$unescapeSpecialChars$frost$core$MutableString, org$frostlang$frostc$frostdoc$Markdown$encodeEmail$frost$core$String$R$frost$core$String, org$frostlang$frostc$frostdoc$Markdown$doBlockQuotes$frost$core$MutableString, org$frostlang$frostc$frostdoc$Markdown$detabify$frost$core$MutableString, org$frostlang$frostc$frostdoc$Markdown$doCodeBlocks$frost$core$MutableString, org$frostlang$frostc$frostdoc$Markdown$prettyPrint$org$frostlang$frostc$parser$Parser$R$frost$core$String, org$frostlang$frostc$frostdoc$Markdown$syntaxHighlight$frost$core$MutableString, org$frostlang$frostc$frostdoc$Markdown$encodeCode$frost$core$MutableString, org$frostlang$frostc$frostdoc$Markdown$doLists$frost$core$MutableString, org$frostlang$frostc$frostdoc$Markdown$processListItems$frost$core$String$R$frost$core$String, org$frostlang$frostc$frostdoc$Markdown$doHeaders$frost$core$MutableString, org$frostlang$frostc$frostdoc$Markdown$runSpanGamut$frost$core$MutableString, org$frostlang$frostc$frostdoc$Markdown$tokenizeHTML$frost$core$String$R$frost$collections$ListView$LTorg$frostlang$frostc$frostdoc$Markdown$HTMLToken$GT, org$frostlang$frostc$frostdoc$Markdown$escapeSpecialCharsWithinTagAttributes$frost$core$MutableString, org$frostlang$frostc$frostdoc$Markdown$doImages$frost$core$MutableString, org$frostlang$frostc$frostdoc$Markdown$doAnchors$frost$core$MutableString, org$frostlang$frostc$frostdoc$Markdown$doItalicsAndBold$frost$core$MutableString, org$frostlang$frostc$frostdoc$Markdown$encodeAmpsAndAngles$frost$core$MutableString, org$frostlang$frostc$frostdoc$Markdown$doCodeSpans$frost$core$MutableString} };

typedef frost$core$String* (*$fn3)(frost$core$Object*);
typedef frost$core$String* (*$fn4)(frost$core$Object*);
typedef frost$core$String* (*$fn5)(frost$core$Object*);
typedef void (*$fn6)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef frost$core$String* (*$fn7)(frost$core$Object*);
typedef void (*$fn8)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef void (*$fn9)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef void (*$fn10)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef void (*$fn11)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef frost$core$String* (*$fn12)(frost$core$Object*);
typedef frost$core$String* (*$fn14)(frost$core$Object*);
typedef frost$core$String* (*$fn17)(frost$core$Object*);
typedef frost$core$String* (*$fn20)(frost$core$Object*);
typedef void (*$fn23)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef frost$core$String* (*$fn25)(frost$core$Object*);
typedef void (*$fn27)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef void (*$fn28)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef void (*$fn29)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef void (*$fn30)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef frost$core$String* (*$fn32)(frost$core$Object*);
typedef frost$core$String* (*$fn33)(org$frostlang$frostc$frostdoc$Protector*, frost$core$String*);
typedef void (*$fn34)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*, frost$collections$ListView*, frost$core$String*);
typedef void (*$fn35)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*, frost$collections$ListView*, frost$core$String*);
typedef frost$core$String* (*$fn38)(org$frostlang$frostc$frostdoc$Protector*, frost$core$String*);
typedef void (*$fn41)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*, frost$collections$ListView*, frost$core$String*);
typedef void (*$fn43)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*, frost$collections$ListView*, frost$core$String*);
typedef frost$collections$Iterator* (*$fn45)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn46)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn47)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn48)(frost$core$Object*);
typedef frost$core$String* (*$fn49)(frost$core$Object*);
typedef frost$core$String* (*$fn50)(org$frostlang$frostc$frostdoc$Protector*, frost$core$String*);
typedef frost$core$String* (*$fn51)(frost$core$Object*);
typedef frost$core$String* (*$fn57)(frost$core$Object*);
typedef frost$core$String* (*$fn59)(frost$core$Object*);
typedef frost$core$String* (*$fn60)(org$frostlang$frostc$frostdoc$Protector*, frost$core$String*);
typedef frost$core$String* (*$fn61)(frost$core$Object*);
typedef void (*$fn67)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef void (*$fn68)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef void (*$fn69)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef void (*$fn70)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef void (*$fn71)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef void (*$fn72)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef void (*$fn73)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef void (*$fn74)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef void (*$fn75)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef void (*$fn76)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef void (*$fn77)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef void (*$fn78)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef void (*$fn79)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef void (*$fn80)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef frost$collections$Iterator* (*$fn81)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn82)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn83)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn84)(frost$core$Object*);
typedef frost$core$String* (*$fn93)(frost$core$Object*);
typedef frost$core$String* (*$fn95)(frost$collections$CollectionView*, frost$core$String*);
typedef frost$core$String* (*$fn96)(frost$collections$CollectionView*, frost$core$String*);
typedef frost$core$String* (*$fn97)(frost$core$Object*);
typedef frost$core$String* (*$fn98)(frost$core$Object*);
typedef frost$core$String* (*$fn149)(frost$core$Object*);
typedef frost$core$String* (*$fn164)(frost$core$Object*);
typedef frost$core$String* (*$fn174)(frost$core$Object*);
typedef frost$core$String* (*$fn175)(frost$core$Object*);
typedef frost$core$String* (*$fn176)(frost$core$Object*);
typedef frost$core$Int (*$fn177)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn178)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn179)(org$frostlang$frostc$frostdoc$Protector*, frost$core$String*);
typedef frost$core$Int (*$fn180)(frost$collections$CollectionView*);
typedef void (*$fn181)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef frost$core$String* (*$fn182)(frost$core$Object*);
typedef frost$core$Int (*$fn183)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn184)(frost$collections$CollectionView*, frost$core$String*);
typedef frost$core$String* (*$fn186)(frost$core$Object*);
typedef frost$core$String* (*$fn189)(frost$core$Object*);
typedef frost$core$String* (*$fn191)(frost$core$Object*);
typedef frost$core$String* (*$fn197)(org$frostlang$frostc$frostdoc$Protector*, frost$core$String*);
typedef void (*$fn203)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef frost$core$String* (*$fn204)(frost$core$Object*);
typedef frost$core$String* (*$fn212)(frost$core$Object*);
typedef frost$core$String* (*$fn214)(frost$core$Object*);
typedef frost$collections$Iterator* (*$fn217)(frost$collections$MapView*);
typedef frost$core$Bit (*$fn218)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn219)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn220)(org$frostlang$frostc$frostdoc$Protector*, frost$core$String*);
typedef frost$core$String* (*$fn224)(org$frostlang$frostc$frostdoc$Protector*, frost$core$String*);
typedef frost$collections$Iterator* (*$fn227)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn228)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn229)(frost$collections$Iterator*);
typedef frost$core$Real64 (*$fn230)(frost$math$Random*);
typedef frost$core$String* (*$fn231)(frost$core$Object*);
typedef frost$core$String* (*$fn232)(frost$core$Object*);
typedef frost$core$String* (*$fn239)(frost$core$Object*);
typedef frost$core$String* (*$fn244)(frost$core$Object*);
typedef frost$core$Object* (*$fn252)(frost$collections$ListView*, frost$core$Int);
typedef frost$collections$Iterator* (*$fn253)(frost$collections$Iterable*);
typedef frost$core$Int (*$fn254)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn255)(frost$core$Object*);
typedef frost$core$String* (*$fn264)(frost$core$Object*);
typedef frost$core$String* (*$fn266)(frost$core$Object*);
typedef frost$core$String* (*$fn268)(frost$core$Object*);
typedef frost$collections$Iterator* (*$fn276)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn277)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn278)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn279)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn280)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn281)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$String* (*$fn282)(org$frostlang$frostc$frostdoc$Protector*, frost$core$String*);
typedef frost$core$String* (*$fn283)(org$frostlang$frostc$frostdoc$Protector*, frost$core$String*);
typedef frost$core$String* (*$fn284)(org$frostlang$frostc$frostdoc$Protector*, frost$core$String*);
typedef frost$core$String* (*$fn285)(org$frostlang$frostc$frostdoc$Protector*, frost$core$String*);
typedef frost$core$String* (*$fn286)(org$frostlang$frostc$frostdoc$Protector*, frost$core$String*);
typedef frost$core$Bit (*$fn287)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn288)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$String* (*$fn289)(frost$core$Object*);
typedef frost$core$String* (*$fn290)(frost$core$Object*);
typedef frost$core$Bit (*$fn291)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn292)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn293)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$String* (*$fn328)(org$frostlang$frostc$frostdoc$Protector*, frost$core$String*);
typedef frost$core$String* (*$fn331)(org$frostlang$frostc$frostdoc$Protector*, frost$core$String*);
typedef frost$core$String* (*$fn334)(org$frostlang$frostc$frostdoc$Protector*, frost$core$String*);
typedef frost$core$String* (*$fn337)(org$frostlang$frostc$frostdoc$Protector*, frost$core$String*);
typedef frost$core$String* (*$fn340)(org$frostlang$frostc$frostdoc$Protector*, frost$core$String*);
typedef frost$core$String* (*$fn350)(frost$core$Object*);
typedef frost$core$String* (*$fn353)(frost$core$Object*);
typedef frost$core$String* (*$fn366)(frost$core$Object*);
typedef frost$core$String* (*$fn367)(org$frostlang$frostc$frostdoc$Markdown*, org$frostlang$frostc$parser$Parser*);
typedef frost$core$Int (*$fn368)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn369)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn370)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn371)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$String* (*$fn372)(org$frostlang$frostc$frostdoc$Markdown*, org$frostlang$frostc$parser$Parser*);
typedef frost$core$Int (*$fn373)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn374)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn375)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn376)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$String* (*$fn377)(org$frostlang$frostc$frostdoc$Markdown*, org$frostlang$frostc$parser$Parser*);
typedef frost$core$Bit (*$fn378)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$String* (*$fn379)(org$frostlang$frostc$frostdoc$Markdown*, org$frostlang$frostc$parser$Parser*);
typedef frost$core$String* (*$fn380)(frost$core$Object*);
typedef frost$core$String* (*$fn381)(org$frostlang$frostc$frostdoc$Markdown*, org$frostlang$frostc$parser$Parser*);
typedef frost$core$String* (*$fn390)(org$frostlang$frostc$frostdoc$Markdown*, org$frostlang$frostc$parser$Parser*);
typedef frost$core$String* (*$fn399)(org$frostlang$frostc$frostdoc$Markdown*, org$frostlang$frostc$parser$Parser*);
typedef frost$core$String* (*$fn403)(org$frostlang$frostc$frostdoc$Markdown*, org$frostlang$frostc$parser$Parser*);
typedef frost$core$String* (*$fn404)(frost$core$Object*);
typedef void (*$fn405)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef frost$core$String* (*$fn407)(frost$core$Object*);
typedef void (*$fn409)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef frost$core$String* (*$fn412)(frost$core$Object*);
typedef frost$core$String* (*$fn414)(frost$core$Object*);
typedef void (*$fn433)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef void (*$fn434)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef void (*$fn435)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef void (*$fn436)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef void (*$fn437)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef void (*$fn438)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef void (*$fn439)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef void (*$fn440)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef void (*$fn441)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef frost$core$String* (*$fn442)(frost$core$Object*);
typedef void (*$fn443)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef void (*$fn444)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef void (*$fn445)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef void (*$fn446)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef void (*$fn447)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef void (*$fn448)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef void (*$fn449)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef void (*$fn450)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef void (*$fn451)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef frost$core$String* (*$fn453)(frost$core$Object*);
typedef frost$core$Bit (*$fn459)(frost$core$Comparable*, frost$core$Comparable*);
typedef frost$core$Bit (*$fn460)(frost$core$Comparable*, frost$core$Comparable*);
typedef frost$core$String* (*$fn470)(frost$core$Object*);
typedef frost$collections$ListView* (*$fn471)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$String*);
typedef frost$collections$Iterator* (*$fn472)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn473)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn474)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn475)(org$frostlang$frostc$frostdoc$Protector*, frost$core$String*);
typedef frost$core$String* (*$fn476)(org$frostlang$frostc$frostdoc$Protector*, frost$core$String*);
typedef frost$core$String* (*$fn477)(org$frostlang$frostc$frostdoc$Protector*, frost$core$String*);
typedef frost$core$String* (*$fn478)(org$frostlang$frostc$frostdoc$Protector*, frost$core$String*);
typedef frost$core$String* (*$fn479)(frost$core$Object*);
typedef frost$collections$ListView* (*$fn480)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$String*);
typedef frost$core$String* (*$fn484)(org$frostlang$frostc$frostdoc$Protector*, frost$core$String*);
typedef frost$core$String* (*$fn487)(org$frostlang$frostc$frostdoc$Protector*, frost$core$String*);
typedef frost$core$String* (*$fn490)(org$frostlang$frostc$frostdoc$Protector*, frost$core$String*);
typedef frost$core$String* (*$fn493)(org$frostlang$frostc$frostdoc$Protector*, frost$core$String*);
typedef frost$core$String* (*$fn496)(frost$core$Object*);
typedef frost$core$String* (*$fn497)(frost$core$Object*);
typedef frost$core$String* (*$fn499)(frost$core$Object*);
typedef frost$core$String* (*$fn502)(frost$core$Object*);
typedef frost$core$String* (*$fn508)(frost$core$Object*);
typedef frost$core$Bit (*$fn509)(frost$core$Comparable*, frost$core$Comparable*);
typedef frost$core$Int (*$fn510)(frost$collections$Iterator*);
typedef frost$core$Int (*$fn511)(frost$collections$Iterator*);
typedef frost$core$Error* (*$fn512)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$String* (*$fn513)(frost$core$String*);
typedef frost$core$String* (*$fn514)(frost$core$Object*, frost$core$String*);
typedef frost$core$Error* (*$fn515)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$String* (*$fn516)(org$frostlang$frostc$frostdoc$Protector*, frost$core$String*);
typedef frost$core$String* (*$fn517)(org$frostlang$frostc$frostdoc$Protector*, frost$core$String*);
typedef frost$core$String* (*$fn529)(frost$core$Object*);
typedef frost$core$Error* (*$fn546)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$String* (*$fn560)(frost$core$String*);
typedef frost$core$String* (*$fn561)(frost$core$Object*, frost$core$String*);
typedef frost$core$Error* (*$fn566)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$String* (*$fn576)(org$frostlang$frostc$frostdoc$Protector*, frost$core$String*);
typedef frost$core$String* (*$fn581)(org$frostlang$frostc$frostdoc$Protector*, frost$core$String*);
typedef frost$core$String* (*$fn596)(frost$core$Object*);
typedef frost$core$String* (*$fn597)(frost$core$Object*);
typedef frost$core$String* (*$fn599)(frost$core$Object*);
typedef frost$core$String* (*$fn602)(frost$core$Object*);
typedef frost$core$String* (*$fn604)(frost$core$Object*);
typedef frost$core$String* (*$fn605)(frost$core$Object*);
typedef frost$core$String* (*$fn607)(frost$core$Object*);
typedef frost$core$String* (*$fn610)(frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x66\x72\x6f\x73\x74\x64\x6f\x63\x2e\x4d\x61\x72\x6b\x64\x6f\x77\x6e", 38, -4001291999769164301, NULL };
static frost$core$String $s2 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2f\x74\x6d\x70\x2f\x64\x75\x6d\x6d\x79", 10, -318330169617071760, NULL };
static frost$core$String $s13 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5c\x72\x5c\x6e", 4, 7951194466260930145, NULL };
static frost$core$String $s15 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s16 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5c\x72", 2, 671122139501198827, NULL };
static frost$core$String $s18 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s19 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x3f\x6d\x29\x5e\x5b\x20\x5c\x74\x5d\x2b\x24", 12, -1139377895399220983, NULL };
static frost$core$String $s21 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s22 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a\x0a", 2, 600243221914207573, NULL };
static frost$core$String $s24 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5e\x5b\x20\x5d\x2b\x24", 6, -619359493981426982, NULL };
static frost$core$String $s26 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s31 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s36 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x60\x5f\x3e\x21", 4, 7659751650544287521, NULL };
static frost$core$String $s37 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2a\x7b\x7d\x5b\x5d\x28\x29\x23\x2b\x2d\x2e", 11, 2316169525425843347, NULL };
static frost$core$String $s39 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5c", 1, -5808498599037614437, NULL };
static frost$core$String $s40 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5c\x5c\x5c\x5c", 4, 5306561135431028005, NULL };
static frost$core$String $s42 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5c\x5c", 2, 671084756105839653, NULL };
static frost$core$String $s44 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5c\x5c\x5c", 3, -5656721131278804581, NULL };
static frost$core$String $s55 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x3f\x6d\x29", 4, -2335708253904817870, NULL };
static frost$core$String $s62 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5e\x5b\x20\x5d\x7b\x30\x2c\x33\x7d\x5c\x5b\x28\x2e\x2b\x29\x5c\x5d\x3a\x5b\x20\x5c\x74\x5d\x2a\x5c\x6e\x3f\x5b\x20\x5c\x74\x5d\x2a", 33, -4331202214299653377, NULL };
static frost$core$String $s63 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x3f\x28\x5c\x53\x2b\x3f\x29\x3e\x3f", 10, 8382417696982838485, NULL };
static frost$core$String $s64 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5b\x20\x5c\x74\x5d\x2a\x5c\x6e\x3f\x5b\x20\x5c\x74\x5d\x2a", 15, -6491245181353575060, NULL };
static frost$core$String $s65 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x3f\x3a\x5b\x22\x28\x5d\x28\x2e\x2b\x3f\x29\x5b\x22\x29\x5d\x5b\x20\x5c\x74\x5d\x2a\x29\x3f", 24, 3710167618475896376, NULL };
static frost$core$String $s66 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x3f\x3a\x5c\x6e\x2b\x7c\x5c\x5a\x29", 10, -5708435374441202776, NULL };
static frost$core$String $s85 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5c\x2a", 2, 671060566850019011, NULL };
static frost$core$String $s86 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d", 1, -5808622843851602280, NULL };
static frost$core$String $s87 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5f", 1, -5808497499525986226, NULL };
static frost$core$String $s91 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x3f\x6d\x29\x5e\x5b\x20\x5d\x7b\x30\x2c\x32\x7d\x28\x5b\x20\x5d\x3f", 18, 4309245317481151845, NULL };
static frost$core$String $s92 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5b\x20\x5d\x3f\x29\x7b\x33\x2c\x7d\x5b\x20\x5d\x2a\x24", 14, 7160482551558519224, NULL };
static frost$core$String $s94 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x68\x72\x20\x2f\x3e", 6, -5777796302439281154, NULL };
static frost$core$String $s99 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70", 1, -5808538181456230033, NULL };
static frost$core$String $s100 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x64\x69\x76", 3, -3843758403106219896, NULL };
static frost$core$String $s101 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x68\x31", 2, 628963565149030354, NULL };
static frost$core$String $s102 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x68\x32", 2, 628962465637402143, NULL };
static frost$core$String $s103 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x68\x33", 2, 628961366125773932, NULL };
static frost$core$String $s104 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x68\x34", 2, 628960266614145721, NULL };
static frost$core$String $s105 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x68\x35", 2, 628959167102517510, NULL };
static frost$core$String $s106 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x68\x36", 2, 628958067590889299, NULL };
static frost$core$String $s107 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x62\x6c\x6f\x63\x6b\x71\x75\x6f\x74\x65", 10, -5563452656499994818, NULL };
static frost$core$String $s108 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65", 3, 8646156028890705350, NULL };
static frost$core$String $s109 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x74\x61\x62\x6c\x65", 5, 8583921542012250175, NULL };
static frost$core$String $s110 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x64\x6c", 2, 617375812101585325, NULL };
static frost$core$String $s111 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x6c", 2, 626099337358108374, NULL };
static frost$core$String $s112 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6c", 2, 631724438846900500, NULL };
static frost$core$String $s113 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x73\x63\x72\x69\x70\x74", 6, -5981763091442670774, NULL };
static frost$core$String $s114 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6e\x6f\x73\x63\x72\x69\x70\x74", 8, -783081183237450799, NULL };
static frost$core$String $s115 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x6f\x72\x6d", 4, -2513836004432995353, NULL };
static frost$core$String $s116 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x69\x65\x6c\x64\x73\x65\x74", 8, 7357453410947828701, NULL };
static frost$core$String $s117 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x69\x66\x72\x61\x6d\x65", 6, -3638500342914660223, NULL };
static frost$core$String $s118 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6d\x61\x74\x68", 4, 2256134787772167695, NULL };
static frost$core$String $s119 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x69\x6e\x73", 3, 3143514847037410647, NULL };
static frost$core$String $s120 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x64\x65\x6c", 3, -3847723242036791862, NULL };
static frost$core$String $s122 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7c", 1, -5808533783409717189, NULL };
static frost$core$String $s123 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7c", 1, -5808533783409717189, NULL };
static frost$core$String $s125 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7c", 1, -5808533783409717189, NULL };
static frost$core$String $s126 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s127 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x5e\x3c\x28", 4, -48189702736247289, NULL };
static frost$core$String $s128 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s129 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5c\x62", 2, 671139731687250203, NULL };
static frost$core$String $s130 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x2e\x2a\x5c\x6e\x29\x2a\x3f", 8, 287570575661980099, NULL };
static frost$core$String $s131 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x2f\x5c\x32\x3e", 5, 2665918321944868088, NULL };
static frost$core$String $s132 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5b\x20\x5d\x2a", 4, 100554075858525689, NULL };
static frost$core$String $s133 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x3f\x3d\x5c\x6e\x2b\x7c\x5c\x5a\x29\x29", 11, -7380592505298674730, NULL };
static frost$core$String $s134 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x5e", 2, 567781240609339659, NULL };
static frost$core$String $s135 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x28", 2, 579161185959052809, NULL };
static frost$core$String $s136 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s137 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5c\x62", 2, 671139731687250203, NULL };
static frost$core$String $s138 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x2e\x2a\x5c\x6e\x29\x2a\x3f", 8, 287570575661980099, NULL };
static frost$core$String $s139 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x2a\x3c\x2f\x5c\x32\x3e", 7, 938556386175108236, NULL };
static frost$core$String $s140 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5b\x20\x5d\x2a", 4, 100554075858525689, NULL };
static frost$core$String $s141 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x3f\x3d\x5c\x6e\x2b\x7c\x5c\x5a\x29\x29", 11, -7380592505298674730, NULL };
static frost$core$String $s142 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x3f\x3a\x28\x3f\x3c\x3d\x5c\x6e\x5c\x6e\x29", 12, -8972720710842805865, NULL };
static frost$core$String $s143 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7c", 1, -5808533783409717189, NULL };
static frost$core$String $s144 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5c\x41\x5c\x6e\x3f", 5, 7194244039519334453, NULL };
static frost$core$String $s145 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s146 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28", 1, -5808617346293461225, NULL };
static frost$core$String $s147 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5b\x20\x5d\x7b\x30\x2c", 6, -3928593254950292230, NULL };
static frost$core$String $s150 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7d", 1, -5808534882921345400, NULL };
static frost$core$String $s151 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x28\x68\x72\x29", 5, 5113638981539259662, NULL };
static frost$core$String $s152 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5c\x62", 2, 671139731687250203, NULL };
static frost$core$String $s153 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x5b\x5e\x3c\x3e\x5d\x29\x2a\x3f", 9, 4681977557455105029, NULL };
static frost$core$String $s154 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2f\x3f\x3e", 3, -1252663599262404009, NULL };
static frost$core$String $s155 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5b\x20\x5d\x2a", 4, 100554075858525689, NULL };
static frost$core$String $s156 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x3f\x3d\x5c\x6e\x7b\x32\x2c\x7d\x7c\x5c\x5a\x29\x29", 14, 7822491852177365645, NULL };
static frost$core$String $s157 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x3f\x3a\x28\x3f\x3c\x3d\x5c\x6e\x5c\x6e\x29", 12, -8972720710842805865, NULL };
static frost$core$String $s158 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7c", 1, -5808533783409717189, NULL };
static frost$core$String $s159 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5c\x41\x5c\x6e\x3f", 5, 7194244039519334453, NULL };
static frost$core$String $s160 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s161 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28", 1, -5808617346293461225, NULL };
static frost$core$String $s162 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5b\x20\x5d\x7b\x30\x2c", 6, -3928593254950292230, NULL };
static frost$core$String $s165 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7d", 1, -5808534882921345400, NULL };
static frost$core$String $s166 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x3f\x73\x3a", 4, -2345270706533476687, NULL };
static frost$core$String $s167 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x21", 2, 579168882540450286, NULL };
static frost$core$String $s168 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x2d\x2d\x2e\x2a\x3f\x2d\x2d\x5c\x73\x2a\x29\x2b", 13, 5563676495348135801, NULL };
static frost$core$String $s169 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3e", 1, -5808601953130666271, NULL };
static frost$core$String $s170 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s171 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5b\x20\x5d\x2a", 4, 100554075858525689, NULL };
static frost$core$String $s172 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x3f\x3d\x5c\x6e\x7b\x32\x2c\x7d\x7c\x5c\x5a\x29", 13, 2741499190047052438, NULL };
static frost$core$String $s173 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s185 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5c\x41\x5c\x6e\x2b", 5, 7194222049286770233, NULL };
static frost$core$String $s187 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s188 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5c\x6e\x2b\x5c\x7a", 5, 97634128454376478, NULL };
static frost$core$String $s190 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s192 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5c\x6e\x7b\x32\x2c\x7d", 6, 7690319398872698237, NULL };
static frost$core$String $s195 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s196 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s198 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x66\x72\x6f\x73\x74", 14, -4595392010584278012, NULL };
static frost$core$String $s199 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -3541275370151069987, NULL };
static frost$core$String $s201 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s202 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x3a\x3d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x2c\x20\x76\x61\x6c\x75\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54\x29", 115, -1630266006860672840, NULL };
static frost$core$String $s205 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x70\x3e", 3, 8061034418550842365, NULL };
static frost$core$String $s206 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x2f\x70\x3e", 4, 8919941027677049518, NULL };
static frost$core$String $s208 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s209 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x3a\x3d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x2c\x20\x76\x61\x6c\x75\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54\x29", 115, -1630266006860672840, NULL };
static frost$core$String $s211 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a\x0a", 2, 600243221914207573, NULL };
static frost$core$String $s213 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x28\x28\x68\x74\x74\x70\x73\x3f\x7c\x66\x74\x70\x29\x3a\x5b\x5e\x27\x5c\x22\x3e\x5c\x73\x5d\x2b\x29\x3e", 27, 1795392191797210536, NULL };
static frost$core$String $s215 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x61\x20\x68\x72\x65\x66\x3d\x22\x24\x31\x22\x3e\x24\x31\x3c\x2f\x61\x3e", 19, 943263205479741618, NULL };
static frost$core$String $s216 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x28\x5b\x2d\x2e\x5c\x77\x5d\x2b\x5c\x40\x5b\x2d\x61\x2d\x7a\x30\x2d\x39\x5d\x2b\x28\x5c\x2e\x5b\x2d\x61\x2d\x7a\x30\x2d\x39\x5d\x2b\x29\x2a\x5c\x2e\x5b\x61\x2d\x7a\x5d\x2b\x29\x3e", 46, 5452143767326512023, NULL };
static frost$core$String $s225 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x66\x72\x6f\x73\x74", 14, -4595392010584278012, NULL };
static frost$core$String $s226 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -3541275370151069987, NULL };
static frost$core$String $s237 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x26\x23", 2, 558196797748116622, NULL };
static frost$core$String $s240 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3b", 1, -5808598654595781638, NULL };
static frost$core$String $s241 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x26\x23\x78", 3, -5531746251334265342, NULL };
static frost$core$String $s242 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x78", 1, -5808529385363204345, NULL };
static frost$core$String $s243 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3b", 1, -5808598654595781638, NULL };
static frost$core$String $s245 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x28", 2, 567770245493057549, NULL };
static frost$core$String $s246 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5e\x5b\x20\x09\x5d\x2a\x3e\x5b\x20\x09\x5d\x3f", 12, -7372722945027663410, NULL };
static frost$core$String $s247 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x2b\x5c\x6e", 4, 5142313243796413576, NULL };
static frost$core$String $s248 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x2e\x2b\x5c\x6e\x29\x2a", 7, -4363383151632465587, NULL };
static frost$core$String $s249 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5c\x6e\x2a", 3, -5612786845647453793, NULL };
static frost$core$String $s250 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29\x2b", 2, 566746600167382333, NULL };
static frost$core$String $s251 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s257 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x66\x72\x6f\x73\x74", 14, -4595392010584278012, NULL };
static frost$core$String $s258 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -3541275370151069987, NULL };
static frost$core$String $s261 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x66\x72\x6f\x73\x74", 14, -4595392010584278012, NULL };
static frost$core$String $s262 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -3541275370151069987, NULL };
static frost$core$String $s263 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20", 1, -5808626142386486913, NULL };
static frost$core$String $s265 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x2e\x2a\x3f\x29\x5c\x74", 7, 3712169380313635567, NULL };
static frost$core$String $s267 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x3f\x6d\x29\x5e\x28\x5c\x74\x7c\x5b\x20\x5d\x7b\x31\x2c\x34\x7d\x29", 18, -3272951813139089848, NULL };
static frost$core$String $s269 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s270 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x3f\x3a\x5c\x6e\x5c\x6e\x7c\x5c\x41\x29\x28\x28\x3f\x3a", 15, -7138352204384862423, NULL };
static frost$core$String $s271 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x3f\x3a\x5b\x20\x5d\x7b\x34\x7d\x29", 10, -7521922402797660827, NULL };
static frost$core$String $s272 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x2a\x5c\x6e\x2b", 5, -6625699055198575136, NULL };
static frost$core$String $s273 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29\x2b", 2, 566746600167382333, NULL };
static frost$core$String $s274 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s275 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x28\x3f\x3d\x5e\x5b\x20\x5d\x7b\x30\x2c\x34\x7d\x5c\x53\x29\x7c\x5c\x5a\x29", 20, 3651045375067248158, NULL };
static frost$core$String $s294 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x66\x72\x6f\x73\x74\x63\x6f\x64\x65\x22\x3e", 24, 8088723627449183031, NULL };
static frost$core$String $s295 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x66\x72\x6f\x73\x74", 14, -4595392010584278012, NULL };
static frost$core$String $s296 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x53\x79\x6e\x74\x61\x78\x48\x69\x67\x68\x6c\x69\x67\x68\x74\x65\x72\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x53\x79\x6e\x74\x61\x78\x48\x69\x67\x68\x6c\x69\x67\x68\x74\x65\x72", 129, 4586254628416497089, NULL };
static frost$core$String $s306 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x2f\x73\x70\x61\x6e\x3e", 7, 8018166017091831374, NULL };
static frost$core$String $s310 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x63\x6f\x6d\x6d\x65\x6e\x74\x22\x3e", 22, 5195701876173909349, NULL };
static frost$core$String $s311 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x22\x3e", 25, -1277266025356162443, NULL };
static frost$core$String $s312 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x6d\x65\x74\x68\x6f\x64\x4e\x61\x6d\x65\x22\x3e", 25, 614141651668444638, NULL };
static frost$core$String $s313 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x70\x61\x72\x61\x6d\x65\x74\x65\x72\x4e\x61\x6d\x65\x22\x3e", 28, 7976964863345252008, NULL };
static frost$core$String $s314 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x74\x79\x70\x65\x22\x3e", 19, -6237120118826539316, NULL };
static frost$core$String $s315 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x6b\x65\x79\x77\x6f\x72\x64\x22\x3e", 22, 3489752146076448555, NULL };
static frost$core$String $s316 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x63\x6f\x6e\x74\x72\x6f\x6c\x22\x3e", 22, -6843474029214577891, NULL };
static frost$core$String $s317 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x6c\x69\x74\x65\x72\x61\x6c\x22\x3e", 22, -3542195609056500961, NULL };
static frost$core$String $s318 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x73\x74\x72\x69\x6e\x67\x22\x3e", 21, -4855012157584048303, NULL };
static frost$core$String $s319 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x6f\x70\x65\x72\x61\x74\x6f\x72\x22\x3e", 23, 33141744113103844, NULL };
static frost$core$String $s320 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x6c\x61\x62\x65\x6c\x22\x3e", 20, -149918338464228758, NULL };
static frost$core$String $s321 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x66\x72\x6f\x73\x74", 14, -4595392010584278012, NULL };
static frost$core$String $s322 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x26", 1, -5808628341409743335, NULL };
static frost$core$String $s323 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x26\x61\x6d\x70\x3b", 5, 4071416011722950258, NULL };
static frost$core$String $s324 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c", 1, -5808604152153922693, NULL };
static frost$core$String $s325 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x26\x6c\x74\x3b", 4, 3062186500626132942, NULL };
static frost$core$String $s326 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3e", 1, -5808601953130666271, NULL };
static frost$core$String $s327 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x26\x67\x74\x3b", 4, 8779067523193954595, NULL };
static frost$core$String $s329 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2a", 1, -5808615147270204803, NULL };
static frost$core$String $s330 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5c\x2a", 2, 671060566850019011, NULL };
static frost$core$String $s332 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5f", 1, -5808497499525986226, NULL };
static frost$core$String $s333 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5f", 1, -5808497499525986226, NULL };
static frost$core$String $s335 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5b", 1, -5808493101479473382, NULL };
static frost$core$String $s336 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5c\x5b", 2, 671077059524442176, NULL };
static frost$core$String $s338 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5d", 1, -5808499698549242648, NULL };
static frost$core$String $s339 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5c\x5d", 2, 671083656594211442, NULL };
static frost$core$String $s341 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5c", 1, -5808498599037614437, NULL };
static frost$core$String $s342 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5c\x5c", 2, 671084756105839653, NULL };
static frost$core$String $s351 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22", 13, 4264447674952797972, NULL };
static frost$core$String $s352 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5f\x54\x4f\x4b\x45\x4e\x22\x3e", 8, 4569710556078843455, NULL };
static frost$core$String $s360 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x2f\x73\x70\x61\x6e\x3e", 7, 8018166017091831374, NULL };
static frost$core$String $s364 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x2f\x73\x70\x61\x6e\x3e", 7, 8018166017091831374, NULL };
static frost$core$String $s365 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x2f\x73\x70\x61\x6e\x3e", 7, 8018166017091831374, NULL };
static frost$core$String $s385 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 22, 6468124764262308515, NULL };
static frost$core$String $s386 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x54\x6f\x6b\x65\x6e\x3e\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x54\x6f\x6b\x65\x6e", 162, 3779449970926349286, NULL };
static frost$core$String $s394 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 22, 6468124764262308515, NULL };
static frost$core$String $s395 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x54\x6f\x6b\x65\x6e\x3e\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x54\x6f\x6b\x65\x6e", 162, 3779449970926349286, NULL };
static frost$core$String $s406 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x3f\x6d\x29\x24\x28\x5c\x73\x2a\x29\x5c\x2e\x5c\x2e\x5c\x2e\x28\x5c\x73\x2a\x29\x5e", 22, -248689979902601246, NULL };
static frost$core$String $s408 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x24\x31\x2d\x2a\x23\x2e\x2e\x2e\x23\x2a\x2d\x24\x32", 13, -9212652225966281814, NULL };
static frost$core$String $s410 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x2a\x23\x2e\x2e\x2e\x23\x2a\x2d", 9, 4555640629949038113, NULL };
static frost$core$String $s411 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x65\x6c\x6c\x69\x70\x73\x69\x73\x22\x3e\x2e\x2e\x2e\x3c\x2f\x73\x70\x61\x6e\x3e", 33, -453769903465079796, NULL };
static frost$core$String $s415 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x28\x5b\x20\x5d\x7b\x30\x2c", 8, -3741150137448884478, NULL };
static frost$core$String $s416 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7d\x28\x28\x3f\x3a\x5b\x2d\x2b\x2a\x5d\x7c\x5c\x64\x2b\x5b\x2e\x5d\x29\x29\x5b\x20\x5d\x2b\x29\x28\x3f\x73\x3a\x2e\x2b\x3f\x29\x28\x5c\x7a\x7c\x5c\x6e\x7b\x32\x2c\x7d", 42, 137202100460744211, NULL };
static frost$core$String $s417 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x3f\x3d\x5c\x53\x29\x28\x3f\x21\x5b\x20\x5d\x2a\x28\x3f\x3a\x5b\x2d\x2b\x2a\x5d\x7c\x5c\x64\x2b\x5b\x2e\x5d\x29\x5b\x20\x5d\x2b\x29\x29\x29", 36, 8134773430561440898, NULL };
static frost$core$String $s418 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x3f\x6d\x29\x5e", 5, -439449056924796284, NULL };
static frost$core$String $s419 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s420 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x3f\x6d\x29\x28\x3f\x3a\x28\x3f\x3c\x3d\x5c\x6e\x5c\x6e\x29\x7c\x5c\x41\x5c\x6e\x3f\x29", 23, 1848678979582438429, NULL };
static frost$core$String $s421 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5c\x6e\x7b\x32\x2c\x7d\x5c\x7a", 8, -541266234631704725, NULL };
static frost$core$String $s422 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s423 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x5c\x6e\x29\x3f\x5e\x28\x5b\x20\x5c\x74\x5d\x2a\x29\x28\x5b\x2d\x2b\x2a\x5d\x7c\x5c\x64\x2b\x5b\x2e\x5d\x29\x5b\x20\x5d\x2b", 32, 654627259653007759, NULL };
static frost$core$String $s424 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x28\x3f\x73\x3a\x2e\x2b\x3f\x29\x28\x5c\x6e\x7b\x31\x2c\x32\x7d\x29\x29", 19, 9093550410993434533, NULL };
static frost$core$String $s425 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x3f\x3d\x5c\x6e\x2a\x28\x5c\x7a\x7c\x5c\x32\x28\x5b\x2d\x2b\x5c\x2a\x5d\x7c\x5c\x64\x2b\x5b\x2e\x5d\x29\x5b\x20\x5c\x74\x5d\x2b\x29\x29", 35, -2262235355244044178, NULL };
static frost$core$String $s426 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a\x0a", 2, 600243221914207573, NULL };
static frost$core$String $s427 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x66\x72\x6f\x73\x74", 14, -4595392010584278012, NULL };
static frost$core$String $s428 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -3541275370151069987, NULL };
static frost$core$String $s429 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s430 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x3f\x6d\x29\x5e\x28\x2e\x2a\x29\x5c\x6e\x3d\x3d\x3d\x3d\x2b\x24", 17, -6883718133434480482, NULL };
static frost$core$String $s431 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x3f\x6d\x29\x5e\x28\x2e\x2a\x29\x5c\x6e\x2d\x2d\x2d\x2d\x2b\x24", 17, 7770988057466060478, NULL };
static frost$core$String $s432 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5e\x28\x23\x7b\x31\x2c\x36\x7d\x29\x5c\x73\x2a\x28\x2e\x2a\x3f\x29\x5c\x73\x2a\x5c\x31\x3f\x24", 24, 16014950917847968, NULL };
static frost$core$String $s452 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x7b\x32\x2c\x7d\x5c\x6e", 7, -5658908687078335657, NULL };
static frost$core$String $s454 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x3c\x62\x72\x20\x2f\x3e\x0a", 8, -2897744956745334060, NULL };
static frost$core$String $s455 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s456 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s457 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x3f\x3a\x3c\x5b\x61\x2d\x7a\x2f\x21\x24\x5d\x28\x3f\x3a\x5b\x5e\x3c\x3e\x5d\x7c", 21, -2230095140111063139, NULL };
static frost$core$String $s458 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29\x2a\x3e\x29", 4, -1177431067148667313, NULL };
static frost$core$String $s461 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x3f\x73\x3a\x3c\x21\x28\x2d\x2d\x2e\x2a\x3f\x2d\x2d\x5c\x73\x2a\x29\x2b\x3e\x29\x7c", 22, -1727262038654951337, NULL };
static frost$core$String $s462 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x3f\x73\x3a\x3c\x5c\x3f\x2e\x2a\x3f\x5c\x3f\x3e\x29", 14, 6214673560103078479, NULL };
static frost$core$String $s463 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7c", 1, -5808533783409717189, NULL };
static frost$core$String $s485 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5c", 1, -5808498599037614437, NULL };
static frost$core$String $s486 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5c\x5c", 2, 671084756105839653, NULL };
static frost$core$String $s488 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x60", 1, -5808555773642281409, NULL };
static frost$core$String $s489 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x60", 1, -5808555773642281409, NULL };
static frost$core$String $s491 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2a", 1, -5808615147270204803, NULL };
static frost$core$String $s492 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5c\x2a", 2, 671060566850019011, NULL };
static frost$core$String $s494 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5f", 1, -5808497499525986226, NULL };
static frost$core$String $s495 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5f", 1, -5808497499525986226, NULL };
static frost$core$String $s498 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x21\x5c\x5c\x5b\x28\x2e\x2a\x29\x5c\x5c\x5d\x5c\x5c\x28\x28\x2e\x2a\x29\x20\x5c\x22\x28\x2e\x2a\x29\x5c\x22\x5c\x5c\x29", 30, 6493917754048131162, NULL };
static frost$core$String $s500 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x69\x6d\x67\x20\x73\x72\x63\x3d\x22\x24\x32\x22\x20\x61\x6c\x74\x3d\x22\x24\x31\x22\x20\x74\x69\x74\x6c\x65\x3d\x22\x24\x33\x22\x20\x2f\x3e", 36, 4038931684154322219, NULL };
static frost$core$String $s501 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x21\x5c\x5c\x5b\x28\x2e\x2a\x29\x5c\x5c\x5d\x5c\x5c\x28\x28\x2e\x2a\x29\x5c\x5c\x29", 21, 765547484578233383, NULL };
static frost$core$String $s503 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x69\x6d\x67\x20\x73\x72\x63\x3d\x22\x24\x32\x22\x20\x61\x6c\x74\x3d\x22\x24\x31\x22\x20\x2f\x3e", 25, -2070577711995753147, NULL };
static frost$core$String $s504 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x5b\x21\x5d\x5c\x5b\x28\x2e\x2a\x3f\x29\x5c\x5d", 13, 8561428590693777046, NULL };
static frost$core$String $s505 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5b\x20\x5d\x3f\x28\x3f\x3a\x5c\x6e\x5b\x20\x5d\x2a\x29\x3f", 15, -4228281741099089751, NULL };
static frost$core$String $s506 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5c\x5b\x28\x2e\x2a\x3f\x29\x5c\x5d", 9, -5820255714607045073, NULL };
static frost$core$String $s507 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s518 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x5c\x5b\x28\x2e\x2a\x3f\x29\x5c\x5d", 10, -5340773744844878283, NULL };
static frost$core$String $s519 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5b\x20\x5d\x3f\x28\x3f\x3a\x5c\x6e\x5b\x20\x5d\x2a\x29\x3f", 15, -4228281741099089751, NULL };
static frost$core$String $s520 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5c\x5b\x28\x2e\x2a\x3f\x29\x5c\x5d", 9, -5820255714607045073, NULL };
static frost$core$String $s521 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s522 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x5c\x5b\x28\x2e\x2a\x3f\x29\x5c\x5d", 10, -5340773744844878283, NULL };
static frost$core$String $s523 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5c\x28", 2, 671062765873275433, NULL };
static frost$core$String $s524 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5b\x20\x5c\x74\x5d\x2a", 6, -2765009834817178127, NULL };
static frost$core$String $s525 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x3f\x28\x2e\x2a\x3f\x29\x3e\x3f", 9, -2141900438656434377, NULL };
static frost$core$String $s526 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5b\x20\x5c\x74\x5d\x2a", 6, -2765009834817178127, NULL };
static frost$core$String $s527 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5c\x29", 2, 671061666361647222, NULL };
static frost$core$String $s528 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s533 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x66\x72\x6f\x73\x74", 14, -4595392010584278012, NULL };
static frost$core$String $s534 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -3541275370151069987, NULL };
static frost$core$String $s535 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28", 1, -5808617346293461225, NULL };
static frost$core$String $s537 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x66\x72\x6f\x73\x74", 14, -4595392010584278012, NULL };
static frost$core$String $s538 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -3541275370151069987, NULL };
static frost$core$String $s539 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s541 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s542 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x66\x72\x6f\x73\x74", 14, -4595392010584278012, NULL };
static frost$core$String $s543 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -3541275370151069987, NULL };
static frost$core$String $s544 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x65\x72\x72\x6f\x72\x3a\x20\x75\x6e\x6d\x61\x74\x63\x68\x65\x64\x20\x27\x28\x27\x20\x69\x6e\x20\x27", 25, 3205828262605118666, NULL };
static frost$core$String $s545 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27", 1, -5808629440921371546, NULL };
static frost$core$String $s547 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x66\x72\x6f\x73\x74", 14, -4595392010584278012, NULL };
static frost$core$String $s548 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s549 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x66\x72\x6f\x73\x74", 14, -4595392010584278012, NULL };
static frost$core$String $s550 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x66\x72\x6f\x73\x74", 14, -4595392010584278012, NULL };
static frost$core$String $s551 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x65\x64\x20\x66\x72\x6f\x6d\x20\x40\x6e\x6f\x52\x65\x74\x75\x72\x6e\x20\x6d\x65\x74\x68\x6f\x64", 30, 1170110763298107664, NULL };
static frost$core$String $s552 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x66\x72\x6f\x73\x74", 14, -4595392010584278012, NULL };
static frost$core$String $s553 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -3541275370151069987, NULL };
static frost$core$String $s554 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x66\x72\x6f\x73\x74", 14, -4595392010584278012, NULL };
static frost$core$String $s555 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78", 85, -1074977990553908571, NULL };
static frost$core$String $s556 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x66\x72\x6f\x73\x74", 14, -4595392010584278012, NULL };
static frost$core$String $s557 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -3541275370151069987, NULL };
static frost$core$String $s558 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x66\x72\x6f\x73\x74", 14, -4595392010584278012, NULL };
static frost$core$String $s559 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x28\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x29\x3d\x26\x3e\x28\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x29\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4d\x75\x74\x61\x62\x6c\x65\x4d\x65\x74\x68\x6f\x64", 105, 3034230057099775913, NULL };
static frost$core$String $s562 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x66\x72\x6f\x73\x74", 14, -4595392010584278012, NULL };
static frost$core$String $s563 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -3541275370151069987, NULL };
static frost$core$String $s564 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x65\x72\x72\x6f\x72\x3a\x20\x75\x6e\x61\x62\x6c\x65\x20\x74\x6f\x20\x72\x65\x73\x6f\x6c\x76\x65\x20\x6c\x69\x6e\x6b\x20\x27", 31, 8235988314998121606, NULL };
static frost$core$String $s565 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27", 1, -5808629440921371546, NULL };
static frost$core$String $s567 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x66\x72\x6f\x73\x74", 14, -4595392010584278012, NULL };
static frost$core$String $s568 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s569 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x66\x72\x6f\x73\x74", 14, -4595392010584278012, NULL };
static frost$core$String $s570 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x66\x72\x6f\x73\x74", 14, -4595392010584278012, NULL };
static frost$core$String $s571 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x65\x64\x20\x66\x72\x6f\x6d\x20\x40\x6e\x6f\x52\x65\x74\x75\x72\x6e\x20\x6d\x65\x74\x68\x6f\x64", 30, 1170110763298107664, NULL };
static frost$core$String $s572 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5b\x6e\x6f\x20\x6c\x69\x6e\x6b\x20\x72\x65\x73\x6f\x6c\x76\x65\x72\x5d", 18, 6838930604228990514, NULL };
static frost$core$String $s573 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x66\x72\x6f\x73\x74", 14, -4595392010584278012, NULL };
static frost$core$String $s574 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -3541275370151069987, NULL };
static frost$core$String $s575 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5c\x2a", 2, 671060566850019011, NULL };
static frost$core$String $s577 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2a", 1, -5808615147270204803, NULL };
static frost$core$String $s578 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x66\x72\x6f\x73\x74", 14, -4595392010584278012, NULL };
static frost$core$String $s579 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -3541275370151069987, NULL };
static frost$core$String $s580 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5f", 1, -5808497499525986226, NULL };
static frost$core$String $s582 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5f", 1, -5808497499525986226, NULL };
static frost$core$String $s583 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x66\x72\x6f\x73\x74", 14, -4595392010584278012, NULL };
static frost$core$String $s584 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -3541275370151069987, NULL };
static frost$core$String $s585 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x61\x20\x68\x72\x65\x66\x3d\x22", 9, 6240236502603552868, NULL };
static frost$core$String $s586 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x22\x3e", 2, 561975819213520929, NULL };
static frost$core$String $s587 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x66\x72\x6f\x73\x74", 14, -4595392010584278012, NULL };
static frost$core$String $s588 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -3541275370151069987, NULL };
static frost$core$String $s589 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x2f\x61\x3e", 4, 8936268775352766043, NULL };
static frost$core$String $s590 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x74\x63\x68\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -7494374276615964475, NULL };
static frost$core$String $s591 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4d\x61\x74\x63\x68\x65\x72\x2e\x61\x70\x70\x65\x6e\x64\x52\x65\x70\x6c\x61\x63\x65\x6d\x65\x6e\x74\x28\x74\x61\x72\x67\x65\x74\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67\x2c\x20\x72\x65\x70\x6c\x61\x63\x65\x6d\x65\x6e\x74\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x29", 132, 3569372354769601920, NULL };
static frost$core$String $s592 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x5c\x5b", 3, 727888895142067038, NULL };
static frost$core$String $s593 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x5b\x5e\x5c\x5b\x5c\x5d\x5d\x2b\x29", 10, 2820061196371221627, NULL };
static frost$core$String $s594 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5c\x5d", 2, 671083656594211442, NULL };
static frost$core$String $s595 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s598 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x5c\x2a\x5c\x5c\x2a\x7c\x5f\x5f\x29\x28\x3f\x3d\x5c\x53\x29\x28\x2e\x2b\x3f\x5b\x2a\x5f\x5d\x2a\x29\x28\x3f\x3c\x3d\x5c\x53\x29\x5c\x31", 35, -3636589227861870419, NULL };
static frost$core$String $s600 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x73\x74\x72\x6f\x6e\x67\x3e\x24\x32\x3c\x2f\x73\x74\x72\x6f\x6e\x67\x3e", 19, 980505209609811292, NULL };
static frost$core$String $s601 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x5c\x2a\x7c\x5f\x29\x28\x3f\x3d\x5c\x53\x29\x28\x2e\x2b\x3f\x29\x28\x3f\x3c\x3d\x5c\x53\x29\x5c\x31", 26, 9006340171609119475, NULL };
static frost$core$String $s603 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x65\x6d\x3e\x24\x32\x3c\x2f\x65\x6d\x3e", 11, -8498297401027505814, NULL };
static frost$core$String $s606 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x26\x28\x3f\x21\x23\x3f\x5b\x78\x58\x5d\x3f\x28\x3f\x3a\x5b\x30\x2d\x39\x61\x2d\x66\x41\x2d\x46\x5d\x2b\x7c\x5c\x77\x2b\x29\x3b\x29", 33, -1680408519398193257, NULL };
static frost$core$String $s608 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x26\x61\x6d\x70\x3b", 5, 4071416011722950258, NULL };
static frost$core$String $s609 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x28\x3f\x21\x5b\x61\x2d\x7a\x41\x2d\x5a\x2f\x3f\x5c\x24\x21\x5d\x29", 18, -2067299480089594827, NULL };
static frost$core$String $s611 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x26\x6c\x74\x3b", 4, 3062186500626132942, NULL };
static frost$core$String $s612 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x3f\x3c\x21\x5c\x5c\x29\x28\x60\x2b\x29\x28\x2e\x2b\x3f\x29\x28\x3f\x3c\x21\x60\x29\x5c\x31\x28\x3f\x21\x60\x29", 29, 4191340564316553542, NULL };

void org$frostlang$frostc$frostdoc$Markdown$init(void* rawSelf) {
org$frostlang$frostc$frostdoc$Markdown* param0 = (org$frostlang$frostc$frostdoc$Markdown*) rawSelf;

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:120
org$frostlang$frostc$frostdoc$Markdown$init$$LPfrost$core$String$RP$EQ$AM$GT$LPfrost$core$String$Q$RP$Q(param0, ((frost$core$MutableMethod*) NULL));
return;

}
void org$frostlang$frostc$frostdoc$Markdown$init$$LPfrost$core$String$RP$EQ$AM$GT$LPfrost$core$String$Q$RP$Q(void* rawSelf, frost$core$MutableMethod* param1) {
org$frostlang$frostc$frostdoc$Markdown* param0 = (org$frostlang$frostc$frostdoc$Markdown*) rawSelf;

frost$threads$MessageQueue* _1;
frost$core$Object* _3;
frost$threads$MessageQueue** _5;
frost$threads$MessageQueue* _6;
frost$core$Object* _7;
frost$threads$MessageQueue** _9;
frost$core$Object* _11;
org$frostlang$frostc$parser$Parser* _14;
frost$threads$MessageQueue** _15;
frost$threads$MessageQueue* _16;
frost$core$Object* _18;
org$frostlang$frostc$parser$Parser** _20;
org$frostlang$frostc$parser$Parser* _21;
frost$core$Object* _22;
org$frostlang$frostc$parser$Parser** _24;
frost$core$Object* _26;
frost$collections$HashMap* _29;
frost$core$Object* _31;
frost$collections$HashMap** _33;
frost$collections$HashMap* _34;
frost$core$Object* _35;
frost$collections$HashMap** _37;
frost$core$Object* _39;
org$frostlang$frostc$frostdoc$Protector* _42;
frost$core$Object* _44;
org$frostlang$frostc$frostdoc$Protector** _46;
org$frostlang$frostc$frostdoc$Protector* _47;
frost$core$Object* _48;
org$frostlang$frostc$frostdoc$Protector** _50;
frost$core$Object* _52;
org$frostlang$frostc$frostdoc$Protector* _55;
frost$core$Object* _57;
org$frostlang$frostc$frostdoc$Protector** _59;
org$frostlang$frostc$frostdoc$Protector* _60;
frost$core$Object* _61;
org$frostlang$frostc$frostdoc$Protector** _63;
frost$core$Object* _65;
frost$math$Random* _68;
frost$core$Object* _69;
frost$math$Random** _71;
frost$math$Random* _72;
frost$core$Object* _73;
frost$math$Random** _75;
frost$core$Object* _77;
frost$core$Int _80;
frost$core$Int* _81;
frost$io$File* _84;
frost$core$Object* _86;
frost$io$File** _88;
frost$io$File* _89;
frost$core$Object* _90;
frost$io$File** _92;
frost$core$Object* _94;
frost$core$Object* _97;
frost$core$MutableMethod** _99;
frost$core$MutableMethod* _100;
frost$core$Object* _101;
frost$core$MutableMethod** _103;
org$frostlang$frostc$parser$Parser** _106;
org$frostlang$frostc$parser$Parser* _107;
org$frostlang$frostc$parser$SyntaxHighlighter* _108;
org$frostlang$frostc$parser$SyntaxHighlighter* _110;
frost$core$Object* _111;
org$frostlang$frostc$parser$SyntaxHighlighter** _113;
org$frostlang$frostc$parser$SyntaxHighlighter* _114;
frost$core$Object* _115;
org$frostlang$frostc$parser$SyntaxHighlighter** _117;
frost$core$Object* _119;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:98
_1 = (frost$threads$MessageQueue*) frostObjectAlloc(sizeof(frost$threads$MessageQueue), (frost$core$Class*) &frost$threads$MessageQueue$class);
frost$threads$MessageQueue$init(_1);
_3 = ((frost$core$Object*) _1);
frost$core$Frost$ref$frost$core$Object$Q(_3);
_5 = &param0->errorQueue;
_6 = *_5;
_7 = ((frost$core$Object*) _6);
frost$core$Frost$unref$frost$core$Object$Q(_7);
_9 = &param0->errorQueue;
*_9 = _1;
_11 = ((frost$core$Object*) _1);
frost$core$Frost$unref$frost$core$Object$Q(_11);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:100
_14 = (org$frostlang$frostc$parser$Parser*) frostObjectAlloc(sizeof(org$frostlang$frostc$parser$Parser), (frost$core$Class*) &org$frostlang$frostc$parser$Parser$class);
_15 = &param0->errorQueue;
_16 = *_15;
org$frostlang$frostc$parser$Parser$init$frost$threads$MessageQueue$LTorg$frostlang$frostc$Compiler$Message$GT(_14, _16);
_18 = ((frost$core$Object*) _14);
frost$core$Frost$ref$frost$core$Object$Q(_18);
_20 = &param0->parser;
_21 = *_20;
_22 = ((frost$core$Object*) _21);
frost$core$Frost$unref$frost$core$Object$Q(_22);
_24 = &param0->parser;
*_24 = _14;
_26 = ((frost$core$Object*) _14);
frost$core$Frost$unref$frost$core$Object$Q(_26);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:105
_29 = (frost$collections$HashMap*) frostObjectAlloc(sizeof(frost$collections$HashMap), (frost$core$Class*) &frost$collections$HashMap$class);
frost$collections$HashMap$init(_29);
_31 = ((frost$core$Object*) _29);
frost$core$Frost$ref$frost$core$Object$Q(_31);
_33 = &param0->linkDefinitions;
_34 = *_33;
_35 = ((frost$core$Object*) _34);
frost$core$Frost$unref$frost$core$Object$Q(_35);
_37 = &param0->linkDefinitions;
*_37 = _29;
_39 = ((frost$core$Object*) _29);
frost$core$Frost$unref$frost$core$Object$Q(_39);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:108
_42 = (org$frostlang$frostc$frostdoc$Protector*) frostObjectAlloc(sizeof(org$frostlang$frostc$frostdoc$Protector), (frost$core$Class*) &org$frostlang$frostc$frostdoc$Protector$class);
org$frostlang$frostc$frostdoc$Protector$init(_42);
_44 = ((frost$core$Object*) _42);
frost$core$Frost$ref$frost$core$Object$Q(_44);
_46 = &param0->charProtector;
_47 = *_46;
_48 = ((frost$core$Object*) _47);
frost$core$Frost$unref$frost$core$Object$Q(_48);
_50 = &param0->charProtector;
*_50 = _42;
_52 = ((frost$core$Object*) _42);
frost$core$Frost$unref$frost$core$Object$Q(_52);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:111
_55 = (org$frostlang$frostc$frostdoc$Protector*) frostObjectAlloc(sizeof(org$frostlang$frostc$frostdoc$Protector), (frost$core$Class*) &org$frostlang$frostc$frostdoc$Protector$class);
org$frostlang$frostc$frostdoc$Protector$init(_55);
_57 = ((frost$core$Object*) _55);
frost$core$Frost$ref$frost$core$Object$Q(_57);
_59 = &param0->htmlProtector;
_60 = *_59;
_61 = ((frost$core$Object*) _60);
frost$core$Frost$unref$frost$core$Object$Q(_61);
_63 = &param0->htmlProtector;
*_63 = _55;
_65 = ((frost$core$Object*) _55);
frost$core$Frost$unref$frost$core$Object$Q(_65);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:114
_68 = frost$math$Random$default$R$frost$math$Random();
_69 = ((frost$core$Object*) _68);
frost$core$Frost$ref$frost$core$Object$Q(_69);
_71 = &param0->random;
_72 = *_71;
_73 = ((frost$core$Object*) _72);
frost$core$Frost$unref$frost$core$Object$Q(_73);
_75 = &param0->random;
*_75 = _68;
_77 = ((frost$core$Object*) _68);
frost$core$Frost$unref$frost$core$Object$Q(_77);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:117
_80 = (frost$core$Int) {0u};
_81 = &param0->listLevel;
*_81 = _80;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:124
_84 = (frost$io$File*) frostObjectAlloc(sizeof(frost$io$File), (frost$core$Class*) &frost$io$File$class);
frost$io$File$init$frost$core$String(_84, &$s2);
_86 = ((frost$core$Object*) _84);
frost$core$Frost$ref$frost$core$Object$Q(_86);
_88 = &param0->source;
_89 = *_88;
_90 = ((frost$core$Object*) _89);
frost$core$Frost$unref$frost$core$Object$Q(_90);
_92 = &param0->source;
*_92 = _84;
_94 = ((frost$core$Object*) _84);
frost$core$Frost$unref$frost$core$Object$Q(_94);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:125
_97 = ((frost$core$Object*) param1);
frost$core$Frost$ref$frost$core$Object$Q(_97);
_99 = &param0->linkResolver;
_100 = *_99;
_101 = ((frost$core$Object*) _100);
frost$core$Frost$unref$frost$core$Object$Q(_101);
_103 = &param0->linkResolver;
*_103 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:126
_106 = &param0->parser;
_107 = *_106;
_108 = (org$frostlang$frostc$parser$SyntaxHighlighter*) frostObjectAlloc(sizeof(org$frostlang$frostc$parser$SyntaxHighlighter), (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$class);
org$frostlang$frostc$parser$SyntaxHighlighter$init(_108);
_110 = _108;
_111 = ((frost$core$Object*) _110);
frost$core$Frost$ref$frost$core$Object$Q(_111);
_113 = &_107->syntaxHighlighter;
_114 = *_113;
_115 = ((frost$core$Object*) _114);
frost$core$Frost$unref$frost$core$Object$Q(_115);
_117 = &_107->syntaxHighlighter;
*_117 = _110;
_119 = ((frost$core$Object*) _108);
frost$core$Frost$unref$frost$core$Object$Q(_119);
return;

}
frost$core$String* org$frostlang$frostc$frostdoc$Markdown$process$frost$core$String$R$frost$core$String(void* rawSelf, frost$core$String* param1) {
org$frostlang$frostc$frostdoc$Markdown* param0 = (org$frostlang$frostc$frostdoc$Markdown*) rawSelf;

frost$core$MutableString* local0 = NULL;
frost$core$Matcher* local1 = NULL;
frost$core$Matcher* local2 = NULL;
frost$core$Matcher* local3 = NULL;
frost$core$Matcher* local4 = NULL;
frost$core$MutableString* _1;
frost$core$Object* _4;
frost$core$MutableString* _6;
frost$core$Object* _7;
frost$core$Object* _10;
frost$core$MutableString* _13;
frost$core$RegularExpression* _14;
frost$core$Bit _18;
frost$core$Object* _21;
$fn3 _22;
frost$core$String* _23;
frost$core$Matcher* _24;
frost$core$Object* _26;
frost$core$Matcher* _28;
frost$core$Object* _29;
frost$core$Object* _32;
frost$core$Object* _34;
frost$core$Matcher* _40;
frost$core$Bit _41;
bool _42;
frost$core$Matcher* _45;
frost$core$Matcher* _49;
frost$core$Matcher* _51;
frost$core$Object* _52;
frost$core$Object* _57;
frost$core$MutableString* _60;
frost$core$RegularExpression* _61;
frost$core$Bit _65;
frost$core$Object* _68;
$fn4 _69;
frost$core$String* _70;
frost$core$Matcher* _71;
frost$core$Object* _73;
frost$core$Matcher* _75;
frost$core$Object* _76;
frost$core$Object* _79;
frost$core$Object* _81;
frost$core$Matcher* _87;
frost$core$Bit _88;
bool _89;
frost$core$Matcher* _92;
frost$core$Matcher* _96;
frost$core$Matcher* _98;
frost$core$Object* _99;
frost$core$Object* _104;
frost$core$MutableString* _107;
frost$core$RegularExpression* _108;
frost$core$Bit _112;
frost$core$Object* _115;
$fn5 _116;
frost$core$String* _117;
frost$core$Matcher* _118;
frost$core$Object* _120;
frost$core$Matcher* _122;
frost$core$Object* _123;
frost$core$Object* _126;
frost$core$Object* _128;
frost$core$Matcher* _134;
frost$core$Bit _135;
bool _136;
frost$core$Matcher* _139;
frost$core$Matcher* _143;
frost$core$Matcher* _145;
frost$core$Object* _146;
frost$core$Object* _151;
frost$core$MutableString* _154;
frost$core$MutableString* _157;
$fn6 _158;
frost$core$MutableString* _161;
frost$core$RegularExpression* _162;
frost$core$Bit _166;
frost$core$Object* _169;
$fn7 _170;
frost$core$String* _171;
frost$core$Matcher* _172;
frost$core$Object* _174;
frost$core$Matcher* _176;
frost$core$Object* _177;
frost$core$Object* _180;
frost$core$Object* _182;
frost$core$Matcher* _188;
frost$core$Bit _189;
bool _190;
frost$core$Matcher* _193;
frost$core$Matcher* _197;
frost$core$Matcher* _199;
frost$core$Object* _200;
frost$core$Object* _205;
frost$core$MutableString* _208;
$fn8 _209;
frost$core$MutableString* _212;
$fn9 _213;
frost$core$MutableString* _216;
$fn10 _217;
frost$core$MutableString* _220;
$fn11 _221;
frost$core$MutableString* _224;
frost$core$MutableString* _227;
frost$core$Object* _228;
$fn12 _229;
frost$core$String* _230;
frost$core$Object* _231;
frost$core$Object* _233;
frost$core$MutableString* _235;
frost$core$Object* _236;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:130
_1 = (frost$core$MutableString*) frostObjectAlloc(sizeof(frost$core$MutableString), (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init$frost$core$String(_1, param1);
*(&local0) = ((frost$core$MutableString*) NULL);
_4 = ((frost$core$Object*) _1);
frost$core$Frost$ref$frost$core$Object$Q(_4);
_6 = *(&local0);
_7 = ((frost$core$Object*) _6);
frost$core$Frost$unref$frost$core$Object$Q(_7);
*(&local0) = _1;
_10 = ((frost$core$Object*) _1);
frost$core$Frost$unref$frost$core$Object$Q(_10);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:131
_13 = *(&local0);
_14 = (frost$core$RegularExpression*) frostObjectAlloc(sizeof(frost$core$RegularExpression), (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String(_14, &$s13);
// begin inline call to method frost.core.MutableString.replace(search:frost.core.RegularExpression, replacement:frost.core.String) from Markdown.frost:131:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:401
_18 = (frost$core$Bit) {true};
// begin inline call to method frost.core.MutableString.replace(search:frost.core.RegularExpression, replacement:frost.core.String, allowGroupReferences:frost.core.Bit) from MutableString.frost:401:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:406
_21 = ((frost$core$Object*) _13);
_22 = ($fn14) _21->$class->vtable[0];
_23 = _22(_21);
_24 = frost$core$RegularExpression$matcher$frost$core$String$R$frost$core$Matcher(_14, _23);
*(&local1) = ((frost$core$Matcher*) NULL);
_26 = ((frost$core$Object*) _24);
frost$core$Frost$ref$frost$core$Object$Q(_26);
_28 = *(&local1);
_29 = ((frost$core$Object*) _28);
frost$core$Frost$unref$frost$core$Object$Q(_29);
*(&local1) = _24;
_32 = ((frost$core$Object*) _24);
frost$core$Frost$unref$frost$core$Object$Q(_32);
_34 = ((frost$core$Object*) _23);
frost$core$Frost$unref$frost$core$Object$Q(_34);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:407
frost$core$MutableString$clear(_13);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:408
goto block3;
block3:;
_40 = *(&local1);
_41 = frost$core$Matcher$find$R$frost$core$Bit(_40);
_42 = _41.value;
if (_42) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:409
_45 = *(&local1);
frost$core$Matcher$appendReplacement$frost$core$MutableString$frost$core$String$frost$core$Bit(_45, _13, &$s15, _18);
goto block3;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:411
_49 = *(&local1);
frost$core$Matcher$appendTail$frost$core$MutableString(_49, _13);
_51 = *(&local1);
_52 = ((frost$core$Object*) _51);
frost$core$Frost$unref$frost$core$Object$Q(_52);
*(&local1) = ((frost$core$Matcher*) NULL);
_57 = ((frost$core$Object*) _14);
frost$core$Frost$unref$frost$core$Object$Q(_57);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:132
_60 = *(&local0);
_61 = (frost$core$RegularExpression*) frostObjectAlloc(sizeof(frost$core$RegularExpression), (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String(_61, &$s16);
// begin inline call to method frost.core.MutableString.replace(search:frost.core.RegularExpression, replacement:frost.core.String) from Markdown.frost:132:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:401
_65 = (frost$core$Bit) {true};
// begin inline call to method frost.core.MutableString.replace(search:frost.core.RegularExpression, replacement:frost.core.String, allowGroupReferences:frost.core.Bit) from MutableString.frost:401:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:406
_68 = ((frost$core$Object*) _60);
_69 = ($fn17) _68->$class->vtable[0];
_70 = _69(_68);
_71 = frost$core$RegularExpression$matcher$frost$core$String$R$frost$core$Matcher(_61, _70);
*(&local2) = ((frost$core$Matcher*) NULL);
_73 = ((frost$core$Object*) _71);
frost$core$Frost$ref$frost$core$Object$Q(_73);
_75 = *(&local2);
_76 = ((frost$core$Object*) _75);
frost$core$Frost$unref$frost$core$Object$Q(_76);
*(&local2) = _71;
_79 = ((frost$core$Object*) _71);
frost$core$Frost$unref$frost$core$Object$Q(_79);
_81 = ((frost$core$Object*) _70);
frost$core$Frost$unref$frost$core$Object$Q(_81);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:407
frost$core$MutableString$clear(_60);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:408
goto block8;
block8:;
_87 = *(&local2);
_88 = frost$core$Matcher$find$R$frost$core$Bit(_87);
_89 = _88.value;
if (_89) goto block9; else goto block10;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:409
_92 = *(&local2);
frost$core$Matcher$appendReplacement$frost$core$MutableString$frost$core$String$frost$core$Bit(_92, _60, &$s18, _65);
goto block8;
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:411
_96 = *(&local2);
frost$core$Matcher$appendTail$frost$core$MutableString(_96, _60);
_98 = *(&local2);
_99 = ((frost$core$Object*) _98);
frost$core$Frost$unref$frost$core$Object$Q(_99);
*(&local2) = ((frost$core$Matcher*) NULL);
_104 = ((frost$core$Object*) _61);
frost$core$Frost$unref$frost$core$Object$Q(_104);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:133
_107 = *(&local0);
_108 = (frost$core$RegularExpression*) frostObjectAlloc(sizeof(frost$core$RegularExpression), (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String(_108, &$s19);
// begin inline call to method frost.core.MutableString.replace(search:frost.core.RegularExpression, replacement:frost.core.String) from Markdown.frost:133:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:401
_112 = (frost$core$Bit) {true};
// begin inline call to method frost.core.MutableString.replace(search:frost.core.RegularExpression, replacement:frost.core.String, allowGroupReferences:frost.core.Bit) from MutableString.frost:401:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:406
_115 = ((frost$core$Object*) _107);
_116 = ($fn20) _115->$class->vtable[0];
_117 = _116(_115);
_118 = frost$core$RegularExpression$matcher$frost$core$String$R$frost$core$Matcher(_108, _117);
*(&local3) = ((frost$core$Matcher*) NULL);
_120 = ((frost$core$Object*) _118);
frost$core$Frost$ref$frost$core$Object$Q(_120);
_122 = *(&local3);
_123 = ((frost$core$Object*) _122);
frost$core$Frost$unref$frost$core$Object$Q(_123);
*(&local3) = _118;
_126 = ((frost$core$Object*) _118);
frost$core$Frost$unref$frost$core$Object$Q(_126);
_128 = ((frost$core$Object*) _117);
frost$core$Frost$unref$frost$core$Object$Q(_128);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:407
frost$core$MutableString$clear(_107);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:408
goto block13;
block13:;
_134 = *(&local3);
_135 = frost$core$Matcher$find$R$frost$core$Bit(_134);
_136 = _135.value;
if (_136) goto block14; else goto block15;
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:409
_139 = *(&local3);
frost$core$Matcher$appendReplacement$frost$core$MutableString$frost$core$String$frost$core$Bit(_139, _107, &$s21, _112);
goto block13;
block15:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:411
_143 = *(&local3);
frost$core$Matcher$appendTail$frost$core$MutableString(_143, _107);
_145 = *(&local3);
_146 = ((frost$core$Object*) _145);
frost$core$Frost$unref$frost$core$Object$Q(_146);
*(&local3) = ((frost$core$Matcher*) NULL);
_151 = ((frost$core$Object*) _108);
frost$core$Frost$unref$frost$core$Object$Q(_151);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:136
_154 = *(&local0);
frost$core$MutableString$append$frost$core$String(_154, &$s22);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:138
_157 = *(&local0);
_158 = ($fn23) param0->$class->vtable[14];
_158(param0, _157);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:139
_161 = *(&local0);
_162 = (frost$core$RegularExpression*) frostObjectAlloc(sizeof(frost$core$RegularExpression), (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String(_162, &$s24);
// begin inline call to method frost.core.MutableString.replace(search:frost.core.RegularExpression, replacement:frost.core.String) from Markdown.frost:139:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:401
_166 = (frost$core$Bit) {true};
// begin inline call to method frost.core.MutableString.replace(search:frost.core.RegularExpression, replacement:frost.core.String, allowGroupReferences:frost.core.Bit) from MutableString.frost:401:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:406
_169 = ((frost$core$Object*) _161);
_170 = ($fn25) _169->$class->vtable[0];
_171 = _170(_169);
_172 = frost$core$RegularExpression$matcher$frost$core$String$R$frost$core$Matcher(_162, _171);
*(&local4) = ((frost$core$Matcher*) NULL);
_174 = ((frost$core$Object*) _172);
frost$core$Frost$ref$frost$core$Object$Q(_174);
_176 = *(&local4);
_177 = ((frost$core$Object*) _176);
frost$core$Frost$unref$frost$core$Object$Q(_177);
*(&local4) = _172;
_180 = ((frost$core$Object*) _172);
frost$core$Frost$unref$frost$core$Object$Q(_180);
_182 = ((frost$core$Object*) _171);
frost$core$Frost$unref$frost$core$Object$Q(_182);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:407
frost$core$MutableString$clear(_161);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:408
goto block18;
block18:;
_188 = *(&local4);
_189 = frost$core$Matcher$find$R$frost$core$Bit(_188);
_190 = _189.value;
if (_190) goto block19; else goto block20;
block19:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:409
_193 = *(&local4);
frost$core$Matcher$appendReplacement$frost$core$MutableString$frost$core$String$frost$core$Bit(_193, _161, &$s26, _166);
goto block18;
block20:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:411
_197 = *(&local4);
frost$core$Matcher$appendTail$frost$core$MutableString(_197, _161);
_199 = *(&local4);
_200 = ((frost$core$Object*) _199);
frost$core$Frost$unref$frost$core$Object$Q(_200);
*(&local4) = ((frost$core$Matcher*) NULL);
_205 = ((frost$core$Object*) _162);
frost$core$Frost$unref$frost$core$Object$Q(_205);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:140
_208 = *(&local0);
_209 = ($fn27) param0->$class->vtable[8];
_209(param0, _208);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:141
_212 = *(&local0);
_213 = ($fn28) param0->$class->vtable[5];
_213(param0, _212);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:142
_216 = *(&local0);
_217 = ($fn29) param0->$class->vtable[6];
_217(param0, _216);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:143
_220 = *(&local0);
_221 = ($fn30) param0->$class->vtable[11];
_221(param0, _220);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:145
_224 = *(&local0);
frost$core$MutableString$append$frost$core$String(_224, &$s31);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:146
_227 = *(&local0);
_228 = ((frost$core$Object*) _227);
_229 = ($fn32) _228->$class->vtable[0];
_230 = _229(_228);
_231 = ((frost$core$Object*) _230);
frost$core$Frost$ref$frost$core$Object$Q(_231);
_233 = ((frost$core$Object*) _230);
frost$core$Frost$unref$frost$core$Object$Q(_233);
_235 = *(&local0);
_236 = ((frost$core$Object*) _235);
frost$core$Frost$unref$frost$core$Object$Q(_236);
*(&local0) = ((frost$core$MutableString*) NULL);
return _230;

}
void org$frostlang$frostc$frostdoc$Markdown$encodeBackslashEscapes$frost$core$MutableString(void* rawSelf, frost$core$MutableString* param1) {
org$frostlang$frostc$frostdoc$Markdown* param0 = (org$frostlang$frostc$frostdoc$Markdown*) rawSelf;

frost$collections$ListView* local0 = NULL;
frost$collections$ListView* local1 = NULL;
frost$core$String$UTF8List* _3;
frost$collections$ListView* _5;
frost$core$Object* _6;
frost$core$Object* _8;
frost$core$Object* _12;
frost$collections$ListView* _14;
frost$core$Object* _15;
frost$core$Object* _18;
frost$core$String$UTF8List* _23;
frost$collections$ListView* _25;
frost$core$Object* _26;
frost$core$Object* _28;
frost$core$Object* _32;
frost$collections$ListView* _34;
frost$core$Object* _35;
frost$core$Object* _38;
org$frostlang$frostc$frostdoc$Protector** _41;
org$frostlang$frostc$frostdoc$Protector* _42;
$fn33 _43;
frost$core$String* _44;
frost$core$Object* _46;
frost$collections$ListView* _49;
$fn34 _50;
frost$collections$ListView* _53;
$fn35 _54;
frost$collections$ListView* _56;
frost$core$Object* _57;
frost$collections$ListView* _60;
frost$core$Object* _61;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:150
// begin inline call to function frost.core.String.get_utf8():frost.collections.ListView<frost.core.Char8> from Markdown.frost:150:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:458
_3 = (frost$core$String$UTF8List*) frostObjectAlloc(sizeof(frost$core$String$UTF8List), (frost$core$Class*) &frost$core$String$UTF8List$class);
frost$core$String$UTF8List$init$frost$core$String(_3, &$s36);
_5 = ((frost$collections$ListView*) _3);
_6 = ((frost$core$Object*) _5);
frost$core$Frost$ref$frost$core$Object$Q(_6);
_8 = ((frost$core$Object*) _3);
frost$core$Frost$unref$frost$core$Object$Q(_8);
*(&local0) = ((frost$collections$ListView*) NULL);
_12 = ((frost$core$Object*) _5);
frost$core$Frost$ref$frost$core$Object$Q(_12);
_14 = *(&local0);
_15 = ((frost$core$Object*) _14);
frost$core$Frost$unref$frost$core$Object$Q(_15);
*(&local0) = _5;
_18 = ((frost$core$Object*) _5);
frost$core$Frost$unref$frost$core$Object$Q(_18);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:151
// begin inline call to function frost.core.String.get_utf8():frost.collections.ListView<frost.core.Char8> from Markdown.frost:151:42
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:458
_23 = (frost$core$String$UTF8List*) frostObjectAlloc(sizeof(frost$core$String$UTF8List), (frost$core$Class*) &frost$core$String$UTF8List$class);
frost$core$String$UTF8List$init$frost$core$String(_23, &$s37);
_25 = ((frost$collections$ListView*) _23);
_26 = ((frost$core$Object*) _25);
frost$core$Frost$ref$frost$core$Object$Q(_26);
_28 = ((frost$core$Object*) _23);
frost$core$Frost$unref$frost$core$Object$Q(_28);
*(&local1) = ((frost$collections$ListView*) NULL);
_32 = ((frost$core$Object*) _25);
frost$core$Frost$ref$frost$core$Object$Q(_32);
_34 = *(&local1);
_35 = ((frost$core$Object*) _34);
frost$core$Frost$unref$frost$core$Object$Q(_35);
*(&local1) = _25;
_38 = ((frost$core$Object*) _25);
frost$core$Frost$unref$frost$core$Object$Q(_38);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:154
_41 = &param0->charProtector;
_42 = *_41;
_43 = ($fn38) _42->$class->vtable[2];
_44 = _43(_42, &$s39);
frost$core$MutableString$replace$frost$core$String$frost$core$String(param1, &$s40, _44);
_46 = ((frost$core$Object*) _44);
frost$core$Frost$unref$frost$core$Object$Q(_46);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:157
_49 = *(&local0);
_50 = ($fn41) param0->$class->vtable[4];
_50(param0, param1, _49, &$s42);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:158
_53 = *(&local1);
_54 = ($fn43) param0->$class->vtable[4];
_54(param0, param1, _53, &$s44);
_56 = *(&local1);
_57 = ((frost$core$Object*) _56);
frost$core$Frost$unref$frost$core$Object$Q(_57);
*(&local1) = ((frost$collections$ListView*) NULL);
_60 = *(&local0);
_61 = ((frost$core$Object*) _60);
frost$core$Frost$unref$frost$core$Object$Q(_61);
*(&local0) = ((frost$collections$ListView*) NULL);
return;

}
void org$frostlang$frostc$frostdoc$Markdown$encodeEscapes$frost$core$MutableString$frost$collections$ListView$LTfrost$core$Char8$GT$frost$core$String(void* rawSelf, frost$core$MutableString* param1, frost$collections$ListView* param2, frost$core$String* param3) {
org$frostlang$frostc$frostdoc$Markdown* param0 = (org$frostlang$frostc$frostdoc$Markdown*) rawSelf;

frost$core$Char8 local0;
frost$core$RegularExpression* local1 = NULL;
frost$core$Matcher* local2 = NULL;
frost$collections$Iterable* _1;
$fn45 _2;
frost$collections$Iterator* _3;
$fn46 _5;
frost$core$Bit _6;
bool _7;
$fn47 _9;
frost$core$Object* _10;
frost$core$Char8 _11;
frost$core$RegularExpression* _14;
frost$core$String* _15;
frost$core$Char8 _16;
frost$core$Object* _17;
$fn48 _20;
frost$core$String* _21;
frost$core$String* _22;
frost$core$Object* _23;
frost$core$Object* _25;
frost$core$Object* _27;
frost$core$Object* _32;
frost$core$RegularExpression* _34;
frost$core$Object* _35;
frost$core$Object* _38;
frost$core$Object* _40;
frost$core$Object* _42;
frost$core$Object* _44;
frost$core$RegularExpression* _47;
org$frostlang$frostc$frostdoc$Protector** _48;
org$frostlang$frostc$frostdoc$Protector* _49;
frost$core$Char8 _50;
frost$core$Object* _51;
$fn49 _52;
frost$core$String* _53;
$fn50 _54;
frost$core$String* _55;
frost$core$Bit _56;
frost$core$Object* _59;
$fn51 _60;
frost$core$String* _61;
frost$core$Matcher* _62;
frost$core$Object* _64;
frost$core$Matcher* _66;
frost$core$Object* _67;
frost$core$Object* _70;
frost$core$Object* _72;
frost$core$Matcher* _78;
frost$core$Bit _79;
bool _80;
frost$core$Matcher* _83;
frost$core$Matcher* _87;
frost$core$String** _90;
frost$core$String* _91;
frost$core$String$Index* _92;
frost$core$String$Index _93;
frost$core$String$Index$nullable _94;
frost$core$Bit _95;
frost$core$Range$LTfrost$core$String$Index$Q$GT _96;
frost$core$String* _97;
frost$core$Object* _99;
frost$core$Matcher* _102;
frost$core$Object* _103;
frost$core$Object* _107;
frost$core$Object* _109;
frost$core$Object* _111;
frost$core$RegularExpression* _113;
frost$core$Object* _114;
frost$core$Object* _117;
frost$core$Object* _120;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:162
_1 = ((frost$collections$Iterable*) param2);
ITable* $tmp52 = _1->$class->itable;
while ($tmp52->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp52 = $tmp52->next;
}
_2 = $tmp52->methods[0];
_3 = _2(_1);
goto block1;
block1:;
ITable* $tmp53 = _3->$class->itable;
while ($tmp53->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp53 = $tmp53->next;
}
_5 = $tmp53->methods[0];
_6 = _5(_3);
_7 = _6.value;
if (_7) goto block3; else goto block2;
block2:;
ITable* $tmp54 = _3->$class->itable;
while ($tmp54->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp54 = $tmp54->next;
}
_9 = $tmp54->methods[1];
_10 = _9(_3);
_11 = ((frost$core$Char8$wrapper*) _10)->value;
*(&local0) = _11;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:163
_14 = (frost$core$RegularExpression*) frostObjectAlloc(sizeof(frost$core$RegularExpression), (frost$core$Class*) &frost$core$RegularExpression$class);
_15 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s55, param3);
_16 = *(&local0);
frost$core$Char8$wrapper* $tmp56;
$tmp56 = (frost$core$Char8$wrapper*) frostObjectAlloc(sizeof(frost$core$Char8$wrapper), (frost$core$Class*) &frost$core$Char8$wrapperclass);
$tmp56->value = _16;
_17 = ((frost$core$Object*) $tmp56);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Markdown.frost:163:61
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
_20 = ($fn57) _17->$class->vtable[0];
_21 = _20(_17);
_22 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_15, _21);
_23 = ((frost$core$Object*) _22);
frost$core$Frost$ref$frost$core$Object$Q(_23);
_25 = ((frost$core$Object*) _22);
frost$core$Frost$unref$frost$core$Object$Q(_25);
_27 = ((frost$core$Object*) _21);
frost$core$Frost$unref$frost$core$Object$Q(_27);
frost$core$RegularExpression$init$frost$core$String(_14, _22);
*(&local1) = ((frost$core$RegularExpression*) NULL);
_32 = ((frost$core$Object*) _14);
frost$core$Frost$ref$frost$core$Object$Q(_32);
_34 = *(&local1);
_35 = ((frost$core$Object*) _34);
frost$core$Frost$unref$frost$core$Object$Q(_35);
*(&local1) = _14;
_38 = ((frost$core$Object*) _22);
frost$core$Frost$unref$frost$core$Object$Q(_38);
_40 = _17;
frost$core$Frost$unref$frost$core$Object$Q(_40);
_42 = ((frost$core$Object*) _15);
frost$core$Frost$unref$frost$core$Object$Q(_42);
_44 = ((frost$core$Object*) _14);
frost$core$Frost$unref$frost$core$Object$Q(_44);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:164
_47 = *(&local1);
_48 = &param0->charProtector;
_49 = *_48;
_50 = *(&local0);
frost$core$Char8$wrapper* $tmp58;
$tmp58 = (frost$core$Char8$wrapper*) frostObjectAlloc(sizeof(frost$core$Char8$wrapper), (frost$core$Class*) &frost$core$Char8$wrapperclass);
$tmp58->value = _50;
_51 = ((frost$core$Object*) $tmp58);
_52 = ($fn59) _51->$class->vtable[0];
_53 = _52(_51);
_54 = ($fn60) _49->$class->vtable[2];
_55 = _54(_49, _53);
_56 = (frost$core$Bit) {false};
// begin inline call to method frost.core.MutableString.replace(search:frost.core.RegularExpression, replacement:frost.core.String, allowGroupReferences:frost.core.Bit) from Markdown.frost:164:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:406
_59 = ((frost$core$Object*) param1);
_60 = ($fn61) _59->$class->vtable[0];
_61 = _60(_59);
_62 = frost$core$RegularExpression$matcher$frost$core$String$R$frost$core$Matcher(_47, _61);
*(&local2) = ((frost$core$Matcher*) NULL);
_64 = ((frost$core$Object*) _62);
frost$core$Frost$ref$frost$core$Object$Q(_64);
_66 = *(&local2);
_67 = ((frost$core$Object*) _66);
frost$core$Frost$unref$frost$core$Object$Q(_67);
*(&local2) = _62;
_70 = ((frost$core$Object*) _62);
frost$core$Frost$unref$frost$core$Object$Q(_70);
_72 = ((frost$core$Object*) _61);
frost$core$Frost$unref$frost$core$Object$Q(_72);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:407
frost$core$MutableString$clear(param1);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:408
goto block6;
block6:;
_78 = *(&local2);
_79 = frost$core$Matcher$find$R$frost$core$Bit(_78);
_80 = _79.value;
if (_80) goto block7; else goto block8;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:409
_83 = *(&local2);
frost$core$Matcher$appendReplacement$frost$core$MutableString$frost$core$String$frost$core$Bit(_83, param1, _55, _56);
goto block6;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:411
_87 = *(&local2);
// begin inline call to method frost.core.Matcher.appendTail(target:frost.core.MutableString) from MutableString.frost:411:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Matcher.frost:169
_90 = &_87->searchText;
_91 = *_90;
_92 = &_87->replacementIndex;
_93 = *_92;
_94 = ((frost$core$String$Index$nullable) { _93, true });
_95 = (frost$core$Bit) {false};
_96 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(_94, ((frost$core$String$Index$nullable) { .nonnull = false }), _95);
_97 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String(_91, _96);
frost$core$MutableString$append$frost$core$String(param1, _97);
_99 = ((frost$core$Object*) _97);
frost$core$Frost$unref$frost$core$Object$Q(_99);
_102 = *(&local2);
_103 = ((frost$core$Object*) _102);
frost$core$Frost$unref$frost$core$Object$Q(_103);
*(&local2) = ((frost$core$Matcher*) NULL);
_107 = ((frost$core$Object*) _55);
frost$core$Frost$unref$frost$core$Object$Q(_107);
_109 = ((frost$core$Object*) _53);
frost$core$Frost$unref$frost$core$Object$Q(_109);
_111 = _51;
frost$core$Frost$unref$frost$core$Object$Q(_111);
_113 = *(&local1);
_114 = ((frost$core$Object*) _113);
frost$core$Frost$unref$frost$core$Object$Q(_114);
*(&local1) = ((frost$core$RegularExpression*) NULL);
_117 = _10;
frost$core$Frost$unref$frost$core$Object$Q(_117);
goto block1;
block3:;
_120 = ((frost$core$Object*) _3);
frost$core$Frost$unref$frost$core$Object$Q(_120);
return;

}
void org$frostlang$frostc$frostdoc$Markdown$stripLinkDefinitions$frost$core$MutableString(void* rawSelf, frost$core$MutableString* param1) {
org$frostlang$frostc$frostdoc$Markdown* param0 = (org$frostlang$frostc$frostdoc$Markdown*) rawSelf;

frost$core$RegularExpression* local0 = NULL;
frost$core$RegularExpression* _1;
frost$core$String* _2;
frost$core$String* _3;
frost$core$String* _4;
frost$core$String* _5;
frost$core$Int _6;
frost$core$Object* _9;
frost$core$RegularExpression* _11;
frost$core$Object* _12;
frost$core$Object* _15;
frost$core$Object* _17;
frost$core$Object* _19;
frost$core$Object* _21;
frost$core$Object* _23;
frost$core$RegularExpression* _26;
org$frostlang$frostc$frostdoc$Markdown$_Closure2* _27;
frost$core$Int8* _29;
frost$core$MutableMethod* _30;
frost$core$Object* _31;
frost$core$Int8** _34;
frost$core$Object** _38;
frost$core$Object* _39;
frost$core$Object** _41;
frost$core$MutableMethod* _44;
frost$core$MutableMethod* _45;
frost$core$Object* _47;
frost$core$Object* _49;
frost$core$RegularExpression* _51;
frost$core$Object* _52;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:169
_1 = (frost$core$RegularExpression*) frostObjectAlloc(sizeof(frost$core$RegularExpression), (frost$core$Class*) &frost$core$RegularExpression$class);
_2 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s62, &$s63);
_3 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_2, &$s64);
_4 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_3, &$s65);
_5 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_4, &$s66);
_6 = (frost$core$Int) {1u};
frost$core$RegularExpression$init$frost$core$String$frost$core$Int(_1, _5, _6);
*(&local0) = ((frost$core$RegularExpression*) NULL);
_9 = ((frost$core$Object*) _1);
frost$core$Frost$ref$frost$core$Object$Q(_9);
_11 = *(&local0);
_12 = ((frost$core$Object*) _11);
frost$core$Frost$unref$frost$core$Object$Q(_12);
*(&local0) = _1;
_15 = ((frost$core$Object*) _5);
frost$core$Frost$unref$frost$core$Object$Q(_15);
_17 = ((frost$core$Object*) _4);
frost$core$Frost$unref$frost$core$Object$Q(_17);
_19 = ((frost$core$Object*) _3);
frost$core$Frost$unref$frost$core$Object$Q(_19);
_21 = ((frost$core$Object*) _2);
frost$core$Frost$unref$frost$core$Object$Q(_21);
_23 = ((frost$core$Object*) _1);
frost$core$Frost$unref$frost$core$Object$Q(_23);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:177
_26 = *(&local0);
_27 = (org$frostlang$frostc$frostdoc$Markdown$_Closure2*) frostObjectAlloc(sizeof(org$frostlang$frostc$frostdoc$Markdown$_Closure2), (frost$core$Class*) &org$frostlang$frostc$frostdoc$Markdown$_Closure2$class);
org$frostlang$frostc$frostdoc$Markdown$_Closure2$init$org$frostlang$frostc$frostdoc$Markdown(_27, param0);
_29 = ((frost$core$Int8*) org$frostlang$frostc$frostdoc$Markdown$_Closure2$$anonymous1$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$String);
_30 = (frost$core$MutableMethod*) frostObjectAlloc(sizeof(frost$core$MutableMethod), (frost$core$Class*) &frost$core$MutableMethod$class);
_31 = ((frost$core$Object*) _27);
// begin inline call to frost.core.MutableMethod.init(pointer:frost.unsafe.Pointer<frost.core.Int8>, target:frost.core.Object?) from Markdown.frost:177:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableMethod.frost:32
_34 = &_30->pointer;
*_34 = _29;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableMethod.frost:33
frost$core$Frost$ref$frost$core$Object$Q(_31);
_38 = &_30->target;
_39 = *_38;
frost$core$Frost$unref$frost$core$Object$Q(_39);
_41 = &_30->target;
*_41 = _31;
_44 = _30;
_45 = _44;
frost$core$MutableString$replace$frost$core$RegularExpression$$LPfrost$collections$ListView$LTfrost$core$String$Q$GT$RP$EQ$GT$LPfrost$core$Object$RP(param1, _26, _45);
_47 = ((frost$core$Object*) _30);
frost$core$Frost$unref$frost$core$Object$Q(_47);
_49 = ((frost$core$Object*) _27);
frost$core$Frost$unref$frost$core$Object$Q(_49);
_51 = *(&local0);
_52 = ((frost$core$Object*) _51);
frost$core$Frost$unref$frost$core$Object$Q(_52);
*(&local0) = ((frost$core$RegularExpression*) NULL);
return;

}
void org$frostlang$frostc$frostdoc$Markdown$runBlockGamut$frost$core$MutableString(void* rawSelf, frost$core$MutableString* param1) {
org$frostlang$frostc$frostdoc$Markdown* param0 = (org$frostlang$frostc$frostdoc$Markdown*) rawSelf;

$fn67 _1;
$fn68 _4;
$fn69 _7;
$fn70 _10;
$fn71 _13;
$fn72 _16;
$fn73 _19;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:199
_1 = ($fn74) param0->$class->vtable[21];
_1(param0, param1);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:200
_4 = ($fn75) param0->$class->vtable[7];
_4(param0, param1);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:201
_7 = ($fn76) param0->$class->vtable[19];
_7(param0, param1);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:202
_10 = ($fn77) param0->$class->vtable[15];
_10(param0, param1);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:203
_13 = ($fn78) param0->$class->vtable[13];
_13(param0, param1);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:204
_16 = ($fn79) param0->$class->vtable[8];
_16(param0, param1);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:205
_19 = ($fn80) param0->$class->vtable[9];
_19(param0, param1);
return;

}
void org$frostlang$frostc$frostdoc$Markdown$doHorizontalRules$frost$core$MutableString(void* rawSelf, frost$core$MutableString* param1) {
org$frostlang$frostc$frostdoc$Markdown* param0 = (org$frostlang$frostc$frostdoc$Markdown*) rawSelf;

frost$collections$Array* local0 = NULL;
frost$core$String* local1 = NULL;
frost$core$Matcher* local2 = NULL;
frost$collections$Array* _1;
frost$core$Object* _4;
frost$collections$Array* _6;
frost$core$Object* _7;
frost$core$Object* _10;
frost$collections$Array* _13;
frost$core$Object* _14;
frost$collections$Array* _17;
frost$core$Object* _18;
frost$collections$Array* _21;
frost$core$Object* _22;
frost$collections$Array* _25;
frost$collections$Iterable* _26;
$fn81 _27;
frost$collections$Iterator* _28;
$fn82 _30;
frost$core$Bit _31;
bool _32;
$fn83 _35;
frost$core$Object* _36;
frost$core$String* _37;
frost$core$Object* _38;
frost$core$String* _40;
frost$core$Object* _41;
frost$core$RegularExpression* _45;
frost$core$String* _46;
frost$core$String* _47;
frost$core$String* _48;
frost$core$Bit _52;
frost$core$Object* _55;
$fn84 _56;
frost$core$String* _57;
frost$core$Matcher* _58;
frost$core$Object* _60;
frost$core$Matcher* _62;
frost$core$Object* _63;
frost$core$Object* _66;
frost$core$Object* _68;
frost$core$Matcher* _74;
frost$core$Bit _75;
bool _76;
frost$core$Matcher* _79;
frost$core$Matcher* _83;
frost$core$Matcher* _85;
frost$core$Object* _86;
frost$core$Object* _91;
frost$core$Object* _93;
frost$core$Object* _95;
frost$core$Object* _97;
frost$core$String* _99;
frost$core$Object* _100;
frost$core$Object* _104;
frost$collections$Array* _106;
frost$core$Object* _107;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:209
_1 = (frost$collections$Array*) frostObjectAlloc(sizeof(frost$collections$Array), (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init(_1);
*(&local0) = ((frost$collections$Array*) NULL);
_4 = ((frost$core$Object*) _1);
frost$core$Frost$ref$frost$core$Object$Q(_4);
_6 = *(&local0);
_7 = ((frost$core$Object*) _6);
frost$core$Frost$unref$frost$core$Object$Q(_7);
*(&local0) = _1;
_10 = ((frost$core$Object*) _1);
frost$core$Frost$unref$frost$core$Object$Q(_10);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:210
_13 = *(&local0);
_14 = ((frost$core$Object*) &$s85);
frost$collections$Array$add$frost$collections$Array$T(_13, _14);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:211
_17 = *(&local0);
_18 = ((frost$core$Object*) &$s86);
frost$collections$Array$add$frost$collections$Array$T(_17, _18);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:212
_21 = *(&local0);
_22 = ((frost$core$Object*) &$s87);
frost$collections$Array$add$frost$collections$Array$T(_21, _22);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:213
_25 = *(&local0);
_26 = ((frost$collections$Iterable*) _25);
ITable* $tmp88 = _26->$class->itable;
while ($tmp88->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp88 = $tmp88->next;
}
_27 = $tmp88->methods[0];
_28 = _27(_26);
goto block1;
block1:;
ITable* $tmp89 = _28->$class->itable;
while ($tmp89->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp89 = $tmp89->next;
}
_30 = $tmp89->methods[0];
_31 = _30(_28);
_32 = _31.value;
if (_32) goto block3; else goto block2;
block2:;
*(&local1) = ((frost$core$String*) NULL);
ITable* $tmp90 = _28->$class->itable;
while ($tmp90->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp90 = $tmp90->next;
}
_35 = $tmp90->methods[1];
_36 = _35(_28);
_37 = ((frost$core$String*) _36);
_38 = ((frost$core$Object*) _37);
frost$core$Frost$ref$frost$core$Object$Q(_38);
_40 = *(&local1);
_41 = ((frost$core$Object*) _40);
frost$core$Frost$unref$frost$core$Object$Q(_41);
*(&local1) = _37;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:214
_45 = (frost$core$RegularExpression*) frostObjectAlloc(sizeof(frost$core$RegularExpression), (frost$core$Class*) &frost$core$RegularExpression$class);
_46 = *(&local1);
_47 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s91, _46);
_48 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_47, &$s92);
frost$core$RegularExpression$init$frost$core$String(_45, _48);
// begin inline call to method frost.core.MutableString.replace(search:frost.core.RegularExpression, replacement:frost.core.String) from Markdown.frost:214:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:401
_52 = (frost$core$Bit) {true};
// begin inline call to method frost.core.MutableString.replace(search:frost.core.RegularExpression, replacement:frost.core.String, allowGroupReferences:frost.core.Bit) from MutableString.frost:401:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:406
_55 = ((frost$core$Object*) param1);
_56 = ($fn93) _55->$class->vtable[0];
_57 = _56(_55);
_58 = frost$core$RegularExpression$matcher$frost$core$String$R$frost$core$Matcher(_45, _57);
*(&local2) = ((frost$core$Matcher*) NULL);
_60 = ((frost$core$Object*) _58);
frost$core$Frost$ref$frost$core$Object$Q(_60);
_62 = *(&local2);
_63 = ((frost$core$Object*) _62);
frost$core$Frost$unref$frost$core$Object$Q(_63);
*(&local2) = _58;
_66 = ((frost$core$Object*) _58);
frost$core$Frost$unref$frost$core$Object$Q(_66);
_68 = ((frost$core$Object*) _57);
frost$core$Frost$unref$frost$core$Object$Q(_68);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:407
frost$core$MutableString$clear(param1);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:408
goto block6;
block6:;
_74 = *(&local2);
_75 = frost$core$Matcher$find$R$frost$core$Bit(_74);
_76 = _75.value;
if (_76) goto block7; else goto block8;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:409
_79 = *(&local2);
frost$core$Matcher$appendReplacement$frost$core$MutableString$frost$core$String$frost$core$Bit(_79, param1, &$s94, _52);
goto block6;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:411
_83 = *(&local2);
frost$core$Matcher$appendTail$frost$core$MutableString(_83, param1);
_85 = *(&local2);
_86 = ((frost$core$Object*) _85);
frost$core$Frost$unref$frost$core$Object$Q(_86);
*(&local2) = ((frost$core$Matcher*) NULL);
_91 = ((frost$core$Object*) _48);
frost$core$Frost$unref$frost$core$Object$Q(_91);
_93 = ((frost$core$Object*) _47);
frost$core$Frost$unref$frost$core$Object$Q(_93);
_95 = ((frost$core$Object*) _45);
frost$core$Frost$unref$frost$core$Object$Q(_95);
_97 = _36;
frost$core$Frost$unref$frost$core$Object$Q(_97);
_99 = *(&local1);
_100 = ((frost$core$Object*) _99);
frost$core$Frost$unref$frost$core$Object$Q(_100);
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block3:;
_104 = ((frost$core$Object*) _28);
frost$core$Frost$unref$frost$core$Object$Q(_104);
_106 = *(&local0);
_107 = ((frost$core$Object*) _106);
frost$core$Frost$unref$frost$core$Object$Q(_107);
*(&local0) = ((frost$collections$Array*) NULL);
return;

}
void org$frostlang$frostc$frostdoc$Markdown$hashHTMLBlocks$frost$core$MutableString(void* rawSelf, frost$core$MutableString* param1) {
org$frostlang$frostc$frostdoc$Markdown* param0 = (org$frostlang$frostc$frostdoc$Markdown*) rawSelf;

frost$collections$Array* local0 = NULL;
frost$collections$Array* local1 = NULL;
frost$core$String* local2 = NULL;
frost$core$String* local3 = NULL;
frost$core$Int local4;
frost$core$RegularExpression* local5 = NULL;
frost$core$MutableMethod* local6 = NULL;
frost$core$RegularExpression* local7 = NULL;
frost$core$RegularExpression* local8 = NULL;
frost$core$RegularExpression* local9 = NULL;
frost$collections$Array* _1;
frost$core$Object* _4;
frost$collections$Array* _6;
frost$core$Object* _7;
frost$core$Object* _10;
frost$collections$Array* _13;
frost$core$Object* _14;
frost$collections$Array* _17;
frost$core$Object* _18;
frost$collections$Array* _21;
frost$core$Object* _22;
frost$collections$Array* _25;
frost$core$Object* _26;
frost$collections$Array* _29;
frost$core$Object* _30;
frost$collections$Array* _33;
frost$core$Object* _34;
frost$collections$Array* _37;
frost$core$Object* _38;
frost$collections$Array* _41;
frost$core$Object* _42;
frost$collections$Array* _45;
frost$core$Object* _46;
frost$collections$Array* _49;
frost$core$Object* _50;
frost$collections$Array* _53;
frost$core$Object* _54;
frost$collections$Array* _57;
frost$core$Object* _58;
frost$collections$Array* _61;
frost$core$Object* _62;
frost$collections$Array* _65;
frost$core$Object* _66;
frost$collections$Array* _69;
frost$core$Object* _70;
frost$collections$Array* _73;
frost$core$Object* _74;
frost$collections$Array* _77;
frost$core$Object* _78;
frost$collections$Array* _81;
frost$core$Object* _82;
frost$collections$Array* _85;
frost$core$Object* _86;
frost$collections$Array* _89;
frost$core$Object* _90;
frost$collections$Array* _93;
frost$core$Object* _96;
frost$collections$Array* _98;
frost$core$Object* _99;
frost$core$Object* _102;
frost$collections$Array* _105;
frost$core$Object* _106;
frost$collections$Array* _109;
frost$core$Object* _110;
frost$collections$Array* _113;
frost$collections$CollectionView* _114;
$fn95 _115;
frost$core$String* _116;
frost$core$Object* _118;
frost$core$String* _120;
frost$core$Object* _121;
frost$core$Object* _124;
frost$core$String* _127;
frost$core$Object* _130;
frost$core$String* _133;
frost$collections$Array* _134;
frost$collections$CollectionView* _135;
$fn96 _136;
frost$core$String* _137;
frost$core$String* _138;
frost$core$String* _139;
frost$core$Object* _141;
frost$core$String* _143;
frost$core$Object* _144;
frost$core$Object* _147;
frost$core$Object* _149;
frost$core$Object* _151;
frost$core$Object* _153;
frost$core$Object* _155;
frost$core$Int _158;
frost$core$Int _159;
int64_t _160;
int64_t _161;
int64_t _162;
frost$core$Int _163;
frost$core$RegularExpression* _166;
frost$core$String* _167;
frost$core$String* _168;
frost$core$String* _169;
frost$core$String* _170;
frost$core$String* _171;
frost$core$String* _172;
frost$core$String* _173;
frost$core$String* _174;
frost$core$Int _175;
frost$core$Int _176;
int64_t _179;
int64_t _180;
int64_t _181;
frost$core$Int _182;
frost$core$Object* _186;
frost$core$RegularExpression* _188;
frost$core$Object* _189;
frost$core$Object* _192;
frost$core$Object* _194;
frost$core$Object* _196;
frost$core$Object* _198;
frost$core$Object* _200;
frost$core$Object* _202;
frost$core$Object* _204;
frost$core$Object* _206;
org$frostlang$frostc$frostdoc$Markdown$_Closure4* _209;
frost$core$Int8* _211;
frost$core$MutableMethod* _212;
frost$core$Object* _213;
frost$core$Int8** _216;
frost$core$Object** _220;
frost$core$Object* _221;
frost$core$Object** _223;
frost$core$MutableMethod* _226;
frost$core$Object* _229;
frost$core$MutableMethod* _231;
frost$core$Object* _232;
frost$core$RegularExpression* _236;
frost$core$MutableMethod* _237;
frost$core$MutableMethod* _238;
frost$core$RegularExpression* _241;
frost$core$String* _242;
frost$core$String* _243;
frost$core$String* _244;
frost$core$String* _245;
frost$core$String* _246;
frost$core$String* _247;
frost$core$String* _248;
frost$core$String* _249;
frost$core$String* _250;
frost$core$Int _251;
frost$core$Int _252;
int64_t _255;
int64_t _256;
int64_t _257;
frost$core$Int _258;
frost$core$Object* _262;
frost$core$RegularExpression* _264;
frost$core$Object* _265;
frost$core$Object* _268;
frost$core$Object* _270;
frost$core$Object* _272;
frost$core$Object* _274;
frost$core$Object* _276;
frost$core$Object* _278;
frost$core$Object* _280;
frost$core$Object* _282;
frost$core$Object* _284;
frost$core$RegularExpression* _287;
frost$core$MutableMethod* _288;
frost$core$MutableMethod* _289;
frost$core$RegularExpression* _292;
frost$core$String* _293;
frost$core$String* _294;
frost$core$String* _295;
frost$core$String* _296;
frost$core$String* _297;
frost$core$Int _298;
frost$core$Object* _299;
$fn97 _302;
frost$core$String* _303;
frost$core$String* _304;
frost$core$Object* _305;
frost$core$Object* _307;
frost$core$Object* _309;
frost$core$String* _312;
frost$core$String* _313;
frost$core$String* _314;
frost$core$String* _315;
frost$core$String* _316;
frost$core$String* _317;
frost$core$String* _318;
frost$core$Int _319;
frost$core$Object* _322;
frost$core$RegularExpression* _324;
frost$core$Object* _325;
frost$core$Object* _328;
frost$core$Object* _330;
frost$core$Object* _332;
frost$core$Object* _334;
frost$core$Object* _336;
frost$core$Object* _338;
frost$core$Object* _340;
frost$core$Object* _342;
frost$core$Object* _344;
frost$core$Object* _346;
frost$core$Object* _348;
frost$core$Object* _350;
frost$core$Object* _352;
frost$core$Object* _354;
frost$core$Object* _356;
frost$core$RegularExpression* _359;
frost$core$MutableMethod* _360;
frost$core$MutableMethod* _361;
frost$core$RegularExpression* _364;
frost$core$String* _365;
frost$core$String* _366;
frost$core$String* _367;
frost$core$String* _368;
frost$core$String* _369;
frost$core$Int _370;
frost$core$Object* _371;
$fn98 _374;
frost$core$String* _375;
frost$core$String* _376;
frost$core$Object* _377;
frost$core$Object* _379;
frost$core$Object* _381;
frost$core$String* _384;
frost$core$String* _385;
frost$core$String* _386;
frost$core$String* _387;
frost$core$String* _388;
frost$core$String* _389;
frost$core$String* _390;
frost$core$String* _391;
frost$core$String* _392;
frost$core$Object* _395;
frost$core$RegularExpression* _397;
frost$core$Object* _398;
frost$core$Object* _401;
frost$core$Object* _403;
frost$core$Object* _405;
frost$core$Object* _407;
frost$core$Object* _409;
frost$core$Object* _411;
frost$core$Object* _413;
frost$core$Object* _415;
frost$core$Object* _417;
frost$core$Object* _419;
frost$core$Object* _421;
frost$core$Object* _423;
frost$core$Object* _425;
frost$core$Object* _427;
frost$core$Object* _429;
frost$core$Object* _431;
frost$core$Object* _433;
frost$core$RegularExpression* _436;
frost$core$MutableMethod* _437;
frost$core$MutableMethod* _438;
frost$core$RegularExpression* _440;
frost$core$Object* _441;
frost$core$RegularExpression* _444;
frost$core$Object* _445;
frost$core$RegularExpression* _448;
frost$core$Object* _449;
frost$core$MutableMethod* _452;
frost$core$Object* _453;
frost$core$Object* _456;
frost$core$Object* _458;
frost$core$RegularExpression* _460;
frost$core$Object* _461;
frost$core$String* _464;
frost$core$Object* _465;
frost$core$String* _468;
frost$core$Object* _469;
frost$collections$Array* _472;
frost$core$Object* _473;
frost$collections$Array* _476;
frost$core$Object* _477;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:227
_1 = (frost$collections$Array*) frostObjectAlloc(sizeof(frost$collections$Array), (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init(_1);
*(&local0) = ((frost$collections$Array*) NULL);
_4 = ((frost$core$Object*) _1);
frost$core$Frost$ref$frost$core$Object$Q(_4);
_6 = *(&local0);
_7 = ((frost$core$Object*) _6);
frost$core$Frost$unref$frost$core$Object$Q(_7);
*(&local0) = _1;
_10 = ((frost$core$Object*) _1);
frost$core$Frost$unref$frost$core$Object$Q(_10);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:228
_13 = *(&local0);
_14 = ((frost$core$Object*) &$s99);
frost$collections$Array$add$frost$collections$Array$T(_13, _14);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:229
_17 = *(&local0);
_18 = ((frost$core$Object*) &$s100);
frost$collections$Array$add$frost$collections$Array$T(_17, _18);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:230
_21 = *(&local0);
_22 = ((frost$core$Object*) &$s101);
frost$collections$Array$add$frost$collections$Array$T(_21, _22);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:231
_25 = *(&local0);
_26 = ((frost$core$Object*) &$s102);
frost$collections$Array$add$frost$collections$Array$T(_25, _26);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:232
_29 = *(&local0);
_30 = ((frost$core$Object*) &$s103);
frost$collections$Array$add$frost$collections$Array$T(_29, _30);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:233
_33 = *(&local0);
_34 = ((frost$core$Object*) &$s104);
frost$collections$Array$add$frost$collections$Array$T(_33, _34);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:234
_37 = *(&local0);
_38 = ((frost$core$Object*) &$s105);
frost$collections$Array$add$frost$collections$Array$T(_37, _38);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:235
_41 = *(&local0);
_42 = ((frost$core$Object*) &$s106);
frost$collections$Array$add$frost$collections$Array$T(_41, _42);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:236
_45 = *(&local0);
_46 = ((frost$core$Object*) &$s107);
frost$collections$Array$add$frost$collections$Array$T(_45, _46);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:237
_49 = *(&local0);
_50 = ((frost$core$Object*) &$s108);
frost$collections$Array$add$frost$collections$Array$T(_49, _50);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:238
_53 = *(&local0);
_54 = ((frost$core$Object*) &$s109);
frost$collections$Array$add$frost$collections$Array$T(_53, _54);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:239
_57 = *(&local0);
_58 = ((frost$core$Object*) &$s110);
frost$collections$Array$add$frost$collections$Array$T(_57, _58);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:240
_61 = *(&local0);
_62 = ((frost$core$Object*) &$s111);
frost$collections$Array$add$frost$collections$Array$T(_61, _62);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:241
_65 = *(&local0);
_66 = ((frost$core$Object*) &$s112);
frost$collections$Array$add$frost$collections$Array$T(_65, _66);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:242
_69 = *(&local0);
_70 = ((frost$core$Object*) &$s113);
frost$collections$Array$add$frost$collections$Array$T(_69, _70);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:243
_73 = *(&local0);
_74 = ((frost$core$Object*) &$s114);
frost$collections$Array$add$frost$collections$Array$T(_73, _74);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:244
_77 = *(&local0);
_78 = ((frost$core$Object*) &$s115);
frost$collections$Array$add$frost$collections$Array$T(_77, _78);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:245
_81 = *(&local0);
_82 = ((frost$core$Object*) &$s116);
frost$collections$Array$add$frost$collections$Array$T(_81, _82);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:246
_85 = *(&local0);
_86 = ((frost$core$Object*) &$s117);
frost$collections$Array$add$frost$collections$Array$T(_85, _86);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:247
_89 = *(&local0);
_90 = ((frost$core$Object*) &$s118);
frost$collections$Array$add$frost$collections$Array$T(_89, _90);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:248
_93 = (frost$collections$Array*) frostObjectAlloc(sizeof(frost$collections$Array), (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init(_93);
*(&local1) = ((frost$collections$Array*) NULL);
_96 = ((frost$core$Object*) _93);
frost$core$Frost$ref$frost$core$Object$Q(_96);
_98 = *(&local1);
_99 = ((frost$core$Object*) _98);
frost$core$Frost$unref$frost$core$Object$Q(_99);
*(&local1) = _93;
_102 = ((frost$core$Object*) _93);
frost$core$Frost$unref$frost$core$Object$Q(_102);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:249
_105 = *(&local1);
_106 = ((frost$core$Object*) &$s119);
frost$collections$Array$add$frost$collections$Array$T(_105, _106);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:250
_109 = *(&local1);
_110 = ((frost$core$Object*) &$s120);
frost$collections$Array$add$frost$collections$Array$T(_109, _110);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:252
_113 = *(&local0);
_114 = ((frost$collections$CollectionView*) _113);
ITable* $tmp121 = _114->$class->itable;
while ($tmp121->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp121 = $tmp121->next;
}
_115 = $tmp121->methods[3];
_116 = _115(_114, &$s122);
*(&local2) = ((frost$core$String*) NULL);
_118 = ((frost$core$Object*) _116);
frost$core$Frost$ref$frost$core$Object$Q(_118);
_120 = *(&local2);
_121 = ((frost$core$Object*) _120);
frost$core$Frost$unref$frost$core$Object$Q(_121);
*(&local2) = _116;
_124 = ((frost$core$Object*) _116);
frost$core$Frost$unref$frost$core$Object$Q(_124);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:253
_127 = *(&local2);
// begin inline call to function frost.core.String.get_asString():frost.core.String from Markdown.frost:253:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:390
_130 = ((frost$core$Object*) _127);
frost$core$Frost$ref$frost$core$Object$Q(_130);
_133 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_127, &$s123);
_134 = *(&local1);
_135 = ((frost$collections$CollectionView*) _134);
ITable* $tmp124 = _135->$class->itable;
while ($tmp124->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp124 = $tmp124->next;
}
_136 = $tmp124->methods[3];
_137 = _136(_135, &$s125);
_138 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_133, _137);
_139 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_138, &$s126);
*(&local3) = ((frost$core$String*) NULL);
_141 = ((frost$core$Object*) _139);
frost$core$Frost$ref$frost$core$Object$Q(_141);
_143 = *(&local3);
_144 = ((frost$core$Object*) _143);
frost$core$Frost$unref$frost$core$Object$Q(_144);
*(&local3) = _139;
_147 = ((frost$core$Object*) _139);
frost$core$Frost$unref$frost$core$Object$Q(_147);
_149 = ((frost$core$Object*) _138);
frost$core$Frost$unref$frost$core$Object$Q(_149);
_151 = ((frost$core$Object*) _137);
frost$core$Frost$unref$frost$core$Object$Q(_151);
_153 = ((frost$core$Object*) _133);
frost$core$Frost$unref$frost$core$Object$Q(_153);
_155 = ((frost$core$Object*) _127);
frost$core$Frost$unref$frost$core$Object$Q(_155);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:255
_158 = (frost$core$Int) {4u};
_159 = (frost$core$Int) {1u};
_160 = _158.value;
_161 = _159.value;
_162 = _160 - _161;
_163 = (frost$core$Int) {_162};
*(&local4) = _163;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:268
_166 = (frost$core$RegularExpression*) frostObjectAlloc(sizeof(frost$core$RegularExpression), (frost$core$Class*) &frost$core$RegularExpression$class);
_167 = *(&local2);
_168 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s127, _167);
_169 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_168, &$s128);
_170 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_169, &$s129);
_171 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_170, &$s130);
_172 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_171, &$s131);
_173 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_172, &$s132);
_174 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_173, &$s133);
_175 = (frost$core$Int) {1u};
_176 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.||(other:frost.core.Int):frost.core.Int from Markdown.frost:275:45
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:329
_179 = _175.value;
_180 = _176.value;
_181 = _179 | _180;
_182 = (frost$core$Int) {_181};
frost$core$RegularExpression$init$frost$core$String$frost$core$Int(_166, _174, _182);
*(&local5) = ((frost$core$RegularExpression*) NULL);
_186 = ((frost$core$Object*) _166);
frost$core$Frost$ref$frost$core$Object$Q(_186);
_188 = *(&local5);
_189 = ((frost$core$Object*) _188);
frost$core$Frost$unref$frost$core$Object$Q(_189);
*(&local5) = _166;
_192 = ((frost$core$Object*) _174);
frost$core$Frost$unref$frost$core$Object$Q(_192);
_194 = ((frost$core$Object*) _173);
frost$core$Frost$unref$frost$core$Object$Q(_194);
_196 = ((frost$core$Object*) _172);
frost$core$Frost$unref$frost$core$Object$Q(_196);
_198 = ((frost$core$Object*) _171);
frost$core$Frost$unref$frost$core$Object$Q(_198);
_200 = ((frost$core$Object*) _170);
frost$core$Frost$unref$frost$core$Object$Q(_200);
_202 = ((frost$core$Object*) _169);
frost$core$Frost$unref$frost$core$Object$Q(_202);
_204 = ((frost$core$Object*) _168);
frost$core$Frost$unref$frost$core$Object$Q(_204);
_206 = ((frost$core$Object*) _166);
frost$core$Frost$unref$frost$core$Object$Q(_206);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:277
_209 = (org$frostlang$frostc$frostdoc$Markdown$_Closure4*) frostObjectAlloc(sizeof(org$frostlang$frostc$frostdoc$Markdown$_Closure4), (frost$core$Class*) &org$frostlang$frostc$frostdoc$Markdown$_Closure4$class);
org$frostlang$frostc$frostdoc$Markdown$_Closure4$init$org$frostlang$frostc$frostdoc$Markdown(_209, param0);
_211 = ((frost$core$Int8*) org$frostlang$frostc$frostdoc$Markdown$_Closure4$$anonymous3$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$String);
_212 = (frost$core$MutableMethod*) frostObjectAlloc(sizeof(frost$core$MutableMethod), (frost$core$Class*) &frost$core$MutableMethod$class);
_213 = ((frost$core$Object*) _209);
// begin inline call to frost.core.MutableMethod.init(pointer:frost.unsafe.Pointer<frost.core.Int8>, target:frost.core.Object?) from Markdown.frost:277:9
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableMethod.frost:32
_216 = &_212->pointer;
*_216 = _211;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableMethod.frost:33
frost$core$Frost$ref$frost$core$Object$Q(_213);
_220 = &_212->target;
_221 = *_220;
frost$core$Frost$unref$frost$core$Object$Q(_221);
_223 = &_212->target;
*_223 = _213;
_226 = _212;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:277
*(&local6) = ((frost$core$MutableMethod*) NULL);
_229 = ((frost$core$Object*) _226);
frost$core$Frost$ref$frost$core$Object$Q(_229);
_231 = *(&local6);
_232 = ((frost$core$Object*) _231);
frost$core$Frost$unref$frost$core$Object$Q(_232);
*(&local6) = _226;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:281
_236 = *(&local5);
_237 = *(&local6);
_238 = _237;
frost$core$MutableString$replace$frost$core$RegularExpression$$LPfrost$collections$ListView$LTfrost$core$String$Q$GT$RP$EQ$GT$LPfrost$core$Object$RP(param1, _236, _238);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:284
_241 = (frost$core$RegularExpression*) frostObjectAlloc(sizeof(frost$core$RegularExpression), (frost$core$Class*) &frost$core$RegularExpression$class);
_242 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s134, &$s135);
_243 = *(&local3);
_244 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_242, _243);
_245 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_244, &$s136);
_246 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_245, &$s137);
_247 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_246, &$s138);
_248 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_247, &$s139);
_249 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_248, &$s140);
_250 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_249, &$s141);
_251 = (frost$core$Int) {1u};
_252 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.||(other:frost.core.Int):frost.core.Int from Markdown.frost:292:45
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:329
_255 = _251.value;
_256 = _252.value;
_257 = _255 | _256;
_258 = (frost$core$Int) {_257};
frost$core$RegularExpression$init$frost$core$String$frost$core$Int(_241, _250, _258);
*(&local7) = ((frost$core$RegularExpression*) NULL);
_262 = ((frost$core$Object*) _241);
frost$core$Frost$ref$frost$core$Object$Q(_262);
_264 = *(&local7);
_265 = ((frost$core$Object*) _264);
frost$core$Frost$unref$frost$core$Object$Q(_265);
*(&local7) = _241;
_268 = ((frost$core$Object*) _250);
frost$core$Frost$unref$frost$core$Object$Q(_268);
_270 = ((frost$core$Object*) _249);
frost$core$Frost$unref$frost$core$Object$Q(_270);
_272 = ((frost$core$Object*) _248);
frost$core$Frost$unref$frost$core$Object$Q(_272);
_274 = ((frost$core$Object*) _247);
frost$core$Frost$unref$frost$core$Object$Q(_274);
_276 = ((frost$core$Object*) _246);
frost$core$Frost$unref$frost$core$Object$Q(_276);
_278 = ((frost$core$Object*) _245);
frost$core$Frost$unref$frost$core$Object$Q(_278);
_280 = ((frost$core$Object*) _244);
frost$core$Frost$unref$frost$core$Object$Q(_280);
_282 = ((frost$core$Object*) _242);
frost$core$Frost$unref$frost$core$Object$Q(_282);
_284 = ((frost$core$Object*) _241);
frost$core$Frost$unref$frost$core$Object$Q(_284);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:293
_287 = *(&local7);
_288 = *(&local6);
_289 = _288;
frost$core$MutableString$replace$frost$core$RegularExpression$$LPfrost$collections$ListView$LTfrost$core$String$Q$GT$RP$EQ$GT$LPfrost$core$Object$RP(param1, _287, _289);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:296
_292 = (frost$core$RegularExpression*) frostObjectAlloc(sizeof(frost$core$RegularExpression), (frost$core$Class*) &frost$core$RegularExpression$class);
_293 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s142, &$s143);
_294 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_293, &$s144);
_295 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_294, &$s145);
_296 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_295, &$s146);
_297 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_296, &$s147);
_298 = *(&local4);
frost$core$Int$wrapper* $tmp148;
$tmp148 = (frost$core$Int$wrapper*) frostObjectAlloc(sizeof(frost$core$Int$wrapper), (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp148->value = _298;
_299 = ((frost$core$Object*) $tmp148);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Markdown.frost:302:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
_302 = ($fn149) _299->$class->vtable[0];
_303 = _302(_299);
_304 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_297, _303);
_305 = ((frost$core$Object*) _304);
frost$core$Frost$ref$frost$core$Object$Q(_305);
_307 = ((frost$core$Object*) _304);
frost$core$Frost$unref$frost$core$Object$Q(_307);
_309 = ((frost$core$Object*) _303);
frost$core$Frost$unref$frost$core$Object$Q(_309);
_312 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_304, &$s150);
_313 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_312, &$s151);
_314 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_313, &$s152);
_315 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_314, &$s153);
_316 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_315, &$s154);
_317 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_316, &$s155);
_318 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_317, &$s156);
_319 = (frost$core$Int) {2u};
frost$core$RegularExpression$init$frost$core$String$frost$core$Int(_292, _318, _319);
*(&local8) = ((frost$core$RegularExpression*) NULL);
_322 = ((frost$core$Object*) _292);
frost$core$Frost$ref$frost$core$Object$Q(_322);
_324 = *(&local8);
_325 = ((frost$core$Object*) _324);
frost$core$Frost$unref$frost$core$Object$Q(_325);
*(&local8) = _292;
_328 = ((frost$core$Object*) _318);
frost$core$Frost$unref$frost$core$Object$Q(_328);
_330 = ((frost$core$Object*) _317);
frost$core$Frost$unref$frost$core$Object$Q(_330);
_332 = ((frost$core$Object*) _316);
frost$core$Frost$unref$frost$core$Object$Q(_332);
_334 = ((frost$core$Object*) _315);
frost$core$Frost$unref$frost$core$Object$Q(_334);
_336 = ((frost$core$Object*) _314);
frost$core$Frost$unref$frost$core$Object$Q(_336);
_338 = ((frost$core$Object*) _313);
frost$core$Frost$unref$frost$core$Object$Q(_338);
_340 = ((frost$core$Object*) _312);
frost$core$Frost$unref$frost$core$Object$Q(_340);
_342 = ((frost$core$Object*) _304);
frost$core$Frost$unref$frost$core$Object$Q(_342);
_344 = _299;
frost$core$Frost$unref$frost$core$Object$Q(_344);
_346 = ((frost$core$Object*) _297);
frost$core$Frost$unref$frost$core$Object$Q(_346);
_348 = ((frost$core$Object*) _296);
frost$core$Frost$unref$frost$core$Object$Q(_348);
_350 = ((frost$core$Object*) _295);
frost$core$Frost$unref$frost$core$Object$Q(_350);
_352 = ((frost$core$Object*) _294);
frost$core$Frost$unref$frost$core$Object$Q(_352);
_354 = ((frost$core$Object*) _293);
frost$core$Frost$unref$frost$core$Object$Q(_354);
_356 = ((frost$core$Object*) _292);
frost$core$Frost$unref$frost$core$Object$Q(_356);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:310
_359 = *(&local8);
_360 = *(&local6);
_361 = _360;
frost$core$MutableString$replace$frost$core$RegularExpression$$LPfrost$collections$ListView$LTfrost$core$String$Q$GT$RP$EQ$GT$LPfrost$core$Object$RP(param1, _359, _361);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:313
_364 = (frost$core$RegularExpression*) frostObjectAlloc(sizeof(frost$core$RegularExpression), (frost$core$Class*) &frost$core$RegularExpression$class);
_365 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s157, &$s158);
_366 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_365, &$s159);
_367 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_366, &$s160);
_368 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_367, &$s161);
_369 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_368, &$s162);
_370 = *(&local4);
frost$core$Int$wrapper* $tmp163;
$tmp163 = (frost$core$Int$wrapper*) frostObjectAlloc(sizeof(frost$core$Int$wrapper), (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp163->value = _370;
_371 = ((frost$core$Object*) $tmp163);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Markdown.frost:319:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
_374 = ($fn164) _371->$class->vtable[0];
_375 = _374(_371);
_376 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_369, _375);
_377 = ((frost$core$Object*) _376);
frost$core$Frost$ref$frost$core$Object$Q(_377);
_379 = ((frost$core$Object*) _376);
frost$core$Frost$unref$frost$core$Object$Q(_379);
_381 = ((frost$core$Object*) _375);
frost$core$Frost$unref$frost$core$Object$Q(_381);
_384 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_376, &$s165);
_385 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_384, &$s166);
_386 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_385, &$s167);
_387 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_386, &$s168);
_388 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_387, &$s169);
_389 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_388, &$s170);
_390 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_389, &$s171);
_391 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_390, &$s172);
_392 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_391, &$s173);
frost$core$RegularExpression$init$frost$core$String(_364, _392);
*(&local9) = ((frost$core$RegularExpression*) NULL);
_395 = ((frost$core$Object*) _364);
frost$core$Frost$ref$frost$core$Object$Q(_395);
_397 = *(&local9);
_398 = ((frost$core$Object*) _397);
frost$core$Frost$unref$frost$core$Object$Q(_398);
*(&local9) = _364;
_401 = ((frost$core$Object*) _392);
frost$core$Frost$unref$frost$core$Object$Q(_401);
_403 = ((frost$core$Object*) _391);
frost$core$Frost$unref$frost$core$Object$Q(_403);
_405 = ((frost$core$Object*) _390);
frost$core$Frost$unref$frost$core$Object$Q(_405);
_407 = ((frost$core$Object*) _389);
frost$core$Frost$unref$frost$core$Object$Q(_407);
_409 = ((frost$core$Object*) _388);
frost$core$Frost$unref$frost$core$Object$Q(_409);
_411 = ((frost$core$Object*) _387);
frost$core$Frost$unref$frost$core$Object$Q(_411);
_413 = ((frost$core$Object*) _386);
frost$core$Frost$unref$frost$core$Object$Q(_413);
_415 = ((frost$core$Object*) _385);
frost$core$Frost$unref$frost$core$Object$Q(_415);
_417 = ((frost$core$Object*) _384);
frost$core$Frost$unref$frost$core$Object$Q(_417);
_419 = ((frost$core$Object*) _376);
frost$core$Frost$unref$frost$core$Object$Q(_419);
_421 = _371;
frost$core$Frost$unref$frost$core$Object$Q(_421);
_423 = ((frost$core$Object*) _369);
frost$core$Frost$unref$frost$core$Object$Q(_423);
_425 = ((frost$core$Object*) _368);
frost$core$Frost$unref$frost$core$Object$Q(_425);
_427 = ((frost$core$Object*) _367);
frost$core$Frost$unref$frost$core$Object$Q(_427);
_429 = ((frost$core$Object*) _366);
frost$core$Frost$unref$frost$core$Object$Q(_429);
_431 = ((frost$core$Object*) _365);
frost$core$Frost$unref$frost$core$Object$Q(_431);
_433 = ((frost$core$Object*) _364);
frost$core$Frost$unref$frost$core$Object$Q(_433);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:328
_436 = *(&local9);
_437 = *(&local6);
_438 = _437;
frost$core$MutableString$replace$frost$core$RegularExpression$$LPfrost$collections$ListView$LTfrost$core$String$Q$GT$RP$EQ$GT$LPfrost$core$Object$RP(param1, _436, _438);
_440 = *(&local9);
_441 = ((frost$core$Object*) _440);
frost$core$Frost$unref$frost$core$Object$Q(_441);
*(&local9) = ((frost$core$RegularExpression*) NULL);
_444 = *(&local8);
_445 = ((frost$core$Object*) _444);
frost$core$Frost$unref$frost$core$Object$Q(_445);
*(&local8) = ((frost$core$RegularExpression*) NULL);
_448 = *(&local7);
_449 = ((frost$core$Object*) _448);
frost$core$Frost$unref$frost$core$Object$Q(_449);
*(&local7) = ((frost$core$RegularExpression*) NULL);
_452 = *(&local6);
_453 = ((frost$core$Object*) _452);
frost$core$Frost$unref$frost$core$Object$Q(_453);
*(&local6) = ((frost$core$MutableMethod*) NULL);
_456 = ((frost$core$Object*) _212);
frost$core$Frost$unref$frost$core$Object$Q(_456);
_458 = ((frost$core$Object*) _209);
frost$core$Frost$unref$frost$core$Object$Q(_458);
_460 = *(&local5);
_461 = ((frost$core$Object*) _460);
frost$core$Frost$unref$frost$core$Object$Q(_461);
*(&local5) = ((frost$core$RegularExpression*) NULL);
_464 = *(&local3);
_465 = ((frost$core$Object*) _464);
frost$core$Frost$unref$frost$core$Object$Q(_465);
*(&local3) = ((frost$core$String*) NULL);
_468 = *(&local2);
_469 = ((frost$core$Object*) _468);
frost$core$Frost$unref$frost$core$Object$Q(_469);
*(&local2) = ((frost$core$String*) NULL);
_472 = *(&local1);
_473 = ((frost$core$Object*) _472);
frost$core$Frost$unref$frost$core$Object$Q(_473);
*(&local1) = ((frost$collections$Array*) NULL);
_476 = *(&local0);
_477 = ((frost$core$Object*) _476);
frost$core$Frost$unref$frost$core$Object$Q(_477);
*(&local0) = ((frost$collections$Array*) NULL);
return;

}
void org$frostlang$frostc$frostdoc$Markdown$formParagraphs$frost$core$MutableString(void* rawSelf, frost$core$MutableString* param1) {
org$frostlang$frostc$frostdoc$Markdown* param0 = (org$frostlang$frostc$frostdoc$Markdown*) rawSelf;

frost$core$Matcher* local0 = NULL;
frost$core$Matcher* local1 = NULL;
frost$collections$Array* local2 = NULL;
frost$core$Int local3;
frost$core$String* local4 = NULL;
frost$core$String* local5 = NULL;
frost$core$MutableString* local6 = NULL;
frost$core$RegularExpression* _1;
frost$core$Bit _5;
frost$core$Object* _8;
$fn174 _9;
frost$core$String* _10;
frost$core$Matcher* _11;
frost$core$Object* _13;
frost$core$Matcher* _15;
frost$core$Object* _16;
frost$core$Object* _19;
frost$core$Object* _21;
frost$core$Matcher* _27;
frost$core$Bit _28;
bool _29;
frost$core$Matcher* _32;
frost$core$Matcher* _36;
frost$core$Matcher* _38;
frost$core$Object* _39;
frost$core$Object* _44;
frost$core$RegularExpression* _47;
frost$core$Bit _51;
frost$core$Object* _54;
$fn175 _55;
frost$core$String* _56;
frost$core$Matcher* _57;
frost$core$Object* _59;
frost$core$Matcher* _61;
frost$core$Object* _62;
frost$core$Object* _65;
frost$core$Object* _67;
frost$core$Matcher* _73;
frost$core$Bit _74;
bool _75;
frost$core$Matcher* _78;
frost$core$Matcher* _82;
frost$core$Matcher* _84;
frost$core$Object* _85;
frost$core$Object* _90;
frost$core$Int* _97;
frost$core$Int _98;
frost$core$Int _100;
int64_t _103;
int64_t _104;
bool _105;
frost$core$Bit _106;
bool _108;
frost$collections$Array* _111;
frost$core$Object* _113;
frost$collections$Array* _115;
frost$core$Object* _116;
frost$core$Object* _119;
frost$collections$Array* _124;
frost$core$Object* _125;
$fn176 _126;
frost$core$String* _127;
frost$core$RegularExpression* _128;
frost$core$Int64 _132;
int64_t _135;
int64_t _136;
frost$core$Int _137;
frost$collections$Array* _139;
frost$core$Object* _140;
frost$core$Object* _142;
frost$collections$CollectionView* _145;
frost$core$Object* _147;
frost$collections$Array* _149;
frost$core$Object* _150;
frost$core$Object* _153;
frost$core$Object* _155;
frost$core$Object* _157;
frost$core$Object* _159;
frost$core$Int _163;
frost$collections$Array* _164;
frost$collections$CollectionView* _165;
$fn177 _166;
frost$core$Int _167;
frost$core$Bit _168;
frost$core$Range$LTfrost$core$Int$GT _169;
frost$core$Int _170;
frost$core$Int _172;
frost$core$Bit _173;
bool _174;
frost$core$Int _175;
int64_t _177;
int64_t _178;
bool _179;
frost$core$Bit _180;
bool _181;
int64_t _183;
int64_t _184;
bool _185;
frost$core$Bit _186;
bool _187;
frost$collections$Array* _190;
frost$core$Int _191;
frost$core$Int _193;
int64_t _194;
int64_t _195;
bool _196;
frost$core$Bit _197;
bool _198;
frost$collections$CollectionView* _200;
$fn178 _201;
frost$core$Int _202;
int64_t _203;
int64_t _204;
bool _205;
frost$core$Bit _206;
bool _207;
frost$core$Int _209;
frost$unsafe$NewPointer* _213;
frost$unsafe$NewPointer _214;
int64_t _215;
frost$core$Int64 _216;
int64_t _217;
frost$core$Object* _218;
frost$core$Object* _219;
frost$core$String* _222;
frost$core$Object* _224;
frost$core$String* _226;
frost$core$Object* _227;
frost$core$Object* _230;
org$frostlang$frostc$frostdoc$Protector** _233;
org$frostlang$frostc$frostdoc$Protector* _234;
frost$core$String* _235;
$fn179 _236;
frost$core$String* _237;
frost$core$Object* _239;
frost$core$String* _241;
frost$core$Object* _242;
frost$core$Object* _245;
frost$core$String* _248;
bool _249;
frost$core$Bit _250;
bool _251;
frost$collections$Array* _254;
frost$core$Int _255;
frost$core$String* _256;
bool _257;
frost$core$Bit _258;
bool _259;
frost$core$Int _261;
frost$core$String* _264;
frost$core$Object* _265;
frost$core$Int _267;
int64_t _268;
int64_t _269;
bool _270;
frost$core$Bit _271;
bool _272;
frost$collections$CollectionView* _274;
$fn180 _275;
frost$core$Int _276;
int64_t _277;
int64_t _278;
bool _279;
frost$core$Bit _280;
bool _281;
frost$core$Int _283;
frost$unsafe$NewPointer* _287;
frost$unsafe$NewPointer _288;
int64_t _289;
frost$core$Int64 _290;
int64_t _291;
frost$core$Object* _292;
frost$core$Object* _294;
frost$core$Object* _295;
frost$core$MutableString* _302;
frost$core$String* _303;
frost$core$Object* _306;
frost$core$MutableString* _308;
frost$core$Object* _309;
frost$core$Object* _312;
frost$core$MutableString* _315;
$fn181 _316;
frost$collections$Array* _319;
frost$core$Int _320;
frost$core$MutableString* _321;
frost$core$Object* _322;
$fn182 _325;
frost$core$String* _326;
frost$core$String* _327;
frost$core$Object* _328;
frost$core$Object* _330;
frost$core$Object* _332;
frost$core$String* _335;
frost$core$Object* _336;
frost$core$Int _338;
int64_t _339;
int64_t _340;
bool _341;
frost$core$Bit _342;
bool _343;
frost$collections$CollectionView* _345;
$fn183 _346;
frost$core$Int _347;
int64_t _348;
int64_t _349;
bool _350;
frost$core$Bit _351;
bool _352;
frost$core$Int _354;
frost$unsafe$NewPointer* _358;
frost$unsafe$NewPointer _359;
int64_t _360;
frost$core$Int64 _361;
int64_t _362;
frost$core$Object* _363;
frost$core$Object* _365;
frost$core$Object* _366;
frost$core$Object* _370;
frost$core$Object* _372;
frost$core$MutableString* _374;
frost$core$Object* _375;
frost$core$String* _379;
frost$core$Object* _380;
frost$core$String* _383;
frost$core$Object* _384;
frost$core$Int _388;
int64_t _389;
int64_t _390;
int64_t _391;
frost$core$Int _392;
int64_t _394;
int64_t _395;
bool _396;
frost$core$Bit _397;
bool _398;
int64_t _400;
int64_t _401;
bool _402;
frost$core$Bit _403;
bool _404;
int64_t _406;
int64_t _407;
int64_t _408;
frost$core$Int _409;
frost$core$Bit _413;
frost$core$Range$LTfrost$core$MutableString$Index$Q$GT _414;
frost$collections$Array* _415;
frost$collections$CollectionView* _416;
$fn184 _417;
frost$core$String* _418;
frost$core$Object* _420;
frost$collections$Array* _422;
frost$core$Object* _423;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:332
_1 = (frost$core$RegularExpression*) frostObjectAlloc(sizeof(frost$core$RegularExpression), (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String(_1, &$s185);
// begin inline call to method frost.core.MutableString.replace(search:frost.core.RegularExpression, replacement:frost.core.String) from Markdown.frost:332:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:401
_5 = (frost$core$Bit) {true};
// begin inline call to method frost.core.MutableString.replace(search:frost.core.RegularExpression, replacement:frost.core.String, allowGroupReferences:frost.core.Bit) from MutableString.frost:401:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:406
_8 = ((frost$core$Object*) param1);
_9 = ($fn186) _8->$class->vtable[0];
_10 = _9(_8);
_11 = frost$core$RegularExpression$matcher$frost$core$String$R$frost$core$Matcher(_1, _10);
*(&local0) = ((frost$core$Matcher*) NULL);
_13 = ((frost$core$Object*) _11);
frost$core$Frost$ref$frost$core$Object$Q(_13);
_15 = *(&local0);
_16 = ((frost$core$Object*) _15);
frost$core$Frost$unref$frost$core$Object$Q(_16);
*(&local0) = _11;
_19 = ((frost$core$Object*) _11);
frost$core$Frost$unref$frost$core$Object$Q(_19);
_21 = ((frost$core$Object*) _10);
frost$core$Frost$unref$frost$core$Object$Q(_21);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:407
frost$core$MutableString$clear(param1);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:408
goto block3;
block3:;
_27 = *(&local0);
_28 = frost$core$Matcher$find$R$frost$core$Bit(_27);
_29 = _28.value;
if (_29) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:409
_32 = *(&local0);
frost$core$Matcher$appendReplacement$frost$core$MutableString$frost$core$String$frost$core$Bit(_32, param1, &$s187, _5);
goto block3;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:411
_36 = *(&local0);
frost$core$Matcher$appendTail$frost$core$MutableString(_36, param1);
_38 = *(&local0);
_39 = ((frost$core$Object*) _38);
frost$core$Frost$unref$frost$core$Object$Q(_39);
*(&local0) = ((frost$core$Matcher*) NULL);
_44 = ((frost$core$Object*) _1);
frost$core$Frost$unref$frost$core$Object$Q(_44);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:333
_47 = (frost$core$RegularExpression*) frostObjectAlloc(sizeof(frost$core$RegularExpression), (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String(_47, &$s188);
// begin inline call to method frost.core.MutableString.replace(search:frost.core.RegularExpression, replacement:frost.core.String) from Markdown.frost:333:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:401
_51 = (frost$core$Bit) {true};
// begin inline call to method frost.core.MutableString.replace(search:frost.core.RegularExpression, replacement:frost.core.String, allowGroupReferences:frost.core.Bit) from MutableString.frost:401:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:406
_54 = ((frost$core$Object*) param1);
_55 = ($fn189) _54->$class->vtable[0];
_56 = _55(_54);
_57 = frost$core$RegularExpression$matcher$frost$core$String$R$frost$core$Matcher(_47, _56);
*(&local1) = ((frost$core$Matcher*) NULL);
_59 = ((frost$core$Object*) _57);
frost$core$Frost$ref$frost$core$Object$Q(_59);
_61 = *(&local1);
_62 = ((frost$core$Object*) _61);
frost$core$Frost$unref$frost$core$Object$Q(_62);
*(&local1) = _57;
_65 = ((frost$core$Object*) _57);
frost$core$Frost$unref$frost$core$Object$Q(_65);
_67 = ((frost$core$Object*) _56);
frost$core$Frost$unref$frost$core$Object$Q(_67);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:407
frost$core$MutableString$clear(param1);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:408
goto block8;
block8:;
_73 = *(&local1);
_74 = frost$core$Matcher$find$R$frost$core$Bit(_73);
_75 = _74.value;
if (_75) goto block9; else goto block10;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:409
_78 = *(&local1);
frost$core$Matcher$appendReplacement$frost$core$MutableString$frost$core$String$frost$core$Bit(_78, param1, &$s190, _51);
goto block8;
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:411
_82 = *(&local1);
frost$core$Matcher$appendTail$frost$core$MutableString(_82, param1);
_84 = *(&local1);
_85 = ((frost$core$Object*) _84);
frost$core$Frost$unref$frost$core$Object$Q(_85);
*(&local1) = ((frost$core$Matcher*) NULL);
_90 = ((frost$core$Object*) _47);
frost$core$Frost$unref$frost$core$Object$Q(_90);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:335
*(&local2) = ((frost$collections$Array*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:336
// begin inline call to function frost.core.MutableString.get_byteLength():frost.core.Int from Markdown.frost:336:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:173
_97 = &param1->_length;
_98 = *_97;
_100 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Markdown.frost:336:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_103 = _98.value;
_104 = _100.value;
_105 = _103 == _104;
_106 = (frost$core$Bit) {_105};
_108 = _106.value;
if (_108) goto block11; else goto block13;
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:337
_111 = (frost$collections$Array*) frostObjectAlloc(sizeof(frost$collections$Array), (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init(_111);
_113 = ((frost$core$Object*) _111);
frost$core$Frost$ref$frost$core$Object$Q(_113);
_115 = *(&local2);
_116 = ((frost$core$Object*) _115);
frost$core$Frost$unref$frost$core$Object$Q(_116);
*(&local2) = _111;
_119 = ((frost$core$Object*) _111);
frost$core$Frost$unref$frost$core$Object$Q(_119);
goto block12;
block13:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:339
_124 = (frost$collections$Array*) frostObjectAlloc(sizeof(frost$collections$Array), (frost$core$Class*) &frost$collections$Array$class);
_125 = ((frost$core$Object*) param1);
_126 = ($fn191) _125->$class->vtable[0];
_127 = _126(_125);
_128 = (frost$core$RegularExpression*) frostObjectAlloc(sizeof(frost$core$RegularExpression), (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String(_128, &$s192);
// begin inline call to function frost.core.String.split(delimiter:frost.core.RegularExpression):frost.collections.Array<frost.core.String> from Markdown.frost:339:62
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1449
_132 = (frost$core$Int64) {9223372036854775807u};
// begin inline call to function frost.core.Int64.get_asInt():frost.core.Int from Int.frost:22:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:580
_135 = _132.value;
_136 = ((int64_t) _135);
_137 = (frost$core$Int) {_136};
_139 = frost$core$String$split$frost$core$RegularExpression$frost$core$Int$R$frost$collections$Array$LTfrost$core$String$GT(_127, _128, _137);
_140 = ((frost$core$Object*) _139);
frost$core$Frost$ref$frost$core$Object$Q(_140);
_142 = ((frost$core$Object*) _139);
frost$core$Frost$unref$frost$core$Object$Q(_142);
_145 = ((frost$collections$CollectionView*) _139);
frost$collections$Array$init$frost$collections$CollectionView$LTfrost$collections$Array$T$GT(_124, _145);
_147 = ((frost$core$Object*) _124);
frost$core$Frost$ref$frost$core$Object$Q(_147);
_149 = *(&local2);
_150 = ((frost$core$Object*) _149);
frost$core$Frost$unref$frost$core$Object$Q(_150);
*(&local2) = _124;
_153 = ((frost$core$Object*) _139);
frost$core$Frost$unref$frost$core$Object$Q(_153);
_155 = ((frost$core$Object*) _128);
frost$core$Frost$unref$frost$core$Object$Q(_155);
_157 = ((frost$core$Object*) _127);
frost$core$Frost$unref$frost$core$Object$Q(_157);
_159 = ((frost$core$Object*) _124);
frost$core$Frost$unref$frost$core$Object$Q(_159);
goto block12;
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:341
_163 = (frost$core$Int) {0u};
_164 = *(&local2);
_165 = ((frost$collections$CollectionView*) _164);
ITable* $tmp193 = _165->$class->itable;
while ($tmp193->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp193 = $tmp193->next;
}
_166 = $tmp193->methods[0];
_167 = _166(_165);
_168 = (frost$core$Bit) {false};
_169 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit(_163, _167, _168);
_170 = _169.min;
*(&local3) = _170;
_172 = _169.max;
_173 = _169.inclusive;
_174 = _173.value;
_175 = (frost$core$Int) {1u};
if (_174) goto block21; else goto block22;
block21:;
_177 = _170.value;
_178 = _172.value;
_179 = _177 <= _178;
_180 = (frost$core$Bit) {_179};
_181 = _180.value;
if (_181) goto block18; else goto block19;
block22:;
_183 = _170.value;
_184 = _172.value;
_185 = _183 < _184;
_186 = (frost$core$Bit) {_185};
_187 = _186.value;
if (_187) goto block18; else goto block19;
block18:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:342
_190 = *(&local2);
_191 = *(&local3);
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Markdown.frost:342:40
_193 = (frost$core$Int) {0u};
_194 = _191.value;
_195 = _193.value;
_196 = _194 >= _195;
_197 = (frost$core$Bit) {_196};
_198 = _197.value;
if (_198) goto block26; else goto block25;
block26:;
_200 = ((frost$collections$CollectionView*) _190);
ITable* $tmp194 = _200->$class->itable;
while ($tmp194->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp194 = $tmp194->next;
}
_201 = $tmp194->methods[0];
_202 = _201(_200);
_203 = _191.value;
_204 = _202.value;
_205 = _203 < _204;
_206 = (frost$core$Bit) {_205};
_207 = _206.value;
if (_207) goto block24; else goto block25;
block25:;
_209 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s195, _209, &$s196);
abort(); // unreachable
block24:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
_213 = &_190->data;
_214 = *_213;
_215 = _214.value;
_216 = frost$core$Int64$init$frost$core$Int(_191);
_217 = _216.value;
_218 = ((frost$core$Object**)_215)[_217];
_219 = _218;
frost$core$Frost$ref$frost$core$Object$Q(_219);
_222 = ((frost$core$String*) _218);
*(&local4) = ((frost$core$String*) NULL);
_224 = ((frost$core$Object*) _222);
frost$core$Frost$ref$frost$core$Object$Q(_224);
_226 = *(&local4);
_227 = ((frost$core$Object*) _226);
frost$core$Frost$unref$frost$core$Object$Q(_227);
*(&local4) = _222;
_230 = _218;
frost$core$Frost$unref$frost$core$Object$Q(_230);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:343
_233 = &param0->htmlProtector;
_234 = *_233;
_235 = *(&local4);
_236 = ($fn197) _234->$class->vtable[3];
_237 = _236(_234, _235);
*(&local5) = ((frost$core$String*) NULL);
_239 = ((frost$core$Object*) _237);
frost$core$Frost$ref$frost$core$Object$Q(_239);
_241 = *(&local5);
_242 = ((frost$core$Object*) _241);
frost$core$Frost$unref$frost$core$Object$Q(_242);
*(&local5) = _237;
_245 = ((frost$core$Object*) _237);
frost$core$Frost$unref$frost$core$Object$Q(_245);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:344
_248 = *(&local5);
_249 = _248 != NULL;
_250 = (frost$core$Bit) {_249};
_251 = _250.value;
if (_251) goto block27; else goto block29;
block27:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:345
_254 = *(&local2);
_255 = *(&local3);
_256 = *(&local5);
_257 = _256 != NULL;
_258 = (frost$core$Bit) {_257};
_259 = _258.value;
if (_259) goto block30; else goto block31;
block31:;
_261 = (frost$core$Int) {345u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s198, _261, &$s199);
abort(); // unreachable
block30:;
_264 = _256;
_265 = ((frost$core$Object*) _264);
// begin inline call to method frost.collections.Array.[]:=(index:frost.core.Int, value:frost.collections.Array.T) from Markdown.frost:345:27
_267 = (frost$core$Int) {0u};
_268 = _255.value;
_269 = _267.value;
_270 = _268 >= _269;
_271 = (frost$core$Bit) {_270};
_272 = _271.value;
if (_272) goto block35; else goto block34;
block35:;
_274 = ((frost$collections$CollectionView*) _254);
ITable* $tmp200 = _274->$class->itable;
while ($tmp200->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp200 = $tmp200->next;
}
_275 = $tmp200->methods[0];
_276 = _275(_274);
_277 = _255.value;
_278 = _276.value;
_279 = _277 < _278;
_280 = (frost$core$Bit) {_279};
_281 = _280.value;
if (_281) goto block33; else goto block34;
block34:;
_283 = (frost$core$Int) {79u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s201, _283, &$s202);
abort(); // unreachable
block33:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:80
_287 = &_254->data;
_288 = *_287;
_289 = _288.value;
_290 = frost$core$Int64$init$frost$core$Int(_255);
_291 = _290.value;
_292 = _265;
frost$core$Frost$ref$frost$core$Object$Q(_292);
_294 = ((frost$core$Object**)_289)[_291];
_295 = _294;
frost$core$Frost$unref$frost$core$Object$Q(_295);
((frost$core$Object**)_289)[_291] = _265;
goto block28;
block29:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:348
_302 = (frost$core$MutableString*) frostObjectAlloc(sizeof(frost$core$MutableString), (frost$core$Class*) &frost$core$MutableString$class);
_303 = *(&local4);
frost$core$MutableString$init$frost$core$String(_302, _303);
*(&local6) = ((frost$core$MutableString*) NULL);
_306 = ((frost$core$Object*) _302);
frost$core$Frost$ref$frost$core$Object$Q(_306);
_308 = *(&local6);
_309 = ((frost$core$Object*) _308);
frost$core$Frost$unref$frost$core$Object$Q(_309);
*(&local6) = _302;
_312 = ((frost$core$Object*) _302);
frost$core$Frost$unref$frost$core$Object$Q(_312);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:349
_315 = *(&local6);
_316 = ($fn203) param0->$class->vtable[22];
_316(param0, _315);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:350
_319 = *(&local2);
_320 = *(&local3);
_321 = *(&local6);
_322 = ((frost$core$Object*) _321);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Markdown.frost:350:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
_325 = ($fn204) _322->$class->vtable[0];
_326 = _325(_322);
_327 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s205, _326);
_328 = ((frost$core$Object*) _327);
frost$core$Frost$ref$frost$core$Object$Q(_328);
_330 = ((frost$core$Object*) _327);
frost$core$Frost$unref$frost$core$Object$Q(_330);
_332 = ((frost$core$Object*) _326);
frost$core$Frost$unref$frost$core$Object$Q(_332);
_335 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_327, &$s206);
_336 = ((frost$core$Object*) _335);
// begin inline call to method frost.collections.Array.[]:=(index:frost.core.Int, value:frost.collections.Array.T) from Markdown.frost:350:27
_338 = (frost$core$Int) {0u};
_339 = _320.value;
_340 = _338.value;
_341 = _339 >= _340;
_342 = (frost$core$Bit) {_341};
_343 = _342.value;
if (_343) goto block40; else goto block39;
block40:;
_345 = ((frost$collections$CollectionView*) _319);
ITable* $tmp207 = _345->$class->itable;
while ($tmp207->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp207 = $tmp207->next;
}
_346 = $tmp207->methods[0];
_347 = _346(_345);
_348 = _320.value;
_349 = _347.value;
_350 = _348 < _349;
_351 = (frost$core$Bit) {_350};
_352 = _351.value;
if (_352) goto block38; else goto block39;
block39:;
_354 = (frost$core$Int) {79u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s208, _354, &$s209);
abort(); // unreachable
block38:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:80
_358 = &_319->data;
_359 = *_358;
_360 = _359.value;
_361 = frost$core$Int64$init$frost$core$Int(_320);
_362 = _361.value;
_363 = _336;
frost$core$Frost$ref$frost$core$Object$Q(_363);
_365 = ((frost$core$Object**)_360)[_362];
_366 = _365;
frost$core$Frost$unref$frost$core$Object$Q(_366);
((frost$core$Object**)_360)[_362] = _336;
_370 = ((frost$core$Object*) _335);
frost$core$Frost$unref$frost$core$Object$Q(_370);
_372 = ((frost$core$Object*) _327);
frost$core$Frost$unref$frost$core$Object$Q(_372);
_374 = *(&local6);
_375 = ((frost$core$Object*) _374);
frost$core$Frost$unref$frost$core$Object$Q(_375);
*(&local6) = ((frost$core$MutableString*) NULL);
goto block28;
block28:;
_379 = *(&local5);
_380 = ((frost$core$Object*) _379);
frost$core$Frost$unref$frost$core$Object$Q(_380);
*(&local5) = ((frost$core$String*) NULL);
_383 = *(&local4);
_384 = ((frost$core$Object*) _383);
frost$core$Frost$unref$frost$core$Object$Q(_384);
*(&local4) = ((frost$core$String*) NULL);
_388 = *(&local3);
_389 = _172.value;
_390 = _388.value;
_391 = _389 - _390;
_392 = (frost$core$Int) {_391};
if (_174) goto block42; else goto block43;
block42:;
_394 = _392.value;
_395 = _175.value;
_396 = _394 >= _395;
_397 = (frost$core$Bit) {_396};
_398 = _397.value;
if (_398) goto block41; else goto block19;
block43:;
_400 = _392.value;
_401 = _175.value;
_402 = _400 > _401;
_403 = (frost$core$Bit) {_402};
_404 = _403.value;
if (_404) goto block41; else goto block19;
block41:;
_406 = _388.value;
_407 = _175.value;
_408 = _406 + _407;
_409 = (frost$core$Int) {_408};
*(&local3) = _409;
goto block18;
block19:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:353
_413 = (frost$core$Bit) {false};
_414 = frost$core$Range$LTfrost$core$MutableString$Index$Q$GT$init$frost$core$MutableString$Index$Q$frost$core$MutableString$Index$Q$frost$core$Bit(((frost$core$MutableString$Index$nullable) { .nonnull = false }), ((frost$core$MutableString$Index$nullable) { .nonnull = false }), _413);
_415 = *(&local2);
_416 = ((frost$collections$CollectionView*) _415);
ITable* $tmp210 = _416->$class->itable;
while ($tmp210->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp210 = $tmp210->next;
}
_417 = $tmp210->methods[3];
_418 = _417(_416, &$s211);
frost$core$MutableString$$IDXEQ$frost$core$Range$LTfrost$core$MutableString$Index$Q$GT$frost$core$String(param1, _414, _418);
_420 = ((frost$core$Object*) _418);
frost$core$Frost$unref$frost$core$Object$Q(_420);
_422 = *(&local2);
_423 = ((frost$core$Object*) _422);
frost$core$Frost$unref$frost$core$Object$Q(_423);
*(&local2) = ((frost$collections$Array*) NULL);
return;

}
void org$frostlang$frostc$frostdoc$Markdown$doAutoLinks$frost$core$MutableString(void* rawSelf, frost$core$MutableString* param1) {
org$frostlang$frostc$frostdoc$Markdown* param0 = (org$frostlang$frostc$frostdoc$Markdown*) rawSelf;

frost$core$Matcher* local0 = NULL;
frost$core$RegularExpression* local1 = NULL;
frost$core$RegularExpression* _1;
frost$core$Bit _5;
frost$core$Object* _8;
$fn212 _9;
frost$core$String* _10;
frost$core$Matcher* _11;
frost$core$Object* _13;
frost$core$Matcher* _15;
frost$core$Object* _16;
frost$core$Object* _19;
frost$core$Object* _21;
frost$core$Matcher* _27;
frost$core$Bit _28;
bool _29;
frost$core$Matcher* _32;
frost$core$Matcher* _36;
frost$core$Matcher* _38;
frost$core$Object* _39;
frost$core$Object* _44;
frost$core$RegularExpression* _47;
frost$core$Object* _50;
frost$core$RegularExpression* _52;
frost$core$Object* _53;
frost$core$Object* _56;
frost$core$RegularExpression* _59;
org$frostlang$frostc$frostdoc$Markdown$_Closure6* _60;
frost$core$Int8* _62;
frost$core$MutableMethod* _63;
frost$core$Object* _64;
frost$core$Int8** _67;
frost$core$Object** _71;
frost$core$Object* _72;
frost$core$Object** _74;
frost$core$MutableMethod* _77;
frost$core$MutableMethod* _78;
frost$core$Object* _80;
frost$core$Object* _82;
frost$core$RegularExpression* _84;
frost$core$Object* _85;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:357
_1 = (frost$core$RegularExpression*) frostObjectAlloc(sizeof(frost$core$RegularExpression), (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String(_1, &$s213);
// begin inline call to method frost.core.MutableString.replace(search:frost.core.RegularExpression, replacement:frost.core.String) from Markdown.frost:357:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:401
_5 = (frost$core$Bit) {true};
// begin inline call to method frost.core.MutableString.replace(search:frost.core.RegularExpression, replacement:frost.core.String, allowGroupReferences:frost.core.Bit) from MutableString.frost:401:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:406
_8 = ((frost$core$Object*) param1);
_9 = ($fn214) _8->$class->vtable[0];
_10 = _9(_8);
_11 = frost$core$RegularExpression$matcher$frost$core$String$R$frost$core$Matcher(_1, _10);
*(&local0) = ((frost$core$Matcher*) NULL);
_13 = ((frost$core$Object*) _11);
frost$core$Frost$ref$frost$core$Object$Q(_13);
_15 = *(&local0);
_16 = ((frost$core$Object*) _15);
frost$core$Frost$unref$frost$core$Object$Q(_16);
*(&local0) = _11;
_19 = ((frost$core$Object*) _11);
frost$core$Frost$unref$frost$core$Object$Q(_19);
_21 = ((frost$core$Object*) _10);
frost$core$Frost$unref$frost$core$Object$Q(_21);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:407
frost$core$MutableString$clear(param1);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:408
goto block3;
block3:;
_27 = *(&local0);
_28 = frost$core$Matcher$find$R$frost$core$Bit(_27);
_29 = _28.value;
if (_29) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:409
_32 = *(&local0);
frost$core$Matcher$appendReplacement$frost$core$MutableString$frost$core$String$frost$core$Bit(_32, param1, &$s215, _5);
goto block3;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:411
_36 = *(&local0);
frost$core$Matcher$appendTail$frost$core$MutableString(_36, param1);
_38 = *(&local0);
_39 = ((frost$core$Object*) _38);
frost$core$Frost$unref$frost$core$Object$Q(_39);
*(&local0) = ((frost$core$Matcher*) NULL);
_44 = ((frost$core$Object*) _1);
frost$core$Frost$unref$frost$core$Object$Q(_44);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:358
_47 = (frost$core$RegularExpression*) frostObjectAlloc(sizeof(frost$core$RegularExpression), (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String(_47, &$s216);
*(&local1) = ((frost$core$RegularExpression*) NULL);
_50 = ((frost$core$Object*) _47);
frost$core$Frost$ref$frost$core$Object$Q(_50);
_52 = *(&local1);
_53 = ((frost$core$Object*) _52);
frost$core$Frost$unref$frost$core$Object$Q(_53);
*(&local1) = _47;
_56 = ((frost$core$Object*) _47);
frost$core$Frost$unref$frost$core$Object$Q(_56);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:359
_59 = *(&local1);
_60 = (org$frostlang$frostc$frostdoc$Markdown$_Closure6*) frostObjectAlloc(sizeof(org$frostlang$frostc$frostdoc$Markdown$_Closure6), (frost$core$Class*) &org$frostlang$frostc$frostdoc$Markdown$_Closure6$class);
org$frostlang$frostc$frostdoc$Markdown$_Closure6$init$org$frostlang$frostc$frostdoc$Markdown(_60, param0);
_62 = ((frost$core$Int8*) org$frostlang$frostc$frostdoc$Markdown$_Closure6$$anonymous5$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$String);
_63 = (frost$core$MutableMethod*) frostObjectAlloc(sizeof(frost$core$MutableMethod), (frost$core$Class*) &frost$core$MutableMethod$class);
_64 = ((frost$core$Object*) _60);
// begin inline call to frost.core.MutableMethod.init(pointer:frost.unsafe.Pointer<frost.core.Int8>, target:frost.core.Object?) from Markdown.frost:359:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableMethod.frost:32
_67 = &_63->pointer;
*_67 = _62;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableMethod.frost:33
frost$core$Frost$ref$frost$core$Object$Q(_64);
_71 = &_63->target;
_72 = *_71;
frost$core$Frost$unref$frost$core$Object$Q(_72);
_74 = &_63->target;
*_74 = _64;
_77 = _63;
_78 = _77;
frost$core$MutableString$replace$frost$core$RegularExpression$$LPfrost$collections$ListView$LTfrost$core$String$Q$GT$RP$EQ$GT$LPfrost$core$Object$RP(param1, _59, _78);
_80 = ((frost$core$Object*) _63);
frost$core$Frost$unref$frost$core$Object$Q(_80);
_82 = ((frost$core$Object*) _60);
frost$core$Frost$unref$frost$core$Object$Q(_82);
_84 = *(&local1);
_85 = ((frost$core$Object*) _84);
frost$core$Frost$unref$frost$core$Object$Q(_85);
*(&local1) = ((frost$core$RegularExpression*) NULL);
return;

}
void org$frostlang$frostc$frostdoc$Markdown$unescapeSpecialChars$frost$core$MutableString(void* rawSelf, frost$core$MutableString* param1) {
org$frostlang$frostc$frostdoc$Markdown* param0 = (org$frostlang$frostc$frostdoc$Markdown*) rawSelf;

frost$core$String* local0 = NULL;
frost$core$String* local1 = NULL;
org$frostlang$frostc$frostdoc$Protector** _1;
org$frostlang$frostc$frostdoc$Protector* _2;
frost$collections$HashMap** _3;
frost$collections$HashMap* _4;
frost$collections$MapView* _5;
$fn217 _6;
frost$collections$Iterator* _7;
$fn218 _9;
frost$core$Bit _10;
bool _11;
$fn219 _14;
frost$core$Object* _15;
frost$core$String* _16;
frost$core$Object* _17;
frost$core$String* _19;
frost$core$Object* _20;
org$frostlang$frostc$frostdoc$Protector** _24;
org$frostlang$frostc$frostdoc$Protector* _25;
frost$core$String* _26;
$fn220 _27;
frost$core$String* _28;
frost$core$Object* _30;
frost$core$String* _32;
frost$core$Object* _33;
frost$core$Object* _36;
frost$core$String* _39;
frost$core$String* _40;
bool _41;
frost$core$Bit _42;
bool _43;
frost$core$Int _45;
frost$core$String* _48;
frost$core$String* _50;
frost$core$Object* _51;
frost$core$Object* _54;
frost$core$String* _56;
frost$core$Object* _57;
frost$core$Object* _61;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:370
_1 = &param0->charProtector;
_2 = *_1;
_3 = &_2->decodeMap;
_4 = *_3;
_5 = ((frost$collections$MapView*) _4);
ITable* $tmp221 = _5->$class->itable;
while ($tmp221->$class != (frost$core$Class*) &frost$collections$MapView$class) {
    $tmp221 = $tmp221->next;
}
_6 = $tmp221->methods[4];
_7 = _6(_5);
goto block1;
block1:;
ITable* $tmp222 = _7->$class->itable;
while ($tmp222->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp222 = $tmp222->next;
}
_9 = $tmp222->methods[0];
_10 = _9(_7);
_11 = _10.value;
if (_11) goto block3; else goto block2;
block2:;
*(&local0) = ((frost$core$String*) NULL);
ITable* $tmp223 = _7->$class->itable;
while ($tmp223->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp223 = $tmp223->next;
}
_14 = $tmp223->methods[1];
_15 = _14(_7);
_16 = ((frost$core$String*) _15);
_17 = ((frost$core$Object*) _16);
frost$core$Frost$ref$frost$core$Object$Q(_17);
_19 = *(&local0);
_20 = ((frost$core$Object*) _19);
frost$core$Frost$unref$frost$core$Object$Q(_20);
*(&local0) = _16;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:371
_24 = &param0->charProtector;
_25 = *_24;
_26 = *(&local0);
_27 = ($fn224) _25->$class->vtable[3];
_28 = _27(_25, _26);
*(&local1) = ((frost$core$String*) NULL);
_30 = ((frost$core$Object*) _28);
frost$core$Frost$ref$frost$core$Object$Q(_30);
_32 = *(&local1);
_33 = ((frost$core$Object*) _32);
frost$core$Frost$unref$frost$core$Object$Q(_33);
*(&local1) = _28;
_36 = ((frost$core$Object*) _28);
frost$core$Frost$unref$frost$core$Object$Q(_36);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:372
_39 = *(&local0);
_40 = *(&local1);
_41 = _40 != NULL;
_42 = (frost$core$Bit) {_41};
_43 = _42.value;
if (_43) goto block4; else goto block5;
block5:;
_45 = (frost$core$Int) {372u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s225, _45, &$s226);
abort(); // unreachable
block4:;
_48 = _40;
frost$core$MutableString$replace$frost$core$String$frost$core$String(param1, _39, _48);
_50 = *(&local1);
_51 = ((frost$core$Object*) _50);
frost$core$Frost$unref$frost$core$Object$Q(_51);
*(&local1) = ((frost$core$String*) NULL);
_54 = _15;
frost$core$Frost$unref$frost$core$Object$Q(_54);
_56 = *(&local0);
_57 = ((frost$core$Object*) _56);
frost$core$Frost$unref$frost$core$Object$Q(_57);
*(&local0) = ((frost$core$String*) NULL);
goto block1;
block3:;
_61 = ((frost$core$Object*) _7);
frost$core$Frost$unref$frost$core$Object$Q(_61);
return;

}
frost$core$String* org$frostlang$frostc$frostdoc$Markdown$encodeEmail$frost$core$String$R$frost$core$String(void* rawSelf, frost$core$String* param1) {
org$frostlang$frostc$frostdoc$Markdown* param0 = (org$frostlang$frostc$frostdoc$Markdown*) rawSelf;

frost$core$MutableString* local0 = NULL;
frost$core$Char32 local1;
frost$core$Real64 local2;
frost$core$Int32 local3;
frost$core$MutableString* _1;
frost$core$Object* _4;
frost$core$MutableString* _6;
frost$core$Object* _7;
frost$core$Object* _10;
frost$collections$Iterable* _13;
$fn227 _14;
frost$collections$Iterator* _15;
$fn228 _17;
frost$core$Bit _18;
bool _19;
$fn229 _21;
frost$core$Object* _22;
frost$core$Char32 _23;
frost$math$Random** _26;
frost$math$Random* _27;
$fn230 _28;
frost$core$Real64 _29;
frost$core$Real64 _32;
frost$core$Real64 _33;
double _34;
double _35;
bool _36;
frost$core$Bit _37;
bool _38;
frost$core$MutableString* _41;
frost$core$MutableString* _44;
frost$core$Char32 _45;
int32_t _48;
frost$core$Int32 _49;
frost$core$Object* _51;
$fn231 _54;
frost$core$String* _55;
frost$core$Object* _57;
frost$core$Object* _60;
frost$core$MutableString* _63;
frost$core$Real64 _67;
frost$core$Real64 _68;
double _69;
double _70;
bool _71;
frost$core$Bit _72;
bool _73;
frost$core$MutableString* _76;
frost$core$MutableString* _79;
frost$core$Char32 _80;
int32_t _83;
frost$core$Int32 _84;
int32_t _88;
bool _89;
frost$core$Bit _90;
frost$core$Int32 _93;
int32_t _94;
int32_t _95;
bool _96;
frost$core$Bit _97;
bool _98;
frost$core$Int32 _101;
frost$core$Int32 _107;
int32_t _110;
uint64_t _111;
frost$core$UInt64 _112;
frost$core$UInt64 _114;
frost$core$String* _115;
frost$core$Object* _116;
frost$core$Object* _118;
frost$core$Object* _122;
frost$core$MutableString* _125;
frost$core$MutableString* _130;
frost$core$Char32 _131;
frost$core$Object* _135;
frost$core$Object* _138;
frost$core$MutableString* _141;
frost$core$Object* _142;
$fn232 _143;
frost$core$String* _144;
frost$core$Object* _145;
frost$core$Object* _147;
frost$core$MutableString* _149;
frost$core$Object* _150;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:377
_1 = (frost$core$MutableString*) frostObjectAlloc(sizeof(frost$core$MutableString), (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init(_1);
*(&local0) = ((frost$core$MutableString*) NULL);
_4 = ((frost$core$Object*) _1);
frost$core$Frost$ref$frost$core$Object$Q(_4);
_6 = *(&local0);
_7 = ((frost$core$Object*) _6);
frost$core$Frost$unref$frost$core$Object$Q(_7);
*(&local0) = _1;
_10 = ((frost$core$Object*) _1);
frost$core$Frost$unref$frost$core$Object$Q(_10);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:378
_13 = ((frost$collections$Iterable*) param1);
ITable* $tmp233 = _13->$class->itable;
while ($tmp233->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp233 = $tmp233->next;
}
_14 = $tmp233->methods[0];
_15 = _14(_13);
goto block1;
block1:;
ITable* $tmp234 = _15->$class->itable;
while ($tmp234->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp234 = $tmp234->next;
}
_17 = $tmp234->methods[0];
_18 = _17(_15);
_19 = _18.value;
if (_19) goto block3; else goto block2;
block2:;
ITable* $tmp235 = _15->$class->itable;
while ($tmp235->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp235 = $tmp235->next;
}
_21 = $tmp235->methods[1];
_22 = _21(_15);
_23 = ((frost$core$Char32$wrapper*) _22)->value;
*(&local1) = _23;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:380
_26 = &param0->random;
_27 = *_26;
ITable* $tmp236 = _27->$class->itable;
while ($tmp236->$class != (frost$core$Class*) &frost$math$Random$class) {
    $tmp236 = $tmp236->next;
}
_28 = $tmp236->methods[5];
_29 = _28(_27);
*(&local2) = _29;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:381
_32 = *(&local2);
_33 = (frost$core$Real64) {0.45};
_34 = _32.value;
_35 = _33.value;
_36 = _34 < _35;
_37 = (frost$core$Bit) {_36};
_38 = _37.value;
if (_38) goto block4; else goto block6;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:382
_41 = *(&local0);
frost$core$MutableString$append$frost$core$String(_41, &$s237);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:383
_44 = *(&local0);
_45 = *(&local1);
// begin inline call to function frost.core.Char32.get_asInt32():frost.core.Int32 from Markdown.frost:383:33
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:106
_48 = _45.value;
_49 = (frost$core$Int32) {_48};
frost$core$Int32$wrapper* $tmp238;
$tmp238 = (frost$core$Int32$wrapper*) frostObjectAlloc(sizeof(frost$core$Int32$wrapper), (frost$core$Class*) &frost$core$Int32$wrapperclass);
$tmp238->value = _49;
_51 = ((frost$core$Object*) $tmp238);
// begin inline call to method frost.core.MutableString.append(o:frost.core.Object) from Markdown.frost:383:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:150
_54 = ($fn239) _51->$class->vtable[0];
_55 = _54(_51);
frost$core$MutableString$append$frost$core$String(_44, _55);
_57 = ((frost$core$Object*) _55);
frost$core$Frost$unref$frost$core$Object$Q(_57);
_60 = _51;
frost$core$Frost$unref$frost$core$Object$Q(_60);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:384
_63 = *(&local0);
frost$core$MutableString$append$frost$core$String(_63, &$s240);
goto block5;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:386
_67 = *(&local2);
_68 = (frost$core$Real64) {0.9};
_69 = _67.value;
_70 = _68.value;
_71 = _69 < _70;
_72 = (frost$core$Bit) {_71};
_73 = _72.value;
if (_73) goto block9; else goto block11;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:387
_76 = *(&local0);
frost$core$MutableString$append$frost$core$String(_76, &$s241);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:388
_79 = *(&local0);
_80 = *(&local1);
// begin inline call to function frost.core.Char32.get_asInt32():frost.core.Int32 from Markdown.frost:388:33
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:106
_83 = _80.value;
_84 = (frost$core$Int32) {_83};
// begin inline call to function frost.core.Int32.format(fmt:frost.core.String):frost.core.String from Markdown.frost:388:48
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:1058
_88 = _84.value;
_89 = _88 < 0u;
_90 = (frost$core$Bit) {_89};
// begin inline call to function frost.core.Int32.get_abs():frost.core.Int32 from Int32.frost:1058:40
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:730
_93 = (frost$core$Int32) {0u};
_94 = _84.value;
_95 = _93.value;
_96 = _94 < _95;
_97 = (frost$core$Bit) {_96};
_98 = _97.value;
if (_98) goto block15; else goto block16;
block15:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:731
_101 = frost$core$Int32$$SUB$R$frost$core$Int32(_84);
*(&local3) = _101;
goto block14;
block16:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:733
*(&local3) = _84;
goto block14;
block14:;
_107 = *(&local3);
// begin inline call to function frost.core.Int32.get_asUInt64():frost.core.UInt64 from Int32.frost:1058:43
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:1008
_110 = _107.value;
_111 = ((uint64_t) _110);
_112 = (frost$core$UInt64) {_111};
_114 = (frost$core$UInt64) {4294967295u};
_115 = frost$core$Frost$format$frost$core$Bit$frost$core$UInt64$frost$core$UInt64$frost$core$String$R$frost$core$String(_90, _112, _114, &$s242);
_116 = ((frost$core$Object*) _115);
frost$core$Frost$ref$frost$core$Object$Q(_116);
_118 = ((frost$core$Object*) _115);
frost$core$Frost$unref$frost$core$Object$Q(_118);
frost$core$MutableString$append$frost$core$String(_79, _115);
_122 = ((frost$core$Object*) _115);
frost$core$Frost$unref$frost$core$Object$Q(_122);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:389
_125 = *(&local0);
frost$core$MutableString$append$frost$core$String(_125, &$s243);
goto block10;
block11:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:392
_130 = *(&local0);
_131 = *(&local1);
frost$core$MutableString$append$frost$core$Char32(_130, _131);
goto block10;
block10:;
goto block5;
block5:;
_135 = _22;
frost$core$Frost$unref$frost$core$Object$Q(_135);
goto block1;
block3:;
_138 = ((frost$core$Object*) _15);
frost$core$Frost$unref$frost$core$Object$Q(_138);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:395
_141 = *(&local0);
_142 = ((frost$core$Object*) _141);
_143 = ($fn244) _142->$class->vtable[0];
_144 = _143(_142);
_145 = ((frost$core$Object*) _144);
frost$core$Frost$ref$frost$core$Object$Q(_145);
_147 = ((frost$core$Object*) _144);
frost$core$Frost$unref$frost$core$Object$Q(_147);
_149 = *(&local0);
_150 = ((frost$core$Object*) _149);
frost$core$Frost$unref$frost$core$Object$Q(_150);
*(&local0) = ((frost$core$MutableString*) NULL);
return _144;

}
void org$frostlang$frostc$frostdoc$Markdown$doBlockQuotes$frost$core$MutableString(void* rawSelf, frost$core$MutableString* param1) {
org$frostlang$frostc$frostdoc$Markdown* param0 = (org$frostlang$frostc$frostdoc$Markdown*) rawSelf;

frost$core$RegularExpression* local0 = NULL;
frost$core$RegularExpression* _1;
frost$core$String* _2;
frost$core$String* _3;
frost$core$String* _4;
frost$core$String* _5;
frost$core$String* _6;
frost$core$String* _7;
frost$core$Int _8;
frost$core$Object* _11;
frost$core$RegularExpression* _13;
frost$core$Object* _14;
frost$core$Object* _17;
frost$core$Object* _19;
frost$core$Object* _21;
frost$core$Object* _23;
frost$core$Object* _25;
frost$core$Object* _27;
frost$core$Object* _29;
frost$core$RegularExpression* _32;
org$frostlang$frostc$frostdoc$Markdown$_Closure9* _33;
frost$core$Int8* _35;
frost$core$MutableMethod* _36;
frost$core$Object* _37;
frost$core$Int8** _40;
frost$core$Object** _44;
frost$core$Object* _45;
frost$core$Object** _47;
frost$core$MutableMethod* _50;
frost$core$Object* _52;
frost$core$Object* _54;
frost$core$RegularExpression* _56;
frost$core$Object* _57;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:399
_1 = (frost$core$RegularExpression*) frostObjectAlloc(sizeof(frost$core$RegularExpression), (frost$core$Class*) &frost$core$RegularExpression$class);
_2 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s245, &$s246);
_3 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_2, &$s247);
_4 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_3, &$s248);
_5 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_4, &$s249);
_6 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_5, &$s250);
_7 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_6, &$s251);
_8 = (frost$core$Int) {1u};
frost$core$RegularExpression$init$frost$core$String$frost$core$Int(_1, _7, _8);
*(&local0) = ((frost$core$RegularExpression*) NULL);
_11 = ((frost$core$Object*) _1);
frost$core$Frost$ref$frost$core$Object$Q(_11);
_13 = *(&local0);
_14 = ((frost$core$Object*) _13);
frost$core$Frost$unref$frost$core$Object$Q(_14);
*(&local0) = _1;
_17 = ((frost$core$Object*) _7);
frost$core$Frost$unref$frost$core$Object$Q(_17);
_19 = ((frost$core$Object*) _6);
frost$core$Frost$unref$frost$core$Object$Q(_19);
_21 = ((frost$core$Object*) _5);
frost$core$Frost$unref$frost$core$Object$Q(_21);
_23 = ((frost$core$Object*) _4);
frost$core$Frost$unref$frost$core$Object$Q(_23);
_25 = ((frost$core$Object*) _3);
frost$core$Frost$unref$frost$core$Object$Q(_25);
_27 = ((frost$core$Object*) _2);
frost$core$Frost$unref$frost$core$Object$Q(_27);
_29 = ((frost$core$Object*) _1);
frost$core$Frost$unref$frost$core$Object$Q(_29);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:408
_32 = *(&local0);
_33 = (org$frostlang$frostc$frostdoc$Markdown$_Closure9*) frostObjectAlloc(sizeof(org$frostlang$frostc$frostdoc$Markdown$_Closure9), (frost$core$Class*) &org$frostlang$frostc$frostdoc$Markdown$_Closure9$class);
org$frostlang$frostc$frostdoc$Markdown$_Closure9$init$org$frostlang$frostc$frostdoc$Markdown(_33, param0);
_35 = ((frost$core$Int8*) org$frostlang$frostc$frostdoc$Markdown$_Closure9$$anonymous7$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$Object);
_36 = (frost$core$MutableMethod*) frostObjectAlloc(sizeof(frost$core$MutableMethod), (frost$core$Class*) &frost$core$MutableMethod$class);
_37 = ((frost$core$Object*) _33);
// begin inline call to frost.core.MutableMethod.init(pointer:frost.unsafe.Pointer<frost.core.Int8>, target:frost.core.Object?) from Markdown.frost:408:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableMethod.frost:32
_40 = &_36->pointer;
*_40 = _35;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableMethod.frost:33
frost$core$Frost$ref$frost$core$Object$Q(_37);
_44 = &_36->target;
_45 = *_44;
frost$core$Frost$unref$frost$core$Object$Q(_45);
_47 = &_36->target;
*_47 = _37;
_50 = _36;
frost$core$MutableString$replace$frost$core$RegularExpression$$LPfrost$collections$ListView$LTfrost$core$String$Q$GT$RP$EQ$GT$LPfrost$core$Object$RP(param1, _32, _50);
_52 = ((frost$core$Object*) _36);
frost$core$Frost$unref$frost$core$Object$Q(_52);
_54 = ((frost$core$Object*) _33);
frost$core$Frost$unref$frost$core$Object$Q(_54);
_56 = *(&local0);
_57 = ((frost$core$Object*) _56);
frost$core$Frost$unref$frost$core$Object$Q(_57);
*(&local0) = ((frost$core$RegularExpression*) NULL);
return;

}
frost$core$String* org$frostlang$frostc$frostdoc$Markdown$$anonymous10$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$String(frost$collections$ListView* param0) {

frost$core$String* local0 = NULL;
frost$core$Int local1;
frost$core$MutableString* local2 = NULL;
frost$core$Int _1;
$fn252 _2;
frost$core$Object* _3;
frost$core$String* _4;
frost$core$Object* _6;
frost$core$String* _8;
frost$core$Object* _9;
frost$core$Object* _12;
frost$core$String* _15;
bool _16;
frost$core$Bit _17;
bool _18;
frost$core$Int _20;
frost$core$String* _23;
frost$collections$Iterable* _26;
$fn253 _27;
frost$collections$Iterator* _28;
$fn254 _29;
frost$core$Int _30;
frost$core$Object* _31;
frost$core$MutableString* _36;
frost$core$String* _37;
bool _38;
frost$core$Bit _39;
bool _40;
frost$core$Int _42;
frost$core$String* _45;
frost$core$Object* _48;
frost$core$MutableString* _50;
frost$core$Object* _51;
frost$core$Object* _54;
frost$core$MutableString* _59;
frost$core$Int _62;
frost$core$Int _63;
int64_t _64;
int64_t _65;
int64_t _66;
frost$core$Int _67;
frost$core$Int _70;
frost$core$Int _71;
int64_t _74;
int64_t _75;
int64_t _76;
frost$core$Int _77;
frost$core$Int _79;
int64_t _80;
int64_t _81;
bool _82;
frost$core$Bit _83;
bool _84;
frost$core$MutableString* _87;
frost$core$Object* _88;
$fn255 _89;
frost$core$String* _90;
frost$core$Object* _91;
frost$core$Object* _93;
frost$core$MutableString* _95;
frost$core$Object* _96;
frost$core$String* _99;
frost$core$Object* _100;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:423
_1 = (frost$core$Int) {1u};
ITable* $tmp256 = param0->$class->itable;
while ($tmp256->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp256 = $tmp256->next;
}
_2 = $tmp256->methods[0];
_3 = _2(param0, _1);
_4 = ((frost$core$String*) _3);
*(&local0) = ((frost$core$String*) NULL);
_6 = ((frost$core$Object*) _4);
frost$core$Frost$ref$frost$core$Object$Q(_6);
_8 = *(&local0);
_9 = ((frost$core$Object*) _8);
frost$core$Frost$unref$frost$core$Object$Q(_9);
*(&local0) = _4;
_12 = _3;
frost$core$Frost$unref$frost$core$Object$Q(_12);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:424
_15 = *(&local0);
_16 = _15 != NULL;
_17 = (frost$core$Bit) {_16};
_18 = _17.value;
if (_18) goto block1; else goto block2;
block2:;
_20 = (frost$core$Int) {424u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s257, _20, &$s258);
abort(); // unreachable
block1:;
_23 = _15;
// begin inline call to function frost.core.String.get_length():frost.core.Int from Markdown.frost:424:35
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:485
_26 = ((frost$collections$Iterable*) _23);
ITable* $tmp259 = _26->$class->itable;
while ($tmp259->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp259 = $tmp259->next;
}
_27 = $tmp259->methods[0];
_28 = _27(_26);
ITable* $tmp260 = _28->$class->itable;
while ($tmp260->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp260 = $tmp260->next;
}
_29 = $tmp260->methods[2];
_30 = _29(_28);
_31 = ((frost$core$Object*) _28);
frost$core$Frost$unref$frost$core$Object$Q(_31);
*(&local1) = _30;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:425
_36 = (frost$core$MutableString*) frostObjectAlloc(sizeof(frost$core$MutableString), (frost$core$Class*) &frost$core$MutableString$class);
_37 = *(&local0);
_38 = _37 != NULL;
_39 = (frost$core$Bit) {_38};
_40 = _39.value;
if (_40) goto block4; else goto block5;
block5:;
_42 = (frost$core$Int) {425u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s261, _42, &$s262);
abort(); // unreachable
block4:;
_45 = _37;
frost$core$MutableString$init$frost$core$String(_36, _45);
*(&local2) = ((frost$core$MutableString*) NULL);
_48 = ((frost$core$Object*) _36);
frost$core$Frost$ref$frost$core$Object$Q(_48);
_50 = *(&local2);
_51 = ((frost$core$Object*) _50);
frost$core$Frost$unref$frost$core$Object$Q(_51);
*(&local2) = _36;
_54 = ((frost$core$Object*) _36);
frost$core$Frost$unref$frost$core$Object$Q(_54);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:426
goto block6;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:427
_59 = *(&local2);
frost$core$MutableString$append$frost$core$String(_59, &$s263);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:428
_62 = *(&local1);
_63 = (frost$core$Int) {1u};
_64 = _62.value;
_65 = _63.value;
_66 = _64 + _65;
_67 = (frost$core$Int) {_66};
*(&local1) = _67;
_70 = *(&local1);
_71 = (frost$core$Int) {4u};
// begin inline call to function frost.core.Int.%(other:frost.core.Int):frost.core.Int from Markdown.frost:430:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:198
_74 = _70.value;
_75 = _71.value;
_76 = _74 % _75;
_77 = (frost$core$Int) {_76};
_79 = (frost$core$Int) {0u};
_80 = _77.value;
_81 = _79.value;
_82 = _80 != _81;
_83 = (frost$core$Bit) {_82};
_84 = _83.value;
if (_84) goto block6; else goto block8;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:431
_87 = *(&local2);
_88 = ((frost$core$Object*) _87);
_89 = ($fn264) _88->$class->vtable[0];
_90 = _89(_88);
_91 = ((frost$core$Object*) _90);
frost$core$Frost$ref$frost$core$Object$Q(_91);
_93 = ((frost$core$Object*) _90);
frost$core$Frost$unref$frost$core$Object$Q(_93);
_95 = *(&local2);
_96 = ((frost$core$Object*) _95);
frost$core$Frost$unref$frost$core$Object$Q(_96);
*(&local2) = ((frost$core$MutableString*) NULL);
_99 = *(&local0);
_100 = ((frost$core$Object*) _99);
frost$core$Frost$unref$frost$core$Object$Q(_100);
*(&local0) = ((frost$core$String*) NULL);
return _90;

}
void org$frostlang$frostc$frostdoc$Markdown$detabify$frost$core$MutableString(void* rawSelf, frost$core$MutableString* param1) {
org$frostlang$frostc$frostdoc$Markdown* param0 = (org$frostlang$frostc$frostdoc$Markdown*) rawSelf;

frost$core$RegularExpression* _1;
frost$core$Int8* _3;
frost$core$Method* _4;
frost$core$Int8** _7;
frost$core$Object* _10;
frost$core$Immutable** _12;
frost$core$Immutable* _13;
frost$core$Object* _14;
frost$core$Immutable** _16;
frost$core$Method* _19;
frost$core$MutableMethod* _20;
frost$core$Object* _22;
frost$core$Object* _24;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:422
_1 = (frost$core$RegularExpression*) frostObjectAlloc(sizeof(frost$core$RegularExpression), (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String(_1, &$s265);
_3 = ((frost$core$Int8*) org$frostlang$frostc$frostdoc$Markdown$$anonymous10$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$String);
_4 = (frost$core$Method*) frostObjectAlloc(sizeof(frost$core$Method), (frost$core$Class*) &frost$core$Method$class);
// begin inline call to frost.core.Method.init(pointer:frost.unsafe.Pointer<frost.core.Int8>, target:frost.core.Immutable?) from Markdown.frost:422:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Method.frost:37
_7 = &_4->pointer;
*_7 = _3;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Method.frost:38
_10 = ((frost$core$Object*) ((frost$core$Immutable*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_10);
_12 = &_4->target;
_13 = *_12;
_14 = ((frost$core$Object*) _13);
frost$core$Frost$unref$frost$core$Object$Q(_14);
_16 = &_4->target;
*_16 = ((frost$core$Immutable*) NULL);
_19 = _4;
_20 = ((frost$core$MutableMethod*) _19);
frost$core$MutableString$replace$frost$core$RegularExpression$$LPfrost$collections$ListView$LTfrost$core$String$Q$GT$RP$EQ$GT$LPfrost$core$Object$RP(param1, _1, _20);
_22 = ((frost$core$Object*) _4);
frost$core$Frost$unref$frost$core$Object$Q(_22);
_24 = ((frost$core$Object*) _1);
frost$core$Frost$unref$frost$core$Object$Q(_24);
return;

}
void org$frostlang$frostc$frostdoc$Markdown$outdent$frost$core$MutableString(frost$core$MutableString* param0) {

frost$core$Matcher* local0 = NULL;
frost$core$RegularExpression* _1;
frost$core$Bit _5;
frost$core$Object* _8;
$fn266 _9;
frost$core$String* _10;
frost$core$Matcher* _11;
frost$core$Object* _13;
frost$core$Matcher* _15;
frost$core$Object* _16;
frost$core$Object* _19;
frost$core$Object* _21;
frost$core$Matcher* _27;
frost$core$Bit _28;
bool _29;
frost$core$Matcher* _32;
frost$core$Matcher* _36;
frost$core$Matcher* _38;
frost$core$Object* _39;
frost$core$Object* _44;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:437
_1 = (frost$core$RegularExpression*) frostObjectAlloc(sizeof(frost$core$RegularExpression), (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String(_1, &$s267);
// begin inline call to method frost.core.MutableString.replace(search:frost.core.RegularExpression, replacement:frost.core.String) from Markdown.frost:437:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:401
_5 = (frost$core$Bit) {true};
// begin inline call to method frost.core.MutableString.replace(search:frost.core.RegularExpression, replacement:frost.core.String, allowGroupReferences:frost.core.Bit) from MutableString.frost:401:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:406
_8 = ((frost$core$Object*) param0);
_9 = ($fn268) _8->$class->vtable[0];
_10 = _9(_8);
_11 = frost$core$RegularExpression$matcher$frost$core$String$R$frost$core$Matcher(_1, _10);
*(&local0) = ((frost$core$Matcher*) NULL);
_13 = ((frost$core$Object*) _11);
frost$core$Frost$ref$frost$core$Object$Q(_13);
_15 = *(&local0);
_16 = ((frost$core$Object*) _15);
frost$core$Frost$unref$frost$core$Object$Q(_16);
*(&local0) = _11;
_19 = ((frost$core$Object*) _11);
frost$core$Frost$unref$frost$core$Object$Q(_19);
_21 = ((frost$core$Object*) _10);
frost$core$Frost$unref$frost$core$Object$Q(_21);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:407
frost$core$MutableString$clear(param0);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:408
goto block3;
block3:;
_27 = *(&local0);
_28 = frost$core$Matcher$find$R$frost$core$Bit(_27);
_29 = _28.value;
if (_29) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:409
_32 = *(&local0);
frost$core$Matcher$appendReplacement$frost$core$MutableString$frost$core$String$frost$core$Bit(_32, param0, &$s269, _5);
goto block3;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:411
_36 = *(&local0);
frost$core$Matcher$appendTail$frost$core$MutableString(_36, param0);
_38 = *(&local0);
_39 = ((frost$core$Object*) _38);
frost$core$Frost$unref$frost$core$Object$Q(_39);
*(&local0) = ((frost$core$Matcher*) NULL);
_44 = ((frost$core$Object*) _1);
frost$core$Frost$unref$frost$core$Object$Q(_44);
return;

}
void org$frostlang$frostc$frostdoc$Markdown$doCodeBlocks$frost$core$MutableString(void* rawSelf, frost$core$MutableString* param1) {
org$frostlang$frostc$frostdoc$Markdown* param0 = (org$frostlang$frostc$frostdoc$Markdown*) rawSelf;

frost$core$RegularExpression* local0 = NULL;
org$frostlang$frostc$frostdoc$Markdown$CodeReplacer* local1 = NULL;
frost$core$RegularExpression* _1;
frost$core$String* _2;
frost$core$String* _3;
frost$core$String* _4;
frost$core$String* _5;
frost$core$String* _6;
frost$core$Int _7;
frost$core$Object* _10;
frost$core$RegularExpression* _12;
frost$core$Object* _13;
frost$core$Object* _16;
frost$core$Object* _18;
frost$core$Object* _20;
frost$core$Object* _22;
frost$core$Object* _24;
frost$core$Object* _26;
frost$core$RegularExpression* _29;
org$frostlang$frostc$frostdoc$Markdown$CodeReplacer* _30;
frost$core$Object* _33;
org$frostlang$frostc$frostdoc$Markdown$CodeReplacer* _35;
frost$core$Object* _36;
org$frostlang$frostc$frostdoc$Markdown$_Closure12* _39;
org$frostlang$frostc$frostdoc$Markdown$CodeReplacer* _40;
frost$core$Int8* _42;
frost$core$MutableMethod* _43;
frost$core$Object* _44;
frost$core$Int8** _47;
frost$core$Object** _51;
frost$core$Object* _52;
frost$core$Object** _54;
frost$core$MutableMethod* _57;
frost$core$MutableMethod* _58;
frost$core$Object* _60;
frost$core$Object* _62;
org$frostlang$frostc$frostdoc$Markdown$CodeReplacer* _64;
frost$core$Object* _65;
frost$core$Object* _68;
frost$core$RegularExpression* _70;
frost$core$Object* _71;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:493
_1 = (frost$core$RegularExpression*) frostObjectAlloc(sizeof(frost$core$RegularExpression), (frost$core$Class*) &frost$core$RegularExpression$class);
_2 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s270, &$s271);
_3 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_2, &$s272);
_4 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_3, &$s273);
_5 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_4, &$s274);
_6 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_5, &$s275);
_7 = (frost$core$Int) {1u};
frost$core$RegularExpression$init$frost$core$String$frost$core$Int(_1, _6, _7);
*(&local0) = ((frost$core$RegularExpression*) NULL);
_10 = ((frost$core$Object*) _1);
frost$core$Frost$ref$frost$core$Object$Q(_10);
_12 = *(&local0);
_13 = ((frost$core$Object*) _12);
frost$core$Frost$unref$frost$core$Object$Q(_13);
*(&local0) = _1;
_16 = ((frost$core$Object*) _6);
frost$core$Frost$unref$frost$core$Object$Q(_16);
_18 = ((frost$core$Object*) _5);
frost$core$Frost$unref$frost$core$Object$Q(_18);
_20 = ((frost$core$Object*) _4);
frost$core$Frost$unref$frost$core$Object$Q(_20);
_22 = ((frost$core$Object*) _3);
frost$core$Frost$unref$frost$core$Object$Q(_22);
_24 = ((frost$core$Object*) _2);
frost$core$Frost$unref$frost$core$Object$Q(_24);
_26 = ((frost$core$Object*) _1);
frost$core$Frost$unref$frost$core$Object$Q(_26);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:501
_29 = *(&local0);
_30 = (org$frostlang$frostc$frostdoc$Markdown$CodeReplacer*) frostObjectAlloc(sizeof(org$frostlang$frostc$frostdoc$Markdown$CodeReplacer), (frost$core$Class*) &org$frostlang$frostc$frostdoc$Markdown$CodeReplacer$class);
org$frostlang$frostc$frostdoc$Markdown$CodeReplacer$init$org$frostlang$frostc$frostdoc$Markdown(_30, param0);
*(&local1) = ((org$frostlang$frostc$frostdoc$Markdown$CodeReplacer*) NULL);
_33 = ((frost$core$Object*) _30);
frost$core$Frost$ref$frost$core$Object$Q(_33);
_35 = *(&local1);
_36 = ((frost$core$Object*) _35);
frost$core$Frost$unref$frost$core$Object$Q(_36);
*(&local1) = _30;
_39 = (org$frostlang$frostc$frostdoc$Markdown$_Closure12*) frostObjectAlloc(sizeof(org$frostlang$frostc$frostdoc$Markdown$_Closure12), (frost$core$Class*) &org$frostlang$frostc$frostdoc$Markdown$_Closure12$class);
_40 = *(&local1);
org$frostlang$frostc$frostdoc$Markdown$_Closure12$init$org$frostlang$frostc$frostdoc$Markdown$CodeReplacer(_39, _40);
_42 = ((frost$core$Int8*) org$frostlang$frostc$frostdoc$Markdown$_Closure12$$anonymous11$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$String);
_43 = (frost$core$MutableMethod*) frostObjectAlloc(sizeof(frost$core$MutableMethod), (frost$core$Class*) &frost$core$MutableMethod$class);
_44 = ((frost$core$Object*) _39);
// begin inline call to frost.core.MutableMethod.init(pointer:frost.unsafe.Pointer<frost.core.Int8>, target:frost.core.Object?) from Markdown.frost:501:45
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableMethod.frost:32
_47 = &_43->pointer;
*_47 = _42;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableMethod.frost:33
frost$core$Frost$ref$frost$core$Object$Q(_44);
_51 = &_43->target;
_52 = *_51;
frost$core$Frost$unref$frost$core$Object$Q(_52);
_54 = &_43->target;
*_54 = _44;
_57 = _43;
_58 = _57;
frost$core$MutableString$replace$frost$core$RegularExpression$$LPfrost$collections$ListView$LTfrost$core$String$Q$GT$RP$EQ$GT$LPfrost$core$Object$RP(param1, _29, _58);
_60 = ((frost$core$Object*) _43);
frost$core$Frost$unref$frost$core$Object$Q(_60);
_62 = ((frost$core$Object*) _39);
frost$core$Frost$unref$frost$core$Object$Q(_62);
_64 = *(&local1);
_65 = ((frost$core$Object*) _64);
frost$core$Frost$unref$frost$core$Object$Q(_65);
*(&local1) = ((org$frostlang$frostc$frostdoc$Markdown$CodeReplacer*) NULL);
_68 = ((frost$core$Object*) _30);
frost$core$Frost$unref$frost$core$Object$Q(_68);
_70 = *(&local0);
_71 = ((frost$core$Object*) _70);
frost$core$Frost$unref$frost$core$Object$Q(_71);
*(&local0) = ((frost$core$RegularExpression*) NULL);
return;

}
frost$core$String* org$frostlang$frostc$frostdoc$Markdown$prettyPrint$org$frostlang$frostc$parser$Parser$R$frost$core$String(void* rawSelf, org$frostlang$frostc$parser$Parser* param1) {
org$frostlang$frostc$frostdoc$Markdown* param0 = (org$frostlang$frostc$frostdoc$Markdown*) rawSelf;

frost$core$MutableString* local0 = NULL;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind local1;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind local2;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind local3;
org$frostlang$frostc$Pair* local4 = NULL;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind local5;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind local6;
frost$core$MutableString* local7 = NULL;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind local8;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind local9;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind local10;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind local11;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind local12;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind local13;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind local14;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind local15;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind local16;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind local17;
frost$core$MutableString* _1;
frost$core$Object* _4;
frost$core$MutableString* _6;
frost$core$Object* _7;
frost$core$Object* _10;
frost$core$Int _13;
frost$core$Int* _16;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind _18;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind _21;
org$frostlang$frostc$parser$SyntaxHighlighter** _24;
org$frostlang$frostc$parser$SyntaxHighlighter* _25;
bool _26;
frost$core$Bit _27;
bool _28;
frost$core$Int _30;
org$frostlang$frostc$parser$SyntaxHighlighter* _33;
frost$collections$Array** _34;
frost$collections$Array* _35;
frost$collections$Iterable* _36;
$fn276 _37;
frost$collections$Iterator* _38;
$fn277 _40;
frost$core$Bit _41;
bool _42;
$fn278 _45;
frost$core$Object* _46;
org$frostlang$frostc$Pair* _47;
frost$core$Object* _48;
org$frostlang$frostc$Pair* _50;
frost$core$Object* _51;
org$frostlang$frostc$Pair* _55;
frost$core$Object** _56;
frost$core$Object* _57;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind _58;
frost$core$Equatable* _59;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind _60;
frost$core$Equatable* _61;
$fn279 _62;
frost$core$Bit _63;
bool _64;
frost$core$Object* _65;
frost$core$Object* _67;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind _70;
frost$core$Equatable* _71;
frost$core$Int _72;
frost$core$Int* _75;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind _77;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind _80;
frost$core$Equatable* _81;
$fn280 _82;
frost$core$Bit _83;
bool _84;
frost$core$Object* _85;
frost$core$Object* _87;
frost$core$MutableString* _91;
org$frostlang$frostc$Pair* _95;
frost$core$Object** _96;
frost$core$Object* _97;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind _98;
frost$core$Equatable* _99;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind _100;
frost$core$Equatable* _101;
$fn281 _102;
frost$core$Bit _103;
bool _104;
frost$core$Object* _105;
frost$core$Object* _107;
org$frostlang$frostc$Pair* _111;
frost$core$Object** _112;
frost$core$Object* _113;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind _114;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind _117;
frost$core$Int _118;
frost$core$Int _119;
int64_t _122;
int64_t _123;
bool _124;
frost$core$Bit _125;
bool _127;
frost$core$Int _130;
int64_t _133;
int64_t _134;
bool _135;
frost$core$Bit _136;
bool _138;
frost$core$Int _140;
int64_t _143;
int64_t _144;
bool _145;
frost$core$Bit _146;
bool _148;
frost$core$MutableString* _151;
frost$core$Int _154;
int64_t _157;
int64_t _158;
bool _159;
frost$core$Bit _160;
bool _162;
frost$core$MutableString* _165;
frost$core$Int _168;
int64_t _171;
int64_t _172;
bool _173;
frost$core$Bit _174;
bool _176;
frost$core$MutableString* _179;
frost$core$Int _182;
int64_t _185;
int64_t _186;
bool _187;
frost$core$Bit _188;
bool _190;
frost$core$MutableString* _193;
frost$core$Int _196;
int64_t _199;
int64_t _200;
bool _201;
frost$core$Bit _202;
bool _204;
frost$core$MutableString* _207;
frost$core$Int _210;
int64_t _213;
int64_t _214;
bool _215;
frost$core$Bit _216;
bool _218;
frost$core$MutableString* _221;
frost$core$Int _224;
int64_t _227;
int64_t _228;
bool _229;
frost$core$Bit _230;
bool _232;
frost$core$MutableString* _235;
frost$core$Int _238;
int64_t _241;
int64_t _242;
bool _243;
frost$core$Bit _244;
bool _246;
frost$core$MutableString* _249;
frost$core$Int _252;
int64_t _255;
int64_t _256;
bool _257;
frost$core$Bit _258;
bool _260;
frost$core$MutableString* _263;
frost$core$Int _266;
int64_t _269;
int64_t _270;
bool _271;
frost$core$Bit _272;
bool _274;
frost$core$MutableString* _277;
frost$core$Int _280;
int64_t _283;
int64_t _284;
bool _285;
frost$core$Bit _286;
bool _288;
frost$core$MutableString* _291;
frost$core$Int _295;
frost$core$MutableString* _300;
org$frostlang$frostc$Pair* _301;
frost$core$Object** _302;
frost$core$Object* _303;
org$frostlang$frostc$parser$Token _304;
frost$core$String** _307;
frost$core$String* _308;
frost$core$String$Index _309;
frost$core$String$Index _310;
frost$core$Bit _311;
frost$core$Range$LTfrost$core$String$Index$GT _312;
frost$core$String* _313;
frost$core$Object* _314;
frost$core$Object* _316;
frost$core$Object* _321;
frost$core$MutableString* _323;
frost$core$Object* _324;
frost$core$Object* _327;
frost$core$Object* _329;
frost$core$MutableString* _332;
frost$core$MutableString* _335;
frost$core$MutableString* _338;
frost$core$MutableString* _341;
org$frostlang$frostc$frostdoc$Protector** _342;
org$frostlang$frostc$frostdoc$Protector* _343;
$fn282 _344;
frost$core$String* _345;
frost$core$Object* _347;
frost$core$MutableString* _350;
org$frostlang$frostc$frostdoc$Protector** _351;
org$frostlang$frostc$frostdoc$Protector* _352;
$fn283 _353;
frost$core$String* _354;
frost$core$Object* _356;
frost$core$MutableString* _359;
org$frostlang$frostc$frostdoc$Protector** _360;
org$frostlang$frostc$frostdoc$Protector* _361;
$fn284 _362;
frost$core$String* _363;
frost$core$Object* _365;
frost$core$MutableString* _368;
org$frostlang$frostc$frostdoc$Protector** _369;
org$frostlang$frostc$frostdoc$Protector* _370;
$fn285 _371;
frost$core$String* _372;
frost$core$Object* _374;
frost$core$MutableString* _377;
org$frostlang$frostc$frostdoc$Protector** _378;
org$frostlang$frostc$frostdoc$Protector* _379;
$fn286 _380;
frost$core$String* _381;
frost$core$Object* _383;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind _386;
frost$core$Equatable* _387;
frost$core$Int _388;
frost$core$Int* _391;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind _393;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind _396;
frost$core$Equatable* _397;
$fn287 _398;
frost$core$Bit _399;
bool _400;
frost$core$Object* _401;
frost$core$Object* _403;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind _406;
frost$core$Equatable* _407;
frost$core$Int _408;
frost$core$Int* _411;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind _413;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind _416;
frost$core$Equatable* _417;
$fn288 _418;
frost$core$Bit _419;
bool _420;
frost$core$Object* _421;
frost$core$Object* _423;
frost$core$MutableString* _427;
org$frostlang$frostc$Pair* _428;
frost$core$Object** _429;
frost$core$Object* _430;
org$frostlang$frostc$parser$Token _431;
org$frostlang$frostc$parser$Token$Kind _432;
frost$core$Object* _433;
$fn289 _436;
frost$core$String* _437;
frost$core$String* _438;
frost$core$Object* _439;
frost$core$Object* _441;
frost$core$Object* _443;
frost$core$String* _446;
frost$core$Object* _448;
frost$core$Object* _450;
frost$core$Object* _452;
frost$core$MutableString* _456;
frost$core$MutableString* _457;
frost$core$Object* _458;
$fn290 _461;
frost$core$String* _462;
frost$core$Object* _464;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind _468;
frost$core$Equatable* _469;
frost$core$Int _470;
frost$core$Int* _473;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind _475;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind _478;
frost$core$Equatable* _479;
$fn291 _480;
frost$core$Bit _481;
bool _482;
frost$core$Object* _483;
frost$core$Object* _485;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind _488;
frost$core$Equatable* _489;
frost$core$Int _490;
frost$core$Int* _493;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind _495;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind _498;
frost$core$Equatable* _499;
$fn292 _500;
frost$core$Bit _501;
bool _502;
frost$core$Object* _503;
frost$core$Object* _505;
frost$core$MutableString* _509;
frost$core$MutableString* _512;
frost$core$Object* _513;
frost$core$Object* _516;
org$frostlang$frostc$Pair* _518;
frost$core$Object* _519;
frost$core$Object* _523;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind _526;
frost$core$Equatable* _527;
frost$core$Int _528;
frost$core$Int* _531;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind _533;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind _536;
frost$core$Equatable* _537;
$fn293 _538;
frost$core$Bit _539;
bool _540;
frost$core$Object* _541;
frost$core$Object* _543;
frost$core$MutableString* _547;
frost$core$MutableString* _551;
frost$core$MutableString* _554;
frost$core$String* _555;
frost$core$Object* _556;
frost$core$Object* _558;
frost$core$MutableString* _560;
frost$core$Object* _561;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:505
_1 = (frost$core$MutableString*) frostObjectAlloc(sizeof(frost$core$MutableString), (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init$frost$core$String(_1, &$s294);
*(&local0) = ((frost$core$MutableString*) NULL);
_4 = ((frost$core$Object*) _1);
frost$core$Frost$ref$frost$core$Object$Q(_4);
_6 = *(&local0);
_7 = ((frost$core$Object*) _6);
frost$core$Frost$unref$frost$core$Object$Q(_7);
*(&local0) = _1;
_10 = ((frost$core$Object*) _1);
frost$core$Frost$unref$frost$core$Object$Q(_10);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:506
_13 = (frost$core$Int) {0u};
// begin inline call to org.frostlang.frostc.parser.SyntaxHighlighter.Kind.init(rv:frost.core.Int):org.frostlang.frostc.parser.SyntaxHighlighter.Kind from Markdown.frost:506:46
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:6
_16 = &(&local2)->$rawValue;
*_16 = _13;
_18 = *(&local2);
*(&local1) = _18;
_21 = *(&local1);
*(&local3) = _21;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:507
_24 = &param1->syntaxHighlighter;
_25 = *_24;
_26 = _25 != NULL;
_27 = (frost$core$Bit) {_26};
_28 = _27.value;
if (_28) goto block2; else goto block3;
block3:;
_30 = (frost$core$Int) {507u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s295, _30, &$s296);
abort(); // unreachable
block2:;
_33 = _25;
_34 = &_33->tokens;
_35 = *_34;
_36 = ((frost$collections$Iterable*) _35);
ITable* $tmp297 = _36->$class->itable;
while ($tmp297->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp297 = $tmp297->next;
}
_37 = $tmp297->methods[0];
_38 = _37(_36);
goto block4;
block4:;
ITable* $tmp298 = _38->$class->itable;
while ($tmp298->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp298 = $tmp298->next;
}
_40 = $tmp298->methods[0];
_41 = _40(_38);
_42 = _41.value;
if (_42) goto block6; else goto block5;
block5:;
*(&local4) = ((org$frostlang$frostc$Pair*) NULL);
ITable* $tmp299 = _38->$class->itable;
while ($tmp299->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp299 = $tmp299->next;
}
_45 = $tmp299->methods[1];
_46 = _45(_38);
_47 = ((org$frostlang$frostc$Pair*) _46);
_48 = ((frost$core$Object*) _47);
frost$core$Frost$ref$frost$core$Object$Q(_48);
_50 = *(&local4);
_51 = ((frost$core$Object*) _50);
frost$core$Frost$unref$frost$core$Object$Q(_51);
*(&local4) = _47;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:508
_55 = *(&local4);
_56 = &_55->second;
_57 = *_56;
_58 = ((org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) _57)->value;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp300;
$tmp300 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp300->value = _58;
_59 = ((frost$core$Equatable*) $tmp300);
_60 = *(&local3);
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp301;
$tmp301 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp301->value = _60;
_61 = ((frost$core$Equatable*) $tmp301);
ITable* $tmp302 = _59->$class->itable;
while ($tmp302->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp302 = $tmp302->next;
}
_62 = $tmp302->methods[1];
_63 = _62(_59, _61);
_64 = _63.value;
_65 = ((frost$core$Object*) _61);
frost$core$Frost$unref$frost$core$Object$Q(_65);
_67 = ((frost$core$Object*) _59);
frost$core$Frost$unref$frost$core$Object$Q(_67);
if (_64) goto block9; else goto block8;
block9:;
_70 = *(&local3);
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp303;
$tmp303 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp303->value = _70;
_71 = ((frost$core$Equatable*) $tmp303);
_72 = (frost$core$Int) {0u};
// begin inline call to org.frostlang.frostc.parser.SyntaxHighlighter.Kind.init(rv:frost.core.Int):org.frostlang.frostc.parser.SyntaxHighlighter.Kind from Markdown.frost:508:71
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:6
_75 = &(&local6)->$rawValue;
*_75 = _72;
_77 = *(&local6);
*(&local5) = _77;
_80 = *(&local5);
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp304;
$tmp304 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp304->value = _80;
_81 = ((frost$core$Equatable*) $tmp304);
ITable* $tmp305 = _71->$class->itable;
while ($tmp305->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp305 = $tmp305->next;
}
_82 = $tmp305->methods[1];
_83 = _82(_71, _81);
_84 = _83.value;
_85 = ((frost$core$Object*) _81);
frost$core$Frost$unref$frost$core$Object$Q(_85);
_87 = ((frost$core$Object*) _71);
frost$core$Frost$unref$frost$core$Object$Q(_87);
if (_84) goto block7; else goto block8;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:509
_91 = *(&local0);
frost$core$MutableString$append$frost$core$String(_91, &$s306);
goto block8;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:511
_95 = *(&local4);
_96 = &_95->second;
_97 = *_96;
_98 = ((org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) _97)->value;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp307;
$tmp307 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp307->value = _98;
_99 = ((frost$core$Equatable*) $tmp307);
_100 = *(&local3);
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp308;
$tmp308 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp308->value = _100;
_101 = ((frost$core$Equatable*) $tmp308);
ITable* $tmp309 = _99->$class->itable;
while ($tmp309->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp309 = $tmp309->next;
}
_102 = $tmp309->methods[1];
_103 = _102(_99, _101);
_104 = _103.value;
_105 = ((frost$core$Object*) _101);
frost$core$Frost$unref$frost$core$Object$Q(_105);
_107 = ((frost$core$Object*) _99);
frost$core$Frost$unref$frost$core$Object$Q(_107);
if (_104) goto block11; else goto block12;
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:512
_111 = *(&local4);
_112 = &_111->second;
_113 = *_112;
_114 = ((org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) _113)->value;
*(&local3) = _114;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:513
_117 = *(&local3);
_118 = _117.$rawValue;
_119 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Markdown.frost:514:48
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_122 = _118.value;
_123 = _119.value;
_124 = _122 == _123;
_125 = (frost$core$Bit) {_124};
_127 = _125.value;
if (_127) goto block14; else goto block15;
block14:;
goto block13;
block15:;
_130 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Markdown.frost:517:48
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_133 = _118.value;
_134 = _130.value;
_135 = _133 == _134;
_136 = (frost$core$Bit) {_135};
_138 = _136.value;
if (_138) goto block17; else goto block18;
block18:;
_140 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Markdown.frost:517:80
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_143 = _118.value;
_144 = _140.value;
_145 = _143 == _144;
_146 = (frost$core$Bit) {_145};
_148 = _146.value;
if (_148) goto block17; else goto block20;
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:518
_151 = *(&local0);
frost$core$MutableString$append$frost$core$String(_151, &$s310);
goto block13;
block20:;
_154 = (frost$core$Int) {3u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Markdown.frost:520:48
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_157 = _118.value;
_158 = _154.value;
_159 = _157 == _158;
_160 = (frost$core$Bit) {_159};
_162 = _160.value;
if (_162) goto block22; else goto block23;
block22:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:521
_165 = *(&local0);
frost$core$MutableString$append$frost$core$String(_165, &$s311);
goto block13;
block23:;
_168 = (frost$core$Int) {4u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Markdown.frost:523:48
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_171 = _118.value;
_172 = _168.value;
_173 = _171 == _172;
_174 = (frost$core$Bit) {_173};
_176 = _174.value;
if (_176) goto block25; else goto block26;
block25:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:524
_179 = *(&local0);
frost$core$MutableString$append$frost$core$String(_179, &$s312);
goto block13;
block26:;
_182 = (frost$core$Int) {5u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Markdown.frost:526:48
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_185 = _118.value;
_186 = _182.value;
_187 = _185 == _186;
_188 = (frost$core$Bit) {_187};
_190 = _188.value;
if (_190) goto block28; else goto block29;
block28:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:527
_193 = *(&local0);
frost$core$MutableString$append$frost$core$String(_193, &$s313);
goto block13;
block29:;
_196 = (frost$core$Int) {6u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Markdown.frost:529:48
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_199 = _118.value;
_200 = _196.value;
_201 = _199 == _200;
_202 = (frost$core$Bit) {_201};
_204 = _202.value;
if (_204) goto block31; else goto block32;
block31:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:530
_207 = *(&local0);
frost$core$MutableString$append$frost$core$String(_207, &$s314);
goto block13;
block32:;
_210 = (frost$core$Int) {7u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Markdown.frost:532:48
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_213 = _118.value;
_214 = _210.value;
_215 = _213 == _214;
_216 = (frost$core$Bit) {_215};
_218 = _216.value;
if (_218) goto block34; else goto block35;
block34:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:533
_221 = *(&local0);
frost$core$MutableString$append$frost$core$String(_221, &$s315);
goto block13;
block35:;
_224 = (frost$core$Int) {8u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Markdown.frost:535:48
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_227 = _118.value;
_228 = _224.value;
_229 = _227 == _228;
_230 = (frost$core$Bit) {_229};
_232 = _230.value;
if (_232) goto block37; else goto block38;
block37:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:536
_235 = *(&local0);
frost$core$MutableString$append$frost$core$String(_235, &$s316);
goto block13;
block38:;
_238 = (frost$core$Int) {9u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Markdown.frost:538:48
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_241 = _118.value;
_242 = _238.value;
_243 = _241 == _242;
_244 = (frost$core$Bit) {_243};
_246 = _244.value;
if (_246) goto block40; else goto block41;
block40:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:539
_249 = *(&local0);
frost$core$MutableString$append$frost$core$String(_249, &$s317);
goto block13;
block41:;
_252 = (frost$core$Int) {10u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Markdown.frost:541:48
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_255 = _118.value;
_256 = _252.value;
_257 = _255 == _256;
_258 = (frost$core$Bit) {_257};
_260 = _258.value;
if (_260) goto block43; else goto block44;
block43:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:542
_263 = *(&local0);
frost$core$MutableString$append$frost$core$String(_263, &$s318);
goto block13;
block44:;
_266 = (frost$core$Int) {11u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Markdown.frost:544:48
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_269 = _118.value;
_270 = _266.value;
_271 = _269 == _270;
_272 = (frost$core$Bit) {_271};
_274 = _272.value;
if (_274) goto block46; else goto block47;
block46:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:545
_277 = *(&local0);
frost$core$MutableString$append$frost$core$String(_277, &$s319);
goto block13;
block47:;
_280 = (frost$core$Int) {12u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Markdown.frost:547:48
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_283 = _118.value;
_284 = _280.value;
_285 = _283 == _284;
_286 = (frost$core$Bit) {_285};
_288 = _286.value;
if (_288) goto block49; else goto block50;
block49:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:548
_291 = *(&local0);
frost$core$MutableString$append$frost$core$String(_291, &$s320);
goto block13;
block50:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:551
_295 = (frost$core$Int) {551u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s321, _295);
abort(); // unreachable
block13:;
goto block12;
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:555
_300 = (frost$core$MutableString*) frostObjectAlloc(sizeof(frost$core$MutableString), (frost$core$Class*) &frost$core$MutableString$class);
_301 = *(&local4);
_302 = &_301->first;
_303 = *_302;
_304 = ((org$frostlang$frostc$parser$Token$wrapper*) _303)->value;
// begin inline call to function org.frostlang.frostc.parser.Parser.text(token:org.frostlang.frostc.parser.Token):frost.core.String from Markdown.frost:555:47
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/Parser.frost:227
_307 = &param1->source;
_308 = *_307;
_309 = _304.start;
_310 = _304.end;
_311 = (frost$core$Bit) {false};
_312 = frost$core$Range$LTfrost$core$String$Index$GT$init$frost$core$String$Index$frost$core$String$Index$frost$core$Bit(_309, _310, _311);
_313 = frost$core$String$substring$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String(_308, _312);
_314 = ((frost$core$Object*) _313);
frost$core$Frost$ref$frost$core$Object$Q(_314);
_316 = ((frost$core$Object*) _313);
frost$core$Frost$unref$frost$core$Object$Q(_316);
frost$core$MutableString$init$frost$core$String(_300, _313);
*(&local7) = ((frost$core$MutableString*) NULL);
_321 = ((frost$core$Object*) _300);
frost$core$Frost$ref$frost$core$Object$Q(_321);
_323 = *(&local7);
_324 = ((frost$core$Object*) _323);
frost$core$Frost$unref$frost$core$Object$Q(_324);
*(&local7) = _300;
_327 = ((frost$core$Object*) _313);
frost$core$Frost$unref$frost$core$Object$Q(_327);
_329 = ((frost$core$Object*) _300);
frost$core$Frost$unref$frost$core$Object$Q(_329);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:556
_332 = *(&local7);
frost$core$MutableString$replace$frost$core$String$frost$core$String(_332, &$s322, &$s323);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:557
_335 = *(&local7);
frost$core$MutableString$replace$frost$core$String$frost$core$String(_335, &$s324, &$s325);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:558
_338 = *(&local7);
frost$core$MutableString$replace$frost$core$String$frost$core$String(_338, &$s326, &$s327);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:559
_341 = *(&local7);
_342 = &param0->charProtector;
_343 = *_342;
_344 = ($fn328) _343->$class->vtable[2];
_345 = _344(_343, &$s329);
frost$core$MutableString$replace$frost$core$String$frost$core$String(_341, &$s330, _345);
_347 = ((frost$core$Object*) _345);
frost$core$Frost$unref$frost$core$Object$Q(_347);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:560
_350 = *(&local7);
_351 = &param0->charProtector;
_352 = *_351;
_353 = ($fn331) _352->$class->vtable[2];
_354 = _353(_352, &$s332);
frost$core$MutableString$replace$frost$core$String$frost$core$String(_350, &$s333, _354);
_356 = ((frost$core$Object*) _354);
frost$core$Frost$unref$frost$core$Object$Q(_356);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:561
_359 = *(&local7);
_360 = &param0->charProtector;
_361 = *_360;
_362 = ($fn334) _361->$class->vtable[2];
_363 = _362(_361, &$s335);
frost$core$MutableString$replace$frost$core$String$frost$core$String(_359, &$s336, _363);
_365 = ((frost$core$Object*) _363);
frost$core$Frost$unref$frost$core$Object$Q(_365);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:562
_368 = *(&local7);
_369 = &param0->charProtector;
_370 = *_369;
_371 = ($fn337) _370->$class->vtable[2];
_372 = _371(_370, &$s338);
frost$core$MutableString$replace$frost$core$String$frost$core$String(_368, &$s339, _372);
_374 = ((frost$core$Object*) _372);
frost$core$Frost$unref$frost$core$Object$Q(_374);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:563
_377 = *(&local7);
_378 = &param0->charProtector;
_379 = *_378;
_380 = ($fn340) _379->$class->vtable[2];
_381 = _380(_379, &$s341);
frost$core$MutableString$replace$frost$core$String$frost$core$String(_377, &$s342, _381);
_383 = ((frost$core$Object*) _381);
frost$core$Frost$unref$frost$core$Object$Q(_383);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:564
_386 = *(&local3);
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp343;
$tmp343 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp343->value = _386;
_387 = ((frost$core$Equatable*) $tmp343);
_388 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.parser.SyntaxHighlighter.Kind.init(rv:frost.core.Int):org.frostlang.frostc.parser.SyntaxHighlighter.Kind from Markdown.frost:564:49
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:6
_391 = &(&local9)->$rawValue;
*_391 = _388;
_393 = *(&local9);
*(&local8) = _393;
_396 = *(&local8);
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp344;
$tmp344 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp344->value = _396;
_397 = ((frost$core$Equatable*) $tmp344);
ITable* $tmp345 = _387->$class->itable;
while ($tmp345->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp345 = $tmp345->next;
}
_398 = $tmp345->methods[1];
_399 = _398(_387, _397);
_400 = _399.value;
_401 = ((frost$core$Object*) _397);
frost$core$Frost$unref$frost$core$Object$Q(_401);
_403 = ((frost$core$Object*) _387);
frost$core$Frost$unref$frost$core$Object$Q(_403);
if (_400) goto block55; else goto block54;
block55:;
_406 = *(&local3);
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp346;
$tmp346 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp346->value = _406;
_407 = ((frost$core$Equatable*) $tmp346);
_408 = (frost$core$Int) {2u};
// begin inline call to org.frostlang.frostc.parser.SyntaxHighlighter.Kind.init(rv:frost.core.Int):org.frostlang.frostc.parser.SyntaxHighlighter.Kind from Markdown.frost:565:54
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:6
_411 = &(&local11)->$rawValue;
*_411 = _408;
_413 = *(&local11);
*(&local10) = _413;
_416 = *(&local10);
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp347;
$tmp347 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp347->value = _416;
_417 = ((frost$core$Equatable*) $tmp347);
ITable* $tmp348 = _407->$class->itable;
while ($tmp348->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp348 = $tmp348->next;
}
_418 = $tmp348->methods[1];
_419 = _418(_407, _417);
_420 = _419.value;
_421 = ((frost$core$Object*) _417);
frost$core$Frost$unref$frost$core$Object$Q(_421);
_423 = ((frost$core$Object*) _407);
frost$core$Frost$unref$frost$core$Object$Q(_423);
if (_420) goto block53; else goto block54;
block53:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:566
_427 = *(&local0);
_428 = *(&local4);
_429 = &_428->first;
_430 = *_429;
_431 = ((org$frostlang$frostc$parser$Token$wrapper*) _430)->value;
_432 = _431.kind;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp349;
$tmp349 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$parser$Token$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp349->value = _432;
_433 = ((frost$core$Object*) $tmp349);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Markdown.frost:566:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
_436 = ($fn350) _433->$class->vtable[0];
_437 = _436(_433);
_438 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s351, _437);
_439 = ((frost$core$Object*) _438);
frost$core$Frost$ref$frost$core$Object$Q(_439);
_441 = ((frost$core$Object*) _438);
frost$core$Frost$unref$frost$core$Object$Q(_441);
_443 = ((frost$core$Object*) _437);
frost$core$Frost$unref$frost$core$Object$Q(_443);
_446 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_438, &$s352);
frost$core$MutableString$append$frost$core$String(_427, _446);
_448 = ((frost$core$Object*) _446);
frost$core$Frost$unref$frost$core$Object$Q(_448);
_450 = ((frost$core$Object*) _438);
frost$core$Frost$unref$frost$core$Object$Q(_450);
_452 = _433;
frost$core$Frost$unref$frost$core$Object$Q(_452);
goto block54;
block54:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:568
_456 = *(&local0);
_457 = *(&local7);
_458 = ((frost$core$Object*) _457);
// begin inline call to method frost.core.MutableString.append(o:frost.core.Object) from Markdown.frost:568:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:150
_461 = ($fn353) _458->$class->vtable[0];
_462 = _461(_458);
frost$core$MutableString$append$frost$core$String(_456, _462);
_464 = ((frost$core$Object*) _462);
frost$core$Frost$unref$frost$core$Object$Q(_464);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:569
_468 = *(&local3);
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp354;
$tmp354 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp354->value = _468;
_469 = ((frost$core$Equatable*) $tmp354);
_470 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.parser.SyntaxHighlighter.Kind.init(rv:frost.core.Int):org.frostlang.frostc.parser.SyntaxHighlighter.Kind from Markdown.frost:569:49
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:6
_473 = &(&local13)->$rawValue;
*_473 = _470;
_475 = *(&local13);
*(&local12) = _475;
_478 = *(&local12);
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp355;
$tmp355 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp355->value = _478;
_479 = ((frost$core$Equatable*) $tmp355);
ITable* $tmp356 = _469->$class->itable;
while ($tmp356->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp356 = $tmp356->next;
}
_480 = $tmp356->methods[1];
_481 = _480(_469, _479);
_482 = _481.value;
_483 = ((frost$core$Object*) _479);
frost$core$Frost$unref$frost$core$Object$Q(_483);
_485 = ((frost$core$Object*) _469);
frost$core$Frost$unref$frost$core$Object$Q(_485);
if (_482) goto block62; else goto block61;
block62:;
_488 = *(&local3);
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp357;
$tmp357 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp357->value = _488;
_489 = ((frost$core$Equatable*) $tmp357);
_490 = (frost$core$Int) {2u};
// begin inline call to org.frostlang.frostc.parser.SyntaxHighlighter.Kind.init(rv:frost.core.Int):org.frostlang.frostc.parser.SyntaxHighlighter.Kind from Markdown.frost:570:54
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:6
_493 = &(&local15)->$rawValue;
*_493 = _490;
_495 = *(&local15);
*(&local14) = _495;
_498 = *(&local14);
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp358;
$tmp358 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp358->value = _498;
_499 = ((frost$core$Equatable*) $tmp358);
ITable* $tmp359 = _489->$class->itable;
while ($tmp359->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp359 = $tmp359->next;
}
_500 = $tmp359->methods[1];
_501 = _500(_489, _499);
_502 = _501.value;
_503 = ((frost$core$Object*) _499);
frost$core$Frost$unref$frost$core$Object$Q(_503);
_505 = ((frost$core$Object*) _489);
frost$core$Frost$unref$frost$core$Object$Q(_505);
if (_502) goto block60; else goto block61;
block60:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:571
_509 = *(&local0);
frost$core$MutableString$append$frost$core$String(_509, &$s360);
goto block61;
block61:;
_512 = *(&local7);
_513 = ((frost$core$Object*) _512);
frost$core$Frost$unref$frost$core$Object$Q(_513);
*(&local7) = ((frost$core$MutableString*) NULL);
_516 = _46;
frost$core$Frost$unref$frost$core$Object$Q(_516);
_518 = *(&local4);
_519 = ((frost$core$Object*) _518);
frost$core$Frost$unref$frost$core$Object$Q(_519);
*(&local4) = ((org$frostlang$frostc$Pair*) NULL);
goto block4;
block6:;
_523 = ((frost$core$Object*) _38);
frost$core$Frost$unref$frost$core$Object$Q(_523);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:574
_526 = *(&local3);
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp361;
$tmp361 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp361->value = _526;
_527 = ((frost$core$Equatable*) $tmp361);
_528 = (frost$core$Int) {0u};
// begin inline call to org.frostlang.frostc.parser.SyntaxHighlighter.Kind.init(rv:frost.core.Int):org.frostlang.frostc.parser.SyntaxHighlighter.Kind from Markdown.frost:574:45
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:6
_531 = &(&local17)->$rawValue;
*_531 = _528;
_533 = *(&local17);
*(&local16) = _533;
_536 = *(&local16);
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp362;
$tmp362 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp362->value = _536;
_537 = ((frost$core$Equatable*) $tmp362);
ITable* $tmp363 = _527->$class->itable;
while ($tmp363->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp363 = $tmp363->next;
}
_538 = $tmp363->methods[1];
_539 = _538(_527, _537);
_540 = _539.value;
_541 = ((frost$core$Object*) _537);
frost$core$Frost$unref$frost$core$Object$Q(_541);
_543 = ((frost$core$Object*) _527);
frost$core$Frost$unref$frost$core$Object$Q(_543);
if (_540) goto block65; else goto block66;
block65:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:575
_547 = *(&local0);
frost$core$MutableString$append$frost$core$String(_547, &$s364);
goto block66;
block66:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:577
_551 = *(&local0);
frost$core$MutableString$append$frost$core$String(_551, &$s365);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:578
_554 = *(&local0);
_555 = frost$core$MutableString$finish$R$frost$core$String(_554);
_556 = ((frost$core$Object*) _555);
frost$core$Frost$ref$frost$core$Object$Q(_556);
_558 = ((frost$core$Object*) _555);
frost$core$Frost$unref$frost$core$Object$Q(_558);
_560 = *(&local0);
_561 = ((frost$core$Object*) _560);
frost$core$Frost$unref$frost$core$Object$Q(_561);
*(&local0) = ((frost$core$MutableString*) NULL);
return _555;

}
void org$frostlang$frostc$frostdoc$Markdown$syntaxHighlight$frost$core$MutableString(void* rawSelf, frost$core$MutableString* param1) {
org$frostlang$frostc$frostdoc$Markdown* param0 = (org$frostlang$frostc$frostdoc$Markdown*) rawSelf;

frost$core$String* local0 = NULL;
org$frostlang$frostc$ASTNode* local1 = NULL;
frost$threads$ScopedLock* local2 = NULL;
org$frostlang$frostc$parser$Token$Kind local3;
org$frostlang$frostc$parser$Token$Kind local4;
frost$threads$ScopedLock* local5 = NULL;
frost$threads$ScopedLock* local6 = NULL;
org$frostlang$frostc$parser$Token$Kind local7;
org$frostlang$frostc$parser$Token$Kind local8;
frost$threads$ScopedLock* local9 = NULL;
frost$threads$ScopedLock* local10 = NULL;
org$frostlang$frostc$parser$Token local11;
org$frostlang$frostc$parser$Token$Kind local12;
org$frostlang$frostc$parser$Token$Kind local13;
frost$threads$MessageQueue** _1;
frost$threads$MessageQueue* _2;
frost$core$Int _8;
frost$core$Int _9;
int64_t _10;
int64_t _11;
bool _12;
frost$core$Bit _13;
bool _15;
frost$core$Immutable* _18;
frost$core$Object* _19;
frost$core$Object* _24;
$fn366 _25;
frost$core$String* _26;
frost$core$String* _27;
frost$core$Object* _29;
frost$core$String* _31;
frost$core$Object* _32;
frost$core$Object* _35;
frost$core$Object* _37;
org$frostlang$frostc$parser$Parser** _40;
org$frostlang$frostc$parser$Parser* _41;
frost$io$File** _42;
frost$io$File* _43;
frost$core$Int _44;
frost$core$String* _45;
org$frostlang$frostc$parser$Parser** _48;
org$frostlang$frostc$parser$Parser* _49;
org$frostlang$frostc$ASTNode* _50;
frost$core$Object* _52;
org$frostlang$frostc$ASTNode* _54;
frost$core$Object* _55;
frost$core$Object* _58;
org$frostlang$frostc$ASTNode* _61;
bool _62;
frost$core$Bit _63;
bool _64;
frost$threads$MessageQueue** _66;
frost$threads$MessageQueue* _67;
frost$threads$ScopedLock* _70;
frost$threads$Lock** _71;
frost$threads$Lock* _72;
frost$core$Object* _75;
frost$threads$ScopedLock* _77;
frost$core$Object* _78;
frost$core$Object* _81;
frost$core$Int* _84;
frost$core$Int _85;
frost$threads$ScopedLock* _86;
frost$core$Object* _87;
frost$core$Int _91;
int64_t _94;
int64_t _95;
bool _96;
frost$core$Bit _97;
bool _99;
frost$core$Bit _102;
frost$core$Range$LTfrost$core$MutableString$Index$Q$GT _103;
org$frostlang$frostc$parser$Parser** _104;
org$frostlang$frostc$parser$Parser* _105;
$fn367 _106;
frost$core$String* _107;
frost$core$Object* _109;
org$frostlang$frostc$ASTNode* _112;
frost$core$Object* _113;
frost$core$String* _116;
frost$core$Object* _117;
frost$threads$MessageQueue** _122;
frost$threads$MessageQueue* _123;
frost$core$Int _129;
frost$core$Int _130;
int64_t _131;
int64_t _132;
bool _133;
frost$core$Bit _134;
bool _136;
frost$core$Immutable* _139;
frost$core$Object* _140;
org$frostlang$frostc$parser$Parser** _145;
org$frostlang$frostc$parser$Parser* _146;
frost$io$File** _147;
frost$io$File* _148;
frost$core$Int _149;
frost$core$String* _150;
org$frostlang$frostc$parser$Parser** _154;
org$frostlang$frostc$parser$Parser* _155;
frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT** _158;
frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT* _159;
frost$collections$CollectionView* _160;
$fn368 _161;
frost$core$Int _162;
frost$core$Int _163;
int64_t _166;
int64_t _167;
bool _168;
frost$core$Bit _169;
bool _171;
org$frostlang$frostc$parser$Token _174;
frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT** _178;
frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT* _179;
frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT** _180;
frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT* _181;
frost$collections$CollectionView* _182;
$fn369 _183;
frost$core$Int _184;
frost$core$Int _185;
int64_t _186;
int64_t _187;
int64_t _188;
frost$core$Int _189;
frost$core$Int _191;
int64_t _192;
int64_t _193;
bool _194;
frost$core$Bit _195;
bool _196;
frost$collections$CollectionView* _198;
$fn370 _199;
frost$core$Int _200;
int64_t _201;
int64_t _202;
bool _203;
frost$core$Bit _204;
bool _205;
frost$core$Int _207;
frost$unsafe$NewPointer* _211;
frost$unsafe$NewPointer _212;
int64_t _213;
frost$core$Int64 _214;
int64_t _215;
org$frostlang$frostc$parser$Token _216;
org$frostlang$frostc$parser$Token$Kind _219;
frost$core$Equatable* _220;
frost$core$Int _221;
frost$core$Int* _224;
org$frostlang$frostc$parser$Token$Kind _226;
org$frostlang$frostc$parser$Token$Kind _229;
frost$core$Equatable* _230;
$fn371 _231;
frost$core$Bit _232;
bool _233;
frost$core$Object* _234;
frost$core$Object* _236;
frost$threads$MessageQueue** _239;
frost$threads$MessageQueue* _240;
frost$threads$ScopedLock* _243;
frost$threads$Lock** _244;
frost$threads$Lock* _245;
frost$core$Object* _248;
frost$threads$ScopedLock* _250;
frost$core$Object* _251;
frost$core$Object* _254;
frost$core$Int* _257;
frost$core$Int _258;
frost$threads$ScopedLock* _259;
frost$core$Object* _260;
frost$core$Int _264;
int64_t _267;
int64_t _268;
bool _269;
frost$core$Bit _270;
bool _272;
org$frostlang$frostc$parser$Parser** _275;
org$frostlang$frostc$parser$Parser* _276;
org$frostlang$frostc$ASTNode* _277;
frost$core$Object* _278;
frost$threads$MessageQueue** _282;
frost$threads$MessageQueue* _283;
frost$threads$ScopedLock* _286;
frost$threads$Lock** _287;
frost$threads$Lock* _288;
frost$core$Object* _291;
frost$threads$ScopedLock* _293;
frost$core$Object* _294;
frost$core$Object* _297;
frost$core$Int* _300;
frost$core$Int _301;
frost$threads$ScopedLock* _302;
frost$core$Object* _303;
frost$core$Int _307;
int64_t _310;
int64_t _311;
bool _312;
frost$core$Bit _313;
bool _315;
frost$core$Bit _318;
frost$core$Range$LTfrost$core$MutableString$Index$Q$GT _319;
org$frostlang$frostc$parser$Parser** _320;
org$frostlang$frostc$parser$Parser* _321;
$fn372 _322;
frost$core$String* _323;
frost$core$Object* _325;
org$frostlang$frostc$ASTNode* _328;
frost$core$Object* _329;
frost$core$String* _332;
frost$core$Object* _333;
frost$threads$MessageQueue** _338;
frost$threads$MessageQueue* _339;
frost$core$Int _345;
frost$core$Int _346;
int64_t _347;
int64_t _348;
bool _349;
frost$core$Bit _350;
bool _352;
frost$core$Immutable* _355;
frost$core$Object* _356;
org$frostlang$frostc$parser$Parser** _361;
org$frostlang$frostc$parser$Parser* _362;
frost$io$File** _363;
frost$io$File* _364;
frost$core$Int _365;
frost$core$String* _366;
org$frostlang$frostc$parser$Parser** _370;
org$frostlang$frostc$parser$Parser* _371;
frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT** _374;
frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT* _375;
frost$collections$CollectionView* _376;
$fn373 _377;
frost$core$Int _378;
frost$core$Int _379;
int64_t _382;
int64_t _383;
bool _384;
frost$core$Bit _385;
bool _387;
org$frostlang$frostc$parser$Token _390;
frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT** _394;
frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT* _395;
frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT** _396;
frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT* _397;
frost$collections$CollectionView* _398;
$fn374 _399;
frost$core$Int _400;
frost$core$Int _401;
int64_t _402;
int64_t _403;
int64_t _404;
frost$core$Int _405;
frost$core$Int _407;
int64_t _408;
int64_t _409;
bool _410;
frost$core$Bit _411;
bool _412;
frost$collections$CollectionView* _414;
$fn375 _415;
frost$core$Int _416;
int64_t _417;
int64_t _418;
bool _419;
frost$core$Bit _420;
bool _421;
frost$core$Int _423;
frost$unsafe$NewPointer* _427;
frost$unsafe$NewPointer _428;
int64_t _429;
frost$core$Int64 _430;
int64_t _431;
org$frostlang$frostc$parser$Token _432;
org$frostlang$frostc$parser$Token$Kind _435;
frost$core$Equatable* _436;
frost$core$Int _437;
frost$core$Int* _440;
org$frostlang$frostc$parser$Token$Kind _442;
org$frostlang$frostc$parser$Token$Kind _445;
frost$core$Equatable* _446;
$fn376 _447;
frost$core$Bit _448;
bool _449;
frost$core$Object* _450;
frost$core$Object* _452;
frost$threads$MessageQueue** _455;
frost$threads$MessageQueue* _456;
frost$threads$ScopedLock* _459;
frost$threads$Lock** _460;
frost$threads$Lock* _461;
frost$core$Object* _464;
frost$threads$ScopedLock* _466;
frost$core$Object* _467;
frost$core$Object* _470;
frost$core$Int* _473;
frost$core$Int _474;
frost$threads$ScopedLock* _475;
frost$core$Object* _476;
frost$core$Int _480;
int64_t _483;
int64_t _484;
bool _485;
frost$core$Bit _486;
bool _488;
org$frostlang$frostc$parser$Parser** _491;
org$frostlang$frostc$parser$Parser* _492;
org$frostlang$frostc$ASTNode* _493;
frost$core$Object* _494;
frost$threads$MessageQueue** _498;
frost$threads$MessageQueue* _499;
frost$threads$ScopedLock* _502;
frost$threads$Lock** _503;
frost$threads$Lock* _504;
frost$core$Object* _507;
frost$threads$ScopedLock* _509;
frost$core$Object* _510;
frost$core$Object* _513;
frost$core$Int* _516;
frost$core$Int _517;
frost$threads$ScopedLock* _518;
frost$core$Object* _519;
frost$core$Int _523;
int64_t _526;
int64_t _527;
bool _528;
frost$core$Bit _529;
bool _531;
frost$core$Bit _534;
frost$core$Range$LTfrost$core$MutableString$Index$Q$GT _535;
org$frostlang$frostc$parser$Parser** _536;
org$frostlang$frostc$parser$Parser* _537;
$fn377 _538;
frost$core$String* _539;
frost$core$Object* _541;
org$frostlang$frostc$ASTNode* _544;
frost$core$Object* _545;
frost$core$String* _548;
frost$core$Object* _549;
frost$threads$MessageQueue** _554;
frost$threads$MessageQueue* _555;
frost$core$Int _561;
frost$core$Int _562;
int64_t _563;
int64_t _564;
bool _565;
frost$core$Bit _566;
bool _568;
frost$core$Immutable* _571;
frost$core$Object* _572;
org$frostlang$frostc$parser$Parser** _577;
org$frostlang$frostc$parser$Parser* _578;
frost$io$File** _579;
frost$io$File* _580;
frost$core$Int _581;
frost$core$String* _582;
org$frostlang$frostc$parser$Parser** _587;
org$frostlang$frostc$parser$Parser* _588;
org$frostlang$frostc$parser$Token _589;
org$frostlang$frostc$parser$Token _592;
org$frostlang$frostc$parser$Token$Kind _593;
frost$core$Equatable* _594;
frost$core$Int _595;
frost$core$Int* _598;
org$frostlang$frostc$parser$Token$Kind _600;
org$frostlang$frostc$parser$Token$Kind _603;
frost$core$Equatable* _604;
$fn378 _605;
frost$core$Bit _606;
bool _607;
frost$core$Object* _608;
frost$core$Object* _610;
frost$core$Bit _617;
frost$core$Range$LTfrost$core$MutableString$Index$Q$GT _618;
org$frostlang$frostc$parser$Parser** _619;
org$frostlang$frostc$parser$Parser* _620;
$fn379 _621;
frost$core$String* _622;
frost$core$Object* _624;
org$frostlang$frostc$ASTNode* _626;
frost$core$Object* _627;
frost$core$String* _630;
frost$core$Object* _631;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:582
_1 = &param0->errorQueue;
_2 = *_1;
// begin inline call to method frost.threads.MessageQueue.clear() from Markdown.frost:582:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:116
goto block2;
block2:;
// begin inline call to method frost.threads.MessageQueue.hasMessage():frost.core.Bit from MessageQueue.frost:116:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:89
_8 = frost$threads$MessageQueue$pendingMessages$R$frost$core$Int(_2);
_9 = (frost$core$Int) {0u};
_10 = _8.value;
_11 = _9.value;
_12 = _10 > _11;
_13 = (frost$core$Bit) {_12};
_15 = _13.value;
if (_15) goto block3; else goto block4;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:117
_18 = frost$threads$MessageQueue$getMessage$R$frost$threads$MessageQueue$T(_2);
_19 = ((frost$core$Object*) _18);
frost$core$Frost$unref$frost$core$Object$Q(_19);
goto block2;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:583
_24 = ((frost$core$Object*) param1);
_25 = ($fn380) _24->$class->vtable[0];
_26 = _25(_24);
_27 = frost$core$String$get_trimmed$R$frost$core$String(_26);
*(&local0) = ((frost$core$String*) NULL);
_29 = ((frost$core$Object*) _27);
frost$core$Frost$ref$frost$core$Object$Q(_29);
_31 = *(&local0);
_32 = ((frost$core$Object*) _31);
frost$core$Frost$unref$frost$core$Object$Q(_32);
*(&local0) = _27;
_35 = ((frost$core$Object*) _27);
frost$core$Frost$unref$frost$core$Object$Q(_35);
_37 = ((frost$core$Object*) _26);
frost$core$Frost$unref$frost$core$Object$Q(_37);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:584
_40 = &param0->parser;
_41 = *_40;
_42 = &param0->source;
_43 = *_42;
_44 = (frost$core$Int) {18446744073709551615u};
_45 = *(&local0);
org$frostlang$frostc$parser$Parser$start$frost$io$File$frost$core$Int$frost$core$String(_41, _43, _44, _45);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:585
_48 = &param0->parser;
_49 = *_48;
_50 = org$frostlang$frostc$parser$Parser$file$R$org$frostlang$frostc$ASTNode$Q(_49);
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
_52 = ((frost$core$Object*) _50);
frost$core$Frost$ref$frost$core$Object$Q(_52);
_54 = *(&local1);
_55 = ((frost$core$Object*) _54);
frost$core$Frost$unref$frost$core$Object$Q(_55);
*(&local1) = _50;
_58 = ((frost$core$Object*) _50);
frost$core$Frost$unref$frost$core$Object$Q(_58);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:586
_61 = *(&local1);
_62 = _61 != NULL;
_63 = (frost$core$Bit) {_62};
_64 = _63.value;
if (_64) goto block8; else goto block7;
block8:;
_66 = &param0->errorQueue;
_67 = *_66;
// begin inline call to method frost.threads.MessageQueue.pendingMessages():frost.core.Int from Markdown.frost:586:54
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:76
_70 = (frost$threads$ScopedLock*) frostObjectAlloc(sizeof(frost$threads$ScopedLock), (frost$core$Class*) &frost$threads$ScopedLock$class);
_71 = &_67->lock;
_72 = *_71;
frost$threads$ScopedLock$init$frost$threads$Lock(_70, _72);
*(&local2) = ((frost$threads$ScopedLock*) NULL);
_75 = ((frost$core$Object*) _70);
frost$core$Frost$ref$frost$core$Object$Q(_75);
_77 = *(&local2);
_78 = ((frost$core$Object*) _77);
frost$core$Frost$unref$frost$core$Object$Q(_78);
*(&local2) = _70;
_81 = ((frost$core$Object*) _70);
frost$core$Frost$unref$frost$core$Object$Q(_81);
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:77
_84 = &_67->count;
_85 = *_84;
_86 = *(&local2);
_87 = ((frost$core$Object*) _86);
frost$core$Frost$unref$frost$core$Object$Q(_87);
*(&local2) = ((frost$threads$ScopedLock*) NULL);
_91 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Markdown.frost:586:57
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_94 = _85.value;
_95 = _91.value;
_96 = _94 == _95;
_97 = (frost$core$Bit) {_96};
_99 = _97.value;
if (_99) goto block6; else goto block7;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:587
_102 = (frost$core$Bit) {false};
_103 = frost$core$Range$LTfrost$core$MutableString$Index$Q$GT$init$frost$core$MutableString$Index$Q$frost$core$MutableString$Index$Q$frost$core$Bit(((frost$core$MutableString$Index$nullable) { .nonnull = false }), ((frost$core$MutableString$Index$nullable) { .nonnull = false }), _102);
_104 = &param0->parser;
_105 = *_104;
_106 = ($fn381) param0->$class->vtable[16];
_107 = _106(param0, _105);
frost$core$MutableString$$IDXEQ$frost$core$Range$LTfrost$core$MutableString$Index$Q$GT$frost$core$String(param1, _103, _107);
_109 = ((frost$core$Object*) _107);
frost$core$Frost$unref$frost$core$Object$Q(_109);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:588
_112 = *(&local1);
_113 = ((frost$core$Object*) _112);
frost$core$Frost$unref$frost$core$Object$Q(_113);
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
_116 = *(&local0);
_117 = ((frost$core$Object*) _116);
frost$core$Frost$unref$frost$core$Object$Q(_117);
*(&local0) = ((frost$core$String*) NULL);
return;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:591
_122 = &param0->errorQueue;
_123 = *_122;
// begin inline call to method frost.threads.MessageQueue.clear() from Markdown.frost:591:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:116
goto block12;
block12:;
// begin inline call to method frost.threads.MessageQueue.hasMessage():frost.core.Bit from MessageQueue.frost:116:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:89
_129 = frost$threads$MessageQueue$pendingMessages$R$frost$core$Int(_123);
_130 = (frost$core$Int) {0u};
_131 = _129.value;
_132 = _130.value;
_133 = _131 > _132;
_134 = (frost$core$Bit) {_133};
_136 = _134.value;
if (_136) goto block13; else goto block14;
block13:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:117
_139 = frost$threads$MessageQueue$getMessage$R$frost$threads$MessageQueue$T(_123);
_140 = ((frost$core$Object*) _139);
frost$core$Frost$unref$frost$core$Object$Q(_140);
goto block12;
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:592
_145 = &param0->parser;
_146 = *_145;
_147 = &param0->source;
_148 = *_147;
_149 = (frost$core$Int) {18446744073709551615u};
_150 = *(&local0);
org$frostlang$frostc$parser$Parser$start$frost$io$File$frost$core$Int$frost$core$String(_146, _148, _149, _150);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:593
goto block16;
block16:;
_154 = &param0->parser;
_155 = *_154;
// begin inline call to method org.frostlang.frostc.parser.Parser.peek():org.frostlang.frostc.parser.Token from Markdown.frost:593:26
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/Parser.frost:167
_158 = &_155->pushbackBuffer;
_159 = *_158;
_160 = ((frost$collections$CollectionView*) _159);
ITable* $tmp382 = _160->$class->itable;
while ($tmp382->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp382 = $tmp382->next;
}
_161 = $tmp382->methods[0];
_162 = _161(_160);
_163 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Parser.frost:167:33
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_166 = _162.value;
_167 = _163.value;
_168 = _166 == _167;
_169 = (frost$core$Bit) {_168};
_171 = _169.value;
if (_171) goto block21; else goto block22;
block21:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/Parser.frost:168
_174 = org$frostlang$frostc$parser$Parser$next$R$org$frostlang$frostc$parser$Token(_155);
org$frostlang$frostc$parser$Parser$pushback$org$frostlang$frostc$parser$Token(_155, _174);
goto block22;
block22:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/Parser.frost:170
_178 = &_155->pushbackBuffer;
_179 = *_178;
_180 = &_155->pushbackBuffer;
_181 = *_180;
_182 = ((frost$collections$CollectionView*) _181);
ITable* $tmp383 = _182->$class->itable;
while ($tmp383->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp383 = $tmp383->next;
}
_183 = $tmp383->methods[0];
_184 = _183(_182);
_185 = (frost$core$Int) {1u};
_186 = _184.value;
_187 = _185.value;
_188 = _186 - _187;
_189 = (frost$core$Int) {_188};
// begin inline call to function frost.collections.SpecializedArray<org.frostlang.frostc.parser.Token>.[](index:frost.core.Int):org.frostlang.frostc.parser.Token from Parser.frost:170:30
_191 = (frost$core$Int) {0u};
_192 = _189.value;
_193 = _191.value;
_194 = _192 >= _193;
_195 = (frost$core$Bit) {_194};
_196 = _195.value;
if (_196) goto block27; else goto block26;
block27:;
_198 = ((frost$collections$CollectionView*) _179);
ITable* $tmp384 = _198->$class->itable;
while ($tmp384->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp384 = $tmp384->next;
}
_199 = $tmp384->methods[0];
_200 = _199(_198);
_201 = _189.value;
_202 = _200.value;
_203 = _201 < _202;
_204 = (frost$core$Bit) {_203};
_205 = _204.value;
if (_205) goto block25; else goto block26;
block26:;
_207 = (frost$core$Int) {67u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s385, _207, &$s386);
abort(); // unreachable
block25:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/SpecializedArray.frost:68
_211 = &_179->data;
_212 = *_211;
_213 = _212.value;
_214 = frost$core$Int64$init$frost$core$Int(_189);
_215 = _214.value;
_216 = ((org$frostlang$frostc$parser$Token*)_213)[_215];
_219 = _216.kind;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp387;
$tmp387 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$parser$Token$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp387->value = _219;
_220 = ((frost$core$Equatable*) $tmp387);
_221 = (frost$core$Int) {0u};
// begin inline call to org.frostlang.frostc.parser.Token.Kind.init(rv:frost.core.Int):org.frostlang.frostc.parser.Token.Kind from Markdown.frost:593:47
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_224 = &(&local4)->$rawValue;
*_224 = _221;
_226 = *(&local4);
*(&local3) = _226;
_229 = *(&local3);
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp388;
$tmp388 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$parser$Token$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp388->value = _229;
_230 = ((frost$core$Equatable*) $tmp388);
ITable* $tmp389 = _220->$class->itable;
while ($tmp389->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp389 = $tmp389->next;
}
_231 = $tmp389->methods[1];
_232 = _231(_220, _230);
_233 = _232.value;
_234 = ((frost$core$Object*) _230);
frost$core$Frost$unref$frost$core$Object$Q(_234);
_236 = ((frost$core$Object*) _220);
frost$core$Frost$unref$frost$core$Object$Q(_236);
if (_233) goto block19; else goto block18;
block19:;
_239 = &param0->errorQueue;
_240 = *_239;
// begin inline call to method frost.threads.MessageQueue.pendingMessages():frost.core.Int from Markdown.frost:593:80
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:76
_243 = (frost$threads$ScopedLock*) frostObjectAlloc(sizeof(frost$threads$ScopedLock), (frost$core$Class*) &frost$threads$ScopedLock$class);
_244 = &_240->lock;
_245 = *_244;
frost$threads$ScopedLock$init$frost$threads$Lock(_243, _245);
*(&local5) = ((frost$threads$ScopedLock*) NULL);
_248 = ((frost$core$Object*) _243);
frost$core$Frost$ref$frost$core$Object$Q(_248);
_250 = *(&local5);
_251 = ((frost$core$Object*) _250);
frost$core$Frost$unref$frost$core$Object$Q(_251);
*(&local5) = _243;
_254 = ((frost$core$Object*) _243);
frost$core$Frost$unref$frost$core$Object$Q(_254);
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:77
_257 = &_240->count;
_258 = *_257;
_259 = *(&local5);
_260 = ((frost$core$Object*) _259);
frost$core$Frost$unref$frost$core$Object$Q(_260);
*(&local5) = ((frost$threads$ScopedLock*) NULL);
_264 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Markdown.frost:593:83
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_267 = _258.value;
_268 = _264.value;
_269 = _267 == _268;
_270 = (frost$core$Bit) {_269};
_272 = _270.value;
if (_272) goto block17; else goto block18;
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:594
_275 = &param0->parser;
_276 = *_275;
_277 = org$frostlang$frostc$parser$Parser$statement$R$org$frostlang$frostc$ASTNode$Q(_276);
_278 = ((frost$core$Object*) _277);
frost$core$Frost$unref$frost$core$Object$Q(_278);
goto block16;
block18:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:596
_282 = &param0->errorQueue;
_283 = *_282;
// begin inline call to method frost.threads.MessageQueue.pendingMessages():frost.core.Int from Markdown.frost:596:38
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:76
_286 = (frost$threads$ScopedLock*) frostObjectAlloc(sizeof(frost$threads$ScopedLock), (frost$core$Class*) &frost$threads$ScopedLock$class);
_287 = &_283->lock;
_288 = *_287;
frost$threads$ScopedLock$init$frost$threads$Lock(_286, _288);
*(&local6) = ((frost$threads$ScopedLock*) NULL);
_291 = ((frost$core$Object*) _286);
frost$core$Frost$ref$frost$core$Object$Q(_291);
_293 = *(&local6);
_294 = ((frost$core$Object*) _293);
frost$core$Frost$unref$frost$core$Object$Q(_294);
*(&local6) = _286;
_297 = ((frost$core$Object*) _286);
frost$core$Frost$unref$frost$core$Object$Q(_297);
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:77
_300 = &_283->count;
_301 = *_300;
_302 = *(&local6);
_303 = ((frost$core$Object*) _302);
frost$core$Frost$unref$frost$core$Object$Q(_303);
*(&local6) = ((frost$threads$ScopedLock*) NULL);
_307 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Markdown.frost:596:41
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_310 = _301.value;
_311 = _307.value;
_312 = _310 == _311;
_313 = (frost$core$Bit) {_312};
_315 = _313.value;
if (_315) goto block31; else goto block32;
block31:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:597
_318 = (frost$core$Bit) {false};
_319 = frost$core$Range$LTfrost$core$MutableString$Index$Q$GT$init$frost$core$MutableString$Index$Q$frost$core$MutableString$Index$Q$frost$core$Bit(((frost$core$MutableString$Index$nullable) { .nonnull = false }), ((frost$core$MutableString$Index$nullable) { .nonnull = false }), _318);
_320 = &param0->parser;
_321 = *_320;
_322 = ($fn390) param0->$class->vtable[16];
_323 = _322(param0, _321);
frost$core$MutableString$$IDXEQ$frost$core$Range$LTfrost$core$MutableString$Index$Q$GT$frost$core$String(param1, _319, _323);
_325 = ((frost$core$Object*) _323);
frost$core$Frost$unref$frost$core$Object$Q(_325);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:598
_328 = *(&local1);
_329 = ((frost$core$Object*) _328);
frost$core$Frost$unref$frost$core$Object$Q(_329);
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
_332 = *(&local0);
_333 = ((frost$core$Object*) _332);
frost$core$Frost$unref$frost$core$Object$Q(_333);
*(&local0) = ((frost$core$String*) NULL);
return;
block32:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:601
_338 = &param0->errorQueue;
_339 = *_338;
// begin inline call to method frost.threads.MessageQueue.clear() from Markdown.frost:601:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:116
goto block36;
block36:;
// begin inline call to method frost.threads.MessageQueue.hasMessage():frost.core.Bit from MessageQueue.frost:116:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:89
_345 = frost$threads$MessageQueue$pendingMessages$R$frost$core$Int(_339);
_346 = (frost$core$Int) {0u};
_347 = _345.value;
_348 = _346.value;
_349 = _347 > _348;
_350 = (frost$core$Bit) {_349};
_352 = _350.value;
if (_352) goto block37; else goto block38;
block37:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:117
_355 = frost$threads$MessageQueue$getMessage$R$frost$threads$MessageQueue$T(_339);
_356 = ((frost$core$Object*) _355);
frost$core$Frost$unref$frost$core$Object$Q(_356);
goto block36;
block38:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:602
_361 = &param0->parser;
_362 = *_361;
_363 = &param0->source;
_364 = *_363;
_365 = (frost$core$Int) {18446744073709551615u};
_366 = *(&local0);
org$frostlang$frostc$parser$Parser$start$frost$io$File$frost$core$Int$frost$core$String(_362, _364, _365, _366);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:603
goto block40;
block40:;
_370 = &param0->parser;
_371 = *_370;
// begin inline call to method org.frostlang.frostc.parser.Parser.peek():org.frostlang.frostc.parser.Token from Markdown.frost:603:26
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/Parser.frost:167
_374 = &_371->pushbackBuffer;
_375 = *_374;
_376 = ((frost$collections$CollectionView*) _375);
ITable* $tmp391 = _376->$class->itable;
while ($tmp391->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp391 = $tmp391->next;
}
_377 = $tmp391->methods[0];
_378 = _377(_376);
_379 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Parser.frost:167:33
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_382 = _378.value;
_383 = _379.value;
_384 = _382 == _383;
_385 = (frost$core$Bit) {_384};
_387 = _385.value;
if (_387) goto block45; else goto block46;
block45:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/Parser.frost:168
_390 = org$frostlang$frostc$parser$Parser$next$R$org$frostlang$frostc$parser$Token(_371);
org$frostlang$frostc$parser$Parser$pushback$org$frostlang$frostc$parser$Token(_371, _390);
goto block46;
block46:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/Parser.frost:170
_394 = &_371->pushbackBuffer;
_395 = *_394;
_396 = &_371->pushbackBuffer;
_397 = *_396;
_398 = ((frost$collections$CollectionView*) _397);
ITable* $tmp392 = _398->$class->itable;
while ($tmp392->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp392 = $tmp392->next;
}
_399 = $tmp392->methods[0];
_400 = _399(_398);
_401 = (frost$core$Int) {1u};
_402 = _400.value;
_403 = _401.value;
_404 = _402 - _403;
_405 = (frost$core$Int) {_404};
// begin inline call to function frost.collections.SpecializedArray<org.frostlang.frostc.parser.Token>.[](index:frost.core.Int):org.frostlang.frostc.parser.Token from Parser.frost:170:30
_407 = (frost$core$Int) {0u};
_408 = _405.value;
_409 = _407.value;
_410 = _408 >= _409;
_411 = (frost$core$Bit) {_410};
_412 = _411.value;
if (_412) goto block51; else goto block50;
block51:;
_414 = ((frost$collections$CollectionView*) _395);
ITable* $tmp393 = _414->$class->itable;
while ($tmp393->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp393 = $tmp393->next;
}
_415 = $tmp393->methods[0];
_416 = _415(_414);
_417 = _405.value;
_418 = _416.value;
_419 = _417 < _418;
_420 = (frost$core$Bit) {_419};
_421 = _420.value;
if (_421) goto block49; else goto block50;
block50:;
_423 = (frost$core$Int) {67u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s394, _423, &$s395);
abort(); // unreachable
block49:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/SpecializedArray.frost:68
_427 = &_395->data;
_428 = *_427;
_429 = _428.value;
_430 = frost$core$Int64$init$frost$core$Int(_405);
_431 = _430.value;
_432 = ((org$frostlang$frostc$parser$Token*)_429)[_431];
_435 = _432.kind;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp396;
$tmp396 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$parser$Token$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp396->value = _435;
_436 = ((frost$core$Equatable*) $tmp396);
_437 = (frost$core$Int) {0u};
// begin inline call to org.frostlang.frostc.parser.Token.Kind.init(rv:frost.core.Int):org.frostlang.frostc.parser.Token.Kind from Markdown.frost:603:47
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_440 = &(&local8)->$rawValue;
*_440 = _437;
_442 = *(&local8);
*(&local7) = _442;
_445 = *(&local7);
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp397;
$tmp397 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$parser$Token$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp397->value = _445;
_446 = ((frost$core$Equatable*) $tmp397);
ITable* $tmp398 = _436->$class->itable;
while ($tmp398->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp398 = $tmp398->next;
}
_447 = $tmp398->methods[1];
_448 = _447(_436, _446);
_449 = _448.value;
_450 = ((frost$core$Object*) _446);
frost$core$Frost$unref$frost$core$Object$Q(_450);
_452 = ((frost$core$Object*) _436);
frost$core$Frost$unref$frost$core$Object$Q(_452);
if (_449) goto block43; else goto block42;
block43:;
_455 = &param0->errorQueue;
_456 = *_455;
// begin inline call to method frost.threads.MessageQueue.pendingMessages():frost.core.Int from Markdown.frost:603:80
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:76
_459 = (frost$threads$ScopedLock*) frostObjectAlloc(sizeof(frost$threads$ScopedLock), (frost$core$Class*) &frost$threads$ScopedLock$class);
_460 = &_456->lock;
_461 = *_460;
frost$threads$ScopedLock$init$frost$threads$Lock(_459, _461);
*(&local9) = ((frost$threads$ScopedLock*) NULL);
_464 = ((frost$core$Object*) _459);
frost$core$Frost$ref$frost$core$Object$Q(_464);
_466 = *(&local9);
_467 = ((frost$core$Object*) _466);
frost$core$Frost$unref$frost$core$Object$Q(_467);
*(&local9) = _459;
_470 = ((frost$core$Object*) _459);
frost$core$Frost$unref$frost$core$Object$Q(_470);
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:77
_473 = &_456->count;
_474 = *_473;
_475 = *(&local9);
_476 = ((frost$core$Object*) _475);
frost$core$Frost$unref$frost$core$Object$Q(_476);
*(&local9) = ((frost$threads$ScopedLock*) NULL);
_480 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Markdown.frost:603:83
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_483 = _474.value;
_484 = _480.value;
_485 = _483 == _484;
_486 = (frost$core$Bit) {_485};
_488 = _486.value;
if (_488) goto block41; else goto block42;
block41:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:604
_491 = &param0->parser;
_492 = *_491;
_493 = org$frostlang$frostc$parser$Parser$expression$R$org$frostlang$frostc$ASTNode$Q(_492);
_494 = ((frost$core$Object*) _493);
frost$core$Frost$unref$frost$core$Object$Q(_494);
goto block40;
block42:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:606
_498 = &param0->errorQueue;
_499 = *_498;
// begin inline call to method frost.threads.MessageQueue.pendingMessages():frost.core.Int from Markdown.frost:606:38
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:76
_502 = (frost$threads$ScopedLock*) frostObjectAlloc(sizeof(frost$threads$ScopedLock), (frost$core$Class*) &frost$threads$ScopedLock$class);
_503 = &_499->lock;
_504 = *_503;
frost$threads$ScopedLock$init$frost$threads$Lock(_502, _504);
*(&local10) = ((frost$threads$ScopedLock*) NULL);
_507 = ((frost$core$Object*) _502);
frost$core$Frost$ref$frost$core$Object$Q(_507);
_509 = *(&local10);
_510 = ((frost$core$Object*) _509);
frost$core$Frost$unref$frost$core$Object$Q(_510);
*(&local10) = _502;
_513 = ((frost$core$Object*) _502);
frost$core$Frost$unref$frost$core$Object$Q(_513);
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:77
_516 = &_499->count;
_517 = *_516;
_518 = *(&local10);
_519 = ((frost$core$Object*) _518);
frost$core$Frost$unref$frost$core$Object$Q(_519);
*(&local10) = ((frost$threads$ScopedLock*) NULL);
_523 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Markdown.frost:606:41
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_526 = _517.value;
_527 = _523.value;
_528 = _526 == _527;
_529 = (frost$core$Bit) {_528};
_531 = _529.value;
if (_531) goto block55; else goto block56;
block55:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:607
_534 = (frost$core$Bit) {false};
_535 = frost$core$Range$LTfrost$core$MutableString$Index$Q$GT$init$frost$core$MutableString$Index$Q$frost$core$MutableString$Index$Q$frost$core$Bit(((frost$core$MutableString$Index$nullable) { .nonnull = false }), ((frost$core$MutableString$Index$nullable) { .nonnull = false }), _534);
_536 = &param0->parser;
_537 = *_536;
_538 = ($fn399) param0->$class->vtable[16];
_539 = _538(param0, _537);
frost$core$MutableString$$IDXEQ$frost$core$Range$LTfrost$core$MutableString$Index$Q$GT$frost$core$String(param1, _535, _539);
_541 = ((frost$core$Object*) _539);
frost$core$Frost$unref$frost$core$Object$Q(_541);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:608
_544 = *(&local1);
_545 = ((frost$core$Object*) _544);
frost$core$Frost$unref$frost$core$Object$Q(_545);
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
_548 = *(&local0);
_549 = ((frost$core$Object*) _548);
frost$core$Frost$unref$frost$core$Object$Q(_549);
*(&local0) = ((frost$core$String*) NULL);
return;
block56:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:611
_554 = &param0->errorQueue;
_555 = *_554;
// begin inline call to method frost.threads.MessageQueue.clear() from Markdown.frost:611:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:116
goto block60;
block60:;
// begin inline call to method frost.threads.MessageQueue.hasMessage():frost.core.Bit from MessageQueue.frost:116:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:89
_561 = frost$threads$MessageQueue$pendingMessages$R$frost$core$Int(_555);
_562 = (frost$core$Int) {0u};
_563 = _561.value;
_564 = _562.value;
_565 = _563 > _564;
_566 = (frost$core$Bit) {_565};
_568 = _566.value;
if (_568) goto block61; else goto block62;
block61:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:117
_571 = frost$threads$MessageQueue$getMessage$R$frost$threads$MessageQueue$T(_555);
_572 = ((frost$core$Object*) _571);
frost$core$Frost$unref$frost$core$Object$Q(_572);
goto block60;
block62:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:612
_577 = &param0->parser;
_578 = *_577;
_579 = &param0->source;
_580 = *_579;
_581 = (frost$core$Int) {18446744073709551615u};
_582 = *(&local0);
org$frostlang$frostc$parser$Parser$start$frost$io$File$frost$core$Int$frost$core$String(_578, _580, _581, _582);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:613
goto block64;
block64:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:614
_587 = &param0->parser;
_588 = *_587;
_589 = org$frostlang$frostc$parser$Parser$next$R$org$frostlang$frostc$parser$Token(_588);
*(&local11) = _589;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:615
_592 = *(&local11);
_593 = _592.kind;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp400;
$tmp400 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$parser$Token$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp400->value = _593;
_594 = ((frost$core$Equatable*) $tmp400);
_595 = (frost$core$Int) {0u};
// begin inline call to org.frostlang.frostc.parser.Token.Kind.init(rv:frost.core.Int):org.frostlang.frostc.parser.Token.Kind from Markdown.frost:615:38
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_598 = &(&local13)->$rawValue;
*_598 = _595;
_600 = *(&local13);
*(&local12) = _600;
_603 = *(&local12);
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp401;
$tmp401 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$parser$Token$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp401->value = _603;
_604 = ((frost$core$Equatable*) $tmp401);
ITable* $tmp402 = _594->$class->itable;
while ($tmp402->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp402 = $tmp402->next;
}
_605 = $tmp402->methods[0];
_606 = _605(_594, _604);
_607 = _606.value;
_608 = ((frost$core$Object*) _604);
frost$core$Frost$unref$frost$core$Object$Q(_608);
_610 = ((frost$core$Object*) _594);
frost$core$Frost$unref$frost$core$Object$Q(_610);
if (_607) goto block66; else goto block67;
block66:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:616
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:619
_617 = (frost$core$Bit) {false};
_618 = frost$core$Range$LTfrost$core$MutableString$Index$Q$GT$init$frost$core$MutableString$Index$Q$frost$core$MutableString$Index$Q$frost$core$Bit(((frost$core$MutableString$Index$nullable) { .nonnull = false }), ((frost$core$MutableString$Index$nullable) { .nonnull = false }), _617);
_619 = &param0->parser;
_620 = *_619;
_621 = ($fn403) param0->$class->vtable[16];
_622 = _621(param0, _620);
frost$core$MutableString$$IDXEQ$frost$core$Range$LTfrost$core$MutableString$Index$Q$GT$frost$core$String(param1, _618, _622);
_624 = ((frost$core$Object*) _622);
frost$core$Frost$unref$frost$core$Object$Q(_624);
_626 = *(&local1);
_627 = ((frost$core$Object*) _626);
frost$core$Frost$unref$frost$core$Object$Q(_627);
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
_630 = *(&local0);
_631 = ((frost$core$Object*) _630);
frost$core$Frost$unref$frost$core$Object$Q(_631);
*(&local0) = ((frost$core$String*) NULL);
return;
block67:;
goto block64;

}
void org$frostlang$frostc$frostdoc$Markdown$encodeCode$frost$core$MutableString(void* rawSelf, frost$core$MutableString* param1) {
org$frostlang$frostc$frostdoc$Markdown* param0 = (org$frostlang$frostc$frostdoc$Markdown*) rawSelf;

frost$core$Matcher* local0 = NULL;
frost$core$RegularExpression* _1;
frost$core$Bit _5;
frost$core$Object* _8;
$fn404 _9;
frost$core$String* _10;
frost$core$Matcher* _11;
frost$core$Object* _13;
frost$core$Matcher* _15;
frost$core$Object* _16;
frost$core$Object* _19;
frost$core$Object* _21;
frost$core$Matcher* _27;
frost$core$Bit _28;
bool _29;
frost$core$Matcher* _32;
frost$core$Matcher* _36;
frost$core$Matcher* _38;
frost$core$Object* _39;
frost$core$Object* _44;
$fn405 _47;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:625
_1 = (frost$core$RegularExpression*) frostObjectAlloc(sizeof(frost$core$RegularExpression), (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String(_1, &$s406);
// begin inline call to method frost.core.MutableString.replace(search:frost.core.RegularExpression, replacement:frost.core.String) from Markdown.frost:625:19
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:401
_5 = (frost$core$Bit) {true};
// begin inline call to method frost.core.MutableString.replace(search:frost.core.RegularExpression, replacement:frost.core.String, allowGroupReferences:frost.core.Bit) from MutableString.frost:401:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:406
_8 = ((frost$core$Object*) param1);
_9 = ($fn407) _8->$class->vtable[0];
_10 = _9(_8);
_11 = frost$core$RegularExpression$matcher$frost$core$String$R$frost$core$Matcher(_1, _10);
*(&local0) = ((frost$core$Matcher*) NULL);
_13 = ((frost$core$Object*) _11);
frost$core$Frost$ref$frost$core$Object$Q(_13);
_15 = *(&local0);
_16 = ((frost$core$Object*) _15);
frost$core$Frost$unref$frost$core$Object$Q(_16);
*(&local0) = _11;
_19 = ((frost$core$Object*) _11);
frost$core$Frost$unref$frost$core$Object$Q(_19);
_21 = ((frost$core$Object*) _10);
frost$core$Frost$unref$frost$core$Object$Q(_21);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:407
frost$core$MutableString$clear(param1);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:408
goto block3;
block3:;
_27 = *(&local0);
_28 = frost$core$Matcher$find$R$frost$core$Bit(_27);
_29 = _28.value;
if (_29) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:409
_32 = *(&local0);
frost$core$Matcher$appendReplacement$frost$core$MutableString$frost$core$String$frost$core$Bit(_32, param1, &$s408, _5);
goto block3;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:411
_36 = *(&local0);
frost$core$Matcher$appendTail$frost$core$MutableString(_36, param1);
_38 = *(&local0);
_39 = ((frost$core$Object*) _38);
frost$core$Frost$unref$frost$core$Object$Q(_39);
*(&local0) = ((frost$core$Matcher*) NULL);
_44 = ((frost$core$Object*) _1);
frost$core$Frost$unref$frost$core$Object$Q(_44);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:626
_47 = ($fn409) param0->$class->vtable[17];
_47(param0, param1);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:627
frost$core$MutableString$replace$frost$core$String$frost$core$String(param1, &$s410, &$s411);
return;

}
void org$frostlang$frostc$frostdoc$Markdown$doLists$frost$core$MutableString(void* rawSelf, frost$core$MutableString* param1) {
org$frostlang$frostc$frostdoc$Markdown* param0 = (org$frostlang$frostc$frostdoc$Markdown*) rawSelf;

frost$core$Int local0;
frost$core$String* local1 = NULL;
frost$core$RegularExpression* local2 = NULL;
frost$core$RegularExpression* local3 = NULL;
frost$core$Int _1;
frost$core$Int _2;
int64_t _3;
int64_t _4;
int64_t _5;
frost$core$Int _6;
frost$core$Int _9;
frost$core$Object* _10;
$fn412 _13;
frost$core$String* _14;
frost$core$String* _15;
frost$core$Object* _16;
frost$core$Object* _18;
frost$core$Object* _20;
frost$core$String* _23;
frost$core$String* _24;
frost$core$Object* _26;
frost$core$String* _28;
frost$core$Object* _29;
frost$core$Object* _32;
frost$core$Object* _34;
frost$core$Object* _36;
frost$core$Object* _38;
frost$core$Int* _41;
frost$core$Int _42;
frost$core$Int _43;
int64_t _44;
int64_t _45;
bool _46;
frost$core$Bit _47;
bool _48;
frost$core$RegularExpression* _51;
frost$core$String* _52;
frost$core$String* _53;
frost$core$String* _54;
frost$core$Object* _57;
frost$core$RegularExpression* _59;
frost$core$Object* _60;
frost$core$Object* _63;
frost$core$Object* _65;
frost$core$Object* _67;
frost$core$RegularExpression* _70;
org$frostlang$frostc$frostdoc$Markdown$_Closure14* _71;
frost$core$Int8* _73;
frost$core$MutableMethod* _74;
frost$core$Object* _75;
frost$core$Int8** _78;
frost$core$Object** _82;
frost$core$Object* _83;
frost$core$Object** _85;
frost$core$MutableMethod* _88;
frost$core$Object* _90;
frost$core$Object* _92;
frost$core$RegularExpression* _94;
frost$core$Object* _95;
frost$core$RegularExpression* _101;
frost$core$String* _102;
frost$core$String* _103;
frost$core$Object* _106;
frost$core$RegularExpression* _108;
frost$core$Object* _109;
frost$core$Object* _112;
frost$core$Object* _114;
frost$core$RegularExpression* _117;
org$frostlang$frostc$frostdoc$Markdown$_Closure16* _118;
frost$core$Int8* _120;
frost$core$MutableMethod* _121;
frost$core$Object* _122;
frost$core$Int8** _125;
frost$core$Object** _129;
frost$core$Object* _130;
frost$core$Object** _132;
frost$core$MutableMethod* _135;
frost$core$Object* _137;
frost$core$Object* _139;
frost$core$RegularExpression* _141;
frost$core$Object* _142;
frost$core$String* _146;
frost$core$Object* _147;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:631
_1 = (frost$core$Int) {4u};
_2 = (frost$core$Int) {1u};
_3 = _1.value;
_4 = _2.value;
_5 = _3 - _4;
_6 = (frost$core$Int) {_5};
*(&local0) = _6;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:633
_9 = *(&local0);
frost$core$Int$wrapper* $tmp413;
$tmp413 = (frost$core$Int$wrapper*) frostObjectAlloc(sizeof(frost$core$Int$wrapper), (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp413->value = _9;
_10 = ((frost$core$Object*) $tmp413);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Markdown.frost:634:17
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
_13 = ($fn414) _10->$class->vtable[0];
_14 = _13(_10);
_15 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s415, _14);
_16 = ((frost$core$Object*) _15);
frost$core$Frost$ref$frost$core$Object$Q(_16);
_18 = ((frost$core$Object*) _15);
frost$core$Frost$unref$frost$core$Object$Q(_18);
_20 = ((frost$core$Object*) _14);
frost$core$Frost$unref$frost$core$Object$Q(_20);
_23 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_15, &$s416);
_24 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_23, &$s417);
*(&local1) = ((frost$core$String*) NULL);
_26 = ((frost$core$Object*) _24);
frost$core$Frost$ref$frost$core$Object$Q(_26);
_28 = *(&local1);
_29 = ((frost$core$Object*) _28);
frost$core$Frost$unref$frost$core$Object$Q(_29);
*(&local1) = _24;
_32 = ((frost$core$Object*) _24);
frost$core$Frost$unref$frost$core$Object$Q(_32);
_34 = ((frost$core$Object*) _23);
frost$core$Frost$unref$frost$core$Object$Q(_34);
_36 = ((frost$core$Object*) _15);
frost$core$Frost$unref$frost$core$Object$Q(_36);
_38 = _10;
frost$core$Frost$unref$frost$core$Object$Q(_38);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:656
_41 = &param0->listLevel;
_42 = *_41;
_43 = (frost$core$Int) {0u};
_44 = _42.value;
_45 = _43.value;
_46 = _44 > _45;
_47 = (frost$core$Bit) {_46};
_48 = _47.value;
if (_48) goto block2; else goto block4;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:657
_51 = (frost$core$RegularExpression*) frostObjectAlloc(sizeof(frost$core$RegularExpression), (frost$core$Class*) &frost$core$RegularExpression$class);
_52 = *(&local1);
_53 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s418, _52);
_54 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_53, &$s419);
frost$core$RegularExpression$init$frost$core$String(_51, _54);
*(&local2) = ((frost$core$RegularExpression*) NULL);
_57 = ((frost$core$Object*) _51);
frost$core$Frost$ref$frost$core$Object$Q(_57);
_59 = *(&local2);
_60 = ((frost$core$Object*) _59);
frost$core$Frost$unref$frost$core$Object$Q(_60);
*(&local2) = _51;
_63 = ((frost$core$Object*) _54);
frost$core$Frost$unref$frost$core$Object$Q(_63);
_65 = ((frost$core$Object*) _53);
frost$core$Frost$unref$frost$core$Object$Q(_65);
_67 = ((frost$core$Object*) _51);
frost$core$Frost$unref$frost$core$Object$Q(_67);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:658
_70 = *(&local2);
_71 = (org$frostlang$frostc$frostdoc$Markdown$_Closure14*) frostObjectAlloc(sizeof(org$frostlang$frostc$frostdoc$Markdown$_Closure14), (frost$core$Class*) &org$frostlang$frostc$frostdoc$Markdown$_Closure14$class);
org$frostlang$frostc$frostdoc$Markdown$_Closure14$init$org$frostlang$frostc$frostdoc$Markdown(_71, param0);
_73 = ((frost$core$Int8*) org$frostlang$frostc$frostdoc$Markdown$_Closure14$$anonymous13$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$Object);
_74 = (frost$core$MutableMethod*) frostObjectAlloc(sizeof(frost$core$MutableMethod), (frost$core$Class*) &frost$core$MutableMethod$class);
_75 = ((frost$core$Object*) _71);
// begin inline call to frost.core.MutableMethod.init(pointer:frost.unsafe.Pointer<frost.core.Int8>, target:frost.core.Object?) from Markdown.frost:658:44
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableMethod.frost:32
_78 = &_74->pointer;
*_78 = _73;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableMethod.frost:33
frost$core$Frost$ref$frost$core$Object$Q(_75);
_82 = &_74->target;
_83 = *_82;
frost$core$Frost$unref$frost$core$Object$Q(_83);
_85 = &_74->target;
*_85 = _75;
_88 = _74;
frost$core$MutableString$replace$frost$core$RegularExpression$$LPfrost$collections$ListView$LTfrost$core$String$Q$GT$RP$EQ$GT$LPfrost$core$Object$RP(param1, _70, _88);
_90 = ((frost$core$Object*) _74);
frost$core$Frost$unref$frost$core$Object$Q(_90);
_92 = ((frost$core$Object*) _71);
frost$core$Frost$unref$frost$core$Object$Q(_92);
_94 = *(&local2);
_95 = ((frost$core$Object*) _94);
frost$core$Frost$unref$frost$core$Object$Q(_95);
*(&local2) = ((frost$core$RegularExpression*) NULL);
goto block3;
block4:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:684
_101 = (frost$core$RegularExpression*) frostObjectAlloc(sizeof(frost$core$RegularExpression), (frost$core$Class*) &frost$core$RegularExpression$class);
_102 = *(&local1);
_103 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s420, _102);
frost$core$RegularExpression$init$frost$core$String(_101, _103);
*(&local3) = ((frost$core$RegularExpression*) NULL);
_106 = ((frost$core$Object*) _101);
frost$core$Frost$ref$frost$core$Object$Q(_106);
_108 = *(&local3);
_109 = ((frost$core$Object*) _108);
frost$core$Frost$unref$frost$core$Object$Q(_109);
*(&local3) = _101;
_112 = ((frost$core$Object*) _103);
frost$core$Frost$unref$frost$core$Object$Q(_112);
_114 = ((frost$core$Object*) _101);
frost$core$Frost$unref$frost$core$Object$Q(_114);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:685
_117 = *(&local3);
_118 = (org$frostlang$frostc$frostdoc$Markdown$_Closure16*) frostObjectAlloc(sizeof(org$frostlang$frostc$frostdoc$Markdown$_Closure16), (frost$core$Class*) &org$frostlang$frostc$frostdoc$Markdown$_Closure16$class);
org$frostlang$frostc$frostdoc$Markdown$_Closure16$init$org$frostlang$frostc$frostdoc$Markdown(_118, param0);
_120 = ((frost$core$Int8*) org$frostlang$frostc$frostdoc$Markdown$_Closure16$$anonymous15$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$Object);
_121 = (frost$core$MutableMethod*) frostObjectAlloc(sizeof(frost$core$MutableMethod), (frost$core$Class*) &frost$core$MutableMethod$class);
_122 = ((frost$core$Object*) _118);
// begin inline call to frost.core.MutableMethod.init(pointer:frost.unsafe.Pointer<frost.core.Int8>, target:frost.core.Object?) from Markdown.frost:685:44
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableMethod.frost:32
_125 = &_121->pointer;
*_125 = _120;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableMethod.frost:33
frost$core$Frost$ref$frost$core$Object$Q(_122);
_129 = &_121->target;
_130 = *_129;
frost$core$Frost$unref$frost$core$Object$Q(_130);
_132 = &_121->target;
*_132 = _122;
_135 = _121;
frost$core$MutableString$replace$frost$core$RegularExpression$$LPfrost$collections$ListView$LTfrost$core$String$Q$GT$RP$EQ$GT$LPfrost$core$Object$RP(param1, _117, _135);
_137 = ((frost$core$Object*) _121);
frost$core$Frost$unref$frost$core$Object$Q(_137);
_139 = ((frost$core$Object*) _118);
frost$core$Frost$unref$frost$core$Object$Q(_139);
_141 = *(&local3);
_142 = ((frost$core$Object*) _141);
frost$core$Frost$unref$frost$core$Object$Q(_142);
*(&local3) = ((frost$core$RegularExpression*) NULL);
goto block3;
block3:;
_146 = *(&local1);
_147 = ((frost$core$Object*) _146);
frost$core$Frost$unref$frost$core$Object$Q(_147);
*(&local1) = ((frost$core$String*) NULL);
return;

}
frost$core$String* org$frostlang$frostc$frostdoc$Markdown$processListItems$frost$core$String$R$frost$core$String(void* rawSelf, frost$core$String* param1) {
org$frostlang$frostc$frostdoc$Markdown* param0 = (org$frostlang$frostc$frostdoc$Markdown*) rawSelf;

frost$core$String* local0 = NULL;
frost$core$RegularExpression* local1 = NULL;
frost$core$Int* _1;
frost$core$Int _2;
frost$core$Int _3;
int64_t _4;
int64_t _5;
int64_t _6;
frost$core$Int _7;
frost$core$Int* _8;
frost$core$RegularExpression* _11;
frost$core$Bit _15;
frost$core$String* _16;
frost$core$Object* _17;
frost$core$Object* _19;
frost$core$Object* _23;
frost$core$String* _25;
frost$core$Object* _26;
frost$core$Object* _29;
frost$core$Object* _31;
frost$core$RegularExpression* _34;
frost$core$String* _35;
frost$core$String* _36;
frost$core$Int _37;
frost$core$Object* _40;
frost$core$RegularExpression* _42;
frost$core$Object* _43;
frost$core$Object* _46;
frost$core$Object* _48;
frost$core$Object* _50;
frost$core$String* _53;
frost$core$RegularExpression* _54;
org$frostlang$frostc$frostdoc$Markdown$_Closure18* _55;
frost$core$Int8* _57;
frost$core$MutableMethod* _58;
frost$core$Object* _59;
frost$core$Int8** _62;
frost$core$Object** _66;
frost$core$Object* _67;
frost$core$Object** _69;
frost$core$MutableMethod* _72;
frost$core$MutableMethod* _73;
frost$core$String* _74;
frost$core$Object* _75;
frost$core$String* _77;
frost$core$Object* _78;
frost$core$Object* _81;
frost$core$Object* _83;
frost$core$Object* _85;
frost$core$Int* _88;
frost$core$Int _89;
frost$core$Int _90;
int64_t _91;
int64_t _92;
int64_t _93;
frost$core$Int _94;
frost$core$Int* _95;
frost$core$String* _98;
frost$core$Object* _99;
frost$core$RegularExpression* _101;
frost$core$Object* _102;
frost$core$String* _105;
frost$core$Object* _106;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:726
_1 = &param0->listLevel;
_2 = *_1;
_3 = (frost$core$Int) {1u};
_4 = _2.value;
_5 = _3.value;
_6 = _4 + _5;
_7 = (frost$core$Int) {_6};
_8 = &param0->listLevel;
*_8 = _7;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:729
_11 = (frost$core$RegularExpression*) frostObjectAlloc(sizeof(frost$core$RegularExpression), (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String(_11, &$s421);
// begin inline call to function frost.core.String.replace(search:frost.core.RegularExpression, replacement:frost.core.String):frost.core.String from Markdown.frost:729:36
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1120
_15 = (frost$core$Bit) {true};
_16 = frost$core$String$replace$frost$core$RegularExpression$frost$core$String$frost$core$Bit$R$frost$core$String(param1, _11, &$s422, _15);
_17 = ((frost$core$Object*) _16);
frost$core$Frost$ref$frost$core$Object$Q(_17);
_19 = ((frost$core$Object*) _16);
frost$core$Frost$unref$frost$core$Object$Q(_19);
*(&local0) = ((frost$core$String*) NULL);
_23 = ((frost$core$Object*) _16);
frost$core$Frost$ref$frost$core$Object$Q(_23);
_25 = *(&local0);
_26 = ((frost$core$Object*) _25);
frost$core$Frost$unref$frost$core$Object$Q(_26);
*(&local0) = _16;
_29 = ((frost$core$Object*) _16);
frost$core$Frost$unref$frost$core$Object$Q(_29);
_31 = ((frost$core$Object*) _11);
frost$core$Frost$unref$frost$core$Object$Q(_31);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:731
_34 = (frost$core$RegularExpression*) frostObjectAlloc(sizeof(frost$core$RegularExpression), (frost$core$Class*) &frost$core$RegularExpression$class);
_35 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s423, &$s424);
_36 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_35, &$s425);
_37 = (frost$core$Int) {1u};
frost$core$RegularExpression$init$frost$core$String$frost$core$Int(_34, _36, _37);
*(&local1) = ((frost$core$RegularExpression*) NULL);
_40 = ((frost$core$Object*) _34);
frost$core$Frost$ref$frost$core$Object$Q(_40);
_42 = *(&local1);
_43 = ((frost$core$Object*) _42);
frost$core$Frost$unref$frost$core$Object$Q(_43);
*(&local1) = _34;
_46 = ((frost$core$Object*) _36);
frost$core$Frost$unref$frost$core$Object$Q(_46);
_48 = ((frost$core$Object*) _35);
frost$core$Frost$unref$frost$core$Object$Q(_48);
_50 = ((frost$core$Object*) _34);
frost$core$Frost$unref$frost$core$Object$Q(_50);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:736
_53 = *(&local0);
_54 = *(&local1);
_55 = (org$frostlang$frostc$frostdoc$Markdown$_Closure18*) frostObjectAlloc(sizeof(org$frostlang$frostc$frostdoc$Markdown$_Closure18), (frost$core$Class*) &org$frostlang$frostc$frostdoc$Markdown$_Closure18$class);
org$frostlang$frostc$frostdoc$Markdown$_Closure18$init$org$frostlang$frostc$frostdoc$Markdown(_55, param0);
_57 = ((frost$core$Int8*) org$frostlang$frostc$frostdoc$Markdown$_Closure18$$anonymous17$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$String);
_58 = (frost$core$MutableMethod*) frostObjectAlloc(sizeof(frost$core$MutableMethod), (frost$core$Class*) &frost$core$MutableMethod$class);
_59 = ((frost$core$Object*) _55);
// begin inline call to frost.core.MutableMethod.init(pointer:frost.unsafe.Pointer<frost.core.Int8>, target:frost.core.Object?) from Markdown.frost:736:33
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableMethod.frost:32
_62 = &_58->pointer;
*_62 = _57;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableMethod.frost:33
frost$core$Frost$ref$frost$core$Object$Q(_59);
_66 = &_58->target;
_67 = *_66;
frost$core$Frost$unref$frost$core$Object$Q(_67);
_69 = &_58->target;
*_69 = _59;
_72 = _58;
_73 = _72;
_74 = frost$core$String$replace$frost$core$RegularExpression$$LPfrost$collections$ListView$LTfrost$core$String$Q$GT$RP$EQ$GT$LPfrost$core$Object$RP$R$frost$core$String(_53, _54, _73);
_75 = ((frost$core$Object*) _74);
frost$core$Frost$ref$frost$core$Object$Q(_75);
_77 = *(&local0);
_78 = ((frost$core$Object*) _77);
frost$core$Frost$unref$frost$core$Object$Q(_78);
*(&local0) = _74;
_81 = ((frost$core$Object*) _74);
frost$core$Frost$unref$frost$core$Object$Q(_81);
_83 = ((frost$core$Object*) _58);
frost$core$Frost$unref$frost$core$Object$Q(_83);
_85 = ((frost$core$Object*) _55);
frost$core$Frost$unref$frost$core$Object$Q(_85);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:753
_88 = &param0->listLevel;
_89 = *_88;
_90 = (frost$core$Int) {1u};
_91 = _89.value;
_92 = _90.value;
_93 = _91 - _92;
_94 = (frost$core$Int) {_93};
_95 = &param0->listLevel;
*_95 = _94;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:754
_98 = *(&local0);
_99 = ((frost$core$Object*) _98);
frost$core$Frost$ref$frost$core$Object$Q(_99);
_101 = *(&local1);
_102 = ((frost$core$Object*) _101);
frost$core$Frost$unref$frost$core$Object$Q(_102);
*(&local1) = ((frost$core$RegularExpression*) NULL);
_105 = *(&local0);
_106 = ((frost$core$Object*) _105);
frost$core$Frost$unref$frost$core$Object$Q(_106);
*(&local0) = ((frost$core$String*) NULL);
return _98;

}
frost$core$Bit org$frostlang$frostc$frostdoc$Markdown$hasParagraphBreak$frost$core$MutableString$R$frost$core$Bit(frost$core$MutableString* param0) {

frost$core$MutableString$Index _5;
frost$core$MutableString$Index$nullable _6;
bool _8;
frost$core$Bit _9;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:759
// begin inline call to function frost.core.MutableString.contains(s:frost.core.String):frost.core.Bit from Markdown.frost:759:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:298
// begin inline call to function frost.core.MutableString.indexOf(s:frost.core.String):frost.core.MutableString.Index? from MutableString.frost:298:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:256
_5 = frost$core$MutableString$get_start$R$frost$core$MutableString$Index(param0);
_6 = frost$core$MutableString$indexOf$frost$core$String$frost$core$MutableString$Index$R$frost$core$MutableString$Index$Q(param0, &$s426, _5);
_8 = _6.nonnull;
_9 = (frost$core$Bit) {_8};
return _9;

}
frost$core$Bit org$frostlang$frostc$frostdoc$Markdown$isEmptyString$frost$core$String$Q$R$frost$core$Bit(frost$core$String* param0) {

frost$core$Bit local0;
bool _1;
frost$core$Bit _2;
bool _3;
bool _7;
frost$core$Bit _8;
bool _9;
frost$core$Int _11;
frost$core$String* _14;
frost$core$Bit _15;
frost$core$Bit _18;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:764
_1 = param0 == NULL;
_2 = (frost$core$Bit) {_1};
_3 = _2.value;
if (_3) goto block1; else goto block2;
block1:;
*(&local0) = _2;
goto block3;
block2:;
_7 = param0 != NULL;
_8 = (frost$core$Bit) {_7};
_9 = _8.value;
if (_9) goto block4; else goto block5;
block5:;
_11 = (frost$core$Int) {764u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s427, _11, &$s428);
abort(); // unreachable
block4:;
_14 = param0;
_15 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(_14, &$s429);
*(&local0) = _15;
goto block3;
block3:;
_18 = *(&local0);
return _18;

}
void org$frostlang$frostc$frostdoc$Markdown$doHeaders$frost$core$MutableString(void* rawSelf, frost$core$MutableString* param1) {
org$frostlang$frostc$frostdoc$Markdown* param0 = (org$frostlang$frostc$frostdoc$Markdown*) rawSelf;

frost$core$RegularExpression* local0 = NULL;
frost$core$RegularExpression* _1;
org$frostlang$frostc$frostdoc$Markdown$_Closure20* _3;
frost$core$Int8* _5;
frost$core$MutableMethod* _6;
frost$core$Object* _7;
frost$core$Int8** _10;
frost$core$Object** _14;
frost$core$Object* _15;
frost$core$Object** _17;
frost$core$MutableMethod* _20;
frost$core$MutableMethod* _21;
frost$core$Object* _23;
frost$core$Object* _25;
frost$core$Object* _27;
frost$core$RegularExpression* _30;
org$frostlang$frostc$frostdoc$Markdown$_Closure22* _32;
frost$core$Int8* _34;
frost$core$MutableMethod* _35;
frost$core$Object* _36;
frost$core$Int8** _39;
frost$core$Object** _43;
frost$core$Object* _44;
frost$core$Object** _46;
frost$core$MutableMethod* _49;
frost$core$MutableMethod* _50;
frost$core$Object* _52;
frost$core$Object* _54;
frost$core$Object* _56;
frost$core$RegularExpression* _59;
frost$core$Int _60;
frost$core$Object* _63;
frost$core$RegularExpression* _65;
frost$core$Object* _66;
frost$core$Object* _69;
frost$core$RegularExpression* _72;
org$frostlang$frostc$frostdoc$Markdown$_Closure24* _73;
frost$core$Int8* _75;
frost$core$MutableMethod* _76;
frost$core$Object* _77;
frost$core$Int8** _80;
frost$core$Object** _84;
frost$core$Object* _85;
frost$core$Object** _87;
frost$core$MutableMethod* _90;
frost$core$Object* _92;
frost$core$Object* _94;
frost$core$RegularExpression* _96;
frost$core$Object* _97;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:769
_1 = (frost$core$RegularExpression*) frostObjectAlloc(sizeof(frost$core$RegularExpression), (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String(_1, &$s430);
_3 = (org$frostlang$frostc$frostdoc$Markdown$_Closure20*) frostObjectAlloc(sizeof(org$frostlang$frostc$frostdoc$Markdown$_Closure20), (frost$core$Class*) &org$frostlang$frostc$frostdoc$Markdown$_Closure20$class);
org$frostlang$frostc$frostdoc$Markdown$_Closure20$init$org$frostlang$frostc$frostdoc$Markdown(_3, param0);
_5 = ((frost$core$Int8*) org$frostlang$frostc$frostdoc$Markdown$_Closure20$$anonymous19$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$String);
_6 = (frost$core$MutableMethod*) frostObjectAlloc(sizeof(frost$core$MutableMethod), (frost$core$Class*) &frost$core$MutableMethod$class);
_7 = ((frost$core$Object*) _3);
// begin inline call to frost.core.MutableMethod.init(pointer:frost.unsafe.Pointer<frost.core.Int8>, target:frost.core.Object?) from Markdown.frost:769:46
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableMethod.frost:32
_10 = &_6->pointer;
*_10 = _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableMethod.frost:33
frost$core$Frost$ref$frost$core$Object$Q(_7);
_14 = &_6->target;
_15 = *_14;
frost$core$Frost$unref$frost$core$Object$Q(_15);
_17 = &_6->target;
*_17 = _7;
_20 = _6;
_21 = _20;
frost$core$MutableString$replace$frost$core$RegularExpression$$LPfrost$collections$ListView$LTfrost$core$String$Q$GT$RP$EQ$GT$LPfrost$core$Object$RP(param1, _1, _21);
_23 = ((frost$core$Object*) _6);
frost$core$Frost$unref$frost$core$Object$Q(_23);
_25 = ((frost$core$Object*) _3);
frost$core$Frost$unref$frost$core$Object$Q(_25);
_27 = ((frost$core$Object*) _1);
frost$core$Frost$unref$frost$core$Object$Q(_27);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:774
_30 = (frost$core$RegularExpression*) frostObjectAlloc(sizeof(frost$core$RegularExpression), (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String(_30, &$s431);
_32 = (org$frostlang$frostc$frostdoc$Markdown$_Closure22*) frostObjectAlloc(sizeof(org$frostlang$frostc$frostdoc$Markdown$_Closure22), (frost$core$Class*) &org$frostlang$frostc$frostdoc$Markdown$_Closure22$class);
org$frostlang$frostc$frostdoc$Markdown$_Closure22$init$org$frostlang$frostc$frostdoc$Markdown(_32, param0);
_34 = ((frost$core$Int8*) org$frostlang$frostc$frostdoc$Markdown$_Closure22$$anonymous21$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$String);
_35 = (frost$core$MutableMethod*) frostObjectAlloc(sizeof(frost$core$MutableMethod), (frost$core$Class*) &frost$core$MutableMethod$class);
_36 = ((frost$core$Object*) _32);
// begin inline call to frost.core.MutableMethod.init(pointer:frost.unsafe.Pointer<frost.core.Int8>, target:frost.core.Object?) from Markdown.frost:774:46
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableMethod.frost:32
_39 = &_35->pointer;
*_39 = _34;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableMethod.frost:33
frost$core$Frost$ref$frost$core$Object$Q(_36);
_43 = &_35->target;
_44 = *_43;
frost$core$Frost$unref$frost$core$Object$Q(_44);
_46 = &_35->target;
*_46 = _36;
_49 = _35;
_50 = _49;
frost$core$MutableString$replace$frost$core$RegularExpression$$LPfrost$collections$ListView$LTfrost$core$String$Q$GT$RP$EQ$GT$LPfrost$core$Object$RP(param1, _30, _50);
_52 = ((frost$core$Object*) _35);
frost$core$Frost$unref$frost$core$Object$Q(_52);
_54 = ((frost$core$Object*) _32);
frost$core$Frost$unref$frost$core$Object$Q(_54);
_56 = ((frost$core$Object*) _30);
frost$core$Frost$unref$frost$core$Object$Q(_56);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:781
_59 = (frost$core$RegularExpression*) frostObjectAlloc(sizeof(frost$core$RegularExpression), (frost$core$Class*) &frost$core$RegularExpression$class);
_60 = (frost$core$Int) {1u};
frost$core$RegularExpression$init$frost$core$String$frost$core$Int(_59, &$s432, _60);
*(&local0) = ((frost$core$RegularExpression*) NULL);
_63 = ((frost$core$Object*) _59);
frost$core$Frost$ref$frost$core$Object$Q(_63);
_65 = *(&local0);
_66 = ((frost$core$Object*) _65);
frost$core$Frost$unref$frost$core$Object$Q(_66);
*(&local0) = _59;
_69 = ((frost$core$Object*) _59);
frost$core$Frost$unref$frost$core$Object$Q(_69);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:782
_72 = *(&local0);
_73 = (org$frostlang$frostc$frostdoc$Markdown$_Closure24*) frostObjectAlloc(sizeof(org$frostlang$frostc$frostdoc$Markdown$_Closure24), (frost$core$Class*) &org$frostlang$frostc$frostdoc$Markdown$_Closure24$class);
org$frostlang$frostc$frostdoc$Markdown$_Closure24$init$org$frostlang$frostc$frostdoc$Markdown(_73, param0);
_75 = ((frost$core$Int8*) org$frostlang$frostc$frostdoc$Markdown$_Closure24$$anonymous23$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$Object);
_76 = (frost$core$MutableMethod*) frostObjectAlloc(sizeof(frost$core$MutableMethod), (frost$core$Class*) &frost$core$MutableMethod$class);
_77 = ((frost$core$Object*) _73);
// begin inline call to frost.core.MutableMethod.init(pointer:frost.unsafe.Pointer<frost.core.Int8>, target:frost.core.Object?) from Markdown.frost:782:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableMethod.frost:32
_80 = &_76->pointer;
*_80 = _75;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableMethod.frost:33
frost$core$Frost$ref$frost$core$Object$Q(_77);
_84 = &_76->target;
_85 = *_84;
frost$core$Frost$unref$frost$core$Object$Q(_85);
_87 = &_76->target;
*_87 = _77;
_90 = _76;
frost$core$MutableString$replace$frost$core$RegularExpression$$LPfrost$collections$ListView$LTfrost$core$String$Q$GT$RP$EQ$GT$LPfrost$core$Object$RP(param1, _72, _90);
_92 = ((frost$core$Object*) _76);
frost$core$Frost$unref$frost$core$Object$Q(_92);
_94 = ((frost$core$Object*) _73);
frost$core$Frost$unref$frost$core$Object$Q(_94);
_96 = *(&local0);
_97 = ((frost$core$Object*) _96);
frost$core$Frost$unref$frost$core$Object$Q(_97);
*(&local0) = ((frost$core$RegularExpression*) NULL);
return;

}
void org$frostlang$frostc$frostdoc$Markdown$runSpanGamut$frost$core$MutableString(void* rawSelf, frost$core$MutableString* param1) {
org$frostlang$frostc$frostdoc$Markdown* param0 = (org$frostlang$frostc$frostdoc$Markdown*) rawSelf;

frost$core$Matcher* local0 = NULL;
$fn433 _1;
$fn434 _4;
$fn435 _7;
$fn436 _10;
$fn437 _13;
$fn438 _16;
$fn439 _19;
$fn440 _22;
$fn441 _25;
frost$core$RegularExpression* _28;
frost$core$Bit _32;
frost$core$Object* _35;
$fn442 _36;
frost$core$String* _37;
frost$core$Matcher* _38;
frost$core$Object* _40;
frost$core$Matcher* _42;
frost$core$Object* _43;
frost$core$Object* _46;
frost$core$Object* _48;
frost$core$Matcher* _54;
frost$core$Bit _55;
bool _56;
frost$core$Matcher* _59;
frost$core$Matcher* _63;
frost$core$Matcher* _65;
frost$core$Object* _66;
frost$core$Object* _71;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:793
_1 = ($fn443) param0->$class->vtable[24];
_1(param0, param1);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:794
_4 = ($fn444) param0->$class->vtable[29];
_4(param0, param1);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:795
_7 = ($fn445) param0->$class->vtable[3];
_7(param0, param1);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:797
_10 = ($fn446) param0->$class->vtable[25];
_10(param0, param1);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:798
_13 = ($fn447) param0->$class->vtable[26];
_13(param0, param1);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:799
_16 = ($fn448) param0->$class->vtable[10];
_16(param0, param1);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:805
_19 = ($fn449) param0->$class->vtable[24];
_19(param0, param1);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:807
_22 = ($fn450) param0->$class->vtable[28];
_22(param0, param1);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:808
_25 = ($fn451) param0->$class->vtable[27];
_25(param0, param1);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:810
_28 = (frost$core$RegularExpression*) frostObjectAlloc(sizeof(frost$core$RegularExpression), (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String(_28, &$s452);
// begin inline call to method frost.core.MutableString.replace(search:frost.core.RegularExpression, replacement:frost.core.String) from Markdown.frost:810:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:401
_32 = (frost$core$Bit) {true};
// begin inline call to method frost.core.MutableString.replace(search:frost.core.RegularExpression, replacement:frost.core.String, allowGroupReferences:frost.core.Bit) from MutableString.frost:401:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:406
_35 = ((frost$core$Object*) param1);
_36 = ($fn453) _35->$class->vtable[0];
_37 = _36(_35);
_38 = frost$core$RegularExpression$matcher$frost$core$String$R$frost$core$Matcher(_28, _37);
*(&local0) = ((frost$core$Matcher*) NULL);
_40 = ((frost$core$Object*) _38);
frost$core$Frost$ref$frost$core$Object$Q(_40);
_42 = *(&local0);
_43 = ((frost$core$Object*) _42);
frost$core$Frost$unref$frost$core$Object$Q(_43);
*(&local0) = _38;
_46 = ((frost$core$Object*) _38);
frost$core$Frost$unref$frost$core$Object$Q(_46);
_48 = ((frost$core$Object*) _37);
frost$core$Frost$unref$frost$core$Object$Q(_48);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:407
frost$core$MutableString$clear(param1);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:408
goto block3;
block3:;
_54 = *(&local0);
_55 = frost$core$Matcher$find$R$frost$core$Bit(_54);
_56 = _55.value;
if (_56) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:409
_59 = *(&local0);
frost$core$Matcher$appendReplacement$frost$core$MutableString$frost$core$String$frost$core$Bit(_59, param1, &$s454, _32);
goto block3;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:411
_63 = *(&local0);
frost$core$Matcher$appendTail$frost$core$MutableString(_63, param1);
_65 = *(&local0);
_66 = ((frost$core$Object*) _65);
frost$core$Frost$unref$frost$core$Object$Q(_66);
*(&local0) = ((frost$core$Matcher*) NULL);
_71 = ((frost$core$Object*) _28);
frost$core$Frost$unref$frost$core$Object$Q(_71);
return;

}
frost$core$String* org$frostlang$frostc$frostdoc$Markdown$nestedTagsRegex$frost$core$Int$R$frost$core$String(frost$core$Int param0) {

frost$core$Int _1;
int64_t _4;
int64_t _5;
bool _6;
frost$core$Bit _7;
bool _9;
frost$core$Object* _12;
frost$core$Int _17;
int64_t _18;
int64_t _19;
int64_t _20;
frost$core$Int _21;
frost$core$String* _22;
frost$core$String* _23;
frost$core$String* _24;
frost$core$Object* _25;
frost$core$Object* _27;
frost$core$Object* _29;
frost$core$Object* _31;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:820
_1 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Markdown.frost:820:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_4 = param0.value;
_5 = _1.value;
_6 = _4 == _5;
_7 = (frost$core$Bit) {_6};
_9 = _7.value;
if (_9) goto block1; else goto block3;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:821
_12 = ((frost$core$Object*) &$s455);
frost$core$Frost$ref$frost$core$Object$Q(_12);
return &$s456;
block3:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:824
_17 = (frost$core$Int) {1u};
_18 = param0.value;
_19 = _17.value;
_20 = _18 - _19;
_21 = (frost$core$Int) {_20};
_22 = org$frostlang$frostc$frostdoc$Markdown$nestedTagsRegex$frost$core$Int$R$frost$core$String(_21);
_23 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s457, _22);
_24 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_23, &$s458);
_25 = ((frost$core$Object*) _24);
frost$core$Frost$ref$frost$core$Object$Q(_25);
_27 = ((frost$core$Object*) _24);
frost$core$Frost$unref$frost$core$Object$Q(_27);
_29 = ((frost$core$Object*) _23);
frost$core$Frost$unref$frost$core$Object$Q(_29);
_31 = ((frost$core$Object*) _22);
frost$core$Frost$unref$frost$core$Object$Q(_31);
return _24;
block2:;
goto block5;
block5:;

}
frost$collections$ListView* org$frostlang$frostc$frostdoc$Markdown$tokenizeHTML$frost$core$String$R$frost$collections$ListView$LTorg$frostlang$frostc$frostdoc$Markdown$HTMLToken$GT(void* rawSelf, frost$core$String* param1) {
org$frostlang$frostc$frostdoc$Markdown* param0 = (org$frostlang$frostc$frostdoc$Markdown*) rawSelf;

frost$collections$Array* local0 = NULL;
frost$core$String* local1 = NULL;
frost$core$RegularExpression* local2 = NULL;
frost$core$Matcher* local3 = NULL;
frost$core$String$Index local4;
frost$core$String$Index local5;
frost$core$String$Index local6;
frost$core$String$Index local7;
frost$core$String$Index local8;
frost$core$String$Index local9;
frost$core$String$Index local10;
frost$collections$Array* _1;
frost$core$Object* _4;
frost$collections$Array* _6;
frost$core$Object* _7;
frost$core$Object* _10;
frost$core$Int _13;
frost$core$String* _14;
frost$core$Object* _16;
frost$core$String* _18;
frost$core$Object* _19;
frost$core$Object* _22;
frost$core$RegularExpression* _25;
frost$core$String* _26;
frost$core$String* _27;
frost$core$String* _28;
frost$core$String* _29;
frost$core$Int _30;
frost$core$Object* _33;
frost$core$RegularExpression* _35;
frost$core$Object* _36;
frost$core$Object* _39;
frost$core$Object* _41;
frost$core$Object* _43;
frost$core$Object* _45;
frost$core$RegularExpression* _48;
frost$core$Matcher* _49;
frost$core$Object* _51;
frost$core$Matcher* _53;
frost$core$Object* _54;
frost$core$Object* _57;
frost$core$Int _62;
frost$core$Int* _65;
frost$core$String$Index _67;
frost$core$String$Index _70;
frost$core$Matcher* _75;
frost$core$Bit _76;
bool _77;
frost$core$String$Index _80;
frost$core$Comparable* _81;
frost$core$Matcher* _82;
frost$core$String$Index _83;
frost$core$Comparable* _84;
$fn459 _85;
frost$core$Bit _86;
bool _87;
frost$core$Object* _88;
frost$core$Object* _90;
frost$collections$Array* _94;
org$frostlang$frostc$frostdoc$Markdown$HTMLToken* _95;
frost$core$Int _96;
frost$core$String$Index _97;
frost$core$Matcher* _98;
frost$core$String$Index _99;
frost$core$Bit _100;
frost$core$Range$LTfrost$core$String$Index$GT _101;
frost$core$String* _102;
frost$core$Object* _104;
frost$core$Object* _106;
frost$core$Object* _108;
frost$collections$Array* _112;
org$frostlang$frostc$frostdoc$Markdown$HTMLToken* _113;
frost$core$Int _114;
frost$core$Matcher* _115;
frost$core$String$Index _116;
frost$core$Matcher* _117;
frost$core$String$Index _118;
frost$core$Bit _119;
frost$core$Range$LTfrost$core$String$Index$GT _120;
frost$core$String* _121;
frost$core$Object* _123;
frost$core$Object* _125;
frost$core$Object* _127;
frost$core$Matcher* _130;
frost$core$String$Index _131;
frost$core$String$Index _135;
frost$core$Comparable* _136;
frost$core$Int* _139;
frost$core$Int _140;
frost$core$Int* _143;
frost$core$String$Index _145;
frost$core$String$Index _148;
frost$core$Comparable* _150;
$fn460 _151;
frost$core$Bit _152;
bool _153;
frost$core$Object* _154;
frost$core$Object* _156;
frost$collections$Array* _160;
org$frostlang$frostc$frostdoc$Markdown$HTMLToken* _161;
frost$core$Int _162;
frost$core$String$Index _163;
frost$core$Int* _166;
frost$core$Int _167;
frost$core$Int* _170;
frost$core$String$Index _172;
frost$core$String$Index _175;
frost$core$Bit _177;
frost$core$Range$LTfrost$core$String$Index$GT _178;
frost$core$String* _179;
frost$core$Object* _181;
frost$core$Object* _183;
frost$core$Object* _185;
frost$collections$Array* _189;
frost$collections$ListView* _190;
frost$core$Object* _191;
frost$core$Matcher* _193;
frost$core$Object* _194;
frost$core$RegularExpression* _197;
frost$core$Object* _198;
frost$core$String* _201;
frost$core$Object* _202;
frost$collections$Array* _205;
frost$core$Object* _206;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:829
_1 = (frost$collections$Array*) frostObjectAlloc(sizeof(frost$collections$Array), (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init(_1);
*(&local0) = ((frost$collections$Array*) NULL);
_4 = ((frost$core$Object*) _1);
frost$core$Frost$ref$frost$core$Object$Q(_4);
_6 = *(&local0);
_7 = ((frost$core$Object*) _6);
frost$core$Frost$unref$frost$core$Object$Q(_7);
*(&local0) = _1;
_10 = ((frost$core$Object*) _1);
frost$core$Frost$unref$frost$core$Object$Q(_10);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:830
_13 = (frost$core$Int) {6u};
_14 = org$frostlang$frostc$frostdoc$Markdown$nestedTagsRegex$frost$core$Int$R$frost$core$String(_13);
*(&local1) = ((frost$core$String*) NULL);
_16 = ((frost$core$Object*) _14);
frost$core$Frost$ref$frost$core$Object$Q(_16);
_18 = *(&local1);
_19 = ((frost$core$Object*) _18);
frost$core$Frost$unref$frost$core$Object$Q(_19);
*(&local1) = _14;
_22 = ((frost$core$Object*) _14);
frost$core$Frost$unref$frost$core$Object$Q(_22);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:832
_25 = (frost$core$RegularExpression*) frostObjectAlloc(sizeof(frost$core$RegularExpression), (frost$core$Class*) &frost$core$RegularExpression$class);
_26 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s461, &$s462);
_27 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_26, &$s463);
_28 = *(&local1);
_29 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_27, _28);
_30 = (frost$core$Int) {2u};
frost$core$RegularExpression$init$frost$core$String$frost$core$Int(_25, _29, _30);
*(&local2) = ((frost$core$RegularExpression*) NULL);
_33 = ((frost$core$Object*) _25);
frost$core$Frost$ref$frost$core$Object$Q(_33);
_35 = *(&local2);
_36 = ((frost$core$Object*) _35);
frost$core$Frost$unref$frost$core$Object$Q(_36);
*(&local2) = _25;
_39 = ((frost$core$Object*) _29);
frost$core$Frost$unref$frost$core$Object$Q(_39);
_41 = ((frost$core$Object*) _27);
frost$core$Frost$unref$frost$core$Object$Q(_41);
_43 = ((frost$core$Object*) _26);
frost$core$Frost$unref$frost$core$Object$Q(_43);
_45 = ((frost$core$Object*) _25);
frost$core$Frost$unref$frost$core$Object$Q(_45);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:840
_48 = *(&local2);
_49 = frost$core$RegularExpression$matcher$frost$core$String$R$frost$core$Matcher(_48, param1);
*(&local3) = ((frost$core$Matcher*) NULL);
_51 = ((frost$core$Object*) _49);
frost$core$Frost$ref$frost$core$Object$Q(_51);
_53 = *(&local3);
_54 = ((frost$core$Object*) _53);
frost$core$Frost$unref$frost$core$Object$Q(_54);
*(&local3) = _49;
_57 = ((frost$core$Object*) _49);
frost$core$Frost$unref$frost$core$Object$Q(_57);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:841
// begin inline call to function frost.core.String.get_start():frost.core.String.Index from Markdown.frost:841:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1205
_62 = (frost$core$Int) {0u};
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from String.frost:1205:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:61
_65 = &(&local5)->value;
*_65 = _62;
_67 = *(&local5);
*(&local4) = _67;
_70 = *(&local4);
*(&local6) = _70;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:842
goto block3;
block3:;
_75 = *(&local3);
_76 = frost$core$Matcher$find$R$frost$core$Bit(_75);
_77 = _76.value;
if (_77) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:843
_80 = *(&local6);
frost$core$String$Index$wrapper* $tmp464;
$tmp464 = (frost$core$String$Index$wrapper*) frostObjectAlloc(sizeof(frost$core$String$Index$wrapper), (frost$core$Class*) &frost$core$String$Index$wrapperclass);
$tmp464->value = _80;
_81 = ((frost$core$Comparable*) $tmp464);
_82 = *(&local3);
frost$core$Matcher$get_start$R$frost$core$String$Index(&_83, _82);
frost$core$String$Index$wrapper* $tmp465;
$tmp465 = (frost$core$String$Index$wrapper*) frostObjectAlloc(sizeof(frost$core$String$Index$wrapper), (frost$core$Class*) &frost$core$String$Index$wrapperclass);
$tmp465->value = _83;
_84 = ((frost$core$Comparable*) $tmp465);
ITable* $tmp466 = _81->$class->itable;
while ($tmp466->$class != (frost$core$Class*) &frost$core$Comparable$class) {
    $tmp466 = $tmp466->next;
}
_85 = $tmp466->methods[1];
_86 = _85(_81, _84);
_87 = _86.value;
_88 = ((frost$core$Object*) _84);
frost$core$Frost$unref$frost$core$Object$Q(_88);
_90 = ((frost$core$Object*) _81);
frost$core$Frost$unref$frost$core$Object$Q(_90);
if (_87) goto block6; else goto block7;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:844
_94 = *(&local0);
_95 = (org$frostlang$frostc$frostdoc$Markdown$HTMLToken*) frostObjectAlloc(sizeof(org$frostlang$frostc$frostdoc$Markdown$HTMLToken), (frost$core$Class*) &org$frostlang$frostc$frostdoc$Markdown$HTMLToken$class);
_96 = (frost$core$Int) {1u};
_97 = *(&local6);
_98 = *(&local3);
frost$core$Matcher$get_start$R$frost$core$String$Index(&_99, _98);
_100 = (frost$core$Bit) {false};
_101 = frost$core$Range$LTfrost$core$String$Index$GT$init$frost$core$String$Index$frost$core$String$Index$frost$core$Bit(_97, _99, _100);
_102 = frost$core$String$substring$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String(param1, _101);
org$frostlang$frostc$frostdoc$Markdown$HTMLToken$init$frost$core$Int$frost$core$String(_95, _96, _102);
_104 = ((frost$core$Object*) _95);
frost$collections$Array$add$frost$collections$Array$T(_94, _104);
_106 = ((frost$core$Object*) _102);
frost$core$Frost$unref$frost$core$Object$Q(_106);
_108 = ((frost$core$Object*) _95);
frost$core$Frost$unref$frost$core$Object$Q(_108);
goto block7;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:846
_112 = *(&local0);
_113 = (org$frostlang$frostc$frostdoc$Markdown$HTMLToken*) frostObjectAlloc(sizeof(org$frostlang$frostc$frostdoc$Markdown$HTMLToken), (frost$core$Class*) &org$frostlang$frostc$frostdoc$Markdown$HTMLToken$class);
_114 = (frost$core$Int) {0u};
_115 = *(&local3);
frost$core$Matcher$get_start$R$frost$core$String$Index(&_116, _115);
_117 = *(&local3);
frost$core$Matcher$get_end$R$frost$core$String$Index(&_118, _117);
_119 = (frost$core$Bit) {false};
_120 = frost$core$Range$LTfrost$core$String$Index$GT$init$frost$core$String$Index$frost$core$String$Index$frost$core$Bit(_116, _118, _119);
_121 = frost$core$String$substring$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String(param1, _120);
org$frostlang$frostc$frostdoc$Markdown$HTMLToken$init$frost$core$Int$frost$core$String(_113, _114, _121);
_123 = ((frost$core$Object*) _113);
frost$collections$Array$add$frost$collections$Array$T(_112, _123);
_125 = ((frost$core$Object*) _121);
frost$core$Frost$unref$frost$core$Object$Q(_125);
_127 = ((frost$core$Object*) _113);
frost$core$Frost$unref$frost$core$Object$Q(_127);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:847
_130 = *(&local3);
frost$core$Matcher$get_end$R$frost$core$String$Index(&_131, _130);
*(&local6) = _131;
goto block3;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:849
_135 = *(&local6);
frost$core$String$Index$wrapper* $tmp467;
$tmp467 = (frost$core$String$Index$wrapper*) frostObjectAlloc(sizeof(frost$core$String$Index$wrapper), (frost$core$Class*) &frost$core$String$Index$wrapperclass);
$tmp467->value = _135;
_136 = ((frost$core$Comparable*) $tmp467);
// begin inline call to function frost.core.String.get_end():frost.core.String.Index from Markdown.frost:849:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1212
_139 = &param1->_length;
_140 = *_139;
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from String.frost:1212:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:61
_143 = &(&local8)->value;
*_143 = _140;
_145 = *(&local8);
*(&local7) = _145;
_148 = *(&local7);
frost$core$String$Index$wrapper* $tmp468;
$tmp468 = (frost$core$String$Index$wrapper*) frostObjectAlloc(sizeof(frost$core$String$Index$wrapper), (frost$core$Class*) &frost$core$String$Index$wrapperclass);
$tmp468->value = _148;
_150 = ((frost$core$Comparable*) $tmp468);
ITable* $tmp469 = _136->$class->itable;
while ($tmp469->$class != (frost$core$Class*) &frost$core$Comparable$class) {
    $tmp469 = $tmp469->next;
}
_151 = $tmp469->methods[1];
_152 = _151(_136, _150);
_153 = _152.value;
_154 = ((frost$core$Object*) _150);
frost$core$Frost$unref$frost$core$Object$Q(_154);
_156 = ((frost$core$Object*) _136);
frost$core$Frost$unref$frost$core$Object$Q(_156);
if (_153) goto block8; else goto block9;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:850
_160 = *(&local0);
_161 = (org$frostlang$frostc$frostdoc$Markdown$HTMLToken*) frostObjectAlloc(sizeof(org$frostlang$frostc$frostdoc$Markdown$HTMLToken), (frost$core$Class*) &org$frostlang$frostc$frostdoc$Markdown$HTMLToken$class);
_162 = (frost$core$Int) {1u};
_163 = *(&local6);
// begin inline call to function frost.core.String.get_end():frost.core.String.Index from Markdown.frost:850:69
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1212
_166 = &param1->_length;
_167 = *_166;
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from String.frost:1212:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:61
_170 = &(&local10)->value;
*_170 = _167;
_172 = *(&local10);
*(&local9) = _172;
_175 = *(&local9);
_177 = (frost$core$Bit) {false};
_178 = frost$core$Range$LTfrost$core$String$Index$GT$init$frost$core$String$Index$frost$core$String$Index$frost$core$Bit(_163, _175, _177);
_179 = frost$core$String$substring$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String(param1, _178);
org$frostlang$frostc$frostdoc$Markdown$HTMLToken$init$frost$core$Int$frost$core$String(_161, _162, _179);
_181 = ((frost$core$Object*) _161);
frost$collections$Array$add$frost$collections$Array$T(_160, _181);
_183 = ((frost$core$Object*) _179);
frost$core$Frost$unref$frost$core$Object$Q(_183);
_185 = ((frost$core$Object*) _161);
frost$core$Frost$unref$frost$core$Object$Q(_185);
goto block9;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:853
_189 = *(&local0);
_190 = ((frost$collections$ListView*) _189);
_191 = ((frost$core$Object*) _190);
frost$core$Frost$ref$frost$core$Object$Q(_191);
_193 = *(&local3);
_194 = ((frost$core$Object*) _193);
frost$core$Frost$unref$frost$core$Object$Q(_194);
*(&local3) = ((frost$core$Matcher*) NULL);
_197 = *(&local2);
_198 = ((frost$core$Object*) _197);
frost$core$Frost$unref$frost$core$Object$Q(_198);
*(&local2) = ((frost$core$RegularExpression*) NULL);
_201 = *(&local1);
_202 = ((frost$core$Object*) _201);
frost$core$Frost$unref$frost$core$Object$Q(_202);
*(&local1) = ((frost$core$String*) NULL);
_205 = *(&local0);
_206 = ((frost$core$Object*) _205);
frost$core$Frost$unref$frost$core$Object$Q(_206);
*(&local0) = ((frost$collections$Array*) NULL);
return _190;

}
void org$frostlang$frostc$frostdoc$Markdown$escapeSpecialCharsWithinTagAttributes$frost$core$MutableString(void* rawSelf, frost$core$MutableString* param1) {
org$frostlang$frostc$frostdoc$Markdown* param0 = (org$frostlang$frostc$frostdoc$Markdown*) rawSelf;

frost$collections$ListView* local0 = NULL;
org$frostlang$frostc$frostdoc$Markdown$HTMLToken* local1 = NULL;
frost$core$String* local2 = NULL;
frost$core$String* local3 = NULL;
frost$core$String* local4 = NULL;
frost$core$Object* _1;
$fn470 _2;
frost$core$String* _3;
$fn471 _4;
frost$collections$ListView* _5;
frost$core$Object* _7;
frost$collections$ListView* _9;
frost$core$Object* _10;
frost$core$Object* _13;
frost$core$Object* _15;
frost$collections$ListView* _20;
frost$collections$Iterable* _21;
$fn472 _22;
frost$collections$Iterator* _23;
$fn473 _25;
frost$core$Bit _26;
bool _27;
$fn474 _30;
frost$core$Object* _31;
org$frostlang$frostc$frostdoc$Markdown$HTMLToken* _32;
frost$core$Object* _33;
org$frostlang$frostc$frostdoc$Markdown$HTMLToken* _35;
frost$core$Object* _36;
org$frostlang$frostc$frostdoc$Markdown$HTMLToken* _42;
frost$core$Int* _43;
frost$core$Int _44;
frost$core$Int _45;
int64_t _48;
int64_t _49;
bool _50;
frost$core$Bit _51;
bool _53;
frost$core$String** _55;
frost$core$String* _56;
frost$core$Object* _58;
frost$core$String* _60;
frost$core$Object* _61;
frost$core$String* _65;
frost$core$Object* _66;
frost$core$String* _68;
frost$core$Object* _69;
frost$core$String* _73;
org$frostlang$frostc$frostdoc$Protector** _74;
org$frostlang$frostc$frostdoc$Protector* _75;
$fn475 _76;
frost$core$String* _77;
frost$core$String* _78;
frost$core$Object* _79;
frost$core$String* _81;
frost$core$Object* _82;
frost$core$Object* _85;
frost$core$Object* _87;
frost$core$String* _90;
org$frostlang$frostc$frostdoc$Protector** _91;
org$frostlang$frostc$frostdoc$Protector* _92;
$fn476 _93;
frost$core$String* _94;
frost$core$String* _95;
frost$core$Object* _96;
frost$core$String* _98;
frost$core$Object* _99;
frost$core$Object* _102;
frost$core$Object* _104;
frost$core$String* _107;
org$frostlang$frostc$frostdoc$Protector** _108;
org$frostlang$frostc$frostdoc$Protector* _109;
$fn477 _110;
frost$core$String* _111;
frost$core$String* _112;
frost$core$Object* _113;
frost$core$String* _115;
frost$core$Object* _116;
frost$core$Object* _119;
frost$core$Object* _121;
frost$core$String* _124;
org$frostlang$frostc$frostdoc$Protector** _125;
org$frostlang$frostc$frostdoc$Protector* _126;
$fn478 _127;
frost$core$String* _128;
frost$core$String* _129;
frost$core$Object* _130;
frost$core$String* _132;
frost$core$Object* _133;
frost$core$Object* _136;
frost$core$Object* _138;
frost$core$String* _140;
frost$core$Object* _141;
frost$core$Int _145;
int64_t _148;
int64_t _149;
bool _150;
frost$core$Bit _151;
bool _153;
frost$core$String** _155;
frost$core$String* _156;
frost$core$Object* _158;
frost$core$String* _160;
frost$core$Object* _161;
frost$core$String* _165;
frost$core$Object* _166;
frost$core$String* _168;
frost$core$Object* _169;
frost$core$String* _172;
frost$core$Object* _173;
frost$core$String* _178;
frost$core$String* _180;
frost$core$Object* _181;
frost$core$Object* _184;
org$frostlang$frostc$frostdoc$Markdown$HTMLToken* _186;
frost$core$Object* _187;
frost$core$Object* _191;
frost$collections$ListView* _193;
frost$core$Object* _194;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:866
_1 = ((frost$core$Object*) param1);
_2 = ($fn479) _1->$class->vtable[0];
_3 = _2(_1);
_4 = ($fn480) param0->$class->vtable[23];
_5 = _4(param0, _3);
*(&local0) = ((frost$collections$ListView*) NULL);
_7 = ((frost$core$Object*) _5);
frost$core$Frost$ref$frost$core$Object$Q(_7);
_9 = *(&local0);
_10 = ((frost$core$Object*) _9);
frost$core$Frost$unref$frost$core$Object$Q(_10);
*(&local0) = _5;
_13 = ((frost$core$Object*) _5);
frost$core$Frost$unref$frost$core$Object$Q(_13);
_15 = ((frost$core$Object*) _3);
frost$core$Frost$unref$frost$core$Object$Q(_15);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:867
frost$core$MutableString$clear(param1);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:869
_20 = *(&local0);
_21 = ((frost$collections$Iterable*) _20);
ITable* $tmp481 = _21->$class->itable;
while ($tmp481->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp481 = $tmp481->next;
}
_22 = $tmp481->methods[0];
_23 = _22(_21);
goto block1;
block1:;
ITable* $tmp482 = _23->$class->itable;
while ($tmp482->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp482 = $tmp482->next;
}
_25 = $tmp482->methods[0];
_26 = _25(_23);
_27 = _26.value;
if (_27) goto block3; else goto block2;
block2:;
*(&local1) = ((org$frostlang$frostc$frostdoc$Markdown$HTMLToken*) NULL);
ITable* $tmp483 = _23->$class->itable;
while ($tmp483->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp483 = $tmp483->next;
}
_30 = $tmp483->methods[1];
_31 = _30(_23);
_32 = ((org$frostlang$frostc$frostdoc$Markdown$HTMLToken*) _31);
_33 = ((frost$core$Object*) _32);
frost$core$Frost$ref$frost$core$Object$Q(_33);
_35 = *(&local1);
_36 = ((frost$core$Object*) _35);
frost$core$Frost$unref$frost$core$Object$Q(_36);
*(&local1) = _32;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:870
*(&local2) = ((frost$core$String*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:871
_42 = *(&local1);
_43 = &_42->$rawValue;
_44 = *_43;
_45 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Markdown.frost:872:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_48 = _44.value;
_49 = _45.value;
_50 = _48 == _49;
_51 = (frost$core$Bit) {_50};
_53 = _51.value;
if (_53) goto block5; else goto block6;
block5:;
_55 = &_42->$data.$TAG.field0;
_56 = *_55;
*(&local3) = ((frost$core$String*) NULL);
_58 = ((frost$core$Object*) _56);
frost$core$Frost$ref$frost$core$Object$Q(_58);
_60 = *(&local3);
_61 = ((frost$core$Object*) _60);
frost$core$Frost$unref$frost$core$Object$Q(_61);
*(&local3) = _56;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:873
_65 = *(&local3);
_66 = ((frost$core$Object*) _65);
frost$core$Frost$ref$frost$core$Object$Q(_66);
_68 = *(&local2);
_69 = ((frost$core$Object*) _68);
frost$core$Frost$unref$frost$core$Object$Q(_69);
*(&local2) = _65;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:874
_73 = *(&local2);
_74 = &param0->charProtector;
_75 = *_74;
_76 = ($fn484) _75->$class->vtable[2];
_77 = _76(_75, &$s485);
_78 = frost$core$String$replace$frost$core$String$frost$core$String$R$frost$core$String(_73, &$s486, _77);
_79 = ((frost$core$Object*) _78);
frost$core$Frost$ref$frost$core$Object$Q(_79);
_81 = *(&local2);
_82 = ((frost$core$Object*) _81);
frost$core$Frost$unref$frost$core$Object$Q(_82);
*(&local2) = _78;
_85 = ((frost$core$Object*) _78);
frost$core$Frost$unref$frost$core$Object$Q(_85);
_87 = ((frost$core$Object*) _77);
frost$core$Frost$unref$frost$core$Object$Q(_87);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:875
_90 = *(&local2);
_91 = &param0->charProtector;
_92 = *_91;
_93 = ($fn487) _92->$class->vtable[2];
_94 = _93(_92, &$s488);
_95 = frost$core$String$replace$frost$core$String$frost$core$String$R$frost$core$String(_90, &$s489, _94);
_96 = ((frost$core$Object*) _95);
frost$core$Frost$ref$frost$core$Object$Q(_96);
_98 = *(&local2);
_99 = ((frost$core$Object*) _98);
frost$core$Frost$unref$frost$core$Object$Q(_99);
*(&local2) = _95;
_102 = ((frost$core$Object*) _95);
frost$core$Frost$unref$frost$core$Object$Q(_102);
_104 = ((frost$core$Object*) _94);
frost$core$Frost$unref$frost$core$Object$Q(_104);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:876
_107 = *(&local2);
_108 = &param0->charProtector;
_109 = *_108;
_110 = ($fn490) _109->$class->vtable[2];
_111 = _110(_109, &$s491);
_112 = frost$core$String$replace$frost$core$String$frost$core$String$R$frost$core$String(_107, &$s492, _111);
_113 = ((frost$core$Object*) _112);
frost$core$Frost$ref$frost$core$Object$Q(_113);
_115 = *(&local2);
_116 = ((frost$core$Object*) _115);
frost$core$Frost$unref$frost$core$Object$Q(_116);
*(&local2) = _112;
_119 = ((frost$core$Object*) _112);
frost$core$Frost$unref$frost$core$Object$Q(_119);
_121 = ((frost$core$Object*) _111);
frost$core$Frost$unref$frost$core$Object$Q(_121);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:877
_124 = *(&local2);
_125 = &param0->charProtector;
_126 = *_125;
_127 = ($fn493) _126->$class->vtable[2];
_128 = _127(_126, &$s494);
_129 = frost$core$String$replace$frost$core$String$frost$core$String$R$frost$core$String(_124, &$s495, _128);
_130 = ((frost$core$Object*) _129);
frost$core$Frost$ref$frost$core$Object$Q(_130);
_132 = *(&local2);
_133 = ((frost$core$Object*) _132);
frost$core$Frost$unref$frost$core$Object$Q(_133);
*(&local2) = _129;
_136 = ((frost$core$Object*) _129);
frost$core$Frost$unref$frost$core$Object$Q(_136);
_138 = ((frost$core$Object*) _128);
frost$core$Frost$unref$frost$core$Object$Q(_138);
_140 = *(&local3);
_141 = ((frost$core$Object*) _140);
frost$core$Frost$unref$frost$core$Object$Q(_141);
*(&local3) = ((frost$core$String*) NULL);
goto block4;
block6:;
_145 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Markdown.frost:879:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_148 = _44.value;
_149 = _145.value;
_150 = _148 == _149;
_151 = (frost$core$Bit) {_150};
_153 = _151.value;
if (_153) goto block8; else goto block4;
block8:;
_155 = &_42->$data.$TEXT.field0;
_156 = *_155;
*(&local4) = ((frost$core$String*) NULL);
_158 = ((frost$core$Object*) _156);
frost$core$Frost$ref$frost$core$Object$Q(_158);
_160 = *(&local4);
_161 = ((frost$core$Object*) _160);
frost$core$Frost$unref$frost$core$Object$Q(_161);
*(&local4) = _156;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:880
_165 = *(&local4);
_166 = ((frost$core$Object*) _165);
frost$core$Frost$ref$frost$core$Object$Q(_166);
_168 = *(&local2);
_169 = ((frost$core$Object*) _168);
frost$core$Frost$unref$frost$core$Object$Q(_169);
*(&local2) = _165;
_172 = *(&local4);
_173 = ((frost$core$Object*) _172);
frost$core$Frost$unref$frost$core$Object$Q(_173);
*(&local4) = ((frost$core$String*) NULL);
goto block4;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:883
_178 = *(&local2);
frost$core$MutableString$append$frost$core$String(param1, _178);
_180 = *(&local2);
_181 = ((frost$core$Object*) _180);
frost$core$Frost$unref$frost$core$Object$Q(_181);
*(&local2) = ((frost$core$String*) NULL);
_184 = _31;
frost$core$Frost$unref$frost$core$Object$Q(_184);
_186 = *(&local1);
_187 = ((frost$core$Object*) _186);
frost$core$Frost$unref$frost$core$Object$Q(_187);
*(&local1) = ((org$frostlang$frostc$frostdoc$Markdown$HTMLToken*) NULL);
goto block1;
block3:;
_191 = ((frost$core$Object*) _23);
frost$core$Frost$unref$frost$core$Object$Q(_191);
_193 = *(&local0);
_194 = ((frost$core$Object*) _193);
frost$core$Frost$unref$frost$core$Object$Q(_194);
*(&local0) = ((frost$collections$ListView*) NULL);
return;

}
void org$frostlang$frostc$frostdoc$Markdown$doImages$frost$core$MutableString(void* rawSelf, frost$core$MutableString* param1) {
org$frostlang$frostc$frostdoc$Markdown* param0 = (org$frostlang$frostc$frostdoc$Markdown*) rawSelf;

frost$core$Matcher* local0 = NULL;
frost$core$Matcher* local1 = NULL;
frost$core$RegularExpression* local2 = NULL;
frost$core$RegularExpression* _1;
frost$core$Bit _5;
frost$core$Object* _8;
$fn496 _9;
frost$core$String* _10;
frost$core$Matcher* _11;
frost$core$Object* _13;
frost$core$Matcher* _15;
frost$core$Object* _16;
frost$core$Object* _19;
frost$core$Object* _21;
frost$core$Matcher* _27;
frost$core$Bit _28;
bool _29;
frost$core$Matcher* _32;
frost$core$Matcher* _36;
frost$core$Matcher* _38;
frost$core$Object* _39;
frost$core$Object* _44;
frost$core$RegularExpression* _47;
frost$core$Bit _51;
frost$core$Object* _54;
$fn497 _55;
frost$core$String* _56;
frost$core$Matcher* _57;
frost$core$Object* _59;
frost$core$Matcher* _61;
frost$core$Object* _62;
frost$core$Object* _65;
frost$core$Object* _67;
frost$core$Matcher* _73;
frost$core$Bit _74;
bool _75;
frost$core$Matcher* _78;
frost$core$Matcher* _82;
frost$core$Matcher* _84;
frost$core$Object* _85;
frost$core$Object* _90;
frost$core$RegularExpression* _93;
frost$core$String* _94;
frost$core$String* _95;
frost$core$String* _96;
frost$core$Object* _99;
frost$core$RegularExpression* _101;
frost$core$Object* _102;
frost$core$Object* _105;
frost$core$Object* _107;
frost$core$Object* _109;
frost$core$Object* _111;
frost$core$RegularExpression* _114;
org$frostlang$frostc$frostdoc$Markdown$_Closure26* _115;
frost$core$Int8* _117;
frost$core$MutableMethod* _118;
frost$core$Object* _119;
frost$core$Int8** _122;
frost$core$Object** _126;
frost$core$Object* _127;
frost$core$Object** _129;
frost$core$MutableMethod* _132;
frost$core$MutableMethod* _133;
frost$core$Object* _135;
frost$core$Object* _137;
frost$core$RegularExpression* _139;
frost$core$Object* _140;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:889
_1 = (frost$core$RegularExpression*) frostObjectAlloc(sizeof(frost$core$RegularExpression), (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String(_1, &$s498);
// begin inline call to method frost.core.MutableString.replace(search:frost.core.RegularExpression, replacement:frost.core.String) from Markdown.frost:889:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:401
_5 = (frost$core$Bit) {true};
// begin inline call to method frost.core.MutableString.replace(search:frost.core.RegularExpression, replacement:frost.core.String, allowGroupReferences:frost.core.Bit) from MutableString.frost:401:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:406
_8 = ((frost$core$Object*) param1);
_9 = ($fn499) _8->$class->vtable[0];
_10 = _9(_8);
_11 = frost$core$RegularExpression$matcher$frost$core$String$R$frost$core$Matcher(_1, _10);
*(&local0) = ((frost$core$Matcher*) NULL);
_13 = ((frost$core$Object*) _11);
frost$core$Frost$ref$frost$core$Object$Q(_13);
_15 = *(&local0);
_16 = ((frost$core$Object*) _15);
frost$core$Frost$unref$frost$core$Object$Q(_16);
*(&local0) = _11;
_19 = ((frost$core$Object*) _11);
frost$core$Frost$unref$frost$core$Object$Q(_19);
_21 = ((frost$core$Object*) _10);
frost$core$Frost$unref$frost$core$Object$Q(_21);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:407
frost$core$MutableString$clear(param1);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:408
goto block3;
block3:;
_27 = *(&local0);
_28 = frost$core$Matcher$find$R$frost$core$Bit(_27);
_29 = _28.value;
if (_29) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:409
_32 = *(&local0);
frost$core$Matcher$appendReplacement$frost$core$MutableString$frost$core$String$frost$core$Bit(_32, param1, &$s500, _5);
goto block3;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:411
_36 = *(&local0);
frost$core$Matcher$appendTail$frost$core$MutableString(_36, param1);
_38 = *(&local0);
_39 = ((frost$core$Object*) _38);
frost$core$Frost$unref$frost$core$Object$Q(_39);
*(&local0) = ((frost$core$Matcher*) NULL);
_44 = ((frost$core$Object*) _1);
frost$core$Frost$unref$frost$core$Object$Q(_44);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:890
_47 = (frost$core$RegularExpression*) frostObjectAlloc(sizeof(frost$core$RegularExpression), (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String(_47, &$s501);
// begin inline call to method frost.core.MutableString.replace(search:frost.core.RegularExpression, replacement:frost.core.String) from Markdown.frost:890:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:401
_51 = (frost$core$Bit) {true};
// begin inline call to method frost.core.MutableString.replace(search:frost.core.RegularExpression, replacement:frost.core.String, allowGroupReferences:frost.core.Bit) from MutableString.frost:401:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:406
_54 = ((frost$core$Object*) param1);
_55 = ($fn502) _54->$class->vtable[0];
_56 = _55(_54);
_57 = frost$core$RegularExpression$matcher$frost$core$String$R$frost$core$Matcher(_47, _56);
*(&local1) = ((frost$core$Matcher*) NULL);
_59 = ((frost$core$Object*) _57);
frost$core$Frost$ref$frost$core$Object$Q(_59);
_61 = *(&local1);
_62 = ((frost$core$Object*) _61);
frost$core$Frost$unref$frost$core$Object$Q(_62);
*(&local1) = _57;
_65 = ((frost$core$Object*) _57);
frost$core$Frost$unref$frost$core$Object$Q(_65);
_67 = ((frost$core$Object*) _56);
frost$core$Frost$unref$frost$core$Object$Q(_67);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:407
frost$core$MutableString$clear(param1);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:408
goto block8;
block8:;
_73 = *(&local1);
_74 = frost$core$Matcher$find$R$frost$core$Bit(_73);
_75 = _74.value;
if (_75) goto block9; else goto block10;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:409
_78 = *(&local1);
frost$core$Matcher$appendReplacement$frost$core$MutableString$frost$core$String$frost$core$Bit(_78, param1, &$s503, _51);
goto block8;
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:411
_82 = *(&local1);
frost$core$Matcher$appendTail$frost$core$MutableString(_82, param1);
_84 = *(&local1);
_85 = ((frost$core$Object*) _84);
frost$core$Frost$unref$frost$core$Object$Q(_85);
*(&local1) = ((frost$core$Matcher*) NULL);
_90 = ((frost$core$Object*) _47);
frost$core$Frost$unref$frost$core$Object$Q(_90);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:893
_93 = (frost$core$RegularExpression*) frostObjectAlloc(sizeof(frost$core$RegularExpression), (frost$core$Class*) &frost$core$RegularExpression$class);
_94 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s504, &$s505);
_95 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_94, &$s506);
_96 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_95, &$s507);
frost$core$RegularExpression$init$frost$core$String(_93, _96);
*(&local2) = ((frost$core$RegularExpression*) NULL);
_99 = ((frost$core$Object*) _93);
frost$core$Frost$ref$frost$core$Object$Q(_99);
_101 = *(&local2);
_102 = ((frost$core$Object*) _101);
frost$core$Frost$unref$frost$core$Object$Q(_102);
*(&local2) = _93;
_105 = ((frost$core$Object*) _96);
frost$core$Frost$unref$frost$core$Object$Q(_105);
_107 = ((frost$core$Object*) _95);
frost$core$Frost$unref$frost$core$Object$Q(_107);
_109 = ((frost$core$Object*) _94);
frost$core$Frost$unref$frost$core$Object$Q(_109);
_111 = ((frost$core$Object*) _93);
frost$core$Frost$unref$frost$core$Object$Q(_111);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:898
_114 = *(&local2);
_115 = (org$frostlang$frostc$frostdoc$Markdown$_Closure26*) frostObjectAlloc(sizeof(org$frostlang$frostc$frostdoc$Markdown$_Closure26), (frost$core$Class*) &org$frostlang$frostc$frostdoc$Markdown$_Closure26$class);
org$frostlang$frostc$frostdoc$Markdown$_Closure26$init$org$frostlang$frostc$frostdoc$Markdown(_115, param0);
_117 = ((frost$core$Int8*) org$frostlang$frostc$frostdoc$Markdown$_Closure26$$anonymous25$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$String);
_118 = (frost$core$MutableMethod*) frostObjectAlloc(sizeof(frost$core$MutableMethod), (frost$core$Class*) &frost$core$MutableMethod$class);
_119 = ((frost$core$Object*) _115);
// begin inline call to frost.core.MutableMethod.init(pointer:frost.unsafe.Pointer<frost.core.Int8>, target:frost.core.Object?) from Markdown.frost:898:33
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableMethod.frost:32
_122 = &_118->pointer;
*_122 = _117;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableMethod.frost:33
frost$core$Frost$ref$frost$core$Object$Q(_119);
_126 = &_118->target;
_127 = *_126;
frost$core$Frost$unref$frost$core$Object$Q(_127);
_129 = &_118->target;
*_129 = _119;
_132 = _118;
_133 = _132;
frost$core$MutableString$replace$frost$core$RegularExpression$$LPfrost$collections$ListView$LTfrost$core$String$Q$GT$RP$EQ$GT$LPfrost$core$Object$RP(param1, _114, _133);
_135 = ((frost$core$Object*) _118);
frost$core$Frost$unref$frost$core$Object$Q(_135);
_137 = ((frost$core$Object*) _115);
frost$core$Frost$unref$frost$core$Object$Q(_137);
_139 = *(&local2);
_140 = ((frost$core$Object*) _139);
frost$core$Frost$unref$frost$core$Object$Q(_140);
*(&local2) = ((frost$core$RegularExpression*) NULL);
return;

}
void org$frostlang$frostc$frostdoc$Markdown$doAnchors$frost$core$MutableString(void* rawSelf, frost$core$MutableString* param1) {
org$frostlang$frostc$frostdoc$Markdown* param0 = (org$frostlang$frostc$frostdoc$Markdown*) rawSelf;

frost$core$RegularExpression* local0 = NULL;
frost$core$RegularExpression* local1 = NULL;
frost$core$String* local2 = NULL;
frost$core$Matcher* local3 = NULL;
frost$core$String$Index local4;
frost$core$String$Index local5;
frost$core$String$Index local6;
frost$core$String* local7 = NULL;
frost$core$String* local8 = NULL;
frost$core$String$Index local9;
frost$core$String$Index local10;
frost$core$String$Index$nullable local11;
frost$core$Error* local12 = NULL;
frost$core$String* local13 = NULL;
frost$core$String* local14 = NULL;
frost$core$Error* local15 = NULL;
frost$core$MutableString* local16 = NULL;
frost$core$RegularExpression* local17 = NULL;
frost$core$RegularExpression* _1;
frost$core$String* _2;
frost$core$String* _3;
frost$core$String* _4;
frost$core$Object* _7;
frost$core$RegularExpression* _9;
frost$core$Object* _10;
frost$core$Object* _13;
frost$core$Object* _15;
frost$core$Object* _17;
frost$core$Object* _19;
frost$core$RegularExpression* _22;
org$frostlang$frostc$frostdoc$Markdown$_Closure28* _23;
frost$core$Int8* _25;
frost$core$MutableMethod* _26;
frost$core$Object* _27;
frost$core$Int8** _30;
frost$core$Object** _34;
frost$core$Object* _35;
frost$core$Object** _37;
frost$core$MutableMethod* _40;
frost$core$Object* _42;
frost$core$Object* _44;
frost$core$RegularExpression* _47;
frost$core$String* _48;
frost$core$String* _49;
frost$core$String* _50;
frost$core$String* _51;
frost$core$String* _52;
frost$core$String* _53;
frost$core$Int _54;
frost$core$Object* _57;
frost$core$RegularExpression* _59;
frost$core$Object* _60;
frost$core$Object* _63;
frost$core$Object* _65;
frost$core$Object* _67;
frost$core$Object* _69;
frost$core$Object* _71;
frost$core$Object* _73;
frost$core$Object* _75;
frost$core$Object* _78;
$fn508 _79;
frost$core$String* _80;
frost$core$Object* _82;
frost$core$String* _84;
frost$core$Object* _85;
frost$core$Object* _88;
frost$core$RegularExpression* _91;
frost$core$String* _92;
frost$core$Matcher* _93;
frost$core$Object* _95;
frost$core$Matcher* _97;
frost$core$Object* _98;
frost$core$Object* _101;
frost$core$String* _106;
frost$core$Int _109;
frost$core$Int* _112;
frost$core$String$Index _114;
frost$core$String$Index _117;
frost$core$Matcher* _122;
frost$core$String$Index _123;
frost$core$String$Index* _126;
frost$core$Bit _129;
frost$core$Bit* _130;
frost$core$Bit* _133;
frost$core$Bit _134;
bool _136;
frost$core$Matcher* _139;
frost$core$Int _140;
frost$core$String* _141;
frost$core$Object* _143;
frost$core$String* _145;
frost$core$Object* _146;
frost$core$Object* _149;
frost$core$Matcher* _152;
frost$core$Int _153;
frost$core$String* _154;
frost$core$Object* _156;
frost$core$String* _158;
frost$core$Object* _159;
frost$core$Object* _162;
frost$core$Matcher* _165;
frost$core$String$Index _166;
frost$core$String$Index _170;
frost$core$Comparable* _171;
frost$core$String* _172;
frost$core$Int* _175;
frost$core$Int _176;
frost$core$Int* _179;
frost$core$String$Index _181;
frost$core$String$Index _184;
frost$core$Comparable* _186;
$fn509 _187;
frost$core$Bit _188;
bool _189;
frost$core$Object* _190;
frost$core$Object* _192;
frost$core$String* _195;
bool _196;
frost$core$Bit _197;
bool _198;
frost$core$Int _200;
frost$core$String* _203;
frost$core$Bit _206;
frost$core$String$MatchIterator* _209;
frost$collections$Iterator* _211;
frost$core$Object* _212;
frost$core$Object* _214;
frost$core$Object* _217;
frost$core$Object* _219;
$fn510 _222;
frost$core$Int _223;
frost$core$String* _224;
bool _225;
frost$core$Bit _226;
bool _227;
frost$core$Int _229;
frost$core$String* _232;
frost$core$Bit _235;
frost$core$String$MatchIterator* _238;
frost$collections$Iterator* _240;
frost$core$Object* _241;
frost$core$Object* _243;
frost$core$Object* _246;
frost$core$Object* _248;
$fn511 _251;
frost$core$Int _252;
int64_t _253;
int64_t _254;
bool _255;
frost$core$Bit _256;
bool _257;
frost$core$Object* _258;
frost$core$Object* _260;
frost$core$String* _264;
frost$core$String$Index _265;
frost$core$String$Index$nullable _266;
frost$core$String$Index$nullable _269;
bool _270;
frost$core$Bit _271;
bool _272;
frost$io$OutputStream* _277;
frost$core$String* _278;
bool _279;
frost$core$Bit _280;
bool _281;
frost$core$Int _283;
frost$core$String* _286;
frost$core$String* _287;
frost$core$String* _288;
$fn512 _289;
frost$core$Error* _290;
bool _291;
frost$core$Object* _293;
bool _295;
frost$core$Bit _296;
bool _297;
frost$core$Int _299;
frost$core$Error* _302;
frost$core$Object* _304;
frost$core$Object* _306;
frost$core$Object* _308;
frost$core$Object* _310;
frost$core$Int _328;
frost$core$Object* _313;
frost$core$Object* _315;
frost$core$Object* _317;
frost$core$Object* _319;
frost$core$Int _322;
frost$core$Int _324;
frost$core$Error* _331;
frost$core$Object* _332;
frost$core$String* _337;
bool _338;
frost$core$Bit _339;
bool _340;
frost$core$Int _342;
frost$core$String* _345;
frost$core$String* _346;
frost$core$String$Index _347;
frost$core$String$Index$nullable _348;
frost$core$String$Index$nullable _349;
frost$core$Bit _350;
frost$core$Range$LTfrost$core$String$Index$Q$GT _351;
frost$core$String* _352;
frost$core$String* _353;
frost$core$String* _354;
frost$core$Object* _355;
frost$core$String* _357;
frost$core$Object* _358;
frost$core$Object* _361;
frost$core$Object* _363;
frost$core$String* _366;
frost$core$String$Index$nullable _367;
bool _368;
frost$core$Bit _369;
bool _370;
frost$core$Int _372;
frost$core$String$Index _375;
frost$core$String$Index _376;
frost$core$MutableMethod** _380;
frost$core$MutableMethod* _381;
bool _382;
frost$core$Bit _383;
bool _384;
frost$core$MutableMethod** _387;
frost$core$MutableMethod* _388;
frost$core$String* _389;
bool _390;
frost$core$Bit _391;
bool _392;
frost$core$Int _394;
frost$core$String* _397;
bool _398;
frost$core$Bit _399;
bool _400;
frost$core$Int _402;
frost$core$MutableMethod* _405;
frost$core$Int8** _406;
frost$core$Int8* _407;
frost$core$Object** _408;
frost$core$Object* _409;
bool _410;
$fn513 _412;
frost$core$String* _413;
$fn514 _416;
frost$core$String* _417;
frost$core$String* _420;
frost$core$Object* _422;
frost$core$String* _424;
frost$core$Object* _425;
frost$core$Object* _428;
frost$core$String* _431;
bool _432;
frost$core$Bit _433;
bool _434;
frost$io$OutputStream* _439;
frost$core$String* _440;
bool _441;
frost$core$Bit _442;
bool _443;
frost$core$Int _445;
frost$core$String* _448;
frost$core$String* _449;
frost$core$String* _450;
$fn515 _451;
frost$core$Error* _452;
bool _453;
frost$core$Object* _455;
bool _457;
frost$core$Bit _458;
bool _459;
frost$core$Int _461;
frost$core$Error* _464;
frost$core$Object* _466;
frost$core$Object* _468;
frost$core$Object* _470;
frost$core$Object* _472;
frost$core$Int _490;
frost$core$Object* _475;
frost$core$Object* _477;
frost$core$Object* _479;
frost$core$Object* _481;
frost$core$Int _484;
frost$core$Int _486;
frost$core$Error* _493;
frost$core$Object* _494;
frost$core$String* _499;
frost$core$Object* _500;
frost$core$String* _502;
frost$core$Object* _503;
frost$core$String* _506;
frost$core$Object* _507;
frost$core$String* _513;
frost$core$Object* _514;
frost$core$String* _516;
frost$core$Object* _517;
frost$core$String* _522;
bool _523;
frost$core$Bit _524;
bool _525;
frost$core$Int _527;
frost$core$String* _530;
frost$core$RegularExpression* _531;
org$frostlang$frostc$frostdoc$Protector** _533;
org$frostlang$frostc$frostdoc$Protector* _534;
$fn516 _535;
frost$core$String* _536;
frost$core$Bit _539;
frost$core$String* _540;
frost$core$Object* _541;
frost$core$Object* _543;
frost$core$String* _546;
frost$core$Object* _547;
frost$core$String* _549;
frost$core$Object* _550;
frost$core$Object* _553;
frost$core$Object* _555;
frost$core$Object* _557;
frost$core$String* _560;
bool _561;
frost$core$Bit _562;
bool _563;
frost$core$Int _565;
frost$core$String* _568;
frost$core$RegularExpression* _569;
org$frostlang$frostc$frostdoc$Protector** _571;
org$frostlang$frostc$frostdoc$Protector* _572;
$fn517 _573;
frost$core$String* _574;
frost$core$Bit _577;
frost$core$String* _578;
frost$core$Object* _579;
frost$core$Object* _581;
frost$core$String* _584;
frost$core$Object* _585;
frost$core$String* _587;
frost$core$Object* _588;
frost$core$Object* _591;
frost$core$Object* _593;
frost$core$Object* _595;
frost$core$MutableString* _598;
frost$core$Object* _601;
frost$core$MutableString* _603;
frost$core$Object* _604;
frost$core$Object* _607;
frost$core$MutableString* _610;
frost$core$String* _611;
bool _612;
frost$core$Bit _613;
bool _614;
frost$core$Int _616;
frost$core$String* _619;
frost$core$String* _620;
frost$core$String* _621;
frost$core$String* _622;
bool _623;
frost$core$Bit _624;
bool _625;
frost$core$Int _627;
frost$core$String* _630;
frost$core$String* _631;
frost$core$String* _632;
frost$core$Object* _634;
frost$core$Object* _636;
frost$core$Object* _638;
frost$core$Object* _640;
frost$core$Matcher* _643;
frost$core$MutableString* _644;
frost$core$String* _645;
frost$core$Bit* _647;
frost$core$Bit _648;
bool _649;
frost$core$Int _651;
frost$core$Bit _655;
frost$core$Object* _658;
frost$core$MutableString* _660;
frost$core$Object* _661;
frost$core$String* _664;
frost$core$Object* _665;
frost$core$String* _668;
frost$core$Object* _669;
frost$core$Matcher* _674;
frost$core$String** _677;
frost$core$String* _678;
frost$core$String$Index* _679;
frost$core$String$Index _680;
frost$core$String$Index$nullable _681;
frost$core$Bit _682;
frost$core$Range$LTfrost$core$String$Index$Q$GT _683;
frost$core$String* _684;
frost$core$Object* _686;
frost$core$RegularExpression* _690;
frost$core$String* _691;
frost$core$String* _692;
frost$core$String* _693;
frost$core$Int _694;
frost$core$Object* _697;
frost$core$RegularExpression* _699;
frost$core$Object* _700;
frost$core$Object* _703;
frost$core$Object* _705;
frost$core$Object* _707;
frost$core$Object* _709;
frost$core$RegularExpression* _712;
org$frostlang$frostc$frostdoc$Markdown$_Closure30* _713;
frost$core$Int8* _715;
frost$core$MutableMethod* _716;
frost$core$Object* _717;
frost$core$Int8** _720;
frost$core$Object** _724;
frost$core$Object* _725;
frost$core$Object** _727;
frost$core$MutableMethod* _730;
frost$core$Object* _732;
frost$core$Object* _734;
frost$core$RegularExpression* _736;
frost$core$Object* _737;
frost$core$Matcher* _740;
frost$core$Object* _741;
frost$core$String* _744;
frost$core$Object* _745;
frost$core$RegularExpression* _748;
frost$core$Object* _749;
frost$core$RegularExpression* _752;
frost$core$Object* _753;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:931
_1 = (frost$core$RegularExpression*) frostObjectAlloc(sizeof(frost$core$RegularExpression), (frost$core$Class*) &frost$core$RegularExpression$class);
_2 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s518, &$s519);
_3 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_2, &$s520);
_4 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_3, &$s521);
frost$core$RegularExpression$init$frost$core$String(_1, _4);
*(&local0) = ((frost$core$RegularExpression*) NULL);
_7 = ((frost$core$Object*) _1);
frost$core$Frost$ref$frost$core$Object$Q(_7);
_9 = *(&local0);
_10 = ((frost$core$Object*) _9);
frost$core$Frost$unref$frost$core$Object$Q(_10);
*(&local0) = _1;
_13 = ((frost$core$Object*) _4);
frost$core$Frost$unref$frost$core$Object$Q(_13);
_15 = ((frost$core$Object*) _3);
frost$core$Frost$unref$frost$core$Object$Q(_15);
_17 = ((frost$core$Object*) _2);
frost$core$Frost$unref$frost$core$Object$Q(_17);
_19 = ((frost$core$Object*) _1);
frost$core$Frost$unref$frost$core$Object$Q(_19);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:936
_22 = *(&local0);
_23 = (org$frostlang$frostc$frostdoc$Markdown$_Closure28*) frostObjectAlloc(sizeof(org$frostlang$frostc$frostdoc$Markdown$_Closure28), (frost$core$Class*) &org$frostlang$frostc$frostdoc$Markdown$_Closure28$class);
org$frostlang$frostc$frostdoc$Markdown$_Closure28$init$org$frostlang$frostc$frostdoc$Markdown(_23, param0);
_25 = ((frost$core$Int8*) org$frostlang$frostc$frostdoc$Markdown$_Closure28$$anonymous27$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$Object);
_26 = (frost$core$MutableMethod*) frostObjectAlloc(sizeof(frost$core$MutableMethod), (frost$core$Class*) &frost$core$MutableMethod$class);
_27 = ((frost$core$Object*) _23);
// begin inline call to frost.core.MutableMethod.init(pointer:frost.unsafe.Pointer<frost.core.Int8>, target:frost.core.Object?) from Markdown.frost:936:38
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableMethod.frost:32
_30 = &_26->pointer;
*_30 = _25;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableMethod.frost:33
frost$core$Frost$ref$frost$core$Object$Q(_27);
_34 = &_26->target;
_35 = *_34;
frost$core$Frost$unref$frost$core$Object$Q(_35);
_37 = &_26->target;
*_37 = _27;
_40 = _26;
frost$core$MutableString$replace$frost$core$RegularExpression$$LPfrost$collections$ListView$LTfrost$core$String$Q$GT$RP$EQ$GT$LPfrost$core$Object$RP(param1, _22, _40);
_42 = ((frost$core$Object*) _26);
frost$core$Frost$unref$frost$core$Object$Q(_42);
_44 = ((frost$core$Object*) _23);
frost$core$Frost$unref$frost$core$Object$Q(_44);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:968
_47 = (frost$core$RegularExpression*) frostObjectAlloc(sizeof(frost$core$RegularExpression), (frost$core$Class*) &frost$core$RegularExpression$class);
_48 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s522, &$s523);
_49 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_48, &$s524);
_50 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_49, &$s525);
_51 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_50, &$s526);
_52 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_51, &$s527);
_53 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_52, &$s528);
_54 = (frost$core$Int) {4u};
frost$core$RegularExpression$init$frost$core$String$frost$core$Int(_47, _53, _54);
*(&local1) = ((frost$core$RegularExpression*) NULL);
_57 = ((frost$core$Object*) _47);
frost$core$Frost$ref$frost$core$Object$Q(_57);
_59 = *(&local1);
_60 = ((frost$core$Object*) _59);
frost$core$Frost$unref$frost$core$Object$Q(_60);
*(&local1) = _47;
_63 = ((frost$core$Object*) _53);
frost$core$Frost$unref$frost$core$Object$Q(_63);
_65 = ((frost$core$Object*) _52);
frost$core$Frost$unref$frost$core$Object$Q(_65);
_67 = ((frost$core$Object*) _51);
frost$core$Frost$unref$frost$core$Object$Q(_67);
_69 = ((frost$core$Object*) _50);
frost$core$Frost$unref$frost$core$Object$Q(_69);
_71 = ((frost$core$Object*) _49);
frost$core$Frost$unref$frost$core$Object$Q(_71);
_73 = ((frost$core$Object*) _48);
frost$core$Frost$unref$frost$core$Object$Q(_73);
_75 = ((frost$core$Object*) _47);
frost$core$Frost$unref$frost$core$Object$Q(_75);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:977
_78 = ((frost$core$Object*) param1);
_79 = ($fn529) _78->$class->vtable[0];
_80 = _79(_78);
*(&local2) = ((frost$core$String*) NULL);
_82 = ((frost$core$Object*) _80);
frost$core$Frost$ref$frost$core$Object$Q(_82);
_84 = *(&local2);
_85 = ((frost$core$Object*) _84);
frost$core$Frost$unref$frost$core$Object$Q(_85);
*(&local2) = _80;
_88 = ((frost$core$Object*) _80);
frost$core$Frost$unref$frost$core$Object$Q(_88);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:978
_91 = *(&local1);
_92 = *(&local2);
_93 = frost$core$RegularExpression$matcher$frost$core$String$R$frost$core$Matcher(_91, _92);
*(&local3) = ((frost$core$Matcher*) NULL);
_95 = ((frost$core$Object*) _93);
frost$core$Frost$ref$frost$core$Object$Q(_95);
_97 = *(&local3);
_98 = ((frost$core$Object*) _97);
frost$core$Frost$unref$frost$core$Object$Q(_98);
*(&local3) = _93;
_101 = ((frost$core$Object*) _93);
frost$core$Frost$unref$frost$core$Object$Q(_101);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:979
frost$core$MutableString$clear(param1);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:980
_106 = *(&local2);
// begin inline call to function frost.core.String.get_start():frost.core.String.Index from Markdown.frost:980:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1205
_109 = (frost$core$Int) {0u};
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from String.frost:1205:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:61
_112 = &(&local5)->value;
*_112 = _109;
_114 = *(&local5);
*(&local4) = _114;
_117 = *(&local4);
*(&local6) = _117;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:981
goto block4;
block4:;
_122 = *(&local3);
_123 = *(&local6);
// begin inline call to method frost.core.Matcher.find(start:frost.core.String.Index):frost.core.Bit from Markdown.frost:981:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Matcher.frost:84
_126 = &_122->replacementIndex;
*_126 = _123;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Matcher.frost:85
frost$core$Matcher$nativeFind$frost$core$String$Index$R$frost$core$Bit(&_129, _122, _123);
_130 = &_122->matched;
*_130 = _129;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Matcher.frost:86
_133 = &_122->matched;
_134 = *_133;
_136 = _134.value;
if (_136) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:982
_139 = *(&local3);
_140 = (frost$core$Int) {2u};
_141 = frost$core$Matcher$group$frost$core$Int$R$frost$core$String$Q(_139, _140);
*(&local7) = ((frost$core$String*) NULL);
_143 = ((frost$core$Object*) _141);
frost$core$Frost$ref$frost$core$Object$Q(_143);
_145 = *(&local7);
_146 = ((frost$core$Object*) _145);
frost$core$Frost$unref$frost$core$Object$Q(_146);
*(&local7) = _141;
_149 = ((frost$core$Object*) _141);
frost$core$Frost$unref$frost$core$Object$Q(_149);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:983
_152 = *(&local3);
_153 = (frost$core$Int) {3u};
_154 = frost$core$Matcher$group$frost$core$Int$R$frost$core$String$Q(_152, _153);
*(&local8) = ((frost$core$String*) NULL);
_156 = ((frost$core$Object*) _154);
frost$core$Frost$ref$frost$core$Object$Q(_156);
_158 = *(&local8);
_159 = ((frost$core$Object*) _158);
frost$core$Frost$unref$frost$core$Object$Q(_159);
*(&local8) = _154;
_162 = ((frost$core$Object*) _154);
frost$core$Frost$unref$frost$core$Object$Q(_162);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:984
_165 = *(&local3);
frost$core$Matcher$get_end$R$frost$core$String$Index(&_166, _165);
*(&local6) = _166;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:985
goto block8;
block8:;
_170 = *(&local6);
frost$core$String$Index$wrapper* $tmp530;
$tmp530 = (frost$core$String$Index$wrapper*) frostObjectAlloc(sizeof(frost$core$String$Index$wrapper), (frost$core$Class*) &frost$core$String$Index$wrapperclass);
$tmp530->value = _170;
_171 = ((frost$core$Comparable*) $tmp530);
_172 = *(&local2);
// begin inline call to function frost.core.String.get_end():frost.core.String.Index from Markdown.frost:985:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1212
_175 = &_172->_length;
_176 = *_175;
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from String.frost:1212:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:61
_179 = &(&local10)->value;
*_179 = _176;
_181 = *(&local10);
*(&local9) = _181;
_184 = *(&local9);
frost$core$String$Index$wrapper* $tmp531;
$tmp531 = (frost$core$String$Index$wrapper*) frostObjectAlloc(sizeof(frost$core$String$Index$wrapper), (frost$core$Class*) &frost$core$String$Index$wrapperclass);
$tmp531->value = _184;
_186 = ((frost$core$Comparable*) $tmp531);
ITable* $tmp532 = _171->$class->itable;
while ($tmp532->$class != (frost$core$Class*) &frost$core$Comparable$class) {
    $tmp532 = $tmp532->next;
}
_187 = $tmp532->methods[1];
_188 = _187(_171, _186);
_189 = _188.value;
_190 = ((frost$core$Object*) _186);
frost$core$Frost$unref$frost$core$Object$Q(_190);
_192 = ((frost$core$Object*) _171);
frost$core$Frost$unref$frost$core$Object$Q(_192);
if (_189) goto block11; else goto block10;
block11:;
_195 = *(&local8);
_196 = _195 != NULL;
_197 = (frost$core$Bit) {_196};
_198 = _197.value;
if (_198) goto block14; else goto block15;
block15:;
_200 = (frost$core$Int) {985u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s533, _200, &$s534);
abort(); // unreachable
block14:;
_203 = _195;
// begin inline call to function frost.core.String.find(needle:frost.core.String):frost.collections.Iterator<frost.core.String.Index> from Markdown.frost:985:45
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1186
_206 = (frost$core$Bit) {false};
// begin inline call to function frost.core.String.find(needle:frost.core.String, overlapping:frost.core.Bit):frost.collections.Iterator<frost.core.String.Index> from String.frost:1186:20
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1190
_209 = (frost$core$String$MatchIterator*) frostObjectAlloc(sizeof(frost$core$String$MatchIterator), (frost$core$Class*) &frost$core$String$MatchIterator$class);
frost$core$String$MatchIterator$init$frost$core$String$frost$core$String$frost$core$Bit(_209, _203, &$s535, _206);
_211 = ((frost$collections$Iterator*) _209);
_212 = ((frost$core$Object*) _211);
frost$core$Frost$ref$frost$core$Object$Q(_212);
_214 = ((frost$core$Object*) _209);
frost$core$Frost$unref$frost$core$Object$Q(_214);
_217 = ((frost$core$Object*) _211);
frost$core$Frost$ref$frost$core$Object$Q(_217);
_219 = ((frost$core$Object*) _211);
frost$core$Frost$unref$frost$core$Object$Q(_219);
ITable* $tmp536 = _211->$class->itable;
while ($tmp536->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp536 = $tmp536->next;
}
_222 = $tmp536->methods[2];
_223 = _222(_211);
_224 = *(&local8);
_225 = _224 != NULL;
_226 = (frost$core$Bit) {_225};
_227 = _226.value;
if (_227) goto block18; else goto block19;
block19:;
_229 = (frost$core$Int) {985u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s537, _229, &$s538);
abort(); // unreachable
block18:;
_232 = _224;
// begin inline call to function frost.core.String.find(needle:frost.core.String):frost.collections.Iterator<frost.core.String.Index> from Markdown.frost:985:69
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1186
_235 = (frost$core$Bit) {false};
// begin inline call to function frost.core.String.find(needle:frost.core.String, overlapping:frost.core.Bit):frost.collections.Iterator<frost.core.String.Index> from String.frost:1186:20
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1190
_238 = (frost$core$String$MatchIterator*) frostObjectAlloc(sizeof(frost$core$String$MatchIterator), (frost$core$Class*) &frost$core$String$MatchIterator$class);
frost$core$String$MatchIterator$init$frost$core$String$frost$core$String$frost$core$Bit(_238, _232, &$s539, _235);
_240 = ((frost$collections$Iterator*) _238);
_241 = ((frost$core$Object*) _240);
frost$core$Frost$ref$frost$core$Object$Q(_241);
_243 = ((frost$core$Object*) _238);
frost$core$Frost$unref$frost$core$Object$Q(_243);
_246 = ((frost$core$Object*) _240);
frost$core$Frost$ref$frost$core$Object$Q(_246);
_248 = ((frost$core$Object*) _240);
frost$core$Frost$unref$frost$core$Object$Q(_248);
ITable* $tmp540 = _240->$class->itable;
while ($tmp540->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp540 = $tmp540->next;
}
_251 = $tmp540->methods[2];
_252 = _251(_240);
_253 = _223.value;
_254 = _252.value;
_255 = _253 > _254;
_256 = (frost$core$Bit) {_255};
_257 = _256.value;
_258 = ((frost$core$Object*) _240);
frost$core$Frost$unref$frost$core$Object$Q(_258);
_260 = ((frost$core$Object*) _211);
frost$core$Frost$unref$frost$core$Object$Q(_260);
if (_257) goto block9; else goto block10;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:986
_264 = *(&local2);
_265 = *(&local6);
_266 = frost$core$String$indexOf$frost$core$String$frost$core$String$Index$R$frost$core$String$Index$Q(_264, &$s541, _265);
*(&local11) = _266;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:987
_269 = *(&local11);
_270 = !_269.nonnull;
_271 = (frost$core$Bit) {_270};
_272 = _271.value;
if (_272) goto block22; else goto block23;
block22:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:988
*(&local12) = ((frost$core$Error*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:989
_277 = frost$io$Console$errorStream$R$frost$io$OutputStream();
_278 = *(&local8);
_279 = _278 != NULL;
_280 = (frost$core$Bit) {_279};
_281 = _280.value;
if (_281) goto block26; else goto block27;
block27:;
_283 = (frost$core$Int) {989u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s542, _283, &$s543);
abort(); // unreachable
block26:;
_286 = _278;
_287 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s544, _286);
_288 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_287, &$s545);
_289 = ($fn546) _277->$class->vtable[19];
_290 = _289(_277, _288);
_291 = _290 == NULL;
if (_291) goto block28; else goto block29;
block29:;
_293 = ((frost$core$Object*) _290);
frost$core$Frost$ref$frost$core$Object$Q(_293);
_295 = _290 != NULL;
_296 = (frost$core$Bit) {_295};
_297 = _296.value;
if (_297) goto block30; else goto block31;
block31:;
_299 = (frost$core$Int) {989u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s547, _299, &$s548);
abort(); // unreachable
block30:;
_302 = _290;
*(&local12) = _302;
_304 = ((frost$core$Object*) _290);
frost$core$Frost$unref$frost$core$Object$Q(_304);
_306 = ((frost$core$Object*) _288);
frost$core$Frost$unref$frost$core$Object$Q(_306);
_308 = ((frost$core$Object*) _287);
frost$core$Frost$unref$frost$core$Object$Q(_308);
_310 = ((frost$core$Object*) _277);
frost$core$Frost$unref$frost$core$Object$Q(_310);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:993
_328 = (frost$core$Int) {993u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s549, _328);
abort(); // unreachable
block28:;
_313 = ((frost$core$Object*) _290);
frost$core$Frost$unref$frost$core$Object$Q(_313);
_315 = ((frost$core$Object*) _288);
frost$core$Frost$unref$frost$core$Object$Q(_315);
_317 = ((frost$core$Object*) _287);
frost$core$Frost$unref$frost$core$Object$Q(_317);
_319 = ((frost$core$Object*) _277);
frost$core$Frost$unref$frost$core$Object$Q(_319);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:990
_322 = (frost$core$Int) {1u};
frost$core$System$exit$frost$core$Int(_322);
_324 = (frost$core$Int) {990u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s550, _324, &$s551);
abort(); // unreachable
block25:;
_331 = *(&local12);
_332 = ((frost$core$Object*) _331);
frost$core$Frost$unref$frost$core$Object$Q(_332);
*(&local12) = ((frost$core$Error*) NULL);
goto block23;
block23:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:996
_337 = *(&local8);
_338 = _337 != NULL;
_339 = (frost$core$Bit) {_338};
_340 = _339.value;
if (_340) goto block32; else goto block33;
block33:;
_342 = (frost$core$Int) {996u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s552, _342, &$s553);
abort(); // unreachable
block32:;
_345 = _337;
_346 = *(&local2);
_347 = *(&local6);
_348 = ((frost$core$String$Index$nullable) { _347, true });
_349 = *(&local11);
_350 = (frost$core$Bit) {true};
_351 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(_348, _349, _350);
_352 = frost$core$String$substring$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String(_346, _351);
_353 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_345, _352);
_354 = _353;
_355 = ((frost$core$Object*) _354);
frost$core$Frost$ref$frost$core$Object$Q(_355);
_357 = *(&local8);
_358 = ((frost$core$Object*) _357);
frost$core$Frost$unref$frost$core$Object$Q(_358);
*(&local8) = _354;
_361 = ((frost$core$Object*) _353);
frost$core$Frost$unref$frost$core$Object$Q(_361);
_363 = ((frost$core$Object*) _352);
frost$core$Frost$unref$frost$core$Object$Q(_363);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:997
_366 = *(&local2);
_367 = *(&local11);
_368 = _367.nonnull;
_369 = (frost$core$Bit) {_368};
_370 = _369.value;
if (_370) goto block34; else goto block35;
block35:;
_372 = (frost$core$Int) {997u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s554, _372, &$s555);
abort(); // unreachable
block34:;
_375 = ((frost$core$String$Index) _367.value);
_376 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index(_366, _375);
*(&local6) = _376;
goto block8;
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:1000
_380 = &param0->linkResolver;
_381 = *_380;
_382 = _381 != NULL;
_383 = (frost$core$Bit) {_382};
_384 = _383.value;
if (_384) goto block36; else goto block38;
block36:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:1001
_387 = &param0->linkResolver;
_388 = *_387;
_389 = *(&local8);
_390 = _389 != NULL;
_391 = (frost$core$Bit) {_390};
_392 = _391.value;
if (_392) goto block39; else goto block40;
block40:;
_394 = (frost$core$Int) {1001u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s556, _394, &$s557);
abort(); // unreachable
block39:;
_397 = _389;
_398 = _388 != NULL;
_399 = (frost$core$Bit) {_398};
_400 = _399.value;
if (_400) goto block41; else goto block42;
block42:;
_402 = (frost$core$Int) {1001u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s558, _402, &$s559);
abort(); // unreachable
block41:;
_405 = _388;
_406 = &_405->pointer;
_407 = *_406;
_408 = &_405->target;
_409 = *_408;
_410 = _409 != ((frost$core$Object*) NULL);
if (_410) goto block43; else goto block44;
block44:;
_412 = (($fn560) _407);
_413 = _412(_397);
*(&local13) = _413;
goto block45;
block43:;
_416 = (($fn561) _407);
_417 = _416(_409, _397);
*(&local13) = _417;
goto block45;
block45:;
_420 = *(&local13);
*(&local14) = ((frost$core$String*) NULL);
_422 = ((frost$core$Object*) _420);
frost$core$Frost$ref$frost$core$Object$Q(_422);
_424 = *(&local14);
_425 = ((frost$core$Object*) _424);
frost$core$Frost$unref$frost$core$Object$Q(_425);
*(&local14) = _420;
_428 = ((frost$core$Object*) _420);
frost$core$Frost$unref$frost$core$Object$Q(_428);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:1002
_431 = *(&local14);
_432 = _431 == NULL;
_433 = (frost$core$Bit) {_432};
_434 = _433.value;
if (_434) goto block46; else goto block47;
block46:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:1003
*(&local15) = ((frost$core$Error*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:1004
_439 = frost$io$Console$errorStream$R$frost$io$OutputStream();
_440 = *(&local8);
_441 = _440 != NULL;
_442 = (frost$core$Bit) {_441};
_443 = _442.value;
if (_443) goto block50; else goto block51;
block51:;
_445 = (frost$core$Int) {1004u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s562, _445, &$s563);
abort(); // unreachable
block50:;
_448 = _440;
_449 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s564, _448);
_450 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_449, &$s565);
_451 = ($fn566) _439->$class->vtable[19];
_452 = _451(_439, _450);
_453 = _452 == NULL;
if (_453) goto block52; else goto block53;
block53:;
_455 = ((frost$core$Object*) _452);
frost$core$Frost$ref$frost$core$Object$Q(_455);
_457 = _452 != NULL;
_458 = (frost$core$Bit) {_457};
_459 = _458.value;
if (_459) goto block54; else goto block55;
block55:;
_461 = (frost$core$Int) {1004u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s567, _461, &$s568);
abort(); // unreachable
block54:;
_464 = _452;
*(&local15) = _464;
_466 = ((frost$core$Object*) _452);
frost$core$Frost$unref$frost$core$Object$Q(_466);
_468 = ((frost$core$Object*) _450);
frost$core$Frost$unref$frost$core$Object$Q(_468);
_470 = ((frost$core$Object*) _449);
frost$core$Frost$unref$frost$core$Object$Q(_470);
_472 = ((frost$core$Object*) _439);
frost$core$Frost$unref$frost$core$Object$Q(_472);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:1008
_490 = (frost$core$Int) {1008u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s569, _490);
abort(); // unreachable
block52:;
_475 = ((frost$core$Object*) _452);
frost$core$Frost$unref$frost$core$Object$Q(_475);
_477 = ((frost$core$Object*) _450);
frost$core$Frost$unref$frost$core$Object$Q(_477);
_479 = ((frost$core$Object*) _449);
frost$core$Frost$unref$frost$core$Object$Q(_479);
_481 = ((frost$core$Object*) _439);
frost$core$Frost$unref$frost$core$Object$Q(_481);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:1005
_484 = (frost$core$Int) {1u};
frost$core$System$exit$frost$core$Int(_484);
_486 = (frost$core$Int) {1005u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s570, _486, &$s571);
abort(); // unreachable
block49:;
_493 = *(&local15);
_494 = ((frost$core$Object*) _493);
frost$core$Frost$unref$frost$core$Object$Q(_494);
*(&local15) = ((frost$core$Error*) NULL);
goto block47;
block47:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:1011
_499 = *(&local14);
_500 = ((frost$core$Object*) _499);
frost$core$Frost$ref$frost$core$Object$Q(_500);
_502 = *(&local8);
_503 = ((frost$core$Object*) _502);
frost$core$Frost$unref$frost$core$Object$Q(_503);
*(&local8) = _499;
_506 = *(&local14);
_507 = ((frost$core$Object*) _506);
frost$core$Frost$unref$frost$core$Object$Q(_507);
*(&local14) = ((frost$core$String*) NULL);
goto block37;
block38:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:1014
_513 = &$s572;
_514 = ((frost$core$Object*) _513);
frost$core$Frost$ref$frost$core$Object$Q(_514);
_516 = *(&local8);
_517 = ((frost$core$Object*) _516);
frost$core$Frost$unref$frost$core$Object$Q(_517);
*(&local8) = _513;
goto block37;
block37:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:1016
_522 = *(&local8);
_523 = _522 != NULL;
_524 = (frost$core$Bit) {_523};
_525 = _524.value;
if (_525) goto block56; else goto block57;
block57:;
_527 = (frost$core$Int) {1016u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s573, _527, &$s574);
abort(); // unreachable
block56:;
_530 = _522;
_531 = (frost$core$RegularExpression*) frostObjectAlloc(sizeof(frost$core$RegularExpression), (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String(_531, &$s575);
_533 = &param0->charProtector;
_534 = *_533;
_535 = ($fn576) _534->$class->vtable[2];
_536 = _535(_534, &$s577);
// begin inline call to function frost.core.String.replace(search:frost.core.RegularExpression, replacement:frost.core.String):frost.core.String from Markdown.frost:1016:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1120
_539 = (frost$core$Bit) {true};
_540 = frost$core$String$replace$frost$core$RegularExpression$frost$core$String$frost$core$Bit$R$frost$core$String(_530, _531, _536, _539);
_541 = ((frost$core$Object*) _540);
frost$core$Frost$ref$frost$core$Object$Q(_541);
_543 = ((frost$core$Object*) _540);
frost$core$Frost$unref$frost$core$Object$Q(_543);
_546 = _540;
_547 = ((frost$core$Object*) _546);
frost$core$Frost$ref$frost$core$Object$Q(_547);
_549 = *(&local8);
_550 = ((frost$core$Object*) _549);
frost$core$Frost$unref$frost$core$Object$Q(_550);
*(&local8) = _546;
_553 = ((frost$core$Object*) _540);
frost$core$Frost$unref$frost$core$Object$Q(_553);
_555 = ((frost$core$Object*) _536);
frost$core$Frost$unref$frost$core$Object$Q(_555);
_557 = ((frost$core$Object*) _531);
frost$core$Frost$unref$frost$core$Object$Q(_557);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:1017
_560 = *(&local8);
_561 = _560 != NULL;
_562 = (frost$core$Bit) {_561};
_563 = _562.value;
if (_563) goto block59; else goto block60;
block60:;
_565 = (frost$core$Int) {1017u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s578, _565, &$s579);
abort(); // unreachable
block59:;
_568 = _560;
_569 = (frost$core$RegularExpression*) frostObjectAlloc(sizeof(frost$core$RegularExpression), (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String(_569, &$s580);
_571 = &param0->charProtector;
_572 = *_571;
_573 = ($fn581) _572->$class->vtable[2];
_574 = _573(_572, &$s582);
// begin inline call to function frost.core.String.replace(search:frost.core.RegularExpression, replacement:frost.core.String):frost.core.String from Markdown.frost:1017:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1120
_577 = (frost$core$Bit) {true};
_578 = frost$core$String$replace$frost$core$RegularExpression$frost$core$String$frost$core$Bit$R$frost$core$String(_568, _569, _574, _577);
_579 = ((frost$core$Object*) _578);
frost$core$Frost$ref$frost$core$Object$Q(_579);
_581 = ((frost$core$Object*) _578);
frost$core$Frost$unref$frost$core$Object$Q(_581);
_584 = _578;
_585 = ((frost$core$Object*) _584);
frost$core$Frost$ref$frost$core$Object$Q(_585);
_587 = *(&local8);
_588 = ((frost$core$Object*) _587);
frost$core$Frost$unref$frost$core$Object$Q(_588);
*(&local8) = _584;
_591 = ((frost$core$Object*) _578);
frost$core$Frost$unref$frost$core$Object$Q(_591);
_593 = ((frost$core$Object*) _574);
frost$core$Frost$unref$frost$core$Object$Q(_593);
_595 = ((frost$core$Object*) _569);
frost$core$Frost$unref$frost$core$Object$Q(_595);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:1018
_598 = (frost$core$MutableString*) frostObjectAlloc(sizeof(frost$core$MutableString), (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init(_598);
*(&local16) = ((frost$core$MutableString*) NULL);
_601 = ((frost$core$Object*) _598);
frost$core$Frost$ref$frost$core$Object$Q(_601);
_603 = *(&local16);
_604 = ((frost$core$Object*) _603);
frost$core$Frost$unref$frost$core$Object$Q(_604);
*(&local16) = _598;
_607 = ((frost$core$Object*) _598);
frost$core$Frost$unref$frost$core$Object$Q(_607);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:1019
_610 = *(&local16);
_611 = *(&local8);
_612 = _611 != NULL;
_613 = (frost$core$Bit) {_612};
_614 = _613.value;
if (_614) goto block62; else goto block63;
block63:;
_616 = (frost$core$Int) {1019u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s583, _616, &$s584);
abort(); // unreachable
block62:;
_619 = _611;
_620 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s585, _619);
_621 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_620, &$s586);
_622 = *(&local7);
_623 = _622 != NULL;
_624 = (frost$core$Bit) {_623};
_625 = _624.value;
if (_625) goto block64; else goto block65;
block65:;
_627 = (frost$core$Int) {1019u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s587, _627, &$s588);
abort(); // unreachable
block64:;
_630 = _622;
_631 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_621, _630);
_632 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_631, &$s589);
frost$core$MutableString$append$frost$core$String(_610, _632);
_634 = ((frost$core$Object*) _632);
frost$core$Frost$unref$frost$core$Object$Q(_634);
_636 = ((frost$core$Object*) _631);
frost$core$Frost$unref$frost$core$Object$Q(_636);
_638 = ((frost$core$Object*) _621);
frost$core$Frost$unref$frost$core$Object$Q(_638);
_640 = ((frost$core$Object*) _620);
frost$core$Frost$unref$frost$core$Object$Q(_640);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:1020
_643 = *(&local3);
_644 = *(&local16);
_645 = frost$core$MutableString$finish$R$frost$core$String(_644);
// begin inline call to method frost.core.Matcher.appendReplacement(target:frost.core.MutableString, replacement:frost.core.String) from Markdown.frost:1020:38
_647 = &_643->matched;
_648 = *_647;
_649 = _648.value;
if (_649) goto block67; else goto block68;
block68:;
_651 = (frost$core$Int) {114u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s590, _651, &$s591);
abort(); // unreachable
block67:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Matcher.frost:115
_655 = (frost$core$Bit) {true};
frost$core$Matcher$appendReplacement$frost$core$MutableString$frost$core$String$frost$core$Bit(_643, param1, _645, _655);
_658 = ((frost$core$Object*) _645);
frost$core$Frost$unref$frost$core$Object$Q(_658);
_660 = *(&local16);
_661 = ((frost$core$Object*) _660);
frost$core$Frost$unref$frost$core$Object$Q(_661);
*(&local16) = ((frost$core$MutableString*) NULL);
_664 = *(&local8);
_665 = ((frost$core$Object*) _664);
frost$core$Frost$unref$frost$core$Object$Q(_665);
*(&local8) = ((frost$core$String*) NULL);
_668 = *(&local7);
_669 = ((frost$core$Object*) _668);
frost$core$Frost$unref$frost$core$Object$Q(_669);
*(&local7) = ((frost$core$String*) NULL);
goto block4;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:1022
_674 = *(&local3);
// begin inline call to method frost.core.Matcher.appendTail(target:frost.core.MutableString) from Markdown.frost:1022:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Matcher.frost:169
_677 = &_674->searchText;
_678 = *_677;
_679 = &_674->replacementIndex;
_680 = *_679;
_681 = ((frost$core$String$Index$nullable) { _680, true });
_682 = (frost$core$Bit) {false};
_683 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(_681, ((frost$core$String$Index$nullable) { .nonnull = false }), _682);
_684 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String(_678, _683);
frost$core$MutableString$append$frost$core$String(param1, _684);
_686 = ((frost$core$Object*) _684);
frost$core$Frost$unref$frost$core$Object$Q(_686);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:1027
_690 = (frost$core$RegularExpression*) frostObjectAlloc(sizeof(frost$core$RegularExpression), (frost$core$Class*) &frost$core$RegularExpression$class);
_691 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s592, &$s593);
_692 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_691, &$s594);
_693 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_692, &$s595);
_694 = (frost$core$Int) {4u};
frost$core$RegularExpression$init$frost$core$String$frost$core$Int(_690, _693, _694);
*(&local17) = ((frost$core$RegularExpression*) NULL);
_697 = ((frost$core$Object*) _690);
frost$core$Frost$ref$frost$core$Object$Q(_697);
_699 = *(&local17);
_700 = ((frost$core$Object*) _699);
frost$core$Frost$unref$frost$core$Object$Q(_700);
*(&local17) = _690;
_703 = ((frost$core$Object*) _693);
frost$core$Frost$unref$frost$core$Object$Q(_703);
_705 = ((frost$core$Object*) _692);
frost$core$Frost$unref$frost$core$Object$Q(_705);
_707 = ((frost$core$Object*) _691);
frost$core$Frost$unref$frost$core$Object$Q(_707);
_709 = ((frost$core$Object*) _690);
frost$core$Frost$unref$frost$core$Object$Q(_709);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:1033
_712 = *(&local17);
_713 = (org$frostlang$frostc$frostdoc$Markdown$_Closure30*) frostObjectAlloc(sizeof(org$frostlang$frostc$frostdoc$Markdown$_Closure30), (frost$core$Class*) &org$frostlang$frostc$frostdoc$Markdown$_Closure30$class);
org$frostlang$frostc$frostdoc$Markdown$_Closure30$init$org$frostlang$frostc$frostdoc$Markdown(_713, param0);
_715 = ((frost$core$Int8*) org$frostlang$frostc$frostdoc$Markdown$_Closure30$$anonymous29$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$Object);
_716 = (frost$core$MutableMethod*) frostObjectAlloc(sizeof(frost$core$MutableMethod), (frost$core$Class*) &frost$core$MutableMethod$class);
_717 = ((frost$core$Object*) _713);
// begin inline call to frost.core.MutableMethod.init(pointer:frost.unsafe.Pointer<frost.core.Int8>, target:frost.core.Object?) from Markdown.frost:1033:43
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableMethod.frost:32
_720 = &_716->pointer;
*_720 = _715;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableMethod.frost:33
frost$core$Frost$ref$frost$core$Object$Q(_717);
_724 = &_716->target;
_725 = *_724;
frost$core$Frost$unref$frost$core$Object$Q(_725);
_727 = &_716->target;
*_727 = _717;
_730 = _716;
frost$core$MutableString$replace$frost$core$RegularExpression$$LPfrost$collections$ListView$LTfrost$core$String$Q$GT$RP$EQ$GT$LPfrost$core$Object$RP(param1, _712, _730);
_732 = ((frost$core$Object*) _716);
frost$core$Frost$unref$frost$core$Object$Q(_732);
_734 = ((frost$core$Object*) _713);
frost$core$Frost$unref$frost$core$Object$Q(_734);
_736 = *(&local17);
_737 = ((frost$core$Object*) _736);
frost$core$Frost$unref$frost$core$Object$Q(_737);
*(&local17) = ((frost$core$RegularExpression*) NULL);
_740 = *(&local3);
_741 = ((frost$core$Object*) _740);
frost$core$Frost$unref$frost$core$Object$Q(_741);
*(&local3) = ((frost$core$Matcher*) NULL);
_744 = *(&local2);
_745 = ((frost$core$Object*) _744);
frost$core$Frost$unref$frost$core$Object$Q(_745);
*(&local2) = ((frost$core$String*) NULL);
_748 = *(&local1);
_749 = ((frost$core$Object*) _748);
frost$core$Frost$unref$frost$core$Object$Q(_749);
*(&local1) = ((frost$core$RegularExpression*) NULL);
_752 = *(&local0);
_753 = ((frost$core$Object*) _752);
frost$core$Frost$unref$frost$core$Object$Q(_753);
*(&local0) = ((frost$core$RegularExpression*) NULL);
return;

}
void org$frostlang$frostc$frostdoc$Markdown$doItalicsAndBold$frost$core$MutableString(void* rawSelf, frost$core$MutableString* param1) {
org$frostlang$frostc$frostdoc$Markdown* param0 = (org$frostlang$frostc$frostdoc$Markdown*) rawSelf;

frost$core$Matcher* local0 = NULL;
frost$core$Matcher* local1 = NULL;
frost$core$RegularExpression* _1;
frost$core$Bit _5;
frost$core$Object* _8;
$fn596 _9;
frost$core$String* _10;
frost$core$Matcher* _11;
frost$core$Object* _13;
frost$core$Matcher* _15;
frost$core$Object* _16;
frost$core$Object* _19;
frost$core$Object* _21;
frost$core$Matcher* _27;
frost$core$Bit _28;
bool _29;
frost$core$Matcher* _32;
frost$core$Matcher* _36;
frost$core$Matcher* _38;
frost$core$Object* _39;
frost$core$Object* _44;
frost$core$RegularExpression* _47;
frost$core$Bit _51;
frost$core$Object* _54;
$fn597 _55;
frost$core$String* _56;
frost$core$Matcher* _57;
frost$core$Object* _59;
frost$core$Matcher* _61;
frost$core$Object* _62;
frost$core$Object* _65;
frost$core$Object* _67;
frost$core$Matcher* _73;
frost$core$Bit _74;
bool _75;
frost$core$Matcher* _78;
frost$core$Matcher* _82;
frost$core$Matcher* _84;
frost$core$Object* _85;
frost$core$Object* _90;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:1075
_1 = (frost$core$RegularExpression*) frostObjectAlloc(sizeof(frost$core$RegularExpression), (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String(_1, &$s598);
// begin inline call to method frost.core.MutableString.replace(search:frost.core.RegularExpression, replacement:frost.core.String) from Markdown.frost:1075:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:401
_5 = (frost$core$Bit) {true};
// begin inline call to method frost.core.MutableString.replace(search:frost.core.RegularExpression, replacement:frost.core.String, allowGroupReferences:frost.core.Bit) from MutableString.frost:401:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:406
_8 = ((frost$core$Object*) param1);
_9 = ($fn599) _8->$class->vtable[0];
_10 = _9(_8);
_11 = frost$core$RegularExpression$matcher$frost$core$String$R$frost$core$Matcher(_1, _10);
*(&local0) = ((frost$core$Matcher*) NULL);
_13 = ((frost$core$Object*) _11);
frost$core$Frost$ref$frost$core$Object$Q(_13);
_15 = *(&local0);
_16 = ((frost$core$Object*) _15);
frost$core$Frost$unref$frost$core$Object$Q(_16);
*(&local0) = _11;
_19 = ((frost$core$Object*) _11);
frost$core$Frost$unref$frost$core$Object$Q(_19);
_21 = ((frost$core$Object*) _10);
frost$core$Frost$unref$frost$core$Object$Q(_21);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:407
frost$core$MutableString$clear(param1);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:408
goto block3;
block3:;
_27 = *(&local0);
_28 = frost$core$Matcher$find$R$frost$core$Bit(_27);
_29 = _28.value;
if (_29) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:409
_32 = *(&local0);
frost$core$Matcher$appendReplacement$frost$core$MutableString$frost$core$String$frost$core$Bit(_32, param1, &$s600, _5);
goto block3;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:411
_36 = *(&local0);
frost$core$Matcher$appendTail$frost$core$MutableString(_36, param1);
_38 = *(&local0);
_39 = ((frost$core$Object*) _38);
frost$core$Frost$unref$frost$core$Object$Q(_39);
*(&local0) = ((frost$core$Matcher*) NULL);
_44 = ((frost$core$Object*) _1);
frost$core$Frost$unref$frost$core$Object$Q(_44);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:1076
_47 = (frost$core$RegularExpression*) frostObjectAlloc(sizeof(frost$core$RegularExpression), (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String(_47, &$s601);
// begin inline call to method frost.core.MutableString.replace(search:frost.core.RegularExpression, replacement:frost.core.String) from Markdown.frost:1076:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:401
_51 = (frost$core$Bit) {true};
// begin inline call to method frost.core.MutableString.replace(search:frost.core.RegularExpression, replacement:frost.core.String, allowGroupReferences:frost.core.Bit) from MutableString.frost:401:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:406
_54 = ((frost$core$Object*) param1);
_55 = ($fn602) _54->$class->vtable[0];
_56 = _55(_54);
_57 = frost$core$RegularExpression$matcher$frost$core$String$R$frost$core$Matcher(_47, _56);
*(&local1) = ((frost$core$Matcher*) NULL);
_59 = ((frost$core$Object*) _57);
frost$core$Frost$ref$frost$core$Object$Q(_59);
_61 = *(&local1);
_62 = ((frost$core$Object*) _61);
frost$core$Frost$unref$frost$core$Object$Q(_62);
*(&local1) = _57;
_65 = ((frost$core$Object*) _57);
frost$core$Frost$unref$frost$core$Object$Q(_65);
_67 = ((frost$core$Object*) _56);
frost$core$Frost$unref$frost$core$Object$Q(_67);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:407
frost$core$MutableString$clear(param1);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:408
goto block8;
block8:;
_73 = *(&local1);
_74 = frost$core$Matcher$find$R$frost$core$Bit(_73);
_75 = _74.value;
if (_75) goto block9; else goto block10;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:409
_78 = *(&local1);
frost$core$Matcher$appendReplacement$frost$core$MutableString$frost$core$String$frost$core$Bit(_78, param1, &$s603, _51);
goto block8;
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:411
_82 = *(&local1);
frost$core$Matcher$appendTail$frost$core$MutableString(_82, param1);
_84 = *(&local1);
_85 = ((frost$core$Object*) _84);
frost$core$Frost$unref$frost$core$Object$Q(_85);
*(&local1) = ((frost$core$Matcher*) NULL);
_90 = ((frost$core$Object*) _47);
frost$core$Frost$unref$frost$core$Object$Q(_90);
return;

}
void org$frostlang$frostc$frostdoc$Markdown$encodeAmpsAndAngles$frost$core$MutableString(void* rawSelf, frost$core$MutableString* param1) {
org$frostlang$frostc$frostdoc$Markdown* param0 = (org$frostlang$frostc$frostdoc$Markdown*) rawSelf;

frost$core$Matcher* local0 = NULL;
frost$core$Matcher* local1 = NULL;
frost$core$RegularExpression* _1;
frost$core$Bit _5;
frost$core$Object* _8;
$fn604 _9;
frost$core$String* _10;
frost$core$Matcher* _11;
frost$core$Object* _13;
frost$core$Matcher* _15;
frost$core$Object* _16;
frost$core$Object* _19;
frost$core$Object* _21;
frost$core$Matcher* _27;
frost$core$Bit _28;
bool _29;
frost$core$Matcher* _32;
frost$core$Matcher* _36;
frost$core$Matcher* _38;
frost$core$Object* _39;
frost$core$Object* _44;
frost$core$RegularExpression* _47;
frost$core$Bit _51;
frost$core$Object* _54;
$fn605 _55;
frost$core$String* _56;
frost$core$Matcher* _57;
frost$core$Object* _59;
frost$core$Matcher* _61;
frost$core$Object* _62;
frost$core$Object* _65;
frost$core$Object* _67;
frost$core$Matcher* _73;
frost$core$Bit _74;
bool _75;
frost$core$Matcher* _78;
frost$core$Matcher* _82;
frost$core$Matcher* _84;
frost$core$Object* _85;
frost$core$Object* _90;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:1082
_1 = (frost$core$RegularExpression*) frostObjectAlloc(sizeof(frost$core$RegularExpression), (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String(_1, &$s606);
// begin inline call to method frost.core.MutableString.replace(search:frost.core.RegularExpression, replacement:frost.core.String) from Markdown.frost:1082:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:401
_5 = (frost$core$Bit) {true};
// begin inline call to method frost.core.MutableString.replace(search:frost.core.RegularExpression, replacement:frost.core.String, allowGroupReferences:frost.core.Bit) from MutableString.frost:401:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:406
_8 = ((frost$core$Object*) param1);
_9 = ($fn607) _8->$class->vtable[0];
_10 = _9(_8);
_11 = frost$core$RegularExpression$matcher$frost$core$String$R$frost$core$Matcher(_1, _10);
*(&local0) = ((frost$core$Matcher*) NULL);
_13 = ((frost$core$Object*) _11);
frost$core$Frost$ref$frost$core$Object$Q(_13);
_15 = *(&local0);
_16 = ((frost$core$Object*) _15);
frost$core$Frost$unref$frost$core$Object$Q(_16);
*(&local0) = _11;
_19 = ((frost$core$Object*) _11);
frost$core$Frost$unref$frost$core$Object$Q(_19);
_21 = ((frost$core$Object*) _10);
frost$core$Frost$unref$frost$core$Object$Q(_21);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:407
frost$core$MutableString$clear(param1);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:408
goto block3;
block3:;
_27 = *(&local0);
_28 = frost$core$Matcher$find$R$frost$core$Bit(_27);
_29 = _28.value;
if (_29) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:409
_32 = *(&local0);
frost$core$Matcher$appendReplacement$frost$core$MutableString$frost$core$String$frost$core$Bit(_32, param1, &$s608, _5);
goto block3;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:411
_36 = *(&local0);
frost$core$Matcher$appendTail$frost$core$MutableString(_36, param1);
_38 = *(&local0);
_39 = ((frost$core$Object*) _38);
frost$core$Frost$unref$frost$core$Object$Q(_39);
*(&local0) = ((frost$core$Matcher*) NULL);
_44 = ((frost$core$Object*) _1);
frost$core$Frost$unref$frost$core$Object$Q(_44);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:1083
_47 = (frost$core$RegularExpression*) frostObjectAlloc(sizeof(frost$core$RegularExpression), (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String(_47, &$s609);
// begin inline call to method frost.core.MutableString.replace(search:frost.core.RegularExpression, replacement:frost.core.String) from Markdown.frost:1083:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:401
_51 = (frost$core$Bit) {true};
// begin inline call to method frost.core.MutableString.replace(search:frost.core.RegularExpression, replacement:frost.core.String, allowGroupReferences:frost.core.Bit) from MutableString.frost:401:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:406
_54 = ((frost$core$Object*) param1);
_55 = ($fn610) _54->$class->vtable[0];
_56 = _55(_54);
_57 = frost$core$RegularExpression$matcher$frost$core$String$R$frost$core$Matcher(_47, _56);
*(&local1) = ((frost$core$Matcher*) NULL);
_59 = ((frost$core$Object*) _57);
frost$core$Frost$ref$frost$core$Object$Q(_59);
_61 = *(&local1);
_62 = ((frost$core$Object*) _61);
frost$core$Frost$unref$frost$core$Object$Q(_62);
*(&local1) = _57;
_65 = ((frost$core$Object*) _57);
frost$core$Frost$unref$frost$core$Object$Q(_65);
_67 = ((frost$core$Object*) _56);
frost$core$Frost$unref$frost$core$Object$Q(_67);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:407
frost$core$MutableString$clear(param1);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:408
goto block8;
block8:;
_73 = *(&local1);
_74 = frost$core$Matcher$find$R$frost$core$Bit(_73);
_75 = _74.value;
if (_75) goto block9; else goto block10;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:409
_78 = *(&local1);
frost$core$Matcher$appendReplacement$frost$core$MutableString$frost$core$String$frost$core$Bit(_78, param1, &$s611, _51);
goto block8;
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:411
_82 = *(&local1);
frost$core$Matcher$appendTail$frost$core$MutableString(_82, param1);
_84 = *(&local1);
_85 = ((frost$core$Object*) _84);
frost$core$Frost$unref$frost$core$Object$Q(_85);
*(&local1) = ((frost$core$Matcher*) NULL);
_90 = ((frost$core$Object*) _47);
frost$core$Frost$unref$frost$core$Object$Q(_90);
return;

}
void org$frostlang$frostc$frostdoc$Markdown$doCodeSpans$frost$core$MutableString(void* rawSelf, frost$core$MutableString* param1) {
org$frostlang$frostc$frostdoc$Markdown* param0 = (org$frostlang$frostc$frostdoc$Markdown*) rawSelf;

frost$core$RegularExpression* _1;
org$frostlang$frostc$frostdoc$Markdown$_Closure32* _3;
frost$core$Int8* _5;
frost$core$MutableMethod* _6;
frost$core$Object* _7;
frost$core$Int8** _10;
frost$core$Object** _14;
frost$core$Object* _15;
frost$core$Object** _17;
frost$core$MutableMethod* _20;
frost$core$MutableMethod* _21;
frost$core$Object* _23;
frost$core$Object* _25;
frost$core$Object* _27;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:1087
_1 = (frost$core$RegularExpression*) frostObjectAlloc(sizeof(frost$core$RegularExpression), (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String(_1, &$s612);
_3 = (org$frostlang$frostc$frostdoc$Markdown$_Closure32*) frostObjectAlloc(sizeof(org$frostlang$frostc$frostdoc$Markdown$_Closure32), (frost$core$Class*) &org$frostlang$frostc$frostdoc$Markdown$_Closure32$class);
org$frostlang$frostc$frostdoc$Markdown$_Closure32$init$org$frostlang$frostc$frostdoc$Markdown(_3, param0);
_5 = ((frost$core$Int8*) org$frostlang$frostc$frostdoc$Markdown$_Closure32$$anonymous31$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$String);
_6 = (frost$core$MutableMethod*) frostObjectAlloc(sizeof(frost$core$MutableMethod), (frost$core$Class*) &frost$core$MutableMethod$class);
_7 = ((frost$core$Object*) _3);
// begin inline call to frost.core.MutableMethod.init(pointer:frost.unsafe.Pointer<frost.core.Int8>, target:frost.core.Object?) from Markdown.frost:1088:13
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableMethod.frost:32
_10 = &_6->pointer;
*_10 = _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableMethod.frost:33
frost$core$Frost$ref$frost$core$Object$Q(_7);
_14 = &_6->target;
_15 = *_14;
frost$core$Frost$unref$frost$core$Object$Q(_15);
_17 = &_6->target;
*_17 = _7;
_20 = _6;
_21 = _20;
frost$core$MutableString$replace$frost$core$RegularExpression$$LPfrost$collections$ListView$LTfrost$core$String$Q$GT$RP$EQ$GT$LPfrost$core$Object$RP(param1, _1, _21);
_23 = ((frost$core$Object*) _6);
frost$core$Frost$unref$frost$core$Object$Q(_23);
_25 = ((frost$core$Object*) _3);
frost$core$Frost$unref$frost$core$Object$Q(_25);
_27 = ((frost$core$Object*) _1);
frost$core$Frost$unref$frost$core$Object$Q(_27);
return;

}
void org$frostlang$frostc$frostdoc$Markdown$cleanup(void* rawSelf) {
org$frostlang$frostc$frostdoc$Markdown* param0 = (org$frostlang$frostc$frostdoc$Markdown*) rawSelf;

frost$core$Object* _1;
frost$io$File** _3;
frost$io$File* _4;
frost$core$Object* _5;
frost$threads$MessageQueue** _7;
frost$threads$MessageQueue* _8;
frost$core$Object* _9;
org$frostlang$frostc$parser$Parser** _11;
org$frostlang$frostc$parser$Parser* _12;
frost$core$Object* _13;
frost$core$MutableMethod** _15;
frost$core$MutableMethod* _16;
frost$core$Object* _17;
frost$collections$HashMap** _19;
frost$collections$HashMap* _20;
frost$core$Object* _21;
org$frostlang$frostc$frostdoc$Protector** _23;
org$frostlang$frostc$frostdoc$Protector* _24;
frost$core$Object* _25;
org$frostlang$frostc$frostdoc$Protector** _27;
org$frostlang$frostc$frostdoc$Protector* _28;
frost$core$Object* _29;
frost$math$Random** _31;
frost$math$Random* _32;
frost$core$Object* _33;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:83
_1 = ((frost$core$Object*) param0);
frost$core$Object$cleanup(_1);
_3 = &param0->source;
_4 = *_3;
_5 = ((frost$core$Object*) _4);
frost$core$Frost$unref$frost$core$Object$Q(_5);
_7 = &param0->errorQueue;
_8 = *_7;
_9 = ((frost$core$Object*) _8);
frost$core$Frost$unref$frost$core$Object$Q(_9);
_11 = &param0->parser;
_12 = *_11;
_13 = ((frost$core$Object*) _12);
frost$core$Frost$unref$frost$core$Object$Q(_13);
_15 = &param0->linkResolver;
_16 = *_15;
_17 = ((frost$core$Object*) _16);
frost$core$Frost$unref$frost$core$Object$Q(_17);
_19 = &param0->linkDefinitions;
_20 = *_19;
_21 = ((frost$core$Object*) _20);
frost$core$Frost$unref$frost$core$Object$Q(_21);
_23 = &param0->charProtector;
_24 = *_23;
_25 = ((frost$core$Object*) _24);
frost$core$Frost$unref$frost$core$Object$Q(_25);
_27 = &param0->htmlProtector;
_28 = *_27;
_29 = ((frost$core$Object*) _28);
frost$core$Frost$unref$frost$core$Object$Q(_29);
_31 = &param0->random;
_32 = *_31;
_33 = ((frost$core$Object*) _32);
frost$core$Frost$unref$frost$core$Object$Q(_33);
return;

}

