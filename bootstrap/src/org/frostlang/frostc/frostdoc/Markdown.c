#include "org/frostlang/frostc/frostdoc/Markdown.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/MutableMethod.h"
#include "frost/threads/MessageQueue.h"
#include "frost/core/Frost.h"
#include "org/frostlang/frostc/parser/Parser.h"
#include "frost/collections/HashMap.h"
#include "org/frostlang/frostc/frostdoc/Protector.h"
#include "frost/math/Random.h"
#include "frost/core/Int.h"
#include "frost/io/File.h"
#include "org/frostlang/frostc/parser/SyntaxHighlighter.h"
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

typedef frost$core$String* (*$fn51)(frost$core$Object*);
typedef frost$core$String* (*$fn67)(frost$core$Object*);
typedef frost$core$String* (*$fn83)(frost$core$Object*);
typedef void (*$fn98)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef frost$core$String* (*$fn104)(frost$core$Object*);
typedef void (*$fn117)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef void (*$fn120)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef void (*$fn123)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef void (*$fn126)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef frost$core$String* (*$fn131)(frost$core$Object*);
typedef frost$core$String* (*$fn143)(org$frostlang$frostc$frostdoc$Protector*, frost$core$String*);
typedef void (*$fn149)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*, frost$collections$ListView*, frost$core$String*);
typedef void (*$fn153)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*, frost$collections$ListView*, frost$core$String*);
typedef frost$collections$Iterator* (*$fn159)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn163)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn168)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn176)(frost$core$Object*);
typedef frost$core$String* (*$fn186)(frost$core$Object*);
typedef frost$core$String* (*$fn189)(org$frostlang$frostc$frostdoc$Protector*, frost$core$String*);
typedef frost$core$String* (*$fn193)(frost$core$Object*);
typedef frost$core$String* (*$fn225)(org$frostlang$frostc$frostdoc$Markdown$_Closure2*, frost$collections$ListView*);
typedef void (*$fn233)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef void (*$fn235)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef void (*$fn237)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef void (*$fn239)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef void (*$fn241)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef void (*$fn243)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef void (*$fn245)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef frost$collections$Iterator* (*$fn257)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn261)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn266)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn277)(frost$core$Object*);
typedef frost$core$String* (*$fn341)(frost$collections$CollectionView*, frost$core$String*);
typedef frost$core$String* (*$fn351)(frost$collections$CollectionView*, frost$core$String*);
typedef frost$core$String* (*$fn388)(org$frostlang$frostc$frostdoc$Markdown$_Closure4*, frost$collections$ListView*);
typedef frost$core$String* (*$fn439)(frost$core$Object*);
typedef frost$core$String* (*$fn475)(frost$core$Object*);
typedef frost$core$String* (*$fn512)(frost$core$Object*);
typedef frost$core$String* (*$fn527)(frost$core$Object*);
typedef frost$core$String* (*$fn550)(frost$core$Object*);
typedef frost$core$Int (*$fn563)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn592)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn612)(org$frostlang$frostc$frostdoc$Protector*, frost$core$String*);
typedef frost$core$Int (*$fn629)(frost$collections$CollectionView*);
typedef void (*$fn649)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef frost$core$String* (*$fn654)(frost$core$Object*);
typedef frost$core$Int (*$fn668)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn710)(frost$collections$CollectionView*, frost$core$String*);
typedef frost$core$String* (*$fn718)(frost$core$Object*);
typedef frost$core$String* (*$fn734)(org$frostlang$frostc$frostdoc$Markdown$_Closure6*, frost$collections$ListView*);
typedef frost$collections$Iterator* (*$fn747)(frost$collections$MapView*);
typedef frost$core$Bit (*$fn751)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn756)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn763)(org$frostlang$frostc$frostdoc$Protector*, frost$core$String*);
typedef frost$collections$Iterator* (*$fn774)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn778)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn783)(frost$collections$Iterator*);
typedef frost$core$Real64 (*$fn789)(frost$math$Random*);
typedef frost$core$String* (*$fn806)(frost$core$Object*);
typedef frost$core$String* (*$fn845)(frost$core$Object*);
typedef frost$core$Object* (*$fn866)(org$frostlang$frostc$frostdoc$Markdown$_Closure9*, frost$collections$ListView*);
typedef frost$core$Object* (*$fn876)(frost$collections$ListView*, frost$core$Int);
typedef frost$collections$Iterator* (*$fn882)(frost$collections$Iterable*);
typedef frost$core$Int (*$fn886)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn913)(frost$core$Object*);
typedef frost$core$String* (*$fn919)(frost$collections$ListView*);
typedef frost$core$String* (*$fn929)(frost$core$Object*);
typedef frost$core$String* (*$fn959)(org$frostlang$frostc$frostdoc$Markdown$_Closure12*, frost$collections$ListView*);
typedef frost$collections$Iterator* (*$fn980)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn984)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn989)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn1000)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1012)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1025)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$String* (*$fn1160)(org$frostlang$frostc$frostdoc$Protector*, frost$core$String*);
typedef frost$core$String* (*$fn1168)(org$frostlang$frostc$frostdoc$Protector*, frost$core$String*);
typedef frost$core$String* (*$fn1176)(org$frostlang$frostc$frostdoc$Protector*, frost$core$String*);
typedef frost$core$String* (*$fn1184)(org$frostlang$frostc$frostdoc$Protector*, frost$core$String*);
typedef frost$core$String* (*$fn1192)(org$frostlang$frostc$frostdoc$Protector*, frost$core$String*);
typedef frost$core$Bit (*$fn1205)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1217)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$String* (*$fn1227)(frost$core$Object*);
typedef frost$core$String* (*$fn1236)(frost$core$Object*);
typedef frost$core$Bit (*$fn1247)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1259)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1275)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$String* (*$fn1296)(frost$core$Object*);
typedef frost$core$String* (*$fn1333)(org$frostlang$frostc$frostdoc$Markdown*, org$frostlang$frostc$parser$Parser*);
typedef frost$core$Int (*$fn1359)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn1374)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn1389)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn1413)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$String* (*$fn1454)(org$frostlang$frostc$frostdoc$Markdown*, org$frostlang$frostc$parser$Parser*);
typedef frost$core$Int (*$fn1480)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn1495)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn1510)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn1534)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$String* (*$fn1575)(org$frostlang$frostc$frostdoc$Markdown*, org$frostlang$frostc$parser$Parser*);
typedef frost$core$Bit (*$fn1608)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$String* (*$fn1616)(org$frostlang$frostc$frostdoc$Markdown*, org$frostlang$frostc$parser$Parser*);
typedef frost$core$String* (*$fn1624)(frost$core$Object*);
typedef void (*$fn1636)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef frost$core$String* (*$fn1648)(frost$core$Object*);
typedef frost$core$Object* (*$fn1674)(org$frostlang$frostc$frostdoc$Markdown$_Closure14*, frost$collections$ListView*);
typedef frost$core$Object* (*$fn1688)(org$frostlang$frostc$frostdoc$Markdown$_Closure16*, frost$collections$ListView*);
typedef frost$core$String* (*$fn1721)(org$frostlang$frostc$frostdoc$Markdown$_Closure18*, frost$collections$ListView*);
typedef frost$core$String* (*$fn1752)(org$frostlang$frostc$frostdoc$Markdown$_Closure20*, frost$collections$ListView*);
typedef frost$core$String* (*$fn1761)(org$frostlang$frostc$frostdoc$Markdown$_Closure22*, frost$collections$ListView*);
typedef frost$core$Object* (*$fn1773)(org$frostlang$frostc$frostdoc$Markdown$_Closure24*, frost$collections$ListView*);
typedef void (*$fn1781)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef void (*$fn1783)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef void (*$fn1785)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef void (*$fn1787)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef void (*$fn1789)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef void (*$fn1791)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef void (*$fn1793)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef void (*$fn1795)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef void (*$fn1797)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef frost$core$String* (*$fn1802)(frost$core$Object*);
typedef frost$core$Bit (*$fn1863)(frost$core$Comparable*, frost$core$Comparable*);
typedef frost$core$Bit (*$fn1897)(frost$core$Comparable*, frost$core$Comparable*);
typedef frost$core$String* (*$fn1918)(frost$core$Object*);
typedef frost$collections$ListView* (*$fn1921)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$String*);
typedef frost$collections$Iterator* (*$fn1927)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1931)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1936)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn1957)(org$frostlang$frostc$frostdoc$Protector*, frost$core$String*);
typedef frost$core$String* (*$fn1967)(org$frostlang$frostc$frostdoc$Protector*, frost$core$String*);
typedef frost$core$String* (*$fn1977)(org$frostlang$frostc$frostdoc$Protector*, frost$core$String*);
typedef frost$core$String* (*$fn1987)(org$frostlang$frostc$frostdoc$Protector*, frost$core$String*);
typedef frost$core$String* (*$fn2014)(frost$core$Object*);
typedef frost$core$String* (*$fn2029)(frost$core$Object*);
typedef frost$core$String* (*$fn2051)(org$frostlang$frostc$frostdoc$Markdown$_Closure26*, frost$collections$ListView*);
typedef frost$core$Object* (*$fn2069)(org$frostlang$frostc$frostdoc$Markdown$_Closure28*, frost$collections$ListView*);
typedef frost$core$String* (*$fn2103)(org$frostlang$frostc$frostdoc$Markdown$_Closure30*, frost$collections$ListView*);
typedef frost$core$Object* (*$fn2121)(org$frostlang$frostc$frostdoc$Markdown$_Closure32*, frost$collections$ListView*);
typedef frost$core$String* (*$fn2134)(frost$core$Object*);
typedef frost$core$String* (*$fn2149)(frost$core$Object*);
typedef frost$core$String* (*$fn2164)(frost$core$Object*);
typedef frost$core$String* (*$fn2179)(frost$core$Object*);
typedef frost$core$String* (*$fn2193)(org$frostlang$frostc$frostdoc$Markdown$_Closure34*, frost$collections$ListView*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x66\x72\x6f\x73\x74\x64\x6f\x63\x2e\x4d\x61\x72\x6b\x64\x6f\x77\x6e", 38, -4001291999769164301, NULL };
static frost$core$String $s31 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2f\x74\x6d\x70\x2f\x64\x75\x6d\x6d\x79", 10, -318330169617071760, NULL };
static frost$core$String $s48 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5c\x72\x5c\x6e", 4, 7951194466260930145, NULL };
static frost$core$String $s59 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s64 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5c\x72", 2, 671122139501198827, NULL };
static frost$core$String $s75 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s80 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x3f\x6d\x29\x5e\x5b\x20\x5c\x74\x5d\x2b\x24", 12, -1139377895399220983, NULL };
static frost$core$String $s91 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s95 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a\x0a", 2, 600243221914207573, NULL };
static frost$core$String $s101 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5e\x5b\x20\x5d\x2b\x24", 6, -619359493981426982, NULL };
static frost$core$String $s112 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s128 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s135 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x60\x5f\x3e\x21", 4, 7659751650544287521, NULL };
static frost$core$String $s138 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2a\x7b\x7d\x5b\x5d\x28\x29\x23\x2b\x2d\x2e", 11, 2316169525425843347, NULL };
static frost$core$String $s145 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5c", 1, -5808498599037614437, NULL };
static frost$core$String $s146 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5c\x5c\x5c\x5c", 4, 5306561135431028005, NULL };
static frost$core$String $s150 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5c\x5c", 2, 671084756105839653, NULL };
static frost$core$String $s154 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5c\x5c\x5c", 3, -5656721131278804581, NULL };
static frost$core$String $s172 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x3f\x6d\x29", 4, -2335708253904817870, NULL };
static frost$core$String $s213 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5e\x5b\x20\x5d\x7b\x30\x2c\x33\x7d\x5c\x5b\x28\x2e\x2b\x29\x5c\x5d\x3a\x5b\x20\x5c\x74\x5d\x2a\x5c\x6e\x3f\x5b\x20\x5c\x74\x5d\x2a", 33, -4331202214299653377, NULL };
static frost$core$String $s214 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x3f\x28\x5c\x53\x2b\x3f\x29\x3e\x3f", 10, 8382417696982838485, NULL };
static frost$core$String $s216 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5b\x20\x5c\x74\x5d\x2a\x5c\x6e\x3f\x5b\x20\x5c\x74\x5d\x2a", 15, -6491245181353575060, NULL };
static frost$core$String $s218 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x3f\x3a\x5b\x22\x28\x5d\x28\x2e\x2b\x3f\x29\x5b\x22\x29\x5d\x5b\x20\x5c\x74\x5d\x2a\x29\x3f", 24, 3710167618475896376, NULL };
static frost$core$String $s220 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x3f\x3a\x5c\x6e\x2b\x7c\x5c\x5a\x29", 10, -5708435374441202776, NULL };
static frost$core$String $s249 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5c\x2a", 2, 671060566850019011, NULL };
static frost$core$String $s251 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d", 1, -5808622843851602280, NULL };
static frost$core$String $s253 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5f", 1, -5808497499525986226, NULL };
static frost$core$String $s272 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x3f\x6d\x29\x5e\x5b\x20\x5d\x7b\x30\x2c\x32\x7d\x28\x5b\x20\x5d\x3f", 18, 4309245317481151845, NULL };
static frost$core$String $s274 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5b\x20\x5d\x3f\x29\x7b\x33\x2c\x7d\x5b\x20\x5d\x2a\x24", 14, 7160482551558519224, NULL };
static frost$core$String $s285 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x68\x72\x20\x2f\x3e", 6, -5777796302439281154, NULL };
static frost$core$String $s293 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70", 1, -5808538181456230033, NULL };
static frost$core$String $s295 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x64\x69\x76", 3, -3843758403106219896, NULL };
static frost$core$String $s297 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x68\x31", 2, 628963565149030354, NULL };
static frost$core$String $s299 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x68\x32", 2, 628962465637402143, NULL };
static frost$core$String $s301 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x68\x33", 2, 628961366125773932, NULL };
static frost$core$String $s303 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x68\x34", 2, 628960266614145721, NULL };
static frost$core$String $s305 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x68\x35", 2, 628959167102517510, NULL };
static frost$core$String $s307 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x68\x36", 2, 628958067590889299, NULL };
static frost$core$String $s309 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x62\x6c\x6f\x63\x6b\x71\x75\x6f\x74\x65", 10, -5563452656499994818, NULL };
static frost$core$String $s311 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65", 3, 8646156028890705350, NULL };
static frost$core$String $s313 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x74\x61\x62\x6c\x65", 5, 8583921542012250175, NULL };
static frost$core$String $s315 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x64\x6c", 2, 617375812101585325, NULL };
static frost$core$String $s317 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x6c", 2, 626099337358108374, NULL };
static frost$core$String $s319 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6c", 2, 631724438846900500, NULL };
static frost$core$String $s321 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x73\x63\x72\x69\x70\x74", 6, -5981763091442670774, NULL };
static frost$core$String $s323 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6e\x6f\x73\x63\x72\x69\x70\x74", 8, -783081183237450799, NULL };
static frost$core$String $s325 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x6f\x72\x6d", 4, -2513836004432995353, NULL };
static frost$core$String $s327 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x69\x65\x6c\x64\x73\x65\x74", 8, 7357453410947828701, NULL };
static frost$core$String $s329 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x69\x66\x72\x61\x6d\x65", 6, -3638500342914660223, NULL };
static frost$core$String $s331 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6d\x61\x74\x68", 4, 2256134787772167695, NULL };
static frost$core$String $s335 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x69\x6e\x73", 3, 3143514847037410647, NULL };
static frost$core$String $s337 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x64\x65\x6c", 3, -3847723242036791862, NULL };
static frost$core$String $s343 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7c", 1, -5808533783409717189, NULL };
static frost$core$String $s347 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7c", 1, -5808533783409717189, NULL };
static frost$core$String $s353 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7c", 1, -5808533783409717189, NULL };
static frost$core$String $s356 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s367 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x5e\x3c\x28", 4, -48189702736247289, NULL };
static frost$core$String $s369 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s371 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5c\x62", 2, 671139731687250203, NULL };
static frost$core$String $s373 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x2e\x2a\x5c\x6e\x29\x2a\x3f", 8, 287570575661980099, NULL };
static frost$core$String $s375 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x2f\x5c\x32\x3e", 5, 2665918321944868088, NULL };
static frost$core$String $s377 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5b\x20\x5d\x2a", 4, 100554075858525689, NULL };
static frost$core$String $s379 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x3f\x3d\x5c\x6e\x2b\x7c\x5c\x5a\x29\x29", 11, -7380592505298674730, NULL };
static frost$core$String $s399 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x5e", 2, 567781240609339659, NULL };
static frost$core$String $s400 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x28", 2, 579161185959052809, NULL };
static frost$core$String $s404 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s406 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5c\x62", 2, 671139731687250203, NULL };
static frost$core$String $s408 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x2e\x2a\x5c\x6e\x29\x2a\x3f", 8, 287570575661980099, NULL };
static frost$core$String $s410 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x2a\x3c\x2f\x5c\x32\x3e", 7, 938556386175108236, NULL };
static frost$core$String $s412 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5b\x20\x5d\x2a", 4, 100554075858525689, NULL };
static frost$core$String $s414 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x3f\x3d\x5c\x6e\x2b\x7c\x5c\x5a\x29\x29", 11, -7380592505298674730, NULL };
static frost$core$String $s426 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x3f\x3a\x28\x3f\x3c\x3d\x5c\x6e\x5c\x6e\x29", 12, -8972720710842805865, NULL };
static frost$core$String $s427 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7c", 1, -5808533783409717189, NULL };
static frost$core$String $s429 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5c\x41\x5c\x6e\x3f", 5, 7194244039519334453, NULL };
static frost$core$String $s431 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s433 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28", 1, -5808617346293461225, NULL };
static frost$core$String $s435 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5b\x20\x5d\x7b\x30\x2c", 6, -3928593254950292230, NULL };
static frost$core$String $s443 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7d", 1, -5808534882921345400, NULL };
static frost$core$String $s445 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x28\x68\x72\x29", 5, 5113638981539259662, NULL };
static frost$core$String $s447 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5c\x62", 2, 671139731687250203, NULL };
static frost$core$String $s449 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x5b\x5e\x3c\x3e\x5d\x29\x2a\x3f", 9, 4681977557455105029, NULL };
static frost$core$String $s451 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2f\x3f\x3e", 3, -1252663599262404009, NULL };
static frost$core$String $s453 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5b\x20\x5d\x2a", 4, 100554075858525689, NULL };
static frost$core$String $s455 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x3f\x3d\x5c\x6e\x7b\x32\x2c\x7d\x7c\x5c\x5a\x29\x29", 14, 7822491852177365645, NULL };
static frost$core$String $s462 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x3f\x3a\x28\x3f\x3c\x3d\x5c\x6e\x5c\x6e\x29", 12, -8972720710842805865, NULL };
static frost$core$String $s463 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7c", 1, -5808533783409717189, NULL };
static frost$core$String $s465 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5c\x41\x5c\x6e\x3f", 5, 7194244039519334453, NULL };
static frost$core$String $s467 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s469 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28", 1, -5808617346293461225, NULL };
static frost$core$String $s471 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5b\x20\x5d\x7b\x30\x2c", 6, -3928593254950292230, NULL };
static frost$core$String $s479 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7d", 1, -5808534882921345400, NULL };
static frost$core$String $s481 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x3f\x73\x3a", 4, -2345270706533476687, NULL };
static frost$core$String $s483 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x21", 2, 579168882540450286, NULL };
static frost$core$String $s485 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x2d\x2d\x2e\x2a\x3f\x2d\x2d\x5c\x73\x2a\x29\x2b", 13, 5563676495348135801, NULL };
static frost$core$String $s487 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3e", 1, -5808601953130666271, NULL };
static frost$core$String $s489 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s491 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5b\x20\x5d\x2a", 4, 100554075858525689, NULL };
static frost$core$String $s493 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x3f\x3d\x5c\x6e\x7b\x32\x2c\x7d\x7c\x5c\x5a\x29", 13, 2741499190047052438, NULL };
static frost$core$String $s495 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s509 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5c\x41\x5c\x6e\x2b", 5, 7194222049286770233, NULL };
static frost$core$String $s520 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s524 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5c\x6e\x2b\x5c\x7a", 5, 97634128454376478, NULL };
static frost$core$String $s535 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s553 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5c\x6e\x7b\x32\x2c\x7d", 6, 7690319398872698237, NULL };
static frost$core$String $s600 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s601 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s637 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s638 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x3a\x3d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x2c\x20\x76\x61\x6c\x75\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54\x29", 115, -1630266006860672840, NULL };
static frost$core$String $s657 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x70\x3e", 3, 8061034418550842365, NULL };
static frost$core$String $s659 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x2f\x70\x3e", 4, 8919941027677049518, NULL };
static frost$core$String $s676 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s677 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x3a\x3d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x2c\x20\x76\x61\x6c\x75\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54\x29", 115, -1630266006860672840, NULL };
static frost$core$String $s712 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a\x0a", 2, 600243221914207573, NULL };
static frost$core$String $s715 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x28\x28\x68\x74\x74\x70\x73\x3f\x7c\x66\x74\x70\x29\x3a\x5b\x5e\x27\x5c\x22\x3e\x5c\x73\x5d\x2b\x29\x3e", 27, 1795392191797210536, NULL };
static frost$core$String $s726 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x61\x20\x68\x72\x65\x66\x3d\x22\x24\x31\x22\x3e\x24\x31\x3c\x2f\x61\x3e", 19, 943263205479741618, NULL };
static frost$core$String $s730 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x28\x5b\x2d\x2e\x5c\x77\x5d\x2b\x5c\x40\x5b\x2d\x61\x2d\x7a\x30\x2d\x39\x5d\x2b\x28\x5c\x2e\x5b\x2d\x61\x2d\x7a\x30\x2d\x39\x5d\x2b\x29\x2a\x5c\x2e\x5b\x61\x2d\x7a\x5d\x2b\x29\x3e", 46, 5452143767326512023, NULL };
static frost$core$String $s799 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x26\x23", 2, 558196797748116622, NULL };
static frost$core$String $s809 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3b", 1, -5808598654595781638, NULL };
static frost$core$String $s818 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x26\x23\x78", 3, -5531746251334265342, NULL };
static frost$core$String $s838 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x78", 1, -5808529385363204345, NULL };
static frost$core$String $s840 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3b", 1, -5808598654595781638, NULL };
static frost$core$String $s850 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x28", 2, 567770245493057549, NULL };
static frost$core$String $s851 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5e\x5b\x20\x09\x5d\x2a\x3e\x5b\x20\x09\x5d\x3f", 12, -7372722945027663410, NULL };
static frost$core$String $s853 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x2b\x5c\x6e", 4, 5142313243796413576, NULL };
static frost$core$String $s855 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x2e\x2b\x5c\x6e\x29\x2a", 7, -4363383151632465587, NULL };
static frost$core$String $s857 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5c\x6e\x2a", 3, -5612786845647453793, NULL };
static frost$core$String $s859 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29\x2b", 2, 566746600167382333, NULL };
static frost$core$String $s861 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s892 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20", 1, -5808626142386486913, NULL };
static frost$core$String $s918 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x2e\x2a\x3f\x29\x5c\x74", 7, 3712169380313635567, NULL };
static frost$core$String $s926 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x3f\x6d\x29\x5e\x28\x5c\x74\x7c\x5b\x20\x5d\x7b\x31\x2c\x34\x7d\x29", 18, -3272951813139089848, NULL };
static frost$core$String $s937 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s942 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x3f\x3a\x5c\x6e\x5c\x6e\x7c\x5c\x41\x29\x28\x28\x3f\x3a", 15, -7138352204384862423, NULL };
static frost$core$String $s943 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x3f\x3a\x5b\x20\x5d\x7b\x34\x7d\x29", 10, -7521922402797660827, NULL };
static frost$core$String $s945 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x2a\x5c\x6e\x2b", 5, -6625699055198575136, NULL };
static frost$core$String $s947 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29\x2b", 2, 566746600167382333, NULL };
static frost$core$String $s949 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s951 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x28\x3f\x3d\x5e\x5b\x20\x5d\x7b\x30\x2c\x34\x7d\x5c\x53\x29\x7c\x5c\x5a\x29", 20, 3651045375067248158, NULL };
static frost$core$String $s968 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x66\x72\x6f\x73\x74\x63\x6f\x64\x65\x22\x3e", 24, 8088723627449183031, NULL };
static frost$core$String $s1016 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x2f\x73\x70\x61\x6e\x3e", 7, 8018166017091831374, NULL };
static frost$core$String $s1052 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x63\x6f\x6d\x6d\x65\x6e\x74\x22\x3e", 22, 5195701876173909349, NULL };
static frost$core$String $s1060 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x22\x3e", 25, -1277266025356162443, NULL };
static frost$core$String $s1068 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x6d\x65\x74\x68\x6f\x64\x4e\x61\x6d\x65\x22\x3e", 25, 614141651668444638, NULL };
static frost$core$String $s1076 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x70\x61\x72\x61\x6d\x65\x74\x65\x72\x4e\x61\x6d\x65\x22\x3e", 28, 7976964863345252008, NULL };
static frost$core$String $s1084 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x74\x79\x70\x65\x22\x3e", 19, -6237120118826539316, NULL };
static frost$core$String $s1092 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x6b\x65\x79\x77\x6f\x72\x64\x22\x3e", 22, 3489752146076448555, NULL };
static frost$core$String $s1100 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x63\x6f\x6e\x74\x72\x6f\x6c\x22\x3e", 22, -6843474029214577891, NULL };
static frost$core$String $s1108 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x6c\x69\x74\x65\x72\x61\x6c\x22\x3e", 22, -3542195609056500961, NULL };
static frost$core$String $s1116 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x73\x74\x72\x69\x6e\x67\x22\x3e", 21, -4855012157584048303, NULL };
static frost$core$String $s1124 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x6f\x70\x65\x72\x61\x74\x6f\x72\x22\x3e", 23, 33141744113103844, NULL };
static frost$core$String $s1132 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x6c\x61\x62\x65\x6c\x22\x3e", 20, -149918338464228758, NULL };
static frost$core$String $s1134 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x66\x72\x6f\x73\x74", 14, -4595392010584278012, NULL };
static frost$core$String $s1148 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x26", 1, -5808628341409743335, NULL };
static frost$core$String $s1149 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x26\x61\x6d\x70\x3b", 5, 4071416011722950258, NULL };
static frost$core$String $s1151 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c", 1, -5808604152153922693, NULL };
static frost$core$String $s1152 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x26\x6c\x74\x3b", 4, 3062186500626132942, NULL };
static frost$core$String $s1154 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3e", 1, -5808601953130666271, NULL };
static frost$core$String $s1155 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x26\x67\x74\x3b", 4, 8779067523193954595, NULL };
static frost$core$String $s1162 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2a", 1, -5808615147270204803, NULL };
static frost$core$String $s1163 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5c\x2a", 2, 671060566850019011, NULL };
static frost$core$String $s1170 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5f", 1, -5808497499525986226, NULL };
static frost$core$String $s1171 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5f", 1, -5808497499525986226, NULL };
static frost$core$String $s1178 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5b", 1, -5808493101479473382, NULL };
static frost$core$String $s1179 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5c\x5b", 2, 671077059524442176, NULL };
static frost$core$String $s1186 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5d", 1, -5808499698549242648, NULL };
static frost$core$String $s1187 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5c\x5d", 2, 671083656594211442, NULL };
static frost$core$String $s1194 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5c", 1, -5808498599037614437, NULL };
static frost$core$String $s1195 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5c\x5c", 2, 671084756105839653, NULL };
static frost$core$String $s1230 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22", 13, 4264447674952797972, NULL };
static frost$core$String $s1232 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x22\x3e", 2, 561975819213520929, NULL };
static frost$core$String $s1263 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x2f\x73\x70\x61\x6e\x3e", 7, 8018166017091831374, NULL };
static frost$core$String $s1279 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x2f\x73\x70\x61\x6e\x3e", 7, 8018166017091831374, NULL };
static frost$core$String $s1281 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x2f\x73\x70\x61\x6e\x3e", 7, 8018166017091831374, NULL };
static frost$core$String $s1397 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 22, 6468124764262308515, NULL };
static frost$core$String $s1398 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x54\x6f\x6b\x65\x6e\x3e\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x54\x6f\x6b\x65\x6e", 162, 3779449970926349286, NULL };
static frost$core$String $s1518 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 22, 6468124764262308515, NULL };
static frost$core$String $s1519 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x54\x6f\x6b\x65\x6e\x3e\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x54\x6f\x6b\x65\x6e", 162, 3779449970926349286, NULL };
static frost$core$String $s1621 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x3f\x6d\x29\x24\x28\x5c\x73\x2a\x29\x5c\x2e\x5c\x2e\x5c\x2e\x28\x5c\x73\x2a\x29\x5e", 22, -248689979902601246, NULL };
static frost$core$String $s1632 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x24\x31\x2d\x2a\x23\x2e\x2e\x2e\x23\x2a\x2d\x24\x32", 13, -9212652225966281814, NULL };
static frost$core$String $s1637 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x2a\x23\x2e\x2e\x2e\x23\x2a\x2d", 9, 4555640629949038113, NULL };
static frost$core$String $s1638 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x65\x6c\x6c\x69\x70\x73\x69\x73\x22\x3e\x2e\x2e\x2e\x3c\x2f\x73\x70\x61\x6e\x3e", 33, -453769903465079796, NULL };
static frost$core$String $s1651 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x28\x5b\x20\x5d\x7b\x30\x2c", 8, -3741150137448884478, NULL };
static frost$core$String $s1653 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7d\x28\x28\x3f\x3a\x5b\x2d\x2b\x2a\x5d\x7c\x5c\x64\x2b\x5b\x2e\x5d\x29\x29\x5b\x20\x5d\x2b\x29\x28\x3f\x73\x3a\x2e\x2b\x3f\x29\x28\x5c\x7a\x7c\x5c\x6e\x7b\x32\x2c\x7d", 42, 137202100460744211, NULL };
static frost$core$String $s1655 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x3f\x3d\x5c\x53\x29\x28\x3f\x21\x5b\x20\x5d\x2a\x28\x3f\x3a\x5b\x2d\x2b\x2a\x5d\x7c\x5c\x64\x2b\x5b\x2e\x5d\x29\x5b\x20\x5d\x2b\x29\x29\x29", 36, 8134773430561440898, NULL };
static frost$core$String $s1668 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x3f\x6d\x29\x5e", 5, -439449056924796284, NULL };
static frost$core$String $s1670 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s1684 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x3f\x6d\x29\x28\x3f\x3a\x28\x3f\x3c\x3d\x5c\x6e\x5c\x6e\x29\x7c\x5c\x41\x5c\x6e\x3f\x29", 23, 1848678979582438429, NULL };
static frost$core$String $s1705 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5c\x6e\x7b\x32\x2c\x7d\x5c\x7a", 8, -541266234631704725, NULL };
static frost$core$String $s1708 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s1712 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x5c\x6e\x29\x3f\x5e\x28\x5b\x20\x5c\x74\x5d\x2a\x29\x28\x5b\x2d\x2b\x2a\x5d\x7c\x5c\x64\x2b\x5b\x2e\x5d\x29\x5b\x20\x5d\x2b", 32, 654627259653007759, NULL };
static frost$core$String $s1713 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x28\x3f\x73\x3a\x2e\x2b\x3f\x29\x28\x5c\x6e\x7b\x31\x2c\x32\x7d\x29\x29", 19, 9093550410993434533, NULL };
static frost$core$String $s1715 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x3f\x3d\x5c\x6e\x2a\x28\x5c\x7a\x7c\x5c\x32\x28\x5b\x2d\x2b\x5c\x2a\x5d\x7c\x5c\x64\x2b\x5b\x2e\x5d\x29\x5b\x20\x5c\x74\x5d\x2b\x29\x29", 35, -2262235355244044178, NULL };
static frost$core$String $s1742 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a\x0a", 2, 600243221914207573, NULL };
static frost$core$String $s1747 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s1750 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x3f\x6d\x29\x5e\x28\x2e\x2a\x29\x5c\x6e\x3d\x3d\x3d\x3d\x2b\x24", 17, -6883718133434480482, NULL };
static frost$core$String $s1759 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x3f\x6d\x29\x5e\x28\x2e\x2a\x29\x5c\x6e\x2d\x2d\x2d\x2d\x2b\x24", 17, 7770988057466060478, NULL };
static frost$core$String $s1769 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5e\x28\x23\x7b\x31\x2c\x36\x7d\x29\x5c\x73\x2a\x28\x2e\x2a\x3f\x29\x5c\x73\x2a\x5c\x31\x3f\x24", 24, 16014950917847968, NULL };
static frost$core$String $s1799 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x7b\x32\x2c\x7d\x5c\x6e", 7, -5658908687078335657, NULL };
static frost$core$String $s1810 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x3c\x62\x72\x20\x2f\x3e\x0a", 8, -2897744956745334060, NULL };
static frost$core$String $s1819 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s1820 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s1828 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x3f\x3a\x3c\x5b\x61\x2d\x7a\x2f\x21\x24\x5d\x28\x3f\x3a\x5b\x5e\x3c\x3e\x5d\x7c", 21, -2230095140111063139, NULL };
static frost$core$String $s1830 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29\x2a\x3e\x29", 4, -1177431067148667313, NULL };
static frost$core$String $s1838 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x3f\x73\x3a\x3c\x21\x28\x2d\x2d\x2e\x2a\x3f\x2d\x2d\x5c\x73\x2a\x29\x2b\x3e\x29\x7c", 22, -1727262038654951337, NULL };
static frost$core$String $s1839 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x3f\x73\x3a\x3c\x5c\x3f\x2e\x2a\x3f\x5c\x3f\x3e\x29", 14, 6214673560103078479, NULL };
static frost$core$String $s1841 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7c", 1, -5808533783409717189, NULL };
static frost$core$String $s1959 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5c", 1, -5808498599037614437, NULL };
static frost$core$String $s1961 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5c\x5c", 2, 671084756105839653, NULL };
static frost$core$String $s1969 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x60", 1, -5808555773642281409, NULL };
static frost$core$String $s1971 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x60", 1, -5808555773642281409, NULL };
static frost$core$String $s1979 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2a", 1, -5808615147270204803, NULL };
static frost$core$String $s1981 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5c\x2a", 2, 671060566850019011, NULL };
static frost$core$String $s1989 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5f", 1, -5808497499525986226, NULL };
static frost$core$String $s1991 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5f", 1, -5808497499525986226, NULL };
static frost$core$String $s2011 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x21\x5c\x5c\x5b\x28\x2e\x2a\x29\x5c\x5c\x5d\x5c\x5c\x28\x28\x2e\x2a\x29\x20\x5c\x22\x28\x2e\x2a\x29\x5c\x22\x5c\x5c\x29", 30, 6493917754048131162, NULL };
static frost$core$String $s2022 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x69\x6d\x67\x20\x73\x72\x63\x3d\x22\x24\x32\x22\x20\x61\x6c\x74\x3d\x22\x24\x31\x22\x20\x74\x69\x74\x6c\x65\x3d\x22\x24\x33\x22\x20\x2f\x3e", 36, 4038931684154322219, NULL };
static frost$core$String $s2026 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x21\x5c\x5c\x5b\x28\x2e\x2a\x29\x5c\x5c\x5d\x5c\x5c\x28\x28\x2e\x2a\x29\x5c\x5c\x29", 21, 765547484578233383, NULL };
static frost$core$String $s2037 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x69\x6d\x67\x20\x73\x72\x63\x3d\x22\x24\x32\x22\x20\x61\x6c\x74\x3d\x22\x24\x31\x22\x20\x2f\x3e", 25, -2070577711995753147, NULL };
static frost$core$String $s2042 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x5b\x21\x5d\x5c\x5b\x28\x2e\x2a\x3f\x29\x5c\x5d", 13, 8561428590693777046, NULL };
static frost$core$String $s2043 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5b\x20\x5d\x3f\x28\x3f\x3a\x5c\x6e\x5b\x20\x5d\x2a\x29\x3f", 15, -4228281741099089751, NULL };
static frost$core$String $s2045 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5c\x5b\x28\x2e\x2a\x3f\x29\x5c\x5d", 9, -5820255714607045073, NULL };
static frost$core$String $s2047 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s2060 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x5c\x5b\x28\x2e\x2a\x3f\x29\x5c\x5d", 10, -5340773744844878283, NULL };
static frost$core$String $s2061 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5b\x20\x5d\x3f\x28\x3f\x3a\x5c\x6e\x5b\x20\x5d\x2a\x29\x3f", 15, -4228281741099089751, NULL };
static frost$core$String $s2063 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5c\x5b\x28\x2e\x2a\x3f\x29\x5c\x5d", 9, -5820255714607045073, NULL };
static frost$core$String $s2065 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s2077 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x5c\x5b\x28\x2e\x2a\x3f\x29\x5c\x5d", 10, -5340773744844878283, NULL };
static frost$core$String $s2078 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5c\x28", 2, 671062765873275433, NULL };
static frost$core$String $s2080 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5b\x20\x5c\x74\x5d\x2a", 6, -2765009834817178127, NULL };
static frost$core$String $s2082 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x3f\x28\x2e\x2a\x3f\x29\x3e\x3f", 9, -2141900438656434377, NULL };
static frost$core$String $s2084 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5b\x20\x5c\x74\x5d\x2a", 6, -2765009834817178127, NULL };
static frost$core$String $s2086 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28", 1, -5808617346293461225, NULL };
static frost$core$String $s2088 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x5b\x27\x22\x5d\x29", 6, 5815611588259600167, NULL };
static frost$core$String $s2090 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x2e\x2a\x3f\x29", 5, -5551797076377908473, NULL };
static frost$core$String $s2092 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5c\x35", 2, 671057268315134378, NULL };
static frost$core$String $s2094 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29\x3f", 2, 566759794306920865, NULL };
static frost$core$String $s2096 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5c\x29", 2, 671061666361647222, NULL };
static frost$core$String $s2098 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s2111 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x5c\x5b", 3, 727888895142067038, NULL };
static frost$core$String $s2112 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x5b\x5e\x5c\x5b\x5c\x5d\x5d\x2b\x29", 10, 2820061196371221627, NULL };
static frost$core$String $s2114 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5c\x5d", 2, 671083656594211442, NULL };
static frost$core$String $s2116 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s2131 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x5c\x2a\x5c\x5c\x2a\x7c\x5f\x5f\x29\x28\x3f\x3d\x5c\x53\x29\x28\x2e\x2b\x3f\x5b\x2a\x5f\x5d\x2a\x29\x28\x3f\x3c\x3d\x5c\x53\x29\x5c\x31", 35, -3636589227861870419, NULL };
static frost$core$String $s2142 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x73\x74\x72\x6f\x6e\x67\x3e\x24\x32\x3c\x2f\x73\x74\x72\x6f\x6e\x67\x3e", 19, 980505209609811292, NULL };
static frost$core$String $s2146 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x5c\x2a\x7c\x5f\x29\x28\x3f\x3d\x5c\x53\x29\x28\x2e\x2b\x3f\x29\x28\x3f\x3c\x3d\x5c\x53\x29\x5c\x31", 26, 9006340171609119475, NULL };
static frost$core$String $s2157 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x65\x6d\x3e\x24\x32\x3c\x2f\x65\x6d\x3e", 11, -8498297401027505814, NULL };
static frost$core$String $s2161 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x26\x28\x3f\x21\x23\x3f\x5b\x78\x58\x5d\x3f\x28\x3f\x3a\x5b\x30\x2d\x39\x61\x2d\x66\x41\x2d\x46\x5d\x2b\x7c\x5c\x77\x2b\x29\x3b\x29", 33, -1680408519398193257, NULL };
static frost$core$String $s2172 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x26\x61\x6d\x70\x3b", 5, 4071416011722950258, NULL };
static frost$core$String $s2176 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x28\x3f\x21\x5b\x61\x2d\x7a\x41\x2d\x5a\x2f\x3f\x5c\x24\x21\x5d\x29", 18, -2067299480089594827, NULL };
static frost$core$String $s2187 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x26\x6c\x74\x3b", 4, 3062186500626132942, NULL };
static frost$core$String $s2191 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x3f\x3c\x21\x5c\x5c\x29\x28\x60\x2b\x29\x28\x2e\x2b\x3f\x29\x28\x3f\x3c\x21\x60\x29\x5c\x31\x28\x3f\x21\x60\x29", 29, 4191340564316553542, NULL };

void org$frostlang$frostc$frostdoc$Markdown$init(org$frostlang$frostc$frostdoc$Markdown* param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:120
org$frostlang$frostc$frostdoc$Markdown$init$$LPfrost$core$String$RP$EQ$AM$GT$LPfrost$core$String$Q$RP$Q(param0, ((frost$core$MutableMethod*) NULL));
return;

}
void org$frostlang$frostc$frostdoc$Markdown$init$$LPfrost$core$String$RP$EQ$AM$GT$LPfrost$core$String$Q$RP$Q(org$frostlang$frostc$frostdoc$Markdown* param0, frost$core$MutableMethod* param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:98
FROST_ASSERT(56 == sizeof(frost$threads$MessageQueue));
frost$threads$MessageQueue* $tmp2 = (frost$threads$MessageQueue*) frostObjectAlloc(56, (frost$core$Class*) &frost$threads$MessageQueue$class);
frost$threads$MessageQueue$init($tmp2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2));
frost$threads$MessageQueue** $tmp3 = &param0->errorQueue;
frost$threads$MessageQueue* $tmp4 = *$tmp3;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4));
frost$threads$MessageQueue** $tmp5 = &param0->errorQueue;
*$tmp5 = $tmp2;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:100
FROST_ASSERT(96 == sizeof(org$frostlang$frostc$parser$Parser));
org$frostlang$frostc$parser$Parser* $tmp6 = (org$frostlang$frostc$parser$Parser*) frostObjectAlloc(96, (frost$core$Class*) &org$frostlang$frostc$parser$Parser$class);
frost$threads$MessageQueue** $tmp7 = &param0->errorQueue;
frost$threads$MessageQueue* $tmp8 = *$tmp7;
org$frostlang$frostc$parser$Parser$init$frost$threads$MessageQueue$LTorg$frostlang$frostc$Compiler$Message$GT($tmp6, $tmp8);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp6));
org$frostlang$frostc$parser$Parser** $tmp9 = &param0->parser;
org$frostlang$frostc$parser$Parser* $tmp10 = *$tmp9;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp10));
org$frostlang$frostc$parser$Parser** $tmp11 = &param0->parser;
*$tmp11 = $tmp6;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:105
FROST_ASSERT(56 == sizeof(frost$collections$HashMap));
frost$collections$HashMap* $tmp12 = (frost$collections$HashMap*) frostObjectAlloc(56, (frost$core$Class*) &frost$collections$HashMap$class);
frost$collections$HashMap$init($tmp12);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp12));
frost$collections$HashMap** $tmp13 = &param0->linkDefinitions;
frost$collections$HashMap* $tmp14 = *$tmp13;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp14));
frost$collections$HashMap** $tmp15 = &param0->linkDefinitions;
*$tmp15 = $tmp12;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp12));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:108
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$frostdoc$Protector));
org$frostlang$frostc$frostdoc$Protector* $tmp16 = (org$frostlang$frostc$frostdoc$Protector*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$frostdoc$Protector$class);
org$frostlang$frostc$frostdoc$Protector$init($tmp16);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp16));
org$frostlang$frostc$frostdoc$Protector** $tmp17 = &param0->charProtector;
org$frostlang$frostc$frostdoc$Protector* $tmp18 = *$tmp17;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp18));
org$frostlang$frostc$frostdoc$Protector** $tmp19 = &param0->charProtector;
*$tmp19 = $tmp16;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp16));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:111
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$frostdoc$Protector));
org$frostlang$frostc$frostdoc$Protector* $tmp20 = (org$frostlang$frostc$frostdoc$Protector*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$frostdoc$Protector$class);
org$frostlang$frostc$frostdoc$Protector$init($tmp20);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp20));
org$frostlang$frostc$frostdoc$Protector** $tmp21 = &param0->htmlProtector;
org$frostlang$frostc$frostdoc$Protector* $tmp22 = *$tmp21;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp22));
org$frostlang$frostc$frostdoc$Protector** $tmp23 = &param0->htmlProtector;
*$tmp23 = $tmp20;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp20));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:114
frost$math$Random* $tmp24 = frost$math$Random$default$R$frost$math$Random();
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp24));
frost$math$Random** $tmp25 = &param0->random;
frost$math$Random* $tmp26 = *$tmp25;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp26));
frost$math$Random** $tmp27 = &param0->random;
*$tmp27 = $tmp24;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp24));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:117
frost$core$Int $tmp28 = (frost$core$Int) {0u};
frost$core$Int* $tmp29 = &param0->listLevel;
*$tmp29 = $tmp28;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:124
FROST_ASSERT(24 == sizeof(frost$io$File));
frost$io$File* $tmp30 = (frost$io$File*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$File$class);
frost$io$File$init$frost$core$String($tmp30, &$s31);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp30));
frost$io$File** $tmp32 = &param0->source;
frost$io$File* $tmp33 = *$tmp32;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp33));
frost$io$File** $tmp34 = &param0->source;
*$tmp34 = $tmp30;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp30));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:125
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
frost$core$MutableMethod** $tmp35 = &param0->linkResolver;
frost$core$MutableMethod* $tmp36 = *$tmp35;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp36));
frost$core$MutableMethod** $tmp37 = &param0->linkResolver;
*$tmp37 = param1;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:126
org$frostlang$frostc$parser$Parser** $tmp38 = &param0->parser;
org$frostlang$frostc$parser$Parser* $tmp39 = *$tmp38;
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$parser$SyntaxHighlighter));
org$frostlang$frostc$parser$SyntaxHighlighter* $tmp40 = (org$frostlang$frostc$parser$SyntaxHighlighter*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$class);
org$frostlang$frostc$parser$SyntaxHighlighter$init($tmp40);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp40));
org$frostlang$frostc$parser$SyntaxHighlighter** $tmp41 = &$tmp39->syntaxHighlighter;
org$frostlang$frostc$parser$SyntaxHighlighter* $tmp42 = *$tmp41;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp42));
org$frostlang$frostc$parser$SyntaxHighlighter** $tmp43 = &$tmp39->syntaxHighlighter;
*$tmp43 = $tmp40;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp40));
return;

}
frost$core$String* org$frostlang$frostc$frostdoc$Markdown$process$frost$core$String$R$frost$core$String(org$frostlang$frostc$frostdoc$Markdown* param0, frost$core$String* param1) {

frost$core$MutableString* local0 = NULL;
frost$core$Matcher* local1 = NULL;
frost$core$Matcher* local2 = NULL;
frost$core$Matcher* local3 = NULL;
frost$core$Matcher* local4 = NULL;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:130
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp44 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init$frost$core$String($tmp44, param1);
*(&local0) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp44));
frost$core$MutableString* $tmp45 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp45));
*(&local0) = $tmp44;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp44));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:131
frost$core$MutableString* $tmp46 = *(&local0);
FROST_ASSERT(24 == sizeof(frost$core$RegularExpression));
frost$core$RegularExpression* $tmp47 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp47, &$s48);
// begin inline call to method frost.core.MutableString.replace(search:frost.core.RegularExpression, replacement:frost.core.String) from Markdown.frost:131:21
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:401
frost$core$Bit $tmp49 = (frost$core$Bit) {true};
// begin inline call to method frost.core.MutableString.replace(search:frost.core.RegularExpression, replacement:frost.core.String, allowGroupReferences:frost.core.Bit) from MutableString.frost:401:16
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:406
$fn51 $tmp50 = ($fn51) ((frost$core$Object*) $tmp46)->$class->vtable[0];
frost$core$String* $tmp52 = $tmp50(((frost$core$Object*) $tmp46));
frost$core$Matcher* $tmp53 = frost$core$RegularExpression$matcher$frost$core$String$R$frost$core$Matcher($tmp47, $tmp52);
*(&local1) = ((frost$core$Matcher*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp53));
frost$core$Matcher* $tmp54 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp54));
*(&local1) = $tmp53;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp53));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp52));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:407
frost$core$MutableString$clear($tmp46);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:408
goto block3;
block3:;
frost$core$Matcher* $tmp55 = *(&local1);
frost$core$Bit $tmp56 = frost$core$Matcher$find$R$frost$core$Bit($tmp55);
bool $tmp57 = $tmp56.value;
if ($tmp57) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:409
frost$core$Matcher* $tmp58 = *(&local1);
frost$core$Matcher$appendReplacement$frost$core$MutableString$frost$core$String$frost$core$Bit($tmp58, $tmp46, &$s59, $tmp49);
goto block3;
block5:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:411
frost$core$Matcher* $tmp60 = *(&local1);
frost$core$Matcher$appendTail$frost$core$MutableString($tmp60, $tmp46);
frost$core$Matcher* $tmp61 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp61));
*(&local1) = ((frost$core$Matcher*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp47));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:132
frost$core$MutableString* $tmp62 = *(&local0);
FROST_ASSERT(24 == sizeof(frost$core$RegularExpression));
frost$core$RegularExpression* $tmp63 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp63, &$s64);
// begin inline call to method frost.core.MutableString.replace(search:frost.core.RegularExpression, replacement:frost.core.String) from Markdown.frost:132:21
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:401
frost$core$Bit $tmp65 = (frost$core$Bit) {true};
// begin inline call to method frost.core.MutableString.replace(search:frost.core.RegularExpression, replacement:frost.core.String, allowGroupReferences:frost.core.Bit) from MutableString.frost:401:16
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:406
$fn67 $tmp66 = ($fn67) ((frost$core$Object*) $tmp62)->$class->vtable[0];
frost$core$String* $tmp68 = $tmp66(((frost$core$Object*) $tmp62));
frost$core$Matcher* $tmp69 = frost$core$RegularExpression$matcher$frost$core$String$R$frost$core$Matcher($tmp63, $tmp68);
*(&local2) = ((frost$core$Matcher*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp69));
frost$core$Matcher* $tmp70 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp70));
*(&local2) = $tmp69;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp69));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp68));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:407
frost$core$MutableString$clear($tmp62);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:408
goto block8;
block8:;
frost$core$Matcher* $tmp71 = *(&local2);
frost$core$Bit $tmp72 = frost$core$Matcher$find$R$frost$core$Bit($tmp71);
bool $tmp73 = $tmp72.value;
if ($tmp73) goto block9; else goto block10;
block9:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:409
frost$core$Matcher* $tmp74 = *(&local2);
frost$core$Matcher$appendReplacement$frost$core$MutableString$frost$core$String$frost$core$Bit($tmp74, $tmp62, &$s75, $tmp65);
goto block8;
block10:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:411
frost$core$Matcher* $tmp76 = *(&local2);
frost$core$Matcher$appendTail$frost$core$MutableString($tmp76, $tmp62);
frost$core$Matcher* $tmp77 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp77));
*(&local2) = ((frost$core$Matcher*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp63));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:133
frost$core$MutableString* $tmp78 = *(&local0);
FROST_ASSERT(24 == sizeof(frost$core$RegularExpression));
frost$core$RegularExpression* $tmp79 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp79, &$s80);
// begin inline call to method frost.core.MutableString.replace(search:frost.core.RegularExpression, replacement:frost.core.String) from Markdown.frost:133:21
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:401
frost$core$Bit $tmp81 = (frost$core$Bit) {true};
// begin inline call to method frost.core.MutableString.replace(search:frost.core.RegularExpression, replacement:frost.core.String, allowGroupReferences:frost.core.Bit) from MutableString.frost:401:16
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:406
$fn83 $tmp82 = ($fn83) ((frost$core$Object*) $tmp78)->$class->vtable[0];
frost$core$String* $tmp84 = $tmp82(((frost$core$Object*) $tmp78));
frost$core$Matcher* $tmp85 = frost$core$RegularExpression$matcher$frost$core$String$R$frost$core$Matcher($tmp79, $tmp84);
*(&local3) = ((frost$core$Matcher*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp85));
frost$core$Matcher* $tmp86 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp86));
*(&local3) = $tmp85;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp85));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp84));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:407
frost$core$MutableString$clear($tmp78);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:408
goto block13;
block13:;
frost$core$Matcher* $tmp87 = *(&local3);
frost$core$Bit $tmp88 = frost$core$Matcher$find$R$frost$core$Bit($tmp87);
bool $tmp89 = $tmp88.value;
if ($tmp89) goto block14; else goto block15;
block14:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:409
frost$core$Matcher* $tmp90 = *(&local3);
frost$core$Matcher$appendReplacement$frost$core$MutableString$frost$core$String$frost$core$Bit($tmp90, $tmp78, &$s91, $tmp81);
goto block13;
block15:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:411
frost$core$Matcher* $tmp92 = *(&local3);
frost$core$Matcher$appendTail$frost$core$MutableString($tmp92, $tmp78);
frost$core$Matcher* $tmp93 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp93));
*(&local3) = ((frost$core$Matcher*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp79));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:136
frost$core$MutableString* $tmp94 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp94, &$s95);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:138
frost$core$MutableString* $tmp96 = *(&local0);
$fn98 $tmp97 = ($fn98) param0->$class->vtable[14];
$tmp97(param0, $tmp96);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:139
frost$core$MutableString* $tmp99 = *(&local0);
FROST_ASSERT(24 == sizeof(frost$core$RegularExpression));
frost$core$RegularExpression* $tmp100 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp100, &$s101);
// begin inline call to method frost.core.MutableString.replace(search:frost.core.RegularExpression, replacement:frost.core.String) from Markdown.frost:139:21
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:401
frost$core$Bit $tmp102 = (frost$core$Bit) {true};
// begin inline call to method frost.core.MutableString.replace(search:frost.core.RegularExpression, replacement:frost.core.String, allowGroupReferences:frost.core.Bit) from MutableString.frost:401:16
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:406
$fn104 $tmp103 = ($fn104) ((frost$core$Object*) $tmp99)->$class->vtable[0];
frost$core$String* $tmp105 = $tmp103(((frost$core$Object*) $tmp99));
frost$core$Matcher* $tmp106 = frost$core$RegularExpression$matcher$frost$core$String$R$frost$core$Matcher($tmp100, $tmp105);
*(&local4) = ((frost$core$Matcher*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp106));
frost$core$Matcher* $tmp107 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp107));
*(&local4) = $tmp106;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp106));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp105));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:407
frost$core$MutableString$clear($tmp99);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:408
goto block18;
block18:;
frost$core$Matcher* $tmp108 = *(&local4);
frost$core$Bit $tmp109 = frost$core$Matcher$find$R$frost$core$Bit($tmp108);
bool $tmp110 = $tmp109.value;
if ($tmp110) goto block19; else goto block20;
block19:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:409
frost$core$Matcher* $tmp111 = *(&local4);
frost$core$Matcher$appendReplacement$frost$core$MutableString$frost$core$String$frost$core$Bit($tmp111, $tmp99, &$s112, $tmp102);
goto block18;
block20:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:411
frost$core$Matcher* $tmp113 = *(&local4);
frost$core$Matcher$appendTail$frost$core$MutableString($tmp113, $tmp99);
frost$core$Matcher* $tmp114 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp114));
*(&local4) = ((frost$core$Matcher*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp100));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:140
frost$core$MutableString* $tmp115 = *(&local0);
$fn117 $tmp116 = ($fn117) param0->$class->vtable[8];
$tmp116(param0, $tmp115);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:141
frost$core$MutableString* $tmp118 = *(&local0);
$fn120 $tmp119 = ($fn120) param0->$class->vtable[5];
$tmp119(param0, $tmp118);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:142
frost$core$MutableString* $tmp121 = *(&local0);
$fn123 $tmp122 = ($fn123) param0->$class->vtable[6];
$tmp122(param0, $tmp121);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:143
frost$core$MutableString* $tmp124 = *(&local0);
$fn126 $tmp125 = ($fn126) param0->$class->vtable[11];
$tmp125(param0, $tmp124);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:145
frost$core$MutableString* $tmp127 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp127, &$s128);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:146
frost$core$MutableString* $tmp129 = *(&local0);
$fn131 $tmp130 = ($fn131) ((frost$core$Object*) $tmp129)->$class->vtable[0];
frost$core$String* $tmp132 = $tmp130(((frost$core$Object*) $tmp129));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp132));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp132));
frost$core$MutableString* $tmp133 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp133));
*(&local0) = ((frost$core$MutableString*) NULL);
return $tmp132;

}
void org$frostlang$frostc$frostdoc$Markdown$encodeBackslashEscapes$frost$core$MutableString(org$frostlang$frostc$frostdoc$Markdown* param0, frost$core$MutableString* param1) {

frost$collections$ListView* local0 = NULL;
frost$collections$ListView* local1 = NULL;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:150
// begin inline call to function frost.core.String.get_utf8():frost.collections.ListView<frost.core.Char8> from Markdown.frost:150:34
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:458
FROST_ASSERT(24 == sizeof(frost$core$String$UTF8List));
frost$core$String$UTF8List* $tmp134 = (frost$core$String$UTF8List*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$String$UTF8List$class);
frost$core$String$UTF8List$init$frost$core$String($tmp134, &$s135);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp134)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp134));
*(&local0) = ((frost$collections$ListView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp134)));
frost$collections$ListView* $tmp136 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp136));
*(&local0) = ((frost$collections$ListView*) $tmp134);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp134)));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:151
// begin inline call to function frost.core.String.get_utf8():frost.collections.ListView<frost.core.Char8> from Markdown.frost:151:42
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:458
FROST_ASSERT(24 == sizeof(frost$core$String$UTF8List));
frost$core$String$UTF8List* $tmp137 = (frost$core$String$UTF8List*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$String$UTF8List$class);
frost$core$String$UTF8List$init$frost$core$String($tmp137, &$s138);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp137)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp137));
*(&local1) = ((frost$collections$ListView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp137)));
frost$collections$ListView* $tmp139 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp139));
*(&local1) = ((frost$collections$ListView*) $tmp137);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp137)));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:154
org$frostlang$frostc$frostdoc$Protector** $tmp140 = &param0->charProtector;
org$frostlang$frostc$frostdoc$Protector* $tmp141 = *$tmp140;
$fn143 $tmp142 = ($fn143) $tmp141->$class->vtable[2];
frost$core$String* $tmp144 = $tmp142($tmp141, &$s145);
frost$core$MutableString$replace$frost$core$String$frost$core$String(param1, &$s146, $tmp144);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp144));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:157
frost$collections$ListView* $tmp147 = *(&local0);
$fn149 $tmp148 = ($fn149) param0->$class->vtable[4];
$tmp148(param0, param1, $tmp147, &$s150);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:158
frost$collections$ListView* $tmp151 = *(&local1);
$fn153 $tmp152 = ($fn153) param0->$class->vtable[4];
$tmp152(param0, param1, $tmp151, &$s154);
frost$collections$ListView* $tmp155 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp155));
*(&local1) = ((frost$collections$ListView*) NULL);
frost$collections$ListView* $tmp156 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp156));
*(&local0) = ((frost$collections$ListView*) NULL);
return;

}
void org$frostlang$frostc$frostdoc$Markdown$encodeEscapes$frost$core$MutableString$frost$collections$ListView$LTfrost$core$Char8$GT$frost$core$String(org$frostlang$frostc$frostdoc$Markdown* param0, frost$core$MutableString* param1, frost$collections$ListView* param2, frost$core$String* param3) {

frost$core$Char8 local0;
frost$core$RegularExpression* local1 = NULL;
frost$core$Matcher* local2 = NULL;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:162
ITable* $tmp157 = ((frost$collections$Iterable*) param2)->$class->itable;
while ($tmp157->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp157 = $tmp157->next;
}
$fn159 $tmp158 = $tmp157->methods[0];
frost$collections$Iterator* $tmp160 = $tmp158(((frost$collections$Iterable*) param2));
goto block1;
block1:;
ITable* $tmp161 = $tmp160->$class->itable;
while ($tmp161->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp161 = $tmp161->next;
}
$fn163 $tmp162 = $tmp161->methods[0];
frost$core$Bit $tmp164 = $tmp162($tmp160);
bool $tmp165 = $tmp164.value;
if ($tmp165) goto block3; else goto block2;
block2:;
ITable* $tmp166 = $tmp160->$class->itable;
while ($tmp166->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp166 = $tmp166->next;
}
$fn168 $tmp167 = $tmp166->methods[1];
frost$core$Object* $tmp169 = $tmp167($tmp160);
*(&local0) = ((frost$core$Char8$wrapper*) $tmp169)->value;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:163
FROST_ASSERT(24 == sizeof(frost$core$RegularExpression));
frost$core$RegularExpression* $tmp170 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$String* $tmp171 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s172, param3);
frost$core$Char8 $tmp173 = *(&local0);
frost$core$Char8$wrapper* $tmp174;
$tmp174 = (frost$core$Char8$wrapper*) frostObjectAlloc(17, (frost$core$Class*) &frost$core$Char8$wrapperclass);
$tmp174->value = $tmp173;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Markdown.frost:163:61
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:560
$fn176 $tmp175 = ($fn176) ((frost$core$Object*) $tmp174)->$class->vtable[0];
frost$core$String* $tmp177 = $tmp175(((frost$core$Object*) $tmp174));
frost$core$String* $tmp178 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp171, $tmp177);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp178));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp178));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp177));
frost$core$RegularExpression$init$frost$core$String($tmp170, $tmp178);
*(&local1) = ((frost$core$RegularExpression*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp170));
frost$core$RegularExpression* $tmp179 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp179));
*(&local1) = $tmp170;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp178));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp174));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp171));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp170));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:164
frost$core$RegularExpression* $tmp180 = *(&local1);
org$frostlang$frostc$frostdoc$Protector** $tmp181 = &param0->charProtector;
org$frostlang$frostc$frostdoc$Protector* $tmp182 = *$tmp181;
frost$core$Char8 $tmp183 = *(&local0);
frost$core$Char8$wrapper* $tmp184;
$tmp184 = (frost$core$Char8$wrapper*) frostObjectAlloc(17, (frost$core$Class*) &frost$core$Char8$wrapperclass);
$tmp184->value = $tmp183;
$fn186 $tmp185 = ($fn186) ((frost$core$Object*) $tmp184)->$class->vtable[0];
frost$core$String* $tmp187 = $tmp185(((frost$core$Object*) $tmp184));
$fn189 $tmp188 = ($fn189) $tmp182->$class->vtable[2];
frost$core$String* $tmp190 = $tmp188($tmp182, $tmp187);
frost$core$Bit $tmp191 = (frost$core$Bit) {false};
// begin inline call to method frost.core.MutableString.replace(search:frost.core.RegularExpression, replacement:frost.core.String, allowGroupReferences:frost.core.Bit) from Markdown.frost:164:25
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:406
$fn193 $tmp192 = ($fn193) ((frost$core$Object*) param1)->$class->vtable[0];
frost$core$String* $tmp194 = $tmp192(((frost$core$Object*) param1));
frost$core$Matcher* $tmp195 = frost$core$RegularExpression$matcher$frost$core$String$R$frost$core$Matcher($tmp180, $tmp194);
*(&local2) = ((frost$core$Matcher*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp195));
frost$core$Matcher* $tmp196 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp196));
*(&local2) = $tmp195;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp195));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp194));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:407
frost$core$MutableString$clear(param1);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:408
goto block6;
block6:;
frost$core$Matcher* $tmp197 = *(&local2);
frost$core$Bit $tmp198 = frost$core$Matcher$find$R$frost$core$Bit($tmp197);
bool $tmp199 = $tmp198.value;
if ($tmp199) goto block7; else goto block8;
block7:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:409
frost$core$Matcher* $tmp200 = *(&local2);
frost$core$Matcher$appendReplacement$frost$core$MutableString$frost$core$String$frost$core$Bit($tmp200, param1, $tmp190, $tmp191);
goto block6;
block8:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:411
frost$core$Matcher* $tmp201 = *(&local2);
// begin inline call to method frost.core.Matcher.appendTail(target:frost.core.MutableString) from MutableString.frost:411:27
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Matcher.frost:171
frost$core$String** $tmp202 = &$tmp201->searchText;
frost$core$String* $tmp203 = *$tmp202;
frost$core$String$Index* $tmp204 = &$tmp201->replacementIndex;
frost$core$String$Index $tmp205 = *$tmp204;
frost$core$Bit $tmp206 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$String$Index$Q$GT $tmp207 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { $tmp205, true }), ((frost$core$String$Index$nullable) { .nonnull = false }), $tmp206);
frost$core$String* $tmp208 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String($tmp203, $tmp207);
frost$core$MutableString$append$frost$core$String(param1, $tmp208);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp208));
frost$core$Matcher* $tmp209 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp209));
*(&local2) = ((frost$core$Matcher*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp190));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp187));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp184));
frost$core$RegularExpression* $tmp210 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp210));
*(&local1) = ((frost$core$RegularExpression*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp169);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp160));
return;

}
void org$frostlang$frostc$frostdoc$Markdown$stripLinkDefinitions$frost$core$MutableString(org$frostlang$frostc$frostdoc$Markdown* param0, frost$core$MutableString* param1) {

frost$core$RegularExpression* local0 = NULL;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:169
FROST_ASSERT(24 == sizeof(frost$core$RegularExpression));
frost$core$RegularExpression* $tmp211 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$String* $tmp212 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s213, &$s214);
frost$core$String* $tmp215 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp212, &$s216);
frost$core$String* $tmp217 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp215, &$s218);
frost$core$String* $tmp219 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp217, &$s220);
frost$core$Int $tmp221 = (frost$core$Int) {1u};
frost$core$RegularExpression$init$frost$core$String$frost$core$Int($tmp211, $tmp219, $tmp221);
*(&local0) = ((frost$core$RegularExpression*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp211));
frost$core$RegularExpression* $tmp222 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp222));
*(&local0) = $tmp211;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp219));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp217));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp215));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp212));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp211));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:177
frost$core$RegularExpression* $tmp223 = *(&local0);
FROST_ASSERT(24 == sizeof(org$frostlang$frostc$frostdoc$Markdown$_Closure2));
org$frostlang$frostc$frostdoc$Markdown$_Closure2* $tmp224 = (org$frostlang$frostc$frostdoc$Markdown$_Closure2*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$frostdoc$Markdown$_Closure2$class);
org$frostlang$frostc$frostdoc$Markdown$_Closure2$init$org$frostlang$frostc$frostdoc$Markdown($tmp224, param0);
FROST_ASSERT(32 == sizeof(frost$core$MutableMethod));
frost$core$MutableMethod* $tmp226 = (frost$core$MutableMethod*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$MutableMethod$class);
// begin inline call to frost.core.MutableMethod.init(pointer:frost.unsafe.Pointer<frost.core.Int8>, target:frost.core.Object?) from Markdown.frost:177:25
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableMethod.frost:32
frost$core$Int8** $tmp227 = &$tmp226->pointer;
*$tmp227 = ((frost$core$Int8*) org$frostlang$frostc$frostdoc$Markdown$_Closure2$$anonymous1$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$String);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableMethod.frost:33
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp224));
frost$core$Object** $tmp228 = &$tmp226->target;
frost$core$Object* $tmp229 = *$tmp228;
frost$core$Frost$unref$frost$core$Object$Q($tmp229);
frost$core$Object** $tmp230 = &$tmp226->target;
*$tmp230 = ((frost$core$Object*) $tmp224);
frost$core$MutableString$replace$frost$core$RegularExpression$$LPfrost$collections$ListView$LTfrost$core$String$Q$GT$RP$EQ$GT$LPfrost$core$Object$RP(param1, $tmp223, $tmp226);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp226));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp224));
frost$core$RegularExpression* $tmp231 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp231));
*(&local0) = ((frost$core$RegularExpression*) NULL);
return;

}
void org$frostlang$frostc$frostdoc$Markdown$runBlockGamut$frost$core$MutableString(org$frostlang$frostc$frostdoc$Markdown* param0, frost$core$MutableString* param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:199
$fn233 $tmp232 = ($fn233) param0->$class->vtable[21];
$tmp232(param0, param1);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:200
$fn235 $tmp234 = ($fn235) param0->$class->vtable[7];
$tmp234(param0, param1);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:201
$fn237 $tmp236 = ($fn237) param0->$class->vtable[19];
$tmp236(param0, param1);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:202
$fn239 $tmp238 = ($fn239) param0->$class->vtable[15];
$tmp238(param0, param1);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:203
$fn241 $tmp240 = ($fn241) param0->$class->vtable[13];
$tmp240(param0, param1);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:204
$fn243 $tmp242 = ($fn243) param0->$class->vtable[8];
$tmp242(param0, param1);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:205
$fn245 $tmp244 = ($fn245) param0->$class->vtable[9];
$tmp244(param0, param1);
return;

}
void org$frostlang$frostc$frostdoc$Markdown$doHorizontalRules$frost$core$MutableString(org$frostlang$frostc$frostdoc$Markdown* param0, frost$core$MutableString* param1) {

frost$collections$Array* local0 = NULL;
frost$core$String* local1 = NULL;
frost$core$Matcher* local2 = NULL;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:209
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp246 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp246);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp246));
frost$collections$Array* $tmp247 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp247));
*(&local0) = $tmp246;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp246));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:210
frost$collections$Array* $tmp248 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp248, ((frost$core$Object*) &$s249));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:211
frost$collections$Array* $tmp250 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp250, ((frost$core$Object*) &$s251));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:212
frost$collections$Array* $tmp252 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp252, ((frost$core$Object*) &$s253));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:213
frost$collections$Array* $tmp254 = *(&local0);
ITable* $tmp255 = ((frost$collections$Iterable*) $tmp254)->$class->itable;
while ($tmp255->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp255 = $tmp255->next;
}
$fn257 $tmp256 = $tmp255->methods[0];
frost$collections$Iterator* $tmp258 = $tmp256(((frost$collections$Iterable*) $tmp254));
goto block1;
block1:;
ITable* $tmp259 = $tmp258->$class->itable;
while ($tmp259->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp259 = $tmp259->next;
}
$fn261 $tmp260 = $tmp259->methods[0];
frost$core$Bit $tmp262 = $tmp260($tmp258);
bool $tmp263 = $tmp262.value;
if ($tmp263) goto block3; else goto block2;
block2:;
*(&local1) = ((frost$core$String*) NULL);
ITable* $tmp264 = $tmp258->$class->itable;
while ($tmp264->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp264 = $tmp264->next;
}
$fn266 $tmp265 = $tmp264->methods[1];
frost$core$Object* $tmp267 = $tmp265($tmp258);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) $tmp267)));
frost$core$String* $tmp268 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp268));
*(&local1) = ((frost$core$String*) $tmp267);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:214
FROST_ASSERT(24 == sizeof(frost$core$RegularExpression));
frost$core$RegularExpression* $tmp269 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$String* $tmp270 = *(&local1);
frost$core$String* $tmp271 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s272, $tmp270);
frost$core$String* $tmp273 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp271, &$s274);
frost$core$RegularExpression$init$frost$core$String($tmp269, $tmp273);
// begin inline call to method frost.core.MutableString.replace(search:frost.core.RegularExpression, replacement:frost.core.String) from Markdown.frost:214:25
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:401
frost$core$Bit $tmp275 = (frost$core$Bit) {true};
// begin inline call to method frost.core.MutableString.replace(search:frost.core.RegularExpression, replacement:frost.core.String, allowGroupReferences:frost.core.Bit) from MutableString.frost:401:16
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:406
$fn277 $tmp276 = ($fn277) ((frost$core$Object*) param1)->$class->vtable[0];
frost$core$String* $tmp278 = $tmp276(((frost$core$Object*) param1));
frost$core$Matcher* $tmp279 = frost$core$RegularExpression$matcher$frost$core$String$R$frost$core$Matcher($tmp269, $tmp278);
*(&local2) = ((frost$core$Matcher*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp279));
frost$core$Matcher* $tmp280 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp280));
*(&local2) = $tmp279;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp279));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp278));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:407
frost$core$MutableString$clear(param1);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:408
goto block6;
block6:;
frost$core$Matcher* $tmp281 = *(&local2);
frost$core$Bit $tmp282 = frost$core$Matcher$find$R$frost$core$Bit($tmp281);
bool $tmp283 = $tmp282.value;
if ($tmp283) goto block7; else goto block8;
block7:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:409
frost$core$Matcher* $tmp284 = *(&local2);
frost$core$Matcher$appendReplacement$frost$core$MutableString$frost$core$String$frost$core$Bit($tmp284, param1, &$s285, $tmp275);
goto block6;
block8:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:411
frost$core$Matcher* $tmp286 = *(&local2);
frost$core$Matcher$appendTail$frost$core$MutableString($tmp286, param1);
frost$core$Matcher* $tmp287 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp287));
*(&local2) = ((frost$core$Matcher*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp273));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp271));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp269));
frost$core$Frost$unref$frost$core$Object$Q($tmp267);
frost$core$String* $tmp288 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp288));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp258));
frost$collections$Array* $tmp289 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp289));
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
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:227
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp290 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp290);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp290));
frost$collections$Array* $tmp291 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp291));
*(&local0) = $tmp290;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp290));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:228
frost$collections$Array* $tmp292 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp292, ((frost$core$Object*) &$s293));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:229
frost$collections$Array* $tmp294 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp294, ((frost$core$Object*) &$s295));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:230
frost$collections$Array* $tmp296 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp296, ((frost$core$Object*) &$s297));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:231
frost$collections$Array* $tmp298 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp298, ((frost$core$Object*) &$s299));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:232
frost$collections$Array* $tmp300 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp300, ((frost$core$Object*) &$s301));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:233
frost$collections$Array* $tmp302 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp302, ((frost$core$Object*) &$s303));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:234
frost$collections$Array* $tmp304 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp304, ((frost$core$Object*) &$s305));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:235
frost$collections$Array* $tmp306 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp306, ((frost$core$Object*) &$s307));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:236
frost$collections$Array* $tmp308 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp308, ((frost$core$Object*) &$s309));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:237
frost$collections$Array* $tmp310 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp310, ((frost$core$Object*) &$s311));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:238
frost$collections$Array* $tmp312 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp312, ((frost$core$Object*) &$s313));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:239
frost$collections$Array* $tmp314 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp314, ((frost$core$Object*) &$s315));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:240
frost$collections$Array* $tmp316 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp316, ((frost$core$Object*) &$s317));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:241
frost$collections$Array* $tmp318 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp318, ((frost$core$Object*) &$s319));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:242
frost$collections$Array* $tmp320 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp320, ((frost$core$Object*) &$s321));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:243
frost$collections$Array* $tmp322 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp322, ((frost$core$Object*) &$s323));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:244
frost$collections$Array* $tmp324 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp324, ((frost$core$Object*) &$s325));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:245
frost$collections$Array* $tmp326 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp326, ((frost$core$Object*) &$s327));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:246
frost$collections$Array* $tmp328 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp328, ((frost$core$Object*) &$s329));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:247
frost$collections$Array* $tmp330 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp330, ((frost$core$Object*) &$s331));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:248
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp332 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp332);
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp332));
frost$collections$Array* $tmp333 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp333));
*(&local1) = $tmp332;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp332));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:249
frost$collections$Array* $tmp334 = *(&local1);
frost$collections$Array$add$frost$collections$Array$T($tmp334, ((frost$core$Object*) &$s335));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:250
frost$collections$Array* $tmp336 = *(&local1);
frost$collections$Array$add$frost$collections$Array$T($tmp336, ((frost$core$Object*) &$s337));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:252
frost$collections$Array* $tmp338 = *(&local0);
ITable* $tmp339 = ((frost$collections$CollectionView*) $tmp338)->$class->itable;
while ($tmp339->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp339 = $tmp339->next;
}
$fn341 $tmp340 = $tmp339->methods[2];
frost$core$String* $tmp342 = $tmp340(((frost$collections$CollectionView*) $tmp338), &$s343);
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp342));
frost$core$String* $tmp344 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp344));
*(&local2) = $tmp342;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp342));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:253
frost$core$String* $tmp345 = *(&local2);
// begin inline call to function frost.core.String.get_asString():frost.core.String from Markdown.frost:253:32
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:390
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp345));
frost$core$String* $tmp346 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp345, &$s347);
frost$collections$Array* $tmp348 = *(&local1);
ITable* $tmp349 = ((frost$collections$CollectionView*) $tmp348)->$class->itable;
while ($tmp349->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp349 = $tmp349->next;
}
$fn351 $tmp350 = $tmp349->methods[2];
frost$core$String* $tmp352 = $tmp350(((frost$collections$CollectionView*) $tmp348), &$s353);
frost$core$String* $tmp354 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp346, $tmp352);
frost$core$String* $tmp355 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp354, &$s356);
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp355));
frost$core$String* $tmp357 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp357));
*(&local3) = $tmp355;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp355));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp354));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp352));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp346));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp345));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:255
frost$core$Int $tmp358 = (frost$core$Int) {4u};
frost$core$Int $tmp359 = (frost$core$Int) {1u};
int64_t $tmp360 = $tmp358.value;
int64_t $tmp361 = $tmp359.value;
int64_t $tmp362 = $tmp360 - $tmp361;
frost$core$Int $tmp363 = (frost$core$Int) {$tmp362};
*(&local4) = $tmp363;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:268
FROST_ASSERT(24 == sizeof(frost$core$RegularExpression));
frost$core$RegularExpression* $tmp364 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$String* $tmp365 = *(&local2);
frost$core$String* $tmp366 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s367, $tmp365);
frost$core$String* $tmp368 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp366, &$s369);
frost$core$String* $tmp370 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp368, &$s371);
frost$core$String* $tmp372 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp370, &$s373);
frost$core$String* $tmp374 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp372, &$s375);
frost$core$String* $tmp376 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp374, &$s377);
frost$core$String* $tmp378 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp376, &$s379);
frost$core$Int $tmp380 = (frost$core$Int) {1u};
frost$core$Int $tmp381 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.||(other:frost.core.Int):frost.core.Int from Markdown.frost:275:45
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int.frost:329
int64_t $tmp382 = $tmp380.value;
int64_t $tmp383 = $tmp381.value;
int64_t $tmp384 = $tmp382 | $tmp383;
frost$core$Int $tmp385 = (frost$core$Int) {$tmp384};
frost$core$RegularExpression$init$frost$core$String$frost$core$Int($tmp364, $tmp378, $tmp385);
*(&local5) = ((frost$core$RegularExpression*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp364));
frost$core$RegularExpression* $tmp386 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp386));
*(&local5) = $tmp364;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp378));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp376));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp374));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp372));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp370));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp368));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp366));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp364));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:277
FROST_ASSERT(24 == sizeof(org$frostlang$frostc$frostdoc$Markdown$_Closure4));
org$frostlang$frostc$frostdoc$Markdown$_Closure4* $tmp387 = (org$frostlang$frostc$frostdoc$Markdown$_Closure4*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$frostdoc$Markdown$_Closure4$class);
org$frostlang$frostc$frostdoc$Markdown$_Closure4$init$org$frostlang$frostc$frostdoc$Markdown($tmp387, param0);
FROST_ASSERT(32 == sizeof(frost$core$MutableMethod));
frost$core$MutableMethod* $tmp389 = (frost$core$MutableMethod*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$MutableMethod$class);
// begin inline call to frost.core.MutableMethod.init(pointer:frost.unsafe.Pointer<frost.core.Int8>, target:frost.core.Object?) from Markdown.frost:277:9
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableMethod.frost:32
frost$core$Int8** $tmp390 = &$tmp389->pointer;
*$tmp390 = ((frost$core$Int8*) org$frostlang$frostc$frostdoc$Markdown$_Closure4$$anonymous3$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$String);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableMethod.frost:33
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp387));
frost$core$Object** $tmp391 = &$tmp389->target;
frost$core$Object* $tmp392 = *$tmp391;
frost$core$Frost$unref$frost$core$Object$Q($tmp392);
frost$core$Object** $tmp393 = &$tmp389->target;
*$tmp393 = ((frost$core$Object*) $tmp387);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:277
*(&local6) = ((frost$core$MutableMethod*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp389));
frost$core$MutableMethod* $tmp394 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp394));
*(&local6) = $tmp389;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:281
frost$core$RegularExpression* $tmp395 = *(&local5);
frost$core$MutableMethod* $tmp396 = *(&local6);
frost$core$MutableString$replace$frost$core$RegularExpression$$LPfrost$collections$ListView$LTfrost$core$String$Q$GT$RP$EQ$GT$LPfrost$core$Object$RP(param1, $tmp395, $tmp396);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:284
FROST_ASSERT(24 == sizeof(frost$core$RegularExpression));
frost$core$RegularExpression* $tmp397 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$String* $tmp398 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s399, &$s400);
frost$core$String* $tmp401 = *(&local3);
frost$core$String* $tmp402 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp398, $tmp401);
frost$core$String* $tmp403 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp402, &$s404);
frost$core$String* $tmp405 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp403, &$s406);
frost$core$String* $tmp407 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp405, &$s408);
frost$core$String* $tmp409 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp407, &$s410);
frost$core$String* $tmp411 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp409, &$s412);
frost$core$String* $tmp413 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp411, &$s414);
frost$core$Int $tmp415 = (frost$core$Int) {1u};
frost$core$Int $tmp416 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.||(other:frost.core.Int):frost.core.Int from Markdown.frost:292:45
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int.frost:329
int64_t $tmp417 = $tmp415.value;
int64_t $tmp418 = $tmp416.value;
int64_t $tmp419 = $tmp417 | $tmp418;
frost$core$Int $tmp420 = (frost$core$Int) {$tmp419};
frost$core$RegularExpression$init$frost$core$String$frost$core$Int($tmp397, $tmp413, $tmp420);
*(&local7) = ((frost$core$RegularExpression*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp397));
frost$core$RegularExpression* $tmp421 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp421));
*(&local7) = $tmp397;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp413));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp411));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp409));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp407));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp405));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp403));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp402));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp398));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp397));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:293
frost$core$RegularExpression* $tmp422 = *(&local7);
frost$core$MutableMethod* $tmp423 = *(&local6);
frost$core$MutableString$replace$frost$core$RegularExpression$$LPfrost$collections$ListView$LTfrost$core$String$Q$GT$RP$EQ$GT$LPfrost$core$Object$RP(param1, $tmp422, $tmp423);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:296
FROST_ASSERT(24 == sizeof(frost$core$RegularExpression));
frost$core$RegularExpression* $tmp424 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$String* $tmp425 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s426, &$s427);
frost$core$String* $tmp428 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp425, &$s429);
frost$core$String* $tmp430 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp428, &$s431);
frost$core$String* $tmp432 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp430, &$s433);
frost$core$String* $tmp434 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp432, &$s435);
frost$core$Int $tmp436 = *(&local4);
frost$core$Int$wrapper* $tmp437;
$tmp437 = (frost$core$Int$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp437->value = $tmp436;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Markdown.frost:302:26
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:560
$fn439 $tmp438 = ($fn439) ((frost$core$Object*) $tmp437)->$class->vtable[0];
frost$core$String* $tmp440 = $tmp438(((frost$core$Object*) $tmp437));
frost$core$String* $tmp441 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp434, $tmp440);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp441));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp441));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp440));
frost$core$String* $tmp442 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp441, &$s443);
frost$core$String* $tmp444 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp442, &$s445);
frost$core$String* $tmp446 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp444, &$s447);
frost$core$String* $tmp448 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp446, &$s449);
frost$core$String* $tmp450 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp448, &$s451);
frost$core$String* $tmp452 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp450, &$s453);
frost$core$String* $tmp454 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp452, &$s455);
frost$core$Int $tmp456 = (frost$core$Int) {2u};
frost$core$RegularExpression$init$frost$core$String$frost$core$Int($tmp424, $tmp454, $tmp456);
*(&local8) = ((frost$core$RegularExpression*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp424));
frost$core$RegularExpression* $tmp457 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp457));
*(&local8) = $tmp424;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp454));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp452));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp450));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp448));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp446));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp444));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp442));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp441));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp437));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp434));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp432));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp430));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp428));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp425));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp424));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:310
frost$core$RegularExpression* $tmp458 = *(&local8);
frost$core$MutableMethod* $tmp459 = *(&local6);
frost$core$MutableString$replace$frost$core$RegularExpression$$LPfrost$collections$ListView$LTfrost$core$String$Q$GT$RP$EQ$GT$LPfrost$core$Object$RP(param1, $tmp458, $tmp459);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:313
FROST_ASSERT(24 == sizeof(frost$core$RegularExpression));
frost$core$RegularExpression* $tmp460 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$String* $tmp461 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s462, &$s463);
frost$core$String* $tmp464 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp461, &$s465);
frost$core$String* $tmp466 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp464, &$s467);
frost$core$String* $tmp468 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp466, &$s469);
frost$core$String* $tmp470 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp468, &$s471);
frost$core$Int $tmp472 = *(&local4);
frost$core$Int$wrapper* $tmp473;
$tmp473 = (frost$core$Int$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp473->value = $tmp472;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Markdown.frost:319:26
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:560
$fn475 $tmp474 = ($fn475) ((frost$core$Object*) $tmp473)->$class->vtable[0];
frost$core$String* $tmp476 = $tmp474(((frost$core$Object*) $tmp473));
frost$core$String* $tmp477 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp470, $tmp476);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp477));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp477));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp476));
frost$core$String* $tmp478 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp477, &$s479);
frost$core$String* $tmp480 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp478, &$s481);
frost$core$String* $tmp482 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp480, &$s483);
frost$core$String* $tmp484 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp482, &$s485);
frost$core$String* $tmp486 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp484, &$s487);
frost$core$String* $tmp488 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp486, &$s489);
frost$core$String* $tmp490 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp488, &$s491);
frost$core$String* $tmp492 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp490, &$s493);
frost$core$String* $tmp494 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp492, &$s495);
frost$core$RegularExpression$init$frost$core$String($tmp460, $tmp494);
*(&local9) = ((frost$core$RegularExpression*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp460));
frost$core$RegularExpression* $tmp496 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp496));
*(&local9) = $tmp460;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp494));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp492));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp490));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp488));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp486));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp484));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp482));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp480));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp478));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp477));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp473));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp470));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp468));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp466));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp464));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp461));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp460));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:328
frost$core$RegularExpression* $tmp497 = *(&local9);
frost$core$MutableMethod* $tmp498 = *(&local6);
frost$core$MutableString$replace$frost$core$RegularExpression$$LPfrost$collections$ListView$LTfrost$core$String$Q$GT$RP$EQ$GT$LPfrost$core$Object$RP(param1, $tmp497, $tmp498);
frost$core$RegularExpression* $tmp499 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp499));
*(&local9) = ((frost$core$RegularExpression*) NULL);
frost$core$RegularExpression* $tmp500 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp500));
*(&local8) = ((frost$core$RegularExpression*) NULL);
frost$core$RegularExpression* $tmp501 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp501));
*(&local7) = ((frost$core$RegularExpression*) NULL);
frost$core$MutableMethod* $tmp502 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp502));
*(&local6) = ((frost$core$MutableMethod*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp389));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp387));
frost$core$RegularExpression* $tmp503 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp503));
*(&local5) = ((frost$core$RegularExpression*) NULL);
frost$core$String* $tmp504 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp504));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp505 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp505));
*(&local2) = ((frost$core$String*) NULL);
frost$collections$Array* $tmp506 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp506));
*(&local1) = ((frost$collections$Array*) NULL);
frost$collections$Array* $tmp507 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp507));
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
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:332
FROST_ASSERT(24 == sizeof(frost$core$RegularExpression));
frost$core$RegularExpression* $tmp508 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp508, &$s509);
// begin inline call to method frost.core.MutableString.replace(search:frost.core.RegularExpression, replacement:frost.core.String) from Markdown.frost:332:23
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:401
frost$core$Bit $tmp510 = (frost$core$Bit) {true};
// begin inline call to method frost.core.MutableString.replace(search:frost.core.RegularExpression, replacement:frost.core.String, allowGroupReferences:frost.core.Bit) from MutableString.frost:401:16
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:406
$fn512 $tmp511 = ($fn512) ((frost$core$Object*) param1)->$class->vtable[0];
frost$core$String* $tmp513 = $tmp511(((frost$core$Object*) param1));
frost$core$Matcher* $tmp514 = frost$core$RegularExpression$matcher$frost$core$String$R$frost$core$Matcher($tmp508, $tmp513);
*(&local0) = ((frost$core$Matcher*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp514));
frost$core$Matcher* $tmp515 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp515));
*(&local0) = $tmp514;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp514));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp513));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:407
frost$core$MutableString$clear(param1);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:408
goto block3;
block3:;
frost$core$Matcher* $tmp516 = *(&local0);
frost$core$Bit $tmp517 = frost$core$Matcher$find$R$frost$core$Bit($tmp516);
bool $tmp518 = $tmp517.value;
if ($tmp518) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:409
frost$core$Matcher* $tmp519 = *(&local0);
frost$core$Matcher$appendReplacement$frost$core$MutableString$frost$core$String$frost$core$Bit($tmp519, param1, &$s520, $tmp510);
goto block3;
block5:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:411
frost$core$Matcher* $tmp521 = *(&local0);
frost$core$Matcher$appendTail$frost$core$MutableString($tmp521, param1);
frost$core$Matcher* $tmp522 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp522));
*(&local0) = ((frost$core$Matcher*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp508));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:333
FROST_ASSERT(24 == sizeof(frost$core$RegularExpression));
frost$core$RegularExpression* $tmp523 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp523, &$s524);
// begin inline call to method frost.core.MutableString.replace(search:frost.core.RegularExpression, replacement:frost.core.String) from Markdown.frost:333:23
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:401
frost$core$Bit $tmp525 = (frost$core$Bit) {true};
// begin inline call to method frost.core.MutableString.replace(search:frost.core.RegularExpression, replacement:frost.core.String, allowGroupReferences:frost.core.Bit) from MutableString.frost:401:16
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:406
$fn527 $tmp526 = ($fn527) ((frost$core$Object*) param1)->$class->vtable[0];
frost$core$String* $tmp528 = $tmp526(((frost$core$Object*) param1));
frost$core$Matcher* $tmp529 = frost$core$RegularExpression$matcher$frost$core$String$R$frost$core$Matcher($tmp523, $tmp528);
*(&local1) = ((frost$core$Matcher*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp529));
frost$core$Matcher* $tmp530 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp530));
*(&local1) = $tmp529;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp529));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp528));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:407
frost$core$MutableString$clear(param1);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:408
goto block8;
block8:;
frost$core$Matcher* $tmp531 = *(&local1);
frost$core$Bit $tmp532 = frost$core$Matcher$find$R$frost$core$Bit($tmp531);
bool $tmp533 = $tmp532.value;
if ($tmp533) goto block9; else goto block10;
block9:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:409
frost$core$Matcher* $tmp534 = *(&local1);
frost$core$Matcher$appendReplacement$frost$core$MutableString$frost$core$String$frost$core$Bit($tmp534, param1, &$s535, $tmp525);
goto block8;
block10:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:411
frost$core$Matcher* $tmp536 = *(&local1);
frost$core$Matcher$appendTail$frost$core$MutableString($tmp536, param1);
frost$core$Matcher* $tmp537 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp537));
*(&local1) = ((frost$core$Matcher*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp523));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:335
*(&local2) = ((frost$collections$Array*) NULL);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:336
// begin inline call to function frost.core.MutableString.get_byteLength():frost.core.Int from Markdown.frost:336:18
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:173
frost$core$Int* $tmp538 = &param1->_length;
frost$core$Int $tmp539 = *$tmp538;
frost$core$Int $tmp540 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Markdown.frost:336:30
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int.frost:426
int64_t $tmp541 = $tmp539.value;
int64_t $tmp542 = $tmp540.value;
bool $tmp543 = $tmp541 == $tmp542;
frost$core$Bit $tmp544 = (frost$core$Bit) {$tmp543};
bool $tmp545 = $tmp544.value;
if ($tmp545) goto block11; else goto block13;
block11:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:337
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp546 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp546);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp546));
frost$collections$Array* $tmp547 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp547));
*(&local2) = $tmp546;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp546));
goto block12;
block13:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:339
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp548 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
$fn550 $tmp549 = ($fn550) ((frost$core$Object*) param1)->$class->vtable[0];
frost$core$String* $tmp551 = $tmp549(((frost$core$Object*) param1));
FROST_ASSERT(24 == sizeof(frost$core$RegularExpression));
frost$core$RegularExpression* $tmp552 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp552, &$s553);
// begin inline call to function frost.core.String.split(delimiter:frost.core.RegularExpression):frost.collections.Array<frost.core.String> from Markdown.frost:339:62
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1449
frost$core$Int64 $tmp554 = (frost$core$Int64) {9223372036854775807u};
// begin inline call to function frost.core.Int64.get_asInt():frost.core.Int from Int.frost:22:34
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:580
int64_t $tmp555 = $tmp554.value;
frost$core$Int $tmp556 = (frost$core$Int) {((int64_t) $tmp555)};
frost$collections$Array* $tmp557 = frost$core$String$split$frost$core$RegularExpression$frost$core$Int$R$frost$collections$Array$LTfrost$core$String$GT($tmp551, $tmp552, $tmp556);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp557));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp557));
frost$collections$Array$init$frost$collections$CollectionView$LTfrost$collections$Array$T$GT($tmp548, ((frost$collections$CollectionView*) $tmp557));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp548));
frost$collections$Array* $tmp558 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp558));
*(&local2) = $tmp548;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp557));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp552));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp551));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp548));
goto block12;
block12:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:341
frost$core$Int $tmp559 = (frost$core$Int) {0u};
frost$collections$Array* $tmp560 = *(&local2);
ITable* $tmp561 = ((frost$collections$CollectionView*) $tmp560)->$class->itable;
while ($tmp561->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp561 = $tmp561->next;
}
$fn563 $tmp562 = $tmp561->methods[0];
frost$core$Int $tmp564 = $tmp562(((frost$collections$CollectionView*) $tmp560));
frost$core$Bit $tmp565 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp566 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp559, $tmp564, $tmp565);
frost$core$Int $tmp567 = $tmp566.min;
*(&local3) = $tmp567;
frost$core$Int $tmp568 = $tmp566.max;
frost$core$Bit $tmp569 = $tmp566.inclusive;
bool $tmp570 = $tmp569.value;
frost$core$Int $tmp571 = (frost$core$Int) {1u};
if ($tmp570) goto block21; else goto block22;
block21:;
int64_t $tmp572 = $tmp567.value;
int64_t $tmp573 = $tmp568.value;
bool $tmp574 = $tmp572 <= $tmp573;
frost$core$Bit $tmp575 = (frost$core$Bit) {$tmp574};
bool $tmp576 = $tmp575.value;
if ($tmp576) goto block18; else goto block19;
block22:;
int64_t $tmp577 = $tmp567.value;
int64_t $tmp578 = $tmp568.value;
bool $tmp579 = $tmp577 < $tmp578;
frost$core$Bit $tmp580 = (frost$core$Bit) {$tmp579};
bool $tmp581 = $tmp580.value;
if ($tmp581) goto block18; else goto block19;
block18:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:342
frost$collections$Array* $tmp582 = *(&local2);
frost$core$Int $tmp583 = *(&local3);
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Markdown.frost:342:40
frost$core$Int $tmp584 = (frost$core$Int) {0u};
int64_t $tmp585 = $tmp583.value;
int64_t $tmp586 = $tmp584.value;
bool $tmp587 = $tmp585 >= $tmp586;
frost$core$Bit $tmp588 = (frost$core$Bit) {$tmp587};
bool $tmp589 = $tmp588.value;
if ($tmp589) goto block26; else goto block25;
block26:;
ITable* $tmp590 = ((frost$collections$CollectionView*) $tmp582)->$class->itable;
while ($tmp590->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp590 = $tmp590->next;
}
$fn592 $tmp591 = $tmp590->methods[0];
frost$core$Int $tmp593 = $tmp591(((frost$collections$CollectionView*) $tmp582));
int64_t $tmp594 = $tmp583.value;
int64_t $tmp595 = $tmp593.value;
bool $tmp596 = $tmp594 < $tmp595;
frost$core$Bit $tmp597 = (frost$core$Bit) {$tmp596};
bool $tmp598 = $tmp597.value;
if ($tmp598) goto block24; else goto block25;
block25:;
frost$core$Int $tmp599 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s600, $tmp599, &$s601);
abort(); // unreachable
block24:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp602 = &$tmp582->data;
frost$core$Object** $tmp603 = *$tmp602;
frost$core$Int64 $tmp604 = frost$core$Int64$init$frost$core$Int($tmp583);
int64_t $tmp605 = $tmp604.value;
frost$core$Object* $tmp606 = $tmp603[$tmp605];
frost$core$Frost$ref$frost$core$Object$Q($tmp606);
*(&local4) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) $tmp606)));
frost$core$String* $tmp607 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp607));
*(&local4) = ((frost$core$String*) $tmp606);
frost$core$Frost$unref$frost$core$Object$Q($tmp606);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:343
org$frostlang$frostc$frostdoc$Protector** $tmp608 = &param0->htmlProtector;
org$frostlang$frostc$frostdoc$Protector* $tmp609 = *$tmp608;
frost$core$String* $tmp610 = *(&local4);
$fn612 $tmp611 = ($fn612) $tmp609->$class->vtable[3];
frost$core$String* $tmp613 = $tmp611($tmp609, $tmp610);
*(&local5) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp613));
frost$core$String* $tmp614 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp614));
*(&local5) = $tmp613;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp613));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:344
frost$core$String* $tmp615 = *(&local5);
frost$core$Bit $tmp616 = (frost$core$Bit) {$tmp615 != NULL};
bool $tmp617 = $tmp616.value;
if ($tmp617) goto block27; else goto block29;
block27:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:345
frost$collections$Array* $tmp618 = *(&local2);
frost$core$Int $tmp619 = *(&local3);
frost$core$String* $tmp620 = *(&local5);
// begin inline call to method frost.collections.Array.[]:=(index:frost.core.Int, value:frost.collections.Array.T) from Markdown.frost:345:27
frost$core$Int $tmp621 = (frost$core$Int) {0u};
int64_t $tmp622 = $tmp619.value;
int64_t $tmp623 = $tmp621.value;
bool $tmp624 = $tmp622 >= $tmp623;
frost$core$Bit $tmp625 = (frost$core$Bit) {$tmp624};
bool $tmp626 = $tmp625.value;
if ($tmp626) goto block33; else goto block32;
block33:;
ITable* $tmp627 = ((frost$collections$CollectionView*) $tmp618)->$class->itable;
while ($tmp627->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp627 = $tmp627->next;
}
$fn629 $tmp628 = $tmp627->methods[0];
frost$core$Int $tmp630 = $tmp628(((frost$collections$CollectionView*) $tmp618));
int64_t $tmp631 = $tmp619.value;
int64_t $tmp632 = $tmp630.value;
bool $tmp633 = $tmp631 < $tmp632;
frost$core$Bit $tmp634 = (frost$core$Bit) {$tmp633};
bool $tmp635 = $tmp634.value;
if ($tmp635) goto block31; else goto block32;
block32:;
frost$core$Int $tmp636 = (frost$core$Int) {79u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s637, $tmp636, &$s638);
abort(); // unreachable
block31:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/Array.frost:80
frost$core$Object*** $tmp639 = &$tmp618->data;
frost$core$Object** $tmp640 = *$tmp639;
frost$core$Int64 $tmp641 = frost$core$Int64$init$frost$core$Int($tmp619);
int64_t $tmp642 = $tmp641.value;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp620));
frost$core$Object* $tmp643 = $tmp640[$tmp642];
frost$core$Frost$unref$frost$core$Object$Q($tmp643);
$tmp640[$tmp642] = ((frost$core$Object*) $tmp620);
goto block28;
block29:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:348
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp644 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$String* $tmp645 = *(&local4);
frost$core$MutableString$init$frost$core$String($tmp644, $tmp645);
*(&local6) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp644));
frost$core$MutableString* $tmp646 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp646));
*(&local6) = $tmp644;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp644));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:349
frost$core$MutableString* $tmp647 = *(&local6);
$fn649 $tmp648 = ($fn649) param0->$class->vtable[22];
$tmp648(param0, $tmp647);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:350
frost$collections$Array* $tmp650 = *(&local2);
frost$core$Int $tmp651 = *(&local3);
frost$core$MutableString* $tmp652 = *(&local6);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Markdown.frost:350:34
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:560
$fn654 $tmp653 = ($fn654) ((frost$core$Object*) $tmp652)->$class->vtable[0];
frost$core$String* $tmp655 = $tmp653(((frost$core$Object*) $tmp652));
frost$core$String* $tmp656 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s657, $tmp655);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp656));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp656));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp655));
frost$core$String* $tmp658 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp656, &$s659);
// begin inline call to method frost.collections.Array.[]:=(index:frost.core.Int, value:frost.collections.Array.T) from Markdown.frost:350:27
frost$core$Int $tmp660 = (frost$core$Int) {0u};
int64_t $tmp661 = $tmp651.value;
int64_t $tmp662 = $tmp660.value;
bool $tmp663 = $tmp661 >= $tmp662;
frost$core$Bit $tmp664 = (frost$core$Bit) {$tmp663};
bool $tmp665 = $tmp664.value;
if ($tmp665) goto block38; else goto block37;
block38:;
ITable* $tmp666 = ((frost$collections$CollectionView*) $tmp650)->$class->itable;
while ($tmp666->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp666 = $tmp666->next;
}
$fn668 $tmp667 = $tmp666->methods[0];
frost$core$Int $tmp669 = $tmp667(((frost$collections$CollectionView*) $tmp650));
int64_t $tmp670 = $tmp651.value;
int64_t $tmp671 = $tmp669.value;
bool $tmp672 = $tmp670 < $tmp671;
frost$core$Bit $tmp673 = (frost$core$Bit) {$tmp672};
bool $tmp674 = $tmp673.value;
if ($tmp674) goto block36; else goto block37;
block37:;
frost$core$Int $tmp675 = (frost$core$Int) {79u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s676, $tmp675, &$s677);
abort(); // unreachable
block36:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/Array.frost:80
frost$core$Object*** $tmp678 = &$tmp650->data;
frost$core$Object** $tmp679 = *$tmp678;
frost$core$Int64 $tmp680 = frost$core$Int64$init$frost$core$Int($tmp651);
int64_t $tmp681 = $tmp680.value;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp658));
frost$core$Object* $tmp682 = $tmp679[$tmp681];
frost$core$Frost$unref$frost$core$Object$Q($tmp682);
$tmp679[$tmp681] = ((frost$core$Object*) $tmp658);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp658));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp656));
frost$core$MutableString* $tmp683 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp683));
*(&local6) = ((frost$core$MutableString*) NULL);
goto block28;
block28:;
frost$core$String* $tmp684 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp684));
*(&local5) = ((frost$core$String*) NULL);
frost$core$String* $tmp685 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp685));
*(&local4) = ((frost$core$String*) NULL);
frost$core$Int $tmp686 = *(&local3);
int64_t $tmp687 = $tmp568.value;
int64_t $tmp688 = $tmp686.value;
int64_t $tmp689 = $tmp687 - $tmp688;
frost$core$Int $tmp690 = (frost$core$Int) {$tmp689};
if ($tmp570) goto block40; else goto block41;
block40:;
int64_t $tmp691 = $tmp690.value;
int64_t $tmp692 = $tmp571.value;
bool $tmp693 = $tmp691 >= $tmp692;
frost$core$Bit $tmp694 = (frost$core$Bit) {$tmp693};
bool $tmp695 = $tmp694.value;
if ($tmp695) goto block39; else goto block19;
block41:;
int64_t $tmp696 = $tmp690.value;
int64_t $tmp697 = $tmp571.value;
bool $tmp698 = $tmp696 > $tmp697;
frost$core$Bit $tmp699 = (frost$core$Bit) {$tmp698};
bool $tmp700 = $tmp699.value;
if ($tmp700) goto block39; else goto block19;
block39:;
int64_t $tmp701 = $tmp686.value;
int64_t $tmp702 = $tmp571.value;
int64_t $tmp703 = $tmp701 + $tmp702;
frost$core$Int $tmp704 = (frost$core$Int) {$tmp703};
*(&local3) = $tmp704;
goto block18;
block19:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:353
frost$core$Bit $tmp705 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$MutableString$Index$Q$GT $tmp706 = frost$core$Range$LTfrost$core$MutableString$Index$Q$GT$init$frost$core$MutableString$Index$Q$frost$core$MutableString$Index$Q$frost$core$Bit(((frost$core$MutableString$Index$nullable) { .nonnull = false }), ((frost$core$MutableString$Index$nullable) { .nonnull = false }), $tmp705);
frost$collections$Array* $tmp707 = *(&local2);
ITable* $tmp708 = ((frost$collections$CollectionView*) $tmp707)->$class->itable;
while ($tmp708->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp708 = $tmp708->next;
}
$fn710 $tmp709 = $tmp708->methods[2];
frost$core$String* $tmp711 = $tmp709(((frost$collections$CollectionView*) $tmp707), &$s712);
frost$core$MutableString$$IDXEQ$frost$core$Range$LTfrost$core$MutableString$Index$Q$GT$frost$core$String(param1, $tmp706, $tmp711);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp711));
frost$collections$Array* $tmp713 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp713));
*(&local2) = ((frost$collections$Array*) NULL);
return;

}
void org$frostlang$frostc$frostdoc$Markdown$doAutoLinks$frost$core$MutableString(org$frostlang$frostc$frostdoc$Markdown* param0, frost$core$MutableString* param1) {

frost$core$Matcher* local0 = NULL;
frost$core$RegularExpression* local1 = NULL;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:357
FROST_ASSERT(24 == sizeof(frost$core$RegularExpression));
frost$core$RegularExpression* $tmp714 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp714, &$s715);
// begin inline call to method frost.core.MutableString.replace(search:frost.core.RegularExpression, replacement:frost.core.String) from Markdown.frost:357:23
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:401
frost$core$Bit $tmp716 = (frost$core$Bit) {true};
// begin inline call to method frost.core.MutableString.replace(search:frost.core.RegularExpression, replacement:frost.core.String, allowGroupReferences:frost.core.Bit) from MutableString.frost:401:16
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:406
$fn718 $tmp717 = ($fn718) ((frost$core$Object*) param1)->$class->vtable[0];
frost$core$String* $tmp719 = $tmp717(((frost$core$Object*) param1));
frost$core$Matcher* $tmp720 = frost$core$RegularExpression$matcher$frost$core$String$R$frost$core$Matcher($tmp714, $tmp719);
*(&local0) = ((frost$core$Matcher*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp720));
frost$core$Matcher* $tmp721 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp721));
*(&local0) = $tmp720;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp720));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp719));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:407
frost$core$MutableString$clear(param1);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:408
goto block3;
block3:;
frost$core$Matcher* $tmp722 = *(&local0);
frost$core$Bit $tmp723 = frost$core$Matcher$find$R$frost$core$Bit($tmp722);
bool $tmp724 = $tmp723.value;
if ($tmp724) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:409
frost$core$Matcher* $tmp725 = *(&local0);
frost$core$Matcher$appendReplacement$frost$core$MutableString$frost$core$String$frost$core$Bit($tmp725, param1, &$s726, $tmp716);
goto block3;
block5:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:411
frost$core$Matcher* $tmp727 = *(&local0);
frost$core$Matcher$appendTail$frost$core$MutableString($tmp727, param1);
frost$core$Matcher* $tmp728 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp728));
*(&local0) = ((frost$core$Matcher*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp714));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:358
FROST_ASSERT(24 == sizeof(frost$core$RegularExpression));
frost$core$RegularExpression* $tmp729 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp729, &$s730);
*(&local1) = ((frost$core$RegularExpression*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp729));
frost$core$RegularExpression* $tmp731 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp731));
*(&local1) = $tmp729;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp729));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:359
frost$core$RegularExpression* $tmp732 = *(&local1);
FROST_ASSERT(24 == sizeof(org$frostlang$frostc$frostdoc$Markdown$_Closure6));
org$frostlang$frostc$frostdoc$Markdown$_Closure6* $tmp733 = (org$frostlang$frostc$frostdoc$Markdown$_Closure6*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$frostdoc$Markdown$_Closure6$class);
org$frostlang$frostc$frostdoc$Markdown$_Closure6$init$org$frostlang$frostc$frostdoc$Markdown($tmp733, param0);
FROST_ASSERT(32 == sizeof(frost$core$MutableMethod));
frost$core$MutableMethod* $tmp735 = (frost$core$MutableMethod*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$MutableMethod$class);
// begin inline call to frost.core.MutableMethod.init(pointer:frost.unsafe.Pointer<frost.core.Int8>, target:frost.core.Object?) from Markdown.frost:359:31
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableMethod.frost:32
frost$core$Int8** $tmp736 = &$tmp735->pointer;
*$tmp736 = ((frost$core$Int8*) org$frostlang$frostc$frostdoc$Markdown$_Closure6$$anonymous5$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$String);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableMethod.frost:33
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp733));
frost$core$Object** $tmp737 = &$tmp735->target;
frost$core$Object* $tmp738 = *$tmp737;
frost$core$Frost$unref$frost$core$Object$Q($tmp738);
frost$core$Object** $tmp739 = &$tmp735->target;
*$tmp739 = ((frost$core$Object*) $tmp733);
frost$core$MutableString$replace$frost$core$RegularExpression$$LPfrost$collections$ListView$LTfrost$core$String$Q$GT$RP$EQ$GT$LPfrost$core$Object$RP(param1, $tmp732, $tmp735);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp735));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp733));
frost$core$RegularExpression* $tmp740 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp740));
*(&local1) = ((frost$core$RegularExpression*) NULL);
return;

}
void org$frostlang$frostc$frostdoc$Markdown$unescapeSpecialChars$frost$core$MutableString(org$frostlang$frostc$frostdoc$Markdown* param0, frost$core$MutableString* param1) {

frost$core$String* local0 = NULL;
frost$core$String* local1 = NULL;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:370
org$frostlang$frostc$frostdoc$Protector** $tmp741 = &param0->charProtector;
org$frostlang$frostc$frostdoc$Protector* $tmp742 = *$tmp741;
frost$collections$HashMap** $tmp743 = &$tmp742->decodeMap;
frost$collections$HashMap* $tmp744 = *$tmp743;
ITable* $tmp745 = ((frost$collections$MapView*) $tmp744)->$class->itable;
while ($tmp745->$class != (frost$core$Class*) &frost$collections$MapView$class) {
    $tmp745 = $tmp745->next;
}
$fn747 $tmp746 = $tmp745->methods[4];
frost$collections$Iterator* $tmp748 = $tmp746(((frost$collections$MapView*) $tmp744));
goto block1;
block1:;
ITable* $tmp749 = $tmp748->$class->itable;
while ($tmp749->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp749 = $tmp749->next;
}
$fn751 $tmp750 = $tmp749->methods[0];
frost$core$Bit $tmp752 = $tmp750($tmp748);
bool $tmp753 = $tmp752.value;
if ($tmp753) goto block3; else goto block2;
block2:;
*(&local0) = ((frost$core$String*) NULL);
ITable* $tmp754 = $tmp748->$class->itable;
while ($tmp754->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp754 = $tmp754->next;
}
$fn756 $tmp755 = $tmp754->methods[1];
frost$core$Object* $tmp757 = $tmp755($tmp748);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) $tmp757)));
frost$core$String* $tmp758 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp758));
*(&local0) = ((frost$core$String*) $tmp757);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:371
org$frostlang$frostc$frostdoc$Protector** $tmp759 = &param0->charProtector;
org$frostlang$frostc$frostdoc$Protector* $tmp760 = *$tmp759;
frost$core$String* $tmp761 = *(&local0);
$fn763 $tmp762 = ($fn763) $tmp760->$class->vtable[3];
frost$core$String* $tmp764 = $tmp762($tmp760, $tmp761);
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp764));
frost$core$String* $tmp765 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp765));
*(&local1) = $tmp764;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp764));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:372
frost$core$String* $tmp766 = *(&local0);
frost$core$String* $tmp767 = *(&local1);
frost$core$MutableString$replace$frost$core$String$frost$core$String(param1, $tmp766, $tmp767);
frost$core$String* $tmp768 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp768));
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp757);
frost$core$String* $tmp769 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp769));
*(&local0) = ((frost$core$String*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp748));
return;

}
frost$core$String* org$frostlang$frostc$frostdoc$Markdown$encodeEmail$frost$core$String$R$frost$core$String(org$frostlang$frostc$frostdoc$Markdown* param0, frost$core$String* param1) {

frost$core$MutableString* local0 = NULL;
frost$core$Char32 local1;
frost$core$Real64 local2;
frost$core$Int32 local3;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:377
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp770 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp770);
*(&local0) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp770));
frost$core$MutableString* $tmp771 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp771));
*(&local0) = $tmp770;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp770));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:378
ITable* $tmp772 = ((frost$collections$Iterable*) param1)->$class->itable;
while ($tmp772->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp772 = $tmp772->next;
}
$fn774 $tmp773 = $tmp772->methods[0];
frost$collections$Iterator* $tmp775 = $tmp773(((frost$collections$Iterable*) param1));
goto block1;
block1:;
ITable* $tmp776 = $tmp775->$class->itable;
while ($tmp776->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp776 = $tmp776->next;
}
$fn778 $tmp777 = $tmp776->methods[0];
frost$core$Bit $tmp779 = $tmp777($tmp775);
bool $tmp780 = $tmp779.value;
if ($tmp780) goto block3; else goto block2;
block2:;
ITable* $tmp781 = $tmp775->$class->itable;
while ($tmp781->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp781 = $tmp781->next;
}
$fn783 $tmp782 = $tmp781->methods[1];
frost$core$Object* $tmp784 = $tmp782($tmp775);
*(&local1) = ((frost$core$Char32$wrapper*) $tmp784)->value;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:380
frost$math$Random** $tmp785 = &param0->random;
frost$math$Random* $tmp786 = *$tmp785;
ITable* $tmp787 = $tmp786->$class->itable;
while ($tmp787->$class != (frost$core$Class*) &frost$math$Random$class) {
    $tmp787 = $tmp787->next;
}
$fn789 $tmp788 = $tmp787->methods[5];
frost$core$Real64 $tmp790 = $tmp788($tmp786);
*(&local2) = $tmp790;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:381
frost$core$Real64 $tmp791 = *(&local2);
frost$core$Real64 $tmp792 = (frost$core$Real64) {0.45};
double $tmp793 = $tmp791.value;
double $tmp794 = $tmp792.value;
bool $tmp795 = $tmp793 < $tmp794;
frost$core$Bit $tmp796 = (frost$core$Bit) {$tmp795};
bool $tmp797 = $tmp796.value;
if ($tmp797) goto block4; else goto block6;
block4:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:382
frost$core$MutableString* $tmp798 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp798, &$s799);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:383
frost$core$MutableString* $tmp800 = *(&local0);
frost$core$Char32 $tmp801 = *(&local1);
// begin inline call to function frost.core.Char32.get_asInt32():frost.core.Int32 from Markdown.frost:383:33
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Char32.frost:106
int32_t $tmp802 = $tmp801.value;
frost$core$Int32 $tmp803 = (frost$core$Int32) {$tmp802};
frost$core$Int32$wrapper* $tmp804;
$tmp804 = (frost$core$Int32$wrapper*) frostObjectAlloc(20, (frost$core$Class*) &frost$core$Int32$wrapperclass);
$tmp804->value = $tmp803;
// begin inline call to method frost.core.MutableString.append(o:frost.core.Object) from Markdown.frost:383:30
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:150
$fn806 $tmp805 = ($fn806) ((frost$core$Object*) $tmp804)->$class->vtable[0];
frost$core$String* $tmp807 = $tmp805(((frost$core$Object*) $tmp804));
frost$core$MutableString$append$frost$core$String($tmp800, $tmp807);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp807));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp804));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:384
frost$core$MutableString* $tmp808 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp808, &$s809);
goto block5;
block6:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:386
frost$core$Real64 $tmp810 = *(&local2);
frost$core$Real64 $tmp811 = (frost$core$Real64) {0.9};
double $tmp812 = $tmp810.value;
double $tmp813 = $tmp811.value;
bool $tmp814 = $tmp812 < $tmp813;
frost$core$Bit $tmp815 = (frost$core$Bit) {$tmp814};
bool $tmp816 = $tmp815.value;
if ($tmp816) goto block9; else goto block11;
block9:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:387
frost$core$MutableString* $tmp817 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp817, &$s818);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:388
frost$core$MutableString* $tmp819 = *(&local0);
frost$core$Char32 $tmp820 = *(&local1);
// begin inline call to function frost.core.Char32.get_asInt32():frost.core.Int32 from Markdown.frost:388:33
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Char32.frost:106
int32_t $tmp821 = $tmp820.value;
frost$core$Int32 $tmp822 = (frost$core$Int32) {$tmp821};
// begin inline call to function frost.core.Int32.format(fmt:frost.core.String):frost.core.String from Markdown.frost:388:48
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int32.frost:1058
int32_t $tmp823 = $tmp822.value;
bool $tmp824 = $tmp823 < 0u;
frost$core$Bit $tmp825 = (frost$core$Bit) {$tmp824};
// begin inline call to function frost.core.Int32.get_abs():frost.core.Int32 from Int32.frost:1058:40
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int32.frost:730
frost$core$Int32 $tmp826 = (frost$core$Int32) {0u};
int32_t $tmp827 = $tmp822.value;
int32_t $tmp828 = $tmp826.value;
bool $tmp829 = $tmp827 < $tmp828;
frost$core$Bit $tmp830 = (frost$core$Bit) {$tmp829};
bool $tmp831 = $tmp830.value;
if ($tmp831) goto block15; else goto block16;
block15:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int32.frost:731
frost$core$Int32 $tmp832 = frost$core$Int32$$SUB$R$frost$core$Int32($tmp822);
*(&local3) = $tmp832;
goto block14;
block16:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int32.frost:733
*(&local3) = $tmp822;
goto block14;
block14:;
frost$core$Int32 $tmp833 = *(&local3);
// begin inline call to function frost.core.Int32.get_asUInt64():frost.core.UInt64 from Int32.frost:1058:43
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int32.frost:1008
int32_t $tmp834 = $tmp833.value;
frost$core$UInt64 $tmp835 = (frost$core$UInt64) {((uint64_t) $tmp834)};
frost$core$UInt64 $tmp836 = (frost$core$UInt64) {4294967295u};
frost$core$String* $tmp837 = frost$core$Frost$format$frost$core$Bit$frost$core$UInt64$frost$core$UInt64$frost$core$String$R$frost$core$String($tmp825, $tmp835, $tmp836, &$s838);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp837));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp837));
frost$core$MutableString$append$frost$core$String($tmp819, $tmp837);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp837));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:389
frost$core$MutableString* $tmp839 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp839, &$s840);
goto block10;
block11:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:392
frost$core$MutableString* $tmp841 = *(&local0);
frost$core$Char32 $tmp842 = *(&local1);
frost$core$MutableString$append$frost$core$Char32($tmp841, $tmp842);
goto block10;
block10:;
goto block5;
block5:;
frost$core$Frost$unref$frost$core$Object$Q($tmp784);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp775));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:395
frost$core$MutableString* $tmp843 = *(&local0);
$fn845 $tmp844 = ($fn845) ((frost$core$Object*) $tmp843)->$class->vtable[0];
frost$core$String* $tmp846 = $tmp844(((frost$core$Object*) $tmp843));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp846));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp846));
frost$core$MutableString* $tmp847 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp847));
*(&local0) = ((frost$core$MutableString*) NULL);
return $tmp846;

}
void org$frostlang$frostc$frostdoc$Markdown$doBlockQuotes$frost$core$MutableString(org$frostlang$frostc$frostdoc$Markdown* param0, frost$core$MutableString* param1) {

frost$core$RegularExpression* local0 = NULL;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:399
FROST_ASSERT(24 == sizeof(frost$core$RegularExpression));
frost$core$RegularExpression* $tmp848 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$String* $tmp849 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s850, &$s851);
frost$core$String* $tmp852 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp849, &$s853);
frost$core$String* $tmp854 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp852, &$s855);
frost$core$String* $tmp856 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp854, &$s857);
frost$core$String* $tmp858 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp856, &$s859);
frost$core$String* $tmp860 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp858, &$s861);
frost$core$Int $tmp862 = (frost$core$Int) {1u};
frost$core$RegularExpression$init$frost$core$String$frost$core$Int($tmp848, $tmp860, $tmp862);
*(&local0) = ((frost$core$RegularExpression*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp848));
frost$core$RegularExpression* $tmp863 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp863));
*(&local0) = $tmp848;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp860));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp858));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp856));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp854));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp852));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp849));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp848));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:408
frost$core$RegularExpression* $tmp864 = *(&local0);
FROST_ASSERT(24 == sizeof(org$frostlang$frostc$frostdoc$Markdown$_Closure9));
org$frostlang$frostc$frostdoc$Markdown$_Closure9* $tmp865 = (org$frostlang$frostc$frostdoc$Markdown$_Closure9*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$frostdoc$Markdown$_Closure9$class);
org$frostlang$frostc$frostdoc$Markdown$_Closure9$init$org$frostlang$frostc$frostdoc$Markdown($tmp865, param0);
FROST_ASSERT(32 == sizeof(frost$core$MutableMethod));
frost$core$MutableMethod* $tmp867 = (frost$core$MutableMethod*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$MutableMethod$class);
// begin inline call to frost.core.MutableMethod.init(pointer:frost.unsafe.Pointer<frost.core.Int8>, target:frost.core.Object?) from Markdown.frost:408:27
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableMethod.frost:32
frost$core$Int8** $tmp868 = &$tmp867->pointer;
*$tmp868 = ((frost$core$Int8*) org$frostlang$frostc$frostdoc$Markdown$_Closure9$$anonymous7$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$Object);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableMethod.frost:33
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp865));
frost$core$Object** $tmp869 = &$tmp867->target;
frost$core$Object* $tmp870 = *$tmp869;
frost$core$Frost$unref$frost$core$Object$Q($tmp870);
frost$core$Object** $tmp871 = &$tmp867->target;
*$tmp871 = ((frost$core$Object*) $tmp865);
frost$core$MutableString$replace$frost$core$RegularExpression$$LPfrost$collections$ListView$LTfrost$core$String$Q$GT$RP$EQ$GT$LPfrost$core$Object$RP(param1, $tmp864, $tmp867);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp867));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp865));
frost$core$RegularExpression* $tmp872 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp872));
*(&local0) = ((frost$core$RegularExpression*) NULL);
return;

}
frost$core$String* org$frostlang$frostc$frostdoc$Markdown$$anonymous10$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$String(frost$collections$ListView* param0) {

frost$core$String* local0 = NULL;
frost$core$Int local1;
frost$core$MutableString* local2 = NULL;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:423
frost$core$Int $tmp873 = (frost$core$Int) {1u};
ITable* $tmp874 = param0->$class->itable;
while ($tmp874->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp874 = $tmp874->next;
}
$fn876 $tmp875 = $tmp874->methods[0];
frost$core$Object* $tmp877 = $tmp875(param0, $tmp873);
*(&local0) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) $tmp877)));
frost$core$String* $tmp878 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp878));
*(&local0) = ((frost$core$String*) $tmp877);
frost$core$Frost$unref$frost$core$Object$Q($tmp877);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:424
frost$core$String* $tmp879 = *(&local0);
// begin inline call to function frost.core.String.get_length():frost.core.Int from Markdown.frost:424:35
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:485
ITable* $tmp880 = ((frost$collections$Iterable*) $tmp879)->$class->itable;
while ($tmp880->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp880 = $tmp880->next;
}
$fn882 $tmp881 = $tmp880->methods[0];
frost$collections$Iterator* $tmp883 = $tmp881(((frost$collections$Iterable*) $tmp879));
ITable* $tmp884 = $tmp883->$class->itable;
while ($tmp884->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp884 = $tmp884->next;
}
$fn886 $tmp885 = $tmp884->methods[2];
frost$core$Int $tmp887 = $tmp885($tmp883);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp883));
*(&local1) = $tmp887;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:425
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp888 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$String* $tmp889 = *(&local0);
frost$core$MutableString$init$frost$core$String($tmp888, $tmp889);
*(&local2) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp888));
frost$core$MutableString* $tmp890 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp890));
*(&local2) = $tmp888;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp888));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:426
goto block2;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:427
frost$core$MutableString* $tmp891 = *(&local2);
frost$core$MutableString$append$frost$core$String($tmp891, &$s892);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:428
frost$core$Int $tmp893 = *(&local1);
frost$core$Int $tmp894 = (frost$core$Int) {1u};
int64_t $tmp895 = $tmp893.value;
int64_t $tmp896 = $tmp894.value;
int64_t $tmp897 = $tmp895 + $tmp896;
frost$core$Int $tmp898 = (frost$core$Int) {$tmp897};
*(&local1) = $tmp898;
frost$core$Int $tmp899 = *(&local1);
frost$core$Int $tmp900 = (frost$core$Int) {4u};
// begin inline call to function frost.core.Int.%(other:frost.core.Int):frost.core.Int from Markdown.frost:430:25
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int.frost:198
int64_t $tmp901 = $tmp899.value;
int64_t $tmp902 = $tmp900.value;
int64_t $tmp903 = $tmp901 % $tmp902;
frost$core$Int $tmp904 = (frost$core$Int) {$tmp903};
frost$core$Int $tmp905 = (frost$core$Int) {0u};
int64_t $tmp906 = $tmp904.value;
int64_t $tmp907 = $tmp905.value;
bool $tmp908 = $tmp906 != $tmp907;
frost$core$Bit $tmp909 = (frost$core$Bit) {$tmp908};
bool $tmp910 = $tmp909.value;
if ($tmp910) goto block2; else goto block4;
block4:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:431
frost$core$MutableString* $tmp911 = *(&local2);
$fn913 $tmp912 = ($fn913) ((frost$core$Object*) $tmp911)->$class->vtable[0];
frost$core$String* $tmp914 = $tmp912(((frost$core$Object*) $tmp911));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp914));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp914));
frost$core$MutableString* $tmp915 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp915));
*(&local2) = ((frost$core$MutableString*) NULL);
frost$core$String* $tmp916 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp916));
*(&local0) = ((frost$core$String*) NULL);
return $tmp914;

}
void org$frostlang$frostc$frostdoc$Markdown$detabify$frost$core$MutableString(org$frostlang$frostc$frostdoc$Markdown* param0, frost$core$MutableString* param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:422
FROST_ASSERT(24 == sizeof(frost$core$RegularExpression));
frost$core$RegularExpression* $tmp917 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp917, &$s918);
FROST_ASSERT(32 == sizeof(frost$core$Method));
frost$core$Method* $tmp920 = (frost$core$Method*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$Method$class);
// begin inline call to frost.core.Method.init(pointer:frost.unsafe.Pointer<frost.core.Int8>, target:frost.core.Immutable?) from Markdown.frost:422:34
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Method.frost:37
frost$core$Int8** $tmp921 = &$tmp920->pointer;
*$tmp921 = ((frost$core$Int8*) org$frostlang$frostc$frostdoc$Markdown$$anonymous10$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$String);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Method.frost:38
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Immutable*) NULL)));
frost$core$Immutable** $tmp922 = &$tmp920->target;
frost$core$Immutable* $tmp923 = *$tmp922;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp923));
frost$core$Immutable** $tmp924 = &$tmp920->target;
*$tmp924 = ((frost$core$Immutable*) NULL);
frost$core$MutableString$replace$frost$core$RegularExpression$$LPfrost$collections$ListView$LTfrost$core$String$Q$GT$RP$EQ$GT$LPfrost$core$Object$RP(param1, $tmp917, ((frost$core$MutableMethod*) $tmp920));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp920));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp917));
return;

}
void org$frostlang$frostc$frostdoc$Markdown$outdent$frost$core$MutableString(frost$core$MutableString* param0) {

frost$core$Matcher* local0 = NULL;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:437
FROST_ASSERT(24 == sizeof(frost$core$RegularExpression));
frost$core$RegularExpression* $tmp925 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp925, &$s926);
// begin inline call to method frost.core.MutableString.replace(search:frost.core.RegularExpression, replacement:frost.core.String) from Markdown.frost:437:18
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:401
frost$core$Bit $tmp927 = (frost$core$Bit) {true};
// begin inline call to method frost.core.MutableString.replace(search:frost.core.RegularExpression, replacement:frost.core.String, allowGroupReferences:frost.core.Bit) from MutableString.frost:401:16
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:406
$fn929 $tmp928 = ($fn929) ((frost$core$Object*) param0)->$class->vtable[0];
frost$core$String* $tmp930 = $tmp928(((frost$core$Object*) param0));
frost$core$Matcher* $tmp931 = frost$core$RegularExpression$matcher$frost$core$String$R$frost$core$Matcher($tmp925, $tmp930);
*(&local0) = ((frost$core$Matcher*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp931));
frost$core$Matcher* $tmp932 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp932));
*(&local0) = $tmp931;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp931));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp930));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:407
frost$core$MutableString$clear(param0);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:408
goto block3;
block3:;
frost$core$Matcher* $tmp933 = *(&local0);
frost$core$Bit $tmp934 = frost$core$Matcher$find$R$frost$core$Bit($tmp933);
bool $tmp935 = $tmp934.value;
if ($tmp935) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:409
frost$core$Matcher* $tmp936 = *(&local0);
frost$core$Matcher$appendReplacement$frost$core$MutableString$frost$core$String$frost$core$Bit($tmp936, param0, &$s937, $tmp927);
goto block3;
block5:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:411
frost$core$Matcher* $tmp938 = *(&local0);
frost$core$Matcher$appendTail$frost$core$MutableString($tmp938, param0);
frost$core$Matcher* $tmp939 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp939));
*(&local0) = ((frost$core$Matcher*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp925));
return;

}
void org$frostlang$frostc$frostdoc$Markdown$doCodeBlocks$frost$core$MutableString(org$frostlang$frostc$frostdoc$Markdown* param0, frost$core$MutableString* param1) {

frost$core$RegularExpression* local0 = NULL;
org$frostlang$frostc$frostdoc$Markdown$CodeReplacer* local1 = NULL;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:493
FROST_ASSERT(24 == sizeof(frost$core$RegularExpression));
frost$core$RegularExpression* $tmp940 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$String* $tmp941 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s942, &$s943);
frost$core$String* $tmp944 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp941, &$s945);
frost$core$String* $tmp946 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp944, &$s947);
frost$core$String* $tmp948 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp946, &$s949);
frost$core$String* $tmp950 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp948, &$s951);
frost$core$Int $tmp952 = (frost$core$Int) {1u};
frost$core$RegularExpression$init$frost$core$String$frost$core$Int($tmp940, $tmp950, $tmp952);
*(&local0) = ((frost$core$RegularExpression*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp940));
frost$core$RegularExpression* $tmp953 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp953));
*(&local0) = $tmp940;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp950));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp948));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp946));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp944));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp941));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp940));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:501
frost$core$RegularExpression* $tmp954 = *(&local0);
FROST_ASSERT(24 == sizeof(org$frostlang$frostc$frostdoc$Markdown$CodeReplacer));
org$frostlang$frostc$frostdoc$Markdown$CodeReplacer* $tmp955 = (org$frostlang$frostc$frostdoc$Markdown$CodeReplacer*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$frostdoc$Markdown$CodeReplacer$class);
org$frostlang$frostc$frostdoc$Markdown$CodeReplacer$init$org$frostlang$frostc$frostdoc$Markdown($tmp955, param0);
*(&local1) = ((org$frostlang$frostc$frostdoc$Markdown$CodeReplacer*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp955));
org$frostlang$frostc$frostdoc$Markdown$CodeReplacer* $tmp956 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp956));
*(&local1) = $tmp955;
FROST_ASSERT(24 == sizeof(org$frostlang$frostc$frostdoc$Markdown$_Closure12));
org$frostlang$frostc$frostdoc$Markdown$_Closure12* $tmp957 = (org$frostlang$frostc$frostdoc$Markdown$_Closure12*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$frostdoc$Markdown$_Closure12$class);
org$frostlang$frostc$frostdoc$Markdown$CodeReplacer* $tmp958 = *(&local1);
org$frostlang$frostc$frostdoc$Markdown$_Closure12$init$org$frostlang$frostc$frostdoc$Markdown$CodeReplacer($tmp957, $tmp958);
FROST_ASSERT(32 == sizeof(frost$core$MutableMethod));
frost$core$MutableMethod* $tmp960 = (frost$core$MutableMethod*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$MutableMethod$class);
// begin inline call to frost.core.MutableMethod.init(pointer:frost.unsafe.Pointer<frost.core.Int8>, target:frost.core.Object?) from Markdown.frost:501:45
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableMethod.frost:32
frost$core$Int8** $tmp961 = &$tmp960->pointer;
*$tmp961 = ((frost$core$Int8*) org$frostlang$frostc$frostdoc$Markdown$_Closure12$$anonymous11$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$String);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableMethod.frost:33
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp957));
frost$core$Object** $tmp962 = &$tmp960->target;
frost$core$Object* $tmp963 = *$tmp962;
frost$core$Frost$unref$frost$core$Object$Q($tmp963);
frost$core$Object** $tmp964 = &$tmp960->target;
*$tmp964 = ((frost$core$Object*) $tmp957);
frost$core$MutableString$replace$frost$core$RegularExpression$$LPfrost$collections$ListView$LTfrost$core$String$Q$GT$RP$EQ$GT$LPfrost$core$Object$RP(param1, $tmp954, $tmp960);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp960));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp957));
org$frostlang$frostc$frostdoc$Markdown$CodeReplacer* $tmp965 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp965));
*(&local1) = ((org$frostlang$frostc$frostdoc$Markdown$CodeReplacer*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp955));
frost$core$RegularExpression* $tmp966 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp966));
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
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:505
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp967 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init$frost$core$String($tmp967, &$s968);
*(&local0) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp967));
frost$core$MutableString* $tmp969 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp969));
*(&local0) = $tmp967;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp967));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:506
frost$core$Int $tmp970 = (frost$core$Int) {0u};
// begin inline call to org.frostlang.frostc.parser.SyntaxHighlighter.Kind.init(rv:frost.core.Int):org.frostlang.frostc.parser.SyntaxHighlighter.Kind from Markdown.frost:506:46
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:6
frost$core$Int* $tmp971 = &(&local2)->$rawValue;
*$tmp971 = $tmp970;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp972 = *(&local2);
*(&local1) = $tmp972;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp973 = *(&local1);
*(&local3) = $tmp973;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:507
org$frostlang$frostc$parser$SyntaxHighlighter** $tmp974 = &param1->syntaxHighlighter;
org$frostlang$frostc$parser$SyntaxHighlighter* $tmp975 = *$tmp974;
frost$collections$Array** $tmp976 = &$tmp975->tokens;
frost$collections$Array* $tmp977 = *$tmp976;
ITable* $tmp978 = ((frost$collections$Iterable*) $tmp977)->$class->itable;
while ($tmp978->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp978 = $tmp978->next;
}
$fn980 $tmp979 = $tmp978->methods[0];
frost$collections$Iterator* $tmp981 = $tmp979(((frost$collections$Iterable*) $tmp977));
goto block2;
block2:;
ITable* $tmp982 = $tmp981->$class->itable;
while ($tmp982->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp982 = $tmp982->next;
}
$fn984 $tmp983 = $tmp982->methods[0];
frost$core$Bit $tmp985 = $tmp983($tmp981);
bool $tmp986 = $tmp985.value;
if ($tmp986) goto block4; else goto block3;
block3:;
*(&local4) = ((org$frostlang$frostc$Pair*) NULL);
ITable* $tmp987 = $tmp981->$class->itable;
while ($tmp987->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp987 = $tmp987->next;
}
$fn989 $tmp988 = $tmp987->methods[1];
frost$core$Object* $tmp990 = $tmp988($tmp981);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Pair*) $tmp990)));
org$frostlang$frostc$Pair* $tmp991 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp991));
*(&local4) = ((org$frostlang$frostc$Pair*) $tmp990);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:508
org$frostlang$frostc$Pair* $tmp992 = *(&local4);
frost$core$Object** $tmp993 = &$tmp992->second;
frost$core$Object* $tmp994 = *$tmp993;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp995;
$tmp995 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp995->value = ((org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) $tmp994)->value;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp996 = *(&local3);
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp997;
$tmp997 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp997->value = $tmp996;
ITable* $tmp998 = ((frost$core$Equatable*) $tmp995)->$class->itable;
while ($tmp998->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp998 = $tmp998->next;
}
$fn1000 $tmp999 = $tmp998->methods[1];
frost$core$Bit $tmp1001 = $tmp999(((frost$core$Equatable*) $tmp995), ((frost$core$Equatable*) $tmp997));
bool $tmp1002 = $tmp1001.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp997)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp995)));
if ($tmp1002) goto block7; else goto block6;
block7:;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp1003 = *(&local3);
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp1004;
$tmp1004 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp1004->value = $tmp1003;
frost$core$Int $tmp1005 = (frost$core$Int) {0u};
// begin inline call to org.frostlang.frostc.parser.SyntaxHighlighter.Kind.init(rv:frost.core.Int):org.frostlang.frostc.parser.SyntaxHighlighter.Kind from Markdown.frost:508:71
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:6
frost$core$Int* $tmp1006 = &(&local6)->$rawValue;
*$tmp1006 = $tmp1005;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp1007 = *(&local6);
*(&local5) = $tmp1007;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp1008 = *(&local5);
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp1009;
$tmp1009 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp1009->value = $tmp1008;
ITable* $tmp1010 = ((frost$core$Equatable*) $tmp1004)->$class->itable;
while ($tmp1010->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1010 = $tmp1010->next;
}
$fn1012 $tmp1011 = $tmp1010->methods[1];
frost$core$Bit $tmp1013 = $tmp1011(((frost$core$Equatable*) $tmp1004), ((frost$core$Equatable*) $tmp1009));
bool $tmp1014 = $tmp1013.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1009)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1004)));
if ($tmp1014) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:509
frost$core$MutableString* $tmp1015 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp1015, &$s1016);
goto block6;
block6:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:511
org$frostlang$frostc$Pair* $tmp1017 = *(&local4);
frost$core$Object** $tmp1018 = &$tmp1017->second;
frost$core$Object* $tmp1019 = *$tmp1018;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp1020;
$tmp1020 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp1020->value = ((org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) $tmp1019)->value;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp1021 = *(&local3);
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp1022;
$tmp1022 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp1022->value = $tmp1021;
ITable* $tmp1023 = ((frost$core$Equatable*) $tmp1020)->$class->itable;
while ($tmp1023->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1023 = $tmp1023->next;
}
$fn1025 $tmp1024 = $tmp1023->methods[1];
frost$core$Bit $tmp1026 = $tmp1024(((frost$core$Equatable*) $tmp1020), ((frost$core$Equatable*) $tmp1022));
bool $tmp1027 = $tmp1026.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1022)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1020)));
if ($tmp1027) goto block9; else goto block10;
block9:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:512
org$frostlang$frostc$Pair* $tmp1028 = *(&local4);
frost$core$Object** $tmp1029 = &$tmp1028->second;
frost$core$Object* $tmp1030 = *$tmp1029;
*(&local3) = ((org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) $tmp1030)->value;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:513
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp1031 = *(&local3);
frost$core$Int $tmp1032 = $tmp1031.$rawValue;
frost$core$Int $tmp1033 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Markdown.frost:514:48
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int.frost:426
int64_t $tmp1034 = $tmp1032.value;
int64_t $tmp1035 = $tmp1033.value;
bool $tmp1036 = $tmp1034 == $tmp1035;
frost$core$Bit $tmp1037 = (frost$core$Bit) {$tmp1036};
bool $tmp1038 = $tmp1037.value;
if ($tmp1038) goto block12; else goto block13;
block12:;
goto block11;
block13:;
frost$core$Int $tmp1039 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Markdown.frost:517:48
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int.frost:426
int64_t $tmp1040 = $tmp1032.value;
int64_t $tmp1041 = $tmp1039.value;
bool $tmp1042 = $tmp1040 == $tmp1041;
frost$core$Bit $tmp1043 = (frost$core$Bit) {$tmp1042};
bool $tmp1044 = $tmp1043.value;
if ($tmp1044) goto block15; else goto block16;
block16:;
frost$core$Int $tmp1045 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Markdown.frost:517:80
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int.frost:426
int64_t $tmp1046 = $tmp1032.value;
int64_t $tmp1047 = $tmp1045.value;
bool $tmp1048 = $tmp1046 == $tmp1047;
frost$core$Bit $tmp1049 = (frost$core$Bit) {$tmp1048};
bool $tmp1050 = $tmp1049.value;
if ($tmp1050) goto block15; else goto block18;
block15:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:518
frost$core$MutableString* $tmp1051 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp1051, &$s1052);
goto block11;
block18:;
frost$core$Int $tmp1053 = (frost$core$Int) {3u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Markdown.frost:520:48
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int.frost:426
int64_t $tmp1054 = $tmp1032.value;
int64_t $tmp1055 = $tmp1053.value;
bool $tmp1056 = $tmp1054 == $tmp1055;
frost$core$Bit $tmp1057 = (frost$core$Bit) {$tmp1056};
bool $tmp1058 = $tmp1057.value;
if ($tmp1058) goto block20; else goto block21;
block20:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:521
frost$core$MutableString* $tmp1059 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp1059, &$s1060);
goto block11;
block21:;
frost$core$Int $tmp1061 = (frost$core$Int) {4u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Markdown.frost:523:48
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int.frost:426
int64_t $tmp1062 = $tmp1032.value;
int64_t $tmp1063 = $tmp1061.value;
bool $tmp1064 = $tmp1062 == $tmp1063;
frost$core$Bit $tmp1065 = (frost$core$Bit) {$tmp1064};
bool $tmp1066 = $tmp1065.value;
if ($tmp1066) goto block23; else goto block24;
block23:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:524
frost$core$MutableString* $tmp1067 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp1067, &$s1068);
goto block11;
block24:;
frost$core$Int $tmp1069 = (frost$core$Int) {5u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Markdown.frost:526:48
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int.frost:426
int64_t $tmp1070 = $tmp1032.value;
int64_t $tmp1071 = $tmp1069.value;
bool $tmp1072 = $tmp1070 == $tmp1071;
frost$core$Bit $tmp1073 = (frost$core$Bit) {$tmp1072};
bool $tmp1074 = $tmp1073.value;
if ($tmp1074) goto block26; else goto block27;
block26:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:527
frost$core$MutableString* $tmp1075 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp1075, &$s1076);
goto block11;
block27:;
frost$core$Int $tmp1077 = (frost$core$Int) {6u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Markdown.frost:529:48
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int.frost:426
int64_t $tmp1078 = $tmp1032.value;
int64_t $tmp1079 = $tmp1077.value;
bool $tmp1080 = $tmp1078 == $tmp1079;
frost$core$Bit $tmp1081 = (frost$core$Bit) {$tmp1080};
bool $tmp1082 = $tmp1081.value;
if ($tmp1082) goto block29; else goto block30;
block29:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:530
frost$core$MutableString* $tmp1083 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp1083, &$s1084);
goto block11;
block30:;
frost$core$Int $tmp1085 = (frost$core$Int) {7u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Markdown.frost:532:48
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int.frost:426
int64_t $tmp1086 = $tmp1032.value;
int64_t $tmp1087 = $tmp1085.value;
bool $tmp1088 = $tmp1086 == $tmp1087;
frost$core$Bit $tmp1089 = (frost$core$Bit) {$tmp1088};
bool $tmp1090 = $tmp1089.value;
if ($tmp1090) goto block32; else goto block33;
block32:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:533
frost$core$MutableString* $tmp1091 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp1091, &$s1092);
goto block11;
block33:;
frost$core$Int $tmp1093 = (frost$core$Int) {8u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Markdown.frost:535:48
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int.frost:426
int64_t $tmp1094 = $tmp1032.value;
int64_t $tmp1095 = $tmp1093.value;
bool $tmp1096 = $tmp1094 == $tmp1095;
frost$core$Bit $tmp1097 = (frost$core$Bit) {$tmp1096};
bool $tmp1098 = $tmp1097.value;
if ($tmp1098) goto block35; else goto block36;
block35:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:536
frost$core$MutableString* $tmp1099 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp1099, &$s1100);
goto block11;
block36:;
frost$core$Int $tmp1101 = (frost$core$Int) {9u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Markdown.frost:538:48
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int.frost:426
int64_t $tmp1102 = $tmp1032.value;
int64_t $tmp1103 = $tmp1101.value;
bool $tmp1104 = $tmp1102 == $tmp1103;
frost$core$Bit $tmp1105 = (frost$core$Bit) {$tmp1104};
bool $tmp1106 = $tmp1105.value;
if ($tmp1106) goto block38; else goto block39;
block38:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:539
frost$core$MutableString* $tmp1107 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp1107, &$s1108);
goto block11;
block39:;
frost$core$Int $tmp1109 = (frost$core$Int) {10u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Markdown.frost:541:48
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int.frost:426
int64_t $tmp1110 = $tmp1032.value;
int64_t $tmp1111 = $tmp1109.value;
bool $tmp1112 = $tmp1110 == $tmp1111;
frost$core$Bit $tmp1113 = (frost$core$Bit) {$tmp1112};
bool $tmp1114 = $tmp1113.value;
if ($tmp1114) goto block41; else goto block42;
block41:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:542
frost$core$MutableString* $tmp1115 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp1115, &$s1116);
goto block11;
block42:;
frost$core$Int $tmp1117 = (frost$core$Int) {11u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Markdown.frost:544:48
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int.frost:426
int64_t $tmp1118 = $tmp1032.value;
int64_t $tmp1119 = $tmp1117.value;
bool $tmp1120 = $tmp1118 == $tmp1119;
frost$core$Bit $tmp1121 = (frost$core$Bit) {$tmp1120};
bool $tmp1122 = $tmp1121.value;
if ($tmp1122) goto block44; else goto block45;
block44:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:545
frost$core$MutableString* $tmp1123 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp1123, &$s1124);
goto block11;
block45:;
frost$core$Int $tmp1125 = (frost$core$Int) {12u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Markdown.frost:547:48
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int.frost:426
int64_t $tmp1126 = $tmp1032.value;
int64_t $tmp1127 = $tmp1125.value;
bool $tmp1128 = $tmp1126 == $tmp1127;
frost$core$Bit $tmp1129 = (frost$core$Bit) {$tmp1128};
bool $tmp1130 = $tmp1129.value;
if ($tmp1130) goto block47; else goto block48;
block47:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:548
frost$core$MutableString* $tmp1131 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp1131, &$s1132);
goto block11;
block48:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:551
frost$core$Int $tmp1133 = (frost$core$Int) {551u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s1134, $tmp1133);
abort(); // unreachable
block11:;
goto block10;
block10:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:555
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp1135 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
org$frostlang$frostc$Pair* $tmp1136 = *(&local4);
frost$core$Object** $tmp1137 = &$tmp1136->first;
frost$core$Object* $tmp1138 = *$tmp1137;
// begin inline call to function org.frostlang.frostc.parser.Parser.text(token:org.frostlang.frostc.parser.Token):frost.core.String from Markdown.frost:555:47
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/parser/Parser.frost:227
frost$core$String** $tmp1139 = &param1->source;
frost$core$String* $tmp1140 = *$tmp1139;
frost$core$String$Index $tmp1141 = ((org$frostlang$frostc$parser$Token$wrapper*) $tmp1138)->value.start;
frost$core$String$Index $tmp1142 = ((org$frostlang$frostc$parser$Token$wrapper*) $tmp1138)->value.end;
frost$core$Bit $tmp1143 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$String$Index$GT $tmp1144 = frost$core$Range$LTfrost$core$String$Index$GT$init$frost$core$String$Index$frost$core$String$Index$frost$core$Bit($tmp1141, $tmp1142, $tmp1143);
frost$core$String* $tmp1145 = frost$core$String$substring$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String($tmp1140, $tmp1144);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1145));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1145));
frost$core$MutableString$init$frost$core$String($tmp1135, $tmp1145);
*(&local7) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1135));
frost$core$MutableString* $tmp1146 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1146));
*(&local7) = $tmp1135;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1145));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1135));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:556
frost$core$MutableString* $tmp1147 = *(&local7);
frost$core$MutableString$replace$frost$core$String$frost$core$String($tmp1147, &$s1148, &$s1149);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:557
frost$core$MutableString* $tmp1150 = *(&local7);
frost$core$MutableString$replace$frost$core$String$frost$core$String($tmp1150, &$s1151, &$s1152);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:558
frost$core$MutableString* $tmp1153 = *(&local7);
frost$core$MutableString$replace$frost$core$String$frost$core$String($tmp1153, &$s1154, &$s1155);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:559
frost$core$MutableString* $tmp1156 = *(&local7);
org$frostlang$frostc$frostdoc$Protector** $tmp1157 = &param0->charProtector;
org$frostlang$frostc$frostdoc$Protector* $tmp1158 = *$tmp1157;
$fn1160 $tmp1159 = ($fn1160) $tmp1158->$class->vtable[2];
frost$core$String* $tmp1161 = $tmp1159($tmp1158, &$s1162);
frost$core$MutableString$replace$frost$core$String$frost$core$String($tmp1156, &$s1163, $tmp1161);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1161));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:560
frost$core$MutableString* $tmp1164 = *(&local7);
org$frostlang$frostc$frostdoc$Protector** $tmp1165 = &param0->charProtector;
org$frostlang$frostc$frostdoc$Protector* $tmp1166 = *$tmp1165;
$fn1168 $tmp1167 = ($fn1168) $tmp1166->$class->vtable[2];
frost$core$String* $tmp1169 = $tmp1167($tmp1166, &$s1170);
frost$core$MutableString$replace$frost$core$String$frost$core$String($tmp1164, &$s1171, $tmp1169);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1169));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:561
frost$core$MutableString* $tmp1172 = *(&local7);
org$frostlang$frostc$frostdoc$Protector** $tmp1173 = &param0->charProtector;
org$frostlang$frostc$frostdoc$Protector* $tmp1174 = *$tmp1173;
$fn1176 $tmp1175 = ($fn1176) $tmp1174->$class->vtable[2];
frost$core$String* $tmp1177 = $tmp1175($tmp1174, &$s1178);
frost$core$MutableString$replace$frost$core$String$frost$core$String($tmp1172, &$s1179, $tmp1177);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1177));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:562
frost$core$MutableString* $tmp1180 = *(&local7);
org$frostlang$frostc$frostdoc$Protector** $tmp1181 = &param0->charProtector;
org$frostlang$frostc$frostdoc$Protector* $tmp1182 = *$tmp1181;
$fn1184 $tmp1183 = ($fn1184) $tmp1182->$class->vtable[2];
frost$core$String* $tmp1185 = $tmp1183($tmp1182, &$s1186);
frost$core$MutableString$replace$frost$core$String$frost$core$String($tmp1180, &$s1187, $tmp1185);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1185));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:563
frost$core$MutableString* $tmp1188 = *(&local7);
org$frostlang$frostc$frostdoc$Protector** $tmp1189 = &param0->charProtector;
org$frostlang$frostc$frostdoc$Protector* $tmp1190 = *$tmp1189;
$fn1192 $tmp1191 = ($fn1192) $tmp1190->$class->vtable[2];
frost$core$String* $tmp1193 = $tmp1191($tmp1190, &$s1194);
frost$core$MutableString$replace$frost$core$String$frost$core$String($tmp1188, &$s1195, $tmp1193);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1193));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:564
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp1196 = *(&local3);
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp1197;
$tmp1197 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp1197->value = $tmp1196;
frost$core$Int $tmp1198 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.parser.SyntaxHighlighter.Kind.init(rv:frost.core.Int):org.frostlang.frostc.parser.SyntaxHighlighter.Kind from Markdown.frost:564:49
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:6
frost$core$Int* $tmp1199 = &(&local9)->$rawValue;
*$tmp1199 = $tmp1198;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp1200 = *(&local9);
*(&local8) = $tmp1200;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp1201 = *(&local8);
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp1202;
$tmp1202 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp1202->value = $tmp1201;
ITable* $tmp1203 = ((frost$core$Equatable*) $tmp1197)->$class->itable;
while ($tmp1203->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1203 = $tmp1203->next;
}
$fn1205 $tmp1204 = $tmp1203->methods[1];
frost$core$Bit $tmp1206 = $tmp1204(((frost$core$Equatable*) $tmp1197), ((frost$core$Equatable*) $tmp1202));
bool $tmp1207 = $tmp1206.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1202)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1197)));
if ($tmp1207) goto block53; else goto block52;
block53:;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp1208 = *(&local3);
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp1209;
$tmp1209 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp1209->value = $tmp1208;
frost$core$Int $tmp1210 = (frost$core$Int) {2u};
// begin inline call to org.frostlang.frostc.parser.SyntaxHighlighter.Kind.init(rv:frost.core.Int):org.frostlang.frostc.parser.SyntaxHighlighter.Kind from Markdown.frost:565:54
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:6
frost$core$Int* $tmp1211 = &(&local11)->$rawValue;
*$tmp1211 = $tmp1210;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp1212 = *(&local11);
*(&local10) = $tmp1212;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp1213 = *(&local10);
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp1214;
$tmp1214 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp1214->value = $tmp1213;
ITable* $tmp1215 = ((frost$core$Equatable*) $tmp1209)->$class->itable;
while ($tmp1215->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1215 = $tmp1215->next;
}
$fn1217 $tmp1216 = $tmp1215->methods[1];
frost$core$Bit $tmp1218 = $tmp1216(((frost$core$Equatable*) $tmp1209), ((frost$core$Equatable*) $tmp1214));
bool $tmp1219 = $tmp1218.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1214)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1209)));
if ($tmp1219) goto block51; else goto block52;
block51:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:566
frost$core$MutableString* $tmp1220 = *(&local0);
org$frostlang$frostc$Pair* $tmp1221 = *(&local4);
frost$core$Object** $tmp1222 = &$tmp1221->first;
frost$core$Object* $tmp1223 = *$tmp1222;
org$frostlang$frostc$parser$Token$Kind $tmp1224 = ((org$frostlang$frostc$parser$Token$wrapper*) $tmp1223)->value.kind;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp1225;
$tmp1225 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp1225->value = $tmp1224;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Markdown.frost:566:31
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:560
$fn1227 $tmp1226 = ($fn1227) ((frost$core$Object*) $tmp1225)->$class->vtable[0];
frost$core$String* $tmp1228 = $tmp1226(((frost$core$Object*) $tmp1225));
frost$core$String* $tmp1229 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1230, $tmp1228);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1229));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1229));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1228));
frost$core$String* $tmp1231 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1229, &$s1232);
frost$core$MutableString$append$frost$core$String($tmp1220, $tmp1231);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1231));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1229));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1225));
goto block52;
block52:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:568
frost$core$MutableString* $tmp1233 = *(&local0);
frost$core$MutableString* $tmp1234 = *(&local7);
// begin inline call to method frost.core.MutableString.append(o:frost.core.Object) from Markdown.frost:568:26
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:150
$fn1236 $tmp1235 = ($fn1236) ((frost$core$Object*) $tmp1234)->$class->vtable[0];
frost$core$String* $tmp1237 = $tmp1235(((frost$core$Object*) $tmp1234));
frost$core$MutableString$append$frost$core$String($tmp1233, $tmp1237);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1237));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:569
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp1238 = *(&local3);
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp1239;
$tmp1239 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp1239->value = $tmp1238;
frost$core$Int $tmp1240 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.parser.SyntaxHighlighter.Kind.init(rv:frost.core.Int):org.frostlang.frostc.parser.SyntaxHighlighter.Kind from Markdown.frost:569:49
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:6
frost$core$Int* $tmp1241 = &(&local13)->$rawValue;
*$tmp1241 = $tmp1240;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp1242 = *(&local13);
*(&local12) = $tmp1242;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp1243 = *(&local12);
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp1244;
$tmp1244 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp1244->value = $tmp1243;
ITable* $tmp1245 = ((frost$core$Equatable*) $tmp1239)->$class->itable;
while ($tmp1245->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1245 = $tmp1245->next;
}
$fn1247 $tmp1246 = $tmp1245->methods[1];
frost$core$Bit $tmp1248 = $tmp1246(((frost$core$Equatable*) $tmp1239), ((frost$core$Equatable*) $tmp1244));
bool $tmp1249 = $tmp1248.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1244)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1239)));
if ($tmp1249) goto block60; else goto block59;
block60:;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp1250 = *(&local3);
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp1251;
$tmp1251 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp1251->value = $tmp1250;
frost$core$Int $tmp1252 = (frost$core$Int) {2u};
// begin inline call to org.frostlang.frostc.parser.SyntaxHighlighter.Kind.init(rv:frost.core.Int):org.frostlang.frostc.parser.SyntaxHighlighter.Kind from Markdown.frost:570:54
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:6
frost$core$Int* $tmp1253 = &(&local15)->$rawValue;
*$tmp1253 = $tmp1252;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp1254 = *(&local15);
*(&local14) = $tmp1254;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp1255 = *(&local14);
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp1256;
$tmp1256 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp1256->value = $tmp1255;
ITable* $tmp1257 = ((frost$core$Equatable*) $tmp1251)->$class->itable;
while ($tmp1257->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1257 = $tmp1257->next;
}
$fn1259 $tmp1258 = $tmp1257->methods[1];
frost$core$Bit $tmp1260 = $tmp1258(((frost$core$Equatable*) $tmp1251), ((frost$core$Equatable*) $tmp1256));
bool $tmp1261 = $tmp1260.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1256)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1251)));
if ($tmp1261) goto block58; else goto block59;
block58:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:571
frost$core$MutableString* $tmp1262 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp1262, &$s1263);
goto block59;
block59:;
frost$core$MutableString* $tmp1264 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1264));
*(&local7) = ((frost$core$MutableString*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp990);
org$frostlang$frostc$Pair* $tmp1265 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1265));
*(&local4) = ((org$frostlang$frostc$Pair*) NULL);
goto block2;
block4:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp981));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:574
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp1266 = *(&local3);
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp1267;
$tmp1267 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp1267->value = $tmp1266;
frost$core$Int $tmp1268 = (frost$core$Int) {0u};
// begin inline call to org.frostlang.frostc.parser.SyntaxHighlighter.Kind.init(rv:frost.core.Int):org.frostlang.frostc.parser.SyntaxHighlighter.Kind from Markdown.frost:574:45
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:6
frost$core$Int* $tmp1269 = &(&local17)->$rawValue;
*$tmp1269 = $tmp1268;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp1270 = *(&local17);
*(&local16) = $tmp1270;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp1271 = *(&local16);
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp1272;
$tmp1272 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp1272->value = $tmp1271;
ITable* $tmp1273 = ((frost$core$Equatable*) $tmp1267)->$class->itable;
while ($tmp1273->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1273 = $tmp1273->next;
}
$fn1275 $tmp1274 = $tmp1273->methods[1];
frost$core$Bit $tmp1276 = $tmp1274(((frost$core$Equatable*) $tmp1267), ((frost$core$Equatable*) $tmp1272));
bool $tmp1277 = $tmp1276.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1272)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1267)));
if ($tmp1277) goto block63; else goto block64;
block63:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:575
frost$core$MutableString* $tmp1278 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp1278, &$s1279);
goto block64;
block64:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:577
frost$core$MutableString* $tmp1280 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp1280, &$s1281);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:578
frost$core$MutableString* $tmp1282 = *(&local0);
frost$core$String* $tmp1283 = frost$core$MutableString$finish$R$frost$core$String($tmp1282);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1283));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1283));
frost$core$MutableString* $tmp1284 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1284));
*(&local0) = ((frost$core$MutableString*) NULL);
return $tmp1283;

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
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:582
frost$threads$MessageQueue** $tmp1285 = &param0->errorQueue;
frost$threads$MessageQueue* $tmp1286 = *$tmp1285;
// begin inline call to method frost.threads.MessageQueue.clear() from Markdown.frost:582:25
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/threads/MessageQueue.frost:116
goto block2;
block2:;
// begin inline call to method frost.threads.MessageQueue.hasMessage():frost.core.Bit from MessageQueue.frost:116:25
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/threads/MessageQueue.frost:89
frost$core$Int $tmp1287 = frost$threads$MessageQueue$pendingMessages$R$frost$core$Int($tmp1286);
frost$core$Int $tmp1288 = (frost$core$Int) {0u};
int64_t $tmp1289 = $tmp1287.value;
int64_t $tmp1290 = $tmp1288.value;
bool $tmp1291 = $tmp1289 > $tmp1290;
frost$core$Bit $tmp1292 = (frost$core$Bit) {$tmp1291};
bool $tmp1293 = $tmp1292.value;
if ($tmp1293) goto block3; else goto block4;
block3:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/threads/MessageQueue.frost:117
frost$core$Immutable* $tmp1294 = frost$threads$MessageQueue$getMessage$R$frost$threads$MessageQueue$T($tmp1286);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1294));
goto block2;
block4:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:583
$fn1296 $tmp1295 = ($fn1296) ((frost$core$Object*) param1)->$class->vtable[0];
frost$core$String* $tmp1297 = $tmp1295(((frost$core$Object*) param1));
frost$core$String* $tmp1298 = frost$core$String$get_trimmed$R$frost$core$String($tmp1297);
*(&local0) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1298));
frost$core$String* $tmp1299 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1299));
*(&local0) = $tmp1298;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1298));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1297));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:584
org$frostlang$frostc$parser$Parser** $tmp1300 = &param0->parser;
org$frostlang$frostc$parser$Parser* $tmp1301 = *$tmp1300;
frost$io$File** $tmp1302 = &param0->source;
frost$io$File* $tmp1303 = *$tmp1302;
frost$core$Int $tmp1304 = (frost$core$Int) {18446744073709551615u};
frost$core$String* $tmp1305 = *(&local0);
org$frostlang$frostc$parser$Parser$start$frost$io$File$frost$core$Int$frost$core$String($tmp1301, $tmp1303, $tmp1304, $tmp1305);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:585
org$frostlang$frostc$parser$Parser** $tmp1306 = &param0->parser;
org$frostlang$frostc$parser$Parser* $tmp1307 = *$tmp1306;
org$frostlang$frostc$ASTNode* $tmp1308 = org$frostlang$frostc$parser$Parser$file$R$org$frostlang$frostc$ASTNode$Q($tmp1307);
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1308));
org$frostlang$frostc$ASTNode* $tmp1309 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1309));
*(&local1) = $tmp1308;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1308));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:586
org$frostlang$frostc$ASTNode* $tmp1310 = *(&local1);
frost$core$Bit $tmp1311 = (frost$core$Bit) {$tmp1310 != NULL};
bool $tmp1312 = $tmp1311.value;
if ($tmp1312) goto block8; else goto block7;
block8:;
frost$threads$MessageQueue** $tmp1313 = &param0->errorQueue;
frost$threads$MessageQueue* $tmp1314 = *$tmp1313;
// begin inline call to method frost.threads.MessageQueue.pendingMessages():frost.core.Int from Markdown.frost:586:54
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/threads/MessageQueue.frost:76
FROST_ASSERT(24 == sizeof(frost$threads$ScopedLock));
frost$threads$ScopedLock* $tmp1315 = (frost$threads$ScopedLock*) frostObjectAlloc(24, (frost$core$Class*) &frost$threads$ScopedLock$class);
frost$threads$Lock** $tmp1316 = &$tmp1314->lock;
frost$threads$Lock* $tmp1317 = *$tmp1316;
frost$threads$ScopedLock$init$frost$threads$Lock($tmp1315, $tmp1317);
*(&local2) = ((frost$threads$ScopedLock*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1315));
frost$threads$ScopedLock* $tmp1318 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1318));
*(&local2) = $tmp1315;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1315));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/threads/MessageQueue.frost:77
frost$core$Int* $tmp1319 = &$tmp1314->count;
frost$core$Int $tmp1320 = *$tmp1319;
frost$threads$ScopedLock* $tmp1321 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1321));
*(&local2) = ((frost$threads$ScopedLock*) NULL);
frost$core$Int $tmp1322 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Markdown.frost:586:57
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int.frost:426
int64_t $tmp1323 = $tmp1320.value;
int64_t $tmp1324 = $tmp1322.value;
bool $tmp1325 = $tmp1323 == $tmp1324;
frost$core$Bit $tmp1326 = (frost$core$Bit) {$tmp1325};
bool $tmp1327 = $tmp1326.value;
if ($tmp1327) goto block6; else goto block7;
block6:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:587
frost$core$Bit $tmp1328 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$MutableString$Index$Q$GT $tmp1329 = frost$core$Range$LTfrost$core$MutableString$Index$Q$GT$init$frost$core$MutableString$Index$Q$frost$core$MutableString$Index$Q$frost$core$Bit(((frost$core$MutableString$Index$nullable) { .nonnull = false }), ((frost$core$MutableString$Index$nullable) { .nonnull = false }), $tmp1328);
org$frostlang$frostc$parser$Parser** $tmp1330 = &param0->parser;
org$frostlang$frostc$parser$Parser* $tmp1331 = *$tmp1330;
$fn1333 $tmp1332 = ($fn1333) param0->$class->vtable[16];
frost$core$String* $tmp1334 = $tmp1332(param0, $tmp1331);
frost$core$MutableString$$IDXEQ$frost$core$Range$LTfrost$core$MutableString$Index$Q$GT$frost$core$String(param1, $tmp1329, $tmp1334);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1334));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:588
org$frostlang$frostc$ASTNode* $tmp1335 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1335));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp1336 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1336));
*(&local0) = ((frost$core$String*) NULL);
return;
block7:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:591
frost$threads$MessageQueue** $tmp1337 = &param0->errorQueue;
frost$threads$MessageQueue* $tmp1338 = *$tmp1337;
// begin inline call to method frost.threads.MessageQueue.clear() from Markdown.frost:591:25
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/threads/MessageQueue.frost:116
goto block12;
block12:;
// begin inline call to method frost.threads.MessageQueue.hasMessage():frost.core.Bit from MessageQueue.frost:116:25
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/threads/MessageQueue.frost:89
frost$core$Int $tmp1339 = frost$threads$MessageQueue$pendingMessages$R$frost$core$Int($tmp1338);
frost$core$Int $tmp1340 = (frost$core$Int) {0u};
int64_t $tmp1341 = $tmp1339.value;
int64_t $tmp1342 = $tmp1340.value;
bool $tmp1343 = $tmp1341 > $tmp1342;
frost$core$Bit $tmp1344 = (frost$core$Bit) {$tmp1343};
bool $tmp1345 = $tmp1344.value;
if ($tmp1345) goto block13; else goto block14;
block13:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/threads/MessageQueue.frost:117
frost$core$Immutable* $tmp1346 = frost$threads$MessageQueue$getMessage$R$frost$threads$MessageQueue$T($tmp1338);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1346));
goto block12;
block14:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:592
org$frostlang$frostc$parser$Parser** $tmp1347 = &param0->parser;
org$frostlang$frostc$parser$Parser* $tmp1348 = *$tmp1347;
frost$io$File** $tmp1349 = &param0->source;
frost$io$File* $tmp1350 = *$tmp1349;
frost$core$Int $tmp1351 = (frost$core$Int) {18446744073709551615u};
frost$core$String* $tmp1352 = *(&local0);
org$frostlang$frostc$parser$Parser$start$frost$io$File$frost$core$Int$frost$core$String($tmp1348, $tmp1350, $tmp1351, $tmp1352);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:593
goto block16;
block16:;
org$frostlang$frostc$parser$Parser** $tmp1353 = &param0->parser;
org$frostlang$frostc$parser$Parser* $tmp1354 = *$tmp1353;
// begin inline call to method org.frostlang.frostc.parser.Parser.peek():org.frostlang.frostc.parser.Token from Markdown.frost:593:26
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/parser/Parser.frost:167
frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT** $tmp1355 = &$tmp1354->pushbackBuffer;
frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT* $tmp1356 = *$tmp1355;
ITable* $tmp1357 = ((frost$collections$CollectionView*) $tmp1356)->$class->itable;
while ($tmp1357->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1357 = $tmp1357->next;
}
$fn1359 $tmp1358 = $tmp1357->methods[0];
frost$core$Int $tmp1360 = $tmp1358(((frost$collections$CollectionView*) $tmp1356));
frost$core$Int $tmp1361 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Parser.frost:167:33
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int.frost:426
int64_t $tmp1362 = $tmp1360.value;
int64_t $tmp1363 = $tmp1361.value;
bool $tmp1364 = $tmp1362 == $tmp1363;
frost$core$Bit $tmp1365 = (frost$core$Bit) {$tmp1364};
bool $tmp1366 = $tmp1365.value;
if ($tmp1366) goto block21; else goto block22;
block21:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/parser/Parser.frost:168
org$frostlang$frostc$parser$Token $tmp1367 = org$frostlang$frostc$parser$Parser$next$R$org$frostlang$frostc$parser$Token($tmp1354);
org$frostlang$frostc$parser$Parser$pushback$org$frostlang$frostc$parser$Token($tmp1354, $tmp1367);
goto block22;
block22:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/parser/Parser.frost:170
frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT** $tmp1368 = &$tmp1354->pushbackBuffer;
frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT* $tmp1369 = *$tmp1368;
frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT** $tmp1370 = &$tmp1354->pushbackBuffer;
frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT* $tmp1371 = *$tmp1370;
ITable* $tmp1372 = ((frost$collections$CollectionView*) $tmp1371)->$class->itable;
while ($tmp1372->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1372 = $tmp1372->next;
}
$fn1374 $tmp1373 = $tmp1372->methods[0];
frost$core$Int $tmp1375 = $tmp1373(((frost$collections$CollectionView*) $tmp1371));
frost$core$Int $tmp1376 = (frost$core$Int) {1u};
int64_t $tmp1377 = $tmp1375.value;
int64_t $tmp1378 = $tmp1376.value;
int64_t $tmp1379 = $tmp1377 - $tmp1378;
frost$core$Int $tmp1380 = (frost$core$Int) {$tmp1379};
// begin inline call to function frost.collections.SpecializedArray<org.frostlang.frostc.parser.Token>.[](index:frost.core.Int):org.frostlang.frostc.parser.Token from Parser.frost:170:30
frost$core$Int $tmp1381 = (frost$core$Int) {0u};
int64_t $tmp1382 = $tmp1380.value;
int64_t $tmp1383 = $tmp1381.value;
bool $tmp1384 = $tmp1382 >= $tmp1383;
frost$core$Bit $tmp1385 = (frost$core$Bit) {$tmp1384};
bool $tmp1386 = $tmp1385.value;
if ($tmp1386) goto block27; else goto block26;
block27:;
ITable* $tmp1387 = ((frost$collections$CollectionView*) $tmp1369)->$class->itable;
while ($tmp1387->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1387 = $tmp1387->next;
}
$fn1389 $tmp1388 = $tmp1387->methods[0];
frost$core$Int $tmp1390 = $tmp1388(((frost$collections$CollectionView*) $tmp1369));
int64_t $tmp1391 = $tmp1380.value;
int64_t $tmp1392 = $tmp1390.value;
bool $tmp1393 = $tmp1391 < $tmp1392;
frost$core$Bit $tmp1394 = (frost$core$Bit) {$tmp1393};
bool $tmp1395 = $tmp1394.value;
if ($tmp1395) goto block25; else goto block26;
block26:;
frost$core$Int $tmp1396 = (frost$core$Int) {67u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1397, $tmp1396, &$s1398);
abort(); // unreachable
block25:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/SpecializedArray.frost:68
org$frostlang$frostc$parser$Token** $tmp1399 = &$tmp1369->data;
org$frostlang$frostc$parser$Token* $tmp1400 = *$tmp1399;
frost$core$Int64 $tmp1401 = frost$core$Int64$init$frost$core$Int($tmp1380);
int64_t $tmp1402 = $tmp1401.value;
org$frostlang$frostc$parser$Token $tmp1403 = $tmp1400[$tmp1402];
org$frostlang$frostc$parser$Token$Kind $tmp1404 = $tmp1403.kind;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp1405;
$tmp1405 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp1405->value = $tmp1404;
frost$core$Int $tmp1406 = (frost$core$Int) {0u};
// begin inline call to org.frostlang.frostc.parser.Token.Kind.init(rv:frost.core.Int):org.frostlang.frostc.parser.Token.Kind from Markdown.frost:593:47
// /Users/ethannicholas/Dropbox/Frost-Int/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Int* $tmp1407 = &(&local4)->$rawValue;
*$tmp1407 = $tmp1406;
org$frostlang$frostc$parser$Token$Kind $tmp1408 = *(&local4);
*(&local3) = $tmp1408;
org$frostlang$frostc$parser$Token$Kind $tmp1409 = *(&local3);
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp1410;
$tmp1410 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp1410->value = $tmp1409;
ITable* $tmp1411 = ((frost$core$Equatable*) $tmp1405)->$class->itable;
while ($tmp1411->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1411 = $tmp1411->next;
}
$fn1413 $tmp1412 = $tmp1411->methods[1];
frost$core$Bit $tmp1414 = $tmp1412(((frost$core$Equatable*) $tmp1405), ((frost$core$Equatable*) $tmp1410));
bool $tmp1415 = $tmp1414.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1410)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1405)));
if ($tmp1415) goto block19; else goto block18;
block19:;
frost$threads$MessageQueue** $tmp1416 = &param0->errorQueue;
frost$threads$MessageQueue* $tmp1417 = *$tmp1416;
// begin inline call to method frost.threads.MessageQueue.pendingMessages():frost.core.Int from Markdown.frost:593:80
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/threads/MessageQueue.frost:76
FROST_ASSERT(24 == sizeof(frost$threads$ScopedLock));
frost$threads$ScopedLock* $tmp1418 = (frost$threads$ScopedLock*) frostObjectAlloc(24, (frost$core$Class*) &frost$threads$ScopedLock$class);
frost$threads$Lock** $tmp1419 = &$tmp1417->lock;
frost$threads$Lock* $tmp1420 = *$tmp1419;
frost$threads$ScopedLock$init$frost$threads$Lock($tmp1418, $tmp1420);
*(&local5) = ((frost$threads$ScopedLock*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1418));
frost$threads$ScopedLock* $tmp1421 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1421));
*(&local5) = $tmp1418;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1418));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/threads/MessageQueue.frost:77
frost$core$Int* $tmp1422 = &$tmp1417->count;
frost$core$Int $tmp1423 = *$tmp1422;
frost$threads$ScopedLock* $tmp1424 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1424));
*(&local5) = ((frost$threads$ScopedLock*) NULL);
frost$core$Int $tmp1425 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Markdown.frost:593:83
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int.frost:426
int64_t $tmp1426 = $tmp1423.value;
int64_t $tmp1427 = $tmp1425.value;
bool $tmp1428 = $tmp1426 == $tmp1427;
frost$core$Bit $tmp1429 = (frost$core$Bit) {$tmp1428};
bool $tmp1430 = $tmp1429.value;
if ($tmp1430) goto block17; else goto block18;
block17:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:594
org$frostlang$frostc$parser$Parser** $tmp1431 = &param0->parser;
org$frostlang$frostc$parser$Parser* $tmp1432 = *$tmp1431;
org$frostlang$frostc$ASTNode* $tmp1433 = org$frostlang$frostc$parser$Parser$statement$R$org$frostlang$frostc$ASTNode$Q($tmp1432);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1433));
goto block16;
block18:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:596
frost$threads$MessageQueue** $tmp1434 = &param0->errorQueue;
frost$threads$MessageQueue* $tmp1435 = *$tmp1434;
// begin inline call to method frost.threads.MessageQueue.pendingMessages():frost.core.Int from Markdown.frost:596:38
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/threads/MessageQueue.frost:76
FROST_ASSERT(24 == sizeof(frost$threads$ScopedLock));
frost$threads$ScopedLock* $tmp1436 = (frost$threads$ScopedLock*) frostObjectAlloc(24, (frost$core$Class*) &frost$threads$ScopedLock$class);
frost$threads$Lock** $tmp1437 = &$tmp1435->lock;
frost$threads$Lock* $tmp1438 = *$tmp1437;
frost$threads$ScopedLock$init$frost$threads$Lock($tmp1436, $tmp1438);
*(&local6) = ((frost$threads$ScopedLock*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1436));
frost$threads$ScopedLock* $tmp1439 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1439));
*(&local6) = $tmp1436;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1436));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/threads/MessageQueue.frost:77
frost$core$Int* $tmp1440 = &$tmp1435->count;
frost$core$Int $tmp1441 = *$tmp1440;
frost$threads$ScopedLock* $tmp1442 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1442));
*(&local6) = ((frost$threads$ScopedLock*) NULL);
frost$core$Int $tmp1443 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Markdown.frost:596:41
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int.frost:426
int64_t $tmp1444 = $tmp1441.value;
int64_t $tmp1445 = $tmp1443.value;
bool $tmp1446 = $tmp1444 == $tmp1445;
frost$core$Bit $tmp1447 = (frost$core$Bit) {$tmp1446};
bool $tmp1448 = $tmp1447.value;
if ($tmp1448) goto block31; else goto block32;
block31:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:597
frost$core$Bit $tmp1449 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$MutableString$Index$Q$GT $tmp1450 = frost$core$Range$LTfrost$core$MutableString$Index$Q$GT$init$frost$core$MutableString$Index$Q$frost$core$MutableString$Index$Q$frost$core$Bit(((frost$core$MutableString$Index$nullable) { .nonnull = false }), ((frost$core$MutableString$Index$nullable) { .nonnull = false }), $tmp1449);
org$frostlang$frostc$parser$Parser** $tmp1451 = &param0->parser;
org$frostlang$frostc$parser$Parser* $tmp1452 = *$tmp1451;
$fn1454 $tmp1453 = ($fn1454) param0->$class->vtable[16];
frost$core$String* $tmp1455 = $tmp1453(param0, $tmp1452);
frost$core$MutableString$$IDXEQ$frost$core$Range$LTfrost$core$MutableString$Index$Q$GT$frost$core$String(param1, $tmp1450, $tmp1455);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1455));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:598
org$frostlang$frostc$ASTNode* $tmp1456 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1456));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp1457 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1457));
*(&local0) = ((frost$core$String*) NULL);
return;
block32:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:601
frost$threads$MessageQueue** $tmp1458 = &param0->errorQueue;
frost$threads$MessageQueue* $tmp1459 = *$tmp1458;
// begin inline call to method frost.threads.MessageQueue.clear() from Markdown.frost:601:25
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/threads/MessageQueue.frost:116
goto block36;
block36:;
// begin inline call to method frost.threads.MessageQueue.hasMessage():frost.core.Bit from MessageQueue.frost:116:25
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/threads/MessageQueue.frost:89
frost$core$Int $tmp1460 = frost$threads$MessageQueue$pendingMessages$R$frost$core$Int($tmp1459);
frost$core$Int $tmp1461 = (frost$core$Int) {0u};
int64_t $tmp1462 = $tmp1460.value;
int64_t $tmp1463 = $tmp1461.value;
bool $tmp1464 = $tmp1462 > $tmp1463;
frost$core$Bit $tmp1465 = (frost$core$Bit) {$tmp1464};
bool $tmp1466 = $tmp1465.value;
if ($tmp1466) goto block37; else goto block38;
block37:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/threads/MessageQueue.frost:117
frost$core$Immutable* $tmp1467 = frost$threads$MessageQueue$getMessage$R$frost$threads$MessageQueue$T($tmp1459);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1467));
goto block36;
block38:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:602
org$frostlang$frostc$parser$Parser** $tmp1468 = &param0->parser;
org$frostlang$frostc$parser$Parser* $tmp1469 = *$tmp1468;
frost$io$File** $tmp1470 = &param0->source;
frost$io$File* $tmp1471 = *$tmp1470;
frost$core$Int $tmp1472 = (frost$core$Int) {18446744073709551615u};
frost$core$String* $tmp1473 = *(&local0);
org$frostlang$frostc$parser$Parser$start$frost$io$File$frost$core$Int$frost$core$String($tmp1469, $tmp1471, $tmp1472, $tmp1473);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:603
goto block40;
block40:;
org$frostlang$frostc$parser$Parser** $tmp1474 = &param0->parser;
org$frostlang$frostc$parser$Parser* $tmp1475 = *$tmp1474;
// begin inline call to method org.frostlang.frostc.parser.Parser.peek():org.frostlang.frostc.parser.Token from Markdown.frost:603:26
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/parser/Parser.frost:167
frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT** $tmp1476 = &$tmp1475->pushbackBuffer;
frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT* $tmp1477 = *$tmp1476;
ITable* $tmp1478 = ((frost$collections$CollectionView*) $tmp1477)->$class->itable;
while ($tmp1478->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1478 = $tmp1478->next;
}
$fn1480 $tmp1479 = $tmp1478->methods[0];
frost$core$Int $tmp1481 = $tmp1479(((frost$collections$CollectionView*) $tmp1477));
frost$core$Int $tmp1482 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Parser.frost:167:33
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int.frost:426
int64_t $tmp1483 = $tmp1481.value;
int64_t $tmp1484 = $tmp1482.value;
bool $tmp1485 = $tmp1483 == $tmp1484;
frost$core$Bit $tmp1486 = (frost$core$Bit) {$tmp1485};
bool $tmp1487 = $tmp1486.value;
if ($tmp1487) goto block45; else goto block46;
block45:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/parser/Parser.frost:168
org$frostlang$frostc$parser$Token $tmp1488 = org$frostlang$frostc$parser$Parser$next$R$org$frostlang$frostc$parser$Token($tmp1475);
org$frostlang$frostc$parser$Parser$pushback$org$frostlang$frostc$parser$Token($tmp1475, $tmp1488);
goto block46;
block46:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/parser/Parser.frost:170
frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT** $tmp1489 = &$tmp1475->pushbackBuffer;
frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT* $tmp1490 = *$tmp1489;
frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT** $tmp1491 = &$tmp1475->pushbackBuffer;
frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT* $tmp1492 = *$tmp1491;
ITable* $tmp1493 = ((frost$collections$CollectionView*) $tmp1492)->$class->itable;
while ($tmp1493->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1493 = $tmp1493->next;
}
$fn1495 $tmp1494 = $tmp1493->methods[0];
frost$core$Int $tmp1496 = $tmp1494(((frost$collections$CollectionView*) $tmp1492));
frost$core$Int $tmp1497 = (frost$core$Int) {1u};
int64_t $tmp1498 = $tmp1496.value;
int64_t $tmp1499 = $tmp1497.value;
int64_t $tmp1500 = $tmp1498 - $tmp1499;
frost$core$Int $tmp1501 = (frost$core$Int) {$tmp1500};
// begin inline call to function frost.collections.SpecializedArray<org.frostlang.frostc.parser.Token>.[](index:frost.core.Int):org.frostlang.frostc.parser.Token from Parser.frost:170:30
frost$core$Int $tmp1502 = (frost$core$Int) {0u};
int64_t $tmp1503 = $tmp1501.value;
int64_t $tmp1504 = $tmp1502.value;
bool $tmp1505 = $tmp1503 >= $tmp1504;
frost$core$Bit $tmp1506 = (frost$core$Bit) {$tmp1505};
bool $tmp1507 = $tmp1506.value;
if ($tmp1507) goto block51; else goto block50;
block51:;
ITable* $tmp1508 = ((frost$collections$CollectionView*) $tmp1490)->$class->itable;
while ($tmp1508->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1508 = $tmp1508->next;
}
$fn1510 $tmp1509 = $tmp1508->methods[0];
frost$core$Int $tmp1511 = $tmp1509(((frost$collections$CollectionView*) $tmp1490));
int64_t $tmp1512 = $tmp1501.value;
int64_t $tmp1513 = $tmp1511.value;
bool $tmp1514 = $tmp1512 < $tmp1513;
frost$core$Bit $tmp1515 = (frost$core$Bit) {$tmp1514};
bool $tmp1516 = $tmp1515.value;
if ($tmp1516) goto block49; else goto block50;
block50:;
frost$core$Int $tmp1517 = (frost$core$Int) {67u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1518, $tmp1517, &$s1519);
abort(); // unreachable
block49:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/SpecializedArray.frost:68
org$frostlang$frostc$parser$Token** $tmp1520 = &$tmp1490->data;
org$frostlang$frostc$parser$Token* $tmp1521 = *$tmp1520;
frost$core$Int64 $tmp1522 = frost$core$Int64$init$frost$core$Int($tmp1501);
int64_t $tmp1523 = $tmp1522.value;
org$frostlang$frostc$parser$Token $tmp1524 = $tmp1521[$tmp1523];
org$frostlang$frostc$parser$Token$Kind $tmp1525 = $tmp1524.kind;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp1526;
$tmp1526 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp1526->value = $tmp1525;
frost$core$Int $tmp1527 = (frost$core$Int) {0u};
// begin inline call to org.frostlang.frostc.parser.Token.Kind.init(rv:frost.core.Int):org.frostlang.frostc.parser.Token.Kind from Markdown.frost:603:47
// /Users/ethannicholas/Dropbox/Frost-Int/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Int* $tmp1528 = &(&local8)->$rawValue;
*$tmp1528 = $tmp1527;
org$frostlang$frostc$parser$Token$Kind $tmp1529 = *(&local8);
*(&local7) = $tmp1529;
org$frostlang$frostc$parser$Token$Kind $tmp1530 = *(&local7);
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp1531;
$tmp1531 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp1531->value = $tmp1530;
ITable* $tmp1532 = ((frost$core$Equatable*) $tmp1526)->$class->itable;
while ($tmp1532->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1532 = $tmp1532->next;
}
$fn1534 $tmp1533 = $tmp1532->methods[1];
frost$core$Bit $tmp1535 = $tmp1533(((frost$core$Equatable*) $tmp1526), ((frost$core$Equatable*) $tmp1531));
bool $tmp1536 = $tmp1535.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1531)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1526)));
if ($tmp1536) goto block43; else goto block42;
block43:;
frost$threads$MessageQueue** $tmp1537 = &param0->errorQueue;
frost$threads$MessageQueue* $tmp1538 = *$tmp1537;
// begin inline call to method frost.threads.MessageQueue.pendingMessages():frost.core.Int from Markdown.frost:603:80
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/threads/MessageQueue.frost:76
FROST_ASSERT(24 == sizeof(frost$threads$ScopedLock));
frost$threads$ScopedLock* $tmp1539 = (frost$threads$ScopedLock*) frostObjectAlloc(24, (frost$core$Class*) &frost$threads$ScopedLock$class);
frost$threads$Lock** $tmp1540 = &$tmp1538->lock;
frost$threads$Lock* $tmp1541 = *$tmp1540;
frost$threads$ScopedLock$init$frost$threads$Lock($tmp1539, $tmp1541);
*(&local9) = ((frost$threads$ScopedLock*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1539));
frost$threads$ScopedLock* $tmp1542 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1542));
*(&local9) = $tmp1539;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1539));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/threads/MessageQueue.frost:77
frost$core$Int* $tmp1543 = &$tmp1538->count;
frost$core$Int $tmp1544 = *$tmp1543;
frost$threads$ScopedLock* $tmp1545 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1545));
*(&local9) = ((frost$threads$ScopedLock*) NULL);
frost$core$Int $tmp1546 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Markdown.frost:603:83
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int.frost:426
int64_t $tmp1547 = $tmp1544.value;
int64_t $tmp1548 = $tmp1546.value;
bool $tmp1549 = $tmp1547 == $tmp1548;
frost$core$Bit $tmp1550 = (frost$core$Bit) {$tmp1549};
bool $tmp1551 = $tmp1550.value;
if ($tmp1551) goto block41; else goto block42;
block41:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:604
org$frostlang$frostc$parser$Parser** $tmp1552 = &param0->parser;
org$frostlang$frostc$parser$Parser* $tmp1553 = *$tmp1552;
org$frostlang$frostc$ASTNode* $tmp1554 = org$frostlang$frostc$parser$Parser$expression$R$org$frostlang$frostc$ASTNode$Q($tmp1553);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1554));
goto block40;
block42:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:606
frost$threads$MessageQueue** $tmp1555 = &param0->errorQueue;
frost$threads$MessageQueue* $tmp1556 = *$tmp1555;
// begin inline call to method frost.threads.MessageQueue.pendingMessages():frost.core.Int from Markdown.frost:606:38
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/threads/MessageQueue.frost:76
FROST_ASSERT(24 == sizeof(frost$threads$ScopedLock));
frost$threads$ScopedLock* $tmp1557 = (frost$threads$ScopedLock*) frostObjectAlloc(24, (frost$core$Class*) &frost$threads$ScopedLock$class);
frost$threads$Lock** $tmp1558 = &$tmp1556->lock;
frost$threads$Lock* $tmp1559 = *$tmp1558;
frost$threads$ScopedLock$init$frost$threads$Lock($tmp1557, $tmp1559);
*(&local10) = ((frost$threads$ScopedLock*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1557));
frost$threads$ScopedLock* $tmp1560 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1560));
*(&local10) = $tmp1557;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1557));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/threads/MessageQueue.frost:77
frost$core$Int* $tmp1561 = &$tmp1556->count;
frost$core$Int $tmp1562 = *$tmp1561;
frost$threads$ScopedLock* $tmp1563 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1563));
*(&local10) = ((frost$threads$ScopedLock*) NULL);
frost$core$Int $tmp1564 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Markdown.frost:606:41
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int.frost:426
int64_t $tmp1565 = $tmp1562.value;
int64_t $tmp1566 = $tmp1564.value;
bool $tmp1567 = $tmp1565 == $tmp1566;
frost$core$Bit $tmp1568 = (frost$core$Bit) {$tmp1567};
bool $tmp1569 = $tmp1568.value;
if ($tmp1569) goto block55; else goto block56;
block55:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:607
frost$core$Bit $tmp1570 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$MutableString$Index$Q$GT $tmp1571 = frost$core$Range$LTfrost$core$MutableString$Index$Q$GT$init$frost$core$MutableString$Index$Q$frost$core$MutableString$Index$Q$frost$core$Bit(((frost$core$MutableString$Index$nullable) { .nonnull = false }), ((frost$core$MutableString$Index$nullable) { .nonnull = false }), $tmp1570);
org$frostlang$frostc$parser$Parser** $tmp1572 = &param0->parser;
org$frostlang$frostc$parser$Parser* $tmp1573 = *$tmp1572;
$fn1575 $tmp1574 = ($fn1575) param0->$class->vtable[16];
frost$core$String* $tmp1576 = $tmp1574(param0, $tmp1573);
frost$core$MutableString$$IDXEQ$frost$core$Range$LTfrost$core$MutableString$Index$Q$GT$frost$core$String(param1, $tmp1571, $tmp1576);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1576));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:608
org$frostlang$frostc$ASTNode* $tmp1577 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1577));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp1578 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1578));
*(&local0) = ((frost$core$String*) NULL);
return;
block56:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:611
frost$threads$MessageQueue** $tmp1579 = &param0->errorQueue;
frost$threads$MessageQueue* $tmp1580 = *$tmp1579;
// begin inline call to method frost.threads.MessageQueue.clear() from Markdown.frost:611:25
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/threads/MessageQueue.frost:116
goto block60;
block60:;
// begin inline call to method frost.threads.MessageQueue.hasMessage():frost.core.Bit from MessageQueue.frost:116:25
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/threads/MessageQueue.frost:89
frost$core$Int $tmp1581 = frost$threads$MessageQueue$pendingMessages$R$frost$core$Int($tmp1580);
frost$core$Int $tmp1582 = (frost$core$Int) {0u};
int64_t $tmp1583 = $tmp1581.value;
int64_t $tmp1584 = $tmp1582.value;
bool $tmp1585 = $tmp1583 > $tmp1584;
frost$core$Bit $tmp1586 = (frost$core$Bit) {$tmp1585};
bool $tmp1587 = $tmp1586.value;
if ($tmp1587) goto block61; else goto block62;
block61:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/threads/MessageQueue.frost:117
frost$core$Immutable* $tmp1588 = frost$threads$MessageQueue$getMessage$R$frost$threads$MessageQueue$T($tmp1580);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1588));
goto block60;
block62:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:612
org$frostlang$frostc$parser$Parser** $tmp1589 = &param0->parser;
org$frostlang$frostc$parser$Parser* $tmp1590 = *$tmp1589;
frost$io$File** $tmp1591 = &param0->source;
frost$io$File* $tmp1592 = *$tmp1591;
frost$core$Int $tmp1593 = (frost$core$Int) {18446744073709551615u};
frost$core$String* $tmp1594 = *(&local0);
org$frostlang$frostc$parser$Parser$start$frost$io$File$frost$core$Int$frost$core$String($tmp1590, $tmp1592, $tmp1593, $tmp1594);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:613
goto block64;
block64:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:614
org$frostlang$frostc$parser$Parser** $tmp1595 = &param0->parser;
org$frostlang$frostc$parser$Parser* $tmp1596 = *$tmp1595;
org$frostlang$frostc$parser$Token $tmp1597 = org$frostlang$frostc$parser$Parser$next$R$org$frostlang$frostc$parser$Token($tmp1596);
*(&local11) = $tmp1597;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:615
org$frostlang$frostc$parser$Token $tmp1598 = *(&local11);
org$frostlang$frostc$parser$Token$Kind $tmp1599 = $tmp1598.kind;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp1600;
$tmp1600 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp1600->value = $tmp1599;
frost$core$Int $tmp1601 = (frost$core$Int) {0u};
// begin inline call to org.frostlang.frostc.parser.Token.Kind.init(rv:frost.core.Int):org.frostlang.frostc.parser.Token.Kind from Markdown.frost:615:38
// /Users/ethannicholas/Dropbox/Frost-Int/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Int* $tmp1602 = &(&local13)->$rawValue;
*$tmp1602 = $tmp1601;
org$frostlang$frostc$parser$Token$Kind $tmp1603 = *(&local13);
*(&local12) = $tmp1603;
org$frostlang$frostc$parser$Token$Kind $tmp1604 = *(&local12);
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp1605;
$tmp1605 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp1605->value = $tmp1604;
ITable* $tmp1606 = ((frost$core$Equatable*) $tmp1600)->$class->itable;
while ($tmp1606->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1606 = $tmp1606->next;
}
$fn1608 $tmp1607 = $tmp1606->methods[0];
frost$core$Bit $tmp1609 = $tmp1607(((frost$core$Equatable*) $tmp1600), ((frost$core$Equatable*) $tmp1605));
bool $tmp1610 = $tmp1609.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1605)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1600)));
if ($tmp1610) goto block66; else goto block67;
block66:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:616
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:619
frost$core$Bit $tmp1611 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$MutableString$Index$Q$GT $tmp1612 = frost$core$Range$LTfrost$core$MutableString$Index$Q$GT$init$frost$core$MutableString$Index$Q$frost$core$MutableString$Index$Q$frost$core$Bit(((frost$core$MutableString$Index$nullable) { .nonnull = false }), ((frost$core$MutableString$Index$nullable) { .nonnull = false }), $tmp1611);
org$frostlang$frostc$parser$Parser** $tmp1613 = &param0->parser;
org$frostlang$frostc$parser$Parser* $tmp1614 = *$tmp1613;
$fn1616 $tmp1615 = ($fn1616) param0->$class->vtable[16];
frost$core$String* $tmp1617 = $tmp1615(param0, $tmp1614);
frost$core$MutableString$$IDXEQ$frost$core$Range$LTfrost$core$MutableString$Index$Q$GT$frost$core$String(param1, $tmp1612, $tmp1617);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1617));
org$frostlang$frostc$ASTNode* $tmp1618 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1618));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp1619 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1619));
*(&local0) = ((frost$core$String*) NULL);
return;
block67:;
goto block64;

}
void org$frostlang$frostc$frostdoc$Markdown$encodeCode$frost$core$MutableString(org$frostlang$frostc$frostdoc$Markdown* param0, frost$core$MutableString* param1) {

frost$core$Matcher* local0 = NULL;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:625
FROST_ASSERT(24 == sizeof(frost$core$RegularExpression));
frost$core$RegularExpression* $tmp1620 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp1620, &$s1621);
// begin inline call to method frost.core.MutableString.replace(search:frost.core.RegularExpression, replacement:frost.core.String) from Markdown.frost:625:19
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:401
frost$core$Bit $tmp1622 = (frost$core$Bit) {true};
// begin inline call to method frost.core.MutableString.replace(search:frost.core.RegularExpression, replacement:frost.core.String, allowGroupReferences:frost.core.Bit) from MutableString.frost:401:16
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:406
$fn1624 $tmp1623 = ($fn1624) ((frost$core$Object*) param1)->$class->vtable[0];
frost$core$String* $tmp1625 = $tmp1623(((frost$core$Object*) param1));
frost$core$Matcher* $tmp1626 = frost$core$RegularExpression$matcher$frost$core$String$R$frost$core$Matcher($tmp1620, $tmp1625);
*(&local0) = ((frost$core$Matcher*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1626));
frost$core$Matcher* $tmp1627 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1627));
*(&local0) = $tmp1626;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1626));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1625));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:407
frost$core$MutableString$clear(param1);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:408
goto block3;
block3:;
frost$core$Matcher* $tmp1628 = *(&local0);
frost$core$Bit $tmp1629 = frost$core$Matcher$find$R$frost$core$Bit($tmp1628);
bool $tmp1630 = $tmp1629.value;
if ($tmp1630) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:409
frost$core$Matcher* $tmp1631 = *(&local0);
frost$core$Matcher$appendReplacement$frost$core$MutableString$frost$core$String$frost$core$Bit($tmp1631, param1, &$s1632, $tmp1622);
goto block3;
block5:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:411
frost$core$Matcher* $tmp1633 = *(&local0);
frost$core$Matcher$appendTail$frost$core$MutableString($tmp1633, param1);
frost$core$Matcher* $tmp1634 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1634));
*(&local0) = ((frost$core$Matcher*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1620));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:626
$fn1636 $tmp1635 = ($fn1636) param0->$class->vtable[17];
$tmp1635(param0, param1);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:627
frost$core$MutableString$replace$frost$core$String$frost$core$String(param1, &$s1637, &$s1638);
return;

}
void org$frostlang$frostc$frostdoc$Markdown$doLists$frost$core$MutableString(org$frostlang$frostc$frostdoc$Markdown* param0, frost$core$MutableString* param1) {

frost$core$Int local0;
frost$core$String* local1 = NULL;
frost$core$RegularExpression* local2 = NULL;
frost$core$RegularExpression* local3 = NULL;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:631
frost$core$Int $tmp1639 = (frost$core$Int) {4u};
frost$core$Int $tmp1640 = (frost$core$Int) {1u};
int64_t $tmp1641 = $tmp1639.value;
int64_t $tmp1642 = $tmp1640.value;
int64_t $tmp1643 = $tmp1641 - $tmp1642;
frost$core$Int $tmp1644 = (frost$core$Int) {$tmp1643};
*(&local0) = $tmp1644;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:633
frost$core$Int $tmp1645 = *(&local0);
frost$core$Int$wrapper* $tmp1646;
$tmp1646 = (frost$core$Int$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp1646->value = $tmp1645;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Markdown.frost:634:17
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:560
$fn1648 $tmp1647 = ($fn1648) ((frost$core$Object*) $tmp1646)->$class->vtable[0];
frost$core$String* $tmp1649 = $tmp1647(((frost$core$Object*) $tmp1646));
frost$core$String* $tmp1650 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1651, $tmp1649);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1650));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1650));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1649));
frost$core$String* $tmp1652 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1650, &$s1653);
frost$core$String* $tmp1654 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1652, &$s1655);
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1654));
frost$core$String* $tmp1656 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1656));
*(&local1) = $tmp1654;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1654));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1652));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1650));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1646));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:656
frost$core$Int* $tmp1657 = &param0->listLevel;
frost$core$Int $tmp1658 = *$tmp1657;
frost$core$Int $tmp1659 = (frost$core$Int) {0u};
int64_t $tmp1660 = $tmp1658.value;
int64_t $tmp1661 = $tmp1659.value;
bool $tmp1662 = $tmp1660 > $tmp1661;
frost$core$Bit $tmp1663 = (frost$core$Bit) {$tmp1662};
bool $tmp1664 = $tmp1663.value;
if ($tmp1664) goto block2; else goto block4;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:657
FROST_ASSERT(24 == sizeof(frost$core$RegularExpression));
frost$core$RegularExpression* $tmp1665 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$String* $tmp1666 = *(&local1);
frost$core$String* $tmp1667 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1668, $tmp1666);
frost$core$String* $tmp1669 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1667, &$s1670);
frost$core$RegularExpression$init$frost$core$String($tmp1665, $tmp1669);
*(&local2) = ((frost$core$RegularExpression*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1665));
frost$core$RegularExpression* $tmp1671 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1671));
*(&local2) = $tmp1665;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1669));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1667));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1665));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:658
frost$core$RegularExpression* $tmp1672 = *(&local2);
FROST_ASSERT(24 == sizeof(org$frostlang$frostc$frostdoc$Markdown$_Closure14));
org$frostlang$frostc$frostdoc$Markdown$_Closure14* $tmp1673 = (org$frostlang$frostc$frostdoc$Markdown$_Closure14*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$frostdoc$Markdown$_Closure14$class);
org$frostlang$frostc$frostdoc$Markdown$_Closure14$init$org$frostlang$frostc$frostdoc$Markdown($tmp1673, param0);
FROST_ASSERT(32 == sizeof(frost$core$MutableMethod));
frost$core$MutableMethod* $tmp1675 = (frost$core$MutableMethod*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$MutableMethod$class);
// begin inline call to frost.core.MutableMethod.init(pointer:frost.unsafe.Pointer<frost.core.Int8>, target:frost.core.Object?) from Markdown.frost:658:44
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableMethod.frost:32
frost$core$Int8** $tmp1676 = &$tmp1675->pointer;
*$tmp1676 = ((frost$core$Int8*) org$frostlang$frostc$frostdoc$Markdown$_Closure14$$anonymous13$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$Object);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableMethod.frost:33
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1673));
frost$core$Object** $tmp1677 = &$tmp1675->target;
frost$core$Object* $tmp1678 = *$tmp1677;
frost$core$Frost$unref$frost$core$Object$Q($tmp1678);
frost$core$Object** $tmp1679 = &$tmp1675->target;
*$tmp1679 = ((frost$core$Object*) $tmp1673);
frost$core$MutableString$replace$frost$core$RegularExpression$$LPfrost$collections$ListView$LTfrost$core$String$Q$GT$RP$EQ$GT$LPfrost$core$Object$RP(param1, $tmp1672, $tmp1675);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1675));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1673));
frost$core$RegularExpression* $tmp1680 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1680));
*(&local2) = ((frost$core$RegularExpression*) NULL);
goto block3;
block4:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:684
FROST_ASSERT(24 == sizeof(frost$core$RegularExpression));
frost$core$RegularExpression* $tmp1681 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$String* $tmp1682 = *(&local1);
frost$core$String* $tmp1683 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1684, $tmp1682);
frost$core$RegularExpression$init$frost$core$String($tmp1681, $tmp1683);
*(&local3) = ((frost$core$RegularExpression*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1681));
frost$core$RegularExpression* $tmp1685 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1685));
*(&local3) = $tmp1681;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1683));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1681));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:685
frost$core$RegularExpression* $tmp1686 = *(&local3);
FROST_ASSERT(24 == sizeof(org$frostlang$frostc$frostdoc$Markdown$_Closure16));
org$frostlang$frostc$frostdoc$Markdown$_Closure16* $tmp1687 = (org$frostlang$frostc$frostdoc$Markdown$_Closure16*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$frostdoc$Markdown$_Closure16$class);
org$frostlang$frostc$frostdoc$Markdown$_Closure16$init$org$frostlang$frostc$frostdoc$Markdown($tmp1687, param0);
FROST_ASSERT(32 == sizeof(frost$core$MutableMethod));
frost$core$MutableMethod* $tmp1689 = (frost$core$MutableMethod*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$MutableMethod$class);
// begin inline call to frost.core.MutableMethod.init(pointer:frost.unsafe.Pointer<frost.core.Int8>, target:frost.core.Object?) from Markdown.frost:685:44
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableMethod.frost:32
frost$core$Int8** $tmp1690 = &$tmp1689->pointer;
*$tmp1690 = ((frost$core$Int8*) org$frostlang$frostc$frostdoc$Markdown$_Closure16$$anonymous15$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$Object);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableMethod.frost:33
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1687));
frost$core$Object** $tmp1691 = &$tmp1689->target;
frost$core$Object* $tmp1692 = *$tmp1691;
frost$core$Frost$unref$frost$core$Object$Q($tmp1692);
frost$core$Object** $tmp1693 = &$tmp1689->target;
*$tmp1693 = ((frost$core$Object*) $tmp1687);
frost$core$MutableString$replace$frost$core$RegularExpression$$LPfrost$collections$ListView$LTfrost$core$String$Q$GT$RP$EQ$GT$LPfrost$core$Object$RP(param1, $tmp1686, $tmp1689);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1689));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1687));
frost$core$RegularExpression* $tmp1694 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1694));
*(&local3) = ((frost$core$RegularExpression*) NULL);
goto block3;
block3:;
frost$core$String* $tmp1695 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1695));
*(&local1) = ((frost$core$String*) NULL);
return;

}
frost$core$String* org$frostlang$frostc$frostdoc$Markdown$processListItems$frost$core$String$R$frost$core$String(org$frostlang$frostc$frostdoc$Markdown* param0, frost$core$String* param1) {

frost$core$String* local0 = NULL;
frost$core$RegularExpression* local1 = NULL;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:726
frost$core$Int* $tmp1696 = &param0->listLevel;
frost$core$Int $tmp1697 = *$tmp1696;
frost$core$Int $tmp1698 = (frost$core$Int) {1u};
int64_t $tmp1699 = $tmp1697.value;
int64_t $tmp1700 = $tmp1698.value;
int64_t $tmp1701 = $tmp1699 + $tmp1700;
frost$core$Int $tmp1702 = (frost$core$Int) {$tmp1701};
frost$core$Int* $tmp1703 = &param0->listLevel;
*$tmp1703 = $tmp1702;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:729
FROST_ASSERT(24 == sizeof(frost$core$RegularExpression));
frost$core$RegularExpression* $tmp1704 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp1704, &$s1705);
// begin inline call to function frost.core.String.replace(search:frost.core.RegularExpression, replacement:frost.core.String):frost.core.String from Markdown.frost:729:36
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1120
frost$core$Bit $tmp1706 = (frost$core$Bit) {true};
frost$core$String* $tmp1707 = frost$core$String$replace$frost$core$RegularExpression$frost$core$String$frost$core$Bit$R$frost$core$String(param1, $tmp1704, &$s1708, $tmp1706);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1707));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1707));
*(&local0) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1707));
frost$core$String* $tmp1709 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1709));
*(&local0) = $tmp1707;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1707));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1704));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:731
FROST_ASSERT(24 == sizeof(frost$core$RegularExpression));
frost$core$RegularExpression* $tmp1710 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$String* $tmp1711 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1712, &$s1713);
frost$core$String* $tmp1714 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1711, &$s1715);
frost$core$Int $tmp1716 = (frost$core$Int) {1u};
frost$core$RegularExpression$init$frost$core$String$frost$core$Int($tmp1710, $tmp1714, $tmp1716);
*(&local1) = ((frost$core$RegularExpression*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1710));
frost$core$RegularExpression* $tmp1717 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1717));
*(&local1) = $tmp1710;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1714));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1711));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1710));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:736
frost$core$String* $tmp1718 = *(&local0);
frost$core$RegularExpression* $tmp1719 = *(&local1);
FROST_ASSERT(24 == sizeof(org$frostlang$frostc$frostdoc$Markdown$_Closure18));
org$frostlang$frostc$frostdoc$Markdown$_Closure18* $tmp1720 = (org$frostlang$frostc$frostdoc$Markdown$_Closure18*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$frostdoc$Markdown$_Closure18$class);
org$frostlang$frostc$frostdoc$Markdown$_Closure18$init$org$frostlang$frostc$frostdoc$Markdown($tmp1720, param0);
FROST_ASSERT(32 == sizeof(frost$core$MutableMethod));
frost$core$MutableMethod* $tmp1722 = (frost$core$MutableMethod*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$MutableMethod$class);
// begin inline call to frost.core.MutableMethod.init(pointer:frost.unsafe.Pointer<frost.core.Int8>, target:frost.core.Object?) from Markdown.frost:736:33
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableMethod.frost:32
frost$core$Int8** $tmp1723 = &$tmp1722->pointer;
*$tmp1723 = ((frost$core$Int8*) org$frostlang$frostc$frostdoc$Markdown$_Closure18$$anonymous17$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$String);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableMethod.frost:33
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1720));
frost$core$Object** $tmp1724 = &$tmp1722->target;
frost$core$Object* $tmp1725 = *$tmp1724;
frost$core$Frost$unref$frost$core$Object$Q($tmp1725);
frost$core$Object** $tmp1726 = &$tmp1722->target;
*$tmp1726 = ((frost$core$Object*) $tmp1720);
frost$core$String* $tmp1727 = frost$core$String$replace$frost$core$RegularExpression$$LPfrost$collections$ListView$LTfrost$core$String$Q$GT$RP$EQ$GT$LPfrost$core$Object$RP$R$frost$core$String($tmp1718, $tmp1719, $tmp1722);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1727));
frost$core$String* $tmp1728 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1728));
*(&local0) = $tmp1727;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1727));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1722));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1720));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:753
frost$core$Int* $tmp1729 = &param0->listLevel;
frost$core$Int $tmp1730 = *$tmp1729;
frost$core$Int $tmp1731 = (frost$core$Int) {1u};
int64_t $tmp1732 = $tmp1730.value;
int64_t $tmp1733 = $tmp1731.value;
int64_t $tmp1734 = $tmp1732 - $tmp1733;
frost$core$Int $tmp1735 = (frost$core$Int) {$tmp1734};
frost$core$Int* $tmp1736 = &param0->listLevel;
*$tmp1736 = $tmp1735;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:754
frost$core$String* $tmp1737 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1737));
frost$core$RegularExpression* $tmp1738 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1738));
*(&local1) = ((frost$core$RegularExpression*) NULL);
frost$core$String* $tmp1739 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1739));
*(&local0) = ((frost$core$String*) NULL);
return $tmp1737;

}
frost$core$Bit org$frostlang$frostc$frostdoc$Markdown$hasParagraphBreak$frost$core$MutableString$R$frost$core$Bit(frost$core$MutableString* param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:759
// begin inline call to function frost.core.MutableString.contains(s:frost.core.String):frost.core.Bit from Markdown.frost:759:29
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:298
// begin inline call to function frost.core.MutableString.indexOf(s:frost.core.String):frost.core.MutableString.Index? from MutableString.frost:298:23
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:256
frost$core$MutableString$Index $tmp1740 = frost$core$MutableString$get_start$R$frost$core$MutableString$Index(param0);
frost$core$MutableString$Index$nullable $tmp1741 = frost$core$MutableString$indexOf$frost$core$String$frost$core$MutableString$Index$R$frost$core$MutableString$Index$Q(param0, &$s1742, $tmp1740);
frost$core$Bit $tmp1743 = (frost$core$Bit) {$tmp1741.nonnull};
return $tmp1743;

}
frost$core$Bit org$frostlang$frostc$frostdoc$Markdown$isEmptyString$frost$core$String$Q$R$frost$core$Bit(frost$core$String* param0) {

frost$core$Bit local0;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:764
frost$core$Bit $tmp1744 = (frost$core$Bit) {param0 == NULL};
bool $tmp1745 = $tmp1744.value;
if ($tmp1745) goto block1; else goto block2;
block1:;
*(&local0) = $tmp1744;
goto block3;
block2:;
frost$core$Bit $tmp1746 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(param0, &$s1747);
*(&local0) = $tmp1746;
goto block3;
block3:;
frost$core$Bit $tmp1748 = *(&local0);
return $tmp1748;

}
void org$frostlang$frostc$frostdoc$Markdown$doHeaders$frost$core$MutableString(org$frostlang$frostc$frostdoc$Markdown* param0, frost$core$MutableString* param1) {

frost$core$RegularExpression* local0 = NULL;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:769
FROST_ASSERT(24 == sizeof(frost$core$RegularExpression));
frost$core$RegularExpression* $tmp1749 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp1749, &$s1750);
FROST_ASSERT(24 == sizeof(org$frostlang$frostc$frostdoc$Markdown$_Closure20));
org$frostlang$frostc$frostdoc$Markdown$_Closure20* $tmp1751 = (org$frostlang$frostc$frostdoc$Markdown$_Closure20*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$frostdoc$Markdown$_Closure20$class);
org$frostlang$frostc$frostdoc$Markdown$_Closure20$init$org$frostlang$frostc$frostdoc$Markdown($tmp1751, param0);
FROST_ASSERT(32 == sizeof(frost$core$MutableMethod));
frost$core$MutableMethod* $tmp1753 = (frost$core$MutableMethod*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$MutableMethod$class);
// begin inline call to frost.core.MutableMethod.init(pointer:frost.unsafe.Pointer<frost.core.Int8>, target:frost.core.Object?) from Markdown.frost:769:46
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableMethod.frost:32
frost$core$Int8** $tmp1754 = &$tmp1753->pointer;
*$tmp1754 = ((frost$core$Int8*) org$frostlang$frostc$frostdoc$Markdown$_Closure20$$anonymous19$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$String);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableMethod.frost:33
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1751));
frost$core$Object** $tmp1755 = &$tmp1753->target;
frost$core$Object* $tmp1756 = *$tmp1755;
frost$core$Frost$unref$frost$core$Object$Q($tmp1756);
frost$core$Object** $tmp1757 = &$tmp1753->target;
*$tmp1757 = ((frost$core$Object*) $tmp1751);
frost$core$MutableString$replace$frost$core$RegularExpression$$LPfrost$collections$ListView$LTfrost$core$String$Q$GT$RP$EQ$GT$LPfrost$core$Object$RP(param1, $tmp1749, $tmp1753);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1753));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1751));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1749));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:774
FROST_ASSERT(24 == sizeof(frost$core$RegularExpression));
frost$core$RegularExpression* $tmp1758 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp1758, &$s1759);
FROST_ASSERT(24 == sizeof(org$frostlang$frostc$frostdoc$Markdown$_Closure22));
org$frostlang$frostc$frostdoc$Markdown$_Closure22* $tmp1760 = (org$frostlang$frostc$frostdoc$Markdown$_Closure22*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$frostdoc$Markdown$_Closure22$class);
org$frostlang$frostc$frostdoc$Markdown$_Closure22$init$org$frostlang$frostc$frostdoc$Markdown($tmp1760, param0);
FROST_ASSERT(32 == sizeof(frost$core$MutableMethod));
frost$core$MutableMethod* $tmp1762 = (frost$core$MutableMethod*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$MutableMethod$class);
// begin inline call to frost.core.MutableMethod.init(pointer:frost.unsafe.Pointer<frost.core.Int8>, target:frost.core.Object?) from Markdown.frost:774:46
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableMethod.frost:32
frost$core$Int8** $tmp1763 = &$tmp1762->pointer;
*$tmp1763 = ((frost$core$Int8*) org$frostlang$frostc$frostdoc$Markdown$_Closure22$$anonymous21$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$String);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableMethod.frost:33
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1760));
frost$core$Object** $tmp1764 = &$tmp1762->target;
frost$core$Object* $tmp1765 = *$tmp1764;
frost$core$Frost$unref$frost$core$Object$Q($tmp1765);
frost$core$Object** $tmp1766 = &$tmp1762->target;
*$tmp1766 = ((frost$core$Object*) $tmp1760);
frost$core$MutableString$replace$frost$core$RegularExpression$$LPfrost$collections$ListView$LTfrost$core$String$Q$GT$RP$EQ$GT$LPfrost$core$Object$RP(param1, $tmp1758, $tmp1762);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1762));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1760));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1758));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:781
FROST_ASSERT(24 == sizeof(frost$core$RegularExpression));
frost$core$RegularExpression* $tmp1767 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$Int $tmp1768 = (frost$core$Int) {1u};
frost$core$RegularExpression$init$frost$core$String$frost$core$Int($tmp1767, &$s1769, $tmp1768);
*(&local0) = ((frost$core$RegularExpression*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1767));
frost$core$RegularExpression* $tmp1770 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1770));
*(&local0) = $tmp1767;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1767));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:782
frost$core$RegularExpression* $tmp1771 = *(&local0);
FROST_ASSERT(24 == sizeof(org$frostlang$frostc$frostdoc$Markdown$_Closure24));
org$frostlang$frostc$frostdoc$Markdown$_Closure24* $tmp1772 = (org$frostlang$frostc$frostdoc$Markdown$_Closure24*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$frostdoc$Markdown$_Closure24$class);
org$frostlang$frostc$frostdoc$Markdown$_Closure24$init$org$frostlang$frostc$frostdoc$Markdown($tmp1772, param0);
FROST_ASSERT(32 == sizeof(frost$core$MutableMethod));
frost$core$MutableMethod* $tmp1774 = (frost$core$MutableMethod*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$MutableMethod$class);
// begin inline call to frost.core.MutableMethod.init(pointer:frost.unsafe.Pointer<frost.core.Int8>, target:frost.core.Object?) from Markdown.frost:782:27
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableMethod.frost:32
frost$core$Int8** $tmp1775 = &$tmp1774->pointer;
*$tmp1775 = ((frost$core$Int8*) org$frostlang$frostc$frostdoc$Markdown$_Closure24$$anonymous23$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$Object);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableMethod.frost:33
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1772));
frost$core$Object** $tmp1776 = &$tmp1774->target;
frost$core$Object* $tmp1777 = *$tmp1776;
frost$core$Frost$unref$frost$core$Object$Q($tmp1777);
frost$core$Object** $tmp1778 = &$tmp1774->target;
*$tmp1778 = ((frost$core$Object*) $tmp1772);
frost$core$MutableString$replace$frost$core$RegularExpression$$LPfrost$collections$ListView$LTfrost$core$String$Q$GT$RP$EQ$GT$LPfrost$core$Object$RP(param1, $tmp1771, $tmp1774);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1774));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1772));
frost$core$RegularExpression* $tmp1779 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1779));
*(&local0) = ((frost$core$RegularExpression*) NULL);
return;

}
void org$frostlang$frostc$frostdoc$Markdown$runSpanGamut$frost$core$MutableString(org$frostlang$frostc$frostdoc$Markdown* param0, frost$core$MutableString* param1) {

frost$core$Matcher* local0 = NULL;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:793
$fn1781 $tmp1780 = ($fn1781) param0->$class->vtable[24];
$tmp1780(param0, param1);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:794
$fn1783 $tmp1782 = ($fn1783) param0->$class->vtable[29];
$tmp1782(param0, param1);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:795
$fn1785 $tmp1784 = ($fn1785) param0->$class->vtable[3];
$tmp1784(param0, param1);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:797
$fn1787 $tmp1786 = ($fn1787) param0->$class->vtable[25];
$tmp1786(param0, param1);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:798
$fn1789 $tmp1788 = ($fn1789) param0->$class->vtable[26];
$tmp1788(param0, param1);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:799
$fn1791 $tmp1790 = ($fn1791) param0->$class->vtable[10];
$tmp1790(param0, param1);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:805
$fn1793 $tmp1792 = ($fn1793) param0->$class->vtable[24];
$tmp1792(param0, param1);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:807
$fn1795 $tmp1794 = ($fn1795) param0->$class->vtable[28];
$tmp1794(param0, param1);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:808
$fn1797 $tmp1796 = ($fn1797) param0->$class->vtable[27];
$tmp1796(param0, param1);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:810
FROST_ASSERT(24 == sizeof(frost$core$RegularExpression));
frost$core$RegularExpression* $tmp1798 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp1798, &$s1799);
// begin inline call to method frost.core.MutableString.replace(search:frost.core.RegularExpression, replacement:frost.core.String) from Markdown.frost:810:21
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:401
frost$core$Bit $tmp1800 = (frost$core$Bit) {true};
// begin inline call to method frost.core.MutableString.replace(search:frost.core.RegularExpression, replacement:frost.core.String, allowGroupReferences:frost.core.Bit) from MutableString.frost:401:16
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:406
$fn1802 $tmp1801 = ($fn1802) ((frost$core$Object*) param1)->$class->vtable[0];
frost$core$String* $tmp1803 = $tmp1801(((frost$core$Object*) param1));
frost$core$Matcher* $tmp1804 = frost$core$RegularExpression$matcher$frost$core$String$R$frost$core$Matcher($tmp1798, $tmp1803);
*(&local0) = ((frost$core$Matcher*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1804));
frost$core$Matcher* $tmp1805 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1805));
*(&local0) = $tmp1804;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1804));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1803));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:407
frost$core$MutableString$clear(param1);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:408
goto block3;
block3:;
frost$core$Matcher* $tmp1806 = *(&local0);
frost$core$Bit $tmp1807 = frost$core$Matcher$find$R$frost$core$Bit($tmp1806);
bool $tmp1808 = $tmp1807.value;
if ($tmp1808) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:409
frost$core$Matcher* $tmp1809 = *(&local0);
frost$core$Matcher$appendReplacement$frost$core$MutableString$frost$core$String$frost$core$Bit($tmp1809, param1, &$s1810, $tmp1800);
goto block3;
block5:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:411
frost$core$Matcher* $tmp1811 = *(&local0);
frost$core$Matcher$appendTail$frost$core$MutableString($tmp1811, param1);
frost$core$Matcher* $tmp1812 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1812));
*(&local0) = ((frost$core$Matcher*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1798));
return;

}
frost$core$String* org$frostlang$frostc$frostdoc$Markdown$nestedTagsRegex$frost$core$Int$R$frost$core$String(frost$core$Int param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:820
frost$core$Int $tmp1813 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Markdown.frost:820:18
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int.frost:426
int64_t $tmp1814 = param0.value;
int64_t $tmp1815 = $tmp1813.value;
bool $tmp1816 = $tmp1814 == $tmp1815;
frost$core$Bit $tmp1817 = (frost$core$Bit) {$tmp1816};
bool $tmp1818 = $tmp1817.value;
if ($tmp1818) goto block1; else goto block3;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:821
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1819));
return &$s1820;
block3:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:824
frost$core$Int $tmp1821 = (frost$core$Int) {1u};
int64_t $tmp1822 = param0.value;
int64_t $tmp1823 = $tmp1821.value;
int64_t $tmp1824 = $tmp1822 - $tmp1823;
frost$core$Int $tmp1825 = (frost$core$Int) {$tmp1824};
frost$core$String* $tmp1826 = org$frostlang$frostc$frostdoc$Markdown$nestedTagsRegex$frost$core$Int$R$frost$core$String($tmp1825);
frost$core$String* $tmp1827 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1828, $tmp1826);
frost$core$String* $tmp1829 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1827, &$s1830);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1829));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1829));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1827));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1826));
return $tmp1829;
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
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:829
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp1831 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp1831);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1831));
frost$collections$Array* $tmp1832 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1832));
*(&local0) = $tmp1831;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1831));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:830
frost$core$Int $tmp1833 = (frost$core$Int) {6u};
frost$core$String* $tmp1834 = org$frostlang$frostc$frostdoc$Markdown$nestedTagsRegex$frost$core$Int$R$frost$core$String($tmp1833);
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1834));
frost$core$String* $tmp1835 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1835));
*(&local1) = $tmp1834;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1834));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:832
FROST_ASSERT(24 == sizeof(frost$core$RegularExpression));
frost$core$RegularExpression* $tmp1836 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$String* $tmp1837 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1838, &$s1839);
frost$core$String* $tmp1840 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1837, &$s1841);
frost$core$String* $tmp1842 = *(&local1);
frost$core$String* $tmp1843 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1840, $tmp1842);
frost$core$Int $tmp1844 = (frost$core$Int) {2u};
frost$core$RegularExpression$init$frost$core$String$frost$core$Int($tmp1836, $tmp1843, $tmp1844);
*(&local2) = ((frost$core$RegularExpression*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1836));
frost$core$RegularExpression* $tmp1845 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1845));
*(&local2) = $tmp1836;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1843));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1840));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1837));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1836));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:840
frost$core$RegularExpression* $tmp1846 = *(&local2);
frost$core$Matcher* $tmp1847 = frost$core$RegularExpression$matcher$frost$core$String$R$frost$core$Matcher($tmp1846, param1);
*(&local3) = ((frost$core$Matcher*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1847));
frost$core$Matcher* $tmp1848 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1848));
*(&local3) = $tmp1847;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1847));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:841
// begin inline call to function frost.core.String.get_start():frost.core.String.Index from Markdown.frost:841:28
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1205
frost$core$Int $tmp1849 = (frost$core$Int) {0u};
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from String.frost:1205:21
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:61
frost$core$Int* $tmp1850 = &(&local5)->value;
*$tmp1850 = $tmp1849;
frost$core$String$Index $tmp1851 = *(&local5);
*(&local4) = $tmp1851;
frost$core$String$Index $tmp1852 = *(&local4);
*(&local6) = $tmp1852;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:842
goto block3;
block3:;
frost$core$Matcher* $tmp1853 = *(&local3);
frost$core$Bit $tmp1854 = frost$core$Matcher$find$R$frost$core$Bit($tmp1853);
bool $tmp1855 = $tmp1854.value;
if ($tmp1855) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:843
frost$core$String$Index $tmp1856 = *(&local6);
frost$core$String$Index$wrapper* $tmp1857;
$tmp1857 = (frost$core$String$Index$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$String$Index$wrapperclass);
$tmp1857->value = $tmp1856;
frost$core$Matcher* $tmp1858 = *(&local3);
frost$core$String$Index $tmp1859;
frost$core$Matcher$get_start$R$frost$core$String$Index(&$tmp1859, $tmp1858);
frost$core$String$Index$wrapper* $tmp1860;
$tmp1860 = (frost$core$String$Index$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$String$Index$wrapperclass);
$tmp1860->value = $tmp1859;
ITable* $tmp1861 = ((frost$core$Comparable*) $tmp1857)->$class->itable;
while ($tmp1861->$class != (frost$core$Class*) &frost$core$Comparable$class) {
    $tmp1861 = $tmp1861->next;
}
$fn1863 $tmp1862 = $tmp1861->methods[1];
frost$core$Bit $tmp1864 = $tmp1862(((frost$core$Comparable*) $tmp1857), ((frost$core$Comparable*) $tmp1860));
bool $tmp1865 = $tmp1864.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Comparable*) $tmp1860)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Comparable*) $tmp1857)));
if ($tmp1865) goto block6; else goto block7;
block6:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:844
frost$collections$Array* $tmp1866 = *(&local0);
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$frostdoc$Markdown$HTMLToken));
org$frostlang$frostc$frostdoc$Markdown$HTMLToken* $tmp1867 = (org$frostlang$frostc$frostdoc$Markdown$HTMLToken*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$frostdoc$Markdown$HTMLToken$class);
frost$core$Int $tmp1868 = (frost$core$Int) {1u};
frost$core$String$Index $tmp1869 = *(&local6);
frost$core$Matcher* $tmp1870 = *(&local3);
frost$core$String$Index $tmp1871;
frost$core$Matcher$get_start$R$frost$core$String$Index(&$tmp1871, $tmp1870);
frost$core$Bit $tmp1872 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$String$Index$GT $tmp1873 = frost$core$Range$LTfrost$core$String$Index$GT$init$frost$core$String$Index$frost$core$String$Index$frost$core$Bit($tmp1869, $tmp1871, $tmp1872);
frost$core$String* $tmp1874 = frost$core$String$substring$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String(param1, $tmp1873);
org$frostlang$frostc$frostdoc$Markdown$HTMLToken$init$frost$core$Int$frost$core$String($tmp1867, $tmp1868, $tmp1874);
frost$collections$Array$add$frost$collections$Array$T($tmp1866, ((frost$core$Object*) $tmp1867));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1874));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1867));
goto block7;
block7:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:846
frost$collections$Array* $tmp1875 = *(&local0);
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$frostdoc$Markdown$HTMLToken));
org$frostlang$frostc$frostdoc$Markdown$HTMLToken* $tmp1876 = (org$frostlang$frostc$frostdoc$Markdown$HTMLToken*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$frostdoc$Markdown$HTMLToken$class);
frost$core$Int $tmp1877 = (frost$core$Int) {0u};
frost$core$Matcher* $tmp1878 = *(&local3);
frost$core$String$Index $tmp1879;
frost$core$Matcher$get_start$R$frost$core$String$Index(&$tmp1879, $tmp1878);
frost$core$Matcher* $tmp1880 = *(&local3);
frost$core$String$Index $tmp1881;
frost$core$Matcher$get_end$R$frost$core$String$Index(&$tmp1881, $tmp1880);
frost$core$Bit $tmp1882 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$String$Index$GT $tmp1883 = frost$core$Range$LTfrost$core$String$Index$GT$init$frost$core$String$Index$frost$core$String$Index$frost$core$Bit($tmp1879, $tmp1881, $tmp1882);
frost$core$String* $tmp1884 = frost$core$String$substring$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String(param1, $tmp1883);
org$frostlang$frostc$frostdoc$Markdown$HTMLToken$init$frost$core$Int$frost$core$String($tmp1876, $tmp1877, $tmp1884);
frost$collections$Array$add$frost$collections$Array$T($tmp1875, ((frost$core$Object*) $tmp1876));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1884));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1876));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:847
frost$core$Matcher* $tmp1885 = *(&local3);
frost$core$String$Index $tmp1886;
frost$core$Matcher$get_end$R$frost$core$String$Index(&$tmp1886, $tmp1885);
*(&local6) = $tmp1886;
goto block3;
block5:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:849
frost$core$String$Index $tmp1887 = *(&local6);
frost$core$String$Index$wrapper* $tmp1888;
$tmp1888 = (frost$core$String$Index$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$String$Index$wrapperclass);
$tmp1888->value = $tmp1887;
// begin inline call to function frost.core.String.get_end():frost.core.String.Index from Markdown.frost:849:26
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1212
frost$core$Int* $tmp1889 = &param1->_length;
frost$core$Int $tmp1890 = *$tmp1889;
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from String.frost:1212:21
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:61
frost$core$Int* $tmp1891 = &(&local8)->value;
*$tmp1891 = $tmp1890;
frost$core$String$Index $tmp1892 = *(&local8);
*(&local7) = $tmp1892;
frost$core$String$Index $tmp1893 = *(&local7);
frost$core$String$Index$wrapper* $tmp1894;
$tmp1894 = (frost$core$String$Index$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$String$Index$wrapperclass);
$tmp1894->value = $tmp1893;
ITable* $tmp1895 = ((frost$core$Comparable*) $tmp1888)->$class->itable;
while ($tmp1895->$class != (frost$core$Class*) &frost$core$Comparable$class) {
    $tmp1895 = $tmp1895->next;
}
$fn1897 $tmp1896 = $tmp1895->methods[1];
frost$core$Bit $tmp1898 = $tmp1896(((frost$core$Comparable*) $tmp1888), ((frost$core$Comparable*) $tmp1894));
bool $tmp1899 = $tmp1898.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Comparable*) $tmp1894)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Comparable*) $tmp1888)));
if ($tmp1899) goto block8; else goto block9;
block8:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:850
frost$collections$Array* $tmp1900 = *(&local0);
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$frostdoc$Markdown$HTMLToken));
org$frostlang$frostc$frostdoc$Markdown$HTMLToken* $tmp1901 = (org$frostlang$frostc$frostdoc$Markdown$HTMLToken*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$frostdoc$Markdown$HTMLToken$class);
frost$core$Int $tmp1902 = (frost$core$Int) {1u};
frost$core$String$Index $tmp1903 = *(&local6);
// begin inline call to function frost.core.String.get_end():frost.core.String.Index from Markdown.frost:850:69
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1212
frost$core$Int* $tmp1904 = &param1->_length;
frost$core$Int $tmp1905 = *$tmp1904;
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from String.frost:1212:21
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:61
frost$core$Int* $tmp1906 = &(&local10)->value;
*$tmp1906 = $tmp1905;
frost$core$String$Index $tmp1907 = *(&local10);
*(&local9) = $tmp1907;
frost$core$String$Index $tmp1908 = *(&local9);
frost$core$Bit $tmp1909 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$String$Index$GT $tmp1910 = frost$core$Range$LTfrost$core$String$Index$GT$init$frost$core$String$Index$frost$core$String$Index$frost$core$Bit($tmp1903, $tmp1908, $tmp1909);
frost$core$String* $tmp1911 = frost$core$String$substring$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String(param1, $tmp1910);
org$frostlang$frostc$frostdoc$Markdown$HTMLToken$init$frost$core$Int$frost$core$String($tmp1901, $tmp1902, $tmp1911);
frost$collections$Array$add$frost$collections$Array$T($tmp1900, ((frost$core$Object*) $tmp1901));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1911));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1901));
goto block9;
block9:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:853
frost$collections$Array* $tmp1912 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp1912)));
frost$core$Matcher* $tmp1913 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1913));
*(&local3) = ((frost$core$Matcher*) NULL);
frost$core$RegularExpression* $tmp1914 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1914));
*(&local2) = ((frost$core$RegularExpression*) NULL);
frost$core$String* $tmp1915 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1915));
*(&local1) = ((frost$core$String*) NULL);
frost$collections$Array* $tmp1916 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1916));
*(&local0) = ((frost$collections$Array*) NULL);
return ((frost$collections$ListView*) $tmp1912);

}
void org$frostlang$frostc$frostdoc$Markdown$escapeSpecialCharsWithinTagAttributes$frost$core$MutableString(org$frostlang$frostc$frostdoc$Markdown* param0, frost$core$MutableString* param1) {

frost$collections$ListView* local0 = NULL;
org$frostlang$frostc$frostdoc$Markdown$HTMLToken* local1 = NULL;
frost$core$String* local2 = NULL;
frost$core$String* local3 = NULL;
frost$core$String* local4 = NULL;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:866
$fn1918 $tmp1917 = ($fn1918) ((frost$core$Object*) param1)->$class->vtable[0];
frost$core$String* $tmp1919 = $tmp1917(((frost$core$Object*) param1));
$fn1921 $tmp1920 = ($fn1921) param0->$class->vtable[23];
frost$collections$ListView* $tmp1922 = $tmp1920(param0, $tmp1919);
*(&local0) = ((frost$collections$ListView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1922));
frost$collections$ListView* $tmp1923 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1923));
*(&local0) = $tmp1922;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1922));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1919));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:867
frost$core$MutableString$clear(param1);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:869
frost$collections$ListView* $tmp1924 = *(&local0);
ITable* $tmp1925 = ((frost$collections$Iterable*) $tmp1924)->$class->itable;
while ($tmp1925->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1925 = $tmp1925->next;
}
$fn1927 $tmp1926 = $tmp1925->methods[0];
frost$collections$Iterator* $tmp1928 = $tmp1926(((frost$collections$Iterable*) $tmp1924));
goto block1;
block1:;
ITable* $tmp1929 = $tmp1928->$class->itable;
while ($tmp1929->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1929 = $tmp1929->next;
}
$fn1931 $tmp1930 = $tmp1929->methods[0];
frost$core$Bit $tmp1932 = $tmp1930($tmp1928);
bool $tmp1933 = $tmp1932.value;
if ($tmp1933) goto block3; else goto block2;
block2:;
*(&local1) = ((org$frostlang$frostc$frostdoc$Markdown$HTMLToken*) NULL);
ITable* $tmp1934 = $tmp1928->$class->itable;
while ($tmp1934->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1934 = $tmp1934->next;
}
$fn1936 $tmp1935 = $tmp1934->methods[1];
frost$core$Object* $tmp1937 = $tmp1935($tmp1928);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$frostdoc$Markdown$HTMLToken*) $tmp1937)));
org$frostlang$frostc$frostdoc$Markdown$HTMLToken* $tmp1938 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1938));
*(&local1) = ((org$frostlang$frostc$frostdoc$Markdown$HTMLToken*) $tmp1937);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:870
*(&local2) = ((frost$core$String*) NULL);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:871
org$frostlang$frostc$frostdoc$Markdown$HTMLToken* $tmp1939 = *(&local1);
frost$core$Int* $tmp1940 = &$tmp1939->$rawValue;
frost$core$Int $tmp1941 = *$tmp1940;
frost$core$Int $tmp1942 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Markdown.frost:872:31
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int.frost:426
int64_t $tmp1943 = $tmp1941.value;
int64_t $tmp1944 = $tmp1942.value;
bool $tmp1945 = $tmp1943 == $tmp1944;
frost$core$Bit $tmp1946 = (frost$core$Bit) {$tmp1945};
bool $tmp1947 = $tmp1946.value;
if ($tmp1947) goto block5; else goto block6;
block5:;
frost$core$String** $tmp1948 = (frost$core$String**) ($tmp1939->$data + 0);
frost$core$String* $tmp1949 = *$tmp1948;
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1949));
frost$core$String* $tmp1950 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1950));
*(&local3) = $tmp1949;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:873
frost$core$String* $tmp1951 = *(&local3);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1951));
frost$core$String* $tmp1952 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1952));
*(&local2) = $tmp1951;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:874
frost$core$String* $tmp1953 = *(&local2);
org$frostlang$frostc$frostdoc$Protector** $tmp1954 = &param0->charProtector;
org$frostlang$frostc$frostdoc$Protector* $tmp1955 = *$tmp1954;
$fn1957 $tmp1956 = ($fn1957) $tmp1955->$class->vtable[2];
frost$core$String* $tmp1958 = $tmp1956($tmp1955, &$s1959);
frost$core$String* $tmp1960 = frost$core$String$replace$frost$core$String$frost$core$String$R$frost$core$String($tmp1953, &$s1961, $tmp1958);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1960));
frost$core$String* $tmp1962 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1962));
*(&local2) = $tmp1960;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1960));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1958));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:875
frost$core$String* $tmp1963 = *(&local2);
org$frostlang$frostc$frostdoc$Protector** $tmp1964 = &param0->charProtector;
org$frostlang$frostc$frostdoc$Protector* $tmp1965 = *$tmp1964;
$fn1967 $tmp1966 = ($fn1967) $tmp1965->$class->vtable[2];
frost$core$String* $tmp1968 = $tmp1966($tmp1965, &$s1969);
frost$core$String* $tmp1970 = frost$core$String$replace$frost$core$String$frost$core$String$R$frost$core$String($tmp1963, &$s1971, $tmp1968);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1970));
frost$core$String* $tmp1972 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1972));
*(&local2) = $tmp1970;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1970));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1968));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:876
frost$core$String* $tmp1973 = *(&local2);
org$frostlang$frostc$frostdoc$Protector** $tmp1974 = &param0->charProtector;
org$frostlang$frostc$frostdoc$Protector* $tmp1975 = *$tmp1974;
$fn1977 $tmp1976 = ($fn1977) $tmp1975->$class->vtable[2];
frost$core$String* $tmp1978 = $tmp1976($tmp1975, &$s1979);
frost$core$String* $tmp1980 = frost$core$String$replace$frost$core$String$frost$core$String$R$frost$core$String($tmp1973, &$s1981, $tmp1978);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1980));
frost$core$String* $tmp1982 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1982));
*(&local2) = $tmp1980;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1980));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1978));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:877
frost$core$String* $tmp1983 = *(&local2);
org$frostlang$frostc$frostdoc$Protector** $tmp1984 = &param0->charProtector;
org$frostlang$frostc$frostdoc$Protector* $tmp1985 = *$tmp1984;
$fn1987 $tmp1986 = ($fn1987) $tmp1985->$class->vtable[2];
frost$core$String* $tmp1988 = $tmp1986($tmp1985, &$s1989);
frost$core$String* $tmp1990 = frost$core$String$replace$frost$core$String$frost$core$String$R$frost$core$String($tmp1983, &$s1991, $tmp1988);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1990));
frost$core$String* $tmp1992 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1992));
*(&local2) = $tmp1990;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1990));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1988));
frost$core$String* $tmp1993 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1993));
*(&local3) = ((frost$core$String*) NULL);
goto block4;
block6:;
frost$core$Int $tmp1994 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Markdown.frost:879:31
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int.frost:426
int64_t $tmp1995 = $tmp1941.value;
int64_t $tmp1996 = $tmp1994.value;
bool $tmp1997 = $tmp1995 == $tmp1996;
frost$core$Bit $tmp1998 = (frost$core$Bit) {$tmp1997};
bool $tmp1999 = $tmp1998.value;
if ($tmp1999) goto block8; else goto block4;
block8:;
frost$core$String** $tmp2000 = (frost$core$String**) ($tmp1939->$data + 0);
frost$core$String* $tmp2001 = *$tmp2000;
*(&local4) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2001));
frost$core$String* $tmp2002 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2002));
*(&local4) = $tmp2001;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:880
frost$core$String* $tmp2003 = *(&local4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2003));
frost$core$String* $tmp2004 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2004));
*(&local2) = $tmp2003;
frost$core$String* $tmp2005 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2005));
*(&local4) = ((frost$core$String*) NULL);
goto block4;
block4:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:883
frost$core$String* $tmp2006 = *(&local2);
frost$core$MutableString$append$frost$core$String(param1, $tmp2006);
frost$core$String* $tmp2007 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2007));
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp1937);
org$frostlang$frostc$frostdoc$Markdown$HTMLToken* $tmp2008 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2008));
*(&local1) = ((org$frostlang$frostc$frostdoc$Markdown$HTMLToken*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1928));
frost$collections$ListView* $tmp2009 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2009));
*(&local0) = ((frost$collections$ListView*) NULL);
return;

}
void org$frostlang$frostc$frostdoc$Markdown$doImages$frost$core$MutableString(org$frostlang$frostc$frostdoc$Markdown* param0, frost$core$MutableString* param1) {

frost$core$Matcher* local0 = NULL;
frost$core$Matcher* local1 = NULL;
frost$core$RegularExpression* local2 = NULL;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:889
FROST_ASSERT(24 == sizeof(frost$core$RegularExpression));
frost$core$RegularExpression* $tmp2010 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp2010, &$s2011);
// begin inline call to method frost.core.MutableString.replace(search:frost.core.RegularExpression, replacement:frost.core.String) from Markdown.frost:889:21
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:401
frost$core$Bit $tmp2012 = (frost$core$Bit) {true};
// begin inline call to method frost.core.MutableString.replace(search:frost.core.RegularExpression, replacement:frost.core.String, allowGroupReferences:frost.core.Bit) from MutableString.frost:401:16
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:406
$fn2014 $tmp2013 = ($fn2014) ((frost$core$Object*) param1)->$class->vtable[0];
frost$core$String* $tmp2015 = $tmp2013(((frost$core$Object*) param1));
frost$core$Matcher* $tmp2016 = frost$core$RegularExpression$matcher$frost$core$String$R$frost$core$Matcher($tmp2010, $tmp2015);
*(&local0) = ((frost$core$Matcher*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2016));
frost$core$Matcher* $tmp2017 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2017));
*(&local0) = $tmp2016;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2016));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2015));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:407
frost$core$MutableString$clear(param1);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:408
goto block3;
block3:;
frost$core$Matcher* $tmp2018 = *(&local0);
frost$core$Bit $tmp2019 = frost$core$Matcher$find$R$frost$core$Bit($tmp2018);
bool $tmp2020 = $tmp2019.value;
if ($tmp2020) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:409
frost$core$Matcher* $tmp2021 = *(&local0);
frost$core$Matcher$appendReplacement$frost$core$MutableString$frost$core$String$frost$core$Bit($tmp2021, param1, &$s2022, $tmp2012);
goto block3;
block5:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:411
frost$core$Matcher* $tmp2023 = *(&local0);
frost$core$Matcher$appendTail$frost$core$MutableString($tmp2023, param1);
frost$core$Matcher* $tmp2024 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2024));
*(&local0) = ((frost$core$Matcher*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2010));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:890
FROST_ASSERT(24 == sizeof(frost$core$RegularExpression));
frost$core$RegularExpression* $tmp2025 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp2025, &$s2026);
// begin inline call to method frost.core.MutableString.replace(search:frost.core.RegularExpression, replacement:frost.core.String) from Markdown.frost:890:21
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:401
frost$core$Bit $tmp2027 = (frost$core$Bit) {true};
// begin inline call to method frost.core.MutableString.replace(search:frost.core.RegularExpression, replacement:frost.core.String, allowGroupReferences:frost.core.Bit) from MutableString.frost:401:16
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:406
$fn2029 $tmp2028 = ($fn2029) ((frost$core$Object*) param1)->$class->vtable[0];
frost$core$String* $tmp2030 = $tmp2028(((frost$core$Object*) param1));
frost$core$Matcher* $tmp2031 = frost$core$RegularExpression$matcher$frost$core$String$R$frost$core$Matcher($tmp2025, $tmp2030);
*(&local1) = ((frost$core$Matcher*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2031));
frost$core$Matcher* $tmp2032 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2032));
*(&local1) = $tmp2031;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2031));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2030));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:407
frost$core$MutableString$clear(param1);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:408
goto block8;
block8:;
frost$core$Matcher* $tmp2033 = *(&local1);
frost$core$Bit $tmp2034 = frost$core$Matcher$find$R$frost$core$Bit($tmp2033);
bool $tmp2035 = $tmp2034.value;
if ($tmp2035) goto block9; else goto block10;
block9:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:409
frost$core$Matcher* $tmp2036 = *(&local1);
frost$core$Matcher$appendReplacement$frost$core$MutableString$frost$core$String$frost$core$Bit($tmp2036, param1, &$s2037, $tmp2027);
goto block8;
block10:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:411
frost$core$Matcher* $tmp2038 = *(&local1);
frost$core$Matcher$appendTail$frost$core$MutableString($tmp2038, param1);
frost$core$Matcher* $tmp2039 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2039));
*(&local1) = ((frost$core$Matcher*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2025));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:893
FROST_ASSERT(24 == sizeof(frost$core$RegularExpression));
frost$core$RegularExpression* $tmp2040 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$String* $tmp2041 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2042, &$s2043);
frost$core$String* $tmp2044 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2041, &$s2045);
frost$core$String* $tmp2046 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2044, &$s2047);
frost$core$RegularExpression$init$frost$core$String($tmp2040, $tmp2046);
*(&local2) = ((frost$core$RegularExpression*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2040));
frost$core$RegularExpression* $tmp2048 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2048));
*(&local2) = $tmp2040;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2046));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2044));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2041));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2040));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:898
frost$core$RegularExpression* $tmp2049 = *(&local2);
FROST_ASSERT(24 == sizeof(org$frostlang$frostc$frostdoc$Markdown$_Closure26));
org$frostlang$frostc$frostdoc$Markdown$_Closure26* $tmp2050 = (org$frostlang$frostc$frostdoc$Markdown$_Closure26*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$frostdoc$Markdown$_Closure26$class);
org$frostlang$frostc$frostdoc$Markdown$_Closure26$init$org$frostlang$frostc$frostdoc$Markdown($tmp2050, param0);
FROST_ASSERT(32 == sizeof(frost$core$MutableMethod));
frost$core$MutableMethod* $tmp2052 = (frost$core$MutableMethod*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$MutableMethod$class);
// begin inline call to frost.core.MutableMethod.init(pointer:frost.unsafe.Pointer<frost.core.Int8>, target:frost.core.Object?) from Markdown.frost:898:33
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableMethod.frost:32
frost$core$Int8** $tmp2053 = &$tmp2052->pointer;
*$tmp2053 = ((frost$core$Int8*) org$frostlang$frostc$frostdoc$Markdown$_Closure26$$anonymous25$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$String);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableMethod.frost:33
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2050));
frost$core$Object** $tmp2054 = &$tmp2052->target;
frost$core$Object* $tmp2055 = *$tmp2054;
frost$core$Frost$unref$frost$core$Object$Q($tmp2055);
frost$core$Object** $tmp2056 = &$tmp2052->target;
*$tmp2056 = ((frost$core$Object*) $tmp2050);
frost$core$MutableString$replace$frost$core$RegularExpression$$LPfrost$collections$ListView$LTfrost$core$String$Q$GT$RP$EQ$GT$LPfrost$core$Object$RP(param1, $tmp2049, $tmp2052);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2052));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2050));
frost$core$RegularExpression* $tmp2057 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2057));
*(&local2) = ((frost$core$RegularExpression*) NULL);
return;

}
void org$frostlang$frostc$frostdoc$Markdown$doAnchors$frost$core$MutableString(org$frostlang$frostc$frostdoc$Markdown* param0, frost$core$MutableString* param1) {

frost$core$RegularExpression* local0 = NULL;
frost$core$RegularExpression* local1 = NULL;
frost$core$RegularExpression* local2 = NULL;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:931
FROST_ASSERT(24 == sizeof(frost$core$RegularExpression));
frost$core$RegularExpression* $tmp2058 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$String* $tmp2059 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2060, &$s2061);
frost$core$String* $tmp2062 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2059, &$s2063);
frost$core$String* $tmp2064 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2062, &$s2065);
frost$core$RegularExpression$init$frost$core$String($tmp2058, $tmp2064);
*(&local0) = ((frost$core$RegularExpression*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2058));
frost$core$RegularExpression* $tmp2066 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2066));
*(&local0) = $tmp2058;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2064));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2062));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2059));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2058));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:936
frost$core$RegularExpression* $tmp2067 = *(&local0);
FROST_ASSERT(24 == sizeof(org$frostlang$frostc$frostdoc$Markdown$_Closure28));
org$frostlang$frostc$frostdoc$Markdown$_Closure28* $tmp2068 = (org$frostlang$frostc$frostdoc$Markdown$_Closure28*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$frostdoc$Markdown$_Closure28$class);
org$frostlang$frostc$frostdoc$Markdown$_Closure28$init$org$frostlang$frostc$frostdoc$Markdown($tmp2068, param0);
FROST_ASSERT(32 == sizeof(frost$core$MutableMethod));
frost$core$MutableMethod* $tmp2070 = (frost$core$MutableMethod*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$MutableMethod$class);
// begin inline call to frost.core.MutableMethod.init(pointer:frost.unsafe.Pointer<frost.core.Int8>, target:frost.core.Object?) from Markdown.frost:936:38
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableMethod.frost:32
frost$core$Int8** $tmp2071 = &$tmp2070->pointer;
*$tmp2071 = ((frost$core$Int8*) org$frostlang$frostc$frostdoc$Markdown$_Closure28$$anonymous27$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$Object);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableMethod.frost:33
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2068));
frost$core$Object** $tmp2072 = &$tmp2070->target;
frost$core$Object* $tmp2073 = *$tmp2072;
frost$core$Frost$unref$frost$core$Object$Q($tmp2073);
frost$core$Object** $tmp2074 = &$tmp2070->target;
*$tmp2074 = ((frost$core$Object*) $tmp2068);
frost$core$MutableString$replace$frost$core$RegularExpression$$LPfrost$collections$ListView$LTfrost$core$String$Q$GT$RP$EQ$GT$LPfrost$core$Object$RP(param1, $tmp2067, $tmp2070);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2070));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2068));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:968
FROST_ASSERT(24 == sizeof(frost$core$RegularExpression));
frost$core$RegularExpression* $tmp2075 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$String* $tmp2076 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2077, &$s2078);
frost$core$String* $tmp2079 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2076, &$s2080);
frost$core$String* $tmp2081 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2079, &$s2082);
frost$core$String* $tmp2083 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2081, &$s2084);
frost$core$String* $tmp2085 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2083, &$s2086);
frost$core$String* $tmp2087 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2085, &$s2088);
frost$core$String* $tmp2089 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2087, &$s2090);
frost$core$String* $tmp2091 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2089, &$s2092);
frost$core$String* $tmp2093 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2091, &$s2094);
frost$core$String* $tmp2095 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2093, &$s2096);
frost$core$String* $tmp2097 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2095, &$s2098);
frost$core$Int $tmp2099 = (frost$core$Int) {4u};
frost$core$RegularExpression$init$frost$core$String$frost$core$Int($tmp2075, $tmp2097, $tmp2099);
*(&local1) = ((frost$core$RegularExpression*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2075));
frost$core$RegularExpression* $tmp2100 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2100));
*(&local1) = $tmp2075;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2097));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2095));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2093));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2091));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2089));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2087));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2085));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2083));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2081));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2079));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2076));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2075));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:982
frost$core$RegularExpression* $tmp2101 = *(&local1);
FROST_ASSERT(24 == sizeof(org$frostlang$frostc$frostdoc$Markdown$_Closure30));
org$frostlang$frostc$frostdoc$Markdown$_Closure30* $tmp2102 = (org$frostlang$frostc$frostdoc$Markdown$_Closure30*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$frostdoc$Markdown$_Closure30$class);
org$frostlang$frostc$frostdoc$Markdown$_Closure30$init$org$frostlang$frostc$frostdoc$Markdown($tmp2102, param0);
FROST_ASSERT(32 == sizeof(frost$core$MutableMethod));
frost$core$MutableMethod* $tmp2104 = (frost$core$MutableMethod*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$MutableMethod$class);
// begin inline call to frost.core.MutableMethod.init(pointer:frost.unsafe.Pointer<frost.core.Int8>, target:frost.core.Object?) from Markdown.frost:982:36
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableMethod.frost:32
frost$core$Int8** $tmp2105 = &$tmp2104->pointer;
*$tmp2105 = ((frost$core$Int8*) org$frostlang$frostc$frostdoc$Markdown$_Closure30$$anonymous29$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$String);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableMethod.frost:33
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2102));
frost$core$Object** $tmp2106 = &$tmp2104->target;
frost$core$Object* $tmp2107 = *$tmp2106;
frost$core$Frost$unref$frost$core$Object$Q($tmp2107);
frost$core$Object** $tmp2108 = &$tmp2104->target;
*$tmp2108 = ((frost$core$Object*) $tmp2102);
frost$core$MutableString$replace$frost$core$RegularExpression$$LPfrost$collections$ListView$LTfrost$core$String$Q$GT$RP$EQ$GT$LPfrost$core$Object$RP(param1, $tmp2101, $tmp2104);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2104));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2102));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:1024
FROST_ASSERT(24 == sizeof(frost$core$RegularExpression));
frost$core$RegularExpression* $tmp2109 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$String* $tmp2110 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2111, &$s2112);
frost$core$String* $tmp2113 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2110, &$s2114);
frost$core$String* $tmp2115 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2113, &$s2116);
frost$core$Int $tmp2117 = (frost$core$Int) {4u};
frost$core$RegularExpression$init$frost$core$String$frost$core$Int($tmp2109, $tmp2115, $tmp2117);
*(&local2) = ((frost$core$RegularExpression*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2109));
frost$core$RegularExpression* $tmp2118 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2118));
*(&local2) = $tmp2109;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2115));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2113));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2110));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2109));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:1030
frost$core$RegularExpression* $tmp2119 = *(&local2);
FROST_ASSERT(24 == sizeof(org$frostlang$frostc$frostdoc$Markdown$_Closure32));
org$frostlang$frostc$frostdoc$Markdown$_Closure32* $tmp2120 = (org$frostlang$frostc$frostdoc$Markdown$_Closure32*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$frostdoc$Markdown$_Closure32$class);
org$frostlang$frostc$frostdoc$Markdown$_Closure32$init$org$frostlang$frostc$frostdoc$Markdown($tmp2120, param0);
FROST_ASSERT(32 == sizeof(frost$core$MutableMethod));
frost$core$MutableMethod* $tmp2122 = (frost$core$MutableMethod*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$MutableMethod$class);
// begin inline call to frost.core.MutableMethod.init(pointer:frost.unsafe.Pointer<frost.core.Int8>, target:frost.core.Object?) from Markdown.frost:1030:43
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableMethod.frost:32
frost$core$Int8** $tmp2123 = &$tmp2122->pointer;
*$tmp2123 = ((frost$core$Int8*) org$frostlang$frostc$frostdoc$Markdown$_Closure32$$anonymous31$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$Object);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableMethod.frost:33
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2120));
frost$core$Object** $tmp2124 = &$tmp2122->target;
frost$core$Object* $tmp2125 = *$tmp2124;
frost$core$Frost$unref$frost$core$Object$Q($tmp2125);
frost$core$Object** $tmp2126 = &$tmp2122->target;
*$tmp2126 = ((frost$core$Object*) $tmp2120);
frost$core$MutableString$replace$frost$core$RegularExpression$$LPfrost$collections$ListView$LTfrost$core$String$Q$GT$RP$EQ$GT$LPfrost$core$Object$RP(param1, $tmp2119, $tmp2122);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2122));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2120));
frost$core$RegularExpression* $tmp2127 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2127));
*(&local2) = ((frost$core$RegularExpression*) NULL);
frost$core$RegularExpression* $tmp2128 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2128));
*(&local1) = ((frost$core$RegularExpression*) NULL);
frost$core$RegularExpression* $tmp2129 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2129));
*(&local0) = ((frost$core$RegularExpression*) NULL);
return;

}
void org$frostlang$frostc$frostdoc$Markdown$doItalicsAndBold$frost$core$MutableString(org$frostlang$frostc$frostdoc$Markdown* param0, frost$core$MutableString* param1) {

frost$core$Matcher* local0 = NULL;
frost$core$Matcher* local1 = NULL;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:1072
FROST_ASSERT(24 == sizeof(frost$core$RegularExpression));
frost$core$RegularExpression* $tmp2130 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp2130, &$s2131);
// begin inline call to method frost.core.MutableString.replace(search:frost.core.RegularExpression, replacement:frost.core.String) from Markdown.frost:1072:23
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:401
frost$core$Bit $tmp2132 = (frost$core$Bit) {true};
// begin inline call to method frost.core.MutableString.replace(search:frost.core.RegularExpression, replacement:frost.core.String, allowGroupReferences:frost.core.Bit) from MutableString.frost:401:16
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:406
$fn2134 $tmp2133 = ($fn2134) ((frost$core$Object*) param1)->$class->vtable[0];
frost$core$String* $tmp2135 = $tmp2133(((frost$core$Object*) param1));
frost$core$Matcher* $tmp2136 = frost$core$RegularExpression$matcher$frost$core$String$R$frost$core$Matcher($tmp2130, $tmp2135);
*(&local0) = ((frost$core$Matcher*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2136));
frost$core$Matcher* $tmp2137 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2137));
*(&local0) = $tmp2136;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2136));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2135));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:407
frost$core$MutableString$clear(param1);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:408
goto block3;
block3:;
frost$core$Matcher* $tmp2138 = *(&local0);
frost$core$Bit $tmp2139 = frost$core$Matcher$find$R$frost$core$Bit($tmp2138);
bool $tmp2140 = $tmp2139.value;
if ($tmp2140) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:409
frost$core$Matcher* $tmp2141 = *(&local0);
frost$core$Matcher$appendReplacement$frost$core$MutableString$frost$core$String$frost$core$Bit($tmp2141, param1, &$s2142, $tmp2132);
goto block3;
block5:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:411
frost$core$Matcher* $tmp2143 = *(&local0);
frost$core$Matcher$appendTail$frost$core$MutableString($tmp2143, param1);
frost$core$Matcher* $tmp2144 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2144));
*(&local0) = ((frost$core$Matcher*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2130));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:1073
FROST_ASSERT(24 == sizeof(frost$core$RegularExpression));
frost$core$RegularExpression* $tmp2145 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp2145, &$s2146);
// begin inline call to method frost.core.MutableString.replace(search:frost.core.RegularExpression, replacement:frost.core.String) from Markdown.frost:1073:23
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:401
frost$core$Bit $tmp2147 = (frost$core$Bit) {true};
// begin inline call to method frost.core.MutableString.replace(search:frost.core.RegularExpression, replacement:frost.core.String, allowGroupReferences:frost.core.Bit) from MutableString.frost:401:16
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:406
$fn2149 $tmp2148 = ($fn2149) ((frost$core$Object*) param1)->$class->vtable[0];
frost$core$String* $tmp2150 = $tmp2148(((frost$core$Object*) param1));
frost$core$Matcher* $tmp2151 = frost$core$RegularExpression$matcher$frost$core$String$R$frost$core$Matcher($tmp2145, $tmp2150);
*(&local1) = ((frost$core$Matcher*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2151));
frost$core$Matcher* $tmp2152 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2152));
*(&local1) = $tmp2151;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2151));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2150));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:407
frost$core$MutableString$clear(param1);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:408
goto block8;
block8:;
frost$core$Matcher* $tmp2153 = *(&local1);
frost$core$Bit $tmp2154 = frost$core$Matcher$find$R$frost$core$Bit($tmp2153);
bool $tmp2155 = $tmp2154.value;
if ($tmp2155) goto block9; else goto block10;
block9:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:409
frost$core$Matcher* $tmp2156 = *(&local1);
frost$core$Matcher$appendReplacement$frost$core$MutableString$frost$core$String$frost$core$Bit($tmp2156, param1, &$s2157, $tmp2147);
goto block8;
block10:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:411
frost$core$Matcher* $tmp2158 = *(&local1);
frost$core$Matcher$appendTail$frost$core$MutableString($tmp2158, param1);
frost$core$Matcher* $tmp2159 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2159));
*(&local1) = ((frost$core$Matcher*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2145));
return;

}
void org$frostlang$frostc$frostdoc$Markdown$encodeAmpsAndAngles$frost$core$MutableString(org$frostlang$frostc$frostdoc$Markdown* param0, frost$core$MutableString* param1) {

frost$core$Matcher* local0 = NULL;
frost$core$Matcher* local1 = NULL;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:1079
FROST_ASSERT(24 == sizeof(frost$core$RegularExpression));
frost$core$RegularExpression* $tmp2160 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp2160, &$s2161);
// begin inline call to method frost.core.MutableString.replace(search:frost.core.RegularExpression, replacement:frost.core.String) from Markdown.frost:1079:23
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:401
frost$core$Bit $tmp2162 = (frost$core$Bit) {true};
// begin inline call to method frost.core.MutableString.replace(search:frost.core.RegularExpression, replacement:frost.core.String, allowGroupReferences:frost.core.Bit) from MutableString.frost:401:16
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:406
$fn2164 $tmp2163 = ($fn2164) ((frost$core$Object*) param1)->$class->vtable[0];
frost$core$String* $tmp2165 = $tmp2163(((frost$core$Object*) param1));
frost$core$Matcher* $tmp2166 = frost$core$RegularExpression$matcher$frost$core$String$R$frost$core$Matcher($tmp2160, $tmp2165);
*(&local0) = ((frost$core$Matcher*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2166));
frost$core$Matcher* $tmp2167 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2167));
*(&local0) = $tmp2166;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2166));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2165));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:407
frost$core$MutableString$clear(param1);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:408
goto block3;
block3:;
frost$core$Matcher* $tmp2168 = *(&local0);
frost$core$Bit $tmp2169 = frost$core$Matcher$find$R$frost$core$Bit($tmp2168);
bool $tmp2170 = $tmp2169.value;
if ($tmp2170) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:409
frost$core$Matcher* $tmp2171 = *(&local0);
frost$core$Matcher$appendReplacement$frost$core$MutableString$frost$core$String$frost$core$Bit($tmp2171, param1, &$s2172, $tmp2162);
goto block3;
block5:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:411
frost$core$Matcher* $tmp2173 = *(&local0);
frost$core$Matcher$appendTail$frost$core$MutableString($tmp2173, param1);
frost$core$Matcher* $tmp2174 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2174));
*(&local0) = ((frost$core$Matcher*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2160));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:1080
FROST_ASSERT(24 == sizeof(frost$core$RegularExpression));
frost$core$RegularExpression* $tmp2175 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp2175, &$s2176);
// begin inline call to method frost.core.MutableString.replace(search:frost.core.RegularExpression, replacement:frost.core.String) from Markdown.frost:1080:23
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:401
frost$core$Bit $tmp2177 = (frost$core$Bit) {true};
// begin inline call to method frost.core.MutableString.replace(search:frost.core.RegularExpression, replacement:frost.core.String, allowGroupReferences:frost.core.Bit) from MutableString.frost:401:16
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:406
$fn2179 $tmp2178 = ($fn2179) ((frost$core$Object*) param1)->$class->vtable[0];
frost$core$String* $tmp2180 = $tmp2178(((frost$core$Object*) param1));
frost$core$Matcher* $tmp2181 = frost$core$RegularExpression$matcher$frost$core$String$R$frost$core$Matcher($tmp2175, $tmp2180);
*(&local1) = ((frost$core$Matcher*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2181));
frost$core$Matcher* $tmp2182 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2182));
*(&local1) = $tmp2181;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2181));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2180));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:407
frost$core$MutableString$clear(param1);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:408
goto block8;
block8:;
frost$core$Matcher* $tmp2183 = *(&local1);
frost$core$Bit $tmp2184 = frost$core$Matcher$find$R$frost$core$Bit($tmp2183);
bool $tmp2185 = $tmp2184.value;
if ($tmp2185) goto block9; else goto block10;
block9:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:409
frost$core$Matcher* $tmp2186 = *(&local1);
frost$core$Matcher$appendReplacement$frost$core$MutableString$frost$core$String$frost$core$Bit($tmp2186, param1, &$s2187, $tmp2177);
goto block8;
block10:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:411
frost$core$Matcher* $tmp2188 = *(&local1);
frost$core$Matcher$appendTail$frost$core$MutableString($tmp2188, param1);
frost$core$Matcher* $tmp2189 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2189));
*(&local1) = ((frost$core$Matcher*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2175));
return;

}
void org$frostlang$frostc$frostdoc$Markdown$doCodeSpans$frost$core$MutableString(org$frostlang$frostc$frostdoc$Markdown* param0, frost$core$MutableString* param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:1084
FROST_ASSERT(24 == sizeof(frost$core$RegularExpression));
frost$core$RegularExpression* $tmp2190 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp2190, &$s2191);
FROST_ASSERT(24 == sizeof(org$frostlang$frostc$frostdoc$Markdown$_Closure34));
org$frostlang$frostc$frostdoc$Markdown$_Closure34* $tmp2192 = (org$frostlang$frostc$frostdoc$Markdown$_Closure34*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$frostdoc$Markdown$_Closure34$class);
org$frostlang$frostc$frostdoc$Markdown$_Closure34$init$org$frostlang$frostc$frostdoc$Markdown($tmp2192, param0);
FROST_ASSERT(32 == sizeof(frost$core$MutableMethod));
frost$core$MutableMethod* $tmp2194 = (frost$core$MutableMethod*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$MutableMethod$class);
// begin inline call to frost.core.MutableMethod.init(pointer:frost.unsafe.Pointer<frost.core.Int8>, target:frost.core.Object?) from Markdown.frost:1085:13
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableMethod.frost:32
frost$core$Int8** $tmp2195 = &$tmp2194->pointer;
*$tmp2195 = ((frost$core$Int8*) org$frostlang$frostc$frostdoc$Markdown$_Closure34$$anonymous33$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$String);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableMethod.frost:33
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2192));
frost$core$Object** $tmp2196 = &$tmp2194->target;
frost$core$Object* $tmp2197 = *$tmp2196;
frost$core$Frost$unref$frost$core$Object$Q($tmp2197);
frost$core$Object** $tmp2198 = &$tmp2194->target;
*$tmp2198 = ((frost$core$Object*) $tmp2192);
frost$core$MutableString$replace$frost$core$RegularExpression$$LPfrost$collections$ListView$LTfrost$core$String$Q$GT$RP$EQ$GT$LPfrost$core$Object$RP(param1, $tmp2190, $tmp2194);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2194));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2192));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2190));
return;

}
void org$frostlang$frostc$frostdoc$Markdown$cleanup(org$frostlang$frostc$frostdoc$Markdown* param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:83
frost$core$Object$cleanup(((frost$core$Object*) param0));
frost$io$File** $tmp2199 = &param0->source;
frost$io$File* $tmp2200 = *$tmp2199;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2200));
frost$threads$MessageQueue** $tmp2201 = &param0->errorQueue;
frost$threads$MessageQueue* $tmp2202 = *$tmp2201;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2202));
org$frostlang$frostc$parser$Parser** $tmp2203 = &param0->parser;
org$frostlang$frostc$parser$Parser* $tmp2204 = *$tmp2203;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2204));
frost$core$MutableMethod** $tmp2205 = &param0->linkResolver;
frost$core$MutableMethod* $tmp2206 = *$tmp2205;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2206));
frost$collections$HashMap** $tmp2207 = &param0->linkDefinitions;
frost$collections$HashMap* $tmp2208 = *$tmp2207;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2208));
org$frostlang$frostc$frostdoc$Protector** $tmp2209 = &param0->charProtector;
org$frostlang$frostc$frostdoc$Protector* $tmp2210 = *$tmp2209;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2210));
org$frostlang$frostc$frostdoc$Protector** $tmp2211 = &param0->htmlProtector;
org$frostlang$frostc$frostdoc$Protector* $tmp2212 = *$tmp2211;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2212));
frost$math$Random** $tmp2213 = &param0->random;
frost$math$Random* $tmp2214 = *$tmp2213;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2214));
return;

}

