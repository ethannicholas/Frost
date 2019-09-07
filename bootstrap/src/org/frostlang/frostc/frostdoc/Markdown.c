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
#include "org/frostlang/frostc/frostdoc/Markdown/_Closure28.h"
#include "org/frostlang/frostc/frostdoc/Markdown/_Closure30.h"
#include "org/frostlang/frostc/frostdoc/Markdown/_Closure32.h"
#include "org/frostlang/frostc/frostdoc/Markdown/_Closure34.h"


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
typedef frost$core$String* (*$fn67)(org$frostlang$frostc$frostdoc$Markdown$_Closure2*, frost$collections$ListView*);
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
typedef void (*$fn81)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef frost$collections$Iterator* (*$fn82)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn83)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn84)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn85)(frost$core$Object*);
typedef frost$core$String* (*$fn94)(frost$core$Object*);
typedef frost$core$String* (*$fn96)(frost$collections$CollectionView*, frost$core$String*);
typedef frost$core$String* (*$fn97)(frost$collections$CollectionView*, frost$core$String*);
typedef frost$core$String* (*$fn98)(frost$core$Object*);
typedef frost$core$String* (*$fn99)(frost$core$Object*);
typedef frost$core$String* (*$fn135)(org$frostlang$frostc$frostdoc$Markdown$_Closure4*, frost$collections$ListView*);
typedef frost$core$String* (*$fn151)(frost$core$Object*);
typedef frost$core$String* (*$fn166)(frost$core$Object*);
typedef frost$core$String* (*$fn176)(frost$core$Object*);
typedef frost$core$String* (*$fn177)(frost$core$Object*);
typedef frost$core$String* (*$fn178)(frost$core$Object*);
typedef frost$core$Int (*$fn179)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn180)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn181)(org$frostlang$frostc$frostdoc$Protector*, frost$core$String*);
typedef frost$core$Int (*$fn182)(frost$collections$CollectionView*);
typedef void (*$fn183)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef frost$core$String* (*$fn184)(frost$core$Object*);
typedef frost$core$Int (*$fn185)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn186)(frost$collections$CollectionView*, frost$core$String*);
typedef frost$core$String* (*$fn188)(frost$core$Object*);
typedef frost$core$String* (*$fn191)(frost$core$Object*);
typedef frost$core$String* (*$fn193)(frost$core$Object*);
typedef frost$core$String* (*$fn199)(org$frostlang$frostc$frostdoc$Protector*, frost$core$String*);
typedef void (*$fn205)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef frost$core$String* (*$fn206)(frost$core$Object*);
typedef frost$core$String* (*$fn214)(frost$core$Object*);
typedef frost$core$String* (*$fn216)(frost$core$Object*);
typedef frost$core$String* (*$fn219)(org$frostlang$frostc$frostdoc$Markdown$_Closure6*, frost$collections$ListView*);
typedef frost$collections$Iterator* (*$fn220)(frost$collections$MapView*);
typedef frost$core$Bit (*$fn221)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn222)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn223)(org$frostlang$frostc$frostdoc$Protector*, frost$core$String*);
typedef frost$core$String* (*$fn227)(org$frostlang$frostc$frostdoc$Protector*, frost$core$String*);
typedef frost$collections$Iterator* (*$fn230)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn231)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn232)(frost$collections$Iterator*);
typedef frost$core$Real64 (*$fn233)(frost$math$Random*);
typedef frost$core$String* (*$fn234)(frost$core$Object*);
typedef frost$core$String* (*$fn235)(frost$core$Object*);
typedef frost$core$String* (*$fn242)(frost$core$Object*);
typedef frost$core$String* (*$fn247)(frost$core$Object*);
typedef frost$core$Object* (*$fn255)(org$frostlang$frostc$frostdoc$Markdown$_Closure9*, frost$collections$ListView*);
typedef frost$core$Object* (*$fn256)(frost$collections$ListView*, frost$core$Int);
typedef frost$collections$Iterator* (*$fn257)(frost$collections$Iterable*);
typedef frost$core$Int (*$fn258)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn259)(frost$core$Object*);
typedef frost$core$String* (*$fn268)(frost$core$Object*);
typedef frost$core$String* (*$fn270)(frost$collections$ListView*);
typedef frost$core$String* (*$fn271)(frost$core$Object*);
typedef frost$core$String* (*$fn273)(frost$core$Object*);
typedef frost$core$String* (*$fn281)(org$frostlang$frostc$frostdoc$Markdown$_Closure12*, frost$collections$ListView*);
typedef frost$collections$Iterator* (*$fn282)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn283)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn284)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn285)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn286)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn287)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$String* (*$fn288)(org$frostlang$frostc$frostdoc$Protector*, frost$core$String*);
typedef frost$core$String* (*$fn289)(org$frostlang$frostc$frostdoc$Protector*, frost$core$String*);
typedef frost$core$String* (*$fn290)(org$frostlang$frostc$frostdoc$Protector*, frost$core$String*);
typedef frost$core$String* (*$fn291)(org$frostlang$frostc$frostdoc$Protector*, frost$core$String*);
typedef frost$core$String* (*$fn292)(org$frostlang$frostc$frostdoc$Protector*, frost$core$String*);
typedef frost$core$Bit (*$fn293)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn294)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$String* (*$fn295)(frost$core$Object*);
typedef frost$core$String* (*$fn296)(frost$core$Object*);
typedef frost$core$Bit (*$fn297)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn298)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn299)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$String* (*$fn334)(org$frostlang$frostc$frostdoc$Protector*, frost$core$String*);
typedef frost$core$String* (*$fn337)(org$frostlang$frostc$frostdoc$Protector*, frost$core$String*);
typedef frost$core$String* (*$fn340)(org$frostlang$frostc$frostdoc$Protector*, frost$core$String*);
typedef frost$core$String* (*$fn343)(org$frostlang$frostc$frostdoc$Protector*, frost$core$String*);
typedef frost$core$String* (*$fn346)(org$frostlang$frostc$frostdoc$Protector*, frost$core$String*);
typedef frost$core$String* (*$fn356)(frost$core$Object*);
typedef frost$core$String* (*$fn359)(frost$core$Object*);
typedef frost$core$String* (*$fn372)(frost$core$Object*);
typedef frost$core$String* (*$fn373)(org$frostlang$frostc$frostdoc$Markdown*, org$frostlang$frostc$parser$Parser*);
typedef frost$core$Int (*$fn374)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn375)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn376)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn377)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$String* (*$fn378)(org$frostlang$frostc$frostdoc$Markdown*, org$frostlang$frostc$parser$Parser*);
typedef frost$core$Int (*$fn379)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn380)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn381)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn382)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$String* (*$fn383)(org$frostlang$frostc$frostdoc$Markdown*, org$frostlang$frostc$parser$Parser*);
typedef frost$core$Bit (*$fn384)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$String* (*$fn385)(org$frostlang$frostc$frostdoc$Markdown*, org$frostlang$frostc$parser$Parser*);
typedef frost$core$String* (*$fn386)(frost$core$Object*);
typedef frost$core$String* (*$fn387)(org$frostlang$frostc$frostdoc$Markdown*, org$frostlang$frostc$parser$Parser*);
typedef frost$core$String* (*$fn396)(org$frostlang$frostc$frostdoc$Markdown*, org$frostlang$frostc$parser$Parser*);
typedef frost$core$String* (*$fn405)(org$frostlang$frostc$frostdoc$Markdown*, org$frostlang$frostc$parser$Parser*);
typedef frost$core$String* (*$fn409)(org$frostlang$frostc$frostdoc$Markdown*, org$frostlang$frostc$parser$Parser*);
typedef frost$core$String* (*$fn410)(frost$core$Object*);
typedef void (*$fn411)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef frost$core$String* (*$fn413)(frost$core$Object*);
typedef void (*$fn415)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef frost$core$String* (*$fn418)(frost$core$Object*);
typedef frost$core$String* (*$fn420)(frost$core$Object*);
typedef frost$core$Object* (*$fn426)(org$frostlang$frostc$frostdoc$Markdown$_Closure14*, frost$collections$ListView*);
typedef frost$core$Object* (*$fn428)(org$frostlang$frostc$frostdoc$Markdown$_Closure16*, frost$collections$ListView*);
typedef frost$core$String* (*$fn434)(org$frostlang$frostc$frostdoc$Markdown$_Closure18*, frost$collections$ListView*);
typedef frost$core$String* (*$fn440)(org$frostlang$frostc$frostdoc$Markdown$_Closure20*, frost$collections$ListView*);
typedef frost$core$String* (*$fn442)(org$frostlang$frostc$frostdoc$Markdown$_Closure22*, frost$collections$ListView*);
typedef frost$core$Object* (*$fn444)(org$frostlang$frostc$frostdoc$Markdown$_Closure24*, frost$collections$ListView*);
typedef void (*$fn445)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef void (*$fn446)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef void (*$fn447)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef void (*$fn448)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef void (*$fn449)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef void (*$fn450)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef void (*$fn451)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef void (*$fn452)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef void (*$fn453)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef frost$core$String* (*$fn454)(frost$core$Object*);
typedef void (*$fn455)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef void (*$fn456)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef void (*$fn457)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef void (*$fn458)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef void (*$fn459)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef void (*$fn460)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef void (*$fn461)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef void (*$fn462)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef void (*$fn463)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef frost$core$String* (*$fn465)(frost$core$Object*);
typedef frost$core$Bit (*$fn471)(frost$core$Comparable*, frost$core$Comparable*);
typedef frost$core$Bit (*$fn472)(frost$core$Comparable*, frost$core$Comparable*);
typedef frost$core$String* (*$fn482)(frost$core$Object*);
typedef frost$collections$ListView* (*$fn483)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$String*);
typedef frost$collections$Iterator* (*$fn484)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn485)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn486)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn487)(org$frostlang$frostc$frostdoc$Protector*, frost$core$String*);
typedef frost$core$String* (*$fn488)(org$frostlang$frostc$frostdoc$Protector*, frost$core$String*);
typedef frost$core$String* (*$fn489)(org$frostlang$frostc$frostdoc$Protector*, frost$core$String*);
typedef frost$core$String* (*$fn490)(org$frostlang$frostc$frostdoc$Protector*, frost$core$String*);
typedef frost$core$String* (*$fn491)(frost$core$Object*);
typedef frost$collections$ListView* (*$fn492)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$String*);
typedef frost$core$String* (*$fn496)(org$frostlang$frostc$frostdoc$Protector*, frost$core$String*);
typedef frost$core$String* (*$fn499)(org$frostlang$frostc$frostdoc$Protector*, frost$core$String*);
typedef frost$core$String* (*$fn502)(org$frostlang$frostc$frostdoc$Protector*, frost$core$String*);
typedef frost$core$String* (*$fn505)(org$frostlang$frostc$frostdoc$Protector*, frost$core$String*);
typedef frost$core$String* (*$fn508)(frost$core$Object*);
typedef frost$core$String* (*$fn509)(frost$core$Object*);
typedef frost$core$String* (*$fn511)(frost$core$Object*);
typedef frost$core$String* (*$fn514)(frost$core$Object*);
typedef frost$core$String* (*$fn520)(org$frostlang$frostc$frostdoc$Markdown$_Closure26*, frost$collections$ListView*);
typedef frost$core$Object* (*$fn525)(org$frostlang$frostc$frostdoc$Markdown$_Closure28*, frost$collections$ListView*);
typedef frost$core$String* (*$fn538)(org$frostlang$frostc$frostdoc$Markdown$_Closure30*, frost$collections$ListView*);
typedef frost$core$Object* (*$fn543)(org$frostlang$frostc$frostdoc$Markdown$_Closure32*, frost$collections$ListView*);
typedef frost$core$String* (*$fn544)(frost$core$Object*);
typedef frost$core$String* (*$fn545)(frost$core$Object*);
typedef frost$core$String* (*$fn547)(frost$core$Object*);
typedef frost$core$String* (*$fn550)(frost$core$Object*);
typedef frost$core$String* (*$fn552)(frost$core$Object*);
typedef frost$core$String* (*$fn553)(frost$core$Object*);
typedef frost$core$String* (*$fn555)(frost$core$Object*);
typedef frost$core$String* (*$fn558)(frost$core$Object*);
typedef frost$core$String* (*$fn561)(org$frostlang$frostc$frostdoc$Markdown$_Closure34*, frost$collections$ListView*);

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
static frost$core$String $s86 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5c\x2a", 2, 671060566850019011, NULL };
static frost$core$String $s87 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d", 1, -5808622843851602280, NULL };
static frost$core$String $s88 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5f", 1, -5808497499525986226, NULL };
static frost$core$String $s92 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x3f\x6d\x29\x5e\x5b\x20\x5d\x7b\x30\x2c\x32\x7d\x28\x5b\x20\x5d\x3f", 18, 4309245317481151845, NULL };
static frost$core$String $s93 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5b\x20\x5d\x3f\x29\x7b\x33\x2c\x7d\x5b\x20\x5d\x2a\x24", 14, 7160482551558519224, NULL };
static frost$core$String $s95 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x68\x72\x20\x2f\x3e", 6, -5777796302439281154, NULL };
static frost$core$String $s100 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70", 1, -5808538181456230033, NULL };
static frost$core$String $s101 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x64\x69\x76", 3, -3843758403106219896, NULL };
static frost$core$String $s102 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x68\x31", 2, 628963565149030354, NULL };
static frost$core$String $s103 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x68\x32", 2, 628962465637402143, NULL };
static frost$core$String $s104 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x68\x33", 2, 628961366125773932, NULL };
static frost$core$String $s105 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x68\x34", 2, 628960266614145721, NULL };
static frost$core$String $s106 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x68\x35", 2, 628959167102517510, NULL };
static frost$core$String $s107 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x68\x36", 2, 628958067590889299, NULL };
static frost$core$String $s108 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x62\x6c\x6f\x63\x6b\x71\x75\x6f\x74\x65", 10, -5563452656499994818, NULL };
static frost$core$String $s109 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65", 3, 8646156028890705350, NULL };
static frost$core$String $s110 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x74\x61\x62\x6c\x65", 5, 8583921542012250175, NULL };
static frost$core$String $s111 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x64\x6c", 2, 617375812101585325, NULL };
static frost$core$String $s112 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x6c", 2, 626099337358108374, NULL };
static frost$core$String $s113 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6c", 2, 631724438846900500, NULL };
static frost$core$String $s114 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x73\x63\x72\x69\x70\x74", 6, -5981763091442670774, NULL };
static frost$core$String $s115 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6e\x6f\x73\x63\x72\x69\x70\x74", 8, -783081183237450799, NULL };
static frost$core$String $s116 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x6f\x72\x6d", 4, -2513836004432995353, NULL };
static frost$core$String $s117 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x69\x65\x6c\x64\x73\x65\x74", 8, 7357453410947828701, NULL };
static frost$core$String $s118 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x69\x66\x72\x61\x6d\x65", 6, -3638500342914660223, NULL };
static frost$core$String $s119 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6d\x61\x74\x68", 4, 2256134787772167695, NULL };
static frost$core$String $s120 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x69\x6e\x73", 3, 3143514847037410647, NULL };
static frost$core$String $s121 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x64\x65\x6c", 3, -3847723242036791862, NULL };
static frost$core$String $s123 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7c", 1, -5808533783409717189, NULL };
static frost$core$String $s124 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7c", 1, -5808533783409717189, NULL };
static frost$core$String $s126 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7c", 1, -5808533783409717189, NULL };
static frost$core$String $s127 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s128 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x5e\x3c\x28", 4, -48189702736247289, NULL };
static frost$core$String $s129 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s130 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5c\x62", 2, 671139731687250203, NULL };
static frost$core$String $s131 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x2e\x2a\x5c\x6e\x29\x2a\x3f", 8, 287570575661980099, NULL };
static frost$core$String $s132 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x2f\x5c\x32\x3e", 5, 2665918321944868088, NULL };
static frost$core$String $s133 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5b\x20\x5d\x2a", 4, 100554075858525689, NULL };
static frost$core$String $s134 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x3f\x3d\x5c\x6e\x2b\x7c\x5c\x5a\x29\x29", 11, -7380592505298674730, NULL };
static frost$core$String $s136 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x5e", 2, 567781240609339659, NULL };
static frost$core$String $s137 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x28", 2, 579161185959052809, NULL };
static frost$core$String $s138 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s139 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5c\x62", 2, 671139731687250203, NULL };
static frost$core$String $s140 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x2e\x2a\x5c\x6e\x29\x2a\x3f", 8, 287570575661980099, NULL };
static frost$core$String $s141 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x2a\x3c\x2f\x5c\x32\x3e", 7, 938556386175108236, NULL };
static frost$core$String $s142 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5b\x20\x5d\x2a", 4, 100554075858525689, NULL };
static frost$core$String $s143 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x3f\x3d\x5c\x6e\x2b\x7c\x5c\x5a\x29\x29", 11, -7380592505298674730, NULL };
static frost$core$String $s144 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x3f\x3a\x28\x3f\x3c\x3d\x5c\x6e\x5c\x6e\x29", 12, -8972720710842805865, NULL };
static frost$core$String $s145 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7c", 1, -5808533783409717189, NULL };
static frost$core$String $s146 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5c\x41\x5c\x6e\x3f", 5, 7194244039519334453, NULL };
static frost$core$String $s147 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s148 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28", 1, -5808617346293461225, NULL };
static frost$core$String $s149 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5b\x20\x5d\x7b\x30\x2c", 6, -3928593254950292230, NULL };
static frost$core$String $s152 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7d", 1, -5808534882921345400, NULL };
static frost$core$String $s153 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x28\x68\x72\x29", 5, 5113638981539259662, NULL };
static frost$core$String $s154 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5c\x62", 2, 671139731687250203, NULL };
static frost$core$String $s155 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x5b\x5e\x3c\x3e\x5d\x29\x2a\x3f", 9, 4681977557455105029, NULL };
static frost$core$String $s156 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2f\x3f\x3e", 3, -1252663599262404009, NULL };
static frost$core$String $s157 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5b\x20\x5d\x2a", 4, 100554075858525689, NULL };
static frost$core$String $s158 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x3f\x3d\x5c\x6e\x7b\x32\x2c\x7d\x7c\x5c\x5a\x29\x29", 14, 7822491852177365645, NULL };
static frost$core$String $s159 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x3f\x3a\x28\x3f\x3c\x3d\x5c\x6e\x5c\x6e\x29", 12, -8972720710842805865, NULL };
static frost$core$String $s160 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7c", 1, -5808533783409717189, NULL };
static frost$core$String $s161 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5c\x41\x5c\x6e\x3f", 5, 7194244039519334453, NULL };
static frost$core$String $s162 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s163 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28", 1, -5808617346293461225, NULL };
static frost$core$String $s164 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5b\x20\x5d\x7b\x30\x2c", 6, -3928593254950292230, NULL };
static frost$core$String $s167 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7d", 1, -5808534882921345400, NULL };
static frost$core$String $s168 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x3f\x73\x3a", 4, -2345270706533476687, NULL };
static frost$core$String $s169 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x21", 2, 579168882540450286, NULL };
static frost$core$String $s170 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x2d\x2d\x2e\x2a\x3f\x2d\x2d\x5c\x73\x2a\x29\x2b", 13, 5563676495348135801, NULL };
static frost$core$String $s171 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3e", 1, -5808601953130666271, NULL };
static frost$core$String $s172 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s173 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5b\x20\x5d\x2a", 4, 100554075858525689, NULL };
static frost$core$String $s174 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x3f\x3d\x5c\x6e\x7b\x32\x2c\x7d\x7c\x5c\x5a\x29", 13, 2741499190047052438, NULL };
static frost$core$String $s175 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s187 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5c\x41\x5c\x6e\x2b", 5, 7194222049286770233, NULL };
static frost$core$String $s189 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s190 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5c\x6e\x2b\x5c\x7a", 5, 97634128454376478, NULL };
static frost$core$String $s192 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s194 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5c\x6e\x7b\x32\x2c\x7d", 6, 7690319398872698237, NULL };
static frost$core$String $s197 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s198 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s200 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x66\x72\x6f\x73\x74", 14, -4595392010584278012, NULL };
static frost$core$String $s201 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -3541275370151069987, NULL };
static frost$core$String $s203 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s204 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x3a\x3d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x2c\x20\x76\x61\x6c\x75\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54\x29", 115, -1630266006860672840, NULL };
static frost$core$String $s207 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x70\x3e", 3, 8061034418550842365, NULL };
static frost$core$String $s208 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x2f\x70\x3e", 4, 8919941027677049518, NULL };
static frost$core$String $s210 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s211 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x3a\x3d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x2c\x20\x76\x61\x6c\x75\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54\x29", 115, -1630266006860672840, NULL };
static frost$core$String $s213 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a\x0a", 2, 600243221914207573, NULL };
static frost$core$String $s215 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x28\x28\x68\x74\x74\x70\x73\x3f\x7c\x66\x74\x70\x29\x3a\x5b\x5e\x27\x5c\x22\x3e\x5c\x73\x5d\x2b\x29\x3e", 27, 1795392191797210536, NULL };
static frost$core$String $s217 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x61\x20\x68\x72\x65\x66\x3d\x22\x24\x31\x22\x3e\x24\x31\x3c\x2f\x61\x3e", 19, 943263205479741618, NULL };
static frost$core$String $s218 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x28\x5b\x2d\x2e\x5c\x77\x5d\x2b\x5c\x40\x5b\x2d\x61\x2d\x7a\x30\x2d\x39\x5d\x2b\x28\x5c\x2e\x5b\x2d\x61\x2d\x7a\x30\x2d\x39\x5d\x2b\x29\x2a\x5c\x2e\x5b\x61\x2d\x7a\x5d\x2b\x29\x3e", 46, 5452143767326512023, NULL };
static frost$core$String $s228 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x66\x72\x6f\x73\x74", 14, -4595392010584278012, NULL };
static frost$core$String $s229 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -3541275370151069987, NULL };
static frost$core$String $s240 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x26\x23", 2, 558196797748116622, NULL };
static frost$core$String $s243 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3b", 1, -5808598654595781638, NULL };
static frost$core$String $s244 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x26\x23\x78", 3, -5531746251334265342, NULL };
static frost$core$String $s245 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x78", 1, -5808529385363204345, NULL };
static frost$core$String $s246 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3b", 1, -5808598654595781638, NULL };
static frost$core$String $s248 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x28", 2, 567770245493057549, NULL };
static frost$core$String $s249 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5e\x5b\x20\x09\x5d\x2a\x3e\x5b\x20\x09\x5d\x3f", 12, -7372722945027663410, NULL };
static frost$core$String $s250 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x2b\x5c\x6e", 4, 5142313243796413576, NULL };
static frost$core$String $s251 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x2e\x2b\x5c\x6e\x29\x2a", 7, -4363383151632465587, NULL };
static frost$core$String $s252 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5c\x6e\x2a", 3, -5612786845647453793, NULL };
static frost$core$String $s253 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29\x2b", 2, 566746600167382333, NULL };
static frost$core$String $s254 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s261 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x66\x72\x6f\x73\x74", 14, -4595392010584278012, NULL };
static frost$core$String $s262 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -3541275370151069987, NULL };
static frost$core$String $s265 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x66\x72\x6f\x73\x74", 14, -4595392010584278012, NULL };
static frost$core$String $s266 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -3541275370151069987, NULL };
static frost$core$String $s267 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20", 1, -5808626142386486913, NULL };
static frost$core$String $s269 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x2e\x2a\x3f\x29\x5c\x74", 7, 3712169380313635567, NULL };
static frost$core$String $s272 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x3f\x6d\x29\x5e\x28\x5c\x74\x7c\x5b\x20\x5d\x7b\x31\x2c\x34\x7d\x29", 18, -3272951813139089848, NULL };
static frost$core$String $s274 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s275 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x3f\x3a\x5c\x6e\x5c\x6e\x7c\x5c\x41\x29\x28\x28\x3f\x3a", 15, -7138352204384862423, NULL };
static frost$core$String $s276 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x3f\x3a\x5b\x20\x5d\x7b\x34\x7d\x29", 10, -7521922402797660827, NULL };
static frost$core$String $s277 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x2a\x5c\x6e\x2b", 5, -6625699055198575136, NULL };
static frost$core$String $s278 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29\x2b", 2, 566746600167382333, NULL };
static frost$core$String $s279 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s280 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x28\x3f\x3d\x5e\x5b\x20\x5d\x7b\x30\x2c\x34\x7d\x5c\x53\x29\x7c\x5c\x5a\x29", 20, 3651045375067248158, NULL };
static frost$core$String $s300 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x66\x72\x6f\x73\x74\x63\x6f\x64\x65\x22\x3e", 24, 8088723627449183031, NULL };
static frost$core$String $s301 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x66\x72\x6f\x73\x74", 14, -4595392010584278012, NULL };
static frost$core$String $s302 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x53\x79\x6e\x74\x61\x78\x48\x69\x67\x68\x6c\x69\x67\x68\x74\x65\x72\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x53\x79\x6e\x74\x61\x78\x48\x69\x67\x68\x6c\x69\x67\x68\x74\x65\x72", 129, 4586254628416497089, NULL };
static frost$core$String $s312 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x2f\x73\x70\x61\x6e\x3e", 7, 8018166017091831374, NULL };
static frost$core$String $s316 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x63\x6f\x6d\x6d\x65\x6e\x74\x22\x3e", 22, 5195701876173909349, NULL };
static frost$core$String $s317 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x22\x3e", 25, -1277266025356162443, NULL };
static frost$core$String $s318 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x6d\x65\x74\x68\x6f\x64\x4e\x61\x6d\x65\x22\x3e", 25, 614141651668444638, NULL };
static frost$core$String $s319 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x70\x61\x72\x61\x6d\x65\x74\x65\x72\x4e\x61\x6d\x65\x22\x3e", 28, 7976964863345252008, NULL };
static frost$core$String $s320 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x74\x79\x70\x65\x22\x3e", 19, -6237120118826539316, NULL };
static frost$core$String $s321 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x6b\x65\x79\x77\x6f\x72\x64\x22\x3e", 22, 3489752146076448555, NULL };
static frost$core$String $s322 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x63\x6f\x6e\x74\x72\x6f\x6c\x22\x3e", 22, -6843474029214577891, NULL };
static frost$core$String $s323 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x6c\x69\x74\x65\x72\x61\x6c\x22\x3e", 22, -3542195609056500961, NULL };
static frost$core$String $s324 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x73\x74\x72\x69\x6e\x67\x22\x3e", 21, -4855012157584048303, NULL };
static frost$core$String $s325 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x6f\x70\x65\x72\x61\x74\x6f\x72\x22\x3e", 23, 33141744113103844, NULL };
static frost$core$String $s326 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x6c\x61\x62\x65\x6c\x22\x3e", 20, -149918338464228758, NULL };
static frost$core$String $s327 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x66\x72\x6f\x73\x74", 14, -4595392010584278012, NULL };
static frost$core$String $s328 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x26", 1, -5808628341409743335, NULL };
static frost$core$String $s329 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x26\x61\x6d\x70\x3b", 5, 4071416011722950258, NULL };
static frost$core$String $s330 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c", 1, -5808604152153922693, NULL };
static frost$core$String $s331 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x26\x6c\x74\x3b", 4, 3062186500626132942, NULL };
static frost$core$String $s332 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3e", 1, -5808601953130666271, NULL };
static frost$core$String $s333 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x26\x67\x74\x3b", 4, 8779067523193954595, NULL };
static frost$core$String $s335 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2a", 1, -5808615147270204803, NULL };
static frost$core$String $s336 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5c\x2a", 2, 671060566850019011, NULL };
static frost$core$String $s338 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5f", 1, -5808497499525986226, NULL };
static frost$core$String $s339 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5f", 1, -5808497499525986226, NULL };
static frost$core$String $s341 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5b", 1, -5808493101479473382, NULL };
static frost$core$String $s342 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5c\x5b", 2, 671077059524442176, NULL };
static frost$core$String $s344 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5d", 1, -5808499698549242648, NULL };
static frost$core$String $s345 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5c\x5d", 2, 671083656594211442, NULL };
static frost$core$String $s347 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5c", 1, -5808498599037614437, NULL };
static frost$core$String $s348 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5c\x5c", 2, 671084756105839653, NULL };
static frost$core$String $s357 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22", 13, 4264447674952797972, NULL };
static frost$core$String $s358 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x22\x3e", 2, 561975819213520929, NULL };
static frost$core$String $s366 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x2f\x73\x70\x61\x6e\x3e", 7, 8018166017091831374, NULL };
static frost$core$String $s370 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x2f\x73\x70\x61\x6e\x3e", 7, 8018166017091831374, NULL };
static frost$core$String $s371 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x2f\x73\x70\x61\x6e\x3e", 7, 8018166017091831374, NULL };
static frost$core$String $s391 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 22, 6468124764262308515, NULL };
static frost$core$String $s392 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x54\x6f\x6b\x65\x6e\x3e\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x54\x6f\x6b\x65\x6e", 162, 3779449970926349286, NULL };
static frost$core$String $s400 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 22, 6468124764262308515, NULL };
static frost$core$String $s401 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x54\x6f\x6b\x65\x6e\x3e\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x54\x6f\x6b\x65\x6e", 162, 3779449970926349286, NULL };
static frost$core$String $s412 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x3f\x6d\x29\x24\x28\x5c\x73\x2a\x29\x5c\x2e\x5c\x2e\x5c\x2e\x28\x5c\x73\x2a\x29\x5e", 22, -248689979902601246, NULL };
static frost$core$String $s414 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x24\x31\x2d\x2a\x23\x2e\x2e\x2e\x23\x2a\x2d\x24\x32", 13, -9212652225966281814, NULL };
static frost$core$String $s416 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x2a\x23\x2e\x2e\x2e\x23\x2a\x2d", 9, 4555640629949038113, NULL };
static frost$core$String $s417 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x65\x6c\x6c\x69\x70\x73\x69\x73\x22\x3e\x2e\x2e\x2e\x3c\x2f\x73\x70\x61\x6e\x3e", 33, -453769903465079796, NULL };
static frost$core$String $s421 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x28\x5b\x20\x5d\x7b\x30\x2c", 8, -3741150137448884478, NULL };
static frost$core$String $s422 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7d\x28\x28\x3f\x3a\x5b\x2d\x2b\x2a\x5d\x7c\x5c\x64\x2b\x5b\x2e\x5d\x29\x29\x5b\x20\x5d\x2b\x29\x28\x3f\x73\x3a\x2e\x2b\x3f\x29\x28\x5c\x7a\x7c\x5c\x6e\x7b\x32\x2c\x7d", 42, 137202100460744211, NULL };
static frost$core$String $s423 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x3f\x3d\x5c\x53\x29\x28\x3f\x21\x5b\x20\x5d\x2a\x28\x3f\x3a\x5b\x2d\x2b\x2a\x5d\x7c\x5c\x64\x2b\x5b\x2e\x5d\x29\x5b\x20\x5d\x2b\x29\x29\x29", 36, 8134773430561440898, NULL };
static frost$core$String $s424 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x3f\x6d\x29\x5e", 5, -439449056924796284, NULL };
static frost$core$String $s425 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s427 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x3f\x6d\x29\x28\x3f\x3a\x28\x3f\x3c\x3d\x5c\x6e\x5c\x6e\x29\x7c\x5c\x41\x5c\x6e\x3f\x29", 23, 1848678979582438429, NULL };
static frost$core$String $s429 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5c\x6e\x7b\x32\x2c\x7d\x5c\x7a", 8, -541266234631704725, NULL };
static frost$core$String $s430 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s431 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x5c\x6e\x29\x3f\x5e\x28\x5b\x20\x5c\x74\x5d\x2a\x29\x28\x5b\x2d\x2b\x2a\x5d\x7c\x5c\x64\x2b\x5b\x2e\x5d\x29\x5b\x20\x5d\x2b", 32, 654627259653007759, NULL };
static frost$core$String $s432 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x28\x3f\x73\x3a\x2e\x2b\x3f\x29\x28\x5c\x6e\x7b\x31\x2c\x32\x7d\x29\x29", 19, 9093550410993434533, NULL };
static frost$core$String $s433 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x3f\x3d\x5c\x6e\x2a\x28\x5c\x7a\x7c\x5c\x32\x28\x5b\x2d\x2b\x5c\x2a\x5d\x7c\x5c\x64\x2b\x5b\x2e\x5d\x29\x5b\x20\x5c\x74\x5d\x2b\x29\x29", 35, -2262235355244044178, NULL };
static frost$core$String $s435 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a\x0a", 2, 600243221914207573, NULL };
static frost$core$String $s436 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x66\x72\x6f\x73\x74", 14, -4595392010584278012, NULL };
static frost$core$String $s437 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -3541275370151069987, NULL };
static frost$core$String $s438 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s439 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x3f\x6d\x29\x5e\x28\x2e\x2a\x29\x5c\x6e\x3d\x3d\x3d\x3d\x2b\x24", 17, -6883718133434480482, NULL };
static frost$core$String $s441 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x3f\x6d\x29\x5e\x28\x2e\x2a\x29\x5c\x6e\x2d\x2d\x2d\x2d\x2b\x24", 17, 7770988057466060478, NULL };
static frost$core$String $s443 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5e\x28\x23\x7b\x31\x2c\x36\x7d\x29\x5c\x73\x2a\x28\x2e\x2a\x3f\x29\x5c\x73\x2a\x5c\x31\x3f\x24", 24, 16014950917847968, NULL };
static frost$core$String $s464 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x7b\x32\x2c\x7d\x5c\x6e", 7, -5658908687078335657, NULL };
static frost$core$String $s466 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x3c\x62\x72\x20\x2f\x3e\x0a", 8, -2897744956745334060, NULL };
static frost$core$String $s467 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s468 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s469 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x3f\x3a\x3c\x5b\x61\x2d\x7a\x2f\x21\x24\x5d\x28\x3f\x3a\x5b\x5e\x3c\x3e\x5d\x7c", 21, -2230095140111063139, NULL };
static frost$core$String $s470 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29\x2a\x3e\x29", 4, -1177431067148667313, NULL };
static frost$core$String $s473 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x3f\x73\x3a\x3c\x21\x28\x2d\x2d\x2e\x2a\x3f\x2d\x2d\x5c\x73\x2a\x29\x2b\x3e\x29\x7c", 22, -1727262038654951337, NULL };
static frost$core$String $s474 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x3f\x73\x3a\x3c\x5c\x3f\x2e\x2a\x3f\x5c\x3f\x3e\x29", 14, 6214673560103078479, NULL };
static frost$core$String $s475 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7c", 1, -5808533783409717189, NULL };
static frost$core$String $s497 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5c", 1, -5808498599037614437, NULL };
static frost$core$String $s498 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5c\x5c", 2, 671084756105839653, NULL };
static frost$core$String $s500 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x60", 1, -5808555773642281409, NULL };
static frost$core$String $s501 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x60", 1, -5808555773642281409, NULL };
static frost$core$String $s503 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2a", 1, -5808615147270204803, NULL };
static frost$core$String $s504 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5c\x2a", 2, 671060566850019011, NULL };
static frost$core$String $s506 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5f", 1, -5808497499525986226, NULL };
static frost$core$String $s507 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5f", 1, -5808497499525986226, NULL };
static frost$core$String $s510 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x21\x5c\x5c\x5b\x28\x2e\x2a\x29\x5c\x5c\x5d\x5c\x5c\x28\x28\x2e\x2a\x29\x20\x5c\x22\x28\x2e\x2a\x29\x5c\x22\x5c\x5c\x29", 30, 6493917754048131162, NULL };
static frost$core$String $s512 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x69\x6d\x67\x20\x73\x72\x63\x3d\x22\x24\x32\x22\x20\x61\x6c\x74\x3d\x22\x24\x31\x22\x20\x74\x69\x74\x6c\x65\x3d\x22\x24\x33\x22\x20\x2f\x3e", 36, 4038931684154322219, NULL };
static frost$core$String $s513 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x21\x5c\x5c\x5b\x28\x2e\x2a\x29\x5c\x5c\x5d\x5c\x5c\x28\x28\x2e\x2a\x29\x5c\x5c\x29", 21, 765547484578233383, NULL };
static frost$core$String $s515 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x69\x6d\x67\x20\x73\x72\x63\x3d\x22\x24\x32\x22\x20\x61\x6c\x74\x3d\x22\x24\x31\x22\x20\x2f\x3e", 25, -2070577711995753147, NULL };
static frost$core$String $s516 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x5b\x21\x5d\x5c\x5b\x28\x2e\x2a\x3f\x29\x5c\x5d", 13, 8561428590693777046, NULL };
static frost$core$String $s517 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5b\x20\x5d\x3f\x28\x3f\x3a\x5c\x6e\x5b\x20\x5d\x2a\x29\x3f", 15, -4228281741099089751, NULL };
static frost$core$String $s518 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5c\x5b\x28\x2e\x2a\x3f\x29\x5c\x5d", 9, -5820255714607045073, NULL };
static frost$core$String $s519 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s521 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x5c\x5b\x28\x2e\x2a\x3f\x29\x5c\x5d", 10, -5340773744844878283, NULL };
static frost$core$String $s522 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5b\x20\x5d\x3f\x28\x3f\x3a\x5c\x6e\x5b\x20\x5d\x2a\x29\x3f", 15, -4228281741099089751, NULL };
static frost$core$String $s523 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5c\x5b\x28\x2e\x2a\x3f\x29\x5c\x5d", 9, -5820255714607045073, NULL };
static frost$core$String $s524 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s526 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x5c\x5b\x28\x2e\x2a\x3f\x29\x5c\x5d", 10, -5340773744844878283, NULL };
static frost$core$String $s527 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5c\x28", 2, 671062765873275433, NULL };
static frost$core$String $s528 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5b\x20\x5c\x74\x5d\x2a", 6, -2765009834817178127, NULL };
static frost$core$String $s529 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x3f\x28\x2e\x2a\x3f\x29\x3e\x3f", 9, -2141900438656434377, NULL };
static frost$core$String $s530 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5b\x20\x5c\x74\x5d\x2a", 6, -2765009834817178127, NULL };
static frost$core$String $s531 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28", 1, -5808617346293461225, NULL };
static frost$core$String $s532 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x5b\x27\x22\x5d\x29", 6, 5815611588259600167, NULL };
static frost$core$String $s533 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x2e\x2a\x3f\x29", 5, -5551797076377908473, NULL };
static frost$core$String $s534 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5c\x35", 2, 671057268315134378, NULL };
static frost$core$String $s535 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29\x3f", 2, 566759794306920865, NULL };
static frost$core$String $s536 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5c\x29", 2, 671061666361647222, NULL };
static frost$core$String $s537 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s539 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x5c\x5b", 3, 727888895142067038, NULL };
static frost$core$String $s540 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x5b\x5e\x5c\x5b\x5c\x5d\x5d\x2b\x29", 10, 2820061196371221627, NULL };
static frost$core$String $s541 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5c\x5d", 2, 671083656594211442, NULL };
static frost$core$String $s542 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s546 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x5c\x2a\x5c\x5c\x2a\x7c\x5f\x5f\x29\x28\x3f\x3d\x5c\x53\x29\x28\x2e\x2b\x3f\x5b\x2a\x5f\x5d\x2a\x29\x28\x3f\x3c\x3d\x5c\x53\x29\x5c\x31", 35, -3636589227861870419, NULL };
static frost$core$String $s548 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x73\x74\x72\x6f\x6e\x67\x3e\x24\x32\x3c\x2f\x73\x74\x72\x6f\x6e\x67\x3e", 19, 980505209609811292, NULL };
static frost$core$String $s549 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x5c\x2a\x7c\x5f\x29\x28\x3f\x3d\x5c\x53\x29\x28\x2e\x2b\x3f\x29\x28\x3f\x3c\x3d\x5c\x53\x29\x5c\x31", 26, 9006340171609119475, NULL };
static frost$core$String $s551 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x65\x6d\x3e\x24\x32\x3c\x2f\x65\x6d\x3e", 11, -8498297401027505814, NULL };
static frost$core$String $s554 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x26\x28\x3f\x21\x23\x3f\x5b\x78\x58\x5d\x3f\x28\x3f\x3a\x5b\x30\x2d\x39\x61\x2d\x66\x41\x2d\x46\x5d\x2b\x7c\x5c\x77\x2b\x29\x3b\x29", 33, -1680408519398193257, NULL };
static frost$core$String $s556 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x26\x61\x6d\x70\x3b", 5, 4071416011722950258, NULL };
static frost$core$String $s557 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x28\x3f\x21\x5b\x61\x2d\x7a\x41\x2d\x5a\x2f\x3f\x5c\x24\x21\x5d\x29", 18, -2067299480089594827, NULL };
static frost$core$String $s559 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x26\x6c\x74\x3b", 4, 3062186500626132942, NULL };
static frost$core$String $s560 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x3f\x3c\x21\x5c\x5c\x29\x28\x60\x2b\x29\x28\x2e\x2b\x3f\x29\x28\x3f\x3c\x21\x60\x29\x5c\x31\x28\x3f\x21\x60\x29", 29, 4191340564316553542, NULL };

void org$frostlang$frostc$frostdoc$Markdown$init(org$frostlang$frostc$frostdoc$Markdown* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:120
org$frostlang$frostc$frostdoc$Markdown$init$$LPfrost$core$String$RP$EQ$AM$GT$LPfrost$core$String$Q$RP$Q(param0, ((frost$core$MutableMethod*) NULL));
return;

}
void org$frostlang$frostc$frostdoc$Markdown$init$$LPfrost$core$String$RP$EQ$AM$GT$LPfrost$core$String$Q$RP$Q(org$frostlang$frostc$frostdoc$Markdown* param0, frost$core$MutableMethod* param1) {

frost$threads$MessageQueue* _1;
frost$threads$MessageQueue* _2;
frost$core$Object* _4;
frost$threads$MessageQueue** _6;
frost$threads$MessageQueue* _7;
frost$core$Object* _8;
frost$threads$MessageQueue** _10;
frost$core$Object* _12;
org$frostlang$frostc$parser$Parser* _15;
frost$threads$MessageQueue** _16;
frost$threads$MessageQueue* _17;
frost$core$Object* _19;
org$frostlang$frostc$parser$Parser** _21;
org$frostlang$frostc$parser$Parser* _22;
frost$core$Object* _23;
org$frostlang$frostc$parser$Parser** _25;
frost$core$Object* _27;
frost$collections$HashMap* _30;
frost$collections$HashMap* _31;
frost$core$Object* _33;
frost$collections$HashMap** _35;
frost$collections$HashMap* _36;
frost$core$Object* _37;
frost$collections$HashMap** _39;
frost$core$Object* _41;
org$frostlang$frostc$frostdoc$Protector* _44;
frost$core$Object* _46;
org$frostlang$frostc$frostdoc$Protector** _48;
org$frostlang$frostc$frostdoc$Protector* _49;
frost$core$Object* _50;
org$frostlang$frostc$frostdoc$Protector** _52;
frost$core$Object* _54;
org$frostlang$frostc$frostdoc$Protector* _57;
frost$core$Object* _59;
org$frostlang$frostc$frostdoc$Protector** _61;
org$frostlang$frostc$frostdoc$Protector* _62;
frost$core$Object* _63;
org$frostlang$frostc$frostdoc$Protector** _65;
frost$core$Object* _67;
frost$math$Random* _70;
frost$core$Object* _71;
frost$math$Random** _73;
frost$math$Random* _74;
frost$core$Object* _75;
frost$math$Random** _77;
frost$core$Object* _79;
frost$core$Int _82;
frost$core$Int* _83;
frost$io$File* _86;
frost$core$Object* _88;
frost$io$File** _90;
frost$io$File* _91;
frost$core$Object* _92;
frost$io$File** _94;
frost$core$Object* _96;
frost$core$Object* _99;
frost$core$MutableMethod** _101;
frost$core$MutableMethod* _102;
frost$core$Object* _103;
frost$core$MutableMethod** _105;
org$frostlang$frostc$parser$Parser** _108;
org$frostlang$frostc$parser$Parser* _109;
org$frostlang$frostc$parser$SyntaxHighlighter* _110;
org$frostlang$frostc$parser$SyntaxHighlighter* _112;
frost$core$Object* _113;
org$frostlang$frostc$parser$SyntaxHighlighter** _115;
org$frostlang$frostc$parser$SyntaxHighlighter* _116;
frost$core$Object* _117;
org$frostlang$frostc$parser$SyntaxHighlighter** _119;
frost$core$Object* _121;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:98
FROST_ASSERT(56 == sizeof(frost$threads$MessageQueue));
_1 = (frost$threads$MessageQueue*) frostObjectAlloc(56, (frost$core$Class*) &frost$threads$MessageQueue$class);
_2 = _1;
frost$threads$MessageQueue$init(_2);
_4 = ((frost$core$Object*) _1);
frost$core$Frost$ref$frost$core$Object$Q(_4);
_6 = &param0->errorQueue;
_7 = *_6;
_8 = ((frost$core$Object*) _7);
frost$core$Frost$unref$frost$core$Object$Q(_8);
_10 = &param0->errorQueue;
*_10 = _1;
_12 = ((frost$core$Object*) _1);
frost$core$Frost$unref$frost$core$Object$Q(_12);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:100
FROST_ASSERT(96 == sizeof(org$frostlang$frostc$parser$Parser));
_15 = (org$frostlang$frostc$parser$Parser*) frostObjectAlloc(96, (frost$core$Class*) &org$frostlang$frostc$parser$Parser$class);
_16 = &param0->errorQueue;
_17 = *_16;
org$frostlang$frostc$parser$Parser$init$frost$threads$MessageQueue$LTorg$frostlang$frostc$Compiler$Message$GT(_15, _17);
_19 = ((frost$core$Object*) _15);
frost$core$Frost$ref$frost$core$Object$Q(_19);
_21 = &param0->parser;
_22 = *_21;
_23 = ((frost$core$Object*) _22);
frost$core$Frost$unref$frost$core$Object$Q(_23);
_25 = &param0->parser;
*_25 = _15;
_27 = ((frost$core$Object*) _15);
frost$core$Frost$unref$frost$core$Object$Q(_27);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:105
FROST_ASSERT(56 == sizeof(frost$collections$HashMap));
_30 = (frost$collections$HashMap*) frostObjectAlloc(56, (frost$core$Class*) &frost$collections$HashMap$class);
_31 = _30;
frost$collections$HashMap$init(_31);
_33 = ((frost$core$Object*) _30);
frost$core$Frost$ref$frost$core$Object$Q(_33);
_35 = &param0->linkDefinitions;
_36 = *_35;
_37 = ((frost$core$Object*) _36);
frost$core$Frost$unref$frost$core$Object$Q(_37);
_39 = &param0->linkDefinitions;
*_39 = _30;
_41 = ((frost$core$Object*) _30);
frost$core$Frost$unref$frost$core$Object$Q(_41);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:108
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$frostdoc$Protector));
_44 = (org$frostlang$frostc$frostdoc$Protector*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$frostdoc$Protector$class);
org$frostlang$frostc$frostdoc$Protector$init(_44);
_46 = ((frost$core$Object*) _44);
frost$core$Frost$ref$frost$core$Object$Q(_46);
_48 = &param0->charProtector;
_49 = *_48;
_50 = ((frost$core$Object*) _49);
frost$core$Frost$unref$frost$core$Object$Q(_50);
_52 = &param0->charProtector;
*_52 = _44;
_54 = ((frost$core$Object*) _44);
frost$core$Frost$unref$frost$core$Object$Q(_54);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:111
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$frostdoc$Protector));
_57 = (org$frostlang$frostc$frostdoc$Protector*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$frostdoc$Protector$class);
org$frostlang$frostc$frostdoc$Protector$init(_57);
_59 = ((frost$core$Object*) _57);
frost$core$Frost$ref$frost$core$Object$Q(_59);
_61 = &param0->htmlProtector;
_62 = *_61;
_63 = ((frost$core$Object*) _62);
frost$core$Frost$unref$frost$core$Object$Q(_63);
_65 = &param0->htmlProtector;
*_65 = _57;
_67 = ((frost$core$Object*) _57);
frost$core$Frost$unref$frost$core$Object$Q(_67);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:114
_70 = frost$math$Random$default$R$frost$math$Random();
_71 = ((frost$core$Object*) _70);
frost$core$Frost$ref$frost$core$Object$Q(_71);
_73 = &param0->random;
_74 = *_73;
_75 = ((frost$core$Object*) _74);
frost$core$Frost$unref$frost$core$Object$Q(_75);
_77 = &param0->random;
*_77 = _70;
_79 = ((frost$core$Object*) _70);
frost$core$Frost$unref$frost$core$Object$Q(_79);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:117
_82 = (frost$core$Int) {0u};
_83 = &param0->listLevel;
*_83 = _82;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:124
FROST_ASSERT(24 == sizeof(frost$io$File));
_86 = (frost$io$File*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$File$class);
frost$io$File$init$frost$core$String(_86, &$s2);
_88 = ((frost$core$Object*) _86);
frost$core$Frost$ref$frost$core$Object$Q(_88);
_90 = &param0->source;
_91 = *_90;
_92 = ((frost$core$Object*) _91);
frost$core$Frost$unref$frost$core$Object$Q(_92);
_94 = &param0->source;
*_94 = _86;
_96 = ((frost$core$Object*) _86);
frost$core$Frost$unref$frost$core$Object$Q(_96);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:125
_99 = ((frost$core$Object*) param1);
frost$core$Frost$ref$frost$core$Object$Q(_99);
_101 = &param0->linkResolver;
_102 = *_101;
_103 = ((frost$core$Object*) _102);
frost$core$Frost$unref$frost$core$Object$Q(_103);
_105 = &param0->linkResolver;
*_105 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:126
_108 = &param0->parser;
_109 = *_108;
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$parser$SyntaxHighlighter));
_110 = (org$frostlang$frostc$parser$SyntaxHighlighter*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$class);
org$frostlang$frostc$parser$SyntaxHighlighter$init(_110);
_112 = _110;
_113 = ((frost$core$Object*) _112);
frost$core$Frost$ref$frost$core$Object$Q(_113);
_115 = &_109->syntaxHighlighter;
_116 = *_115;
_117 = ((frost$core$Object*) _116);
frost$core$Frost$unref$frost$core$Object$Q(_117);
_119 = &_109->syntaxHighlighter;
*_119 = _112;
_121 = ((frost$core$Object*) _110);
frost$core$Frost$unref$frost$core$Object$Q(_121);
return;

}
frost$core$String* org$frostlang$frostc$frostdoc$Markdown$process$frost$core$String$R$frost$core$String(org$frostlang$frostc$frostdoc$Markdown* param0, frost$core$String* param1) {

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
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
_1 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
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
FROST_ASSERT(24 == sizeof(frost$core$RegularExpression));
_14 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
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
FROST_ASSERT(24 == sizeof(frost$core$RegularExpression));
_61 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
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
FROST_ASSERT(24 == sizeof(frost$core$RegularExpression));
_108 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
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
FROST_ASSERT(24 == sizeof(frost$core$RegularExpression));
_162 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
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
void org$frostlang$frostc$frostdoc$Markdown$encodeBackslashEscapes$frost$core$MutableString(org$frostlang$frostc$frostdoc$Markdown* param0, frost$core$MutableString* param1) {

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
FROST_ASSERT(24 == sizeof(frost$core$String$UTF8List));
_3 = (frost$core$String$UTF8List*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$String$UTF8List$class);
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
FROST_ASSERT(24 == sizeof(frost$core$String$UTF8List));
_23 = (frost$core$String$UTF8List*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$String$UTF8List$class);
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
void org$frostlang$frostc$frostdoc$Markdown$encodeEscapes$frost$core$MutableString$frost$collections$ListView$LTfrost$core$Char8$GT$frost$core$String(org$frostlang$frostc$frostdoc$Markdown* param0, frost$core$MutableString* param1, frost$collections$ListView* param2, frost$core$String* param3) {

frost$core$Char8 local0;
frost$core$RegularExpression* local1 = NULL;
frost$core$Matcher* local2 = NULL;
frost$collections$Iterable* _1;
frost$collections$Iterable* _2;
$fn45 _3;
frost$collections$Iterator* _4;
frost$collections$Iterator* _5;
frost$collections$Iterator* _7;
$fn46 _8;
frost$core$Bit _9;
bool _10;
frost$collections$Iterator* _12;
$fn47 _13;
frost$core$Object* _14;
frost$core$Char8 _15;
frost$core$RegularExpression* _18;
frost$core$String* _19;
frost$core$Char8 _20;
frost$core$Object* _21;
$fn48 _24;
frost$core$String* _25;
frost$core$String* _26;
frost$core$Object* _27;
frost$core$Object* _29;
frost$core$Object* _31;
frost$core$Object* _36;
frost$core$RegularExpression* _38;
frost$core$Object* _39;
frost$core$Object* _42;
frost$core$Object* _44;
frost$core$Object* _46;
frost$core$Object* _48;
frost$core$RegularExpression* _51;
org$frostlang$frostc$frostdoc$Protector** _52;
org$frostlang$frostc$frostdoc$Protector* _53;
frost$core$Char8 _54;
frost$core$Object* _55;
$fn49 _56;
frost$core$String* _57;
$fn50 _58;
frost$core$String* _59;
frost$core$Bit _60;
frost$core$Object* _63;
$fn51 _64;
frost$core$String* _65;
frost$core$Matcher* _66;
frost$core$Object* _68;
frost$core$Matcher* _70;
frost$core$Object* _71;
frost$core$Object* _74;
frost$core$Object* _76;
frost$core$Matcher* _82;
frost$core$Bit _83;
bool _84;
frost$core$Matcher* _87;
frost$core$Matcher* _91;
frost$core$String** _94;
frost$core$String* _95;
frost$core$String$Index* _96;
frost$core$String$Index _97;
frost$core$String$Index$nullable _98;
frost$core$Bit _99;
frost$core$Range$LTfrost$core$String$Index$Q$GT _100;
frost$core$String* _101;
frost$core$Object* _103;
frost$core$Matcher* _106;
frost$core$Object* _107;
frost$core$Object* _111;
frost$core$Object* _113;
frost$core$Object* _115;
frost$core$RegularExpression* _117;
frost$core$Object* _118;
frost$core$Object* _121;
frost$core$Object* _124;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:162
_1 = ((frost$collections$Iterable*) param2);
_2 = _1;
ITable* $tmp52 = _2->$class->itable;
while ($tmp52->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp52 = $tmp52->next;
}
_3 = $tmp52->methods[0];
_4 = _3(_2);
_5 = _4;
goto block1;
block1:;
_7 = _5;
ITable* $tmp53 = _7->$class->itable;
while ($tmp53->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp53 = $tmp53->next;
}
_8 = $tmp53->methods[0];
_9 = _8(_7);
_10 = _9.value;
if (_10) goto block3; else goto block2;
block2:;
_12 = _5;
ITable* $tmp54 = _12->$class->itable;
while ($tmp54->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp54 = $tmp54->next;
}
_13 = $tmp54->methods[1];
_14 = _13(_12);
_15 = ((frost$core$Char8$wrapper*) _14)->value;
*(&local0) = _15;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:163
FROST_ASSERT(24 == sizeof(frost$core$RegularExpression));
_18 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
_19 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s55, param3);
_20 = *(&local0);
frost$core$Char8$wrapper* $tmp56;
$tmp56 = (frost$core$Char8$wrapper*) frostObjectAlloc(17, (frost$core$Class*) &frost$core$Char8$wrapperclass);
$tmp56->value = _20;
_21 = ((frost$core$Object*) $tmp56);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Markdown.frost:163:61
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
_24 = ($fn57) _21->$class->vtable[0];
_25 = _24(_21);
_26 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_19, _25);
_27 = ((frost$core$Object*) _26);
frost$core$Frost$ref$frost$core$Object$Q(_27);
_29 = ((frost$core$Object*) _26);
frost$core$Frost$unref$frost$core$Object$Q(_29);
_31 = ((frost$core$Object*) _25);
frost$core$Frost$unref$frost$core$Object$Q(_31);
frost$core$RegularExpression$init$frost$core$String(_18, _26);
*(&local1) = ((frost$core$RegularExpression*) NULL);
_36 = ((frost$core$Object*) _18);
frost$core$Frost$ref$frost$core$Object$Q(_36);
_38 = *(&local1);
_39 = ((frost$core$Object*) _38);
frost$core$Frost$unref$frost$core$Object$Q(_39);
*(&local1) = _18;
_42 = ((frost$core$Object*) _26);
frost$core$Frost$unref$frost$core$Object$Q(_42);
_44 = _21;
frost$core$Frost$unref$frost$core$Object$Q(_44);
_46 = ((frost$core$Object*) _19);
frost$core$Frost$unref$frost$core$Object$Q(_46);
_48 = ((frost$core$Object*) _18);
frost$core$Frost$unref$frost$core$Object$Q(_48);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:164
_51 = *(&local1);
_52 = &param0->charProtector;
_53 = *_52;
_54 = *(&local0);
frost$core$Char8$wrapper* $tmp58;
$tmp58 = (frost$core$Char8$wrapper*) frostObjectAlloc(17, (frost$core$Class*) &frost$core$Char8$wrapperclass);
$tmp58->value = _54;
_55 = ((frost$core$Object*) $tmp58);
_56 = ($fn59) _55->$class->vtable[0];
_57 = _56(_55);
_58 = ($fn60) _53->$class->vtable[2];
_59 = _58(_53, _57);
_60 = (frost$core$Bit) {false};
// begin inline call to method frost.core.MutableString.replace(search:frost.core.RegularExpression, replacement:frost.core.String, allowGroupReferences:frost.core.Bit) from Markdown.frost:164:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:406
_63 = ((frost$core$Object*) param1);
_64 = ($fn61) _63->$class->vtable[0];
_65 = _64(_63);
_66 = frost$core$RegularExpression$matcher$frost$core$String$R$frost$core$Matcher(_51, _65);
*(&local2) = ((frost$core$Matcher*) NULL);
_68 = ((frost$core$Object*) _66);
frost$core$Frost$ref$frost$core$Object$Q(_68);
_70 = *(&local2);
_71 = ((frost$core$Object*) _70);
frost$core$Frost$unref$frost$core$Object$Q(_71);
*(&local2) = _66;
_74 = ((frost$core$Object*) _66);
frost$core$Frost$unref$frost$core$Object$Q(_74);
_76 = ((frost$core$Object*) _65);
frost$core$Frost$unref$frost$core$Object$Q(_76);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:407
frost$core$MutableString$clear(param1);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:408
goto block6;
block6:;
_82 = *(&local2);
_83 = frost$core$Matcher$find$R$frost$core$Bit(_82);
_84 = _83.value;
if (_84) goto block7; else goto block8;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:409
_87 = *(&local2);
frost$core$Matcher$appendReplacement$frost$core$MutableString$frost$core$String$frost$core$Bit(_87, param1, _59, _60);
goto block6;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:411
_91 = *(&local2);
// begin inline call to method frost.core.Matcher.appendTail(target:frost.core.MutableString) from MutableString.frost:411:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Matcher.frost:171
_94 = &_91->searchText;
_95 = *_94;
_96 = &_91->replacementIndex;
_97 = *_96;
_98 = ((frost$core$String$Index$nullable) { _97, true });
_99 = (frost$core$Bit) {false};
_100 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(_98, ((frost$core$String$Index$nullable) { .nonnull = false }), _99);
_101 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String(_95, _100);
frost$core$MutableString$append$frost$core$String(param1, _101);
_103 = ((frost$core$Object*) _101);
frost$core$Frost$unref$frost$core$Object$Q(_103);
_106 = *(&local2);
_107 = ((frost$core$Object*) _106);
frost$core$Frost$unref$frost$core$Object$Q(_107);
*(&local2) = ((frost$core$Matcher*) NULL);
_111 = ((frost$core$Object*) _59);
frost$core$Frost$unref$frost$core$Object$Q(_111);
_113 = ((frost$core$Object*) _57);
frost$core$Frost$unref$frost$core$Object$Q(_113);
_115 = _55;
frost$core$Frost$unref$frost$core$Object$Q(_115);
_117 = *(&local1);
_118 = ((frost$core$Object*) _117);
frost$core$Frost$unref$frost$core$Object$Q(_118);
*(&local1) = ((frost$core$RegularExpression*) NULL);
_121 = _14;
frost$core$Frost$unref$frost$core$Object$Q(_121);
goto block1;
block3:;
_124 = ((frost$core$Object*) _4);
frost$core$Frost$unref$frost$core$Object$Q(_124);
return;

}
void org$frostlang$frostc$frostdoc$Markdown$stripLinkDefinitions$frost$core$MutableString(org$frostlang$frostc$frostdoc$Markdown* param0, frost$core$MutableString* param1) {

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
FROST_ASSERT(24 == sizeof(frost$core$RegularExpression));
_1 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
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
FROST_ASSERT(24 == sizeof(org$frostlang$frostc$frostdoc$Markdown$_Closure2));
_27 = (org$frostlang$frostc$frostdoc$Markdown$_Closure2*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$frostdoc$Markdown$_Closure2$class);
org$frostlang$frostc$frostdoc$Markdown$_Closure2$init$org$frostlang$frostc$frostdoc$Markdown(_27, param0);
_29 = ((frost$core$Int8*) org$frostlang$frostc$frostdoc$Markdown$_Closure2$$anonymous1$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$String);
FROST_ASSERT(32 == sizeof(frost$core$MutableMethod));
_30 = (frost$core$MutableMethod*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$MutableMethod$class);
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
void org$frostlang$frostc$frostdoc$Markdown$runBlockGamut$frost$core$MutableString(org$frostlang$frostc$frostdoc$Markdown* param0, frost$core$MutableString* param1) {

$fn68 _1;
$fn69 _4;
$fn70 _7;
$fn71 _10;
$fn72 _13;
$fn73 _16;
$fn74 _19;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:199
_1 = ($fn75) param0->$class->vtable[21];
_1(param0, param1);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:200
_4 = ($fn76) param0->$class->vtable[7];
_4(param0, param1);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:201
_7 = ($fn77) param0->$class->vtable[19];
_7(param0, param1);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:202
_10 = ($fn78) param0->$class->vtable[15];
_10(param0, param1);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:203
_13 = ($fn79) param0->$class->vtable[13];
_13(param0, param1);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:204
_16 = ($fn80) param0->$class->vtable[8];
_16(param0, param1);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:205
_19 = ($fn81) param0->$class->vtable[9];
_19(param0, param1);
return;

}
void org$frostlang$frostc$frostdoc$Markdown$doHorizontalRules$frost$core$MutableString(org$frostlang$frostc$frostdoc$Markdown* param0, frost$core$MutableString* param1) {

frost$collections$Array* local0 = NULL;
frost$core$String* local1 = NULL;
frost$core$Matcher* local2 = NULL;
frost$collections$Array* _1;
frost$collections$Array* _2;
frost$core$Object* _5;
frost$collections$Array* _7;
frost$core$Object* _8;
frost$core$Object* _11;
frost$collections$Array* _14;
frost$collections$Array* _15;
frost$core$Object* _16;
frost$collections$Array* _19;
frost$collections$Array* _20;
frost$core$Object* _21;
frost$collections$Array* _24;
frost$collections$Array* _25;
frost$core$Object* _26;
frost$collections$Array* _29;
frost$collections$Iterable* _30;
frost$collections$Iterable* _31;
$fn82 _32;
frost$collections$Iterator* _33;
frost$collections$Iterator* _34;
frost$collections$Iterator* _36;
$fn83 _37;
frost$core$Bit _38;
bool _39;
frost$collections$Iterator* _42;
$fn84 _43;
frost$core$Object* _44;
frost$core$String* _45;
frost$core$Object* _46;
frost$core$String* _48;
frost$core$Object* _49;
frost$core$RegularExpression* _53;
frost$core$String* _54;
frost$core$String* _55;
frost$core$String* _56;
frost$core$Bit _60;
frost$core$Object* _63;
$fn85 _64;
frost$core$String* _65;
frost$core$Matcher* _66;
frost$core$Object* _68;
frost$core$Matcher* _70;
frost$core$Object* _71;
frost$core$Object* _74;
frost$core$Object* _76;
frost$core$Matcher* _82;
frost$core$Bit _83;
bool _84;
frost$core$Matcher* _87;
frost$core$Matcher* _91;
frost$core$Matcher* _93;
frost$core$Object* _94;
frost$core$Object* _99;
frost$core$Object* _101;
frost$core$Object* _103;
frost$core$Object* _105;
frost$core$String* _107;
frost$core$Object* _108;
frost$core$Object* _112;
frost$collections$Array* _114;
frost$core$Object* _115;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:209
FROST_ASSERT(40 == sizeof(frost$collections$Array));
_1 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
_2 = _1;
frost$collections$Array$init(_2);
*(&local0) = ((frost$collections$Array*) NULL);
_5 = ((frost$core$Object*) _1);
frost$core$Frost$ref$frost$core$Object$Q(_5);
_7 = *(&local0);
_8 = ((frost$core$Object*) _7);
frost$core$Frost$unref$frost$core$Object$Q(_8);
*(&local0) = _1;
_11 = ((frost$core$Object*) _1);
frost$core$Frost$unref$frost$core$Object$Q(_11);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:210
_14 = *(&local0);
_15 = _14;
_16 = ((frost$core$Object*) &$s86);
frost$collections$Array$add$frost$collections$Array$T(_15, _16);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:211
_19 = *(&local0);
_20 = _19;
_21 = ((frost$core$Object*) &$s87);
frost$collections$Array$add$frost$collections$Array$T(_20, _21);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:212
_24 = *(&local0);
_25 = _24;
_26 = ((frost$core$Object*) &$s88);
frost$collections$Array$add$frost$collections$Array$T(_25, _26);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:213
_29 = *(&local0);
_30 = ((frost$collections$Iterable*) _29);
_31 = _30;
ITable* $tmp89 = _31->$class->itable;
while ($tmp89->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp89 = $tmp89->next;
}
_32 = $tmp89->methods[0];
_33 = _32(_31);
_34 = _33;
goto block1;
block1:;
_36 = _34;
ITable* $tmp90 = _36->$class->itable;
while ($tmp90->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp90 = $tmp90->next;
}
_37 = $tmp90->methods[0];
_38 = _37(_36);
_39 = _38.value;
if (_39) goto block3; else goto block2;
block2:;
*(&local1) = ((frost$core$String*) NULL);
_42 = _34;
ITable* $tmp91 = _42->$class->itable;
while ($tmp91->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp91 = $tmp91->next;
}
_43 = $tmp91->methods[1];
_44 = _43(_42);
_45 = ((frost$core$String*) _44);
_46 = ((frost$core$Object*) _45);
frost$core$Frost$ref$frost$core$Object$Q(_46);
_48 = *(&local1);
_49 = ((frost$core$Object*) _48);
frost$core$Frost$unref$frost$core$Object$Q(_49);
*(&local1) = _45;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:214
FROST_ASSERT(24 == sizeof(frost$core$RegularExpression));
_53 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
_54 = *(&local1);
_55 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s92, _54);
_56 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_55, &$s93);
frost$core$RegularExpression$init$frost$core$String(_53, _56);
// begin inline call to method frost.core.MutableString.replace(search:frost.core.RegularExpression, replacement:frost.core.String) from Markdown.frost:214:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:401
_60 = (frost$core$Bit) {true};
// begin inline call to method frost.core.MutableString.replace(search:frost.core.RegularExpression, replacement:frost.core.String, allowGroupReferences:frost.core.Bit) from MutableString.frost:401:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:406
_63 = ((frost$core$Object*) param1);
_64 = ($fn94) _63->$class->vtable[0];
_65 = _64(_63);
_66 = frost$core$RegularExpression$matcher$frost$core$String$R$frost$core$Matcher(_53, _65);
*(&local2) = ((frost$core$Matcher*) NULL);
_68 = ((frost$core$Object*) _66);
frost$core$Frost$ref$frost$core$Object$Q(_68);
_70 = *(&local2);
_71 = ((frost$core$Object*) _70);
frost$core$Frost$unref$frost$core$Object$Q(_71);
*(&local2) = _66;
_74 = ((frost$core$Object*) _66);
frost$core$Frost$unref$frost$core$Object$Q(_74);
_76 = ((frost$core$Object*) _65);
frost$core$Frost$unref$frost$core$Object$Q(_76);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:407
frost$core$MutableString$clear(param1);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:408
goto block6;
block6:;
_82 = *(&local2);
_83 = frost$core$Matcher$find$R$frost$core$Bit(_82);
_84 = _83.value;
if (_84) goto block7; else goto block8;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:409
_87 = *(&local2);
frost$core$Matcher$appendReplacement$frost$core$MutableString$frost$core$String$frost$core$Bit(_87, param1, &$s95, _60);
goto block6;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:411
_91 = *(&local2);
frost$core$Matcher$appendTail$frost$core$MutableString(_91, param1);
_93 = *(&local2);
_94 = ((frost$core$Object*) _93);
frost$core$Frost$unref$frost$core$Object$Q(_94);
*(&local2) = ((frost$core$Matcher*) NULL);
_99 = ((frost$core$Object*) _56);
frost$core$Frost$unref$frost$core$Object$Q(_99);
_101 = ((frost$core$Object*) _55);
frost$core$Frost$unref$frost$core$Object$Q(_101);
_103 = ((frost$core$Object*) _53);
frost$core$Frost$unref$frost$core$Object$Q(_103);
_105 = _44;
frost$core$Frost$unref$frost$core$Object$Q(_105);
_107 = *(&local1);
_108 = ((frost$core$Object*) _107);
frost$core$Frost$unref$frost$core$Object$Q(_108);
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block3:;
_112 = ((frost$core$Object*) _33);
frost$core$Frost$unref$frost$core$Object$Q(_112);
_114 = *(&local0);
_115 = ((frost$core$Object*) _114);
frost$core$Frost$unref$frost$core$Object$Q(_115);
*(&local0) = ((frost$collections$Array*) NULL);
return;

}
void org$frostlang$frostc$frostdoc$Markdown$hashHTMLBlocks$frost$core$MutableString(org$frostlang$frostc$frostdoc$Markdown* param0, frost$core$MutableString* param1) {

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
frost$collections$Array* _2;
frost$core$Object* _5;
frost$collections$Array* _7;
frost$core$Object* _8;
frost$core$Object* _11;
frost$collections$Array* _14;
frost$collections$Array* _15;
frost$core$Object* _16;
frost$collections$Array* _19;
frost$collections$Array* _20;
frost$core$Object* _21;
frost$collections$Array* _24;
frost$collections$Array* _25;
frost$core$Object* _26;
frost$collections$Array* _29;
frost$collections$Array* _30;
frost$core$Object* _31;
frost$collections$Array* _34;
frost$collections$Array* _35;
frost$core$Object* _36;
frost$collections$Array* _39;
frost$collections$Array* _40;
frost$core$Object* _41;
frost$collections$Array* _44;
frost$collections$Array* _45;
frost$core$Object* _46;
frost$collections$Array* _49;
frost$collections$Array* _50;
frost$core$Object* _51;
frost$collections$Array* _54;
frost$collections$Array* _55;
frost$core$Object* _56;
frost$collections$Array* _59;
frost$collections$Array* _60;
frost$core$Object* _61;
frost$collections$Array* _64;
frost$collections$Array* _65;
frost$core$Object* _66;
frost$collections$Array* _69;
frost$collections$Array* _70;
frost$core$Object* _71;
frost$collections$Array* _74;
frost$collections$Array* _75;
frost$core$Object* _76;
frost$collections$Array* _79;
frost$collections$Array* _80;
frost$core$Object* _81;
frost$collections$Array* _84;
frost$collections$Array* _85;
frost$core$Object* _86;
frost$collections$Array* _89;
frost$collections$Array* _90;
frost$core$Object* _91;
frost$collections$Array* _94;
frost$collections$Array* _95;
frost$core$Object* _96;
frost$collections$Array* _99;
frost$collections$Array* _100;
frost$core$Object* _101;
frost$collections$Array* _104;
frost$collections$Array* _105;
frost$core$Object* _106;
frost$collections$Array* _109;
frost$collections$Array* _110;
frost$core$Object* _111;
frost$collections$Array* _114;
frost$collections$Array* _115;
frost$core$Object* _118;
frost$collections$Array* _120;
frost$core$Object* _121;
frost$core$Object* _124;
frost$collections$Array* _127;
frost$collections$Array* _128;
frost$core$Object* _129;
frost$collections$Array* _132;
frost$collections$Array* _133;
frost$core$Object* _134;
frost$collections$Array* _137;
frost$collections$CollectionView* _138;
$fn96 _139;
frost$core$String* _140;
frost$core$Object* _142;
frost$core$String* _144;
frost$core$Object* _145;
frost$core$Object* _148;
frost$core$String* _151;
frost$core$Object* _154;
frost$core$String* _157;
frost$collections$Array* _158;
frost$collections$CollectionView* _159;
$fn97 _160;
frost$core$String* _161;
frost$core$String* _162;
frost$core$String* _163;
frost$core$Object* _165;
frost$core$String* _167;
frost$core$Object* _168;
frost$core$Object* _171;
frost$core$Object* _173;
frost$core$Object* _175;
frost$core$Object* _177;
frost$core$Object* _179;
frost$core$Int _182;
frost$core$Int _183;
int64_t _184;
int64_t _185;
int64_t _186;
frost$core$Int _187;
frost$core$RegularExpression* _190;
frost$core$String* _191;
frost$core$String* _192;
frost$core$String* _193;
frost$core$String* _194;
frost$core$String* _195;
frost$core$String* _196;
frost$core$String* _197;
frost$core$String* _198;
frost$core$Int _199;
frost$core$Int _200;
int64_t _203;
int64_t _204;
int64_t _205;
frost$core$Int _206;
frost$core$Object* _210;
frost$core$RegularExpression* _212;
frost$core$Object* _213;
frost$core$Object* _216;
frost$core$Object* _218;
frost$core$Object* _220;
frost$core$Object* _222;
frost$core$Object* _224;
frost$core$Object* _226;
frost$core$Object* _228;
frost$core$Object* _230;
org$frostlang$frostc$frostdoc$Markdown$_Closure4* _233;
frost$core$Int8* _235;
frost$core$MutableMethod* _236;
frost$core$Object* _237;
frost$core$Int8** _240;
frost$core$Object** _244;
frost$core$Object* _245;
frost$core$Object** _247;
frost$core$MutableMethod* _250;
frost$core$Object* _253;
frost$core$MutableMethod* _255;
frost$core$Object* _256;
frost$core$RegularExpression* _260;
frost$core$MutableMethod* _261;
frost$core$MutableMethod* _262;
frost$core$RegularExpression* _265;
frost$core$String* _266;
frost$core$String* _267;
frost$core$String* _268;
frost$core$String* _269;
frost$core$String* _270;
frost$core$String* _271;
frost$core$String* _272;
frost$core$String* _273;
frost$core$String* _274;
frost$core$Int _275;
frost$core$Int _276;
int64_t _279;
int64_t _280;
int64_t _281;
frost$core$Int _282;
frost$core$Object* _286;
frost$core$RegularExpression* _288;
frost$core$Object* _289;
frost$core$Object* _292;
frost$core$Object* _294;
frost$core$Object* _296;
frost$core$Object* _298;
frost$core$Object* _300;
frost$core$Object* _302;
frost$core$Object* _304;
frost$core$Object* _306;
frost$core$Object* _308;
frost$core$RegularExpression* _311;
frost$core$MutableMethod* _312;
frost$core$MutableMethod* _313;
frost$core$RegularExpression* _316;
frost$core$String* _317;
frost$core$String* _318;
frost$core$String* _319;
frost$core$String* _320;
frost$core$String* _321;
frost$core$Int _322;
frost$core$Object* _323;
$fn98 _326;
frost$core$String* _327;
frost$core$String* _328;
frost$core$Object* _329;
frost$core$Object* _331;
frost$core$Object* _333;
frost$core$String* _336;
frost$core$String* _337;
frost$core$String* _338;
frost$core$String* _339;
frost$core$String* _340;
frost$core$String* _341;
frost$core$String* _342;
frost$core$Int _343;
frost$core$Object* _346;
frost$core$RegularExpression* _348;
frost$core$Object* _349;
frost$core$Object* _352;
frost$core$Object* _354;
frost$core$Object* _356;
frost$core$Object* _358;
frost$core$Object* _360;
frost$core$Object* _362;
frost$core$Object* _364;
frost$core$Object* _366;
frost$core$Object* _368;
frost$core$Object* _370;
frost$core$Object* _372;
frost$core$Object* _374;
frost$core$Object* _376;
frost$core$Object* _378;
frost$core$Object* _380;
frost$core$RegularExpression* _383;
frost$core$MutableMethod* _384;
frost$core$MutableMethod* _385;
frost$core$RegularExpression* _388;
frost$core$String* _389;
frost$core$String* _390;
frost$core$String* _391;
frost$core$String* _392;
frost$core$String* _393;
frost$core$Int _394;
frost$core$Object* _395;
$fn99 _398;
frost$core$String* _399;
frost$core$String* _400;
frost$core$Object* _401;
frost$core$Object* _403;
frost$core$Object* _405;
frost$core$String* _408;
frost$core$String* _409;
frost$core$String* _410;
frost$core$String* _411;
frost$core$String* _412;
frost$core$String* _413;
frost$core$String* _414;
frost$core$String* _415;
frost$core$String* _416;
frost$core$Object* _419;
frost$core$RegularExpression* _421;
frost$core$Object* _422;
frost$core$Object* _425;
frost$core$Object* _427;
frost$core$Object* _429;
frost$core$Object* _431;
frost$core$Object* _433;
frost$core$Object* _435;
frost$core$Object* _437;
frost$core$Object* _439;
frost$core$Object* _441;
frost$core$Object* _443;
frost$core$Object* _445;
frost$core$Object* _447;
frost$core$Object* _449;
frost$core$Object* _451;
frost$core$Object* _453;
frost$core$Object* _455;
frost$core$Object* _457;
frost$core$RegularExpression* _460;
frost$core$MutableMethod* _461;
frost$core$MutableMethod* _462;
frost$core$RegularExpression* _464;
frost$core$Object* _465;
frost$core$RegularExpression* _468;
frost$core$Object* _469;
frost$core$RegularExpression* _472;
frost$core$Object* _473;
frost$core$MutableMethod* _476;
frost$core$Object* _477;
frost$core$Object* _480;
frost$core$Object* _482;
frost$core$RegularExpression* _484;
frost$core$Object* _485;
frost$core$String* _488;
frost$core$Object* _489;
frost$core$String* _492;
frost$core$Object* _493;
frost$collections$Array* _496;
frost$core$Object* _497;
frost$collections$Array* _500;
frost$core$Object* _501;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:227
FROST_ASSERT(40 == sizeof(frost$collections$Array));
_1 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
_2 = _1;
frost$collections$Array$init(_2);
*(&local0) = ((frost$collections$Array*) NULL);
_5 = ((frost$core$Object*) _1);
frost$core$Frost$ref$frost$core$Object$Q(_5);
_7 = *(&local0);
_8 = ((frost$core$Object*) _7);
frost$core$Frost$unref$frost$core$Object$Q(_8);
*(&local0) = _1;
_11 = ((frost$core$Object*) _1);
frost$core$Frost$unref$frost$core$Object$Q(_11);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:228
_14 = *(&local0);
_15 = _14;
_16 = ((frost$core$Object*) &$s100);
frost$collections$Array$add$frost$collections$Array$T(_15, _16);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:229
_19 = *(&local0);
_20 = _19;
_21 = ((frost$core$Object*) &$s101);
frost$collections$Array$add$frost$collections$Array$T(_20, _21);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:230
_24 = *(&local0);
_25 = _24;
_26 = ((frost$core$Object*) &$s102);
frost$collections$Array$add$frost$collections$Array$T(_25, _26);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:231
_29 = *(&local0);
_30 = _29;
_31 = ((frost$core$Object*) &$s103);
frost$collections$Array$add$frost$collections$Array$T(_30, _31);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:232
_34 = *(&local0);
_35 = _34;
_36 = ((frost$core$Object*) &$s104);
frost$collections$Array$add$frost$collections$Array$T(_35, _36);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:233
_39 = *(&local0);
_40 = _39;
_41 = ((frost$core$Object*) &$s105);
frost$collections$Array$add$frost$collections$Array$T(_40, _41);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:234
_44 = *(&local0);
_45 = _44;
_46 = ((frost$core$Object*) &$s106);
frost$collections$Array$add$frost$collections$Array$T(_45, _46);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:235
_49 = *(&local0);
_50 = _49;
_51 = ((frost$core$Object*) &$s107);
frost$collections$Array$add$frost$collections$Array$T(_50, _51);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:236
_54 = *(&local0);
_55 = _54;
_56 = ((frost$core$Object*) &$s108);
frost$collections$Array$add$frost$collections$Array$T(_55, _56);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:237
_59 = *(&local0);
_60 = _59;
_61 = ((frost$core$Object*) &$s109);
frost$collections$Array$add$frost$collections$Array$T(_60, _61);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:238
_64 = *(&local0);
_65 = _64;
_66 = ((frost$core$Object*) &$s110);
frost$collections$Array$add$frost$collections$Array$T(_65, _66);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:239
_69 = *(&local0);
_70 = _69;
_71 = ((frost$core$Object*) &$s111);
frost$collections$Array$add$frost$collections$Array$T(_70, _71);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:240
_74 = *(&local0);
_75 = _74;
_76 = ((frost$core$Object*) &$s112);
frost$collections$Array$add$frost$collections$Array$T(_75, _76);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:241
_79 = *(&local0);
_80 = _79;
_81 = ((frost$core$Object*) &$s113);
frost$collections$Array$add$frost$collections$Array$T(_80, _81);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:242
_84 = *(&local0);
_85 = _84;
_86 = ((frost$core$Object*) &$s114);
frost$collections$Array$add$frost$collections$Array$T(_85, _86);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:243
_89 = *(&local0);
_90 = _89;
_91 = ((frost$core$Object*) &$s115);
frost$collections$Array$add$frost$collections$Array$T(_90, _91);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:244
_94 = *(&local0);
_95 = _94;
_96 = ((frost$core$Object*) &$s116);
frost$collections$Array$add$frost$collections$Array$T(_95, _96);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:245
_99 = *(&local0);
_100 = _99;
_101 = ((frost$core$Object*) &$s117);
frost$collections$Array$add$frost$collections$Array$T(_100, _101);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:246
_104 = *(&local0);
_105 = _104;
_106 = ((frost$core$Object*) &$s118);
frost$collections$Array$add$frost$collections$Array$T(_105, _106);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:247
_109 = *(&local0);
_110 = _109;
_111 = ((frost$core$Object*) &$s119);
frost$collections$Array$add$frost$collections$Array$T(_110, _111);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:248
FROST_ASSERT(40 == sizeof(frost$collections$Array));
_114 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
_115 = _114;
frost$collections$Array$init(_115);
*(&local1) = ((frost$collections$Array*) NULL);
_118 = ((frost$core$Object*) _114);
frost$core$Frost$ref$frost$core$Object$Q(_118);
_120 = *(&local1);
_121 = ((frost$core$Object*) _120);
frost$core$Frost$unref$frost$core$Object$Q(_121);
*(&local1) = _114;
_124 = ((frost$core$Object*) _114);
frost$core$Frost$unref$frost$core$Object$Q(_124);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:249
_127 = *(&local1);
_128 = _127;
_129 = ((frost$core$Object*) &$s120);
frost$collections$Array$add$frost$collections$Array$T(_128, _129);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:250
_132 = *(&local1);
_133 = _132;
_134 = ((frost$core$Object*) &$s121);
frost$collections$Array$add$frost$collections$Array$T(_133, _134);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:252
_137 = *(&local0);
_138 = ((frost$collections$CollectionView*) _137);
ITable* $tmp122 = _138->$class->itable;
while ($tmp122->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp122 = $tmp122->next;
}
_139 = $tmp122->methods[3];
_140 = _139(_138, &$s123);
*(&local2) = ((frost$core$String*) NULL);
_142 = ((frost$core$Object*) _140);
frost$core$Frost$ref$frost$core$Object$Q(_142);
_144 = *(&local2);
_145 = ((frost$core$Object*) _144);
frost$core$Frost$unref$frost$core$Object$Q(_145);
*(&local2) = _140;
_148 = ((frost$core$Object*) _140);
frost$core$Frost$unref$frost$core$Object$Q(_148);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:253
_151 = *(&local2);
// begin inline call to function frost.core.String.get_asString():frost.core.String from Markdown.frost:253:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:390
_154 = ((frost$core$Object*) _151);
frost$core$Frost$ref$frost$core$Object$Q(_154);
_157 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_151, &$s124);
_158 = *(&local1);
_159 = ((frost$collections$CollectionView*) _158);
ITable* $tmp125 = _159->$class->itable;
while ($tmp125->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp125 = $tmp125->next;
}
_160 = $tmp125->methods[3];
_161 = _160(_159, &$s126);
_162 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_157, _161);
_163 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_162, &$s127);
*(&local3) = ((frost$core$String*) NULL);
_165 = ((frost$core$Object*) _163);
frost$core$Frost$ref$frost$core$Object$Q(_165);
_167 = *(&local3);
_168 = ((frost$core$Object*) _167);
frost$core$Frost$unref$frost$core$Object$Q(_168);
*(&local3) = _163;
_171 = ((frost$core$Object*) _163);
frost$core$Frost$unref$frost$core$Object$Q(_171);
_173 = ((frost$core$Object*) _162);
frost$core$Frost$unref$frost$core$Object$Q(_173);
_175 = ((frost$core$Object*) _161);
frost$core$Frost$unref$frost$core$Object$Q(_175);
_177 = ((frost$core$Object*) _157);
frost$core$Frost$unref$frost$core$Object$Q(_177);
_179 = ((frost$core$Object*) _151);
frost$core$Frost$unref$frost$core$Object$Q(_179);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:255
_182 = (frost$core$Int) {4u};
_183 = (frost$core$Int) {1u};
_184 = _182.value;
_185 = _183.value;
_186 = _184 - _185;
_187 = (frost$core$Int) {_186};
*(&local4) = _187;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:268
FROST_ASSERT(24 == sizeof(frost$core$RegularExpression));
_190 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
_191 = *(&local2);
_192 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s128, _191);
_193 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_192, &$s129);
_194 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_193, &$s130);
_195 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_194, &$s131);
_196 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_195, &$s132);
_197 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_196, &$s133);
_198 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_197, &$s134);
_199 = (frost$core$Int) {1u};
_200 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.||(other:frost.core.Int):frost.core.Int from Markdown.frost:275:45
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:329
_203 = _199.value;
_204 = _200.value;
_205 = _203 | _204;
_206 = (frost$core$Int) {_205};
frost$core$RegularExpression$init$frost$core$String$frost$core$Int(_190, _198, _206);
*(&local5) = ((frost$core$RegularExpression*) NULL);
_210 = ((frost$core$Object*) _190);
frost$core$Frost$ref$frost$core$Object$Q(_210);
_212 = *(&local5);
_213 = ((frost$core$Object*) _212);
frost$core$Frost$unref$frost$core$Object$Q(_213);
*(&local5) = _190;
_216 = ((frost$core$Object*) _198);
frost$core$Frost$unref$frost$core$Object$Q(_216);
_218 = ((frost$core$Object*) _197);
frost$core$Frost$unref$frost$core$Object$Q(_218);
_220 = ((frost$core$Object*) _196);
frost$core$Frost$unref$frost$core$Object$Q(_220);
_222 = ((frost$core$Object*) _195);
frost$core$Frost$unref$frost$core$Object$Q(_222);
_224 = ((frost$core$Object*) _194);
frost$core$Frost$unref$frost$core$Object$Q(_224);
_226 = ((frost$core$Object*) _193);
frost$core$Frost$unref$frost$core$Object$Q(_226);
_228 = ((frost$core$Object*) _192);
frost$core$Frost$unref$frost$core$Object$Q(_228);
_230 = ((frost$core$Object*) _190);
frost$core$Frost$unref$frost$core$Object$Q(_230);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:277
FROST_ASSERT(24 == sizeof(org$frostlang$frostc$frostdoc$Markdown$_Closure4));
_233 = (org$frostlang$frostc$frostdoc$Markdown$_Closure4*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$frostdoc$Markdown$_Closure4$class);
org$frostlang$frostc$frostdoc$Markdown$_Closure4$init$org$frostlang$frostc$frostdoc$Markdown(_233, param0);
_235 = ((frost$core$Int8*) org$frostlang$frostc$frostdoc$Markdown$_Closure4$$anonymous3$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$String);
FROST_ASSERT(32 == sizeof(frost$core$MutableMethod));
_236 = (frost$core$MutableMethod*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$MutableMethod$class);
_237 = ((frost$core$Object*) _233);
// begin inline call to frost.core.MutableMethod.init(pointer:frost.unsafe.Pointer<frost.core.Int8>, target:frost.core.Object?) from Markdown.frost:277:9
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableMethod.frost:32
_240 = &_236->pointer;
*_240 = _235;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableMethod.frost:33
frost$core$Frost$ref$frost$core$Object$Q(_237);
_244 = &_236->target;
_245 = *_244;
frost$core$Frost$unref$frost$core$Object$Q(_245);
_247 = &_236->target;
*_247 = _237;
_250 = _236;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:277
*(&local6) = ((frost$core$MutableMethod*) NULL);
_253 = ((frost$core$Object*) _250);
frost$core$Frost$ref$frost$core$Object$Q(_253);
_255 = *(&local6);
_256 = ((frost$core$Object*) _255);
frost$core$Frost$unref$frost$core$Object$Q(_256);
*(&local6) = _250;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:281
_260 = *(&local5);
_261 = *(&local6);
_262 = _261;
frost$core$MutableString$replace$frost$core$RegularExpression$$LPfrost$collections$ListView$LTfrost$core$String$Q$GT$RP$EQ$GT$LPfrost$core$Object$RP(param1, _260, _262);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:284
FROST_ASSERT(24 == sizeof(frost$core$RegularExpression));
_265 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
_266 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s136, &$s137);
_267 = *(&local3);
_268 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_266, _267);
_269 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_268, &$s138);
_270 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_269, &$s139);
_271 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_270, &$s140);
_272 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_271, &$s141);
_273 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_272, &$s142);
_274 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_273, &$s143);
_275 = (frost$core$Int) {1u};
_276 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.||(other:frost.core.Int):frost.core.Int from Markdown.frost:292:45
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:329
_279 = _275.value;
_280 = _276.value;
_281 = _279 | _280;
_282 = (frost$core$Int) {_281};
frost$core$RegularExpression$init$frost$core$String$frost$core$Int(_265, _274, _282);
*(&local7) = ((frost$core$RegularExpression*) NULL);
_286 = ((frost$core$Object*) _265);
frost$core$Frost$ref$frost$core$Object$Q(_286);
_288 = *(&local7);
_289 = ((frost$core$Object*) _288);
frost$core$Frost$unref$frost$core$Object$Q(_289);
*(&local7) = _265;
_292 = ((frost$core$Object*) _274);
frost$core$Frost$unref$frost$core$Object$Q(_292);
_294 = ((frost$core$Object*) _273);
frost$core$Frost$unref$frost$core$Object$Q(_294);
_296 = ((frost$core$Object*) _272);
frost$core$Frost$unref$frost$core$Object$Q(_296);
_298 = ((frost$core$Object*) _271);
frost$core$Frost$unref$frost$core$Object$Q(_298);
_300 = ((frost$core$Object*) _270);
frost$core$Frost$unref$frost$core$Object$Q(_300);
_302 = ((frost$core$Object*) _269);
frost$core$Frost$unref$frost$core$Object$Q(_302);
_304 = ((frost$core$Object*) _268);
frost$core$Frost$unref$frost$core$Object$Q(_304);
_306 = ((frost$core$Object*) _266);
frost$core$Frost$unref$frost$core$Object$Q(_306);
_308 = ((frost$core$Object*) _265);
frost$core$Frost$unref$frost$core$Object$Q(_308);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:293
_311 = *(&local7);
_312 = *(&local6);
_313 = _312;
frost$core$MutableString$replace$frost$core$RegularExpression$$LPfrost$collections$ListView$LTfrost$core$String$Q$GT$RP$EQ$GT$LPfrost$core$Object$RP(param1, _311, _313);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:296
FROST_ASSERT(24 == sizeof(frost$core$RegularExpression));
_316 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
_317 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s144, &$s145);
_318 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_317, &$s146);
_319 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_318, &$s147);
_320 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_319, &$s148);
_321 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_320, &$s149);
_322 = *(&local4);
frost$core$Int$wrapper* $tmp150;
$tmp150 = (frost$core$Int$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp150->value = _322;
_323 = ((frost$core$Object*) $tmp150);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Markdown.frost:302:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
_326 = ($fn151) _323->$class->vtable[0];
_327 = _326(_323);
_328 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_321, _327);
_329 = ((frost$core$Object*) _328);
frost$core$Frost$ref$frost$core$Object$Q(_329);
_331 = ((frost$core$Object*) _328);
frost$core$Frost$unref$frost$core$Object$Q(_331);
_333 = ((frost$core$Object*) _327);
frost$core$Frost$unref$frost$core$Object$Q(_333);
_336 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_328, &$s152);
_337 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_336, &$s153);
_338 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_337, &$s154);
_339 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_338, &$s155);
_340 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_339, &$s156);
_341 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_340, &$s157);
_342 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_341, &$s158);
_343 = (frost$core$Int) {2u};
frost$core$RegularExpression$init$frost$core$String$frost$core$Int(_316, _342, _343);
*(&local8) = ((frost$core$RegularExpression*) NULL);
_346 = ((frost$core$Object*) _316);
frost$core$Frost$ref$frost$core$Object$Q(_346);
_348 = *(&local8);
_349 = ((frost$core$Object*) _348);
frost$core$Frost$unref$frost$core$Object$Q(_349);
*(&local8) = _316;
_352 = ((frost$core$Object*) _342);
frost$core$Frost$unref$frost$core$Object$Q(_352);
_354 = ((frost$core$Object*) _341);
frost$core$Frost$unref$frost$core$Object$Q(_354);
_356 = ((frost$core$Object*) _340);
frost$core$Frost$unref$frost$core$Object$Q(_356);
_358 = ((frost$core$Object*) _339);
frost$core$Frost$unref$frost$core$Object$Q(_358);
_360 = ((frost$core$Object*) _338);
frost$core$Frost$unref$frost$core$Object$Q(_360);
_362 = ((frost$core$Object*) _337);
frost$core$Frost$unref$frost$core$Object$Q(_362);
_364 = ((frost$core$Object*) _336);
frost$core$Frost$unref$frost$core$Object$Q(_364);
_366 = ((frost$core$Object*) _328);
frost$core$Frost$unref$frost$core$Object$Q(_366);
_368 = _323;
frost$core$Frost$unref$frost$core$Object$Q(_368);
_370 = ((frost$core$Object*) _321);
frost$core$Frost$unref$frost$core$Object$Q(_370);
_372 = ((frost$core$Object*) _320);
frost$core$Frost$unref$frost$core$Object$Q(_372);
_374 = ((frost$core$Object*) _319);
frost$core$Frost$unref$frost$core$Object$Q(_374);
_376 = ((frost$core$Object*) _318);
frost$core$Frost$unref$frost$core$Object$Q(_376);
_378 = ((frost$core$Object*) _317);
frost$core$Frost$unref$frost$core$Object$Q(_378);
_380 = ((frost$core$Object*) _316);
frost$core$Frost$unref$frost$core$Object$Q(_380);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:310
_383 = *(&local8);
_384 = *(&local6);
_385 = _384;
frost$core$MutableString$replace$frost$core$RegularExpression$$LPfrost$collections$ListView$LTfrost$core$String$Q$GT$RP$EQ$GT$LPfrost$core$Object$RP(param1, _383, _385);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:313
FROST_ASSERT(24 == sizeof(frost$core$RegularExpression));
_388 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
_389 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s159, &$s160);
_390 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_389, &$s161);
_391 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_390, &$s162);
_392 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_391, &$s163);
_393 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_392, &$s164);
_394 = *(&local4);
frost$core$Int$wrapper* $tmp165;
$tmp165 = (frost$core$Int$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp165->value = _394;
_395 = ((frost$core$Object*) $tmp165);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Markdown.frost:319:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
_398 = ($fn166) _395->$class->vtable[0];
_399 = _398(_395);
_400 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_393, _399);
_401 = ((frost$core$Object*) _400);
frost$core$Frost$ref$frost$core$Object$Q(_401);
_403 = ((frost$core$Object*) _400);
frost$core$Frost$unref$frost$core$Object$Q(_403);
_405 = ((frost$core$Object*) _399);
frost$core$Frost$unref$frost$core$Object$Q(_405);
_408 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_400, &$s167);
_409 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_408, &$s168);
_410 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_409, &$s169);
_411 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_410, &$s170);
_412 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_411, &$s171);
_413 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_412, &$s172);
_414 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_413, &$s173);
_415 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_414, &$s174);
_416 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_415, &$s175);
frost$core$RegularExpression$init$frost$core$String(_388, _416);
*(&local9) = ((frost$core$RegularExpression*) NULL);
_419 = ((frost$core$Object*) _388);
frost$core$Frost$ref$frost$core$Object$Q(_419);
_421 = *(&local9);
_422 = ((frost$core$Object*) _421);
frost$core$Frost$unref$frost$core$Object$Q(_422);
*(&local9) = _388;
_425 = ((frost$core$Object*) _416);
frost$core$Frost$unref$frost$core$Object$Q(_425);
_427 = ((frost$core$Object*) _415);
frost$core$Frost$unref$frost$core$Object$Q(_427);
_429 = ((frost$core$Object*) _414);
frost$core$Frost$unref$frost$core$Object$Q(_429);
_431 = ((frost$core$Object*) _413);
frost$core$Frost$unref$frost$core$Object$Q(_431);
_433 = ((frost$core$Object*) _412);
frost$core$Frost$unref$frost$core$Object$Q(_433);
_435 = ((frost$core$Object*) _411);
frost$core$Frost$unref$frost$core$Object$Q(_435);
_437 = ((frost$core$Object*) _410);
frost$core$Frost$unref$frost$core$Object$Q(_437);
_439 = ((frost$core$Object*) _409);
frost$core$Frost$unref$frost$core$Object$Q(_439);
_441 = ((frost$core$Object*) _408);
frost$core$Frost$unref$frost$core$Object$Q(_441);
_443 = ((frost$core$Object*) _400);
frost$core$Frost$unref$frost$core$Object$Q(_443);
_445 = _395;
frost$core$Frost$unref$frost$core$Object$Q(_445);
_447 = ((frost$core$Object*) _393);
frost$core$Frost$unref$frost$core$Object$Q(_447);
_449 = ((frost$core$Object*) _392);
frost$core$Frost$unref$frost$core$Object$Q(_449);
_451 = ((frost$core$Object*) _391);
frost$core$Frost$unref$frost$core$Object$Q(_451);
_453 = ((frost$core$Object*) _390);
frost$core$Frost$unref$frost$core$Object$Q(_453);
_455 = ((frost$core$Object*) _389);
frost$core$Frost$unref$frost$core$Object$Q(_455);
_457 = ((frost$core$Object*) _388);
frost$core$Frost$unref$frost$core$Object$Q(_457);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:328
_460 = *(&local9);
_461 = *(&local6);
_462 = _461;
frost$core$MutableString$replace$frost$core$RegularExpression$$LPfrost$collections$ListView$LTfrost$core$String$Q$GT$RP$EQ$GT$LPfrost$core$Object$RP(param1, _460, _462);
_464 = *(&local9);
_465 = ((frost$core$Object*) _464);
frost$core$Frost$unref$frost$core$Object$Q(_465);
*(&local9) = ((frost$core$RegularExpression*) NULL);
_468 = *(&local8);
_469 = ((frost$core$Object*) _468);
frost$core$Frost$unref$frost$core$Object$Q(_469);
*(&local8) = ((frost$core$RegularExpression*) NULL);
_472 = *(&local7);
_473 = ((frost$core$Object*) _472);
frost$core$Frost$unref$frost$core$Object$Q(_473);
*(&local7) = ((frost$core$RegularExpression*) NULL);
_476 = *(&local6);
_477 = ((frost$core$Object*) _476);
frost$core$Frost$unref$frost$core$Object$Q(_477);
*(&local6) = ((frost$core$MutableMethod*) NULL);
_480 = ((frost$core$Object*) _236);
frost$core$Frost$unref$frost$core$Object$Q(_480);
_482 = ((frost$core$Object*) _233);
frost$core$Frost$unref$frost$core$Object$Q(_482);
_484 = *(&local5);
_485 = ((frost$core$Object*) _484);
frost$core$Frost$unref$frost$core$Object$Q(_485);
*(&local5) = ((frost$core$RegularExpression*) NULL);
_488 = *(&local3);
_489 = ((frost$core$Object*) _488);
frost$core$Frost$unref$frost$core$Object$Q(_489);
*(&local3) = ((frost$core$String*) NULL);
_492 = *(&local2);
_493 = ((frost$core$Object*) _492);
frost$core$Frost$unref$frost$core$Object$Q(_493);
*(&local2) = ((frost$core$String*) NULL);
_496 = *(&local1);
_497 = ((frost$core$Object*) _496);
frost$core$Frost$unref$frost$core$Object$Q(_497);
*(&local1) = ((frost$collections$Array*) NULL);
_500 = *(&local0);
_501 = ((frost$core$Object*) _500);
frost$core$Frost$unref$frost$core$Object$Q(_501);
*(&local0) = ((frost$collections$Array*) NULL);
return;

}
void org$frostlang$frostc$frostdoc$Markdown$formParagraphs$frost$core$MutableString(org$frostlang$frostc$frostdoc$Markdown* param0, frost$core$MutableString* param1) {

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
$fn176 _9;
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
$fn177 _55;
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
frost$collections$Array* _112;
frost$core$Object* _114;
frost$collections$Array* _116;
frost$core$Object* _117;
frost$core$Object* _120;
frost$collections$Array* _125;
frost$collections$Array* _126;
frost$core$Object* _127;
$fn178 _128;
frost$core$String* _129;
frost$core$RegularExpression* _130;
frost$core$Int64 _134;
int64_t _137;
int64_t _138;
frost$core$Int _139;
frost$collections$Array* _141;
frost$core$Object* _142;
frost$core$Object* _144;
frost$collections$CollectionView* _147;
frost$collections$CollectionView* _148;
frost$core$Object* _150;
frost$collections$Array* _152;
frost$core$Object* _153;
frost$core$Object* _156;
frost$core$Object* _158;
frost$core$Object* _160;
frost$core$Object* _162;
frost$core$Int _166;
frost$collections$Array* _167;
frost$collections$CollectionView* _168;
$fn179 _169;
frost$core$Int _170;
frost$core$Bit _171;
frost$core$Range$LTfrost$core$Int$GT _172;
frost$core$Int _173;
frost$core$Int _175;
frost$core$Bit _176;
bool _177;
frost$core$Int _178;
int64_t _180;
int64_t _181;
bool _182;
frost$core$Bit _183;
bool _184;
int64_t _186;
int64_t _187;
bool _188;
frost$core$Bit _189;
bool _190;
frost$collections$Array* _193;
frost$collections$Array* _194;
frost$core$Int _195;
frost$core$Int _197;
int64_t _198;
int64_t _199;
bool _200;
frost$core$Bit _201;
bool _202;
frost$collections$CollectionView* _204;
$fn180 _205;
frost$core$Int _206;
int64_t _207;
int64_t _208;
bool _209;
frost$core$Bit _210;
bool _211;
frost$core$Int _213;
frost$core$Object*** _217;
frost$core$Object** _218;
frost$core$Int64 _219;
int64_t _220;
frost$core$Object* _221;
frost$core$Object* _222;
frost$core$String* _225;
frost$core$Object* _227;
frost$core$String* _229;
frost$core$Object* _230;
frost$core$Object* _233;
org$frostlang$frostc$frostdoc$Protector** _236;
org$frostlang$frostc$frostdoc$Protector* _237;
frost$core$String* _238;
$fn181 _239;
frost$core$String* _240;
frost$core$Object* _242;
frost$core$String* _244;
frost$core$Object* _245;
frost$core$Object* _248;
frost$core$String* _251;
bool _252;
frost$core$Bit _253;
bool _254;
frost$collections$Array* _257;
frost$collections$Array* _258;
frost$core$Int _259;
frost$core$String* _260;
bool _261;
frost$core$Bit _262;
bool _263;
frost$core$Int _265;
frost$core$String* _268;
frost$core$Object* _269;
frost$core$Int _271;
int64_t _272;
int64_t _273;
bool _274;
frost$core$Bit _275;
bool _276;
frost$collections$CollectionView* _278;
$fn182 _279;
frost$core$Int _280;
int64_t _281;
int64_t _282;
bool _283;
frost$core$Bit _284;
bool _285;
frost$core$Int _287;
frost$core$Object*** _291;
frost$core$Object** _292;
frost$core$Int64 _293;
int64_t _294;
frost$core$Object* _295;
frost$core$Object* _297;
frost$core$Object* _298;
frost$core$MutableString* _305;
frost$core$String* _306;
frost$core$Object* _309;
frost$core$MutableString* _311;
frost$core$Object* _312;
frost$core$Object* _315;
frost$core$MutableString* _318;
$fn183 _319;
frost$collections$Array* _322;
frost$collections$Array* _323;
frost$core$Int _324;
frost$core$MutableString* _325;
frost$core$Object* _326;
$fn184 _329;
frost$core$String* _330;
frost$core$String* _331;
frost$core$Object* _332;
frost$core$Object* _334;
frost$core$Object* _336;
frost$core$String* _339;
frost$core$Object* _340;
frost$core$Int _342;
int64_t _343;
int64_t _344;
bool _345;
frost$core$Bit _346;
bool _347;
frost$collections$CollectionView* _349;
$fn185 _350;
frost$core$Int _351;
int64_t _352;
int64_t _353;
bool _354;
frost$core$Bit _355;
bool _356;
frost$core$Int _358;
frost$core$Object*** _362;
frost$core$Object** _363;
frost$core$Int64 _364;
int64_t _365;
frost$core$Object* _366;
frost$core$Object* _368;
frost$core$Object* _369;
frost$core$Object* _373;
frost$core$Object* _375;
frost$core$MutableString* _377;
frost$core$Object* _378;
frost$core$String* _382;
frost$core$Object* _383;
frost$core$String* _386;
frost$core$Object* _387;
frost$core$Int _391;
int64_t _392;
int64_t _393;
int64_t _394;
frost$core$Int _395;
int64_t _397;
int64_t _398;
bool _399;
frost$core$Bit _400;
bool _401;
int64_t _403;
int64_t _404;
bool _405;
frost$core$Bit _406;
bool _407;
int64_t _409;
int64_t _410;
int64_t _411;
frost$core$Int _412;
frost$core$Bit _416;
frost$core$Range$LTfrost$core$MutableString$Index$Q$GT _417;
frost$collections$Array* _418;
frost$collections$CollectionView* _419;
$fn186 _420;
frost$core$String* _421;
frost$core$Object* _423;
frost$collections$Array* _425;
frost$core$Object* _426;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:332
FROST_ASSERT(24 == sizeof(frost$core$RegularExpression));
_1 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String(_1, &$s187);
// begin inline call to method frost.core.MutableString.replace(search:frost.core.RegularExpression, replacement:frost.core.String) from Markdown.frost:332:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:401
_5 = (frost$core$Bit) {true};
// begin inline call to method frost.core.MutableString.replace(search:frost.core.RegularExpression, replacement:frost.core.String, allowGroupReferences:frost.core.Bit) from MutableString.frost:401:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:406
_8 = ((frost$core$Object*) param1);
_9 = ($fn188) _8->$class->vtable[0];
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
frost$core$Matcher$appendReplacement$frost$core$MutableString$frost$core$String$frost$core$Bit(_32, param1, &$s189, _5);
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
FROST_ASSERT(24 == sizeof(frost$core$RegularExpression));
_47 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String(_47, &$s190);
// begin inline call to method frost.core.MutableString.replace(search:frost.core.RegularExpression, replacement:frost.core.String) from Markdown.frost:333:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:401
_51 = (frost$core$Bit) {true};
// begin inline call to method frost.core.MutableString.replace(search:frost.core.RegularExpression, replacement:frost.core.String, allowGroupReferences:frost.core.Bit) from MutableString.frost:401:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:406
_54 = ((frost$core$Object*) param1);
_55 = ($fn191) _54->$class->vtable[0];
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
frost$core$Matcher$appendReplacement$frost$core$MutableString$frost$core$String$frost$core$Bit(_78, param1, &$s192, _51);
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
FROST_ASSERT(40 == sizeof(frost$collections$Array));
_111 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
_112 = _111;
frost$collections$Array$init(_112);
_114 = ((frost$core$Object*) _111);
frost$core$Frost$ref$frost$core$Object$Q(_114);
_116 = *(&local2);
_117 = ((frost$core$Object*) _116);
frost$core$Frost$unref$frost$core$Object$Q(_117);
*(&local2) = _111;
_120 = ((frost$core$Object*) _111);
frost$core$Frost$unref$frost$core$Object$Q(_120);
goto block12;
block13:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:339
FROST_ASSERT(40 == sizeof(frost$collections$Array));
_125 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
_126 = _125;
_127 = ((frost$core$Object*) param1);
_128 = ($fn193) _127->$class->vtable[0];
_129 = _128(_127);
FROST_ASSERT(24 == sizeof(frost$core$RegularExpression));
_130 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String(_130, &$s194);
// begin inline call to function frost.core.String.split(delimiter:frost.core.RegularExpression):frost.collections.Array<frost.core.String> from Markdown.frost:339:62
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1449
_134 = (frost$core$Int64) {9223372036854775807u};
// begin inline call to function frost.core.Int64.get_asInt():frost.core.Int from Int.frost:22:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:580
_137 = _134.value;
_138 = ((int64_t) _137);
_139 = (frost$core$Int) {_138};
_141 = frost$core$String$split$frost$core$RegularExpression$frost$core$Int$R$frost$collections$Array$LTfrost$core$String$GT(_129, _130, _139);
_142 = ((frost$core$Object*) _141);
frost$core$Frost$ref$frost$core$Object$Q(_142);
_144 = ((frost$core$Object*) _141);
frost$core$Frost$unref$frost$core$Object$Q(_144);
_147 = ((frost$collections$CollectionView*) _141);
_148 = _147;
frost$collections$Array$init$frost$collections$CollectionView$LTfrost$collections$Array$T$GT(_126, _148);
_150 = ((frost$core$Object*) _125);
frost$core$Frost$ref$frost$core$Object$Q(_150);
_152 = *(&local2);
_153 = ((frost$core$Object*) _152);
frost$core$Frost$unref$frost$core$Object$Q(_153);
*(&local2) = _125;
_156 = ((frost$core$Object*) _141);
frost$core$Frost$unref$frost$core$Object$Q(_156);
_158 = ((frost$core$Object*) _130);
frost$core$Frost$unref$frost$core$Object$Q(_158);
_160 = ((frost$core$Object*) _129);
frost$core$Frost$unref$frost$core$Object$Q(_160);
_162 = ((frost$core$Object*) _125);
frost$core$Frost$unref$frost$core$Object$Q(_162);
goto block12;
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:341
_166 = (frost$core$Int) {0u};
_167 = *(&local2);
_168 = ((frost$collections$CollectionView*) _167);
ITable* $tmp195 = _168->$class->itable;
while ($tmp195->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp195 = $tmp195->next;
}
_169 = $tmp195->methods[0];
_170 = _169(_168);
_171 = (frost$core$Bit) {false};
_172 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit(_166, _170, _171);
_173 = _172.min;
*(&local3) = _173;
_175 = _172.max;
_176 = _172.inclusive;
_177 = _176.value;
_178 = (frost$core$Int) {1u};
if (_177) goto block21; else goto block22;
block21:;
_180 = _173.value;
_181 = _175.value;
_182 = _180 <= _181;
_183 = (frost$core$Bit) {_182};
_184 = _183.value;
if (_184) goto block18; else goto block19;
block22:;
_186 = _173.value;
_187 = _175.value;
_188 = _186 < _187;
_189 = (frost$core$Bit) {_188};
_190 = _189.value;
if (_190) goto block18; else goto block19;
block18:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:342
_193 = *(&local2);
_194 = _193;
_195 = *(&local3);
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Markdown.frost:342:40
_197 = (frost$core$Int) {0u};
_198 = _195.value;
_199 = _197.value;
_200 = _198 >= _199;
_201 = (frost$core$Bit) {_200};
_202 = _201.value;
if (_202) goto block26; else goto block25;
block26:;
_204 = ((frost$collections$CollectionView*) _194);
ITable* $tmp196 = _204->$class->itable;
while ($tmp196->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp196 = $tmp196->next;
}
_205 = $tmp196->methods[0];
_206 = _205(_204);
_207 = _195.value;
_208 = _206.value;
_209 = _207 < _208;
_210 = (frost$core$Bit) {_209};
_211 = _210.value;
if (_211) goto block24; else goto block25;
block25:;
_213 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s197, _213, &$s198);
abort(); // unreachable
block24:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
_217 = &_194->data;
_218 = *_217;
_219 = frost$core$Int64$init$frost$core$Int(_195);
_220 = _219.value;
_221 = _218[_220];
_222 = _221;
frost$core$Frost$ref$frost$core$Object$Q(_222);
_225 = ((frost$core$String*) _221);
*(&local4) = ((frost$core$String*) NULL);
_227 = ((frost$core$Object*) _225);
frost$core$Frost$ref$frost$core$Object$Q(_227);
_229 = *(&local4);
_230 = ((frost$core$Object*) _229);
frost$core$Frost$unref$frost$core$Object$Q(_230);
*(&local4) = _225;
_233 = _221;
frost$core$Frost$unref$frost$core$Object$Q(_233);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:343
_236 = &param0->htmlProtector;
_237 = *_236;
_238 = *(&local4);
_239 = ($fn199) _237->$class->vtable[3];
_240 = _239(_237, _238);
*(&local5) = ((frost$core$String*) NULL);
_242 = ((frost$core$Object*) _240);
frost$core$Frost$ref$frost$core$Object$Q(_242);
_244 = *(&local5);
_245 = ((frost$core$Object*) _244);
frost$core$Frost$unref$frost$core$Object$Q(_245);
*(&local5) = _240;
_248 = ((frost$core$Object*) _240);
frost$core$Frost$unref$frost$core$Object$Q(_248);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:344
_251 = *(&local5);
_252 = _251 != NULL;
_253 = (frost$core$Bit) {_252};
_254 = _253.value;
if (_254) goto block27; else goto block29;
block27:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:345
_257 = *(&local2);
_258 = _257;
_259 = *(&local3);
_260 = *(&local5);
_261 = _260 != NULL;
_262 = (frost$core$Bit) {_261};
_263 = _262.value;
if (_263) goto block30; else goto block31;
block31:;
_265 = (frost$core$Int) {345u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s200, _265, &$s201);
abort(); // unreachable
block30:;
_268 = _260;
_269 = ((frost$core$Object*) _268);
// begin inline call to method frost.collections.Array.[]:=(index:frost.core.Int, value:frost.collections.Array.T) from Markdown.frost:345:27
_271 = (frost$core$Int) {0u};
_272 = _259.value;
_273 = _271.value;
_274 = _272 >= _273;
_275 = (frost$core$Bit) {_274};
_276 = _275.value;
if (_276) goto block35; else goto block34;
block35:;
_278 = ((frost$collections$CollectionView*) _258);
ITable* $tmp202 = _278->$class->itable;
while ($tmp202->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp202 = $tmp202->next;
}
_279 = $tmp202->methods[0];
_280 = _279(_278);
_281 = _259.value;
_282 = _280.value;
_283 = _281 < _282;
_284 = (frost$core$Bit) {_283};
_285 = _284.value;
if (_285) goto block33; else goto block34;
block34:;
_287 = (frost$core$Int) {79u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s203, _287, &$s204);
abort(); // unreachable
block33:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:80
_291 = &_258->data;
_292 = *_291;
_293 = frost$core$Int64$init$frost$core$Int(_259);
_294 = _293.value;
_295 = _269;
frost$core$Frost$ref$frost$core$Object$Q(_295);
_297 = _292[_294];
_298 = _297;
frost$core$Frost$unref$frost$core$Object$Q(_298);
_292[_294] = _269;
goto block28;
block29:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:348
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
_305 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
_306 = *(&local4);
frost$core$MutableString$init$frost$core$String(_305, _306);
*(&local6) = ((frost$core$MutableString*) NULL);
_309 = ((frost$core$Object*) _305);
frost$core$Frost$ref$frost$core$Object$Q(_309);
_311 = *(&local6);
_312 = ((frost$core$Object*) _311);
frost$core$Frost$unref$frost$core$Object$Q(_312);
*(&local6) = _305;
_315 = ((frost$core$Object*) _305);
frost$core$Frost$unref$frost$core$Object$Q(_315);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:349
_318 = *(&local6);
_319 = ($fn205) param0->$class->vtable[22];
_319(param0, _318);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:350
_322 = *(&local2);
_323 = _322;
_324 = *(&local3);
_325 = *(&local6);
_326 = ((frost$core$Object*) _325);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Markdown.frost:350:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
_329 = ($fn206) _326->$class->vtable[0];
_330 = _329(_326);
_331 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s207, _330);
_332 = ((frost$core$Object*) _331);
frost$core$Frost$ref$frost$core$Object$Q(_332);
_334 = ((frost$core$Object*) _331);
frost$core$Frost$unref$frost$core$Object$Q(_334);
_336 = ((frost$core$Object*) _330);
frost$core$Frost$unref$frost$core$Object$Q(_336);
_339 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_331, &$s208);
_340 = ((frost$core$Object*) _339);
// begin inline call to method frost.collections.Array.[]:=(index:frost.core.Int, value:frost.collections.Array.T) from Markdown.frost:350:27
_342 = (frost$core$Int) {0u};
_343 = _324.value;
_344 = _342.value;
_345 = _343 >= _344;
_346 = (frost$core$Bit) {_345};
_347 = _346.value;
if (_347) goto block40; else goto block39;
block40:;
_349 = ((frost$collections$CollectionView*) _323);
ITable* $tmp209 = _349->$class->itable;
while ($tmp209->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp209 = $tmp209->next;
}
_350 = $tmp209->methods[0];
_351 = _350(_349);
_352 = _324.value;
_353 = _351.value;
_354 = _352 < _353;
_355 = (frost$core$Bit) {_354};
_356 = _355.value;
if (_356) goto block38; else goto block39;
block39:;
_358 = (frost$core$Int) {79u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s210, _358, &$s211);
abort(); // unreachable
block38:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:80
_362 = &_323->data;
_363 = *_362;
_364 = frost$core$Int64$init$frost$core$Int(_324);
_365 = _364.value;
_366 = _340;
frost$core$Frost$ref$frost$core$Object$Q(_366);
_368 = _363[_365];
_369 = _368;
frost$core$Frost$unref$frost$core$Object$Q(_369);
_363[_365] = _340;
_373 = ((frost$core$Object*) _339);
frost$core$Frost$unref$frost$core$Object$Q(_373);
_375 = ((frost$core$Object*) _331);
frost$core$Frost$unref$frost$core$Object$Q(_375);
_377 = *(&local6);
_378 = ((frost$core$Object*) _377);
frost$core$Frost$unref$frost$core$Object$Q(_378);
*(&local6) = ((frost$core$MutableString*) NULL);
goto block28;
block28:;
_382 = *(&local5);
_383 = ((frost$core$Object*) _382);
frost$core$Frost$unref$frost$core$Object$Q(_383);
*(&local5) = ((frost$core$String*) NULL);
_386 = *(&local4);
_387 = ((frost$core$Object*) _386);
frost$core$Frost$unref$frost$core$Object$Q(_387);
*(&local4) = ((frost$core$String*) NULL);
_391 = *(&local3);
_392 = _175.value;
_393 = _391.value;
_394 = _392 - _393;
_395 = (frost$core$Int) {_394};
if (_177) goto block42; else goto block43;
block42:;
_397 = _395.value;
_398 = _178.value;
_399 = _397 >= _398;
_400 = (frost$core$Bit) {_399};
_401 = _400.value;
if (_401) goto block41; else goto block19;
block43:;
_403 = _395.value;
_404 = _178.value;
_405 = _403 > _404;
_406 = (frost$core$Bit) {_405};
_407 = _406.value;
if (_407) goto block41; else goto block19;
block41:;
_409 = _391.value;
_410 = _178.value;
_411 = _409 + _410;
_412 = (frost$core$Int) {_411};
*(&local3) = _412;
goto block18;
block19:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:353
_416 = (frost$core$Bit) {false};
_417 = frost$core$Range$LTfrost$core$MutableString$Index$Q$GT$init$frost$core$MutableString$Index$Q$frost$core$MutableString$Index$Q$frost$core$Bit(((frost$core$MutableString$Index$nullable) { .nonnull = false }), ((frost$core$MutableString$Index$nullable) { .nonnull = false }), _416);
_418 = *(&local2);
_419 = ((frost$collections$CollectionView*) _418);
ITable* $tmp212 = _419->$class->itable;
while ($tmp212->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp212 = $tmp212->next;
}
_420 = $tmp212->methods[3];
_421 = _420(_419, &$s213);
frost$core$MutableString$$IDXEQ$frost$core$Range$LTfrost$core$MutableString$Index$Q$GT$frost$core$String(param1, _417, _421);
_423 = ((frost$core$Object*) _421);
frost$core$Frost$unref$frost$core$Object$Q(_423);
_425 = *(&local2);
_426 = ((frost$core$Object*) _425);
frost$core$Frost$unref$frost$core$Object$Q(_426);
*(&local2) = ((frost$collections$Array*) NULL);
return;

}
void org$frostlang$frostc$frostdoc$Markdown$doAutoLinks$frost$core$MutableString(org$frostlang$frostc$frostdoc$Markdown* param0, frost$core$MutableString* param1) {

frost$core$Matcher* local0 = NULL;
frost$core$RegularExpression* local1 = NULL;
frost$core$RegularExpression* _1;
frost$core$Bit _5;
frost$core$Object* _8;
$fn214 _9;
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
FROST_ASSERT(24 == sizeof(frost$core$RegularExpression));
_1 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String(_1, &$s215);
// begin inline call to method frost.core.MutableString.replace(search:frost.core.RegularExpression, replacement:frost.core.String) from Markdown.frost:357:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:401
_5 = (frost$core$Bit) {true};
// begin inline call to method frost.core.MutableString.replace(search:frost.core.RegularExpression, replacement:frost.core.String, allowGroupReferences:frost.core.Bit) from MutableString.frost:401:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:406
_8 = ((frost$core$Object*) param1);
_9 = ($fn216) _8->$class->vtable[0];
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
frost$core$Matcher$appendReplacement$frost$core$MutableString$frost$core$String$frost$core$Bit(_32, param1, &$s217, _5);
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
FROST_ASSERT(24 == sizeof(frost$core$RegularExpression));
_47 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String(_47, &$s218);
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
FROST_ASSERT(24 == sizeof(org$frostlang$frostc$frostdoc$Markdown$_Closure6));
_60 = (org$frostlang$frostc$frostdoc$Markdown$_Closure6*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$frostdoc$Markdown$_Closure6$class);
org$frostlang$frostc$frostdoc$Markdown$_Closure6$init$org$frostlang$frostc$frostdoc$Markdown(_60, param0);
_62 = ((frost$core$Int8*) org$frostlang$frostc$frostdoc$Markdown$_Closure6$$anonymous5$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$String);
FROST_ASSERT(32 == sizeof(frost$core$MutableMethod));
_63 = (frost$core$MutableMethod*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$MutableMethod$class);
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
void org$frostlang$frostc$frostdoc$Markdown$unescapeSpecialChars$frost$core$MutableString(org$frostlang$frostc$frostdoc$Markdown* param0, frost$core$MutableString* param1) {

frost$core$String* local0 = NULL;
frost$core$String* local1 = NULL;
org$frostlang$frostc$frostdoc$Protector** _1;
org$frostlang$frostc$frostdoc$Protector* _2;
frost$collections$HashMap** _3;
frost$collections$HashMap* _4;
frost$collections$MapView* _5;
$fn220 _6;
frost$collections$Iterator* _7;
frost$collections$Iterator* _8;
frost$collections$Iterator* _10;
$fn221 _11;
frost$core$Bit _12;
bool _13;
frost$collections$Iterator* _16;
$fn222 _17;
frost$core$Object* _18;
frost$core$String* _19;
frost$core$Object* _20;
frost$core$String* _22;
frost$core$Object* _23;
org$frostlang$frostc$frostdoc$Protector** _27;
org$frostlang$frostc$frostdoc$Protector* _28;
frost$core$String* _29;
$fn223 _30;
frost$core$String* _31;
frost$core$Object* _33;
frost$core$String* _35;
frost$core$Object* _36;
frost$core$Object* _39;
frost$core$String* _42;
frost$core$String* _43;
bool _44;
frost$core$Bit _45;
bool _46;
frost$core$Int _48;
frost$core$String* _51;
frost$core$String* _53;
frost$core$Object* _54;
frost$core$Object* _57;
frost$core$String* _59;
frost$core$Object* _60;
frost$core$Object* _64;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:370
_1 = &param0->charProtector;
_2 = *_1;
_3 = &_2->decodeMap;
_4 = *_3;
_5 = ((frost$collections$MapView*) _4);
ITable* $tmp224 = _5->$class->itable;
while ($tmp224->$class != (frost$core$Class*) &frost$collections$MapView$class) {
    $tmp224 = $tmp224->next;
}
_6 = $tmp224->methods[4];
_7 = _6(_5);
_8 = _7;
goto block1;
block1:;
_10 = _8;
ITable* $tmp225 = _10->$class->itable;
while ($tmp225->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp225 = $tmp225->next;
}
_11 = $tmp225->methods[0];
_12 = _11(_10);
_13 = _12.value;
if (_13) goto block3; else goto block2;
block2:;
*(&local0) = ((frost$core$String*) NULL);
_16 = _8;
ITable* $tmp226 = _16->$class->itable;
while ($tmp226->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp226 = $tmp226->next;
}
_17 = $tmp226->methods[1];
_18 = _17(_16);
_19 = ((frost$core$String*) _18);
_20 = ((frost$core$Object*) _19);
frost$core$Frost$ref$frost$core$Object$Q(_20);
_22 = *(&local0);
_23 = ((frost$core$Object*) _22);
frost$core$Frost$unref$frost$core$Object$Q(_23);
*(&local0) = _19;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:371
_27 = &param0->charProtector;
_28 = *_27;
_29 = *(&local0);
_30 = ($fn227) _28->$class->vtable[3];
_31 = _30(_28, _29);
*(&local1) = ((frost$core$String*) NULL);
_33 = ((frost$core$Object*) _31);
frost$core$Frost$ref$frost$core$Object$Q(_33);
_35 = *(&local1);
_36 = ((frost$core$Object*) _35);
frost$core$Frost$unref$frost$core$Object$Q(_36);
*(&local1) = _31;
_39 = ((frost$core$Object*) _31);
frost$core$Frost$unref$frost$core$Object$Q(_39);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:372
_42 = *(&local0);
_43 = *(&local1);
_44 = _43 != NULL;
_45 = (frost$core$Bit) {_44};
_46 = _45.value;
if (_46) goto block4; else goto block5;
block5:;
_48 = (frost$core$Int) {372u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s228, _48, &$s229);
abort(); // unreachable
block4:;
_51 = _43;
frost$core$MutableString$replace$frost$core$String$frost$core$String(param1, _42, _51);
_53 = *(&local1);
_54 = ((frost$core$Object*) _53);
frost$core$Frost$unref$frost$core$Object$Q(_54);
*(&local1) = ((frost$core$String*) NULL);
_57 = _18;
frost$core$Frost$unref$frost$core$Object$Q(_57);
_59 = *(&local0);
_60 = ((frost$core$Object*) _59);
frost$core$Frost$unref$frost$core$Object$Q(_60);
*(&local0) = ((frost$core$String*) NULL);
goto block1;
block3:;
_64 = ((frost$core$Object*) _7);
frost$core$Frost$unref$frost$core$Object$Q(_64);
return;

}
frost$core$String* org$frostlang$frostc$frostdoc$Markdown$encodeEmail$frost$core$String$R$frost$core$String(org$frostlang$frostc$frostdoc$Markdown* param0, frost$core$String* param1) {

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
frost$collections$Iterable* _14;
$fn230 _15;
frost$collections$Iterator* _16;
frost$collections$Iterator* _17;
frost$collections$Iterator* _19;
$fn231 _20;
frost$core$Bit _21;
bool _22;
frost$collections$Iterator* _24;
$fn232 _25;
frost$core$Object* _26;
frost$core$Char32 _27;
frost$math$Random** _30;
frost$math$Random* _31;
$fn233 _32;
frost$core$Real64 _33;
frost$core$Real64 _36;
frost$core$Real64 _37;
double _38;
double _39;
bool _40;
frost$core$Bit _41;
bool _42;
frost$core$MutableString* _45;
frost$core$MutableString* _48;
frost$core$Char32 _49;
int32_t _52;
frost$core$Int32 _53;
frost$core$Object* _55;
$fn234 _58;
frost$core$String* _59;
frost$core$Object* _61;
frost$core$Object* _64;
frost$core$MutableString* _67;
frost$core$Real64 _71;
frost$core$Real64 _72;
double _73;
double _74;
bool _75;
frost$core$Bit _76;
bool _77;
frost$core$MutableString* _80;
frost$core$MutableString* _83;
frost$core$Char32 _84;
int32_t _87;
frost$core$Int32 _88;
int32_t _92;
bool _93;
frost$core$Bit _94;
frost$core$Int32 _97;
int32_t _98;
int32_t _99;
bool _100;
frost$core$Bit _101;
bool _102;
frost$core$Int32 _105;
frost$core$Int32 _111;
int32_t _114;
uint64_t _115;
frost$core$UInt64 _116;
frost$core$UInt64 _118;
frost$core$String* _119;
frost$core$Object* _120;
frost$core$Object* _122;
frost$core$Object* _126;
frost$core$MutableString* _129;
frost$core$MutableString* _134;
frost$core$Char32 _135;
frost$core$Object* _139;
frost$core$Object* _142;
frost$core$MutableString* _145;
frost$core$Object* _146;
$fn235 _147;
frost$core$String* _148;
frost$core$Object* _149;
frost$core$Object* _151;
frost$core$MutableString* _153;
frost$core$Object* _154;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:377
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
_1 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
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
_14 = _13;
ITable* $tmp236 = _14->$class->itable;
while ($tmp236->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp236 = $tmp236->next;
}
_15 = $tmp236->methods[0];
_16 = _15(_14);
_17 = _16;
goto block1;
block1:;
_19 = _17;
ITable* $tmp237 = _19->$class->itable;
while ($tmp237->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp237 = $tmp237->next;
}
_20 = $tmp237->methods[0];
_21 = _20(_19);
_22 = _21.value;
if (_22) goto block3; else goto block2;
block2:;
_24 = _17;
ITable* $tmp238 = _24->$class->itable;
while ($tmp238->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp238 = $tmp238->next;
}
_25 = $tmp238->methods[1];
_26 = _25(_24);
_27 = ((frost$core$Char32$wrapper*) _26)->value;
*(&local1) = _27;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:380
_30 = &param0->random;
_31 = *_30;
ITable* $tmp239 = _31->$class->itable;
while ($tmp239->$class != (frost$core$Class*) &frost$math$Random$class) {
    $tmp239 = $tmp239->next;
}
_32 = $tmp239->methods[5];
_33 = _32(_31);
*(&local2) = _33;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:381
_36 = *(&local2);
_37 = (frost$core$Real64) {0.45};
_38 = _36.value;
_39 = _37.value;
_40 = _38 < _39;
_41 = (frost$core$Bit) {_40};
_42 = _41.value;
if (_42) goto block4; else goto block6;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:382
_45 = *(&local0);
frost$core$MutableString$append$frost$core$String(_45, &$s240);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:383
_48 = *(&local0);
_49 = *(&local1);
// begin inline call to function frost.core.Char32.get_asInt32():frost.core.Int32 from Markdown.frost:383:33
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:106
_52 = _49.value;
_53 = (frost$core$Int32) {_52};
frost$core$Int32$wrapper* $tmp241;
$tmp241 = (frost$core$Int32$wrapper*) frostObjectAlloc(20, (frost$core$Class*) &frost$core$Int32$wrapperclass);
$tmp241->value = _53;
_55 = ((frost$core$Object*) $tmp241);
// begin inline call to method frost.core.MutableString.append(o:frost.core.Object) from Markdown.frost:383:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:150
_58 = ($fn242) _55->$class->vtable[0];
_59 = _58(_55);
frost$core$MutableString$append$frost$core$String(_48, _59);
_61 = ((frost$core$Object*) _59);
frost$core$Frost$unref$frost$core$Object$Q(_61);
_64 = _55;
frost$core$Frost$unref$frost$core$Object$Q(_64);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:384
_67 = *(&local0);
frost$core$MutableString$append$frost$core$String(_67, &$s243);
goto block5;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:386
_71 = *(&local2);
_72 = (frost$core$Real64) {0.9};
_73 = _71.value;
_74 = _72.value;
_75 = _73 < _74;
_76 = (frost$core$Bit) {_75};
_77 = _76.value;
if (_77) goto block9; else goto block11;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:387
_80 = *(&local0);
frost$core$MutableString$append$frost$core$String(_80, &$s244);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:388
_83 = *(&local0);
_84 = *(&local1);
// begin inline call to function frost.core.Char32.get_asInt32():frost.core.Int32 from Markdown.frost:388:33
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:106
_87 = _84.value;
_88 = (frost$core$Int32) {_87};
// begin inline call to function frost.core.Int32.format(fmt:frost.core.String):frost.core.String from Markdown.frost:388:48
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:1058
_92 = _88.value;
_93 = _92 < 0u;
_94 = (frost$core$Bit) {_93};
// begin inline call to function frost.core.Int32.get_abs():frost.core.Int32 from Int32.frost:1058:40
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:730
_97 = (frost$core$Int32) {0u};
_98 = _88.value;
_99 = _97.value;
_100 = _98 < _99;
_101 = (frost$core$Bit) {_100};
_102 = _101.value;
if (_102) goto block15; else goto block16;
block15:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:731
_105 = frost$core$Int32$$SUB$R$frost$core$Int32(_88);
*(&local3) = _105;
goto block14;
block16:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:733
*(&local3) = _88;
goto block14;
block14:;
_111 = *(&local3);
// begin inline call to function frost.core.Int32.get_asUInt64():frost.core.UInt64 from Int32.frost:1058:43
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:1008
_114 = _111.value;
_115 = ((uint64_t) _114);
_116 = (frost$core$UInt64) {_115};
_118 = (frost$core$UInt64) {4294967295u};
_119 = frost$core$Frost$format$frost$core$Bit$frost$core$UInt64$frost$core$UInt64$frost$core$String$R$frost$core$String(_94, _116, _118, &$s245);
_120 = ((frost$core$Object*) _119);
frost$core$Frost$ref$frost$core$Object$Q(_120);
_122 = ((frost$core$Object*) _119);
frost$core$Frost$unref$frost$core$Object$Q(_122);
frost$core$MutableString$append$frost$core$String(_83, _119);
_126 = ((frost$core$Object*) _119);
frost$core$Frost$unref$frost$core$Object$Q(_126);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:389
_129 = *(&local0);
frost$core$MutableString$append$frost$core$String(_129, &$s246);
goto block10;
block11:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:392
_134 = *(&local0);
_135 = *(&local1);
frost$core$MutableString$append$frost$core$Char32(_134, _135);
goto block10;
block10:;
goto block5;
block5:;
_139 = _26;
frost$core$Frost$unref$frost$core$Object$Q(_139);
goto block1;
block3:;
_142 = ((frost$core$Object*) _16);
frost$core$Frost$unref$frost$core$Object$Q(_142);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:395
_145 = *(&local0);
_146 = ((frost$core$Object*) _145);
_147 = ($fn247) _146->$class->vtable[0];
_148 = _147(_146);
_149 = ((frost$core$Object*) _148);
frost$core$Frost$ref$frost$core$Object$Q(_149);
_151 = ((frost$core$Object*) _148);
frost$core$Frost$unref$frost$core$Object$Q(_151);
_153 = *(&local0);
_154 = ((frost$core$Object*) _153);
frost$core$Frost$unref$frost$core$Object$Q(_154);
*(&local0) = ((frost$core$MutableString*) NULL);
return _148;

}
void org$frostlang$frostc$frostdoc$Markdown$doBlockQuotes$frost$core$MutableString(org$frostlang$frostc$frostdoc$Markdown* param0, frost$core$MutableString* param1) {

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
FROST_ASSERT(24 == sizeof(frost$core$RegularExpression));
_1 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
_2 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s248, &$s249);
_3 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_2, &$s250);
_4 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_3, &$s251);
_5 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_4, &$s252);
_6 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_5, &$s253);
_7 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_6, &$s254);
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
FROST_ASSERT(24 == sizeof(org$frostlang$frostc$frostdoc$Markdown$_Closure9));
_33 = (org$frostlang$frostc$frostdoc$Markdown$_Closure9*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$frostdoc$Markdown$_Closure9$class);
org$frostlang$frostc$frostdoc$Markdown$_Closure9$init$org$frostlang$frostc$frostdoc$Markdown(_33, param0);
_35 = ((frost$core$Int8*) org$frostlang$frostc$frostdoc$Markdown$_Closure9$$anonymous7$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$Object);
FROST_ASSERT(32 == sizeof(frost$core$MutableMethod));
_36 = (frost$core$MutableMethod*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$MutableMethod$class);
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
frost$collections$ListView* _1;
frost$core$Int _2;
$fn256 _3;
frost$core$Object* _4;
frost$core$String* _5;
frost$core$Object* _7;
frost$core$String* _9;
frost$core$Object* _10;
frost$core$Object* _13;
frost$core$String* _16;
bool _17;
frost$core$Bit _18;
bool _19;
frost$core$Int _21;
frost$core$String* _24;
frost$collections$Iterable* _27;
$fn257 _28;
frost$collections$Iterator* _29;
frost$collections$Iterator* _30;
frost$collections$Iterator* _31;
$fn258 _32;
frost$core$Int _33;
frost$core$Object* _34;
frost$core$MutableString* _39;
frost$core$String* _40;
bool _41;
frost$core$Bit _42;
bool _43;
frost$core$Int _45;
frost$core$String* _48;
frost$core$Object* _51;
frost$core$MutableString* _53;
frost$core$Object* _54;
frost$core$Object* _57;
frost$core$MutableString* _62;
frost$core$Int _65;
frost$core$Int _66;
int64_t _67;
int64_t _68;
int64_t _69;
frost$core$Int _70;
frost$core$Int _73;
frost$core$Int _74;
int64_t _77;
int64_t _78;
int64_t _79;
frost$core$Int _80;
frost$core$Int _82;
int64_t _83;
int64_t _84;
bool _85;
frost$core$Bit _86;
bool _87;
frost$core$MutableString* _90;
frost$core$Object* _91;
$fn259 _92;
frost$core$String* _93;
frost$core$Object* _94;
frost$core$Object* _96;
frost$core$MutableString* _98;
frost$core$Object* _99;
frost$core$String* _102;
frost$core$Object* _103;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:423
_1 = param0;
_2 = (frost$core$Int) {1u};
ITable* $tmp260 = _1->$class->itable;
while ($tmp260->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp260 = $tmp260->next;
}
_3 = $tmp260->methods[0];
_4 = _3(_1, _2);
_5 = ((frost$core$String*) _4);
*(&local0) = ((frost$core$String*) NULL);
_7 = ((frost$core$Object*) _5);
frost$core$Frost$ref$frost$core$Object$Q(_7);
_9 = *(&local0);
_10 = ((frost$core$Object*) _9);
frost$core$Frost$unref$frost$core$Object$Q(_10);
*(&local0) = _5;
_13 = _4;
frost$core$Frost$unref$frost$core$Object$Q(_13);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:424
_16 = *(&local0);
_17 = _16 != NULL;
_18 = (frost$core$Bit) {_17};
_19 = _18.value;
if (_19) goto block1; else goto block2;
block2:;
_21 = (frost$core$Int) {424u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s261, _21, &$s262);
abort(); // unreachable
block1:;
_24 = _16;
// begin inline call to function frost.core.String.get_length():frost.core.Int from Markdown.frost:424:35
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:485
_27 = ((frost$collections$Iterable*) _24);
ITable* $tmp263 = _27->$class->itable;
while ($tmp263->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp263 = $tmp263->next;
}
_28 = $tmp263->methods[0];
_29 = _28(_27);
_30 = _29;
_31 = _30;
ITable* $tmp264 = _31->$class->itable;
while ($tmp264->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp264 = $tmp264->next;
}
_32 = $tmp264->methods[2];
_33 = _32(_31);
_34 = ((frost$core$Object*) _29);
frost$core$Frost$unref$frost$core$Object$Q(_34);
*(&local1) = _33;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:425
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
_39 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
_40 = *(&local0);
_41 = _40 != NULL;
_42 = (frost$core$Bit) {_41};
_43 = _42.value;
if (_43) goto block4; else goto block5;
block5:;
_45 = (frost$core$Int) {425u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s265, _45, &$s266);
abort(); // unreachable
block4:;
_48 = _40;
frost$core$MutableString$init$frost$core$String(_39, _48);
*(&local2) = ((frost$core$MutableString*) NULL);
_51 = ((frost$core$Object*) _39);
frost$core$Frost$ref$frost$core$Object$Q(_51);
_53 = *(&local2);
_54 = ((frost$core$Object*) _53);
frost$core$Frost$unref$frost$core$Object$Q(_54);
*(&local2) = _39;
_57 = ((frost$core$Object*) _39);
frost$core$Frost$unref$frost$core$Object$Q(_57);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:426
goto block6;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:427
_62 = *(&local2);
frost$core$MutableString$append$frost$core$String(_62, &$s267);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:428
_65 = *(&local1);
_66 = (frost$core$Int) {1u};
_67 = _65.value;
_68 = _66.value;
_69 = _67 + _68;
_70 = (frost$core$Int) {_69};
*(&local1) = _70;
_73 = *(&local1);
_74 = (frost$core$Int) {4u};
// begin inline call to function frost.core.Int.%(other:frost.core.Int):frost.core.Int from Markdown.frost:430:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:198
_77 = _73.value;
_78 = _74.value;
_79 = _77 % _78;
_80 = (frost$core$Int) {_79};
_82 = (frost$core$Int) {0u};
_83 = _80.value;
_84 = _82.value;
_85 = _83 != _84;
_86 = (frost$core$Bit) {_85};
_87 = _86.value;
if (_87) goto block6; else goto block8;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:431
_90 = *(&local2);
_91 = ((frost$core$Object*) _90);
_92 = ($fn268) _91->$class->vtable[0];
_93 = _92(_91);
_94 = ((frost$core$Object*) _93);
frost$core$Frost$ref$frost$core$Object$Q(_94);
_96 = ((frost$core$Object*) _93);
frost$core$Frost$unref$frost$core$Object$Q(_96);
_98 = *(&local2);
_99 = ((frost$core$Object*) _98);
frost$core$Frost$unref$frost$core$Object$Q(_99);
*(&local2) = ((frost$core$MutableString*) NULL);
_102 = *(&local0);
_103 = ((frost$core$Object*) _102);
frost$core$Frost$unref$frost$core$Object$Q(_103);
*(&local0) = ((frost$core$String*) NULL);
return _93;

}
void org$frostlang$frostc$frostdoc$Markdown$detabify$frost$core$MutableString(org$frostlang$frostc$frostdoc$Markdown* param0, frost$core$MutableString* param1) {

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
FROST_ASSERT(24 == sizeof(frost$core$RegularExpression));
_1 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String(_1, &$s269);
_3 = ((frost$core$Int8*) org$frostlang$frostc$frostdoc$Markdown$$anonymous10$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$String);
FROST_ASSERT(32 == sizeof(frost$core$Method));
_4 = (frost$core$Method*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$Method$class);
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
$fn271 _9;
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
FROST_ASSERT(24 == sizeof(frost$core$RegularExpression));
_1 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String(_1, &$s272);
// begin inline call to method frost.core.MutableString.replace(search:frost.core.RegularExpression, replacement:frost.core.String) from Markdown.frost:437:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:401
_5 = (frost$core$Bit) {true};
// begin inline call to method frost.core.MutableString.replace(search:frost.core.RegularExpression, replacement:frost.core.String, allowGroupReferences:frost.core.Bit) from MutableString.frost:401:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:406
_8 = ((frost$core$Object*) param0);
_9 = ($fn273) _8->$class->vtable[0];
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
frost$core$Matcher$appendReplacement$frost$core$MutableString$frost$core$String$frost$core$Bit(_32, param0, &$s274, _5);
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
void org$frostlang$frostc$frostdoc$Markdown$doCodeBlocks$frost$core$MutableString(org$frostlang$frostc$frostdoc$Markdown* param0, frost$core$MutableString* param1) {

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
FROST_ASSERT(24 == sizeof(frost$core$RegularExpression));
_1 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
_2 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s275, &$s276);
_3 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_2, &$s277);
_4 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_3, &$s278);
_5 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_4, &$s279);
_6 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_5, &$s280);
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
FROST_ASSERT(24 == sizeof(org$frostlang$frostc$frostdoc$Markdown$CodeReplacer));
_30 = (org$frostlang$frostc$frostdoc$Markdown$CodeReplacer*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$frostdoc$Markdown$CodeReplacer$class);
org$frostlang$frostc$frostdoc$Markdown$CodeReplacer$init$org$frostlang$frostc$frostdoc$Markdown(_30, param0);
*(&local1) = ((org$frostlang$frostc$frostdoc$Markdown$CodeReplacer*) NULL);
_33 = ((frost$core$Object*) _30);
frost$core$Frost$ref$frost$core$Object$Q(_33);
_35 = *(&local1);
_36 = ((frost$core$Object*) _35);
frost$core$Frost$unref$frost$core$Object$Q(_36);
*(&local1) = _30;
FROST_ASSERT(24 == sizeof(org$frostlang$frostc$frostdoc$Markdown$_Closure12));
_39 = (org$frostlang$frostc$frostdoc$Markdown$_Closure12*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$frostdoc$Markdown$_Closure12$class);
_40 = *(&local1);
org$frostlang$frostc$frostdoc$Markdown$_Closure12$init$org$frostlang$frostc$frostdoc$Markdown$CodeReplacer(_39, _40);
_42 = ((frost$core$Int8*) org$frostlang$frostc$frostdoc$Markdown$_Closure12$$anonymous11$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$String);
FROST_ASSERT(32 == sizeof(frost$core$MutableMethod));
_43 = (frost$core$MutableMethod*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$MutableMethod$class);
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
frost$core$String* org$frostlang$frostc$frostdoc$Markdown$prettyPrint$org$frostlang$frostc$parser$Parser$R$frost$core$String(org$frostlang$frostc$frostdoc$Markdown* param0, org$frostlang$frostc$parser$Parser* param1) {

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
frost$collections$Iterable* _37;
$fn282 _38;
frost$collections$Iterator* _39;
frost$collections$Iterator* _40;
frost$collections$Iterator* _42;
$fn283 _43;
frost$core$Bit _44;
bool _45;
frost$collections$Iterator* _48;
$fn284 _49;
frost$core$Object* _50;
org$frostlang$frostc$Pair* _51;
frost$core$Object* _52;
org$frostlang$frostc$Pair* _54;
frost$core$Object* _55;
org$frostlang$frostc$Pair* _59;
org$frostlang$frostc$Pair* _60;
frost$core$Object** _61;
frost$core$Object* _62;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind _63;
frost$core$Equatable* _64;
frost$core$Equatable* _65;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind _66;
frost$core$Equatable* _67;
$fn285 _68;
frost$core$Bit _69;
bool _70;
frost$core$Object* _71;
frost$core$Object* _73;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind _76;
frost$core$Equatable* _77;
frost$core$Equatable* _78;
frost$core$Int _79;
frost$core$Int* _82;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind _84;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind _87;
frost$core$Equatable* _88;
$fn286 _89;
frost$core$Bit _90;
bool _91;
frost$core$Object* _92;
frost$core$Object* _94;
frost$core$MutableString* _98;
org$frostlang$frostc$Pair* _102;
org$frostlang$frostc$Pair* _103;
frost$core$Object** _104;
frost$core$Object* _105;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind _106;
frost$core$Equatable* _107;
frost$core$Equatable* _108;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind _109;
frost$core$Equatable* _110;
$fn287 _111;
frost$core$Bit _112;
bool _113;
frost$core$Object* _114;
frost$core$Object* _116;
org$frostlang$frostc$Pair* _120;
org$frostlang$frostc$Pair* _121;
frost$core$Object** _122;
frost$core$Object* _123;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind _124;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind _127;
frost$core$Int _128;
frost$core$Int _129;
int64_t _132;
int64_t _133;
bool _134;
frost$core$Bit _135;
bool _137;
frost$core$Int _140;
int64_t _143;
int64_t _144;
bool _145;
frost$core$Bit _146;
bool _148;
frost$core$Int _150;
int64_t _153;
int64_t _154;
bool _155;
frost$core$Bit _156;
bool _158;
frost$core$MutableString* _161;
frost$core$Int _164;
int64_t _167;
int64_t _168;
bool _169;
frost$core$Bit _170;
bool _172;
frost$core$MutableString* _175;
frost$core$Int _178;
int64_t _181;
int64_t _182;
bool _183;
frost$core$Bit _184;
bool _186;
frost$core$MutableString* _189;
frost$core$Int _192;
int64_t _195;
int64_t _196;
bool _197;
frost$core$Bit _198;
bool _200;
frost$core$MutableString* _203;
frost$core$Int _206;
int64_t _209;
int64_t _210;
bool _211;
frost$core$Bit _212;
bool _214;
frost$core$MutableString* _217;
frost$core$Int _220;
int64_t _223;
int64_t _224;
bool _225;
frost$core$Bit _226;
bool _228;
frost$core$MutableString* _231;
frost$core$Int _234;
int64_t _237;
int64_t _238;
bool _239;
frost$core$Bit _240;
bool _242;
frost$core$MutableString* _245;
frost$core$Int _248;
int64_t _251;
int64_t _252;
bool _253;
frost$core$Bit _254;
bool _256;
frost$core$MutableString* _259;
frost$core$Int _262;
int64_t _265;
int64_t _266;
bool _267;
frost$core$Bit _268;
bool _270;
frost$core$MutableString* _273;
frost$core$Int _276;
int64_t _279;
int64_t _280;
bool _281;
frost$core$Bit _282;
bool _284;
frost$core$MutableString* _287;
frost$core$Int _290;
int64_t _293;
int64_t _294;
bool _295;
frost$core$Bit _296;
bool _298;
frost$core$MutableString* _301;
frost$core$Int _305;
frost$core$MutableString* _310;
org$frostlang$frostc$Pair* _311;
org$frostlang$frostc$Pair* _312;
frost$core$Object** _313;
frost$core$Object* _314;
org$frostlang$frostc$parser$Token _315;
frost$core$String** _318;
frost$core$String* _319;
frost$core$String$Index _320;
frost$core$String$Index _321;
frost$core$Bit _322;
frost$core$Range$LTfrost$core$String$Index$GT _323;
frost$core$String* _324;
frost$core$Object* _325;
frost$core$Object* _327;
frost$core$Object* _332;
frost$core$MutableString* _334;
frost$core$Object* _335;
frost$core$Object* _338;
frost$core$Object* _340;
frost$core$MutableString* _343;
frost$core$MutableString* _346;
frost$core$MutableString* _349;
frost$core$MutableString* _352;
org$frostlang$frostc$frostdoc$Protector** _353;
org$frostlang$frostc$frostdoc$Protector* _354;
$fn288 _355;
frost$core$String* _356;
frost$core$Object* _358;
frost$core$MutableString* _361;
org$frostlang$frostc$frostdoc$Protector** _362;
org$frostlang$frostc$frostdoc$Protector* _363;
$fn289 _364;
frost$core$String* _365;
frost$core$Object* _367;
frost$core$MutableString* _370;
org$frostlang$frostc$frostdoc$Protector** _371;
org$frostlang$frostc$frostdoc$Protector* _372;
$fn290 _373;
frost$core$String* _374;
frost$core$Object* _376;
frost$core$MutableString* _379;
org$frostlang$frostc$frostdoc$Protector** _380;
org$frostlang$frostc$frostdoc$Protector* _381;
$fn291 _382;
frost$core$String* _383;
frost$core$Object* _385;
frost$core$MutableString* _388;
org$frostlang$frostc$frostdoc$Protector** _389;
org$frostlang$frostc$frostdoc$Protector* _390;
$fn292 _391;
frost$core$String* _392;
frost$core$Object* _394;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind _397;
frost$core$Equatable* _398;
frost$core$Equatable* _399;
frost$core$Int _400;
frost$core$Int* _403;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind _405;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind _408;
frost$core$Equatable* _409;
$fn293 _410;
frost$core$Bit _411;
bool _412;
frost$core$Object* _413;
frost$core$Object* _415;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind _418;
frost$core$Equatable* _419;
frost$core$Equatable* _420;
frost$core$Int _421;
frost$core$Int* _424;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind _426;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind _429;
frost$core$Equatable* _430;
$fn294 _431;
frost$core$Bit _432;
bool _433;
frost$core$Object* _434;
frost$core$Object* _436;
frost$core$MutableString* _440;
org$frostlang$frostc$Pair* _441;
org$frostlang$frostc$Pair* _442;
frost$core$Object** _443;
frost$core$Object* _444;
org$frostlang$frostc$parser$Token _445;
org$frostlang$frostc$parser$Token$Kind _446;
frost$core$Object* _447;
$fn295 _450;
frost$core$String* _451;
frost$core$String* _452;
frost$core$Object* _453;
frost$core$Object* _455;
frost$core$Object* _457;
frost$core$String* _460;
frost$core$Object* _462;
frost$core$Object* _464;
frost$core$Object* _466;
frost$core$MutableString* _470;
frost$core$MutableString* _471;
frost$core$Object* _472;
$fn296 _475;
frost$core$String* _476;
frost$core$Object* _478;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind _482;
frost$core$Equatable* _483;
frost$core$Equatable* _484;
frost$core$Int _485;
frost$core$Int* _488;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind _490;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind _493;
frost$core$Equatable* _494;
$fn297 _495;
frost$core$Bit _496;
bool _497;
frost$core$Object* _498;
frost$core$Object* _500;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind _503;
frost$core$Equatable* _504;
frost$core$Equatable* _505;
frost$core$Int _506;
frost$core$Int* _509;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind _511;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind _514;
frost$core$Equatable* _515;
$fn298 _516;
frost$core$Bit _517;
bool _518;
frost$core$Object* _519;
frost$core$Object* _521;
frost$core$MutableString* _525;
frost$core$MutableString* _528;
frost$core$Object* _529;
frost$core$Object* _532;
org$frostlang$frostc$Pair* _534;
frost$core$Object* _535;
frost$core$Object* _539;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind _542;
frost$core$Equatable* _543;
frost$core$Equatable* _544;
frost$core$Int _545;
frost$core$Int* _548;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind _550;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind _553;
frost$core$Equatable* _554;
$fn299 _555;
frost$core$Bit _556;
bool _557;
frost$core$Object* _558;
frost$core$Object* _560;
frost$core$MutableString* _564;
frost$core$MutableString* _568;
frost$core$MutableString* _571;
frost$core$String* _572;
frost$core$Object* _573;
frost$core$Object* _575;
frost$core$MutableString* _577;
frost$core$Object* _578;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:505
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
_1 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init$frost$core$String(_1, &$s300);
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
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s301, _30, &$s302);
abort(); // unreachable
block2:;
_33 = _25;
_34 = &_33->tokens;
_35 = *_34;
_36 = ((frost$collections$Iterable*) _35);
_37 = _36;
ITable* $tmp303 = _37->$class->itable;
while ($tmp303->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp303 = $tmp303->next;
}
_38 = $tmp303->methods[0];
_39 = _38(_37);
_40 = _39;
goto block4;
block4:;
_42 = _40;
ITable* $tmp304 = _42->$class->itable;
while ($tmp304->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp304 = $tmp304->next;
}
_43 = $tmp304->methods[0];
_44 = _43(_42);
_45 = _44.value;
if (_45) goto block6; else goto block5;
block5:;
*(&local4) = ((org$frostlang$frostc$Pair*) NULL);
_48 = _40;
ITable* $tmp305 = _48->$class->itable;
while ($tmp305->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp305 = $tmp305->next;
}
_49 = $tmp305->methods[1];
_50 = _49(_48);
_51 = ((org$frostlang$frostc$Pair*) _50);
_52 = ((frost$core$Object*) _51);
frost$core$Frost$ref$frost$core$Object$Q(_52);
_54 = *(&local4);
_55 = ((frost$core$Object*) _54);
frost$core$Frost$unref$frost$core$Object$Q(_55);
*(&local4) = _51;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:508
_59 = *(&local4);
_60 = _59;
_61 = &_60->second;
_62 = *_61;
_63 = ((org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) _62)->value;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp306;
$tmp306 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp306->value = _63;
_64 = ((frost$core$Equatable*) $tmp306);
_65 = _64;
_66 = *(&local3);
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp307;
$tmp307 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp307->value = _66;
_67 = ((frost$core$Equatable*) $tmp307);
ITable* $tmp308 = _65->$class->itable;
while ($tmp308->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp308 = $tmp308->next;
}
_68 = $tmp308->methods[1];
_69 = _68(_65, _67);
_70 = _69.value;
_71 = ((frost$core$Object*) _67);
frost$core$Frost$unref$frost$core$Object$Q(_71);
_73 = ((frost$core$Object*) _64);
frost$core$Frost$unref$frost$core$Object$Q(_73);
if (_70) goto block9; else goto block8;
block9:;
_76 = *(&local3);
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp309;
$tmp309 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp309->value = _76;
_77 = ((frost$core$Equatable*) $tmp309);
_78 = _77;
_79 = (frost$core$Int) {0u};
// begin inline call to org.frostlang.frostc.parser.SyntaxHighlighter.Kind.init(rv:frost.core.Int):org.frostlang.frostc.parser.SyntaxHighlighter.Kind from Markdown.frost:508:71
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:6
_82 = &(&local6)->$rawValue;
*_82 = _79;
_84 = *(&local6);
*(&local5) = _84;
_87 = *(&local5);
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp310;
$tmp310 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp310->value = _87;
_88 = ((frost$core$Equatable*) $tmp310);
ITable* $tmp311 = _78->$class->itable;
while ($tmp311->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp311 = $tmp311->next;
}
_89 = $tmp311->methods[1];
_90 = _89(_78, _88);
_91 = _90.value;
_92 = ((frost$core$Object*) _88);
frost$core$Frost$unref$frost$core$Object$Q(_92);
_94 = ((frost$core$Object*) _77);
frost$core$Frost$unref$frost$core$Object$Q(_94);
if (_91) goto block7; else goto block8;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:509
_98 = *(&local0);
frost$core$MutableString$append$frost$core$String(_98, &$s312);
goto block8;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:511
_102 = *(&local4);
_103 = _102;
_104 = &_103->second;
_105 = *_104;
_106 = ((org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) _105)->value;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp313;
$tmp313 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp313->value = _106;
_107 = ((frost$core$Equatable*) $tmp313);
_108 = _107;
_109 = *(&local3);
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp314;
$tmp314 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp314->value = _109;
_110 = ((frost$core$Equatable*) $tmp314);
ITable* $tmp315 = _108->$class->itable;
while ($tmp315->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp315 = $tmp315->next;
}
_111 = $tmp315->methods[1];
_112 = _111(_108, _110);
_113 = _112.value;
_114 = ((frost$core$Object*) _110);
frost$core$Frost$unref$frost$core$Object$Q(_114);
_116 = ((frost$core$Object*) _107);
frost$core$Frost$unref$frost$core$Object$Q(_116);
if (_113) goto block11; else goto block12;
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:512
_120 = *(&local4);
_121 = _120;
_122 = &_121->second;
_123 = *_122;
_124 = ((org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) _123)->value;
*(&local3) = _124;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:513
_127 = *(&local3);
_128 = _127.$rawValue;
_129 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Markdown.frost:514:48
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_132 = _128.value;
_133 = _129.value;
_134 = _132 == _133;
_135 = (frost$core$Bit) {_134};
_137 = _135.value;
if (_137) goto block14; else goto block15;
block14:;
goto block13;
block15:;
_140 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Markdown.frost:517:48
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_143 = _128.value;
_144 = _140.value;
_145 = _143 == _144;
_146 = (frost$core$Bit) {_145};
_148 = _146.value;
if (_148) goto block17; else goto block18;
block18:;
_150 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Markdown.frost:517:80
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_153 = _128.value;
_154 = _150.value;
_155 = _153 == _154;
_156 = (frost$core$Bit) {_155};
_158 = _156.value;
if (_158) goto block17; else goto block20;
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:518
_161 = *(&local0);
frost$core$MutableString$append$frost$core$String(_161, &$s316);
goto block13;
block20:;
_164 = (frost$core$Int) {3u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Markdown.frost:520:48
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_167 = _128.value;
_168 = _164.value;
_169 = _167 == _168;
_170 = (frost$core$Bit) {_169};
_172 = _170.value;
if (_172) goto block22; else goto block23;
block22:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:521
_175 = *(&local0);
frost$core$MutableString$append$frost$core$String(_175, &$s317);
goto block13;
block23:;
_178 = (frost$core$Int) {4u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Markdown.frost:523:48
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_181 = _128.value;
_182 = _178.value;
_183 = _181 == _182;
_184 = (frost$core$Bit) {_183};
_186 = _184.value;
if (_186) goto block25; else goto block26;
block25:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:524
_189 = *(&local0);
frost$core$MutableString$append$frost$core$String(_189, &$s318);
goto block13;
block26:;
_192 = (frost$core$Int) {5u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Markdown.frost:526:48
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_195 = _128.value;
_196 = _192.value;
_197 = _195 == _196;
_198 = (frost$core$Bit) {_197};
_200 = _198.value;
if (_200) goto block28; else goto block29;
block28:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:527
_203 = *(&local0);
frost$core$MutableString$append$frost$core$String(_203, &$s319);
goto block13;
block29:;
_206 = (frost$core$Int) {6u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Markdown.frost:529:48
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_209 = _128.value;
_210 = _206.value;
_211 = _209 == _210;
_212 = (frost$core$Bit) {_211};
_214 = _212.value;
if (_214) goto block31; else goto block32;
block31:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:530
_217 = *(&local0);
frost$core$MutableString$append$frost$core$String(_217, &$s320);
goto block13;
block32:;
_220 = (frost$core$Int) {7u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Markdown.frost:532:48
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_223 = _128.value;
_224 = _220.value;
_225 = _223 == _224;
_226 = (frost$core$Bit) {_225};
_228 = _226.value;
if (_228) goto block34; else goto block35;
block34:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:533
_231 = *(&local0);
frost$core$MutableString$append$frost$core$String(_231, &$s321);
goto block13;
block35:;
_234 = (frost$core$Int) {8u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Markdown.frost:535:48
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_237 = _128.value;
_238 = _234.value;
_239 = _237 == _238;
_240 = (frost$core$Bit) {_239};
_242 = _240.value;
if (_242) goto block37; else goto block38;
block37:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:536
_245 = *(&local0);
frost$core$MutableString$append$frost$core$String(_245, &$s322);
goto block13;
block38:;
_248 = (frost$core$Int) {9u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Markdown.frost:538:48
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_251 = _128.value;
_252 = _248.value;
_253 = _251 == _252;
_254 = (frost$core$Bit) {_253};
_256 = _254.value;
if (_256) goto block40; else goto block41;
block40:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:539
_259 = *(&local0);
frost$core$MutableString$append$frost$core$String(_259, &$s323);
goto block13;
block41:;
_262 = (frost$core$Int) {10u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Markdown.frost:541:48
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_265 = _128.value;
_266 = _262.value;
_267 = _265 == _266;
_268 = (frost$core$Bit) {_267};
_270 = _268.value;
if (_270) goto block43; else goto block44;
block43:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:542
_273 = *(&local0);
frost$core$MutableString$append$frost$core$String(_273, &$s324);
goto block13;
block44:;
_276 = (frost$core$Int) {11u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Markdown.frost:544:48
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_279 = _128.value;
_280 = _276.value;
_281 = _279 == _280;
_282 = (frost$core$Bit) {_281};
_284 = _282.value;
if (_284) goto block46; else goto block47;
block46:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:545
_287 = *(&local0);
frost$core$MutableString$append$frost$core$String(_287, &$s325);
goto block13;
block47:;
_290 = (frost$core$Int) {12u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Markdown.frost:547:48
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_293 = _128.value;
_294 = _290.value;
_295 = _293 == _294;
_296 = (frost$core$Bit) {_295};
_298 = _296.value;
if (_298) goto block49; else goto block50;
block49:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:548
_301 = *(&local0);
frost$core$MutableString$append$frost$core$String(_301, &$s326);
goto block13;
block50:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:551
_305 = (frost$core$Int) {551u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s327, _305);
abort(); // unreachable
block13:;
goto block12;
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:555
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
_310 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
_311 = *(&local4);
_312 = _311;
_313 = &_312->first;
_314 = *_313;
_315 = ((org$frostlang$frostc$parser$Token$wrapper*) _314)->value;
// begin inline call to function org.frostlang.frostc.parser.Parser.text(token:org.frostlang.frostc.parser.Token):frost.core.String from Markdown.frost:555:47
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/Parser.frost:227
_318 = &param1->source;
_319 = *_318;
_320 = _315.start;
_321 = _315.end;
_322 = (frost$core$Bit) {false};
_323 = frost$core$Range$LTfrost$core$String$Index$GT$init$frost$core$String$Index$frost$core$String$Index$frost$core$Bit(_320, _321, _322);
_324 = frost$core$String$substring$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String(_319, _323);
_325 = ((frost$core$Object*) _324);
frost$core$Frost$ref$frost$core$Object$Q(_325);
_327 = ((frost$core$Object*) _324);
frost$core$Frost$unref$frost$core$Object$Q(_327);
frost$core$MutableString$init$frost$core$String(_310, _324);
*(&local7) = ((frost$core$MutableString*) NULL);
_332 = ((frost$core$Object*) _310);
frost$core$Frost$ref$frost$core$Object$Q(_332);
_334 = *(&local7);
_335 = ((frost$core$Object*) _334);
frost$core$Frost$unref$frost$core$Object$Q(_335);
*(&local7) = _310;
_338 = ((frost$core$Object*) _324);
frost$core$Frost$unref$frost$core$Object$Q(_338);
_340 = ((frost$core$Object*) _310);
frost$core$Frost$unref$frost$core$Object$Q(_340);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:556
_343 = *(&local7);
frost$core$MutableString$replace$frost$core$String$frost$core$String(_343, &$s328, &$s329);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:557
_346 = *(&local7);
frost$core$MutableString$replace$frost$core$String$frost$core$String(_346, &$s330, &$s331);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:558
_349 = *(&local7);
frost$core$MutableString$replace$frost$core$String$frost$core$String(_349, &$s332, &$s333);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:559
_352 = *(&local7);
_353 = &param0->charProtector;
_354 = *_353;
_355 = ($fn334) _354->$class->vtable[2];
_356 = _355(_354, &$s335);
frost$core$MutableString$replace$frost$core$String$frost$core$String(_352, &$s336, _356);
_358 = ((frost$core$Object*) _356);
frost$core$Frost$unref$frost$core$Object$Q(_358);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:560
_361 = *(&local7);
_362 = &param0->charProtector;
_363 = *_362;
_364 = ($fn337) _363->$class->vtable[2];
_365 = _364(_363, &$s338);
frost$core$MutableString$replace$frost$core$String$frost$core$String(_361, &$s339, _365);
_367 = ((frost$core$Object*) _365);
frost$core$Frost$unref$frost$core$Object$Q(_367);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:561
_370 = *(&local7);
_371 = &param0->charProtector;
_372 = *_371;
_373 = ($fn340) _372->$class->vtable[2];
_374 = _373(_372, &$s341);
frost$core$MutableString$replace$frost$core$String$frost$core$String(_370, &$s342, _374);
_376 = ((frost$core$Object*) _374);
frost$core$Frost$unref$frost$core$Object$Q(_376);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:562
_379 = *(&local7);
_380 = &param0->charProtector;
_381 = *_380;
_382 = ($fn343) _381->$class->vtable[2];
_383 = _382(_381, &$s344);
frost$core$MutableString$replace$frost$core$String$frost$core$String(_379, &$s345, _383);
_385 = ((frost$core$Object*) _383);
frost$core$Frost$unref$frost$core$Object$Q(_385);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:563
_388 = *(&local7);
_389 = &param0->charProtector;
_390 = *_389;
_391 = ($fn346) _390->$class->vtable[2];
_392 = _391(_390, &$s347);
frost$core$MutableString$replace$frost$core$String$frost$core$String(_388, &$s348, _392);
_394 = ((frost$core$Object*) _392);
frost$core$Frost$unref$frost$core$Object$Q(_394);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:564
_397 = *(&local3);
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp349;
$tmp349 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp349->value = _397;
_398 = ((frost$core$Equatable*) $tmp349);
_399 = _398;
_400 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.parser.SyntaxHighlighter.Kind.init(rv:frost.core.Int):org.frostlang.frostc.parser.SyntaxHighlighter.Kind from Markdown.frost:564:49
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:6
_403 = &(&local9)->$rawValue;
*_403 = _400;
_405 = *(&local9);
*(&local8) = _405;
_408 = *(&local8);
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp350;
$tmp350 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp350->value = _408;
_409 = ((frost$core$Equatable*) $tmp350);
ITable* $tmp351 = _399->$class->itable;
while ($tmp351->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp351 = $tmp351->next;
}
_410 = $tmp351->methods[1];
_411 = _410(_399, _409);
_412 = _411.value;
_413 = ((frost$core$Object*) _409);
frost$core$Frost$unref$frost$core$Object$Q(_413);
_415 = ((frost$core$Object*) _398);
frost$core$Frost$unref$frost$core$Object$Q(_415);
if (_412) goto block55; else goto block54;
block55:;
_418 = *(&local3);
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp352;
$tmp352 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp352->value = _418;
_419 = ((frost$core$Equatable*) $tmp352);
_420 = _419;
_421 = (frost$core$Int) {2u};
// begin inline call to org.frostlang.frostc.parser.SyntaxHighlighter.Kind.init(rv:frost.core.Int):org.frostlang.frostc.parser.SyntaxHighlighter.Kind from Markdown.frost:565:54
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:6
_424 = &(&local11)->$rawValue;
*_424 = _421;
_426 = *(&local11);
*(&local10) = _426;
_429 = *(&local10);
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp353;
$tmp353 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp353->value = _429;
_430 = ((frost$core$Equatable*) $tmp353);
ITable* $tmp354 = _420->$class->itable;
while ($tmp354->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp354 = $tmp354->next;
}
_431 = $tmp354->methods[1];
_432 = _431(_420, _430);
_433 = _432.value;
_434 = ((frost$core$Object*) _430);
frost$core$Frost$unref$frost$core$Object$Q(_434);
_436 = ((frost$core$Object*) _419);
frost$core$Frost$unref$frost$core$Object$Q(_436);
if (_433) goto block53; else goto block54;
block53:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:566
_440 = *(&local0);
_441 = *(&local4);
_442 = _441;
_443 = &_442->first;
_444 = *_443;
_445 = ((org$frostlang$frostc$parser$Token$wrapper*) _444)->value;
_446 = _445.kind;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp355;
$tmp355 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp355->value = _446;
_447 = ((frost$core$Object*) $tmp355);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Markdown.frost:566:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
_450 = ($fn356) _447->$class->vtable[0];
_451 = _450(_447);
_452 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s357, _451);
_453 = ((frost$core$Object*) _452);
frost$core$Frost$ref$frost$core$Object$Q(_453);
_455 = ((frost$core$Object*) _452);
frost$core$Frost$unref$frost$core$Object$Q(_455);
_457 = ((frost$core$Object*) _451);
frost$core$Frost$unref$frost$core$Object$Q(_457);
_460 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_452, &$s358);
frost$core$MutableString$append$frost$core$String(_440, _460);
_462 = ((frost$core$Object*) _460);
frost$core$Frost$unref$frost$core$Object$Q(_462);
_464 = ((frost$core$Object*) _452);
frost$core$Frost$unref$frost$core$Object$Q(_464);
_466 = _447;
frost$core$Frost$unref$frost$core$Object$Q(_466);
goto block54;
block54:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:568
_470 = *(&local0);
_471 = *(&local7);
_472 = ((frost$core$Object*) _471);
// begin inline call to method frost.core.MutableString.append(o:frost.core.Object) from Markdown.frost:568:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:150
_475 = ($fn359) _472->$class->vtable[0];
_476 = _475(_472);
frost$core$MutableString$append$frost$core$String(_470, _476);
_478 = ((frost$core$Object*) _476);
frost$core$Frost$unref$frost$core$Object$Q(_478);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:569
_482 = *(&local3);
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp360;
$tmp360 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp360->value = _482;
_483 = ((frost$core$Equatable*) $tmp360);
_484 = _483;
_485 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.parser.SyntaxHighlighter.Kind.init(rv:frost.core.Int):org.frostlang.frostc.parser.SyntaxHighlighter.Kind from Markdown.frost:569:49
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:6
_488 = &(&local13)->$rawValue;
*_488 = _485;
_490 = *(&local13);
*(&local12) = _490;
_493 = *(&local12);
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp361;
$tmp361 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp361->value = _493;
_494 = ((frost$core$Equatable*) $tmp361);
ITable* $tmp362 = _484->$class->itable;
while ($tmp362->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp362 = $tmp362->next;
}
_495 = $tmp362->methods[1];
_496 = _495(_484, _494);
_497 = _496.value;
_498 = ((frost$core$Object*) _494);
frost$core$Frost$unref$frost$core$Object$Q(_498);
_500 = ((frost$core$Object*) _483);
frost$core$Frost$unref$frost$core$Object$Q(_500);
if (_497) goto block62; else goto block61;
block62:;
_503 = *(&local3);
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp363;
$tmp363 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp363->value = _503;
_504 = ((frost$core$Equatable*) $tmp363);
_505 = _504;
_506 = (frost$core$Int) {2u};
// begin inline call to org.frostlang.frostc.parser.SyntaxHighlighter.Kind.init(rv:frost.core.Int):org.frostlang.frostc.parser.SyntaxHighlighter.Kind from Markdown.frost:570:54
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:6
_509 = &(&local15)->$rawValue;
*_509 = _506;
_511 = *(&local15);
*(&local14) = _511;
_514 = *(&local14);
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp364;
$tmp364 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp364->value = _514;
_515 = ((frost$core$Equatable*) $tmp364);
ITable* $tmp365 = _505->$class->itable;
while ($tmp365->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp365 = $tmp365->next;
}
_516 = $tmp365->methods[1];
_517 = _516(_505, _515);
_518 = _517.value;
_519 = ((frost$core$Object*) _515);
frost$core$Frost$unref$frost$core$Object$Q(_519);
_521 = ((frost$core$Object*) _504);
frost$core$Frost$unref$frost$core$Object$Q(_521);
if (_518) goto block60; else goto block61;
block60:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:571
_525 = *(&local0);
frost$core$MutableString$append$frost$core$String(_525, &$s366);
goto block61;
block61:;
_528 = *(&local7);
_529 = ((frost$core$Object*) _528);
frost$core$Frost$unref$frost$core$Object$Q(_529);
*(&local7) = ((frost$core$MutableString*) NULL);
_532 = _50;
frost$core$Frost$unref$frost$core$Object$Q(_532);
_534 = *(&local4);
_535 = ((frost$core$Object*) _534);
frost$core$Frost$unref$frost$core$Object$Q(_535);
*(&local4) = ((org$frostlang$frostc$Pair*) NULL);
goto block4;
block6:;
_539 = ((frost$core$Object*) _39);
frost$core$Frost$unref$frost$core$Object$Q(_539);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:574
_542 = *(&local3);
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp367;
$tmp367 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp367->value = _542;
_543 = ((frost$core$Equatable*) $tmp367);
_544 = _543;
_545 = (frost$core$Int) {0u};
// begin inline call to org.frostlang.frostc.parser.SyntaxHighlighter.Kind.init(rv:frost.core.Int):org.frostlang.frostc.parser.SyntaxHighlighter.Kind from Markdown.frost:574:45
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:6
_548 = &(&local17)->$rawValue;
*_548 = _545;
_550 = *(&local17);
*(&local16) = _550;
_553 = *(&local16);
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp368;
$tmp368 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp368->value = _553;
_554 = ((frost$core$Equatable*) $tmp368);
ITable* $tmp369 = _544->$class->itable;
while ($tmp369->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp369 = $tmp369->next;
}
_555 = $tmp369->methods[1];
_556 = _555(_544, _554);
_557 = _556.value;
_558 = ((frost$core$Object*) _554);
frost$core$Frost$unref$frost$core$Object$Q(_558);
_560 = ((frost$core$Object*) _543);
frost$core$Frost$unref$frost$core$Object$Q(_560);
if (_557) goto block65; else goto block66;
block65:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:575
_564 = *(&local0);
frost$core$MutableString$append$frost$core$String(_564, &$s370);
goto block66;
block66:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:577
_568 = *(&local0);
frost$core$MutableString$append$frost$core$String(_568, &$s371);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:578
_571 = *(&local0);
_572 = frost$core$MutableString$finish$R$frost$core$String(_571);
_573 = ((frost$core$Object*) _572);
frost$core$Frost$ref$frost$core$Object$Q(_573);
_575 = ((frost$core$Object*) _572);
frost$core$Frost$unref$frost$core$Object$Q(_575);
_577 = *(&local0);
_578 = ((frost$core$Object*) _577);
frost$core$Frost$unref$frost$core$Object$Q(_578);
*(&local0) = ((frost$core$MutableString*) NULL);
return _572;

}
void org$frostlang$frostc$frostdoc$Markdown$syntaxHighlight$frost$core$MutableString(org$frostlang$frostc$frostdoc$Markdown* param0, frost$core$MutableString* param1) {

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
frost$threads$MessageQueue* _3;
frost$core$Int _9;
frost$core$Int _10;
int64_t _11;
int64_t _12;
bool _13;
frost$core$Bit _14;
bool _16;
frost$core$Immutable* _19;
frost$core$Object* _20;
frost$core$Object* _25;
$fn372 _26;
frost$core$String* _27;
frost$core$String* _28;
frost$core$Object* _30;
frost$core$String* _32;
frost$core$Object* _33;
frost$core$Object* _36;
frost$core$Object* _38;
org$frostlang$frostc$parser$Parser** _41;
org$frostlang$frostc$parser$Parser* _42;
frost$io$File** _43;
frost$io$File* _44;
frost$core$Int _45;
frost$core$String* _46;
org$frostlang$frostc$parser$Parser** _49;
org$frostlang$frostc$parser$Parser* _50;
org$frostlang$frostc$ASTNode* _51;
frost$core$Object* _53;
org$frostlang$frostc$ASTNode* _55;
frost$core$Object* _56;
frost$core$Object* _59;
org$frostlang$frostc$ASTNode* _62;
bool _63;
frost$core$Bit _64;
bool _65;
frost$threads$MessageQueue** _67;
frost$threads$MessageQueue* _68;
frost$threads$MessageQueue* _69;
frost$threads$ScopedLock* _72;
frost$threads$Lock** _73;
frost$threads$Lock* _74;
frost$core$Object* _77;
frost$threads$ScopedLock* _79;
frost$core$Object* _80;
frost$core$Object* _83;
frost$core$Int* _86;
frost$core$Int _87;
frost$threads$ScopedLock* _88;
frost$core$Object* _89;
frost$core$Int _93;
int64_t _96;
int64_t _97;
bool _98;
frost$core$Bit _99;
bool _101;
frost$core$Bit _104;
frost$core$Range$LTfrost$core$MutableString$Index$Q$GT _105;
org$frostlang$frostc$parser$Parser** _106;
org$frostlang$frostc$parser$Parser* _107;
$fn373 _108;
frost$core$String* _109;
frost$core$Object* _111;
org$frostlang$frostc$ASTNode* _114;
frost$core$Object* _115;
frost$core$String* _118;
frost$core$Object* _119;
frost$threads$MessageQueue** _124;
frost$threads$MessageQueue* _125;
frost$threads$MessageQueue* _126;
frost$core$Int _132;
frost$core$Int _133;
int64_t _134;
int64_t _135;
bool _136;
frost$core$Bit _137;
bool _139;
frost$core$Immutable* _142;
frost$core$Object* _143;
org$frostlang$frostc$parser$Parser** _148;
org$frostlang$frostc$parser$Parser* _149;
frost$io$File** _150;
frost$io$File* _151;
frost$core$Int _152;
frost$core$String* _153;
org$frostlang$frostc$parser$Parser** _157;
org$frostlang$frostc$parser$Parser* _158;
frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT** _161;
frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT* _162;
frost$collections$CollectionView* _163;
$fn374 _164;
frost$core$Int _165;
frost$core$Int _166;
int64_t _169;
int64_t _170;
bool _171;
frost$core$Bit _172;
bool _174;
org$frostlang$frostc$parser$Token _177;
frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT** _181;
frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT* _182;
frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT** _183;
frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT* _184;
frost$collections$CollectionView* _185;
$fn375 _186;
frost$core$Int _187;
frost$core$Int _188;
int64_t _189;
int64_t _190;
int64_t _191;
frost$core$Int _192;
frost$core$Int _194;
int64_t _195;
int64_t _196;
bool _197;
frost$core$Bit _198;
bool _199;
frost$collections$CollectionView* _201;
$fn376 _202;
frost$core$Int _203;
int64_t _204;
int64_t _205;
bool _206;
frost$core$Bit _207;
bool _208;
frost$core$Int _210;
org$frostlang$frostc$parser$Token** _214;
org$frostlang$frostc$parser$Token* _215;
frost$core$Int64 _216;
int64_t _217;
org$frostlang$frostc$parser$Token _218;
org$frostlang$frostc$parser$Token$Kind _221;
frost$core$Equatable* _222;
frost$core$Equatable* _223;
frost$core$Int _224;
frost$core$Int* _227;
org$frostlang$frostc$parser$Token$Kind _229;
org$frostlang$frostc$parser$Token$Kind _232;
frost$core$Equatable* _233;
$fn377 _234;
frost$core$Bit _235;
bool _236;
frost$core$Object* _237;
frost$core$Object* _239;
frost$threads$MessageQueue** _242;
frost$threads$MessageQueue* _243;
frost$threads$MessageQueue* _244;
frost$threads$ScopedLock* _247;
frost$threads$Lock** _248;
frost$threads$Lock* _249;
frost$core$Object* _252;
frost$threads$ScopedLock* _254;
frost$core$Object* _255;
frost$core$Object* _258;
frost$core$Int* _261;
frost$core$Int _262;
frost$threads$ScopedLock* _263;
frost$core$Object* _264;
frost$core$Int _268;
int64_t _271;
int64_t _272;
bool _273;
frost$core$Bit _274;
bool _276;
org$frostlang$frostc$parser$Parser** _279;
org$frostlang$frostc$parser$Parser* _280;
org$frostlang$frostc$ASTNode* _281;
frost$core$Object* _282;
frost$threads$MessageQueue** _286;
frost$threads$MessageQueue* _287;
frost$threads$MessageQueue* _288;
frost$threads$ScopedLock* _291;
frost$threads$Lock** _292;
frost$threads$Lock* _293;
frost$core$Object* _296;
frost$threads$ScopedLock* _298;
frost$core$Object* _299;
frost$core$Object* _302;
frost$core$Int* _305;
frost$core$Int _306;
frost$threads$ScopedLock* _307;
frost$core$Object* _308;
frost$core$Int _312;
int64_t _315;
int64_t _316;
bool _317;
frost$core$Bit _318;
bool _320;
frost$core$Bit _323;
frost$core$Range$LTfrost$core$MutableString$Index$Q$GT _324;
org$frostlang$frostc$parser$Parser** _325;
org$frostlang$frostc$parser$Parser* _326;
$fn378 _327;
frost$core$String* _328;
frost$core$Object* _330;
org$frostlang$frostc$ASTNode* _333;
frost$core$Object* _334;
frost$core$String* _337;
frost$core$Object* _338;
frost$threads$MessageQueue** _343;
frost$threads$MessageQueue* _344;
frost$threads$MessageQueue* _345;
frost$core$Int _351;
frost$core$Int _352;
int64_t _353;
int64_t _354;
bool _355;
frost$core$Bit _356;
bool _358;
frost$core$Immutable* _361;
frost$core$Object* _362;
org$frostlang$frostc$parser$Parser** _367;
org$frostlang$frostc$parser$Parser* _368;
frost$io$File** _369;
frost$io$File* _370;
frost$core$Int _371;
frost$core$String* _372;
org$frostlang$frostc$parser$Parser** _376;
org$frostlang$frostc$parser$Parser* _377;
frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT** _380;
frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT* _381;
frost$collections$CollectionView* _382;
$fn379 _383;
frost$core$Int _384;
frost$core$Int _385;
int64_t _388;
int64_t _389;
bool _390;
frost$core$Bit _391;
bool _393;
org$frostlang$frostc$parser$Token _396;
frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT** _400;
frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT* _401;
frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT** _402;
frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT* _403;
frost$collections$CollectionView* _404;
$fn380 _405;
frost$core$Int _406;
frost$core$Int _407;
int64_t _408;
int64_t _409;
int64_t _410;
frost$core$Int _411;
frost$core$Int _413;
int64_t _414;
int64_t _415;
bool _416;
frost$core$Bit _417;
bool _418;
frost$collections$CollectionView* _420;
$fn381 _421;
frost$core$Int _422;
int64_t _423;
int64_t _424;
bool _425;
frost$core$Bit _426;
bool _427;
frost$core$Int _429;
org$frostlang$frostc$parser$Token** _433;
org$frostlang$frostc$parser$Token* _434;
frost$core$Int64 _435;
int64_t _436;
org$frostlang$frostc$parser$Token _437;
org$frostlang$frostc$parser$Token$Kind _440;
frost$core$Equatable* _441;
frost$core$Equatable* _442;
frost$core$Int _443;
frost$core$Int* _446;
org$frostlang$frostc$parser$Token$Kind _448;
org$frostlang$frostc$parser$Token$Kind _451;
frost$core$Equatable* _452;
$fn382 _453;
frost$core$Bit _454;
bool _455;
frost$core$Object* _456;
frost$core$Object* _458;
frost$threads$MessageQueue** _461;
frost$threads$MessageQueue* _462;
frost$threads$MessageQueue* _463;
frost$threads$ScopedLock* _466;
frost$threads$Lock** _467;
frost$threads$Lock* _468;
frost$core$Object* _471;
frost$threads$ScopedLock* _473;
frost$core$Object* _474;
frost$core$Object* _477;
frost$core$Int* _480;
frost$core$Int _481;
frost$threads$ScopedLock* _482;
frost$core$Object* _483;
frost$core$Int _487;
int64_t _490;
int64_t _491;
bool _492;
frost$core$Bit _493;
bool _495;
org$frostlang$frostc$parser$Parser** _498;
org$frostlang$frostc$parser$Parser* _499;
org$frostlang$frostc$ASTNode* _500;
frost$core$Object* _501;
frost$threads$MessageQueue** _505;
frost$threads$MessageQueue* _506;
frost$threads$MessageQueue* _507;
frost$threads$ScopedLock* _510;
frost$threads$Lock** _511;
frost$threads$Lock* _512;
frost$core$Object* _515;
frost$threads$ScopedLock* _517;
frost$core$Object* _518;
frost$core$Object* _521;
frost$core$Int* _524;
frost$core$Int _525;
frost$threads$ScopedLock* _526;
frost$core$Object* _527;
frost$core$Int _531;
int64_t _534;
int64_t _535;
bool _536;
frost$core$Bit _537;
bool _539;
frost$core$Bit _542;
frost$core$Range$LTfrost$core$MutableString$Index$Q$GT _543;
org$frostlang$frostc$parser$Parser** _544;
org$frostlang$frostc$parser$Parser* _545;
$fn383 _546;
frost$core$String* _547;
frost$core$Object* _549;
org$frostlang$frostc$ASTNode* _552;
frost$core$Object* _553;
frost$core$String* _556;
frost$core$Object* _557;
frost$threads$MessageQueue** _562;
frost$threads$MessageQueue* _563;
frost$threads$MessageQueue* _564;
frost$core$Int _570;
frost$core$Int _571;
int64_t _572;
int64_t _573;
bool _574;
frost$core$Bit _575;
bool _577;
frost$core$Immutable* _580;
frost$core$Object* _581;
org$frostlang$frostc$parser$Parser** _586;
org$frostlang$frostc$parser$Parser* _587;
frost$io$File** _588;
frost$io$File* _589;
frost$core$Int _590;
frost$core$String* _591;
org$frostlang$frostc$parser$Parser** _596;
org$frostlang$frostc$parser$Parser* _597;
org$frostlang$frostc$parser$Token _598;
org$frostlang$frostc$parser$Token _601;
org$frostlang$frostc$parser$Token$Kind _602;
frost$core$Equatable* _603;
frost$core$Equatable* _604;
frost$core$Int _605;
frost$core$Int* _608;
org$frostlang$frostc$parser$Token$Kind _610;
org$frostlang$frostc$parser$Token$Kind _613;
frost$core$Equatable* _614;
$fn384 _615;
frost$core$Bit _616;
bool _617;
frost$core$Object* _618;
frost$core$Object* _620;
frost$core$Bit _627;
frost$core$Range$LTfrost$core$MutableString$Index$Q$GT _628;
org$frostlang$frostc$parser$Parser** _629;
org$frostlang$frostc$parser$Parser* _630;
$fn385 _631;
frost$core$String* _632;
frost$core$Object* _634;
org$frostlang$frostc$ASTNode* _636;
frost$core$Object* _637;
frost$core$String* _640;
frost$core$Object* _641;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:582
_1 = &param0->errorQueue;
_2 = *_1;
_3 = _2;
// begin inline call to method frost.threads.MessageQueue.clear() from Markdown.frost:582:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:116
goto block2;
block2:;
// begin inline call to method frost.threads.MessageQueue.hasMessage():frost.core.Bit from MessageQueue.frost:116:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:89
_9 = frost$threads$MessageQueue$pendingMessages$R$frost$core$Int(_3);
_10 = (frost$core$Int) {0u};
_11 = _9.value;
_12 = _10.value;
_13 = _11 > _12;
_14 = (frost$core$Bit) {_13};
_16 = _14.value;
if (_16) goto block3; else goto block4;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:117
_19 = frost$threads$MessageQueue$getMessage$R$frost$threads$MessageQueue$T(_3);
_20 = ((frost$core$Object*) _19);
frost$core$Frost$unref$frost$core$Object$Q(_20);
goto block2;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:583
_25 = ((frost$core$Object*) param1);
_26 = ($fn386) _25->$class->vtable[0];
_27 = _26(_25);
_28 = frost$core$String$get_trimmed$R$frost$core$String(_27);
*(&local0) = ((frost$core$String*) NULL);
_30 = ((frost$core$Object*) _28);
frost$core$Frost$ref$frost$core$Object$Q(_30);
_32 = *(&local0);
_33 = ((frost$core$Object*) _32);
frost$core$Frost$unref$frost$core$Object$Q(_33);
*(&local0) = _28;
_36 = ((frost$core$Object*) _28);
frost$core$Frost$unref$frost$core$Object$Q(_36);
_38 = ((frost$core$Object*) _27);
frost$core$Frost$unref$frost$core$Object$Q(_38);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:584
_41 = &param0->parser;
_42 = *_41;
_43 = &param0->source;
_44 = *_43;
_45 = (frost$core$Int) {18446744073709551615u};
_46 = *(&local0);
org$frostlang$frostc$parser$Parser$start$frost$io$File$frost$core$Int$frost$core$String(_42, _44, _45, _46);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:585
_49 = &param0->parser;
_50 = *_49;
_51 = org$frostlang$frostc$parser$Parser$file$R$org$frostlang$frostc$ASTNode$Q(_50);
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
_53 = ((frost$core$Object*) _51);
frost$core$Frost$ref$frost$core$Object$Q(_53);
_55 = *(&local1);
_56 = ((frost$core$Object*) _55);
frost$core$Frost$unref$frost$core$Object$Q(_56);
*(&local1) = _51;
_59 = ((frost$core$Object*) _51);
frost$core$Frost$unref$frost$core$Object$Q(_59);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:586
_62 = *(&local1);
_63 = _62 != NULL;
_64 = (frost$core$Bit) {_63};
_65 = _64.value;
if (_65) goto block8; else goto block7;
block8:;
_67 = &param0->errorQueue;
_68 = *_67;
_69 = _68;
// begin inline call to method frost.threads.MessageQueue.pendingMessages():frost.core.Int from Markdown.frost:586:54
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:76
FROST_ASSERT(24 == sizeof(frost$threads$ScopedLock));
_72 = (frost$threads$ScopedLock*) frostObjectAlloc(24, (frost$core$Class*) &frost$threads$ScopedLock$class);
_73 = &_69->lock;
_74 = *_73;
frost$threads$ScopedLock$init$frost$threads$Lock(_72, _74);
*(&local2) = ((frost$threads$ScopedLock*) NULL);
_77 = ((frost$core$Object*) _72);
frost$core$Frost$ref$frost$core$Object$Q(_77);
_79 = *(&local2);
_80 = ((frost$core$Object*) _79);
frost$core$Frost$unref$frost$core$Object$Q(_80);
*(&local2) = _72;
_83 = ((frost$core$Object*) _72);
frost$core$Frost$unref$frost$core$Object$Q(_83);
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:77
_86 = &_69->count;
_87 = *_86;
_88 = *(&local2);
_89 = ((frost$core$Object*) _88);
frost$core$Frost$unref$frost$core$Object$Q(_89);
*(&local2) = ((frost$threads$ScopedLock*) NULL);
_93 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Markdown.frost:586:57
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_96 = _87.value;
_97 = _93.value;
_98 = _96 == _97;
_99 = (frost$core$Bit) {_98};
_101 = _99.value;
if (_101) goto block6; else goto block7;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:587
_104 = (frost$core$Bit) {false};
_105 = frost$core$Range$LTfrost$core$MutableString$Index$Q$GT$init$frost$core$MutableString$Index$Q$frost$core$MutableString$Index$Q$frost$core$Bit(((frost$core$MutableString$Index$nullable) { .nonnull = false }), ((frost$core$MutableString$Index$nullable) { .nonnull = false }), _104);
_106 = &param0->parser;
_107 = *_106;
_108 = ($fn387) param0->$class->vtable[16];
_109 = _108(param0, _107);
frost$core$MutableString$$IDXEQ$frost$core$Range$LTfrost$core$MutableString$Index$Q$GT$frost$core$String(param1, _105, _109);
_111 = ((frost$core$Object*) _109);
frost$core$Frost$unref$frost$core$Object$Q(_111);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:588
_114 = *(&local1);
_115 = ((frost$core$Object*) _114);
frost$core$Frost$unref$frost$core$Object$Q(_115);
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
_118 = *(&local0);
_119 = ((frost$core$Object*) _118);
frost$core$Frost$unref$frost$core$Object$Q(_119);
*(&local0) = ((frost$core$String*) NULL);
return;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:591
_124 = &param0->errorQueue;
_125 = *_124;
_126 = _125;
// begin inline call to method frost.threads.MessageQueue.clear() from Markdown.frost:591:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:116
goto block12;
block12:;
// begin inline call to method frost.threads.MessageQueue.hasMessage():frost.core.Bit from MessageQueue.frost:116:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:89
_132 = frost$threads$MessageQueue$pendingMessages$R$frost$core$Int(_126);
_133 = (frost$core$Int) {0u};
_134 = _132.value;
_135 = _133.value;
_136 = _134 > _135;
_137 = (frost$core$Bit) {_136};
_139 = _137.value;
if (_139) goto block13; else goto block14;
block13:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:117
_142 = frost$threads$MessageQueue$getMessage$R$frost$threads$MessageQueue$T(_126);
_143 = ((frost$core$Object*) _142);
frost$core$Frost$unref$frost$core$Object$Q(_143);
goto block12;
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:592
_148 = &param0->parser;
_149 = *_148;
_150 = &param0->source;
_151 = *_150;
_152 = (frost$core$Int) {18446744073709551615u};
_153 = *(&local0);
org$frostlang$frostc$parser$Parser$start$frost$io$File$frost$core$Int$frost$core$String(_149, _151, _152, _153);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:593
goto block16;
block16:;
_157 = &param0->parser;
_158 = *_157;
// begin inline call to method org.frostlang.frostc.parser.Parser.peek():org.frostlang.frostc.parser.Token from Markdown.frost:593:26
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/Parser.frost:167
_161 = &_158->pushbackBuffer;
_162 = *_161;
_163 = ((frost$collections$CollectionView*) _162);
ITable* $tmp388 = _163->$class->itable;
while ($tmp388->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp388 = $tmp388->next;
}
_164 = $tmp388->methods[0];
_165 = _164(_163);
_166 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Parser.frost:167:33
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_169 = _165.value;
_170 = _166.value;
_171 = _169 == _170;
_172 = (frost$core$Bit) {_171};
_174 = _172.value;
if (_174) goto block21; else goto block22;
block21:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/Parser.frost:168
_177 = org$frostlang$frostc$parser$Parser$next$R$org$frostlang$frostc$parser$Token(_158);
org$frostlang$frostc$parser$Parser$pushback$org$frostlang$frostc$parser$Token(_158, _177);
goto block22;
block22:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/Parser.frost:170
_181 = &_158->pushbackBuffer;
_182 = *_181;
_183 = &_158->pushbackBuffer;
_184 = *_183;
_185 = ((frost$collections$CollectionView*) _184);
ITable* $tmp389 = _185->$class->itable;
while ($tmp389->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp389 = $tmp389->next;
}
_186 = $tmp389->methods[0];
_187 = _186(_185);
_188 = (frost$core$Int) {1u};
_189 = _187.value;
_190 = _188.value;
_191 = _189 - _190;
_192 = (frost$core$Int) {_191};
// begin inline call to function frost.collections.SpecializedArray<org.frostlang.frostc.parser.Token>.[](index:frost.core.Int):org.frostlang.frostc.parser.Token from Parser.frost:170:30
_194 = (frost$core$Int) {0u};
_195 = _192.value;
_196 = _194.value;
_197 = _195 >= _196;
_198 = (frost$core$Bit) {_197};
_199 = _198.value;
if (_199) goto block27; else goto block26;
block27:;
_201 = ((frost$collections$CollectionView*) _182);
ITable* $tmp390 = _201->$class->itable;
while ($tmp390->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp390 = $tmp390->next;
}
_202 = $tmp390->methods[0];
_203 = _202(_201);
_204 = _192.value;
_205 = _203.value;
_206 = _204 < _205;
_207 = (frost$core$Bit) {_206};
_208 = _207.value;
if (_208) goto block25; else goto block26;
block26:;
_210 = (frost$core$Int) {67u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s391, _210, &$s392);
abort(); // unreachable
block25:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/SpecializedArray.frost:68
_214 = &_182->data;
_215 = *_214;
_216 = frost$core$Int64$init$frost$core$Int(_192);
_217 = _216.value;
_218 = _215[_217];
_221 = _218.kind;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp393;
$tmp393 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp393->value = _221;
_222 = ((frost$core$Equatable*) $tmp393);
_223 = _222;
_224 = (frost$core$Int) {0u};
// begin inline call to org.frostlang.frostc.parser.Token.Kind.init(rv:frost.core.Int):org.frostlang.frostc.parser.Token.Kind from Markdown.frost:593:47
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
_227 = &(&local4)->$rawValue;
*_227 = _224;
_229 = *(&local4);
*(&local3) = _229;
_232 = *(&local3);
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp394;
$tmp394 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp394->value = _232;
_233 = ((frost$core$Equatable*) $tmp394);
ITable* $tmp395 = _223->$class->itable;
while ($tmp395->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp395 = $tmp395->next;
}
_234 = $tmp395->methods[1];
_235 = _234(_223, _233);
_236 = _235.value;
_237 = ((frost$core$Object*) _233);
frost$core$Frost$unref$frost$core$Object$Q(_237);
_239 = ((frost$core$Object*) _222);
frost$core$Frost$unref$frost$core$Object$Q(_239);
if (_236) goto block19; else goto block18;
block19:;
_242 = &param0->errorQueue;
_243 = *_242;
_244 = _243;
// begin inline call to method frost.threads.MessageQueue.pendingMessages():frost.core.Int from Markdown.frost:593:80
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:76
FROST_ASSERT(24 == sizeof(frost$threads$ScopedLock));
_247 = (frost$threads$ScopedLock*) frostObjectAlloc(24, (frost$core$Class*) &frost$threads$ScopedLock$class);
_248 = &_244->lock;
_249 = *_248;
frost$threads$ScopedLock$init$frost$threads$Lock(_247, _249);
*(&local5) = ((frost$threads$ScopedLock*) NULL);
_252 = ((frost$core$Object*) _247);
frost$core$Frost$ref$frost$core$Object$Q(_252);
_254 = *(&local5);
_255 = ((frost$core$Object*) _254);
frost$core$Frost$unref$frost$core$Object$Q(_255);
*(&local5) = _247;
_258 = ((frost$core$Object*) _247);
frost$core$Frost$unref$frost$core$Object$Q(_258);
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:77
_261 = &_244->count;
_262 = *_261;
_263 = *(&local5);
_264 = ((frost$core$Object*) _263);
frost$core$Frost$unref$frost$core$Object$Q(_264);
*(&local5) = ((frost$threads$ScopedLock*) NULL);
_268 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Markdown.frost:593:83
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_271 = _262.value;
_272 = _268.value;
_273 = _271 == _272;
_274 = (frost$core$Bit) {_273};
_276 = _274.value;
if (_276) goto block17; else goto block18;
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:594
_279 = &param0->parser;
_280 = *_279;
_281 = org$frostlang$frostc$parser$Parser$statement$R$org$frostlang$frostc$ASTNode$Q(_280);
_282 = ((frost$core$Object*) _281);
frost$core$Frost$unref$frost$core$Object$Q(_282);
goto block16;
block18:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:596
_286 = &param0->errorQueue;
_287 = *_286;
_288 = _287;
// begin inline call to method frost.threads.MessageQueue.pendingMessages():frost.core.Int from Markdown.frost:596:38
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:76
FROST_ASSERT(24 == sizeof(frost$threads$ScopedLock));
_291 = (frost$threads$ScopedLock*) frostObjectAlloc(24, (frost$core$Class*) &frost$threads$ScopedLock$class);
_292 = &_288->lock;
_293 = *_292;
frost$threads$ScopedLock$init$frost$threads$Lock(_291, _293);
*(&local6) = ((frost$threads$ScopedLock*) NULL);
_296 = ((frost$core$Object*) _291);
frost$core$Frost$ref$frost$core$Object$Q(_296);
_298 = *(&local6);
_299 = ((frost$core$Object*) _298);
frost$core$Frost$unref$frost$core$Object$Q(_299);
*(&local6) = _291;
_302 = ((frost$core$Object*) _291);
frost$core$Frost$unref$frost$core$Object$Q(_302);
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:77
_305 = &_288->count;
_306 = *_305;
_307 = *(&local6);
_308 = ((frost$core$Object*) _307);
frost$core$Frost$unref$frost$core$Object$Q(_308);
*(&local6) = ((frost$threads$ScopedLock*) NULL);
_312 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Markdown.frost:596:41
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_315 = _306.value;
_316 = _312.value;
_317 = _315 == _316;
_318 = (frost$core$Bit) {_317};
_320 = _318.value;
if (_320) goto block31; else goto block32;
block31:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:597
_323 = (frost$core$Bit) {false};
_324 = frost$core$Range$LTfrost$core$MutableString$Index$Q$GT$init$frost$core$MutableString$Index$Q$frost$core$MutableString$Index$Q$frost$core$Bit(((frost$core$MutableString$Index$nullable) { .nonnull = false }), ((frost$core$MutableString$Index$nullable) { .nonnull = false }), _323);
_325 = &param0->parser;
_326 = *_325;
_327 = ($fn396) param0->$class->vtable[16];
_328 = _327(param0, _326);
frost$core$MutableString$$IDXEQ$frost$core$Range$LTfrost$core$MutableString$Index$Q$GT$frost$core$String(param1, _324, _328);
_330 = ((frost$core$Object*) _328);
frost$core$Frost$unref$frost$core$Object$Q(_330);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:598
_333 = *(&local1);
_334 = ((frost$core$Object*) _333);
frost$core$Frost$unref$frost$core$Object$Q(_334);
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
_337 = *(&local0);
_338 = ((frost$core$Object*) _337);
frost$core$Frost$unref$frost$core$Object$Q(_338);
*(&local0) = ((frost$core$String*) NULL);
return;
block32:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:601
_343 = &param0->errorQueue;
_344 = *_343;
_345 = _344;
// begin inline call to method frost.threads.MessageQueue.clear() from Markdown.frost:601:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:116
goto block36;
block36:;
// begin inline call to method frost.threads.MessageQueue.hasMessage():frost.core.Bit from MessageQueue.frost:116:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:89
_351 = frost$threads$MessageQueue$pendingMessages$R$frost$core$Int(_345);
_352 = (frost$core$Int) {0u};
_353 = _351.value;
_354 = _352.value;
_355 = _353 > _354;
_356 = (frost$core$Bit) {_355};
_358 = _356.value;
if (_358) goto block37; else goto block38;
block37:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:117
_361 = frost$threads$MessageQueue$getMessage$R$frost$threads$MessageQueue$T(_345);
_362 = ((frost$core$Object*) _361);
frost$core$Frost$unref$frost$core$Object$Q(_362);
goto block36;
block38:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:602
_367 = &param0->parser;
_368 = *_367;
_369 = &param0->source;
_370 = *_369;
_371 = (frost$core$Int) {18446744073709551615u};
_372 = *(&local0);
org$frostlang$frostc$parser$Parser$start$frost$io$File$frost$core$Int$frost$core$String(_368, _370, _371, _372);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:603
goto block40;
block40:;
_376 = &param0->parser;
_377 = *_376;
// begin inline call to method org.frostlang.frostc.parser.Parser.peek():org.frostlang.frostc.parser.Token from Markdown.frost:603:26
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/Parser.frost:167
_380 = &_377->pushbackBuffer;
_381 = *_380;
_382 = ((frost$collections$CollectionView*) _381);
ITable* $tmp397 = _382->$class->itable;
while ($tmp397->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp397 = $tmp397->next;
}
_383 = $tmp397->methods[0];
_384 = _383(_382);
_385 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Parser.frost:167:33
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_388 = _384.value;
_389 = _385.value;
_390 = _388 == _389;
_391 = (frost$core$Bit) {_390};
_393 = _391.value;
if (_393) goto block45; else goto block46;
block45:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/Parser.frost:168
_396 = org$frostlang$frostc$parser$Parser$next$R$org$frostlang$frostc$parser$Token(_377);
org$frostlang$frostc$parser$Parser$pushback$org$frostlang$frostc$parser$Token(_377, _396);
goto block46;
block46:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/Parser.frost:170
_400 = &_377->pushbackBuffer;
_401 = *_400;
_402 = &_377->pushbackBuffer;
_403 = *_402;
_404 = ((frost$collections$CollectionView*) _403);
ITable* $tmp398 = _404->$class->itable;
while ($tmp398->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp398 = $tmp398->next;
}
_405 = $tmp398->methods[0];
_406 = _405(_404);
_407 = (frost$core$Int) {1u};
_408 = _406.value;
_409 = _407.value;
_410 = _408 - _409;
_411 = (frost$core$Int) {_410};
// begin inline call to function frost.collections.SpecializedArray<org.frostlang.frostc.parser.Token>.[](index:frost.core.Int):org.frostlang.frostc.parser.Token from Parser.frost:170:30
_413 = (frost$core$Int) {0u};
_414 = _411.value;
_415 = _413.value;
_416 = _414 >= _415;
_417 = (frost$core$Bit) {_416};
_418 = _417.value;
if (_418) goto block51; else goto block50;
block51:;
_420 = ((frost$collections$CollectionView*) _401);
ITable* $tmp399 = _420->$class->itable;
while ($tmp399->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp399 = $tmp399->next;
}
_421 = $tmp399->methods[0];
_422 = _421(_420);
_423 = _411.value;
_424 = _422.value;
_425 = _423 < _424;
_426 = (frost$core$Bit) {_425};
_427 = _426.value;
if (_427) goto block49; else goto block50;
block50:;
_429 = (frost$core$Int) {67u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s400, _429, &$s401);
abort(); // unreachable
block49:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/SpecializedArray.frost:68
_433 = &_401->data;
_434 = *_433;
_435 = frost$core$Int64$init$frost$core$Int(_411);
_436 = _435.value;
_437 = _434[_436];
_440 = _437.kind;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp402;
$tmp402 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp402->value = _440;
_441 = ((frost$core$Equatable*) $tmp402);
_442 = _441;
_443 = (frost$core$Int) {0u};
// begin inline call to org.frostlang.frostc.parser.Token.Kind.init(rv:frost.core.Int):org.frostlang.frostc.parser.Token.Kind from Markdown.frost:603:47
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
_446 = &(&local8)->$rawValue;
*_446 = _443;
_448 = *(&local8);
*(&local7) = _448;
_451 = *(&local7);
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp403;
$tmp403 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp403->value = _451;
_452 = ((frost$core$Equatable*) $tmp403);
ITable* $tmp404 = _442->$class->itable;
while ($tmp404->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp404 = $tmp404->next;
}
_453 = $tmp404->methods[1];
_454 = _453(_442, _452);
_455 = _454.value;
_456 = ((frost$core$Object*) _452);
frost$core$Frost$unref$frost$core$Object$Q(_456);
_458 = ((frost$core$Object*) _441);
frost$core$Frost$unref$frost$core$Object$Q(_458);
if (_455) goto block43; else goto block42;
block43:;
_461 = &param0->errorQueue;
_462 = *_461;
_463 = _462;
// begin inline call to method frost.threads.MessageQueue.pendingMessages():frost.core.Int from Markdown.frost:603:80
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:76
FROST_ASSERT(24 == sizeof(frost$threads$ScopedLock));
_466 = (frost$threads$ScopedLock*) frostObjectAlloc(24, (frost$core$Class*) &frost$threads$ScopedLock$class);
_467 = &_463->lock;
_468 = *_467;
frost$threads$ScopedLock$init$frost$threads$Lock(_466, _468);
*(&local9) = ((frost$threads$ScopedLock*) NULL);
_471 = ((frost$core$Object*) _466);
frost$core$Frost$ref$frost$core$Object$Q(_471);
_473 = *(&local9);
_474 = ((frost$core$Object*) _473);
frost$core$Frost$unref$frost$core$Object$Q(_474);
*(&local9) = _466;
_477 = ((frost$core$Object*) _466);
frost$core$Frost$unref$frost$core$Object$Q(_477);
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:77
_480 = &_463->count;
_481 = *_480;
_482 = *(&local9);
_483 = ((frost$core$Object*) _482);
frost$core$Frost$unref$frost$core$Object$Q(_483);
*(&local9) = ((frost$threads$ScopedLock*) NULL);
_487 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Markdown.frost:603:83
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_490 = _481.value;
_491 = _487.value;
_492 = _490 == _491;
_493 = (frost$core$Bit) {_492};
_495 = _493.value;
if (_495) goto block41; else goto block42;
block41:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:604
_498 = &param0->parser;
_499 = *_498;
_500 = org$frostlang$frostc$parser$Parser$expression$R$org$frostlang$frostc$ASTNode$Q(_499);
_501 = ((frost$core$Object*) _500);
frost$core$Frost$unref$frost$core$Object$Q(_501);
goto block40;
block42:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:606
_505 = &param0->errorQueue;
_506 = *_505;
_507 = _506;
// begin inline call to method frost.threads.MessageQueue.pendingMessages():frost.core.Int from Markdown.frost:606:38
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:76
FROST_ASSERT(24 == sizeof(frost$threads$ScopedLock));
_510 = (frost$threads$ScopedLock*) frostObjectAlloc(24, (frost$core$Class*) &frost$threads$ScopedLock$class);
_511 = &_507->lock;
_512 = *_511;
frost$threads$ScopedLock$init$frost$threads$Lock(_510, _512);
*(&local10) = ((frost$threads$ScopedLock*) NULL);
_515 = ((frost$core$Object*) _510);
frost$core$Frost$ref$frost$core$Object$Q(_515);
_517 = *(&local10);
_518 = ((frost$core$Object*) _517);
frost$core$Frost$unref$frost$core$Object$Q(_518);
*(&local10) = _510;
_521 = ((frost$core$Object*) _510);
frost$core$Frost$unref$frost$core$Object$Q(_521);
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:77
_524 = &_507->count;
_525 = *_524;
_526 = *(&local10);
_527 = ((frost$core$Object*) _526);
frost$core$Frost$unref$frost$core$Object$Q(_527);
*(&local10) = ((frost$threads$ScopedLock*) NULL);
_531 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Markdown.frost:606:41
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_534 = _525.value;
_535 = _531.value;
_536 = _534 == _535;
_537 = (frost$core$Bit) {_536};
_539 = _537.value;
if (_539) goto block55; else goto block56;
block55:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:607
_542 = (frost$core$Bit) {false};
_543 = frost$core$Range$LTfrost$core$MutableString$Index$Q$GT$init$frost$core$MutableString$Index$Q$frost$core$MutableString$Index$Q$frost$core$Bit(((frost$core$MutableString$Index$nullable) { .nonnull = false }), ((frost$core$MutableString$Index$nullable) { .nonnull = false }), _542);
_544 = &param0->parser;
_545 = *_544;
_546 = ($fn405) param0->$class->vtable[16];
_547 = _546(param0, _545);
frost$core$MutableString$$IDXEQ$frost$core$Range$LTfrost$core$MutableString$Index$Q$GT$frost$core$String(param1, _543, _547);
_549 = ((frost$core$Object*) _547);
frost$core$Frost$unref$frost$core$Object$Q(_549);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:608
_552 = *(&local1);
_553 = ((frost$core$Object*) _552);
frost$core$Frost$unref$frost$core$Object$Q(_553);
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
_556 = *(&local0);
_557 = ((frost$core$Object*) _556);
frost$core$Frost$unref$frost$core$Object$Q(_557);
*(&local0) = ((frost$core$String*) NULL);
return;
block56:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:611
_562 = &param0->errorQueue;
_563 = *_562;
_564 = _563;
// begin inline call to method frost.threads.MessageQueue.clear() from Markdown.frost:611:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:116
goto block60;
block60:;
// begin inline call to method frost.threads.MessageQueue.hasMessage():frost.core.Bit from MessageQueue.frost:116:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:89
_570 = frost$threads$MessageQueue$pendingMessages$R$frost$core$Int(_564);
_571 = (frost$core$Int) {0u};
_572 = _570.value;
_573 = _571.value;
_574 = _572 > _573;
_575 = (frost$core$Bit) {_574};
_577 = _575.value;
if (_577) goto block61; else goto block62;
block61:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:117
_580 = frost$threads$MessageQueue$getMessage$R$frost$threads$MessageQueue$T(_564);
_581 = ((frost$core$Object*) _580);
frost$core$Frost$unref$frost$core$Object$Q(_581);
goto block60;
block62:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:612
_586 = &param0->parser;
_587 = *_586;
_588 = &param0->source;
_589 = *_588;
_590 = (frost$core$Int) {18446744073709551615u};
_591 = *(&local0);
org$frostlang$frostc$parser$Parser$start$frost$io$File$frost$core$Int$frost$core$String(_587, _589, _590, _591);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:613
goto block64;
block64:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:614
_596 = &param0->parser;
_597 = *_596;
_598 = org$frostlang$frostc$parser$Parser$next$R$org$frostlang$frostc$parser$Token(_597);
*(&local11) = _598;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:615
_601 = *(&local11);
_602 = _601.kind;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp406;
$tmp406 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp406->value = _602;
_603 = ((frost$core$Equatable*) $tmp406);
_604 = _603;
_605 = (frost$core$Int) {0u};
// begin inline call to org.frostlang.frostc.parser.Token.Kind.init(rv:frost.core.Int):org.frostlang.frostc.parser.Token.Kind from Markdown.frost:615:38
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
_608 = &(&local13)->$rawValue;
*_608 = _605;
_610 = *(&local13);
*(&local12) = _610;
_613 = *(&local12);
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp407;
$tmp407 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp407->value = _613;
_614 = ((frost$core$Equatable*) $tmp407);
ITable* $tmp408 = _604->$class->itable;
while ($tmp408->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp408 = $tmp408->next;
}
_615 = $tmp408->methods[0];
_616 = _615(_604, _614);
_617 = _616.value;
_618 = ((frost$core$Object*) _614);
frost$core$Frost$unref$frost$core$Object$Q(_618);
_620 = ((frost$core$Object*) _603);
frost$core$Frost$unref$frost$core$Object$Q(_620);
if (_617) goto block66; else goto block67;
block66:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:616
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:619
_627 = (frost$core$Bit) {false};
_628 = frost$core$Range$LTfrost$core$MutableString$Index$Q$GT$init$frost$core$MutableString$Index$Q$frost$core$MutableString$Index$Q$frost$core$Bit(((frost$core$MutableString$Index$nullable) { .nonnull = false }), ((frost$core$MutableString$Index$nullable) { .nonnull = false }), _627);
_629 = &param0->parser;
_630 = *_629;
_631 = ($fn409) param0->$class->vtable[16];
_632 = _631(param0, _630);
frost$core$MutableString$$IDXEQ$frost$core$Range$LTfrost$core$MutableString$Index$Q$GT$frost$core$String(param1, _628, _632);
_634 = ((frost$core$Object*) _632);
frost$core$Frost$unref$frost$core$Object$Q(_634);
_636 = *(&local1);
_637 = ((frost$core$Object*) _636);
frost$core$Frost$unref$frost$core$Object$Q(_637);
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
_640 = *(&local0);
_641 = ((frost$core$Object*) _640);
frost$core$Frost$unref$frost$core$Object$Q(_641);
*(&local0) = ((frost$core$String*) NULL);
return;
block67:;
goto block64;

}
void org$frostlang$frostc$frostdoc$Markdown$encodeCode$frost$core$MutableString(org$frostlang$frostc$frostdoc$Markdown* param0, frost$core$MutableString* param1) {

frost$core$Matcher* local0 = NULL;
frost$core$RegularExpression* _1;
frost$core$Bit _5;
frost$core$Object* _8;
$fn410 _9;
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
$fn411 _47;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:625
FROST_ASSERT(24 == sizeof(frost$core$RegularExpression));
_1 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String(_1, &$s412);
// begin inline call to method frost.core.MutableString.replace(search:frost.core.RegularExpression, replacement:frost.core.String) from Markdown.frost:625:19
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:401
_5 = (frost$core$Bit) {true};
// begin inline call to method frost.core.MutableString.replace(search:frost.core.RegularExpression, replacement:frost.core.String, allowGroupReferences:frost.core.Bit) from MutableString.frost:401:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:406
_8 = ((frost$core$Object*) param1);
_9 = ($fn413) _8->$class->vtable[0];
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
frost$core$Matcher$appendReplacement$frost$core$MutableString$frost$core$String$frost$core$Bit(_32, param1, &$s414, _5);
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
_47 = ($fn415) param0->$class->vtable[17];
_47(param0, param1);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:627
frost$core$MutableString$replace$frost$core$String$frost$core$String(param1, &$s416, &$s417);
return;

}
void org$frostlang$frostc$frostdoc$Markdown$doLists$frost$core$MutableString(org$frostlang$frostc$frostdoc$Markdown* param0, frost$core$MutableString* param1) {

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
$fn418 _13;
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
frost$core$Int$wrapper* $tmp419;
$tmp419 = (frost$core$Int$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp419->value = _9;
_10 = ((frost$core$Object*) $tmp419);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Markdown.frost:634:17
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
_13 = ($fn420) _10->$class->vtable[0];
_14 = _13(_10);
_15 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s421, _14);
_16 = ((frost$core$Object*) _15);
frost$core$Frost$ref$frost$core$Object$Q(_16);
_18 = ((frost$core$Object*) _15);
frost$core$Frost$unref$frost$core$Object$Q(_18);
_20 = ((frost$core$Object*) _14);
frost$core$Frost$unref$frost$core$Object$Q(_20);
_23 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_15, &$s422);
_24 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_23, &$s423);
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
FROST_ASSERT(24 == sizeof(frost$core$RegularExpression));
_51 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
_52 = *(&local1);
_53 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s424, _52);
_54 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_53, &$s425);
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
FROST_ASSERT(24 == sizeof(org$frostlang$frostc$frostdoc$Markdown$_Closure14));
_71 = (org$frostlang$frostc$frostdoc$Markdown$_Closure14*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$frostdoc$Markdown$_Closure14$class);
org$frostlang$frostc$frostdoc$Markdown$_Closure14$init$org$frostlang$frostc$frostdoc$Markdown(_71, param0);
_73 = ((frost$core$Int8*) org$frostlang$frostc$frostdoc$Markdown$_Closure14$$anonymous13$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$Object);
FROST_ASSERT(32 == sizeof(frost$core$MutableMethod));
_74 = (frost$core$MutableMethod*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$MutableMethod$class);
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
FROST_ASSERT(24 == sizeof(frost$core$RegularExpression));
_101 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
_102 = *(&local1);
_103 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s427, _102);
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
FROST_ASSERT(24 == sizeof(org$frostlang$frostc$frostdoc$Markdown$_Closure16));
_118 = (org$frostlang$frostc$frostdoc$Markdown$_Closure16*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$frostdoc$Markdown$_Closure16$class);
org$frostlang$frostc$frostdoc$Markdown$_Closure16$init$org$frostlang$frostc$frostdoc$Markdown(_118, param0);
_120 = ((frost$core$Int8*) org$frostlang$frostc$frostdoc$Markdown$_Closure16$$anonymous15$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$Object);
FROST_ASSERT(32 == sizeof(frost$core$MutableMethod));
_121 = (frost$core$MutableMethod*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$MutableMethod$class);
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
frost$core$String* org$frostlang$frostc$frostdoc$Markdown$processListItems$frost$core$String$R$frost$core$String(org$frostlang$frostc$frostdoc$Markdown* param0, frost$core$String* param1) {

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
FROST_ASSERT(24 == sizeof(frost$core$RegularExpression));
_11 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String(_11, &$s429);
// begin inline call to function frost.core.String.replace(search:frost.core.RegularExpression, replacement:frost.core.String):frost.core.String from Markdown.frost:729:36
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1120
_15 = (frost$core$Bit) {true};
_16 = frost$core$String$replace$frost$core$RegularExpression$frost$core$String$frost$core$Bit$R$frost$core$String(param1, _11, &$s430, _15);
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
FROST_ASSERT(24 == sizeof(frost$core$RegularExpression));
_34 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
_35 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s431, &$s432);
_36 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_35, &$s433);
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
FROST_ASSERT(24 == sizeof(org$frostlang$frostc$frostdoc$Markdown$_Closure18));
_55 = (org$frostlang$frostc$frostdoc$Markdown$_Closure18*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$frostdoc$Markdown$_Closure18$class);
org$frostlang$frostc$frostdoc$Markdown$_Closure18$init$org$frostlang$frostc$frostdoc$Markdown(_55, param0);
_57 = ((frost$core$Int8*) org$frostlang$frostc$frostdoc$Markdown$_Closure18$$anonymous17$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$String);
FROST_ASSERT(32 == sizeof(frost$core$MutableMethod));
_58 = (frost$core$MutableMethod*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$MutableMethod$class);
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
_6 = frost$core$MutableString$indexOf$frost$core$String$frost$core$MutableString$Index$R$frost$core$MutableString$Index$Q(param0, &$s435, _5);
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
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s436, _11, &$s437);
abort(); // unreachable
block4:;
_14 = param0;
_15 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(_14, &$s438);
*(&local0) = _15;
goto block3;
block3:;
_18 = *(&local0);
return _18;

}
void org$frostlang$frostc$frostdoc$Markdown$doHeaders$frost$core$MutableString(org$frostlang$frostc$frostdoc$Markdown* param0, frost$core$MutableString* param1) {

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
FROST_ASSERT(24 == sizeof(frost$core$RegularExpression));
_1 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String(_1, &$s439);
FROST_ASSERT(24 == sizeof(org$frostlang$frostc$frostdoc$Markdown$_Closure20));
_3 = (org$frostlang$frostc$frostdoc$Markdown$_Closure20*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$frostdoc$Markdown$_Closure20$class);
org$frostlang$frostc$frostdoc$Markdown$_Closure20$init$org$frostlang$frostc$frostdoc$Markdown(_3, param0);
_5 = ((frost$core$Int8*) org$frostlang$frostc$frostdoc$Markdown$_Closure20$$anonymous19$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$String);
FROST_ASSERT(32 == sizeof(frost$core$MutableMethod));
_6 = (frost$core$MutableMethod*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$MutableMethod$class);
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
FROST_ASSERT(24 == sizeof(frost$core$RegularExpression));
_30 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String(_30, &$s441);
FROST_ASSERT(24 == sizeof(org$frostlang$frostc$frostdoc$Markdown$_Closure22));
_32 = (org$frostlang$frostc$frostdoc$Markdown$_Closure22*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$frostdoc$Markdown$_Closure22$class);
org$frostlang$frostc$frostdoc$Markdown$_Closure22$init$org$frostlang$frostc$frostdoc$Markdown(_32, param0);
_34 = ((frost$core$Int8*) org$frostlang$frostc$frostdoc$Markdown$_Closure22$$anonymous21$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$String);
FROST_ASSERT(32 == sizeof(frost$core$MutableMethod));
_35 = (frost$core$MutableMethod*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$MutableMethod$class);
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
FROST_ASSERT(24 == sizeof(frost$core$RegularExpression));
_59 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
_60 = (frost$core$Int) {1u};
frost$core$RegularExpression$init$frost$core$String$frost$core$Int(_59, &$s443, _60);
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
FROST_ASSERT(24 == sizeof(org$frostlang$frostc$frostdoc$Markdown$_Closure24));
_73 = (org$frostlang$frostc$frostdoc$Markdown$_Closure24*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$frostdoc$Markdown$_Closure24$class);
org$frostlang$frostc$frostdoc$Markdown$_Closure24$init$org$frostlang$frostc$frostdoc$Markdown(_73, param0);
_75 = ((frost$core$Int8*) org$frostlang$frostc$frostdoc$Markdown$_Closure24$$anonymous23$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$Object);
FROST_ASSERT(32 == sizeof(frost$core$MutableMethod));
_76 = (frost$core$MutableMethod*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$MutableMethod$class);
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
void org$frostlang$frostc$frostdoc$Markdown$runSpanGamut$frost$core$MutableString(org$frostlang$frostc$frostdoc$Markdown* param0, frost$core$MutableString* param1) {

frost$core$Matcher* local0 = NULL;
$fn445 _1;
$fn446 _4;
$fn447 _7;
$fn448 _10;
$fn449 _13;
$fn450 _16;
$fn451 _19;
$fn452 _22;
$fn453 _25;
frost$core$RegularExpression* _28;
frost$core$Bit _32;
frost$core$Object* _35;
$fn454 _36;
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
_1 = ($fn455) param0->$class->vtable[24];
_1(param0, param1);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:794
_4 = ($fn456) param0->$class->vtable[29];
_4(param0, param1);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:795
_7 = ($fn457) param0->$class->vtable[3];
_7(param0, param1);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:797
_10 = ($fn458) param0->$class->vtable[25];
_10(param0, param1);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:798
_13 = ($fn459) param0->$class->vtable[26];
_13(param0, param1);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:799
_16 = ($fn460) param0->$class->vtable[10];
_16(param0, param1);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:805
_19 = ($fn461) param0->$class->vtable[24];
_19(param0, param1);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:807
_22 = ($fn462) param0->$class->vtable[28];
_22(param0, param1);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:808
_25 = ($fn463) param0->$class->vtable[27];
_25(param0, param1);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:810
FROST_ASSERT(24 == sizeof(frost$core$RegularExpression));
_28 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String(_28, &$s464);
// begin inline call to method frost.core.MutableString.replace(search:frost.core.RegularExpression, replacement:frost.core.String) from Markdown.frost:810:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:401
_32 = (frost$core$Bit) {true};
// begin inline call to method frost.core.MutableString.replace(search:frost.core.RegularExpression, replacement:frost.core.String, allowGroupReferences:frost.core.Bit) from MutableString.frost:401:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:406
_35 = ((frost$core$Object*) param1);
_36 = ($fn465) _35->$class->vtable[0];
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
frost$core$Matcher$appendReplacement$frost$core$MutableString$frost$core$String$frost$core$Bit(_59, param1, &$s466, _32);
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
_12 = ((frost$core$Object*) &$s467);
frost$core$Frost$ref$frost$core$Object$Q(_12);
return &$s468;
block3:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:824
_17 = (frost$core$Int) {1u};
_18 = param0.value;
_19 = _17.value;
_20 = _18 - _19;
_21 = (frost$core$Int) {_20};
_22 = org$frostlang$frostc$frostdoc$Markdown$nestedTagsRegex$frost$core$Int$R$frost$core$String(_21);
_23 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s469, _22);
_24 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_23, &$s470);
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
frost$collections$ListView* org$frostlang$frostc$frostdoc$Markdown$tokenizeHTML$frost$core$String$R$frost$collections$ListView$LTorg$frostlang$frostc$frostdoc$Markdown$HTMLToken$GT(org$frostlang$frostc$frostdoc$Markdown* param0, frost$core$String* param1) {

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
frost$collections$Array* _2;
frost$core$Object* _5;
frost$collections$Array* _7;
frost$core$Object* _8;
frost$core$Object* _11;
frost$core$Int _14;
frost$core$String* _15;
frost$core$Object* _17;
frost$core$String* _19;
frost$core$Object* _20;
frost$core$Object* _23;
frost$core$RegularExpression* _26;
frost$core$String* _27;
frost$core$String* _28;
frost$core$String* _29;
frost$core$String* _30;
frost$core$Int _31;
frost$core$Object* _34;
frost$core$RegularExpression* _36;
frost$core$Object* _37;
frost$core$Object* _40;
frost$core$Object* _42;
frost$core$Object* _44;
frost$core$Object* _46;
frost$core$RegularExpression* _49;
frost$core$Matcher* _50;
frost$core$Object* _52;
frost$core$Matcher* _54;
frost$core$Object* _55;
frost$core$Object* _58;
frost$core$Int _63;
frost$core$Int* _66;
frost$core$String$Index _68;
frost$core$String$Index _71;
frost$core$Matcher* _76;
frost$core$Bit _77;
bool _78;
frost$core$String$Index _81;
frost$core$Comparable* _82;
frost$core$Comparable* _83;
frost$core$Matcher* _84;
frost$core$String$Index _85;
frost$core$Comparable* _86;
$fn471 _87;
frost$core$Bit _88;
bool _89;
frost$core$Object* _90;
frost$core$Object* _92;
frost$collections$Array* _96;
frost$collections$Array* _97;
org$frostlang$frostc$frostdoc$Markdown$HTMLToken* _98;
frost$core$Int _99;
frost$core$String$Index _100;
frost$core$Matcher* _101;
frost$core$String$Index _102;
frost$core$Bit _103;
frost$core$Range$LTfrost$core$String$Index$GT _104;
frost$core$String* _105;
frost$core$Object* _107;
frost$core$Object* _109;
frost$core$Object* _111;
frost$collections$Array* _115;
frost$collections$Array* _116;
org$frostlang$frostc$frostdoc$Markdown$HTMLToken* _117;
frost$core$Int _118;
frost$core$Matcher* _119;
frost$core$String$Index _120;
frost$core$Matcher* _121;
frost$core$String$Index _122;
frost$core$Bit _123;
frost$core$Range$LTfrost$core$String$Index$GT _124;
frost$core$String* _125;
frost$core$Object* _127;
frost$core$Object* _129;
frost$core$Object* _131;
frost$core$Matcher* _134;
frost$core$String$Index _135;
frost$core$String$Index _139;
frost$core$Comparable* _140;
frost$core$Comparable* _141;
frost$core$Int* _144;
frost$core$Int _145;
frost$core$Int* _148;
frost$core$String$Index _150;
frost$core$String$Index _153;
frost$core$Comparable* _155;
$fn472 _156;
frost$core$Bit _157;
bool _158;
frost$core$Object* _159;
frost$core$Object* _161;
frost$collections$Array* _165;
frost$collections$Array* _166;
org$frostlang$frostc$frostdoc$Markdown$HTMLToken* _167;
frost$core$Int _168;
frost$core$String$Index _169;
frost$core$Int* _172;
frost$core$Int _173;
frost$core$Int* _176;
frost$core$String$Index _178;
frost$core$String$Index _181;
frost$core$Bit _183;
frost$core$Range$LTfrost$core$String$Index$GT _184;
frost$core$String* _185;
frost$core$Object* _187;
frost$core$Object* _189;
frost$core$Object* _191;
frost$collections$Array* _195;
frost$collections$ListView* _196;
frost$core$Object* _197;
frost$core$Matcher* _199;
frost$core$Object* _200;
frost$core$RegularExpression* _203;
frost$core$Object* _204;
frost$core$String* _207;
frost$core$Object* _208;
frost$collections$Array* _211;
frost$core$Object* _212;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:829
FROST_ASSERT(40 == sizeof(frost$collections$Array));
_1 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
_2 = _1;
frost$collections$Array$init(_2);
*(&local0) = ((frost$collections$Array*) NULL);
_5 = ((frost$core$Object*) _1);
frost$core$Frost$ref$frost$core$Object$Q(_5);
_7 = *(&local0);
_8 = ((frost$core$Object*) _7);
frost$core$Frost$unref$frost$core$Object$Q(_8);
*(&local0) = _1;
_11 = ((frost$core$Object*) _1);
frost$core$Frost$unref$frost$core$Object$Q(_11);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:830
_14 = (frost$core$Int) {6u};
_15 = org$frostlang$frostc$frostdoc$Markdown$nestedTagsRegex$frost$core$Int$R$frost$core$String(_14);
*(&local1) = ((frost$core$String*) NULL);
_17 = ((frost$core$Object*) _15);
frost$core$Frost$ref$frost$core$Object$Q(_17);
_19 = *(&local1);
_20 = ((frost$core$Object*) _19);
frost$core$Frost$unref$frost$core$Object$Q(_20);
*(&local1) = _15;
_23 = ((frost$core$Object*) _15);
frost$core$Frost$unref$frost$core$Object$Q(_23);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:832
FROST_ASSERT(24 == sizeof(frost$core$RegularExpression));
_26 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
_27 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s473, &$s474);
_28 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_27, &$s475);
_29 = *(&local1);
_30 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_28, _29);
_31 = (frost$core$Int) {2u};
frost$core$RegularExpression$init$frost$core$String$frost$core$Int(_26, _30, _31);
*(&local2) = ((frost$core$RegularExpression*) NULL);
_34 = ((frost$core$Object*) _26);
frost$core$Frost$ref$frost$core$Object$Q(_34);
_36 = *(&local2);
_37 = ((frost$core$Object*) _36);
frost$core$Frost$unref$frost$core$Object$Q(_37);
*(&local2) = _26;
_40 = ((frost$core$Object*) _30);
frost$core$Frost$unref$frost$core$Object$Q(_40);
_42 = ((frost$core$Object*) _28);
frost$core$Frost$unref$frost$core$Object$Q(_42);
_44 = ((frost$core$Object*) _27);
frost$core$Frost$unref$frost$core$Object$Q(_44);
_46 = ((frost$core$Object*) _26);
frost$core$Frost$unref$frost$core$Object$Q(_46);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:840
_49 = *(&local2);
_50 = frost$core$RegularExpression$matcher$frost$core$String$R$frost$core$Matcher(_49, param1);
*(&local3) = ((frost$core$Matcher*) NULL);
_52 = ((frost$core$Object*) _50);
frost$core$Frost$ref$frost$core$Object$Q(_52);
_54 = *(&local3);
_55 = ((frost$core$Object*) _54);
frost$core$Frost$unref$frost$core$Object$Q(_55);
*(&local3) = _50;
_58 = ((frost$core$Object*) _50);
frost$core$Frost$unref$frost$core$Object$Q(_58);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:841
// begin inline call to function frost.core.String.get_start():frost.core.String.Index from Markdown.frost:841:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1205
_63 = (frost$core$Int) {0u};
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from String.frost:1205:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:61
_66 = &(&local5)->value;
*_66 = _63;
_68 = *(&local5);
*(&local4) = _68;
_71 = *(&local4);
*(&local6) = _71;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:842
goto block3;
block3:;
_76 = *(&local3);
_77 = frost$core$Matcher$find$R$frost$core$Bit(_76);
_78 = _77.value;
if (_78) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:843
_81 = *(&local6);
frost$core$String$Index$wrapper* $tmp476;
$tmp476 = (frost$core$String$Index$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$String$Index$wrapperclass);
$tmp476->value = _81;
_82 = ((frost$core$Comparable*) $tmp476);
_83 = _82;
_84 = *(&local3);
frost$core$Matcher$get_start$R$frost$core$String$Index(&_85, _84);
frost$core$String$Index$wrapper* $tmp477;
$tmp477 = (frost$core$String$Index$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$String$Index$wrapperclass);
$tmp477->value = _85;
_86 = ((frost$core$Comparable*) $tmp477);
ITable* $tmp478 = _83->$class->itable;
while ($tmp478->$class != (frost$core$Class*) &frost$core$Comparable$class) {
    $tmp478 = $tmp478->next;
}
_87 = $tmp478->methods[1];
_88 = _87(_83, _86);
_89 = _88.value;
_90 = ((frost$core$Object*) _86);
frost$core$Frost$unref$frost$core$Object$Q(_90);
_92 = ((frost$core$Object*) _82);
frost$core$Frost$unref$frost$core$Object$Q(_92);
if (_89) goto block6; else goto block7;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:844
_96 = *(&local0);
_97 = _96;
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$frostdoc$Markdown$HTMLToken));
_98 = (org$frostlang$frostc$frostdoc$Markdown$HTMLToken*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$frostdoc$Markdown$HTMLToken$class);
_99 = (frost$core$Int) {1u};
_100 = *(&local6);
_101 = *(&local3);
frost$core$Matcher$get_start$R$frost$core$String$Index(&_102, _101);
_103 = (frost$core$Bit) {false};
_104 = frost$core$Range$LTfrost$core$String$Index$GT$init$frost$core$String$Index$frost$core$String$Index$frost$core$Bit(_100, _102, _103);
_105 = frost$core$String$substring$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String(param1, _104);
org$frostlang$frostc$frostdoc$Markdown$HTMLToken$init$frost$core$Int$frost$core$String(_98, _99, _105);
_107 = ((frost$core$Object*) _98);
frost$collections$Array$add$frost$collections$Array$T(_97, _107);
_109 = ((frost$core$Object*) _105);
frost$core$Frost$unref$frost$core$Object$Q(_109);
_111 = ((frost$core$Object*) _98);
frost$core$Frost$unref$frost$core$Object$Q(_111);
goto block7;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:846
_115 = *(&local0);
_116 = _115;
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$frostdoc$Markdown$HTMLToken));
_117 = (org$frostlang$frostc$frostdoc$Markdown$HTMLToken*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$frostdoc$Markdown$HTMLToken$class);
_118 = (frost$core$Int) {0u};
_119 = *(&local3);
frost$core$Matcher$get_start$R$frost$core$String$Index(&_120, _119);
_121 = *(&local3);
frost$core$Matcher$get_end$R$frost$core$String$Index(&_122, _121);
_123 = (frost$core$Bit) {false};
_124 = frost$core$Range$LTfrost$core$String$Index$GT$init$frost$core$String$Index$frost$core$String$Index$frost$core$Bit(_120, _122, _123);
_125 = frost$core$String$substring$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String(param1, _124);
org$frostlang$frostc$frostdoc$Markdown$HTMLToken$init$frost$core$Int$frost$core$String(_117, _118, _125);
_127 = ((frost$core$Object*) _117);
frost$collections$Array$add$frost$collections$Array$T(_116, _127);
_129 = ((frost$core$Object*) _125);
frost$core$Frost$unref$frost$core$Object$Q(_129);
_131 = ((frost$core$Object*) _117);
frost$core$Frost$unref$frost$core$Object$Q(_131);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:847
_134 = *(&local3);
frost$core$Matcher$get_end$R$frost$core$String$Index(&_135, _134);
*(&local6) = _135;
goto block3;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:849
_139 = *(&local6);
frost$core$String$Index$wrapper* $tmp479;
$tmp479 = (frost$core$String$Index$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$String$Index$wrapperclass);
$tmp479->value = _139;
_140 = ((frost$core$Comparable*) $tmp479);
_141 = _140;
// begin inline call to function frost.core.String.get_end():frost.core.String.Index from Markdown.frost:849:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1212
_144 = &param1->_length;
_145 = *_144;
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from String.frost:1212:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:61
_148 = &(&local8)->value;
*_148 = _145;
_150 = *(&local8);
*(&local7) = _150;
_153 = *(&local7);
frost$core$String$Index$wrapper* $tmp480;
$tmp480 = (frost$core$String$Index$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$String$Index$wrapperclass);
$tmp480->value = _153;
_155 = ((frost$core$Comparable*) $tmp480);
ITable* $tmp481 = _141->$class->itable;
while ($tmp481->$class != (frost$core$Class*) &frost$core$Comparable$class) {
    $tmp481 = $tmp481->next;
}
_156 = $tmp481->methods[1];
_157 = _156(_141, _155);
_158 = _157.value;
_159 = ((frost$core$Object*) _155);
frost$core$Frost$unref$frost$core$Object$Q(_159);
_161 = ((frost$core$Object*) _140);
frost$core$Frost$unref$frost$core$Object$Q(_161);
if (_158) goto block8; else goto block9;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:850
_165 = *(&local0);
_166 = _165;
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$frostdoc$Markdown$HTMLToken));
_167 = (org$frostlang$frostc$frostdoc$Markdown$HTMLToken*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$frostdoc$Markdown$HTMLToken$class);
_168 = (frost$core$Int) {1u};
_169 = *(&local6);
// begin inline call to function frost.core.String.get_end():frost.core.String.Index from Markdown.frost:850:69
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1212
_172 = &param1->_length;
_173 = *_172;
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from String.frost:1212:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:61
_176 = &(&local10)->value;
*_176 = _173;
_178 = *(&local10);
*(&local9) = _178;
_181 = *(&local9);
_183 = (frost$core$Bit) {false};
_184 = frost$core$Range$LTfrost$core$String$Index$GT$init$frost$core$String$Index$frost$core$String$Index$frost$core$Bit(_169, _181, _183);
_185 = frost$core$String$substring$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String(param1, _184);
org$frostlang$frostc$frostdoc$Markdown$HTMLToken$init$frost$core$Int$frost$core$String(_167, _168, _185);
_187 = ((frost$core$Object*) _167);
frost$collections$Array$add$frost$collections$Array$T(_166, _187);
_189 = ((frost$core$Object*) _185);
frost$core$Frost$unref$frost$core$Object$Q(_189);
_191 = ((frost$core$Object*) _167);
frost$core$Frost$unref$frost$core$Object$Q(_191);
goto block9;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:853
_195 = *(&local0);
_196 = ((frost$collections$ListView*) _195);
_197 = ((frost$core$Object*) _196);
frost$core$Frost$ref$frost$core$Object$Q(_197);
_199 = *(&local3);
_200 = ((frost$core$Object*) _199);
frost$core$Frost$unref$frost$core$Object$Q(_200);
*(&local3) = ((frost$core$Matcher*) NULL);
_203 = *(&local2);
_204 = ((frost$core$Object*) _203);
frost$core$Frost$unref$frost$core$Object$Q(_204);
*(&local2) = ((frost$core$RegularExpression*) NULL);
_207 = *(&local1);
_208 = ((frost$core$Object*) _207);
frost$core$Frost$unref$frost$core$Object$Q(_208);
*(&local1) = ((frost$core$String*) NULL);
_211 = *(&local0);
_212 = ((frost$core$Object*) _211);
frost$core$Frost$unref$frost$core$Object$Q(_212);
*(&local0) = ((frost$collections$Array*) NULL);
return _196;

}
void org$frostlang$frostc$frostdoc$Markdown$escapeSpecialCharsWithinTagAttributes$frost$core$MutableString(org$frostlang$frostc$frostdoc$Markdown* param0, frost$core$MutableString* param1) {

frost$collections$ListView* local0 = NULL;
org$frostlang$frostc$frostdoc$Markdown$HTMLToken* local1 = NULL;
frost$core$String* local2 = NULL;
frost$core$String* local3 = NULL;
frost$core$String* local4 = NULL;
frost$core$Object* _1;
$fn482 _2;
frost$core$String* _3;
$fn483 _4;
frost$collections$ListView* _5;
frost$core$Object* _7;
frost$collections$ListView* _9;
frost$core$Object* _10;
frost$core$Object* _13;
frost$core$Object* _15;
frost$collections$ListView* _20;
frost$collections$Iterable* _21;
frost$collections$Iterable* _22;
$fn484 _23;
frost$collections$Iterator* _24;
frost$collections$Iterator* _25;
frost$collections$Iterator* _27;
$fn485 _28;
frost$core$Bit _29;
bool _30;
frost$collections$Iterator* _33;
$fn486 _34;
frost$core$Object* _35;
org$frostlang$frostc$frostdoc$Markdown$HTMLToken* _36;
frost$core$Object* _37;
org$frostlang$frostc$frostdoc$Markdown$HTMLToken* _39;
frost$core$Object* _40;
org$frostlang$frostc$frostdoc$Markdown$HTMLToken* _46;
frost$core$Int* _47;
frost$core$Int _48;
frost$core$Int _49;
int64_t _52;
int64_t _53;
bool _54;
frost$core$Bit _55;
bool _57;
frost$core$String** _59;
frost$core$String* _60;
frost$core$Object* _62;
frost$core$String* _64;
frost$core$Object* _65;
frost$core$String* _69;
frost$core$Object* _70;
frost$core$String* _72;
frost$core$Object* _73;
frost$core$String* _77;
org$frostlang$frostc$frostdoc$Protector** _78;
org$frostlang$frostc$frostdoc$Protector* _79;
$fn487 _80;
frost$core$String* _81;
frost$core$String* _82;
frost$core$Object* _83;
frost$core$String* _85;
frost$core$Object* _86;
frost$core$Object* _89;
frost$core$Object* _91;
frost$core$String* _94;
org$frostlang$frostc$frostdoc$Protector** _95;
org$frostlang$frostc$frostdoc$Protector* _96;
$fn488 _97;
frost$core$String* _98;
frost$core$String* _99;
frost$core$Object* _100;
frost$core$String* _102;
frost$core$Object* _103;
frost$core$Object* _106;
frost$core$Object* _108;
frost$core$String* _111;
org$frostlang$frostc$frostdoc$Protector** _112;
org$frostlang$frostc$frostdoc$Protector* _113;
$fn489 _114;
frost$core$String* _115;
frost$core$String* _116;
frost$core$Object* _117;
frost$core$String* _119;
frost$core$Object* _120;
frost$core$Object* _123;
frost$core$Object* _125;
frost$core$String* _128;
org$frostlang$frostc$frostdoc$Protector** _129;
org$frostlang$frostc$frostdoc$Protector* _130;
$fn490 _131;
frost$core$String* _132;
frost$core$String* _133;
frost$core$Object* _134;
frost$core$String* _136;
frost$core$Object* _137;
frost$core$Object* _140;
frost$core$Object* _142;
frost$core$String* _144;
frost$core$Object* _145;
frost$core$Int _149;
int64_t _152;
int64_t _153;
bool _154;
frost$core$Bit _155;
bool _157;
frost$core$String** _159;
frost$core$String* _160;
frost$core$Object* _162;
frost$core$String* _164;
frost$core$Object* _165;
frost$core$String* _169;
frost$core$Object* _170;
frost$core$String* _172;
frost$core$Object* _173;
frost$core$String* _176;
frost$core$Object* _177;
frost$core$String* _182;
frost$core$String* _184;
frost$core$Object* _185;
frost$core$Object* _188;
org$frostlang$frostc$frostdoc$Markdown$HTMLToken* _190;
frost$core$Object* _191;
frost$core$Object* _195;
frost$collections$ListView* _197;
frost$core$Object* _198;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:866
_1 = ((frost$core$Object*) param1);
_2 = ($fn491) _1->$class->vtable[0];
_3 = _2(_1);
_4 = ($fn492) param0->$class->vtable[23];
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
_22 = _21;
ITable* $tmp493 = _22->$class->itable;
while ($tmp493->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp493 = $tmp493->next;
}
_23 = $tmp493->methods[0];
_24 = _23(_22);
_25 = _24;
goto block1;
block1:;
_27 = _25;
ITable* $tmp494 = _27->$class->itable;
while ($tmp494->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp494 = $tmp494->next;
}
_28 = $tmp494->methods[0];
_29 = _28(_27);
_30 = _29.value;
if (_30) goto block3; else goto block2;
block2:;
*(&local1) = ((org$frostlang$frostc$frostdoc$Markdown$HTMLToken*) NULL);
_33 = _25;
ITable* $tmp495 = _33->$class->itable;
while ($tmp495->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp495 = $tmp495->next;
}
_34 = $tmp495->methods[1];
_35 = _34(_33);
_36 = ((org$frostlang$frostc$frostdoc$Markdown$HTMLToken*) _35);
_37 = ((frost$core$Object*) _36);
frost$core$Frost$ref$frost$core$Object$Q(_37);
_39 = *(&local1);
_40 = ((frost$core$Object*) _39);
frost$core$Frost$unref$frost$core$Object$Q(_40);
*(&local1) = _36;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:870
*(&local2) = ((frost$core$String*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:871
_46 = *(&local1);
_47 = &_46->$rawValue;
_48 = *_47;
_49 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Markdown.frost:872:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_52 = _48.value;
_53 = _49.value;
_54 = _52 == _53;
_55 = (frost$core$Bit) {_54};
_57 = _55.value;
if (_57) goto block5; else goto block6;
block5:;
_59 = (frost$core$String**) (_46->$data + 0);
_60 = *_59;
*(&local3) = ((frost$core$String*) NULL);
_62 = ((frost$core$Object*) _60);
frost$core$Frost$ref$frost$core$Object$Q(_62);
_64 = *(&local3);
_65 = ((frost$core$Object*) _64);
frost$core$Frost$unref$frost$core$Object$Q(_65);
*(&local3) = _60;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:873
_69 = *(&local3);
_70 = ((frost$core$Object*) _69);
frost$core$Frost$ref$frost$core$Object$Q(_70);
_72 = *(&local2);
_73 = ((frost$core$Object*) _72);
frost$core$Frost$unref$frost$core$Object$Q(_73);
*(&local2) = _69;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:874
_77 = *(&local2);
_78 = &param0->charProtector;
_79 = *_78;
_80 = ($fn496) _79->$class->vtable[2];
_81 = _80(_79, &$s497);
_82 = frost$core$String$replace$frost$core$String$frost$core$String$R$frost$core$String(_77, &$s498, _81);
_83 = ((frost$core$Object*) _82);
frost$core$Frost$ref$frost$core$Object$Q(_83);
_85 = *(&local2);
_86 = ((frost$core$Object*) _85);
frost$core$Frost$unref$frost$core$Object$Q(_86);
*(&local2) = _82;
_89 = ((frost$core$Object*) _82);
frost$core$Frost$unref$frost$core$Object$Q(_89);
_91 = ((frost$core$Object*) _81);
frost$core$Frost$unref$frost$core$Object$Q(_91);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:875
_94 = *(&local2);
_95 = &param0->charProtector;
_96 = *_95;
_97 = ($fn499) _96->$class->vtable[2];
_98 = _97(_96, &$s500);
_99 = frost$core$String$replace$frost$core$String$frost$core$String$R$frost$core$String(_94, &$s501, _98);
_100 = ((frost$core$Object*) _99);
frost$core$Frost$ref$frost$core$Object$Q(_100);
_102 = *(&local2);
_103 = ((frost$core$Object*) _102);
frost$core$Frost$unref$frost$core$Object$Q(_103);
*(&local2) = _99;
_106 = ((frost$core$Object*) _99);
frost$core$Frost$unref$frost$core$Object$Q(_106);
_108 = ((frost$core$Object*) _98);
frost$core$Frost$unref$frost$core$Object$Q(_108);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:876
_111 = *(&local2);
_112 = &param0->charProtector;
_113 = *_112;
_114 = ($fn502) _113->$class->vtable[2];
_115 = _114(_113, &$s503);
_116 = frost$core$String$replace$frost$core$String$frost$core$String$R$frost$core$String(_111, &$s504, _115);
_117 = ((frost$core$Object*) _116);
frost$core$Frost$ref$frost$core$Object$Q(_117);
_119 = *(&local2);
_120 = ((frost$core$Object*) _119);
frost$core$Frost$unref$frost$core$Object$Q(_120);
*(&local2) = _116;
_123 = ((frost$core$Object*) _116);
frost$core$Frost$unref$frost$core$Object$Q(_123);
_125 = ((frost$core$Object*) _115);
frost$core$Frost$unref$frost$core$Object$Q(_125);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:877
_128 = *(&local2);
_129 = &param0->charProtector;
_130 = *_129;
_131 = ($fn505) _130->$class->vtable[2];
_132 = _131(_130, &$s506);
_133 = frost$core$String$replace$frost$core$String$frost$core$String$R$frost$core$String(_128, &$s507, _132);
_134 = ((frost$core$Object*) _133);
frost$core$Frost$ref$frost$core$Object$Q(_134);
_136 = *(&local2);
_137 = ((frost$core$Object*) _136);
frost$core$Frost$unref$frost$core$Object$Q(_137);
*(&local2) = _133;
_140 = ((frost$core$Object*) _133);
frost$core$Frost$unref$frost$core$Object$Q(_140);
_142 = ((frost$core$Object*) _132);
frost$core$Frost$unref$frost$core$Object$Q(_142);
_144 = *(&local3);
_145 = ((frost$core$Object*) _144);
frost$core$Frost$unref$frost$core$Object$Q(_145);
*(&local3) = ((frost$core$String*) NULL);
goto block4;
block6:;
_149 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Markdown.frost:879:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_152 = _48.value;
_153 = _149.value;
_154 = _152 == _153;
_155 = (frost$core$Bit) {_154};
_157 = _155.value;
if (_157) goto block8; else goto block4;
block8:;
_159 = (frost$core$String**) (_46->$data + 0);
_160 = *_159;
*(&local4) = ((frost$core$String*) NULL);
_162 = ((frost$core$Object*) _160);
frost$core$Frost$ref$frost$core$Object$Q(_162);
_164 = *(&local4);
_165 = ((frost$core$Object*) _164);
frost$core$Frost$unref$frost$core$Object$Q(_165);
*(&local4) = _160;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:880
_169 = *(&local4);
_170 = ((frost$core$Object*) _169);
frost$core$Frost$ref$frost$core$Object$Q(_170);
_172 = *(&local2);
_173 = ((frost$core$Object*) _172);
frost$core$Frost$unref$frost$core$Object$Q(_173);
*(&local2) = _169;
_176 = *(&local4);
_177 = ((frost$core$Object*) _176);
frost$core$Frost$unref$frost$core$Object$Q(_177);
*(&local4) = ((frost$core$String*) NULL);
goto block4;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:883
_182 = *(&local2);
frost$core$MutableString$append$frost$core$String(param1, _182);
_184 = *(&local2);
_185 = ((frost$core$Object*) _184);
frost$core$Frost$unref$frost$core$Object$Q(_185);
*(&local2) = ((frost$core$String*) NULL);
_188 = _35;
frost$core$Frost$unref$frost$core$Object$Q(_188);
_190 = *(&local1);
_191 = ((frost$core$Object*) _190);
frost$core$Frost$unref$frost$core$Object$Q(_191);
*(&local1) = ((org$frostlang$frostc$frostdoc$Markdown$HTMLToken*) NULL);
goto block1;
block3:;
_195 = ((frost$core$Object*) _24);
frost$core$Frost$unref$frost$core$Object$Q(_195);
_197 = *(&local0);
_198 = ((frost$core$Object*) _197);
frost$core$Frost$unref$frost$core$Object$Q(_198);
*(&local0) = ((frost$collections$ListView*) NULL);
return;

}
void org$frostlang$frostc$frostdoc$Markdown$doImages$frost$core$MutableString(org$frostlang$frostc$frostdoc$Markdown* param0, frost$core$MutableString* param1) {

frost$core$Matcher* local0 = NULL;
frost$core$Matcher* local1 = NULL;
frost$core$RegularExpression* local2 = NULL;
frost$core$RegularExpression* _1;
frost$core$Bit _5;
frost$core$Object* _8;
$fn508 _9;
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
$fn509 _55;
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
FROST_ASSERT(24 == sizeof(frost$core$RegularExpression));
_1 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String(_1, &$s510);
// begin inline call to method frost.core.MutableString.replace(search:frost.core.RegularExpression, replacement:frost.core.String) from Markdown.frost:889:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:401
_5 = (frost$core$Bit) {true};
// begin inline call to method frost.core.MutableString.replace(search:frost.core.RegularExpression, replacement:frost.core.String, allowGroupReferences:frost.core.Bit) from MutableString.frost:401:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:406
_8 = ((frost$core$Object*) param1);
_9 = ($fn511) _8->$class->vtable[0];
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
frost$core$Matcher$appendReplacement$frost$core$MutableString$frost$core$String$frost$core$Bit(_32, param1, &$s512, _5);
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
FROST_ASSERT(24 == sizeof(frost$core$RegularExpression));
_47 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String(_47, &$s513);
// begin inline call to method frost.core.MutableString.replace(search:frost.core.RegularExpression, replacement:frost.core.String) from Markdown.frost:890:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:401
_51 = (frost$core$Bit) {true};
// begin inline call to method frost.core.MutableString.replace(search:frost.core.RegularExpression, replacement:frost.core.String, allowGroupReferences:frost.core.Bit) from MutableString.frost:401:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:406
_54 = ((frost$core$Object*) param1);
_55 = ($fn514) _54->$class->vtable[0];
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
frost$core$Matcher$appendReplacement$frost$core$MutableString$frost$core$String$frost$core$Bit(_78, param1, &$s515, _51);
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
FROST_ASSERT(24 == sizeof(frost$core$RegularExpression));
_93 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
_94 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s516, &$s517);
_95 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_94, &$s518);
_96 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_95, &$s519);
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
FROST_ASSERT(24 == sizeof(org$frostlang$frostc$frostdoc$Markdown$_Closure26));
_115 = (org$frostlang$frostc$frostdoc$Markdown$_Closure26*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$frostdoc$Markdown$_Closure26$class);
org$frostlang$frostc$frostdoc$Markdown$_Closure26$init$org$frostlang$frostc$frostdoc$Markdown(_115, param0);
_117 = ((frost$core$Int8*) org$frostlang$frostc$frostdoc$Markdown$_Closure26$$anonymous25$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$String);
FROST_ASSERT(32 == sizeof(frost$core$MutableMethod));
_118 = (frost$core$MutableMethod*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$MutableMethod$class);
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
void org$frostlang$frostc$frostdoc$Markdown$doAnchors$frost$core$MutableString(org$frostlang$frostc$frostdoc$Markdown* param0, frost$core$MutableString* param1) {

frost$core$RegularExpression* local0 = NULL;
frost$core$RegularExpression* local1 = NULL;
frost$core$RegularExpression* local2 = NULL;
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
frost$core$String* _54;
frost$core$String* _55;
frost$core$String* _56;
frost$core$String* _57;
frost$core$String* _58;
frost$core$Int _59;
frost$core$Object* _62;
frost$core$RegularExpression* _64;
frost$core$Object* _65;
frost$core$Object* _68;
frost$core$Object* _70;
frost$core$Object* _72;
frost$core$Object* _74;
frost$core$Object* _76;
frost$core$Object* _78;
frost$core$Object* _80;
frost$core$Object* _82;
frost$core$Object* _84;
frost$core$Object* _86;
frost$core$Object* _88;
frost$core$Object* _90;
frost$core$RegularExpression* _93;
org$frostlang$frostc$frostdoc$Markdown$_Closure30* _94;
frost$core$Int8* _96;
frost$core$MutableMethod* _97;
frost$core$Object* _98;
frost$core$Int8** _101;
frost$core$Object** _105;
frost$core$Object* _106;
frost$core$Object** _108;
frost$core$MutableMethod* _111;
frost$core$MutableMethod* _112;
frost$core$Object* _114;
frost$core$Object* _116;
frost$core$RegularExpression* _119;
frost$core$String* _120;
frost$core$String* _121;
frost$core$String* _122;
frost$core$Int _123;
frost$core$Object* _126;
frost$core$RegularExpression* _128;
frost$core$Object* _129;
frost$core$Object* _132;
frost$core$Object* _134;
frost$core$Object* _136;
frost$core$Object* _138;
frost$core$RegularExpression* _141;
org$frostlang$frostc$frostdoc$Markdown$_Closure32* _142;
frost$core$Int8* _144;
frost$core$MutableMethod* _145;
frost$core$Object* _146;
frost$core$Int8** _149;
frost$core$Object** _153;
frost$core$Object* _154;
frost$core$Object** _156;
frost$core$MutableMethod* _159;
frost$core$Object* _161;
frost$core$Object* _163;
frost$core$RegularExpression* _165;
frost$core$Object* _166;
frost$core$RegularExpression* _169;
frost$core$Object* _170;
frost$core$RegularExpression* _173;
frost$core$Object* _174;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:931
FROST_ASSERT(24 == sizeof(frost$core$RegularExpression));
_1 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
_2 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s521, &$s522);
_3 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_2, &$s523);
_4 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_3, &$s524);
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
FROST_ASSERT(24 == sizeof(org$frostlang$frostc$frostdoc$Markdown$_Closure28));
_23 = (org$frostlang$frostc$frostdoc$Markdown$_Closure28*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$frostdoc$Markdown$_Closure28$class);
org$frostlang$frostc$frostdoc$Markdown$_Closure28$init$org$frostlang$frostc$frostdoc$Markdown(_23, param0);
_25 = ((frost$core$Int8*) org$frostlang$frostc$frostdoc$Markdown$_Closure28$$anonymous27$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$Object);
FROST_ASSERT(32 == sizeof(frost$core$MutableMethod));
_26 = (frost$core$MutableMethod*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$MutableMethod$class);
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
FROST_ASSERT(24 == sizeof(frost$core$RegularExpression));
_47 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
_48 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s526, &$s527);
_49 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_48, &$s528);
_50 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_49, &$s529);
_51 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_50, &$s530);
_52 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_51, &$s531);
_53 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_52, &$s532);
_54 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_53, &$s533);
_55 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_54, &$s534);
_56 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_55, &$s535);
_57 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_56, &$s536);
_58 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_57, &$s537);
_59 = (frost$core$Int) {4u};
frost$core$RegularExpression$init$frost$core$String$frost$core$Int(_47, _58, _59);
*(&local1) = ((frost$core$RegularExpression*) NULL);
_62 = ((frost$core$Object*) _47);
frost$core$Frost$ref$frost$core$Object$Q(_62);
_64 = *(&local1);
_65 = ((frost$core$Object*) _64);
frost$core$Frost$unref$frost$core$Object$Q(_65);
*(&local1) = _47;
_68 = ((frost$core$Object*) _58);
frost$core$Frost$unref$frost$core$Object$Q(_68);
_70 = ((frost$core$Object*) _57);
frost$core$Frost$unref$frost$core$Object$Q(_70);
_72 = ((frost$core$Object*) _56);
frost$core$Frost$unref$frost$core$Object$Q(_72);
_74 = ((frost$core$Object*) _55);
frost$core$Frost$unref$frost$core$Object$Q(_74);
_76 = ((frost$core$Object*) _54);
frost$core$Frost$unref$frost$core$Object$Q(_76);
_78 = ((frost$core$Object*) _53);
frost$core$Frost$unref$frost$core$Object$Q(_78);
_80 = ((frost$core$Object*) _52);
frost$core$Frost$unref$frost$core$Object$Q(_80);
_82 = ((frost$core$Object*) _51);
frost$core$Frost$unref$frost$core$Object$Q(_82);
_84 = ((frost$core$Object*) _50);
frost$core$Frost$unref$frost$core$Object$Q(_84);
_86 = ((frost$core$Object*) _49);
frost$core$Frost$unref$frost$core$Object$Q(_86);
_88 = ((frost$core$Object*) _48);
frost$core$Frost$unref$frost$core$Object$Q(_88);
_90 = ((frost$core$Object*) _47);
frost$core$Frost$unref$frost$core$Object$Q(_90);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:982
_93 = *(&local1);
FROST_ASSERT(24 == sizeof(org$frostlang$frostc$frostdoc$Markdown$_Closure30));
_94 = (org$frostlang$frostc$frostdoc$Markdown$_Closure30*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$frostdoc$Markdown$_Closure30$class);
org$frostlang$frostc$frostdoc$Markdown$_Closure30$init$org$frostlang$frostc$frostdoc$Markdown(_94, param0);
_96 = ((frost$core$Int8*) org$frostlang$frostc$frostdoc$Markdown$_Closure30$$anonymous29$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$String);
FROST_ASSERT(32 == sizeof(frost$core$MutableMethod));
_97 = (frost$core$MutableMethod*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$MutableMethod$class);
_98 = ((frost$core$Object*) _94);
// begin inline call to frost.core.MutableMethod.init(pointer:frost.unsafe.Pointer<frost.core.Int8>, target:frost.core.Object?) from Markdown.frost:982:36
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableMethod.frost:32
_101 = &_97->pointer;
*_101 = _96;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableMethod.frost:33
frost$core$Frost$ref$frost$core$Object$Q(_98);
_105 = &_97->target;
_106 = *_105;
frost$core$Frost$unref$frost$core$Object$Q(_106);
_108 = &_97->target;
*_108 = _98;
_111 = _97;
_112 = _111;
frost$core$MutableString$replace$frost$core$RegularExpression$$LPfrost$collections$ListView$LTfrost$core$String$Q$GT$RP$EQ$GT$LPfrost$core$Object$RP(param1, _93, _112);
_114 = ((frost$core$Object*) _97);
frost$core$Frost$unref$frost$core$Object$Q(_114);
_116 = ((frost$core$Object*) _94);
frost$core$Frost$unref$frost$core$Object$Q(_116);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:1024
FROST_ASSERT(24 == sizeof(frost$core$RegularExpression));
_119 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
_120 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s539, &$s540);
_121 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_120, &$s541);
_122 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_121, &$s542);
_123 = (frost$core$Int) {4u};
frost$core$RegularExpression$init$frost$core$String$frost$core$Int(_119, _122, _123);
*(&local2) = ((frost$core$RegularExpression*) NULL);
_126 = ((frost$core$Object*) _119);
frost$core$Frost$ref$frost$core$Object$Q(_126);
_128 = *(&local2);
_129 = ((frost$core$Object*) _128);
frost$core$Frost$unref$frost$core$Object$Q(_129);
*(&local2) = _119;
_132 = ((frost$core$Object*) _122);
frost$core$Frost$unref$frost$core$Object$Q(_132);
_134 = ((frost$core$Object*) _121);
frost$core$Frost$unref$frost$core$Object$Q(_134);
_136 = ((frost$core$Object*) _120);
frost$core$Frost$unref$frost$core$Object$Q(_136);
_138 = ((frost$core$Object*) _119);
frost$core$Frost$unref$frost$core$Object$Q(_138);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:1030
_141 = *(&local2);
FROST_ASSERT(24 == sizeof(org$frostlang$frostc$frostdoc$Markdown$_Closure32));
_142 = (org$frostlang$frostc$frostdoc$Markdown$_Closure32*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$frostdoc$Markdown$_Closure32$class);
org$frostlang$frostc$frostdoc$Markdown$_Closure32$init$org$frostlang$frostc$frostdoc$Markdown(_142, param0);
_144 = ((frost$core$Int8*) org$frostlang$frostc$frostdoc$Markdown$_Closure32$$anonymous31$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$Object);
FROST_ASSERT(32 == sizeof(frost$core$MutableMethod));
_145 = (frost$core$MutableMethod*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$MutableMethod$class);
_146 = ((frost$core$Object*) _142);
// begin inline call to frost.core.MutableMethod.init(pointer:frost.unsafe.Pointer<frost.core.Int8>, target:frost.core.Object?) from Markdown.frost:1030:43
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableMethod.frost:32
_149 = &_145->pointer;
*_149 = _144;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableMethod.frost:33
frost$core$Frost$ref$frost$core$Object$Q(_146);
_153 = &_145->target;
_154 = *_153;
frost$core$Frost$unref$frost$core$Object$Q(_154);
_156 = &_145->target;
*_156 = _146;
_159 = _145;
frost$core$MutableString$replace$frost$core$RegularExpression$$LPfrost$collections$ListView$LTfrost$core$String$Q$GT$RP$EQ$GT$LPfrost$core$Object$RP(param1, _141, _159);
_161 = ((frost$core$Object*) _145);
frost$core$Frost$unref$frost$core$Object$Q(_161);
_163 = ((frost$core$Object*) _142);
frost$core$Frost$unref$frost$core$Object$Q(_163);
_165 = *(&local2);
_166 = ((frost$core$Object*) _165);
frost$core$Frost$unref$frost$core$Object$Q(_166);
*(&local2) = ((frost$core$RegularExpression*) NULL);
_169 = *(&local1);
_170 = ((frost$core$Object*) _169);
frost$core$Frost$unref$frost$core$Object$Q(_170);
*(&local1) = ((frost$core$RegularExpression*) NULL);
_173 = *(&local0);
_174 = ((frost$core$Object*) _173);
frost$core$Frost$unref$frost$core$Object$Q(_174);
*(&local0) = ((frost$core$RegularExpression*) NULL);
return;

}
void org$frostlang$frostc$frostdoc$Markdown$doItalicsAndBold$frost$core$MutableString(org$frostlang$frostc$frostdoc$Markdown* param0, frost$core$MutableString* param1) {

frost$core$Matcher* local0 = NULL;
frost$core$Matcher* local1 = NULL;
frost$core$RegularExpression* _1;
frost$core$Bit _5;
frost$core$Object* _8;
$fn544 _9;
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
$fn545 _55;
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:1072
FROST_ASSERT(24 == sizeof(frost$core$RegularExpression));
_1 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String(_1, &$s546);
// begin inline call to method frost.core.MutableString.replace(search:frost.core.RegularExpression, replacement:frost.core.String) from Markdown.frost:1072:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:401
_5 = (frost$core$Bit) {true};
// begin inline call to method frost.core.MutableString.replace(search:frost.core.RegularExpression, replacement:frost.core.String, allowGroupReferences:frost.core.Bit) from MutableString.frost:401:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:406
_8 = ((frost$core$Object*) param1);
_9 = ($fn547) _8->$class->vtable[0];
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
frost$core$Matcher$appendReplacement$frost$core$MutableString$frost$core$String$frost$core$Bit(_32, param1, &$s548, _5);
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:1073
FROST_ASSERT(24 == sizeof(frost$core$RegularExpression));
_47 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String(_47, &$s549);
// begin inline call to method frost.core.MutableString.replace(search:frost.core.RegularExpression, replacement:frost.core.String) from Markdown.frost:1073:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:401
_51 = (frost$core$Bit) {true};
// begin inline call to method frost.core.MutableString.replace(search:frost.core.RegularExpression, replacement:frost.core.String, allowGroupReferences:frost.core.Bit) from MutableString.frost:401:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:406
_54 = ((frost$core$Object*) param1);
_55 = ($fn550) _54->$class->vtable[0];
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
frost$core$Matcher$appendReplacement$frost$core$MutableString$frost$core$String$frost$core$Bit(_78, param1, &$s551, _51);
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
void org$frostlang$frostc$frostdoc$Markdown$encodeAmpsAndAngles$frost$core$MutableString(org$frostlang$frostc$frostdoc$Markdown* param0, frost$core$MutableString* param1) {

frost$core$Matcher* local0 = NULL;
frost$core$Matcher* local1 = NULL;
frost$core$RegularExpression* _1;
frost$core$Bit _5;
frost$core$Object* _8;
$fn552 _9;
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
$fn553 _55;
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:1079
FROST_ASSERT(24 == sizeof(frost$core$RegularExpression));
_1 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String(_1, &$s554);
// begin inline call to method frost.core.MutableString.replace(search:frost.core.RegularExpression, replacement:frost.core.String) from Markdown.frost:1079:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:401
_5 = (frost$core$Bit) {true};
// begin inline call to method frost.core.MutableString.replace(search:frost.core.RegularExpression, replacement:frost.core.String, allowGroupReferences:frost.core.Bit) from MutableString.frost:401:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:406
_8 = ((frost$core$Object*) param1);
_9 = ($fn555) _8->$class->vtable[0];
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
frost$core$Matcher$appendReplacement$frost$core$MutableString$frost$core$String$frost$core$Bit(_32, param1, &$s556, _5);
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:1080
FROST_ASSERT(24 == sizeof(frost$core$RegularExpression));
_47 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String(_47, &$s557);
// begin inline call to method frost.core.MutableString.replace(search:frost.core.RegularExpression, replacement:frost.core.String) from Markdown.frost:1080:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:401
_51 = (frost$core$Bit) {true};
// begin inline call to method frost.core.MutableString.replace(search:frost.core.RegularExpression, replacement:frost.core.String, allowGroupReferences:frost.core.Bit) from MutableString.frost:401:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:406
_54 = ((frost$core$Object*) param1);
_55 = ($fn558) _54->$class->vtable[0];
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
frost$core$Matcher$appendReplacement$frost$core$MutableString$frost$core$String$frost$core$Bit(_78, param1, &$s559, _51);
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
void org$frostlang$frostc$frostdoc$Markdown$doCodeSpans$frost$core$MutableString(org$frostlang$frostc$frostdoc$Markdown* param0, frost$core$MutableString* param1) {

frost$core$RegularExpression* _1;
org$frostlang$frostc$frostdoc$Markdown$_Closure34* _3;
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:1084
FROST_ASSERT(24 == sizeof(frost$core$RegularExpression));
_1 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String(_1, &$s560);
FROST_ASSERT(24 == sizeof(org$frostlang$frostc$frostdoc$Markdown$_Closure34));
_3 = (org$frostlang$frostc$frostdoc$Markdown$_Closure34*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$frostdoc$Markdown$_Closure34$class);
org$frostlang$frostc$frostdoc$Markdown$_Closure34$init$org$frostlang$frostc$frostdoc$Markdown(_3, param0);
_5 = ((frost$core$Int8*) org$frostlang$frostc$frostdoc$Markdown$_Closure34$$anonymous33$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$String);
FROST_ASSERT(32 == sizeof(frost$core$MutableMethod));
_6 = (frost$core$MutableMethod*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$MutableMethod$class);
_7 = ((frost$core$Object*) _3);
// begin inline call to frost.core.MutableMethod.init(pointer:frost.unsafe.Pointer<frost.core.Int8>, target:frost.core.Object?) from Markdown.frost:1085:13
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
void org$frostlang$frostc$frostdoc$Markdown$cleanup(org$frostlang$frostc$frostdoc$Markdown* param0) {

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

