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
#include "frost/core/Int64.h"
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
#include "frost/core/Range.LTfrost/core/Int64.GT.h"
#include "frost/core/UInt64.h"
#include "frost/core/Range.LTfrost/core/MutableString/Index.Q.GT.h"
#include "frost/core/MutableString/Index.h"
#include "org/frostlang/frostc/frostdoc/Markdown/_Closure6.h"
#include "frost/collections/MapView.h"
#include "frost/core/Char32.h"
#include "frost/core/Real64.h"
#include "frost/core/Int32.h"
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
typedef frost$core$Int64 (*$fn561)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn592)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn611)(org$frostlang$frostc$frostdoc$Protector*, frost$core$String*);
typedef frost$core$Int64 (*$fn628)(frost$collections$CollectionView*);
typedef void (*$fn647)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef frost$core$String* (*$fn652)(frost$core$Object*);
typedef frost$core$Int64 (*$fn666)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn709)(frost$collections$CollectionView*, frost$core$String*);
typedef frost$core$String* (*$fn717)(frost$core$Object*);
typedef frost$core$String* (*$fn733)(org$frostlang$frostc$frostdoc$Markdown$_Closure6*, frost$collections$ListView*);
typedef frost$collections$Iterator* (*$fn746)(frost$collections$MapView*);
typedef frost$core$Bit (*$fn750)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn755)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn762)(org$frostlang$frostc$frostdoc$Protector*, frost$core$String*);
typedef frost$collections$Iterator* (*$fn773)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn777)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn782)(frost$collections$Iterator*);
typedef frost$core$Real64 (*$fn788)(frost$math$Random*);
typedef frost$core$String* (*$fn805)(frost$core$Object*);
typedef frost$core$String* (*$fn844)(frost$core$Object*);
typedef frost$core$Object* (*$fn865)(org$frostlang$frostc$frostdoc$Markdown$_Closure9*, frost$collections$ListView*);
typedef frost$core$Object* (*$fn875)(frost$collections$ListView*, frost$core$Int64);
typedef frost$collections$Iterator* (*$fn881)(frost$collections$Iterable*);
typedef frost$core$Int64 (*$fn885)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn912)(frost$core$Object*);
typedef frost$core$String* (*$fn918)(frost$collections$ListView*);
typedef frost$core$String* (*$fn928)(frost$core$Object*);
typedef frost$core$String* (*$fn958)(org$frostlang$frostc$frostdoc$Markdown$_Closure12*, frost$collections$ListView*);
typedef frost$collections$Iterator* (*$fn979)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn983)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn988)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn999)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1011)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1024)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$String* (*$fn1159)(org$frostlang$frostc$frostdoc$Protector*, frost$core$String*);
typedef frost$core$String* (*$fn1167)(org$frostlang$frostc$frostdoc$Protector*, frost$core$String*);
typedef frost$core$String* (*$fn1175)(org$frostlang$frostc$frostdoc$Protector*, frost$core$String*);
typedef frost$core$String* (*$fn1183)(org$frostlang$frostc$frostdoc$Protector*, frost$core$String*);
typedef frost$core$String* (*$fn1191)(org$frostlang$frostc$frostdoc$Protector*, frost$core$String*);
typedef frost$core$Bit (*$fn1204)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1216)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$String* (*$fn1226)(frost$core$Object*);
typedef frost$core$String* (*$fn1235)(frost$core$Object*);
typedef frost$core$Bit (*$fn1246)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1258)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1274)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$String* (*$fn1295)(frost$core$Object*);
typedef frost$core$String* (*$fn1332)(org$frostlang$frostc$frostdoc$Markdown*, org$frostlang$frostc$parser$Parser*);
typedef frost$core$Int64 (*$fn1358)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn1373)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn1388)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn1411)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$String* (*$fn1452)(org$frostlang$frostc$frostdoc$Markdown*, org$frostlang$frostc$parser$Parser*);
typedef frost$core$Int64 (*$fn1478)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn1493)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn1508)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn1531)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$String* (*$fn1572)(org$frostlang$frostc$frostdoc$Markdown*, org$frostlang$frostc$parser$Parser*);
typedef frost$core$Bit (*$fn1605)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$String* (*$fn1613)(org$frostlang$frostc$frostdoc$Markdown*, org$frostlang$frostc$parser$Parser*);
typedef frost$core$String* (*$fn1621)(frost$core$Object*);
typedef void (*$fn1633)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef frost$core$String* (*$fn1645)(frost$core$Object*);
typedef frost$core$Object* (*$fn1671)(org$frostlang$frostc$frostdoc$Markdown$_Closure14*, frost$collections$ListView*);
typedef frost$core$Object* (*$fn1685)(org$frostlang$frostc$frostdoc$Markdown$_Closure16*, frost$collections$ListView*);
typedef frost$core$String* (*$fn1718)(org$frostlang$frostc$frostdoc$Markdown$_Closure18*, frost$collections$ListView*);
typedef frost$core$String* (*$fn1749)(org$frostlang$frostc$frostdoc$Markdown$_Closure20*, frost$collections$ListView*);
typedef frost$core$String* (*$fn1758)(org$frostlang$frostc$frostdoc$Markdown$_Closure22*, frost$collections$ListView*);
typedef frost$core$Object* (*$fn1770)(org$frostlang$frostc$frostdoc$Markdown$_Closure24*, frost$collections$ListView*);
typedef void (*$fn1778)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef void (*$fn1780)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef void (*$fn1782)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef void (*$fn1784)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef void (*$fn1786)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef void (*$fn1788)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef void (*$fn1790)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef void (*$fn1792)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef void (*$fn1794)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef frost$core$String* (*$fn1799)(frost$core$Object*);
typedef frost$core$Bit (*$fn1860)(frost$core$Comparable*, frost$core$Comparable*);
typedef frost$core$Bit (*$fn1894)(frost$core$Comparable*, frost$core$Comparable*);
typedef frost$core$String* (*$fn1915)(frost$core$Object*);
typedef frost$collections$ListView* (*$fn1918)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$String*);
typedef frost$collections$Iterator* (*$fn1924)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1928)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1933)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn1954)(org$frostlang$frostc$frostdoc$Protector*, frost$core$String*);
typedef frost$core$String* (*$fn1964)(org$frostlang$frostc$frostdoc$Protector*, frost$core$String*);
typedef frost$core$String* (*$fn1974)(org$frostlang$frostc$frostdoc$Protector*, frost$core$String*);
typedef frost$core$String* (*$fn1984)(org$frostlang$frostc$frostdoc$Protector*, frost$core$String*);
typedef frost$core$String* (*$fn2011)(frost$core$Object*);
typedef frost$core$String* (*$fn2026)(frost$core$Object*);
typedef frost$core$String* (*$fn2048)(org$frostlang$frostc$frostdoc$Markdown$_Closure26*, frost$collections$ListView*);
typedef frost$core$Object* (*$fn2066)(org$frostlang$frostc$frostdoc$Markdown$_Closure28*, frost$collections$ListView*);
typedef frost$core$String* (*$fn2100)(org$frostlang$frostc$frostdoc$Markdown$_Closure30*, frost$collections$ListView*);
typedef frost$core$Object* (*$fn2118)(org$frostlang$frostc$frostdoc$Markdown$_Closure32*, frost$collections$ListView*);
typedef frost$core$String* (*$fn2131)(frost$core$Object*);
typedef frost$core$String* (*$fn2146)(frost$core$Object*);
typedef frost$core$String* (*$fn2161)(frost$core$Object*);
typedef frost$core$String* (*$fn2176)(frost$core$Object*);
typedef frost$core$String* (*$fn2190)(org$frostlang$frostc$frostdoc$Markdown$_Closure34*, frost$collections$ListView*);

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
static frost$core$String $s601 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 110, 4208646717458716543, NULL };
static frost$core$String $s636 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s637 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x3a\x3d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x2c\x20\x76\x61\x6c\x75\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54\x29", 117, 9162589903746988738, NULL };
static frost$core$String $s655 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x70\x3e", 3, 8061034418550842365, NULL };
static frost$core$String $s657 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x2f\x70\x3e", 4, 8919941027677049518, NULL };
static frost$core$String $s674 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s675 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x3a\x3d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x2c\x20\x76\x61\x6c\x75\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54\x29", 117, 9162589903746988738, NULL };
static frost$core$String $s711 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a\x0a", 2, 600243221914207573, NULL };
static frost$core$String $s714 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x28\x28\x68\x74\x74\x70\x73\x3f\x7c\x66\x74\x70\x29\x3a\x5b\x5e\x27\x5c\x22\x3e\x5c\x73\x5d\x2b\x29\x3e", 27, 1795392191797210536, NULL };
static frost$core$String $s725 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x61\x20\x68\x72\x65\x66\x3d\x22\x24\x31\x22\x3e\x24\x31\x3c\x2f\x61\x3e", 19, 943263205479741618, NULL };
static frost$core$String $s729 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x28\x5b\x2d\x2e\x5c\x77\x5d\x2b\x5c\x40\x5b\x2d\x61\x2d\x7a\x30\x2d\x39\x5d\x2b\x28\x5c\x2e\x5b\x2d\x61\x2d\x7a\x30\x2d\x39\x5d\x2b\x29\x2a\x5c\x2e\x5b\x61\x2d\x7a\x5d\x2b\x29\x3e", 46, 5452143767326512023, NULL };
static frost$core$String $s798 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x26\x23", 2, 558196797748116622, NULL };
static frost$core$String $s808 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3b", 1, -5808598654595781638, NULL };
static frost$core$String $s817 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x26\x23\x78", 3, -5531746251334265342, NULL };
static frost$core$String $s837 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x78", 1, -5808529385363204345, NULL };
static frost$core$String $s839 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3b", 1, -5808598654595781638, NULL };
static frost$core$String $s849 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x28", 2, 567770245493057549, NULL };
static frost$core$String $s850 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5e\x5b\x20\x09\x5d\x2a\x3e\x5b\x20\x09\x5d\x3f", 12, -7372722945027663410, NULL };
static frost$core$String $s852 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x2b\x5c\x6e", 4, 5142313243796413576, NULL };
static frost$core$String $s854 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x2e\x2b\x5c\x6e\x29\x2a", 7, -4363383151632465587, NULL };
static frost$core$String $s856 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5c\x6e\x2a", 3, -5612786845647453793, NULL };
static frost$core$String $s858 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29\x2b", 2, 566746600167382333, NULL };
static frost$core$String $s860 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s891 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20", 1, -5808626142386486913, NULL };
static frost$core$String $s917 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x2e\x2a\x3f\x29\x5c\x74", 7, 3712169380313635567, NULL };
static frost$core$String $s925 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x3f\x6d\x29\x5e\x28\x5c\x74\x7c\x5b\x20\x5d\x7b\x31\x2c\x34\x7d\x29", 18, -3272951813139089848, NULL };
static frost$core$String $s936 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s941 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x3f\x3a\x5c\x6e\x5c\x6e\x7c\x5c\x41\x29\x28\x28\x3f\x3a", 15, -7138352204384862423, NULL };
static frost$core$String $s942 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x3f\x3a\x5b\x20\x5d\x7b\x34\x7d\x29", 10, -7521922402797660827, NULL };
static frost$core$String $s944 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x2a\x5c\x6e\x2b", 5, -6625699055198575136, NULL };
static frost$core$String $s946 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29\x2b", 2, 566746600167382333, NULL };
static frost$core$String $s948 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s950 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x28\x3f\x3d\x5e\x5b\x20\x5d\x7b\x30\x2c\x34\x7d\x5c\x53\x29\x7c\x5c\x5a\x29", 20, 3651045375067248158, NULL };
static frost$core$String $s967 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x66\x72\x6f\x73\x74\x63\x6f\x64\x65\x22\x3e", 24, 8088723627449183031, NULL };
static frost$core$String $s1015 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x2f\x73\x70\x61\x6e\x3e", 7, 8018166017091831374, NULL };
static frost$core$String $s1051 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x63\x6f\x6d\x6d\x65\x6e\x74\x22\x3e", 22, 5195701876173909349, NULL };
static frost$core$String $s1059 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x22\x3e", 25, -1277266025356162443, NULL };
static frost$core$String $s1067 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x6d\x65\x74\x68\x6f\x64\x4e\x61\x6d\x65\x22\x3e", 25, 614141651668444638, NULL };
static frost$core$String $s1075 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x70\x61\x72\x61\x6d\x65\x74\x65\x72\x4e\x61\x6d\x65\x22\x3e", 28, 7976964863345252008, NULL };
static frost$core$String $s1083 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x74\x79\x70\x65\x22\x3e", 19, -6237120118826539316, NULL };
static frost$core$String $s1091 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x6b\x65\x79\x77\x6f\x72\x64\x22\x3e", 22, 3489752146076448555, NULL };
static frost$core$String $s1099 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x63\x6f\x6e\x74\x72\x6f\x6c\x22\x3e", 22, -6843474029214577891, NULL };
static frost$core$String $s1107 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x6c\x69\x74\x65\x72\x61\x6c\x22\x3e", 22, -3542195609056500961, NULL };
static frost$core$String $s1115 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x73\x74\x72\x69\x6e\x67\x22\x3e", 21, -4855012157584048303, NULL };
static frost$core$String $s1123 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x6f\x70\x65\x72\x61\x74\x6f\x72\x22\x3e", 23, 33141744113103844, NULL };
static frost$core$String $s1131 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x6c\x61\x62\x65\x6c\x22\x3e", 20, -149918338464228758, NULL };
static frost$core$String $s1133 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x66\x72\x6f\x73\x74", 14, -4595392010584278012, NULL };
static frost$core$String $s1147 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x26", 1, -5808628341409743335, NULL };
static frost$core$String $s1148 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x26\x61\x6d\x70\x3b", 5, 4071416011722950258, NULL };
static frost$core$String $s1150 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c", 1, -5808604152153922693, NULL };
static frost$core$String $s1151 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x26\x6c\x74\x3b", 4, 3062186500626132942, NULL };
static frost$core$String $s1153 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3e", 1, -5808601953130666271, NULL };
static frost$core$String $s1154 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x26\x67\x74\x3b", 4, 8779067523193954595, NULL };
static frost$core$String $s1161 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2a", 1, -5808615147270204803, NULL };
static frost$core$String $s1162 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5c\x2a", 2, 671060566850019011, NULL };
static frost$core$String $s1169 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5f", 1, -5808497499525986226, NULL };
static frost$core$String $s1170 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5f", 1, -5808497499525986226, NULL };
static frost$core$String $s1177 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5b", 1, -5808493101479473382, NULL };
static frost$core$String $s1178 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5c\x5b", 2, 671077059524442176, NULL };
static frost$core$String $s1185 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5d", 1, -5808499698549242648, NULL };
static frost$core$String $s1186 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5c\x5d", 2, 671083656594211442, NULL };
static frost$core$String $s1193 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5c", 1, -5808498599037614437, NULL };
static frost$core$String $s1194 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5c\x5c", 2, 671084756105839653, NULL };
static frost$core$String $s1229 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22", 13, 4264447674952797972, NULL };
static frost$core$String $s1231 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x22\x3e", 2, 561975819213520929, NULL };
static frost$core$String $s1262 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x2f\x73\x70\x61\x6e\x3e", 7, 8018166017091831374, NULL };
static frost$core$String $s1278 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x2f\x73\x70\x61\x6e\x3e", 7, 8018166017091831374, NULL };
static frost$core$String $s1280 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x2f\x73\x70\x61\x6e\x3e", 7, 8018166017091831374, NULL };
static frost$core$String $s1396 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 22, 6468124764262308515, NULL };
static frost$core$String $s1397 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x54\x6f\x6b\x65\x6e\x3e\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x54\x6f\x6b\x65\x6e", 164, -7806548110667226760, NULL };
static frost$core$String $s1516 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 22, 6468124764262308515, NULL };
static frost$core$String $s1517 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x54\x6f\x6b\x65\x6e\x3e\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x54\x6f\x6b\x65\x6e", 164, -7806548110667226760, NULL };
static frost$core$String $s1618 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x3f\x6d\x29\x24\x28\x5c\x73\x2a\x29\x5c\x2e\x5c\x2e\x5c\x2e\x28\x5c\x73\x2a\x29\x5e", 22, -248689979902601246, NULL };
static frost$core$String $s1629 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x24\x31\x2d\x2a\x23\x2e\x2e\x2e\x23\x2a\x2d\x24\x32", 13, -9212652225966281814, NULL };
static frost$core$String $s1634 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x2a\x23\x2e\x2e\x2e\x23\x2a\x2d", 9, 4555640629949038113, NULL };
static frost$core$String $s1635 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x65\x6c\x6c\x69\x70\x73\x69\x73\x22\x3e\x2e\x2e\x2e\x3c\x2f\x73\x70\x61\x6e\x3e", 33, -453769903465079796, NULL };
static frost$core$String $s1648 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x28\x5b\x20\x5d\x7b\x30\x2c", 8, -3741150137448884478, NULL };
static frost$core$String $s1650 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7d\x28\x28\x3f\x3a\x5b\x2d\x2b\x2a\x5d\x7c\x5c\x64\x2b\x5b\x2e\x5d\x29\x29\x5b\x20\x5d\x2b\x29\x28\x3f\x73\x3a\x2e\x2b\x3f\x29\x28\x5c\x7a\x7c\x5c\x6e\x7b\x32\x2c\x7d", 42, 137202100460744211, NULL };
static frost$core$String $s1652 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x3f\x3d\x5c\x53\x29\x28\x3f\x21\x5b\x20\x5d\x2a\x28\x3f\x3a\x5b\x2d\x2b\x2a\x5d\x7c\x5c\x64\x2b\x5b\x2e\x5d\x29\x5b\x20\x5d\x2b\x29\x29\x29", 36, 8134773430561440898, NULL };
static frost$core$String $s1665 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x3f\x6d\x29\x5e", 5, -439449056924796284, NULL };
static frost$core$String $s1667 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s1681 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x3f\x6d\x29\x28\x3f\x3a\x28\x3f\x3c\x3d\x5c\x6e\x5c\x6e\x29\x7c\x5c\x41\x5c\x6e\x3f\x29", 23, 1848678979582438429, NULL };
static frost$core$String $s1702 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5c\x6e\x7b\x32\x2c\x7d\x5c\x7a", 8, -541266234631704725, NULL };
static frost$core$String $s1705 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s1709 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x5c\x6e\x29\x3f\x5e\x28\x5b\x20\x5c\x74\x5d\x2a\x29\x28\x5b\x2d\x2b\x2a\x5d\x7c\x5c\x64\x2b\x5b\x2e\x5d\x29\x5b\x20\x5d\x2b", 32, 654627259653007759, NULL };
static frost$core$String $s1710 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x28\x3f\x73\x3a\x2e\x2b\x3f\x29\x28\x5c\x6e\x7b\x31\x2c\x32\x7d\x29\x29", 19, 9093550410993434533, NULL };
static frost$core$String $s1712 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x3f\x3d\x5c\x6e\x2a\x28\x5c\x7a\x7c\x5c\x32\x28\x5b\x2d\x2b\x5c\x2a\x5d\x7c\x5c\x64\x2b\x5b\x2e\x5d\x29\x5b\x20\x5c\x74\x5d\x2b\x29\x29", 35, -2262235355244044178, NULL };
static frost$core$String $s1739 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a\x0a", 2, 600243221914207573, NULL };
static frost$core$String $s1744 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s1747 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x3f\x6d\x29\x5e\x28\x2e\x2a\x29\x5c\x6e\x3d\x3d\x3d\x3d\x2b\x24", 17, -6883718133434480482, NULL };
static frost$core$String $s1756 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x3f\x6d\x29\x5e\x28\x2e\x2a\x29\x5c\x6e\x2d\x2d\x2d\x2d\x2b\x24", 17, 7770988057466060478, NULL };
static frost$core$String $s1766 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5e\x28\x23\x7b\x31\x2c\x36\x7d\x29\x5c\x73\x2a\x28\x2e\x2a\x3f\x29\x5c\x73\x2a\x5c\x31\x3f\x24", 24, 16014950917847968, NULL };
static frost$core$String $s1796 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x7b\x32\x2c\x7d\x5c\x6e", 7, -5658908687078335657, NULL };
static frost$core$String $s1807 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x3c\x62\x72\x20\x2f\x3e\x0a", 8, -2897744956745334060, NULL };
static frost$core$String $s1816 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s1817 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s1825 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x3f\x3a\x3c\x5b\x61\x2d\x7a\x2f\x21\x24\x5d\x28\x3f\x3a\x5b\x5e\x3c\x3e\x5d\x7c", 21, -2230095140111063139, NULL };
static frost$core$String $s1827 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29\x2a\x3e\x29", 4, -1177431067148667313, NULL };
static frost$core$String $s1835 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x3f\x73\x3a\x3c\x21\x28\x2d\x2d\x2e\x2a\x3f\x2d\x2d\x5c\x73\x2a\x29\x2b\x3e\x29\x7c", 22, -1727262038654951337, NULL };
static frost$core$String $s1836 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x3f\x73\x3a\x3c\x5c\x3f\x2e\x2a\x3f\x5c\x3f\x3e\x29", 14, 6214673560103078479, NULL };
static frost$core$String $s1838 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7c", 1, -5808533783409717189, NULL };
static frost$core$String $s1956 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5c", 1, -5808498599037614437, NULL };
static frost$core$String $s1958 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5c\x5c", 2, 671084756105839653, NULL };
static frost$core$String $s1966 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x60", 1, -5808555773642281409, NULL };
static frost$core$String $s1968 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x60", 1, -5808555773642281409, NULL };
static frost$core$String $s1976 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2a", 1, -5808615147270204803, NULL };
static frost$core$String $s1978 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5c\x2a", 2, 671060566850019011, NULL };
static frost$core$String $s1986 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5f", 1, -5808497499525986226, NULL };
static frost$core$String $s1988 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5f", 1, -5808497499525986226, NULL };
static frost$core$String $s2008 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x21\x5c\x5c\x5b\x28\x2e\x2a\x29\x5c\x5c\x5d\x5c\x5c\x28\x28\x2e\x2a\x29\x20\x5c\x22\x28\x2e\x2a\x29\x5c\x22\x5c\x5c\x29", 30, 6493917754048131162, NULL };
static frost$core$String $s2019 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x69\x6d\x67\x20\x73\x72\x63\x3d\x22\x24\x32\x22\x20\x61\x6c\x74\x3d\x22\x24\x31\x22\x20\x74\x69\x74\x6c\x65\x3d\x22\x24\x33\x22\x20\x2f\x3e", 36, 4038931684154322219, NULL };
static frost$core$String $s2023 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x21\x5c\x5c\x5b\x28\x2e\x2a\x29\x5c\x5c\x5d\x5c\x5c\x28\x28\x2e\x2a\x29\x5c\x5c\x29", 21, 765547484578233383, NULL };
static frost$core$String $s2034 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x69\x6d\x67\x20\x73\x72\x63\x3d\x22\x24\x32\x22\x20\x61\x6c\x74\x3d\x22\x24\x31\x22\x20\x2f\x3e", 25, -2070577711995753147, NULL };
static frost$core$String $s2039 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x5b\x21\x5d\x5c\x5b\x28\x2e\x2a\x3f\x29\x5c\x5d", 13, 8561428590693777046, NULL };
static frost$core$String $s2040 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5b\x20\x5d\x3f\x28\x3f\x3a\x5c\x6e\x5b\x20\x5d\x2a\x29\x3f", 15, -4228281741099089751, NULL };
static frost$core$String $s2042 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5c\x5b\x28\x2e\x2a\x3f\x29\x5c\x5d", 9, -5820255714607045073, NULL };
static frost$core$String $s2044 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s2057 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x5c\x5b\x28\x2e\x2a\x3f\x29\x5c\x5d", 10, -5340773744844878283, NULL };
static frost$core$String $s2058 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5b\x20\x5d\x3f\x28\x3f\x3a\x5c\x6e\x5b\x20\x5d\x2a\x29\x3f", 15, -4228281741099089751, NULL };
static frost$core$String $s2060 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5c\x5b\x28\x2e\x2a\x3f\x29\x5c\x5d", 9, -5820255714607045073, NULL };
static frost$core$String $s2062 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s2074 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x5c\x5b\x28\x2e\x2a\x3f\x29\x5c\x5d", 10, -5340773744844878283, NULL };
static frost$core$String $s2075 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5c\x28", 2, 671062765873275433, NULL };
static frost$core$String $s2077 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5b\x20\x5c\x74\x5d\x2a", 6, -2765009834817178127, NULL };
static frost$core$String $s2079 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x3f\x28\x2e\x2a\x3f\x29\x3e\x3f", 9, -2141900438656434377, NULL };
static frost$core$String $s2081 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5b\x20\x5c\x74\x5d\x2a", 6, -2765009834817178127, NULL };
static frost$core$String $s2083 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28", 1, -5808617346293461225, NULL };
static frost$core$String $s2085 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x5b\x27\x22\x5d\x29", 6, 5815611588259600167, NULL };
static frost$core$String $s2087 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x2e\x2a\x3f\x29", 5, -5551797076377908473, NULL };
static frost$core$String $s2089 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5c\x35", 2, 671057268315134378, NULL };
static frost$core$String $s2091 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29\x3f", 2, 566759794306920865, NULL };
static frost$core$String $s2093 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5c\x29", 2, 671061666361647222, NULL };
static frost$core$String $s2095 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s2108 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x5c\x5b", 3, 727888895142067038, NULL };
static frost$core$String $s2109 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x5b\x5e\x5c\x5b\x5c\x5d\x5d\x2b\x29", 10, 2820061196371221627, NULL };
static frost$core$String $s2111 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5c\x5d", 2, 671083656594211442, NULL };
static frost$core$String $s2113 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s2128 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x5c\x2a\x5c\x5c\x2a\x7c\x5f\x5f\x29\x28\x3f\x3d\x5c\x53\x29\x28\x2e\x2b\x3f\x5b\x2a\x5f\x5d\x2a\x29\x28\x3f\x3c\x3d\x5c\x53\x29\x5c\x31", 35, -3636589227861870419, NULL };
static frost$core$String $s2139 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x73\x74\x72\x6f\x6e\x67\x3e\x24\x32\x3c\x2f\x73\x74\x72\x6f\x6e\x67\x3e", 19, 980505209609811292, NULL };
static frost$core$String $s2143 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x5c\x2a\x7c\x5f\x29\x28\x3f\x3d\x5c\x53\x29\x28\x2e\x2b\x3f\x29\x28\x3f\x3c\x3d\x5c\x53\x29\x5c\x31", 26, 9006340171609119475, NULL };
static frost$core$String $s2154 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x65\x6d\x3e\x24\x32\x3c\x2f\x65\x6d\x3e", 11, -8498297401027505814, NULL };
static frost$core$String $s2158 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x26\x28\x3f\x21\x23\x3f\x5b\x78\x58\x5d\x3f\x28\x3f\x3a\x5b\x30\x2d\x39\x61\x2d\x66\x41\x2d\x46\x5d\x2b\x7c\x5c\x77\x2b\x29\x3b\x29", 33, -1680408519398193257, NULL };
static frost$core$String $s2169 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x26\x61\x6d\x70\x3b", 5, 4071416011722950258, NULL };
static frost$core$String $s2173 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x28\x3f\x21\x5b\x61\x2d\x7a\x41\x2d\x5a\x2f\x3f\x5c\x24\x21\x5d\x29", 18, -2067299480089594827, NULL };
static frost$core$String $s2184 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x26\x6c\x74\x3b", 4, 3062186500626132942, NULL };
static frost$core$String $s2188 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x3f\x3c\x21\x5c\x5c\x29\x28\x60\x2b\x29\x28\x2e\x2b\x3f\x29\x28\x3f\x3c\x21\x60\x29\x5c\x31\x28\x3f\x21\x60\x29", 29, 4191340564316553542, NULL };

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
frost$core$Int64 $tmp28 = (frost$core$Int64) {0u};
frost$core$Int64* $tmp29 = &param0->listLevel;
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
frost$core$Int64 $tmp221 = (frost$core$Int64) {1u};
frost$core$RegularExpression$init$frost$core$String$frost$core$Int64($tmp211, $tmp219, $tmp221);
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
frost$core$Int64 local4;
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
frost$core$Int64 $tmp358 = (frost$core$Int64) {4u};
frost$core$Int64 $tmp359 = (frost$core$Int64) {1u};
int64_t $tmp360 = $tmp358.value;
int64_t $tmp361 = $tmp359.value;
int64_t $tmp362 = $tmp360 - $tmp361;
frost$core$Int64 $tmp363 = (frost$core$Int64) {$tmp362};
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
frost$core$Int64 $tmp380 = (frost$core$Int64) {1u};
frost$core$Int64 $tmp381 = (frost$core$Int64) {2u};
// begin inline call to function frost.core.Int64.||(other:frost.core.Int64):frost.core.Int64 from Markdown.frost:275:45
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:185
int64_t $tmp382 = $tmp380.value;
int64_t $tmp383 = $tmp381.value;
int64_t $tmp384 = $tmp382 | $tmp383;
frost$core$Int64 $tmp385 = (frost$core$Int64) {$tmp384};
frost$core$RegularExpression$init$frost$core$String$frost$core$Int64($tmp364, $tmp378, $tmp385);
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
frost$core$Int64 $tmp415 = (frost$core$Int64) {1u};
frost$core$Int64 $tmp416 = (frost$core$Int64) {2u};
// begin inline call to function frost.core.Int64.||(other:frost.core.Int64):frost.core.Int64 from Markdown.frost:292:45
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:185
int64_t $tmp417 = $tmp415.value;
int64_t $tmp418 = $tmp416.value;
int64_t $tmp419 = $tmp417 | $tmp418;
frost$core$Int64 $tmp420 = (frost$core$Int64) {$tmp419};
frost$core$RegularExpression$init$frost$core$String$frost$core$Int64($tmp397, $tmp413, $tmp420);
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
frost$core$Int64 $tmp436 = *(&local4);
frost$core$Int64$wrapper* $tmp437;
$tmp437 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
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
frost$core$Int64 $tmp456 = (frost$core$Int64) {2u};
frost$core$RegularExpression$init$frost$core$String$frost$core$Int64($tmp424, $tmp454, $tmp456);
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
frost$core$Int64 $tmp472 = *(&local4);
frost$core$Int64$wrapper* $tmp473;
$tmp473 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
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
frost$core$Int64 local3;
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
// begin inline call to function frost.core.MutableString.get_byteLength():frost.core.Int64 from Markdown.frost:336:18
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:173
frost$core$Int64* $tmp538 = &param1->_length;
frost$core$Int64 $tmp539 = *$tmp538;
frost$core$Int64 $tmp540 = (frost$core$Int64) {0u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Markdown.frost:336:30
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
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
frost$collections$Array* $tmp555 = frost$core$String$split$frost$core$RegularExpression$frost$core$Int64$R$frost$collections$Array$LTfrost$core$String$GT($tmp551, $tmp552, $tmp554);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp555));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp555));
frost$collections$Array$init$frost$collections$CollectionView$LTfrost$collections$Array$T$GT($tmp548, ((frost$collections$CollectionView*) $tmp555));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp548));
frost$collections$Array* $tmp556 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp556));
*(&local2) = $tmp548;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp555));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp552));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp551));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp548));
goto block12;
block12:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:341
frost$core$Int64 $tmp557 = (frost$core$Int64) {0u};
frost$collections$Array* $tmp558 = *(&local2);
ITable* $tmp559 = ((frost$collections$CollectionView*) $tmp558)->$class->itable;
while ($tmp559->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp559 = $tmp559->next;
}
$fn561 $tmp560 = $tmp559->methods[0];
frost$core$Int64 $tmp562 = $tmp560(((frost$collections$CollectionView*) $tmp558));
frost$core$Bit $tmp563 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int64$GT $tmp564 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp557, $tmp562, $tmp563);
frost$core$Int64 $tmp565 = $tmp564.min;
*(&local3) = $tmp565;
frost$core$Int64 $tmp566 = $tmp564.max;
frost$core$Bit $tmp567 = $tmp564.inclusive;
bool $tmp568 = $tmp567.value;
frost$core$Int64 $tmp569 = (frost$core$Int64) {1u};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:555
int64_t $tmp570 = $tmp569.value;
frost$core$UInt64 $tmp571 = (frost$core$UInt64) {((uint64_t) $tmp570)};
if ($tmp568) goto block21; else goto block22;
block21:;
int64_t $tmp572 = $tmp565.value;
int64_t $tmp573 = $tmp566.value;
bool $tmp574 = $tmp572 <= $tmp573;
frost$core$Bit $tmp575 = (frost$core$Bit) {$tmp574};
bool $tmp576 = $tmp575.value;
if ($tmp576) goto block18; else goto block19;
block22:;
int64_t $tmp577 = $tmp565.value;
int64_t $tmp578 = $tmp566.value;
bool $tmp579 = $tmp577 < $tmp578;
frost$core$Bit $tmp580 = (frost$core$Bit) {$tmp579};
bool $tmp581 = $tmp580.value;
if ($tmp581) goto block18; else goto block19;
block18:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:342
frost$collections$Array* $tmp582 = *(&local2);
frost$core$Int64 $tmp583 = *(&local3);
// begin inline call to function frost.collections.Array.[](index:frost.core.Int64):frost.collections.Array.T from Markdown.frost:342:40
frost$core$Int64 $tmp584 = (frost$core$Int64) {0u};
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
frost$core$Int64 $tmp593 = $tmp591(((frost$collections$CollectionView*) $tmp582));
int64_t $tmp594 = $tmp583.value;
int64_t $tmp595 = $tmp593.value;
bool $tmp596 = $tmp594 < $tmp595;
frost$core$Bit $tmp597 = (frost$core$Bit) {$tmp596};
bool $tmp598 = $tmp597.value;
if ($tmp598) goto block24; else goto block25;
block25:;
frost$core$Int64 $tmp599 = (frost$core$Int64) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s600, $tmp599, &$s601);
abort(); // unreachable
block24:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp602 = &$tmp582->data;
frost$core$Object** $tmp603 = *$tmp602;
int64_t $tmp604 = $tmp583.value;
frost$core$Object* $tmp605 = $tmp603[$tmp604];
frost$core$Frost$ref$frost$core$Object$Q($tmp605);
*(&local4) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) $tmp605)));
frost$core$String* $tmp606 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp606));
*(&local4) = ((frost$core$String*) $tmp605);
frost$core$Frost$unref$frost$core$Object$Q($tmp605);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:343
org$frostlang$frostc$frostdoc$Protector** $tmp607 = &param0->htmlProtector;
org$frostlang$frostc$frostdoc$Protector* $tmp608 = *$tmp607;
frost$core$String* $tmp609 = *(&local4);
$fn611 $tmp610 = ($fn611) $tmp608->$class->vtable[3];
frost$core$String* $tmp612 = $tmp610($tmp608, $tmp609);
*(&local5) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp612));
frost$core$String* $tmp613 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp613));
*(&local5) = $tmp612;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp612));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:344
frost$core$String* $tmp614 = *(&local5);
frost$core$Bit $tmp615 = (frost$core$Bit) {$tmp614 != NULL};
bool $tmp616 = $tmp615.value;
if ($tmp616) goto block27; else goto block29;
block27:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:345
frost$collections$Array* $tmp617 = *(&local2);
frost$core$Int64 $tmp618 = *(&local3);
frost$core$String* $tmp619 = *(&local5);
// begin inline call to method frost.collections.Array.[]:=(index:frost.core.Int64, value:frost.collections.Array.T) from Markdown.frost:345:27
frost$core$Int64 $tmp620 = (frost$core$Int64) {0u};
int64_t $tmp621 = $tmp618.value;
int64_t $tmp622 = $tmp620.value;
bool $tmp623 = $tmp621 >= $tmp622;
frost$core$Bit $tmp624 = (frost$core$Bit) {$tmp623};
bool $tmp625 = $tmp624.value;
if ($tmp625) goto block33; else goto block32;
block33:;
ITable* $tmp626 = ((frost$collections$CollectionView*) $tmp617)->$class->itable;
while ($tmp626->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp626 = $tmp626->next;
}
$fn628 $tmp627 = $tmp626->methods[0];
frost$core$Int64 $tmp629 = $tmp627(((frost$collections$CollectionView*) $tmp617));
int64_t $tmp630 = $tmp618.value;
int64_t $tmp631 = $tmp629.value;
bool $tmp632 = $tmp630 < $tmp631;
frost$core$Bit $tmp633 = (frost$core$Bit) {$tmp632};
bool $tmp634 = $tmp633.value;
if ($tmp634) goto block31; else goto block32;
block32:;
frost$core$Int64 $tmp635 = (frost$core$Int64) {79u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s636, $tmp635, &$s637);
abort(); // unreachable
block31:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/Array.frost:80
frost$core$Object*** $tmp638 = &$tmp617->data;
frost$core$Object** $tmp639 = *$tmp638;
int64_t $tmp640 = $tmp618.value;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp619));
frost$core$Object* $tmp641 = $tmp639[$tmp640];
frost$core$Frost$unref$frost$core$Object$Q($tmp641);
$tmp639[$tmp640] = ((frost$core$Object*) $tmp619);
goto block28;
block29:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:348
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp642 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$String* $tmp643 = *(&local4);
frost$core$MutableString$init$frost$core$String($tmp642, $tmp643);
*(&local6) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp642));
frost$core$MutableString* $tmp644 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp644));
*(&local6) = $tmp642;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp642));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:349
frost$core$MutableString* $tmp645 = *(&local6);
$fn647 $tmp646 = ($fn647) param0->$class->vtable[22];
$tmp646(param0, $tmp645);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:350
frost$collections$Array* $tmp648 = *(&local2);
frost$core$Int64 $tmp649 = *(&local3);
frost$core$MutableString* $tmp650 = *(&local6);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Markdown.frost:350:34
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:560
$fn652 $tmp651 = ($fn652) ((frost$core$Object*) $tmp650)->$class->vtable[0];
frost$core$String* $tmp653 = $tmp651(((frost$core$Object*) $tmp650));
frost$core$String* $tmp654 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s655, $tmp653);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp654));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp654));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp653));
frost$core$String* $tmp656 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp654, &$s657);
// begin inline call to method frost.collections.Array.[]:=(index:frost.core.Int64, value:frost.collections.Array.T) from Markdown.frost:350:27
frost$core$Int64 $tmp658 = (frost$core$Int64) {0u};
int64_t $tmp659 = $tmp649.value;
int64_t $tmp660 = $tmp658.value;
bool $tmp661 = $tmp659 >= $tmp660;
frost$core$Bit $tmp662 = (frost$core$Bit) {$tmp661};
bool $tmp663 = $tmp662.value;
if ($tmp663) goto block38; else goto block37;
block38:;
ITable* $tmp664 = ((frost$collections$CollectionView*) $tmp648)->$class->itable;
while ($tmp664->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp664 = $tmp664->next;
}
$fn666 $tmp665 = $tmp664->methods[0];
frost$core$Int64 $tmp667 = $tmp665(((frost$collections$CollectionView*) $tmp648));
int64_t $tmp668 = $tmp649.value;
int64_t $tmp669 = $tmp667.value;
bool $tmp670 = $tmp668 < $tmp669;
frost$core$Bit $tmp671 = (frost$core$Bit) {$tmp670};
bool $tmp672 = $tmp671.value;
if ($tmp672) goto block36; else goto block37;
block37:;
frost$core$Int64 $tmp673 = (frost$core$Int64) {79u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s674, $tmp673, &$s675);
abort(); // unreachable
block36:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/Array.frost:80
frost$core$Object*** $tmp676 = &$tmp648->data;
frost$core$Object** $tmp677 = *$tmp676;
int64_t $tmp678 = $tmp649.value;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp656));
frost$core$Object* $tmp679 = $tmp677[$tmp678];
frost$core$Frost$unref$frost$core$Object$Q($tmp679);
$tmp677[$tmp678] = ((frost$core$Object*) $tmp656);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp656));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp654));
frost$core$MutableString* $tmp680 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp680));
*(&local6) = ((frost$core$MutableString*) NULL);
goto block28;
block28:;
frost$core$String* $tmp681 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp681));
*(&local5) = ((frost$core$String*) NULL);
frost$core$String* $tmp682 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp682));
*(&local4) = ((frost$core$String*) NULL);
frost$core$Int64 $tmp683 = *(&local3);
int64_t $tmp684 = $tmp566.value;
int64_t $tmp685 = $tmp683.value;
int64_t $tmp686 = $tmp684 - $tmp685;
frost$core$Int64 $tmp687 = (frost$core$Int64) {$tmp686};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:555
int64_t $tmp688 = $tmp687.value;
frost$core$UInt64 $tmp689 = (frost$core$UInt64) {((uint64_t) $tmp688)};
if ($tmp568) goto block41; else goto block42;
block41:;
uint64_t $tmp690 = $tmp689.value;
uint64_t $tmp691 = $tmp571.value;
bool $tmp692 = $tmp690 >= $tmp691;
frost$core$Bit $tmp693 = (frost$core$Bit) {$tmp692};
bool $tmp694 = $tmp693.value;
if ($tmp694) goto block39; else goto block19;
block42:;
uint64_t $tmp695 = $tmp689.value;
uint64_t $tmp696 = $tmp571.value;
bool $tmp697 = $tmp695 > $tmp696;
frost$core$Bit $tmp698 = (frost$core$Bit) {$tmp697};
bool $tmp699 = $tmp698.value;
if ($tmp699) goto block39; else goto block19;
block39:;
int64_t $tmp700 = $tmp683.value;
int64_t $tmp701 = $tmp569.value;
int64_t $tmp702 = $tmp700 + $tmp701;
frost$core$Int64 $tmp703 = (frost$core$Int64) {$tmp702};
*(&local3) = $tmp703;
goto block18;
block19:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:353
frost$core$Bit $tmp704 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$MutableString$Index$Q$GT $tmp705 = frost$core$Range$LTfrost$core$MutableString$Index$Q$GT$init$frost$core$MutableString$Index$Q$frost$core$MutableString$Index$Q$frost$core$Bit(((frost$core$MutableString$Index$nullable) { .nonnull = false }), ((frost$core$MutableString$Index$nullable) { .nonnull = false }), $tmp704);
frost$collections$Array* $tmp706 = *(&local2);
ITable* $tmp707 = ((frost$collections$CollectionView*) $tmp706)->$class->itable;
while ($tmp707->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp707 = $tmp707->next;
}
$fn709 $tmp708 = $tmp707->methods[2];
frost$core$String* $tmp710 = $tmp708(((frost$collections$CollectionView*) $tmp706), &$s711);
frost$core$MutableString$$IDXEQ$frost$core$Range$LTfrost$core$MutableString$Index$Q$GT$frost$core$String(param1, $tmp705, $tmp710);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp710));
frost$collections$Array* $tmp712 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp712));
*(&local2) = ((frost$collections$Array*) NULL);
return;

}
void org$frostlang$frostc$frostdoc$Markdown$doAutoLinks$frost$core$MutableString(org$frostlang$frostc$frostdoc$Markdown* param0, frost$core$MutableString* param1) {

frost$core$Matcher* local0 = NULL;
frost$core$RegularExpression* local1 = NULL;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:357
FROST_ASSERT(24 == sizeof(frost$core$RegularExpression));
frost$core$RegularExpression* $tmp713 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp713, &$s714);
// begin inline call to method frost.core.MutableString.replace(search:frost.core.RegularExpression, replacement:frost.core.String) from Markdown.frost:357:23
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:401
frost$core$Bit $tmp715 = (frost$core$Bit) {true};
// begin inline call to method frost.core.MutableString.replace(search:frost.core.RegularExpression, replacement:frost.core.String, allowGroupReferences:frost.core.Bit) from MutableString.frost:401:16
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:406
$fn717 $tmp716 = ($fn717) ((frost$core$Object*) param1)->$class->vtable[0];
frost$core$String* $tmp718 = $tmp716(((frost$core$Object*) param1));
frost$core$Matcher* $tmp719 = frost$core$RegularExpression$matcher$frost$core$String$R$frost$core$Matcher($tmp713, $tmp718);
*(&local0) = ((frost$core$Matcher*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp719));
frost$core$Matcher* $tmp720 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp720));
*(&local0) = $tmp719;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp719));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp718));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:407
frost$core$MutableString$clear(param1);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:408
goto block3;
block3:;
frost$core$Matcher* $tmp721 = *(&local0);
frost$core$Bit $tmp722 = frost$core$Matcher$find$R$frost$core$Bit($tmp721);
bool $tmp723 = $tmp722.value;
if ($tmp723) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:409
frost$core$Matcher* $tmp724 = *(&local0);
frost$core$Matcher$appendReplacement$frost$core$MutableString$frost$core$String$frost$core$Bit($tmp724, param1, &$s725, $tmp715);
goto block3;
block5:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:411
frost$core$Matcher* $tmp726 = *(&local0);
frost$core$Matcher$appendTail$frost$core$MutableString($tmp726, param1);
frost$core$Matcher* $tmp727 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp727));
*(&local0) = ((frost$core$Matcher*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp713));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:358
FROST_ASSERT(24 == sizeof(frost$core$RegularExpression));
frost$core$RegularExpression* $tmp728 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp728, &$s729);
*(&local1) = ((frost$core$RegularExpression*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp728));
frost$core$RegularExpression* $tmp730 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp730));
*(&local1) = $tmp728;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp728));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:359
frost$core$RegularExpression* $tmp731 = *(&local1);
FROST_ASSERT(24 == sizeof(org$frostlang$frostc$frostdoc$Markdown$_Closure6));
org$frostlang$frostc$frostdoc$Markdown$_Closure6* $tmp732 = (org$frostlang$frostc$frostdoc$Markdown$_Closure6*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$frostdoc$Markdown$_Closure6$class);
org$frostlang$frostc$frostdoc$Markdown$_Closure6$init$org$frostlang$frostc$frostdoc$Markdown($tmp732, param0);
FROST_ASSERT(32 == sizeof(frost$core$MutableMethod));
frost$core$MutableMethod* $tmp734 = (frost$core$MutableMethod*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$MutableMethod$class);
// begin inline call to frost.core.MutableMethod.init(pointer:frost.unsafe.Pointer<frost.core.Int8>, target:frost.core.Object?) from Markdown.frost:359:31
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableMethod.frost:32
frost$core$Int8** $tmp735 = &$tmp734->pointer;
*$tmp735 = ((frost$core$Int8*) org$frostlang$frostc$frostdoc$Markdown$_Closure6$$anonymous5$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$String);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableMethod.frost:33
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp732));
frost$core$Object** $tmp736 = &$tmp734->target;
frost$core$Object* $tmp737 = *$tmp736;
frost$core$Frost$unref$frost$core$Object$Q($tmp737);
frost$core$Object** $tmp738 = &$tmp734->target;
*$tmp738 = ((frost$core$Object*) $tmp732);
frost$core$MutableString$replace$frost$core$RegularExpression$$LPfrost$collections$ListView$LTfrost$core$String$Q$GT$RP$EQ$GT$LPfrost$core$Object$RP(param1, $tmp731, $tmp734);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp734));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp732));
frost$core$RegularExpression* $tmp739 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp739));
*(&local1) = ((frost$core$RegularExpression*) NULL);
return;

}
void org$frostlang$frostc$frostdoc$Markdown$unescapeSpecialChars$frost$core$MutableString(org$frostlang$frostc$frostdoc$Markdown* param0, frost$core$MutableString* param1) {

frost$core$String* local0 = NULL;
frost$core$String* local1 = NULL;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:370
org$frostlang$frostc$frostdoc$Protector** $tmp740 = &param0->charProtector;
org$frostlang$frostc$frostdoc$Protector* $tmp741 = *$tmp740;
frost$collections$HashMap** $tmp742 = &$tmp741->decodeMap;
frost$collections$HashMap* $tmp743 = *$tmp742;
ITable* $tmp744 = ((frost$collections$MapView*) $tmp743)->$class->itable;
while ($tmp744->$class != (frost$core$Class*) &frost$collections$MapView$class) {
    $tmp744 = $tmp744->next;
}
$fn746 $tmp745 = $tmp744->methods[4];
frost$collections$Iterator* $tmp747 = $tmp745(((frost$collections$MapView*) $tmp743));
goto block1;
block1:;
ITable* $tmp748 = $tmp747->$class->itable;
while ($tmp748->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp748 = $tmp748->next;
}
$fn750 $tmp749 = $tmp748->methods[0];
frost$core$Bit $tmp751 = $tmp749($tmp747);
bool $tmp752 = $tmp751.value;
if ($tmp752) goto block3; else goto block2;
block2:;
*(&local0) = ((frost$core$String*) NULL);
ITable* $tmp753 = $tmp747->$class->itable;
while ($tmp753->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp753 = $tmp753->next;
}
$fn755 $tmp754 = $tmp753->methods[1];
frost$core$Object* $tmp756 = $tmp754($tmp747);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) $tmp756)));
frost$core$String* $tmp757 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp757));
*(&local0) = ((frost$core$String*) $tmp756);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:371
org$frostlang$frostc$frostdoc$Protector** $tmp758 = &param0->charProtector;
org$frostlang$frostc$frostdoc$Protector* $tmp759 = *$tmp758;
frost$core$String* $tmp760 = *(&local0);
$fn762 $tmp761 = ($fn762) $tmp759->$class->vtable[3];
frost$core$String* $tmp763 = $tmp761($tmp759, $tmp760);
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp763));
frost$core$String* $tmp764 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp764));
*(&local1) = $tmp763;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp763));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:372
frost$core$String* $tmp765 = *(&local0);
frost$core$String* $tmp766 = *(&local1);
frost$core$MutableString$replace$frost$core$String$frost$core$String(param1, $tmp765, $tmp766);
frost$core$String* $tmp767 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp767));
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp756);
frost$core$String* $tmp768 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp768));
*(&local0) = ((frost$core$String*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp747));
return;

}
frost$core$String* org$frostlang$frostc$frostdoc$Markdown$encodeEmail$frost$core$String$R$frost$core$String(org$frostlang$frostc$frostdoc$Markdown* param0, frost$core$String* param1) {

frost$core$MutableString* local0 = NULL;
frost$core$Char32 local1;
frost$core$Real64 local2;
frost$core$Int32 local3;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:377
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp769 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp769);
*(&local0) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp769));
frost$core$MutableString* $tmp770 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp770));
*(&local0) = $tmp769;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp769));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:378
ITable* $tmp771 = ((frost$collections$Iterable*) param1)->$class->itable;
while ($tmp771->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp771 = $tmp771->next;
}
$fn773 $tmp772 = $tmp771->methods[0];
frost$collections$Iterator* $tmp774 = $tmp772(((frost$collections$Iterable*) param1));
goto block1;
block1:;
ITable* $tmp775 = $tmp774->$class->itable;
while ($tmp775->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp775 = $tmp775->next;
}
$fn777 $tmp776 = $tmp775->methods[0];
frost$core$Bit $tmp778 = $tmp776($tmp774);
bool $tmp779 = $tmp778.value;
if ($tmp779) goto block3; else goto block2;
block2:;
ITable* $tmp780 = $tmp774->$class->itable;
while ($tmp780->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp780 = $tmp780->next;
}
$fn782 $tmp781 = $tmp780->methods[1];
frost$core$Object* $tmp783 = $tmp781($tmp774);
*(&local1) = ((frost$core$Char32$wrapper*) $tmp783)->value;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:380
frost$math$Random** $tmp784 = &param0->random;
frost$math$Random* $tmp785 = *$tmp784;
ITable* $tmp786 = $tmp785->$class->itable;
while ($tmp786->$class != (frost$core$Class*) &frost$math$Random$class) {
    $tmp786 = $tmp786->next;
}
$fn788 $tmp787 = $tmp786->methods[5];
frost$core$Real64 $tmp789 = $tmp787($tmp785);
*(&local2) = $tmp789;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:381
frost$core$Real64 $tmp790 = *(&local2);
frost$core$Real64 $tmp791 = (frost$core$Real64) {0.45};
double $tmp792 = $tmp790.value;
double $tmp793 = $tmp791.value;
bool $tmp794 = $tmp792 < $tmp793;
frost$core$Bit $tmp795 = (frost$core$Bit) {$tmp794};
bool $tmp796 = $tmp795.value;
if ($tmp796) goto block4; else goto block6;
block4:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:382
frost$core$MutableString* $tmp797 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp797, &$s798);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:383
frost$core$MutableString* $tmp799 = *(&local0);
frost$core$Char32 $tmp800 = *(&local1);
// begin inline call to function frost.core.Char32.get_asInt32():frost.core.Int32 from Markdown.frost:383:33
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Char32.frost:106
int32_t $tmp801 = $tmp800.value;
frost$core$Int32 $tmp802 = (frost$core$Int32) {$tmp801};
frost$core$Int32$wrapper* $tmp803;
$tmp803 = (frost$core$Int32$wrapper*) frostObjectAlloc(20, (frost$core$Class*) &frost$core$Int32$wrapperclass);
$tmp803->value = $tmp802;
// begin inline call to method frost.core.MutableString.append(o:frost.core.Object) from Markdown.frost:383:30
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:150
$fn805 $tmp804 = ($fn805) ((frost$core$Object*) $tmp803)->$class->vtable[0];
frost$core$String* $tmp806 = $tmp804(((frost$core$Object*) $tmp803));
frost$core$MutableString$append$frost$core$String($tmp799, $tmp806);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp806));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp803));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:384
frost$core$MutableString* $tmp807 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp807, &$s808);
goto block5;
block6:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:386
frost$core$Real64 $tmp809 = *(&local2);
frost$core$Real64 $tmp810 = (frost$core$Real64) {0.9};
double $tmp811 = $tmp809.value;
double $tmp812 = $tmp810.value;
bool $tmp813 = $tmp811 < $tmp812;
frost$core$Bit $tmp814 = (frost$core$Bit) {$tmp813};
bool $tmp815 = $tmp814.value;
if ($tmp815) goto block9; else goto block11;
block9:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:387
frost$core$MutableString* $tmp816 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp816, &$s817);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:388
frost$core$MutableString* $tmp818 = *(&local0);
frost$core$Char32 $tmp819 = *(&local1);
// begin inline call to function frost.core.Char32.get_asInt32():frost.core.Int32 from Markdown.frost:388:33
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Char32.frost:106
int32_t $tmp820 = $tmp819.value;
frost$core$Int32 $tmp821 = (frost$core$Int32) {$tmp820};
// begin inline call to function frost.core.Int32.format(fmt:frost.core.String):frost.core.String from Markdown.frost:388:48
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int32.frost:842
int32_t $tmp822 = $tmp821.value;
bool $tmp823 = $tmp822 < 0u;
frost$core$Bit $tmp824 = (frost$core$Bit) {$tmp823};
// begin inline call to function frost.core.Int32.get_abs():frost.core.Int32 from Int32.frost:842:40
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int32.frost:562
frost$core$Int32 $tmp825 = (frost$core$Int32) {0u};
int32_t $tmp826 = $tmp821.value;
int32_t $tmp827 = $tmp825.value;
bool $tmp828 = $tmp826 < $tmp827;
frost$core$Bit $tmp829 = (frost$core$Bit) {$tmp828};
bool $tmp830 = $tmp829.value;
if ($tmp830) goto block15; else goto block16;
block15:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int32.frost:563
frost$core$Int32 $tmp831 = frost$core$Int32$$SUB$R$frost$core$Int32($tmp821);
*(&local3) = $tmp831;
goto block14;
block16:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int32.frost:565
*(&local3) = $tmp821;
goto block14;
block14:;
frost$core$Int32 $tmp832 = *(&local3);
// begin inline call to function frost.core.Int32.get_asUInt64():frost.core.UInt64 from Int32.frost:842:43
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int32.frost:792
int32_t $tmp833 = $tmp832.value;
frost$core$UInt64 $tmp834 = (frost$core$UInt64) {((uint64_t) $tmp833)};
frost$core$UInt64 $tmp835 = (frost$core$UInt64) {4294967295u};
frost$core$String* $tmp836 = frost$core$Frost$format$frost$core$Bit$frost$core$UInt64$frost$core$UInt64$frost$core$String$R$frost$core$String($tmp824, $tmp834, $tmp835, &$s837);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp836));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp836));
frost$core$MutableString$append$frost$core$String($tmp818, $tmp836);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp836));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:389
frost$core$MutableString* $tmp838 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp838, &$s839);
goto block10;
block11:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:392
frost$core$MutableString* $tmp840 = *(&local0);
frost$core$Char32 $tmp841 = *(&local1);
frost$core$MutableString$append$frost$core$Char32($tmp840, $tmp841);
goto block10;
block10:;
goto block5;
block5:;
frost$core$Frost$unref$frost$core$Object$Q($tmp783);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp774));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:395
frost$core$MutableString* $tmp842 = *(&local0);
$fn844 $tmp843 = ($fn844) ((frost$core$Object*) $tmp842)->$class->vtable[0];
frost$core$String* $tmp845 = $tmp843(((frost$core$Object*) $tmp842));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp845));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp845));
frost$core$MutableString* $tmp846 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp846));
*(&local0) = ((frost$core$MutableString*) NULL);
return $tmp845;

}
void org$frostlang$frostc$frostdoc$Markdown$doBlockQuotes$frost$core$MutableString(org$frostlang$frostc$frostdoc$Markdown* param0, frost$core$MutableString* param1) {

frost$core$RegularExpression* local0 = NULL;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:399
FROST_ASSERT(24 == sizeof(frost$core$RegularExpression));
frost$core$RegularExpression* $tmp847 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$String* $tmp848 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s849, &$s850);
frost$core$String* $tmp851 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp848, &$s852);
frost$core$String* $tmp853 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp851, &$s854);
frost$core$String* $tmp855 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp853, &$s856);
frost$core$String* $tmp857 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp855, &$s858);
frost$core$String* $tmp859 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp857, &$s860);
frost$core$Int64 $tmp861 = (frost$core$Int64) {1u};
frost$core$RegularExpression$init$frost$core$String$frost$core$Int64($tmp847, $tmp859, $tmp861);
*(&local0) = ((frost$core$RegularExpression*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp847));
frost$core$RegularExpression* $tmp862 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp862));
*(&local0) = $tmp847;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp859));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp857));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp855));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp853));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp851));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp848));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp847));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:408
frost$core$RegularExpression* $tmp863 = *(&local0);
FROST_ASSERT(24 == sizeof(org$frostlang$frostc$frostdoc$Markdown$_Closure9));
org$frostlang$frostc$frostdoc$Markdown$_Closure9* $tmp864 = (org$frostlang$frostc$frostdoc$Markdown$_Closure9*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$frostdoc$Markdown$_Closure9$class);
org$frostlang$frostc$frostdoc$Markdown$_Closure9$init$org$frostlang$frostc$frostdoc$Markdown($tmp864, param0);
FROST_ASSERT(32 == sizeof(frost$core$MutableMethod));
frost$core$MutableMethod* $tmp866 = (frost$core$MutableMethod*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$MutableMethod$class);
// begin inline call to frost.core.MutableMethod.init(pointer:frost.unsafe.Pointer<frost.core.Int8>, target:frost.core.Object?) from Markdown.frost:408:27
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableMethod.frost:32
frost$core$Int8** $tmp867 = &$tmp866->pointer;
*$tmp867 = ((frost$core$Int8*) org$frostlang$frostc$frostdoc$Markdown$_Closure9$$anonymous7$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$Object);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableMethod.frost:33
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp864));
frost$core$Object** $tmp868 = &$tmp866->target;
frost$core$Object* $tmp869 = *$tmp868;
frost$core$Frost$unref$frost$core$Object$Q($tmp869);
frost$core$Object** $tmp870 = &$tmp866->target;
*$tmp870 = ((frost$core$Object*) $tmp864);
frost$core$MutableString$replace$frost$core$RegularExpression$$LPfrost$collections$ListView$LTfrost$core$String$Q$GT$RP$EQ$GT$LPfrost$core$Object$RP(param1, $tmp863, $tmp866);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp866));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp864));
frost$core$RegularExpression* $tmp871 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp871));
*(&local0) = ((frost$core$RegularExpression*) NULL);
return;

}
frost$core$String* org$frostlang$frostc$frostdoc$Markdown$$anonymous10$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$String(frost$collections$ListView* param0) {

frost$core$String* local0 = NULL;
frost$core$Int64 local1;
frost$core$MutableString* local2 = NULL;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:423
frost$core$Int64 $tmp872 = (frost$core$Int64) {1u};
ITable* $tmp873 = param0->$class->itable;
while ($tmp873->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp873 = $tmp873->next;
}
$fn875 $tmp874 = $tmp873->methods[0];
frost$core$Object* $tmp876 = $tmp874(param0, $tmp872);
*(&local0) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) $tmp876)));
frost$core$String* $tmp877 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp877));
*(&local0) = ((frost$core$String*) $tmp876);
frost$core$Frost$unref$frost$core$Object$Q($tmp876);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:424
frost$core$String* $tmp878 = *(&local0);
// begin inline call to function frost.core.String.get_length():frost.core.Int64 from Markdown.frost:424:35
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:485
ITable* $tmp879 = ((frost$collections$Iterable*) $tmp878)->$class->itable;
while ($tmp879->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp879 = $tmp879->next;
}
$fn881 $tmp880 = $tmp879->methods[0];
frost$collections$Iterator* $tmp882 = $tmp880(((frost$collections$Iterable*) $tmp878));
ITable* $tmp883 = $tmp882->$class->itable;
while ($tmp883->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp883 = $tmp883->next;
}
$fn885 $tmp884 = $tmp883->methods[2];
frost$core$Int64 $tmp886 = $tmp884($tmp882);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp882));
*(&local1) = $tmp886;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:425
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp887 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$String* $tmp888 = *(&local0);
frost$core$MutableString$init$frost$core$String($tmp887, $tmp888);
*(&local2) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp887));
frost$core$MutableString* $tmp889 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp889));
*(&local2) = $tmp887;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp887));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:426
goto block2;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:427
frost$core$MutableString* $tmp890 = *(&local2);
frost$core$MutableString$append$frost$core$String($tmp890, &$s891);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:428
frost$core$Int64 $tmp892 = *(&local1);
frost$core$Int64 $tmp893 = (frost$core$Int64) {1u};
int64_t $tmp894 = $tmp892.value;
int64_t $tmp895 = $tmp893.value;
int64_t $tmp896 = $tmp894 + $tmp895;
frost$core$Int64 $tmp897 = (frost$core$Int64) {$tmp896};
*(&local1) = $tmp897;
frost$core$Int64 $tmp898 = *(&local1);
frost$core$Int64 $tmp899 = (frost$core$Int64) {4u};
// begin inline call to function frost.core.Int64.%(other:frost.core.Int64):frost.core.Int64 from Markdown.frost:430:25
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:102
int64_t $tmp900 = $tmp898.value;
int64_t $tmp901 = $tmp899.value;
int64_t $tmp902 = $tmp900 % $tmp901;
frost$core$Int64 $tmp903 = (frost$core$Int64) {$tmp902};
frost$core$Int64 $tmp904 = (frost$core$Int64) {0u};
int64_t $tmp905 = $tmp903.value;
int64_t $tmp906 = $tmp904.value;
bool $tmp907 = $tmp905 != $tmp906;
frost$core$Bit $tmp908 = (frost$core$Bit) {$tmp907};
bool $tmp909 = $tmp908.value;
if ($tmp909) goto block2; else goto block4;
block4:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:431
frost$core$MutableString* $tmp910 = *(&local2);
$fn912 $tmp911 = ($fn912) ((frost$core$Object*) $tmp910)->$class->vtable[0];
frost$core$String* $tmp913 = $tmp911(((frost$core$Object*) $tmp910));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp913));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp913));
frost$core$MutableString* $tmp914 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp914));
*(&local2) = ((frost$core$MutableString*) NULL);
frost$core$String* $tmp915 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp915));
*(&local0) = ((frost$core$String*) NULL);
return $tmp913;

}
void org$frostlang$frostc$frostdoc$Markdown$detabify$frost$core$MutableString(org$frostlang$frostc$frostdoc$Markdown* param0, frost$core$MutableString* param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:422
FROST_ASSERT(24 == sizeof(frost$core$RegularExpression));
frost$core$RegularExpression* $tmp916 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp916, &$s917);
FROST_ASSERT(32 == sizeof(frost$core$Method));
frost$core$Method* $tmp919 = (frost$core$Method*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$Method$class);
// begin inline call to frost.core.Method.init(pointer:frost.unsafe.Pointer<frost.core.Int8>, target:frost.core.Immutable?) from Markdown.frost:422:34
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Method.frost:37
frost$core$Int8** $tmp920 = &$tmp919->pointer;
*$tmp920 = ((frost$core$Int8*) org$frostlang$frostc$frostdoc$Markdown$$anonymous10$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$String);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Method.frost:38
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Immutable*) NULL)));
frost$core$Immutable** $tmp921 = &$tmp919->target;
frost$core$Immutable* $tmp922 = *$tmp921;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp922));
frost$core$Immutable** $tmp923 = &$tmp919->target;
*$tmp923 = ((frost$core$Immutable*) NULL);
frost$core$MutableString$replace$frost$core$RegularExpression$$LPfrost$collections$ListView$LTfrost$core$String$Q$GT$RP$EQ$GT$LPfrost$core$Object$RP(param1, $tmp916, ((frost$core$MutableMethod*) $tmp919));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp919));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp916));
return;

}
void org$frostlang$frostc$frostdoc$Markdown$outdent$frost$core$MutableString(frost$core$MutableString* param0) {

frost$core$Matcher* local0 = NULL;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:437
FROST_ASSERT(24 == sizeof(frost$core$RegularExpression));
frost$core$RegularExpression* $tmp924 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp924, &$s925);
// begin inline call to method frost.core.MutableString.replace(search:frost.core.RegularExpression, replacement:frost.core.String) from Markdown.frost:437:18
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:401
frost$core$Bit $tmp926 = (frost$core$Bit) {true};
// begin inline call to method frost.core.MutableString.replace(search:frost.core.RegularExpression, replacement:frost.core.String, allowGroupReferences:frost.core.Bit) from MutableString.frost:401:16
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:406
$fn928 $tmp927 = ($fn928) ((frost$core$Object*) param0)->$class->vtable[0];
frost$core$String* $tmp929 = $tmp927(((frost$core$Object*) param0));
frost$core$Matcher* $tmp930 = frost$core$RegularExpression$matcher$frost$core$String$R$frost$core$Matcher($tmp924, $tmp929);
*(&local0) = ((frost$core$Matcher*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp930));
frost$core$Matcher* $tmp931 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp931));
*(&local0) = $tmp930;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp930));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp929));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:407
frost$core$MutableString$clear(param0);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:408
goto block3;
block3:;
frost$core$Matcher* $tmp932 = *(&local0);
frost$core$Bit $tmp933 = frost$core$Matcher$find$R$frost$core$Bit($tmp932);
bool $tmp934 = $tmp933.value;
if ($tmp934) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:409
frost$core$Matcher* $tmp935 = *(&local0);
frost$core$Matcher$appendReplacement$frost$core$MutableString$frost$core$String$frost$core$Bit($tmp935, param0, &$s936, $tmp926);
goto block3;
block5:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:411
frost$core$Matcher* $tmp937 = *(&local0);
frost$core$Matcher$appendTail$frost$core$MutableString($tmp937, param0);
frost$core$Matcher* $tmp938 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp938));
*(&local0) = ((frost$core$Matcher*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp924));
return;

}
void org$frostlang$frostc$frostdoc$Markdown$doCodeBlocks$frost$core$MutableString(org$frostlang$frostc$frostdoc$Markdown* param0, frost$core$MutableString* param1) {

frost$core$RegularExpression* local0 = NULL;
org$frostlang$frostc$frostdoc$Markdown$CodeReplacer* local1 = NULL;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:493
FROST_ASSERT(24 == sizeof(frost$core$RegularExpression));
frost$core$RegularExpression* $tmp939 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$String* $tmp940 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s941, &$s942);
frost$core$String* $tmp943 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp940, &$s944);
frost$core$String* $tmp945 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp943, &$s946);
frost$core$String* $tmp947 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp945, &$s948);
frost$core$String* $tmp949 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp947, &$s950);
frost$core$Int64 $tmp951 = (frost$core$Int64) {1u};
frost$core$RegularExpression$init$frost$core$String$frost$core$Int64($tmp939, $tmp949, $tmp951);
*(&local0) = ((frost$core$RegularExpression*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp939));
frost$core$RegularExpression* $tmp952 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp952));
*(&local0) = $tmp939;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp949));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp947));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp945));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp943));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp940));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp939));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:501
frost$core$RegularExpression* $tmp953 = *(&local0);
FROST_ASSERT(24 == sizeof(org$frostlang$frostc$frostdoc$Markdown$CodeReplacer));
org$frostlang$frostc$frostdoc$Markdown$CodeReplacer* $tmp954 = (org$frostlang$frostc$frostdoc$Markdown$CodeReplacer*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$frostdoc$Markdown$CodeReplacer$class);
org$frostlang$frostc$frostdoc$Markdown$CodeReplacer$init$org$frostlang$frostc$frostdoc$Markdown($tmp954, param0);
*(&local1) = ((org$frostlang$frostc$frostdoc$Markdown$CodeReplacer*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp954));
org$frostlang$frostc$frostdoc$Markdown$CodeReplacer* $tmp955 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp955));
*(&local1) = $tmp954;
FROST_ASSERT(24 == sizeof(org$frostlang$frostc$frostdoc$Markdown$_Closure12));
org$frostlang$frostc$frostdoc$Markdown$_Closure12* $tmp956 = (org$frostlang$frostc$frostdoc$Markdown$_Closure12*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$frostdoc$Markdown$_Closure12$class);
org$frostlang$frostc$frostdoc$Markdown$CodeReplacer* $tmp957 = *(&local1);
org$frostlang$frostc$frostdoc$Markdown$_Closure12$init$org$frostlang$frostc$frostdoc$Markdown$CodeReplacer($tmp956, $tmp957);
FROST_ASSERT(32 == sizeof(frost$core$MutableMethod));
frost$core$MutableMethod* $tmp959 = (frost$core$MutableMethod*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$MutableMethod$class);
// begin inline call to frost.core.MutableMethod.init(pointer:frost.unsafe.Pointer<frost.core.Int8>, target:frost.core.Object?) from Markdown.frost:501:45
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableMethod.frost:32
frost$core$Int8** $tmp960 = &$tmp959->pointer;
*$tmp960 = ((frost$core$Int8*) org$frostlang$frostc$frostdoc$Markdown$_Closure12$$anonymous11$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$String);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableMethod.frost:33
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp956));
frost$core$Object** $tmp961 = &$tmp959->target;
frost$core$Object* $tmp962 = *$tmp961;
frost$core$Frost$unref$frost$core$Object$Q($tmp962);
frost$core$Object** $tmp963 = &$tmp959->target;
*$tmp963 = ((frost$core$Object*) $tmp956);
frost$core$MutableString$replace$frost$core$RegularExpression$$LPfrost$collections$ListView$LTfrost$core$String$Q$GT$RP$EQ$GT$LPfrost$core$Object$RP(param1, $tmp953, $tmp959);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp959));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp956));
org$frostlang$frostc$frostdoc$Markdown$CodeReplacer* $tmp964 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp964));
*(&local1) = ((org$frostlang$frostc$frostdoc$Markdown$CodeReplacer*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp954));
frost$core$RegularExpression* $tmp965 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp965));
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
frost$core$MutableString* $tmp966 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init$frost$core$String($tmp966, &$s967);
*(&local0) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp966));
frost$core$MutableString* $tmp968 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp968));
*(&local0) = $tmp966;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp966));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:506
frost$core$Int64 $tmp969 = (frost$core$Int64) {0u};
// begin inline call to org.frostlang.frostc.parser.SyntaxHighlighter.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.parser.SyntaxHighlighter.Kind from Markdown.frost:506:46
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:6
frost$core$Int64* $tmp970 = &(&local2)->$rawValue;
*$tmp970 = $tmp969;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp971 = *(&local2);
*(&local1) = $tmp971;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp972 = *(&local1);
*(&local3) = $tmp972;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:507
org$frostlang$frostc$parser$SyntaxHighlighter** $tmp973 = &param1->syntaxHighlighter;
org$frostlang$frostc$parser$SyntaxHighlighter* $tmp974 = *$tmp973;
frost$collections$Array** $tmp975 = &$tmp974->tokens;
frost$collections$Array* $tmp976 = *$tmp975;
ITable* $tmp977 = ((frost$collections$Iterable*) $tmp976)->$class->itable;
while ($tmp977->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp977 = $tmp977->next;
}
$fn979 $tmp978 = $tmp977->methods[0];
frost$collections$Iterator* $tmp980 = $tmp978(((frost$collections$Iterable*) $tmp976));
goto block2;
block2:;
ITable* $tmp981 = $tmp980->$class->itable;
while ($tmp981->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp981 = $tmp981->next;
}
$fn983 $tmp982 = $tmp981->methods[0];
frost$core$Bit $tmp984 = $tmp982($tmp980);
bool $tmp985 = $tmp984.value;
if ($tmp985) goto block4; else goto block3;
block3:;
*(&local4) = ((org$frostlang$frostc$Pair*) NULL);
ITable* $tmp986 = $tmp980->$class->itable;
while ($tmp986->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp986 = $tmp986->next;
}
$fn988 $tmp987 = $tmp986->methods[1];
frost$core$Object* $tmp989 = $tmp987($tmp980);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Pair*) $tmp989)));
org$frostlang$frostc$Pair* $tmp990 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp990));
*(&local4) = ((org$frostlang$frostc$Pair*) $tmp989);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:508
org$frostlang$frostc$Pair* $tmp991 = *(&local4);
frost$core$Object** $tmp992 = &$tmp991->second;
frost$core$Object* $tmp993 = *$tmp992;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp994;
$tmp994 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp994->value = ((org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) $tmp993)->value;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp995 = *(&local3);
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp996;
$tmp996 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp996->value = $tmp995;
ITable* $tmp997 = ((frost$core$Equatable*) $tmp994)->$class->itable;
while ($tmp997->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp997 = $tmp997->next;
}
$fn999 $tmp998 = $tmp997->methods[1];
frost$core$Bit $tmp1000 = $tmp998(((frost$core$Equatable*) $tmp994), ((frost$core$Equatable*) $tmp996));
bool $tmp1001 = $tmp1000.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp996)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp994)));
if ($tmp1001) goto block7; else goto block6;
block7:;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp1002 = *(&local3);
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp1003;
$tmp1003 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp1003->value = $tmp1002;
frost$core$Int64 $tmp1004 = (frost$core$Int64) {0u};
// begin inline call to org.frostlang.frostc.parser.SyntaxHighlighter.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.parser.SyntaxHighlighter.Kind from Markdown.frost:508:71
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:6
frost$core$Int64* $tmp1005 = &(&local6)->$rawValue;
*$tmp1005 = $tmp1004;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp1006 = *(&local6);
*(&local5) = $tmp1006;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp1007 = *(&local5);
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp1008;
$tmp1008 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp1008->value = $tmp1007;
ITable* $tmp1009 = ((frost$core$Equatable*) $tmp1003)->$class->itable;
while ($tmp1009->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1009 = $tmp1009->next;
}
$fn1011 $tmp1010 = $tmp1009->methods[1];
frost$core$Bit $tmp1012 = $tmp1010(((frost$core$Equatable*) $tmp1003), ((frost$core$Equatable*) $tmp1008));
bool $tmp1013 = $tmp1012.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1008)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1003)));
if ($tmp1013) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:509
frost$core$MutableString* $tmp1014 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp1014, &$s1015);
goto block6;
block6:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:511
org$frostlang$frostc$Pair* $tmp1016 = *(&local4);
frost$core$Object** $tmp1017 = &$tmp1016->second;
frost$core$Object* $tmp1018 = *$tmp1017;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp1019;
$tmp1019 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp1019->value = ((org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) $tmp1018)->value;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp1020 = *(&local3);
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp1021;
$tmp1021 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp1021->value = $tmp1020;
ITable* $tmp1022 = ((frost$core$Equatable*) $tmp1019)->$class->itable;
while ($tmp1022->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1022 = $tmp1022->next;
}
$fn1024 $tmp1023 = $tmp1022->methods[1];
frost$core$Bit $tmp1025 = $tmp1023(((frost$core$Equatable*) $tmp1019), ((frost$core$Equatable*) $tmp1021));
bool $tmp1026 = $tmp1025.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1021)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1019)));
if ($tmp1026) goto block9; else goto block10;
block9:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:512
org$frostlang$frostc$Pair* $tmp1027 = *(&local4);
frost$core$Object** $tmp1028 = &$tmp1027->second;
frost$core$Object* $tmp1029 = *$tmp1028;
*(&local3) = ((org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) $tmp1029)->value;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:513
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp1030 = *(&local3);
frost$core$Int64 $tmp1031 = $tmp1030.$rawValue;
frost$core$Int64 $tmp1032 = (frost$core$Int64) {0u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Markdown.frost:514:48
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp1033 = $tmp1031.value;
int64_t $tmp1034 = $tmp1032.value;
bool $tmp1035 = $tmp1033 == $tmp1034;
frost$core$Bit $tmp1036 = (frost$core$Bit) {$tmp1035};
bool $tmp1037 = $tmp1036.value;
if ($tmp1037) goto block12; else goto block13;
block12:;
goto block11;
block13:;
frost$core$Int64 $tmp1038 = (frost$core$Int64) {1u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Markdown.frost:517:48
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp1039 = $tmp1031.value;
int64_t $tmp1040 = $tmp1038.value;
bool $tmp1041 = $tmp1039 == $tmp1040;
frost$core$Bit $tmp1042 = (frost$core$Bit) {$tmp1041};
bool $tmp1043 = $tmp1042.value;
if ($tmp1043) goto block15; else goto block16;
block16:;
frost$core$Int64 $tmp1044 = (frost$core$Int64) {2u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Markdown.frost:517:80
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp1045 = $tmp1031.value;
int64_t $tmp1046 = $tmp1044.value;
bool $tmp1047 = $tmp1045 == $tmp1046;
frost$core$Bit $tmp1048 = (frost$core$Bit) {$tmp1047};
bool $tmp1049 = $tmp1048.value;
if ($tmp1049) goto block15; else goto block18;
block15:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:518
frost$core$MutableString* $tmp1050 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp1050, &$s1051);
goto block11;
block18:;
frost$core$Int64 $tmp1052 = (frost$core$Int64) {3u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Markdown.frost:520:48
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp1053 = $tmp1031.value;
int64_t $tmp1054 = $tmp1052.value;
bool $tmp1055 = $tmp1053 == $tmp1054;
frost$core$Bit $tmp1056 = (frost$core$Bit) {$tmp1055};
bool $tmp1057 = $tmp1056.value;
if ($tmp1057) goto block20; else goto block21;
block20:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:521
frost$core$MutableString* $tmp1058 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp1058, &$s1059);
goto block11;
block21:;
frost$core$Int64 $tmp1060 = (frost$core$Int64) {4u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Markdown.frost:523:48
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp1061 = $tmp1031.value;
int64_t $tmp1062 = $tmp1060.value;
bool $tmp1063 = $tmp1061 == $tmp1062;
frost$core$Bit $tmp1064 = (frost$core$Bit) {$tmp1063};
bool $tmp1065 = $tmp1064.value;
if ($tmp1065) goto block23; else goto block24;
block23:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:524
frost$core$MutableString* $tmp1066 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp1066, &$s1067);
goto block11;
block24:;
frost$core$Int64 $tmp1068 = (frost$core$Int64) {5u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Markdown.frost:526:48
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp1069 = $tmp1031.value;
int64_t $tmp1070 = $tmp1068.value;
bool $tmp1071 = $tmp1069 == $tmp1070;
frost$core$Bit $tmp1072 = (frost$core$Bit) {$tmp1071};
bool $tmp1073 = $tmp1072.value;
if ($tmp1073) goto block26; else goto block27;
block26:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:527
frost$core$MutableString* $tmp1074 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp1074, &$s1075);
goto block11;
block27:;
frost$core$Int64 $tmp1076 = (frost$core$Int64) {6u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Markdown.frost:529:48
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp1077 = $tmp1031.value;
int64_t $tmp1078 = $tmp1076.value;
bool $tmp1079 = $tmp1077 == $tmp1078;
frost$core$Bit $tmp1080 = (frost$core$Bit) {$tmp1079};
bool $tmp1081 = $tmp1080.value;
if ($tmp1081) goto block29; else goto block30;
block29:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:530
frost$core$MutableString* $tmp1082 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp1082, &$s1083);
goto block11;
block30:;
frost$core$Int64 $tmp1084 = (frost$core$Int64) {7u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Markdown.frost:532:48
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp1085 = $tmp1031.value;
int64_t $tmp1086 = $tmp1084.value;
bool $tmp1087 = $tmp1085 == $tmp1086;
frost$core$Bit $tmp1088 = (frost$core$Bit) {$tmp1087};
bool $tmp1089 = $tmp1088.value;
if ($tmp1089) goto block32; else goto block33;
block32:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:533
frost$core$MutableString* $tmp1090 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp1090, &$s1091);
goto block11;
block33:;
frost$core$Int64 $tmp1092 = (frost$core$Int64) {8u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Markdown.frost:535:48
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp1093 = $tmp1031.value;
int64_t $tmp1094 = $tmp1092.value;
bool $tmp1095 = $tmp1093 == $tmp1094;
frost$core$Bit $tmp1096 = (frost$core$Bit) {$tmp1095};
bool $tmp1097 = $tmp1096.value;
if ($tmp1097) goto block35; else goto block36;
block35:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:536
frost$core$MutableString* $tmp1098 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp1098, &$s1099);
goto block11;
block36:;
frost$core$Int64 $tmp1100 = (frost$core$Int64) {9u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Markdown.frost:538:48
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp1101 = $tmp1031.value;
int64_t $tmp1102 = $tmp1100.value;
bool $tmp1103 = $tmp1101 == $tmp1102;
frost$core$Bit $tmp1104 = (frost$core$Bit) {$tmp1103};
bool $tmp1105 = $tmp1104.value;
if ($tmp1105) goto block38; else goto block39;
block38:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:539
frost$core$MutableString* $tmp1106 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp1106, &$s1107);
goto block11;
block39:;
frost$core$Int64 $tmp1108 = (frost$core$Int64) {10u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Markdown.frost:541:48
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp1109 = $tmp1031.value;
int64_t $tmp1110 = $tmp1108.value;
bool $tmp1111 = $tmp1109 == $tmp1110;
frost$core$Bit $tmp1112 = (frost$core$Bit) {$tmp1111};
bool $tmp1113 = $tmp1112.value;
if ($tmp1113) goto block41; else goto block42;
block41:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:542
frost$core$MutableString* $tmp1114 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp1114, &$s1115);
goto block11;
block42:;
frost$core$Int64 $tmp1116 = (frost$core$Int64) {11u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Markdown.frost:544:48
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp1117 = $tmp1031.value;
int64_t $tmp1118 = $tmp1116.value;
bool $tmp1119 = $tmp1117 == $tmp1118;
frost$core$Bit $tmp1120 = (frost$core$Bit) {$tmp1119};
bool $tmp1121 = $tmp1120.value;
if ($tmp1121) goto block44; else goto block45;
block44:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:545
frost$core$MutableString* $tmp1122 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp1122, &$s1123);
goto block11;
block45:;
frost$core$Int64 $tmp1124 = (frost$core$Int64) {12u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Markdown.frost:547:48
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp1125 = $tmp1031.value;
int64_t $tmp1126 = $tmp1124.value;
bool $tmp1127 = $tmp1125 == $tmp1126;
frost$core$Bit $tmp1128 = (frost$core$Bit) {$tmp1127};
bool $tmp1129 = $tmp1128.value;
if ($tmp1129) goto block47; else goto block48;
block47:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:548
frost$core$MutableString* $tmp1130 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp1130, &$s1131);
goto block11;
block48:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:551
frost$core$Int64 $tmp1132 = (frost$core$Int64) {551u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1133, $tmp1132);
abort(); // unreachable
block11:;
goto block10;
block10:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:555
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp1134 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
org$frostlang$frostc$Pair* $tmp1135 = *(&local4);
frost$core$Object** $tmp1136 = &$tmp1135->first;
frost$core$Object* $tmp1137 = *$tmp1136;
// begin inline call to function org.frostlang.frostc.parser.Parser.text(token:org.frostlang.frostc.parser.Token):frost.core.String from Markdown.frost:555:47
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/parser/Parser.frost:227
frost$core$String** $tmp1138 = &param1->source;
frost$core$String* $tmp1139 = *$tmp1138;
frost$core$String$Index $tmp1140 = ((org$frostlang$frostc$parser$Token$wrapper*) $tmp1137)->value.start;
frost$core$String$Index $tmp1141 = ((org$frostlang$frostc$parser$Token$wrapper*) $tmp1137)->value.end;
frost$core$Bit $tmp1142 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$String$Index$GT $tmp1143 = frost$core$Range$LTfrost$core$String$Index$GT$init$frost$core$String$Index$frost$core$String$Index$frost$core$Bit($tmp1140, $tmp1141, $tmp1142);
frost$core$String* $tmp1144 = frost$core$String$substring$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String($tmp1139, $tmp1143);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1144));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1144));
frost$core$MutableString$init$frost$core$String($tmp1134, $tmp1144);
*(&local7) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1134));
frost$core$MutableString* $tmp1145 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1145));
*(&local7) = $tmp1134;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1144));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1134));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:556
frost$core$MutableString* $tmp1146 = *(&local7);
frost$core$MutableString$replace$frost$core$String$frost$core$String($tmp1146, &$s1147, &$s1148);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:557
frost$core$MutableString* $tmp1149 = *(&local7);
frost$core$MutableString$replace$frost$core$String$frost$core$String($tmp1149, &$s1150, &$s1151);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:558
frost$core$MutableString* $tmp1152 = *(&local7);
frost$core$MutableString$replace$frost$core$String$frost$core$String($tmp1152, &$s1153, &$s1154);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:559
frost$core$MutableString* $tmp1155 = *(&local7);
org$frostlang$frostc$frostdoc$Protector** $tmp1156 = &param0->charProtector;
org$frostlang$frostc$frostdoc$Protector* $tmp1157 = *$tmp1156;
$fn1159 $tmp1158 = ($fn1159) $tmp1157->$class->vtable[2];
frost$core$String* $tmp1160 = $tmp1158($tmp1157, &$s1161);
frost$core$MutableString$replace$frost$core$String$frost$core$String($tmp1155, &$s1162, $tmp1160);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1160));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:560
frost$core$MutableString* $tmp1163 = *(&local7);
org$frostlang$frostc$frostdoc$Protector** $tmp1164 = &param0->charProtector;
org$frostlang$frostc$frostdoc$Protector* $tmp1165 = *$tmp1164;
$fn1167 $tmp1166 = ($fn1167) $tmp1165->$class->vtable[2];
frost$core$String* $tmp1168 = $tmp1166($tmp1165, &$s1169);
frost$core$MutableString$replace$frost$core$String$frost$core$String($tmp1163, &$s1170, $tmp1168);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1168));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:561
frost$core$MutableString* $tmp1171 = *(&local7);
org$frostlang$frostc$frostdoc$Protector** $tmp1172 = &param0->charProtector;
org$frostlang$frostc$frostdoc$Protector* $tmp1173 = *$tmp1172;
$fn1175 $tmp1174 = ($fn1175) $tmp1173->$class->vtable[2];
frost$core$String* $tmp1176 = $tmp1174($tmp1173, &$s1177);
frost$core$MutableString$replace$frost$core$String$frost$core$String($tmp1171, &$s1178, $tmp1176);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1176));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:562
frost$core$MutableString* $tmp1179 = *(&local7);
org$frostlang$frostc$frostdoc$Protector** $tmp1180 = &param0->charProtector;
org$frostlang$frostc$frostdoc$Protector* $tmp1181 = *$tmp1180;
$fn1183 $tmp1182 = ($fn1183) $tmp1181->$class->vtable[2];
frost$core$String* $tmp1184 = $tmp1182($tmp1181, &$s1185);
frost$core$MutableString$replace$frost$core$String$frost$core$String($tmp1179, &$s1186, $tmp1184);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1184));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:563
frost$core$MutableString* $tmp1187 = *(&local7);
org$frostlang$frostc$frostdoc$Protector** $tmp1188 = &param0->charProtector;
org$frostlang$frostc$frostdoc$Protector* $tmp1189 = *$tmp1188;
$fn1191 $tmp1190 = ($fn1191) $tmp1189->$class->vtable[2];
frost$core$String* $tmp1192 = $tmp1190($tmp1189, &$s1193);
frost$core$MutableString$replace$frost$core$String$frost$core$String($tmp1187, &$s1194, $tmp1192);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1192));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:564
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp1195 = *(&local3);
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp1196;
$tmp1196 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp1196->value = $tmp1195;
frost$core$Int64 $tmp1197 = (frost$core$Int64) {1u};
// begin inline call to org.frostlang.frostc.parser.SyntaxHighlighter.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.parser.SyntaxHighlighter.Kind from Markdown.frost:564:49
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:6
frost$core$Int64* $tmp1198 = &(&local9)->$rawValue;
*$tmp1198 = $tmp1197;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp1199 = *(&local9);
*(&local8) = $tmp1199;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp1200 = *(&local8);
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp1201;
$tmp1201 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp1201->value = $tmp1200;
ITable* $tmp1202 = ((frost$core$Equatable*) $tmp1196)->$class->itable;
while ($tmp1202->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1202 = $tmp1202->next;
}
$fn1204 $tmp1203 = $tmp1202->methods[1];
frost$core$Bit $tmp1205 = $tmp1203(((frost$core$Equatable*) $tmp1196), ((frost$core$Equatable*) $tmp1201));
bool $tmp1206 = $tmp1205.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1201)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1196)));
if ($tmp1206) goto block53; else goto block52;
block53:;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp1207 = *(&local3);
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp1208;
$tmp1208 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp1208->value = $tmp1207;
frost$core$Int64 $tmp1209 = (frost$core$Int64) {2u};
// begin inline call to org.frostlang.frostc.parser.SyntaxHighlighter.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.parser.SyntaxHighlighter.Kind from Markdown.frost:565:54
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:6
frost$core$Int64* $tmp1210 = &(&local11)->$rawValue;
*$tmp1210 = $tmp1209;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp1211 = *(&local11);
*(&local10) = $tmp1211;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp1212 = *(&local10);
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp1213;
$tmp1213 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp1213->value = $tmp1212;
ITable* $tmp1214 = ((frost$core$Equatable*) $tmp1208)->$class->itable;
while ($tmp1214->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1214 = $tmp1214->next;
}
$fn1216 $tmp1215 = $tmp1214->methods[1];
frost$core$Bit $tmp1217 = $tmp1215(((frost$core$Equatable*) $tmp1208), ((frost$core$Equatable*) $tmp1213));
bool $tmp1218 = $tmp1217.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1213)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1208)));
if ($tmp1218) goto block51; else goto block52;
block51:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:566
frost$core$MutableString* $tmp1219 = *(&local0);
org$frostlang$frostc$Pair* $tmp1220 = *(&local4);
frost$core$Object** $tmp1221 = &$tmp1220->first;
frost$core$Object* $tmp1222 = *$tmp1221;
org$frostlang$frostc$parser$Token$Kind $tmp1223 = ((org$frostlang$frostc$parser$Token$wrapper*) $tmp1222)->value.kind;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp1224;
$tmp1224 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp1224->value = $tmp1223;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Markdown.frost:566:31
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:560
$fn1226 $tmp1225 = ($fn1226) ((frost$core$Object*) $tmp1224)->$class->vtable[0];
frost$core$String* $tmp1227 = $tmp1225(((frost$core$Object*) $tmp1224));
frost$core$String* $tmp1228 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1229, $tmp1227);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1228));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1228));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1227));
frost$core$String* $tmp1230 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1228, &$s1231);
frost$core$MutableString$append$frost$core$String($tmp1219, $tmp1230);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1230));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1228));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1224));
goto block52;
block52:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:568
frost$core$MutableString* $tmp1232 = *(&local0);
frost$core$MutableString* $tmp1233 = *(&local7);
// begin inline call to method frost.core.MutableString.append(o:frost.core.Object) from Markdown.frost:568:26
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:150
$fn1235 $tmp1234 = ($fn1235) ((frost$core$Object*) $tmp1233)->$class->vtable[0];
frost$core$String* $tmp1236 = $tmp1234(((frost$core$Object*) $tmp1233));
frost$core$MutableString$append$frost$core$String($tmp1232, $tmp1236);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1236));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:569
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp1237 = *(&local3);
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp1238;
$tmp1238 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp1238->value = $tmp1237;
frost$core$Int64 $tmp1239 = (frost$core$Int64) {1u};
// begin inline call to org.frostlang.frostc.parser.SyntaxHighlighter.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.parser.SyntaxHighlighter.Kind from Markdown.frost:569:49
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:6
frost$core$Int64* $tmp1240 = &(&local13)->$rawValue;
*$tmp1240 = $tmp1239;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp1241 = *(&local13);
*(&local12) = $tmp1241;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp1242 = *(&local12);
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp1243;
$tmp1243 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp1243->value = $tmp1242;
ITable* $tmp1244 = ((frost$core$Equatable*) $tmp1238)->$class->itable;
while ($tmp1244->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1244 = $tmp1244->next;
}
$fn1246 $tmp1245 = $tmp1244->methods[1];
frost$core$Bit $tmp1247 = $tmp1245(((frost$core$Equatable*) $tmp1238), ((frost$core$Equatable*) $tmp1243));
bool $tmp1248 = $tmp1247.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1243)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1238)));
if ($tmp1248) goto block60; else goto block59;
block60:;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp1249 = *(&local3);
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp1250;
$tmp1250 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp1250->value = $tmp1249;
frost$core$Int64 $tmp1251 = (frost$core$Int64) {2u};
// begin inline call to org.frostlang.frostc.parser.SyntaxHighlighter.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.parser.SyntaxHighlighter.Kind from Markdown.frost:570:54
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:6
frost$core$Int64* $tmp1252 = &(&local15)->$rawValue;
*$tmp1252 = $tmp1251;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp1253 = *(&local15);
*(&local14) = $tmp1253;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp1254 = *(&local14);
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp1255;
$tmp1255 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp1255->value = $tmp1254;
ITable* $tmp1256 = ((frost$core$Equatable*) $tmp1250)->$class->itable;
while ($tmp1256->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1256 = $tmp1256->next;
}
$fn1258 $tmp1257 = $tmp1256->methods[1];
frost$core$Bit $tmp1259 = $tmp1257(((frost$core$Equatable*) $tmp1250), ((frost$core$Equatable*) $tmp1255));
bool $tmp1260 = $tmp1259.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1255)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1250)));
if ($tmp1260) goto block58; else goto block59;
block58:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:571
frost$core$MutableString* $tmp1261 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp1261, &$s1262);
goto block59;
block59:;
frost$core$MutableString* $tmp1263 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1263));
*(&local7) = ((frost$core$MutableString*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp989);
org$frostlang$frostc$Pair* $tmp1264 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1264));
*(&local4) = ((org$frostlang$frostc$Pair*) NULL);
goto block2;
block4:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp980));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:574
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp1265 = *(&local3);
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp1266;
$tmp1266 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp1266->value = $tmp1265;
frost$core$Int64 $tmp1267 = (frost$core$Int64) {0u};
// begin inline call to org.frostlang.frostc.parser.SyntaxHighlighter.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.parser.SyntaxHighlighter.Kind from Markdown.frost:574:45
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:6
frost$core$Int64* $tmp1268 = &(&local17)->$rawValue;
*$tmp1268 = $tmp1267;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp1269 = *(&local17);
*(&local16) = $tmp1269;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp1270 = *(&local16);
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp1271;
$tmp1271 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp1271->value = $tmp1270;
ITable* $tmp1272 = ((frost$core$Equatable*) $tmp1266)->$class->itable;
while ($tmp1272->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1272 = $tmp1272->next;
}
$fn1274 $tmp1273 = $tmp1272->methods[1];
frost$core$Bit $tmp1275 = $tmp1273(((frost$core$Equatable*) $tmp1266), ((frost$core$Equatable*) $tmp1271));
bool $tmp1276 = $tmp1275.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1271)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1266)));
if ($tmp1276) goto block63; else goto block64;
block63:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:575
frost$core$MutableString* $tmp1277 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp1277, &$s1278);
goto block64;
block64:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:577
frost$core$MutableString* $tmp1279 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp1279, &$s1280);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:578
frost$core$MutableString* $tmp1281 = *(&local0);
frost$core$String* $tmp1282 = frost$core$MutableString$finish$R$frost$core$String($tmp1281);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1282));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1282));
frost$core$MutableString* $tmp1283 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1283));
*(&local0) = ((frost$core$MutableString*) NULL);
return $tmp1282;

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
frost$threads$MessageQueue** $tmp1284 = &param0->errorQueue;
frost$threads$MessageQueue* $tmp1285 = *$tmp1284;
// begin inline call to method frost.threads.MessageQueue.clear() from Markdown.frost:582:25
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/threads/MessageQueue.frost:116
goto block2;
block2:;
// begin inline call to method frost.threads.MessageQueue.hasMessage():frost.core.Bit from MessageQueue.frost:116:25
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/threads/MessageQueue.frost:89
frost$core$Int64 $tmp1286 = frost$threads$MessageQueue$pendingMessages$R$frost$core$Int64($tmp1285);
frost$core$Int64 $tmp1287 = (frost$core$Int64) {0u};
int64_t $tmp1288 = $tmp1286.value;
int64_t $tmp1289 = $tmp1287.value;
bool $tmp1290 = $tmp1288 > $tmp1289;
frost$core$Bit $tmp1291 = (frost$core$Bit) {$tmp1290};
bool $tmp1292 = $tmp1291.value;
if ($tmp1292) goto block3; else goto block4;
block3:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/threads/MessageQueue.frost:117
frost$core$Immutable* $tmp1293 = frost$threads$MessageQueue$getMessage$R$frost$threads$MessageQueue$T($tmp1285);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1293));
goto block2;
block4:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:583
$fn1295 $tmp1294 = ($fn1295) ((frost$core$Object*) param1)->$class->vtable[0];
frost$core$String* $tmp1296 = $tmp1294(((frost$core$Object*) param1));
frost$core$String* $tmp1297 = frost$core$String$get_trimmed$R$frost$core$String($tmp1296);
*(&local0) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1297));
frost$core$String* $tmp1298 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1298));
*(&local0) = $tmp1297;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1297));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1296));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:584
org$frostlang$frostc$parser$Parser** $tmp1299 = &param0->parser;
org$frostlang$frostc$parser$Parser* $tmp1300 = *$tmp1299;
frost$io$File** $tmp1301 = &param0->source;
frost$io$File* $tmp1302 = *$tmp1301;
frost$core$Int64 $tmp1303 = (frost$core$Int64) {18446744073709551615u};
frost$core$String* $tmp1304 = *(&local0);
org$frostlang$frostc$parser$Parser$start$frost$io$File$frost$core$Int64$frost$core$String($tmp1300, $tmp1302, $tmp1303, $tmp1304);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:585
org$frostlang$frostc$parser$Parser** $tmp1305 = &param0->parser;
org$frostlang$frostc$parser$Parser* $tmp1306 = *$tmp1305;
org$frostlang$frostc$ASTNode* $tmp1307 = org$frostlang$frostc$parser$Parser$file$R$org$frostlang$frostc$ASTNode$Q($tmp1306);
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1307));
org$frostlang$frostc$ASTNode* $tmp1308 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1308));
*(&local1) = $tmp1307;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1307));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:586
org$frostlang$frostc$ASTNode* $tmp1309 = *(&local1);
frost$core$Bit $tmp1310 = (frost$core$Bit) {$tmp1309 != NULL};
bool $tmp1311 = $tmp1310.value;
if ($tmp1311) goto block8; else goto block7;
block8:;
frost$threads$MessageQueue** $tmp1312 = &param0->errorQueue;
frost$threads$MessageQueue* $tmp1313 = *$tmp1312;
// begin inline call to method frost.threads.MessageQueue.pendingMessages():frost.core.Int64 from Markdown.frost:586:54
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/threads/MessageQueue.frost:76
FROST_ASSERT(24 == sizeof(frost$threads$ScopedLock));
frost$threads$ScopedLock* $tmp1314 = (frost$threads$ScopedLock*) frostObjectAlloc(24, (frost$core$Class*) &frost$threads$ScopedLock$class);
frost$threads$Lock** $tmp1315 = &$tmp1313->lock;
frost$threads$Lock* $tmp1316 = *$tmp1315;
frost$threads$ScopedLock$init$frost$threads$Lock($tmp1314, $tmp1316);
*(&local2) = ((frost$threads$ScopedLock*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1314));
frost$threads$ScopedLock* $tmp1317 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1317));
*(&local2) = $tmp1314;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1314));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/threads/MessageQueue.frost:77
frost$core$Int64* $tmp1318 = &$tmp1313->count;
frost$core$Int64 $tmp1319 = *$tmp1318;
frost$threads$ScopedLock* $tmp1320 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1320));
*(&local2) = ((frost$threads$ScopedLock*) NULL);
frost$core$Int64 $tmp1321 = (frost$core$Int64) {0u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Markdown.frost:586:57
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp1322 = $tmp1319.value;
int64_t $tmp1323 = $tmp1321.value;
bool $tmp1324 = $tmp1322 == $tmp1323;
frost$core$Bit $tmp1325 = (frost$core$Bit) {$tmp1324};
bool $tmp1326 = $tmp1325.value;
if ($tmp1326) goto block6; else goto block7;
block6:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:587
frost$core$Bit $tmp1327 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$MutableString$Index$Q$GT $tmp1328 = frost$core$Range$LTfrost$core$MutableString$Index$Q$GT$init$frost$core$MutableString$Index$Q$frost$core$MutableString$Index$Q$frost$core$Bit(((frost$core$MutableString$Index$nullable) { .nonnull = false }), ((frost$core$MutableString$Index$nullable) { .nonnull = false }), $tmp1327);
org$frostlang$frostc$parser$Parser** $tmp1329 = &param0->parser;
org$frostlang$frostc$parser$Parser* $tmp1330 = *$tmp1329;
$fn1332 $tmp1331 = ($fn1332) param0->$class->vtable[16];
frost$core$String* $tmp1333 = $tmp1331(param0, $tmp1330);
frost$core$MutableString$$IDXEQ$frost$core$Range$LTfrost$core$MutableString$Index$Q$GT$frost$core$String(param1, $tmp1328, $tmp1333);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1333));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:588
org$frostlang$frostc$ASTNode* $tmp1334 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1334));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp1335 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1335));
*(&local0) = ((frost$core$String*) NULL);
return;
block7:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:591
frost$threads$MessageQueue** $tmp1336 = &param0->errorQueue;
frost$threads$MessageQueue* $tmp1337 = *$tmp1336;
// begin inline call to method frost.threads.MessageQueue.clear() from Markdown.frost:591:25
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/threads/MessageQueue.frost:116
goto block12;
block12:;
// begin inline call to method frost.threads.MessageQueue.hasMessage():frost.core.Bit from MessageQueue.frost:116:25
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/threads/MessageQueue.frost:89
frost$core$Int64 $tmp1338 = frost$threads$MessageQueue$pendingMessages$R$frost$core$Int64($tmp1337);
frost$core$Int64 $tmp1339 = (frost$core$Int64) {0u};
int64_t $tmp1340 = $tmp1338.value;
int64_t $tmp1341 = $tmp1339.value;
bool $tmp1342 = $tmp1340 > $tmp1341;
frost$core$Bit $tmp1343 = (frost$core$Bit) {$tmp1342};
bool $tmp1344 = $tmp1343.value;
if ($tmp1344) goto block13; else goto block14;
block13:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/threads/MessageQueue.frost:117
frost$core$Immutable* $tmp1345 = frost$threads$MessageQueue$getMessage$R$frost$threads$MessageQueue$T($tmp1337);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1345));
goto block12;
block14:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:592
org$frostlang$frostc$parser$Parser** $tmp1346 = &param0->parser;
org$frostlang$frostc$parser$Parser* $tmp1347 = *$tmp1346;
frost$io$File** $tmp1348 = &param0->source;
frost$io$File* $tmp1349 = *$tmp1348;
frost$core$Int64 $tmp1350 = (frost$core$Int64) {18446744073709551615u};
frost$core$String* $tmp1351 = *(&local0);
org$frostlang$frostc$parser$Parser$start$frost$io$File$frost$core$Int64$frost$core$String($tmp1347, $tmp1349, $tmp1350, $tmp1351);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:593
goto block16;
block16:;
org$frostlang$frostc$parser$Parser** $tmp1352 = &param0->parser;
org$frostlang$frostc$parser$Parser* $tmp1353 = *$tmp1352;
// begin inline call to method org.frostlang.frostc.parser.Parser.peek():org.frostlang.frostc.parser.Token from Markdown.frost:593:26
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/parser/Parser.frost:167
frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT** $tmp1354 = &$tmp1353->pushbackBuffer;
frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT* $tmp1355 = *$tmp1354;
ITable* $tmp1356 = ((frost$collections$CollectionView*) $tmp1355)->$class->itable;
while ($tmp1356->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1356 = $tmp1356->next;
}
$fn1358 $tmp1357 = $tmp1356->methods[0];
frost$core$Int64 $tmp1359 = $tmp1357(((frost$collections$CollectionView*) $tmp1355));
frost$core$Int64 $tmp1360 = (frost$core$Int64) {0u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Parser.frost:167:33
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp1361 = $tmp1359.value;
int64_t $tmp1362 = $tmp1360.value;
bool $tmp1363 = $tmp1361 == $tmp1362;
frost$core$Bit $tmp1364 = (frost$core$Bit) {$tmp1363};
bool $tmp1365 = $tmp1364.value;
if ($tmp1365) goto block21; else goto block22;
block21:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/parser/Parser.frost:168
org$frostlang$frostc$parser$Token $tmp1366 = org$frostlang$frostc$parser$Parser$next$R$org$frostlang$frostc$parser$Token($tmp1353);
org$frostlang$frostc$parser$Parser$pushback$org$frostlang$frostc$parser$Token($tmp1353, $tmp1366);
goto block22;
block22:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/parser/Parser.frost:170
frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT** $tmp1367 = &$tmp1353->pushbackBuffer;
frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT* $tmp1368 = *$tmp1367;
frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT** $tmp1369 = &$tmp1353->pushbackBuffer;
frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT* $tmp1370 = *$tmp1369;
ITable* $tmp1371 = ((frost$collections$CollectionView*) $tmp1370)->$class->itable;
while ($tmp1371->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1371 = $tmp1371->next;
}
$fn1373 $tmp1372 = $tmp1371->methods[0];
frost$core$Int64 $tmp1374 = $tmp1372(((frost$collections$CollectionView*) $tmp1370));
frost$core$Int64 $tmp1375 = (frost$core$Int64) {1u};
int64_t $tmp1376 = $tmp1374.value;
int64_t $tmp1377 = $tmp1375.value;
int64_t $tmp1378 = $tmp1376 - $tmp1377;
frost$core$Int64 $tmp1379 = (frost$core$Int64) {$tmp1378};
// begin inline call to function frost.collections.SpecializedArray<org.frostlang.frostc.parser.Token>.[](index:frost.core.Int64):org.frostlang.frostc.parser.Token from Parser.frost:170:30
frost$core$Int64 $tmp1380 = (frost$core$Int64) {0u};
int64_t $tmp1381 = $tmp1379.value;
int64_t $tmp1382 = $tmp1380.value;
bool $tmp1383 = $tmp1381 >= $tmp1382;
frost$core$Bit $tmp1384 = (frost$core$Bit) {$tmp1383};
bool $tmp1385 = $tmp1384.value;
if ($tmp1385) goto block27; else goto block26;
block27:;
ITable* $tmp1386 = ((frost$collections$CollectionView*) $tmp1368)->$class->itable;
while ($tmp1386->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1386 = $tmp1386->next;
}
$fn1388 $tmp1387 = $tmp1386->methods[0];
frost$core$Int64 $tmp1389 = $tmp1387(((frost$collections$CollectionView*) $tmp1368));
int64_t $tmp1390 = $tmp1379.value;
int64_t $tmp1391 = $tmp1389.value;
bool $tmp1392 = $tmp1390 < $tmp1391;
frost$core$Bit $tmp1393 = (frost$core$Bit) {$tmp1392};
bool $tmp1394 = $tmp1393.value;
if ($tmp1394) goto block25; else goto block26;
block26:;
frost$core$Int64 $tmp1395 = (frost$core$Int64) {67u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1396, $tmp1395, &$s1397);
abort(); // unreachable
block25:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/SpecializedArray.frost:68
org$frostlang$frostc$parser$Token** $tmp1398 = &$tmp1368->data;
org$frostlang$frostc$parser$Token* $tmp1399 = *$tmp1398;
int64_t $tmp1400 = $tmp1379.value;
org$frostlang$frostc$parser$Token $tmp1401 = $tmp1399[$tmp1400];
org$frostlang$frostc$parser$Token$Kind $tmp1402 = $tmp1401.kind;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp1403;
$tmp1403 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp1403->value = $tmp1402;
frost$core$Int64 $tmp1404 = (frost$core$Int64) {0u};
// begin inline call to org.frostlang.frostc.parser.Token.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.parser.Token.Kind from Markdown.frost:593:47
// /Users/ethannicholas/Dropbox/Frost-Int/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Int64* $tmp1405 = &(&local4)->$rawValue;
*$tmp1405 = $tmp1404;
org$frostlang$frostc$parser$Token$Kind $tmp1406 = *(&local4);
*(&local3) = $tmp1406;
org$frostlang$frostc$parser$Token$Kind $tmp1407 = *(&local3);
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp1408;
$tmp1408 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp1408->value = $tmp1407;
ITable* $tmp1409 = ((frost$core$Equatable*) $tmp1403)->$class->itable;
while ($tmp1409->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1409 = $tmp1409->next;
}
$fn1411 $tmp1410 = $tmp1409->methods[1];
frost$core$Bit $tmp1412 = $tmp1410(((frost$core$Equatable*) $tmp1403), ((frost$core$Equatable*) $tmp1408));
bool $tmp1413 = $tmp1412.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1408)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1403)));
if ($tmp1413) goto block19; else goto block18;
block19:;
frost$threads$MessageQueue** $tmp1414 = &param0->errorQueue;
frost$threads$MessageQueue* $tmp1415 = *$tmp1414;
// begin inline call to method frost.threads.MessageQueue.pendingMessages():frost.core.Int64 from Markdown.frost:593:80
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/threads/MessageQueue.frost:76
FROST_ASSERT(24 == sizeof(frost$threads$ScopedLock));
frost$threads$ScopedLock* $tmp1416 = (frost$threads$ScopedLock*) frostObjectAlloc(24, (frost$core$Class*) &frost$threads$ScopedLock$class);
frost$threads$Lock** $tmp1417 = &$tmp1415->lock;
frost$threads$Lock* $tmp1418 = *$tmp1417;
frost$threads$ScopedLock$init$frost$threads$Lock($tmp1416, $tmp1418);
*(&local5) = ((frost$threads$ScopedLock*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1416));
frost$threads$ScopedLock* $tmp1419 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1419));
*(&local5) = $tmp1416;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1416));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/threads/MessageQueue.frost:77
frost$core$Int64* $tmp1420 = &$tmp1415->count;
frost$core$Int64 $tmp1421 = *$tmp1420;
frost$threads$ScopedLock* $tmp1422 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1422));
*(&local5) = ((frost$threads$ScopedLock*) NULL);
frost$core$Int64 $tmp1423 = (frost$core$Int64) {0u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Markdown.frost:593:83
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp1424 = $tmp1421.value;
int64_t $tmp1425 = $tmp1423.value;
bool $tmp1426 = $tmp1424 == $tmp1425;
frost$core$Bit $tmp1427 = (frost$core$Bit) {$tmp1426};
bool $tmp1428 = $tmp1427.value;
if ($tmp1428) goto block17; else goto block18;
block17:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:594
org$frostlang$frostc$parser$Parser** $tmp1429 = &param0->parser;
org$frostlang$frostc$parser$Parser* $tmp1430 = *$tmp1429;
org$frostlang$frostc$ASTNode* $tmp1431 = org$frostlang$frostc$parser$Parser$statement$R$org$frostlang$frostc$ASTNode$Q($tmp1430);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1431));
goto block16;
block18:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:596
frost$threads$MessageQueue** $tmp1432 = &param0->errorQueue;
frost$threads$MessageQueue* $tmp1433 = *$tmp1432;
// begin inline call to method frost.threads.MessageQueue.pendingMessages():frost.core.Int64 from Markdown.frost:596:38
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/threads/MessageQueue.frost:76
FROST_ASSERT(24 == sizeof(frost$threads$ScopedLock));
frost$threads$ScopedLock* $tmp1434 = (frost$threads$ScopedLock*) frostObjectAlloc(24, (frost$core$Class*) &frost$threads$ScopedLock$class);
frost$threads$Lock** $tmp1435 = &$tmp1433->lock;
frost$threads$Lock* $tmp1436 = *$tmp1435;
frost$threads$ScopedLock$init$frost$threads$Lock($tmp1434, $tmp1436);
*(&local6) = ((frost$threads$ScopedLock*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1434));
frost$threads$ScopedLock* $tmp1437 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1437));
*(&local6) = $tmp1434;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1434));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/threads/MessageQueue.frost:77
frost$core$Int64* $tmp1438 = &$tmp1433->count;
frost$core$Int64 $tmp1439 = *$tmp1438;
frost$threads$ScopedLock* $tmp1440 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1440));
*(&local6) = ((frost$threads$ScopedLock*) NULL);
frost$core$Int64 $tmp1441 = (frost$core$Int64) {0u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Markdown.frost:596:41
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp1442 = $tmp1439.value;
int64_t $tmp1443 = $tmp1441.value;
bool $tmp1444 = $tmp1442 == $tmp1443;
frost$core$Bit $tmp1445 = (frost$core$Bit) {$tmp1444};
bool $tmp1446 = $tmp1445.value;
if ($tmp1446) goto block31; else goto block32;
block31:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:597
frost$core$Bit $tmp1447 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$MutableString$Index$Q$GT $tmp1448 = frost$core$Range$LTfrost$core$MutableString$Index$Q$GT$init$frost$core$MutableString$Index$Q$frost$core$MutableString$Index$Q$frost$core$Bit(((frost$core$MutableString$Index$nullable) { .nonnull = false }), ((frost$core$MutableString$Index$nullable) { .nonnull = false }), $tmp1447);
org$frostlang$frostc$parser$Parser** $tmp1449 = &param0->parser;
org$frostlang$frostc$parser$Parser* $tmp1450 = *$tmp1449;
$fn1452 $tmp1451 = ($fn1452) param0->$class->vtable[16];
frost$core$String* $tmp1453 = $tmp1451(param0, $tmp1450);
frost$core$MutableString$$IDXEQ$frost$core$Range$LTfrost$core$MutableString$Index$Q$GT$frost$core$String(param1, $tmp1448, $tmp1453);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1453));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:598
org$frostlang$frostc$ASTNode* $tmp1454 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1454));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp1455 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1455));
*(&local0) = ((frost$core$String*) NULL);
return;
block32:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:601
frost$threads$MessageQueue** $tmp1456 = &param0->errorQueue;
frost$threads$MessageQueue* $tmp1457 = *$tmp1456;
// begin inline call to method frost.threads.MessageQueue.clear() from Markdown.frost:601:25
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/threads/MessageQueue.frost:116
goto block36;
block36:;
// begin inline call to method frost.threads.MessageQueue.hasMessage():frost.core.Bit from MessageQueue.frost:116:25
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/threads/MessageQueue.frost:89
frost$core$Int64 $tmp1458 = frost$threads$MessageQueue$pendingMessages$R$frost$core$Int64($tmp1457);
frost$core$Int64 $tmp1459 = (frost$core$Int64) {0u};
int64_t $tmp1460 = $tmp1458.value;
int64_t $tmp1461 = $tmp1459.value;
bool $tmp1462 = $tmp1460 > $tmp1461;
frost$core$Bit $tmp1463 = (frost$core$Bit) {$tmp1462};
bool $tmp1464 = $tmp1463.value;
if ($tmp1464) goto block37; else goto block38;
block37:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/threads/MessageQueue.frost:117
frost$core$Immutable* $tmp1465 = frost$threads$MessageQueue$getMessage$R$frost$threads$MessageQueue$T($tmp1457);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1465));
goto block36;
block38:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:602
org$frostlang$frostc$parser$Parser** $tmp1466 = &param0->parser;
org$frostlang$frostc$parser$Parser* $tmp1467 = *$tmp1466;
frost$io$File** $tmp1468 = &param0->source;
frost$io$File* $tmp1469 = *$tmp1468;
frost$core$Int64 $tmp1470 = (frost$core$Int64) {18446744073709551615u};
frost$core$String* $tmp1471 = *(&local0);
org$frostlang$frostc$parser$Parser$start$frost$io$File$frost$core$Int64$frost$core$String($tmp1467, $tmp1469, $tmp1470, $tmp1471);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:603
goto block40;
block40:;
org$frostlang$frostc$parser$Parser** $tmp1472 = &param0->parser;
org$frostlang$frostc$parser$Parser* $tmp1473 = *$tmp1472;
// begin inline call to method org.frostlang.frostc.parser.Parser.peek():org.frostlang.frostc.parser.Token from Markdown.frost:603:26
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/parser/Parser.frost:167
frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT** $tmp1474 = &$tmp1473->pushbackBuffer;
frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT* $tmp1475 = *$tmp1474;
ITable* $tmp1476 = ((frost$collections$CollectionView*) $tmp1475)->$class->itable;
while ($tmp1476->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1476 = $tmp1476->next;
}
$fn1478 $tmp1477 = $tmp1476->methods[0];
frost$core$Int64 $tmp1479 = $tmp1477(((frost$collections$CollectionView*) $tmp1475));
frost$core$Int64 $tmp1480 = (frost$core$Int64) {0u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Parser.frost:167:33
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp1481 = $tmp1479.value;
int64_t $tmp1482 = $tmp1480.value;
bool $tmp1483 = $tmp1481 == $tmp1482;
frost$core$Bit $tmp1484 = (frost$core$Bit) {$tmp1483};
bool $tmp1485 = $tmp1484.value;
if ($tmp1485) goto block45; else goto block46;
block45:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/parser/Parser.frost:168
org$frostlang$frostc$parser$Token $tmp1486 = org$frostlang$frostc$parser$Parser$next$R$org$frostlang$frostc$parser$Token($tmp1473);
org$frostlang$frostc$parser$Parser$pushback$org$frostlang$frostc$parser$Token($tmp1473, $tmp1486);
goto block46;
block46:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/parser/Parser.frost:170
frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT** $tmp1487 = &$tmp1473->pushbackBuffer;
frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT* $tmp1488 = *$tmp1487;
frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT** $tmp1489 = &$tmp1473->pushbackBuffer;
frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT* $tmp1490 = *$tmp1489;
ITable* $tmp1491 = ((frost$collections$CollectionView*) $tmp1490)->$class->itable;
while ($tmp1491->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1491 = $tmp1491->next;
}
$fn1493 $tmp1492 = $tmp1491->methods[0];
frost$core$Int64 $tmp1494 = $tmp1492(((frost$collections$CollectionView*) $tmp1490));
frost$core$Int64 $tmp1495 = (frost$core$Int64) {1u};
int64_t $tmp1496 = $tmp1494.value;
int64_t $tmp1497 = $tmp1495.value;
int64_t $tmp1498 = $tmp1496 - $tmp1497;
frost$core$Int64 $tmp1499 = (frost$core$Int64) {$tmp1498};
// begin inline call to function frost.collections.SpecializedArray<org.frostlang.frostc.parser.Token>.[](index:frost.core.Int64):org.frostlang.frostc.parser.Token from Parser.frost:170:30
frost$core$Int64 $tmp1500 = (frost$core$Int64) {0u};
int64_t $tmp1501 = $tmp1499.value;
int64_t $tmp1502 = $tmp1500.value;
bool $tmp1503 = $tmp1501 >= $tmp1502;
frost$core$Bit $tmp1504 = (frost$core$Bit) {$tmp1503};
bool $tmp1505 = $tmp1504.value;
if ($tmp1505) goto block51; else goto block50;
block51:;
ITable* $tmp1506 = ((frost$collections$CollectionView*) $tmp1488)->$class->itable;
while ($tmp1506->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1506 = $tmp1506->next;
}
$fn1508 $tmp1507 = $tmp1506->methods[0];
frost$core$Int64 $tmp1509 = $tmp1507(((frost$collections$CollectionView*) $tmp1488));
int64_t $tmp1510 = $tmp1499.value;
int64_t $tmp1511 = $tmp1509.value;
bool $tmp1512 = $tmp1510 < $tmp1511;
frost$core$Bit $tmp1513 = (frost$core$Bit) {$tmp1512};
bool $tmp1514 = $tmp1513.value;
if ($tmp1514) goto block49; else goto block50;
block50:;
frost$core$Int64 $tmp1515 = (frost$core$Int64) {67u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1516, $tmp1515, &$s1517);
abort(); // unreachable
block49:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/SpecializedArray.frost:68
org$frostlang$frostc$parser$Token** $tmp1518 = &$tmp1488->data;
org$frostlang$frostc$parser$Token* $tmp1519 = *$tmp1518;
int64_t $tmp1520 = $tmp1499.value;
org$frostlang$frostc$parser$Token $tmp1521 = $tmp1519[$tmp1520];
org$frostlang$frostc$parser$Token$Kind $tmp1522 = $tmp1521.kind;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp1523;
$tmp1523 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp1523->value = $tmp1522;
frost$core$Int64 $tmp1524 = (frost$core$Int64) {0u};
// begin inline call to org.frostlang.frostc.parser.Token.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.parser.Token.Kind from Markdown.frost:603:47
// /Users/ethannicholas/Dropbox/Frost-Int/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Int64* $tmp1525 = &(&local8)->$rawValue;
*$tmp1525 = $tmp1524;
org$frostlang$frostc$parser$Token$Kind $tmp1526 = *(&local8);
*(&local7) = $tmp1526;
org$frostlang$frostc$parser$Token$Kind $tmp1527 = *(&local7);
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp1528;
$tmp1528 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp1528->value = $tmp1527;
ITable* $tmp1529 = ((frost$core$Equatable*) $tmp1523)->$class->itable;
while ($tmp1529->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1529 = $tmp1529->next;
}
$fn1531 $tmp1530 = $tmp1529->methods[1];
frost$core$Bit $tmp1532 = $tmp1530(((frost$core$Equatable*) $tmp1523), ((frost$core$Equatable*) $tmp1528));
bool $tmp1533 = $tmp1532.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1528)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1523)));
if ($tmp1533) goto block43; else goto block42;
block43:;
frost$threads$MessageQueue** $tmp1534 = &param0->errorQueue;
frost$threads$MessageQueue* $tmp1535 = *$tmp1534;
// begin inline call to method frost.threads.MessageQueue.pendingMessages():frost.core.Int64 from Markdown.frost:603:80
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/threads/MessageQueue.frost:76
FROST_ASSERT(24 == sizeof(frost$threads$ScopedLock));
frost$threads$ScopedLock* $tmp1536 = (frost$threads$ScopedLock*) frostObjectAlloc(24, (frost$core$Class*) &frost$threads$ScopedLock$class);
frost$threads$Lock** $tmp1537 = &$tmp1535->lock;
frost$threads$Lock* $tmp1538 = *$tmp1537;
frost$threads$ScopedLock$init$frost$threads$Lock($tmp1536, $tmp1538);
*(&local9) = ((frost$threads$ScopedLock*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1536));
frost$threads$ScopedLock* $tmp1539 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1539));
*(&local9) = $tmp1536;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1536));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/threads/MessageQueue.frost:77
frost$core$Int64* $tmp1540 = &$tmp1535->count;
frost$core$Int64 $tmp1541 = *$tmp1540;
frost$threads$ScopedLock* $tmp1542 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1542));
*(&local9) = ((frost$threads$ScopedLock*) NULL);
frost$core$Int64 $tmp1543 = (frost$core$Int64) {0u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Markdown.frost:603:83
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp1544 = $tmp1541.value;
int64_t $tmp1545 = $tmp1543.value;
bool $tmp1546 = $tmp1544 == $tmp1545;
frost$core$Bit $tmp1547 = (frost$core$Bit) {$tmp1546};
bool $tmp1548 = $tmp1547.value;
if ($tmp1548) goto block41; else goto block42;
block41:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:604
org$frostlang$frostc$parser$Parser** $tmp1549 = &param0->parser;
org$frostlang$frostc$parser$Parser* $tmp1550 = *$tmp1549;
org$frostlang$frostc$ASTNode* $tmp1551 = org$frostlang$frostc$parser$Parser$expression$R$org$frostlang$frostc$ASTNode$Q($tmp1550);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1551));
goto block40;
block42:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:606
frost$threads$MessageQueue** $tmp1552 = &param0->errorQueue;
frost$threads$MessageQueue* $tmp1553 = *$tmp1552;
// begin inline call to method frost.threads.MessageQueue.pendingMessages():frost.core.Int64 from Markdown.frost:606:38
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/threads/MessageQueue.frost:76
FROST_ASSERT(24 == sizeof(frost$threads$ScopedLock));
frost$threads$ScopedLock* $tmp1554 = (frost$threads$ScopedLock*) frostObjectAlloc(24, (frost$core$Class*) &frost$threads$ScopedLock$class);
frost$threads$Lock** $tmp1555 = &$tmp1553->lock;
frost$threads$Lock* $tmp1556 = *$tmp1555;
frost$threads$ScopedLock$init$frost$threads$Lock($tmp1554, $tmp1556);
*(&local10) = ((frost$threads$ScopedLock*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1554));
frost$threads$ScopedLock* $tmp1557 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1557));
*(&local10) = $tmp1554;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1554));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/threads/MessageQueue.frost:77
frost$core$Int64* $tmp1558 = &$tmp1553->count;
frost$core$Int64 $tmp1559 = *$tmp1558;
frost$threads$ScopedLock* $tmp1560 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1560));
*(&local10) = ((frost$threads$ScopedLock*) NULL);
frost$core$Int64 $tmp1561 = (frost$core$Int64) {0u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Markdown.frost:606:41
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp1562 = $tmp1559.value;
int64_t $tmp1563 = $tmp1561.value;
bool $tmp1564 = $tmp1562 == $tmp1563;
frost$core$Bit $tmp1565 = (frost$core$Bit) {$tmp1564};
bool $tmp1566 = $tmp1565.value;
if ($tmp1566) goto block55; else goto block56;
block55:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:607
frost$core$Bit $tmp1567 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$MutableString$Index$Q$GT $tmp1568 = frost$core$Range$LTfrost$core$MutableString$Index$Q$GT$init$frost$core$MutableString$Index$Q$frost$core$MutableString$Index$Q$frost$core$Bit(((frost$core$MutableString$Index$nullable) { .nonnull = false }), ((frost$core$MutableString$Index$nullable) { .nonnull = false }), $tmp1567);
org$frostlang$frostc$parser$Parser** $tmp1569 = &param0->parser;
org$frostlang$frostc$parser$Parser* $tmp1570 = *$tmp1569;
$fn1572 $tmp1571 = ($fn1572) param0->$class->vtable[16];
frost$core$String* $tmp1573 = $tmp1571(param0, $tmp1570);
frost$core$MutableString$$IDXEQ$frost$core$Range$LTfrost$core$MutableString$Index$Q$GT$frost$core$String(param1, $tmp1568, $tmp1573);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1573));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:608
org$frostlang$frostc$ASTNode* $tmp1574 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1574));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp1575 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1575));
*(&local0) = ((frost$core$String*) NULL);
return;
block56:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:611
frost$threads$MessageQueue** $tmp1576 = &param0->errorQueue;
frost$threads$MessageQueue* $tmp1577 = *$tmp1576;
// begin inline call to method frost.threads.MessageQueue.clear() from Markdown.frost:611:25
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/threads/MessageQueue.frost:116
goto block60;
block60:;
// begin inline call to method frost.threads.MessageQueue.hasMessage():frost.core.Bit from MessageQueue.frost:116:25
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/threads/MessageQueue.frost:89
frost$core$Int64 $tmp1578 = frost$threads$MessageQueue$pendingMessages$R$frost$core$Int64($tmp1577);
frost$core$Int64 $tmp1579 = (frost$core$Int64) {0u};
int64_t $tmp1580 = $tmp1578.value;
int64_t $tmp1581 = $tmp1579.value;
bool $tmp1582 = $tmp1580 > $tmp1581;
frost$core$Bit $tmp1583 = (frost$core$Bit) {$tmp1582};
bool $tmp1584 = $tmp1583.value;
if ($tmp1584) goto block61; else goto block62;
block61:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/threads/MessageQueue.frost:117
frost$core$Immutable* $tmp1585 = frost$threads$MessageQueue$getMessage$R$frost$threads$MessageQueue$T($tmp1577);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1585));
goto block60;
block62:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:612
org$frostlang$frostc$parser$Parser** $tmp1586 = &param0->parser;
org$frostlang$frostc$parser$Parser* $tmp1587 = *$tmp1586;
frost$io$File** $tmp1588 = &param0->source;
frost$io$File* $tmp1589 = *$tmp1588;
frost$core$Int64 $tmp1590 = (frost$core$Int64) {18446744073709551615u};
frost$core$String* $tmp1591 = *(&local0);
org$frostlang$frostc$parser$Parser$start$frost$io$File$frost$core$Int64$frost$core$String($tmp1587, $tmp1589, $tmp1590, $tmp1591);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:613
goto block64;
block64:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:614
org$frostlang$frostc$parser$Parser** $tmp1592 = &param0->parser;
org$frostlang$frostc$parser$Parser* $tmp1593 = *$tmp1592;
org$frostlang$frostc$parser$Token $tmp1594 = org$frostlang$frostc$parser$Parser$next$R$org$frostlang$frostc$parser$Token($tmp1593);
*(&local11) = $tmp1594;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:615
org$frostlang$frostc$parser$Token $tmp1595 = *(&local11);
org$frostlang$frostc$parser$Token$Kind $tmp1596 = $tmp1595.kind;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp1597;
$tmp1597 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp1597->value = $tmp1596;
frost$core$Int64 $tmp1598 = (frost$core$Int64) {0u};
// begin inline call to org.frostlang.frostc.parser.Token.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.parser.Token.Kind from Markdown.frost:615:38
// /Users/ethannicholas/Dropbox/Frost-Int/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Int64* $tmp1599 = &(&local13)->$rawValue;
*$tmp1599 = $tmp1598;
org$frostlang$frostc$parser$Token$Kind $tmp1600 = *(&local13);
*(&local12) = $tmp1600;
org$frostlang$frostc$parser$Token$Kind $tmp1601 = *(&local12);
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp1602;
$tmp1602 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp1602->value = $tmp1601;
ITable* $tmp1603 = ((frost$core$Equatable*) $tmp1597)->$class->itable;
while ($tmp1603->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1603 = $tmp1603->next;
}
$fn1605 $tmp1604 = $tmp1603->methods[0];
frost$core$Bit $tmp1606 = $tmp1604(((frost$core$Equatable*) $tmp1597), ((frost$core$Equatable*) $tmp1602));
bool $tmp1607 = $tmp1606.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1602)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1597)));
if ($tmp1607) goto block66; else goto block67;
block66:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:616
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:619
frost$core$Bit $tmp1608 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$MutableString$Index$Q$GT $tmp1609 = frost$core$Range$LTfrost$core$MutableString$Index$Q$GT$init$frost$core$MutableString$Index$Q$frost$core$MutableString$Index$Q$frost$core$Bit(((frost$core$MutableString$Index$nullable) { .nonnull = false }), ((frost$core$MutableString$Index$nullable) { .nonnull = false }), $tmp1608);
org$frostlang$frostc$parser$Parser** $tmp1610 = &param0->parser;
org$frostlang$frostc$parser$Parser* $tmp1611 = *$tmp1610;
$fn1613 $tmp1612 = ($fn1613) param0->$class->vtable[16];
frost$core$String* $tmp1614 = $tmp1612(param0, $tmp1611);
frost$core$MutableString$$IDXEQ$frost$core$Range$LTfrost$core$MutableString$Index$Q$GT$frost$core$String(param1, $tmp1609, $tmp1614);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1614));
org$frostlang$frostc$ASTNode* $tmp1615 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1615));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp1616 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1616));
*(&local0) = ((frost$core$String*) NULL);
return;
block67:;
goto block64;

}
void org$frostlang$frostc$frostdoc$Markdown$encodeCode$frost$core$MutableString(org$frostlang$frostc$frostdoc$Markdown* param0, frost$core$MutableString* param1) {

frost$core$Matcher* local0 = NULL;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:625
FROST_ASSERT(24 == sizeof(frost$core$RegularExpression));
frost$core$RegularExpression* $tmp1617 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp1617, &$s1618);
// begin inline call to method frost.core.MutableString.replace(search:frost.core.RegularExpression, replacement:frost.core.String) from Markdown.frost:625:19
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:401
frost$core$Bit $tmp1619 = (frost$core$Bit) {true};
// begin inline call to method frost.core.MutableString.replace(search:frost.core.RegularExpression, replacement:frost.core.String, allowGroupReferences:frost.core.Bit) from MutableString.frost:401:16
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:406
$fn1621 $tmp1620 = ($fn1621) ((frost$core$Object*) param1)->$class->vtable[0];
frost$core$String* $tmp1622 = $tmp1620(((frost$core$Object*) param1));
frost$core$Matcher* $tmp1623 = frost$core$RegularExpression$matcher$frost$core$String$R$frost$core$Matcher($tmp1617, $tmp1622);
*(&local0) = ((frost$core$Matcher*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1623));
frost$core$Matcher* $tmp1624 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1624));
*(&local0) = $tmp1623;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1623));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1622));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:407
frost$core$MutableString$clear(param1);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:408
goto block3;
block3:;
frost$core$Matcher* $tmp1625 = *(&local0);
frost$core$Bit $tmp1626 = frost$core$Matcher$find$R$frost$core$Bit($tmp1625);
bool $tmp1627 = $tmp1626.value;
if ($tmp1627) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:409
frost$core$Matcher* $tmp1628 = *(&local0);
frost$core$Matcher$appendReplacement$frost$core$MutableString$frost$core$String$frost$core$Bit($tmp1628, param1, &$s1629, $tmp1619);
goto block3;
block5:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:411
frost$core$Matcher* $tmp1630 = *(&local0);
frost$core$Matcher$appendTail$frost$core$MutableString($tmp1630, param1);
frost$core$Matcher* $tmp1631 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1631));
*(&local0) = ((frost$core$Matcher*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1617));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:626
$fn1633 $tmp1632 = ($fn1633) param0->$class->vtable[17];
$tmp1632(param0, param1);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:627
frost$core$MutableString$replace$frost$core$String$frost$core$String(param1, &$s1634, &$s1635);
return;

}
void org$frostlang$frostc$frostdoc$Markdown$doLists$frost$core$MutableString(org$frostlang$frostc$frostdoc$Markdown* param0, frost$core$MutableString* param1) {

frost$core$Int64 local0;
frost$core$String* local1 = NULL;
frost$core$RegularExpression* local2 = NULL;
frost$core$RegularExpression* local3 = NULL;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:631
frost$core$Int64 $tmp1636 = (frost$core$Int64) {4u};
frost$core$Int64 $tmp1637 = (frost$core$Int64) {1u};
int64_t $tmp1638 = $tmp1636.value;
int64_t $tmp1639 = $tmp1637.value;
int64_t $tmp1640 = $tmp1638 - $tmp1639;
frost$core$Int64 $tmp1641 = (frost$core$Int64) {$tmp1640};
*(&local0) = $tmp1641;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:633
frost$core$Int64 $tmp1642 = *(&local0);
frost$core$Int64$wrapper* $tmp1643;
$tmp1643 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp1643->value = $tmp1642;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Markdown.frost:634:17
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:560
$fn1645 $tmp1644 = ($fn1645) ((frost$core$Object*) $tmp1643)->$class->vtable[0];
frost$core$String* $tmp1646 = $tmp1644(((frost$core$Object*) $tmp1643));
frost$core$String* $tmp1647 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1648, $tmp1646);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1647));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1647));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1646));
frost$core$String* $tmp1649 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1647, &$s1650);
frost$core$String* $tmp1651 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1649, &$s1652);
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1651));
frost$core$String* $tmp1653 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1653));
*(&local1) = $tmp1651;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1651));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1649));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1647));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1643));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:656
frost$core$Int64* $tmp1654 = &param0->listLevel;
frost$core$Int64 $tmp1655 = *$tmp1654;
frost$core$Int64 $tmp1656 = (frost$core$Int64) {0u};
int64_t $tmp1657 = $tmp1655.value;
int64_t $tmp1658 = $tmp1656.value;
bool $tmp1659 = $tmp1657 > $tmp1658;
frost$core$Bit $tmp1660 = (frost$core$Bit) {$tmp1659};
bool $tmp1661 = $tmp1660.value;
if ($tmp1661) goto block2; else goto block4;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:657
FROST_ASSERT(24 == sizeof(frost$core$RegularExpression));
frost$core$RegularExpression* $tmp1662 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$String* $tmp1663 = *(&local1);
frost$core$String* $tmp1664 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1665, $tmp1663);
frost$core$String* $tmp1666 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1664, &$s1667);
frost$core$RegularExpression$init$frost$core$String($tmp1662, $tmp1666);
*(&local2) = ((frost$core$RegularExpression*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1662));
frost$core$RegularExpression* $tmp1668 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1668));
*(&local2) = $tmp1662;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1666));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1664));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1662));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:658
frost$core$RegularExpression* $tmp1669 = *(&local2);
FROST_ASSERT(24 == sizeof(org$frostlang$frostc$frostdoc$Markdown$_Closure14));
org$frostlang$frostc$frostdoc$Markdown$_Closure14* $tmp1670 = (org$frostlang$frostc$frostdoc$Markdown$_Closure14*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$frostdoc$Markdown$_Closure14$class);
org$frostlang$frostc$frostdoc$Markdown$_Closure14$init$org$frostlang$frostc$frostdoc$Markdown($tmp1670, param0);
FROST_ASSERT(32 == sizeof(frost$core$MutableMethod));
frost$core$MutableMethod* $tmp1672 = (frost$core$MutableMethod*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$MutableMethod$class);
// begin inline call to frost.core.MutableMethod.init(pointer:frost.unsafe.Pointer<frost.core.Int8>, target:frost.core.Object?) from Markdown.frost:658:44
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableMethod.frost:32
frost$core$Int8** $tmp1673 = &$tmp1672->pointer;
*$tmp1673 = ((frost$core$Int8*) org$frostlang$frostc$frostdoc$Markdown$_Closure14$$anonymous13$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$Object);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableMethod.frost:33
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1670));
frost$core$Object** $tmp1674 = &$tmp1672->target;
frost$core$Object* $tmp1675 = *$tmp1674;
frost$core$Frost$unref$frost$core$Object$Q($tmp1675);
frost$core$Object** $tmp1676 = &$tmp1672->target;
*$tmp1676 = ((frost$core$Object*) $tmp1670);
frost$core$MutableString$replace$frost$core$RegularExpression$$LPfrost$collections$ListView$LTfrost$core$String$Q$GT$RP$EQ$GT$LPfrost$core$Object$RP(param1, $tmp1669, $tmp1672);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1672));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1670));
frost$core$RegularExpression* $tmp1677 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1677));
*(&local2) = ((frost$core$RegularExpression*) NULL);
goto block3;
block4:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:684
FROST_ASSERT(24 == sizeof(frost$core$RegularExpression));
frost$core$RegularExpression* $tmp1678 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$String* $tmp1679 = *(&local1);
frost$core$String* $tmp1680 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1681, $tmp1679);
frost$core$RegularExpression$init$frost$core$String($tmp1678, $tmp1680);
*(&local3) = ((frost$core$RegularExpression*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1678));
frost$core$RegularExpression* $tmp1682 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1682));
*(&local3) = $tmp1678;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1680));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1678));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:685
frost$core$RegularExpression* $tmp1683 = *(&local3);
FROST_ASSERT(24 == sizeof(org$frostlang$frostc$frostdoc$Markdown$_Closure16));
org$frostlang$frostc$frostdoc$Markdown$_Closure16* $tmp1684 = (org$frostlang$frostc$frostdoc$Markdown$_Closure16*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$frostdoc$Markdown$_Closure16$class);
org$frostlang$frostc$frostdoc$Markdown$_Closure16$init$org$frostlang$frostc$frostdoc$Markdown($tmp1684, param0);
FROST_ASSERT(32 == sizeof(frost$core$MutableMethod));
frost$core$MutableMethod* $tmp1686 = (frost$core$MutableMethod*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$MutableMethod$class);
// begin inline call to frost.core.MutableMethod.init(pointer:frost.unsafe.Pointer<frost.core.Int8>, target:frost.core.Object?) from Markdown.frost:685:44
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableMethod.frost:32
frost$core$Int8** $tmp1687 = &$tmp1686->pointer;
*$tmp1687 = ((frost$core$Int8*) org$frostlang$frostc$frostdoc$Markdown$_Closure16$$anonymous15$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$Object);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableMethod.frost:33
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1684));
frost$core$Object** $tmp1688 = &$tmp1686->target;
frost$core$Object* $tmp1689 = *$tmp1688;
frost$core$Frost$unref$frost$core$Object$Q($tmp1689);
frost$core$Object** $tmp1690 = &$tmp1686->target;
*$tmp1690 = ((frost$core$Object*) $tmp1684);
frost$core$MutableString$replace$frost$core$RegularExpression$$LPfrost$collections$ListView$LTfrost$core$String$Q$GT$RP$EQ$GT$LPfrost$core$Object$RP(param1, $tmp1683, $tmp1686);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1686));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1684));
frost$core$RegularExpression* $tmp1691 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1691));
*(&local3) = ((frost$core$RegularExpression*) NULL);
goto block3;
block3:;
frost$core$String* $tmp1692 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1692));
*(&local1) = ((frost$core$String*) NULL);
return;

}
frost$core$String* org$frostlang$frostc$frostdoc$Markdown$processListItems$frost$core$String$R$frost$core$String(org$frostlang$frostc$frostdoc$Markdown* param0, frost$core$String* param1) {

frost$core$String* local0 = NULL;
frost$core$RegularExpression* local1 = NULL;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:726
frost$core$Int64* $tmp1693 = &param0->listLevel;
frost$core$Int64 $tmp1694 = *$tmp1693;
frost$core$Int64 $tmp1695 = (frost$core$Int64) {1u};
int64_t $tmp1696 = $tmp1694.value;
int64_t $tmp1697 = $tmp1695.value;
int64_t $tmp1698 = $tmp1696 + $tmp1697;
frost$core$Int64 $tmp1699 = (frost$core$Int64) {$tmp1698};
frost$core$Int64* $tmp1700 = &param0->listLevel;
*$tmp1700 = $tmp1699;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:729
FROST_ASSERT(24 == sizeof(frost$core$RegularExpression));
frost$core$RegularExpression* $tmp1701 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp1701, &$s1702);
// begin inline call to function frost.core.String.replace(search:frost.core.RegularExpression, replacement:frost.core.String):frost.core.String from Markdown.frost:729:36
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1120
frost$core$Bit $tmp1703 = (frost$core$Bit) {true};
frost$core$String* $tmp1704 = frost$core$String$replace$frost$core$RegularExpression$frost$core$String$frost$core$Bit$R$frost$core$String(param1, $tmp1701, &$s1705, $tmp1703);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1704));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1704));
*(&local0) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1704));
frost$core$String* $tmp1706 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1706));
*(&local0) = $tmp1704;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1704));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1701));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:731
FROST_ASSERT(24 == sizeof(frost$core$RegularExpression));
frost$core$RegularExpression* $tmp1707 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$String* $tmp1708 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1709, &$s1710);
frost$core$String* $tmp1711 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1708, &$s1712);
frost$core$Int64 $tmp1713 = (frost$core$Int64) {1u};
frost$core$RegularExpression$init$frost$core$String$frost$core$Int64($tmp1707, $tmp1711, $tmp1713);
*(&local1) = ((frost$core$RegularExpression*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1707));
frost$core$RegularExpression* $tmp1714 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1714));
*(&local1) = $tmp1707;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1711));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1708));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1707));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:736
frost$core$String* $tmp1715 = *(&local0);
frost$core$RegularExpression* $tmp1716 = *(&local1);
FROST_ASSERT(24 == sizeof(org$frostlang$frostc$frostdoc$Markdown$_Closure18));
org$frostlang$frostc$frostdoc$Markdown$_Closure18* $tmp1717 = (org$frostlang$frostc$frostdoc$Markdown$_Closure18*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$frostdoc$Markdown$_Closure18$class);
org$frostlang$frostc$frostdoc$Markdown$_Closure18$init$org$frostlang$frostc$frostdoc$Markdown($tmp1717, param0);
FROST_ASSERT(32 == sizeof(frost$core$MutableMethod));
frost$core$MutableMethod* $tmp1719 = (frost$core$MutableMethod*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$MutableMethod$class);
// begin inline call to frost.core.MutableMethod.init(pointer:frost.unsafe.Pointer<frost.core.Int8>, target:frost.core.Object?) from Markdown.frost:736:33
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableMethod.frost:32
frost$core$Int8** $tmp1720 = &$tmp1719->pointer;
*$tmp1720 = ((frost$core$Int8*) org$frostlang$frostc$frostdoc$Markdown$_Closure18$$anonymous17$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$String);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableMethod.frost:33
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1717));
frost$core$Object** $tmp1721 = &$tmp1719->target;
frost$core$Object* $tmp1722 = *$tmp1721;
frost$core$Frost$unref$frost$core$Object$Q($tmp1722);
frost$core$Object** $tmp1723 = &$tmp1719->target;
*$tmp1723 = ((frost$core$Object*) $tmp1717);
frost$core$String* $tmp1724 = frost$core$String$replace$frost$core$RegularExpression$$LPfrost$collections$ListView$LTfrost$core$String$Q$GT$RP$EQ$GT$LPfrost$core$Object$RP$R$frost$core$String($tmp1715, $tmp1716, $tmp1719);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1724));
frost$core$String* $tmp1725 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1725));
*(&local0) = $tmp1724;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1724));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1719));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1717));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:753
frost$core$Int64* $tmp1726 = &param0->listLevel;
frost$core$Int64 $tmp1727 = *$tmp1726;
frost$core$Int64 $tmp1728 = (frost$core$Int64) {1u};
int64_t $tmp1729 = $tmp1727.value;
int64_t $tmp1730 = $tmp1728.value;
int64_t $tmp1731 = $tmp1729 - $tmp1730;
frost$core$Int64 $tmp1732 = (frost$core$Int64) {$tmp1731};
frost$core$Int64* $tmp1733 = &param0->listLevel;
*$tmp1733 = $tmp1732;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:754
frost$core$String* $tmp1734 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1734));
frost$core$RegularExpression* $tmp1735 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1735));
*(&local1) = ((frost$core$RegularExpression*) NULL);
frost$core$String* $tmp1736 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1736));
*(&local0) = ((frost$core$String*) NULL);
return $tmp1734;

}
frost$core$Bit org$frostlang$frostc$frostdoc$Markdown$hasParagraphBreak$frost$core$MutableString$R$frost$core$Bit(frost$core$MutableString* param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:759
// begin inline call to function frost.core.MutableString.contains(s:frost.core.String):frost.core.Bit from Markdown.frost:759:29
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:298
// begin inline call to function frost.core.MutableString.indexOf(s:frost.core.String):frost.core.MutableString.Index? from MutableString.frost:298:23
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:256
frost$core$MutableString$Index $tmp1737 = frost$core$MutableString$get_start$R$frost$core$MutableString$Index(param0);
frost$core$MutableString$Index$nullable $tmp1738 = frost$core$MutableString$indexOf$frost$core$String$frost$core$MutableString$Index$R$frost$core$MutableString$Index$Q(param0, &$s1739, $tmp1737);
frost$core$Bit $tmp1740 = (frost$core$Bit) {$tmp1738.nonnull};
return $tmp1740;

}
frost$core$Bit org$frostlang$frostc$frostdoc$Markdown$isEmptyString$frost$core$String$Q$R$frost$core$Bit(frost$core$String* param0) {

frost$core$Bit local0;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:764
frost$core$Bit $tmp1741 = (frost$core$Bit) {param0 == NULL};
bool $tmp1742 = $tmp1741.value;
if ($tmp1742) goto block1; else goto block2;
block1:;
*(&local0) = $tmp1741;
goto block3;
block2:;
frost$core$Bit $tmp1743 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(param0, &$s1744);
*(&local0) = $tmp1743;
goto block3;
block3:;
frost$core$Bit $tmp1745 = *(&local0);
return $tmp1745;

}
void org$frostlang$frostc$frostdoc$Markdown$doHeaders$frost$core$MutableString(org$frostlang$frostc$frostdoc$Markdown* param0, frost$core$MutableString* param1) {

frost$core$RegularExpression* local0 = NULL;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:769
FROST_ASSERT(24 == sizeof(frost$core$RegularExpression));
frost$core$RegularExpression* $tmp1746 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp1746, &$s1747);
FROST_ASSERT(24 == sizeof(org$frostlang$frostc$frostdoc$Markdown$_Closure20));
org$frostlang$frostc$frostdoc$Markdown$_Closure20* $tmp1748 = (org$frostlang$frostc$frostdoc$Markdown$_Closure20*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$frostdoc$Markdown$_Closure20$class);
org$frostlang$frostc$frostdoc$Markdown$_Closure20$init$org$frostlang$frostc$frostdoc$Markdown($tmp1748, param0);
FROST_ASSERT(32 == sizeof(frost$core$MutableMethod));
frost$core$MutableMethod* $tmp1750 = (frost$core$MutableMethod*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$MutableMethod$class);
// begin inline call to frost.core.MutableMethod.init(pointer:frost.unsafe.Pointer<frost.core.Int8>, target:frost.core.Object?) from Markdown.frost:769:46
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableMethod.frost:32
frost$core$Int8** $tmp1751 = &$tmp1750->pointer;
*$tmp1751 = ((frost$core$Int8*) org$frostlang$frostc$frostdoc$Markdown$_Closure20$$anonymous19$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$String);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableMethod.frost:33
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1748));
frost$core$Object** $tmp1752 = &$tmp1750->target;
frost$core$Object* $tmp1753 = *$tmp1752;
frost$core$Frost$unref$frost$core$Object$Q($tmp1753);
frost$core$Object** $tmp1754 = &$tmp1750->target;
*$tmp1754 = ((frost$core$Object*) $tmp1748);
frost$core$MutableString$replace$frost$core$RegularExpression$$LPfrost$collections$ListView$LTfrost$core$String$Q$GT$RP$EQ$GT$LPfrost$core$Object$RP(param1, $tmp1746, $tmp1750);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1750));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1748));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1746));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:774
FROST_ASSERT(24 == sizeof(frost$core$RegularExpression));
frost$core$RegularExpression* $tmp1755 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp1755, &$s1756);
FROST_ASSERT(24 == sizeof(org$frostlang$frostc$frostdoc$Markdown$_Closure22));
org$frostlang$frostc$frostdoc$Markdown$_Closure22* $tmp1757 = (org$frostlang$frostc$frostdoc$Markdown$_Closure22*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$frostdoc$Markdown$_Closure22$class);
org$frostlang$frostc$frostdoc$Markdown$_Closure22$init$org$frostlang$frostc$frostdoc$Markdown($tmp1757, param0);
FROST_ASSERT(32 == sizeof(frost$core$MutableMethod));
frost$core$MutableMethod* $tmp1759 = (frost$core$MutableMethod*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$MutableMethod$class);
// begin inline call to frost.core.MutableMethod.init(pointer:frost.unsafe.Pointer<frost.core.Int8>, target:frost.core.Object?) from Markdown.frost:774:46
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableMethod.frost:32
frost$core$Int8** $tmp1760 = &$tmp1759->pointer;
*$tmp1760 = ((frost$core$Int8*) org$frostlang$frostc$frostdoc$Markdown$_Closure22$$anonymous21$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$String);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableMethod.frost:33
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1757));
frost$core$Object** $tmp1761 = &$tmp1759->target;
frost$core$Object* $tmp1762 = *$tmp1761;
frost$core$Frost$unref$frost$core$Object$Q($tmp1762);
frost$core$Object** $tmp1763 = &$tmp1759->target;
*$tmp1763 = ((frost$core$Object*) $tmp1757);
frost$core$MutableString$replace$frost$core$RegularExpression$$LPfrost$collections$ListView$LTfrost$core$String$Q$GT$RP$EQ$GT$LPfrost$core$Object$RP(param1, $tmp1755, $tmp1759);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1759));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1757));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1755));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:781
FROST_ASSERT(24 == sizeof(frost$core$RegularExpression));
frost$core$RegularExpression* $tmp1764 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$Int64 $tmp1765 = (frost$core$Int64) {1u};
frost$core$RegularExpression$init$frost$core$String$frost$core$Int64($tmp1764, &$s1766, $tmp1765);
*(&local0) = ((frost$core$RegularExpression*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1764));
frost$core$RegularExpression* $tmp1767 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1767));
*(&local0) = $tmp1764;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1764));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:782
frost$core$RegularExpression* $tmp1768 = *(&local0);
FROST_ASSERT(24 == sizeof(org$frostlang$frostc$frostdoc$Markdown$_Closure24));
org$frostlang$frostc$frostdoc$Markdown$_Closure24* $tmp1769 = (org$frostlang$frostc$frostdoc$Markdown$_Closure24*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$frostdoc$Markdown$_Closure24$class);
org$frostlang$frostc$frostdoc$Markdown$_Closure24$init$org$frostlang$frostc$frostdoc$Markdown($tmp1769, param0);
FROST_ASSERT(32 == sizeof(frost$core$MutableMethod));
frost$core$MutableMethod* $tmp1771 = (frost$core$MutableMethod*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$MutableMethod$class);
// begin inline call to frost.core.MutableMethod.init(pointer:frost.unsafe.Pointer<frost.core.Int8>, target:frost.core.Object?) from Markdown.frost:782:27
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableMethod.frost:32
frost$core$Int8** $tmp1772 = &$tmp1771->pointer;
*$tmp1772 = ((frost$core$Int8*) org$frostlang$frostc$frostdoc$Markdown$_Closure24$$anonymous23$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$Object);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableMethod.frost:33
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1769));
frost$core$Object** $tmp1773 = &$tmp1771->target;
frost$core$Object* $tmp1774 = *$tmp1773;
frost$core$Frost$unref$frost$core$Object$Q($tmp1774);
frost$core$Object** $tmp1775 = &$tmp1771->target;
*$tmp1775 = ((frost$core$Object*) $tmp1769);
frost$core$MutableString$replace$frost$core$RegularExpression$$LPfrost$collections$ListView$LTfrost$core$String$Q$GT$RP$EQ$GT$LPfrost$core$Object$RP(param1, $tmp1768, $tmp1771);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1771));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1769));
frost$core$RegularExpression* $tmp1776 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1776));
*(&local0) = ((frost$core$RegularExpression*) NULL);
return;

}
void org$frostlang$frostc$frostdoc$Markdown$runSpanGamut$frost$core$MutableString(org$frostlang$frostc$frostdoc$Markdown* param0, frost$core$MutableString* param1) {

frost$core$Matcher* local0 = NULL;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:793
$fn1778 $tmp1777 = ($fn1778) param0->$class->vtable[24];
$tmp1777(param0, param1);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:794
$fn1780 $tmp1779 = ($fn1780) param0->$class->vtable[29];
$tmp1779(param0, param1);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:795
$fn1782 $tmp1781 = ($fn1782) param0->$class->vtable[3];
$tmp1781(param0, param1);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:797
$fn1784 $tmp1783 = ($fn1784) param0->$class->vtable[25];
$tmp1783(param0, param1);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:798
$fn1786 $tmp1785 = ($fn1786) param0->$class->vtable[26];
$tmp1785(param0, param1);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:799
$fn1788 $tmp1787 = ($fn1788) param0->$class->vtable[10];
$tmp1787(param0, param1);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:805
$fn1790 $tmp1789 = ($fn1790) param0->$class->vtable[24];
$tmp1789(param0, param1);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:807
$fn1792 $tmp1791 = ($fn1792) param0->$class->vtable[28];
$tmp1791(param0, param1);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:808
$fn1794 $tmp1793 = ($fn1794) param0->$class->vtable[27];
$tmp1793(param0, param1);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:810
FROST_ASSERT(24 == sizeof(frost$core$RegularExpression));
frost$core$RegularExpression* $tmp1795 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp1795, &$s1796);
// begin inline call to method frost.core.MutableString.replace(search:frost.core.RegularExpression, replacement:frost.core.String) from Markdown.frost:810:21
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:401
frost$core$Bit $tmp1797 = (frost$core$Bit) {true};
// begin inline call to method frost.core.MutableString.replace(search:frost.core.RegularExpression, replacement:frost.core.String, allowGroupReferences:frost.core.Bit) from MutableString.frost:401:16
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:406
$fn1799 $tmp1798 = ($fn1799) ((frost$core$Object*) param1)->$class->vtable[0];
frost$core$String* $tmp1800 = $tmp1798(((frost$core$Object*) param1));
frost$core$Matcher* $tmp1801 = frost$core$RegularExpression$matcher$frost$core$String$R$frost$core$Matcher($tmp1795, $tmp1800);
*(&local0) = ((frost$core$Matcher*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1801));
frost$core$Matcher* $tmp1802 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1802));
*(&local0) = $tmp1801;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1801));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1800));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:407
frost$core$MutableString$clear(param1);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:408
goto block3;
block3:;
frost$core$Matcher* $tmp1803 = *(&local0);
frost$core$Bit $tmp1804 = frost$core$Matcher$find$R$frost$core$Bit($tmp1803);
bool $tmp1805 = $tmp1804.value;
if ($tmp1805) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:409
frost$core$Matcher* $tmp1806 = *(&local0);
frost$core$Matcher$appendReplacement$frost$core$MutableString$frost$core$String$frost$core$Bit($tmp1806, param1, &$s1807, $tmp1797);
goto block3;
block5:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:411
frost$core$Matcher* $tmp1808 = *(&local0);
frost$core$Matcher$appendTail$frost$core$MutableString($tmp1808, param1);
frost$core$Matcher* $tmp1809 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1809));
*(&local0) = ((frost$core$Matcher*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1795));
return;

}
frost$core$String* org$frostlang$frostc$frostdoc$Markdown$nestedTagsRegex$frost$core$Int64$R$frost$core$String(frost$core$Int64 param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:820
frost$core$Int64 $tmp1810 = (frost$core$Int64) {0u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Markdown.frost:820:18
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp1811 = param0.value;
int64_t $tmp1812 = $tmp1810.value;
bool $tmp1813 = $tmp1811 == $tmp1812;
frost$core$Bit $tmp1814 = (frost$core$Bit) {$tmp1813};
bool $tmp1815 = $tmp1814.value;
if ($tmp1815) goto block1; else goto block3;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:821
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1816));
return &$s1817;
block3:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:824
frost$core$Int64 $tmp1818 = (frost$core$Int64) {1u};
int64_t $tmp1819 = param0.value;
int64_t $tmp1820 = $tmp1818.value;
int64_t $tmp1821 = $tmp1819 - $tmp1820;
frost$core$Int64 $tmp1822 = (frost$core$Int64) {$tmp1821};
frost$core$String* $tmp1823 = org$frostlang$frostc$frostdoc$Markdown$nestedTagsRegex$frost$core$Int64$R$frost$core$String($tmp1822);
frost$core$String* $tmp1824 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1825, $tmp1823);
frost$core$String* $tmp1826 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1824, &$s1827);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1826));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1826));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1824));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1823));
return $tmp1826;
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
frost$collections$Array* $tmp1828 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp1828);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1828));
frost$collections$Array* $tmp1829 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1829));
*(&local0) = $tmp1828;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1828));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:830
frost$core$Int64 $tmp1830 = (frost$core$Int64) {6u};
frost$core$String* $tmp1831 = org$frostlang$frostc$frostdoc$Markdown$nestedTagsRegex$frost$core$Int64$R$frost$core$String($tmp1830);
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1831));
frost$core$String* $tmp1832 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1832));
*(&local1) = $tmp1831;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1831));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:832
FROST_ASSERT(24 == sizeof(frost$core$RegularExpression));
frost$core$RegularExpression* $tmp1833 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$String* $tmp1834 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1835, &$s1836);
frost$core$String* $tmp1837 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1834, &$s1838);
frost$core$String* $tmp1839 = *(&local1);
frost$core$String* $tmp1840 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1837, $tmp1839);
frost$core$Int64 $tmp1841 = (frost$core$Int64) {2u};
frost$core$RegularExpression$init$frost$core$String$frost$core$Int64($tmp1833, $tmp1840, $tmp1841);
*(&local2) = ((frost$core$RegularExpression*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1833));
frost$core$RegularExpression* $tmp1842 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1842));
*(&local2) = $tmp1833;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1840));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1837));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1834));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1833));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:840
frost$core$RegularExpression* $tmp1843 = *(&local2);
frost$core$Matcher* $tmp1844 = frost$core$RegularExpression$matcher$frost$core$String$R$frost$core$Matcher($tmp1843, param1);
*(&local3) = ((frost$core$Matcher*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1844));
frost$core$Matcher* $tmp1845 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1845));
*(&local3) = $tmp1844;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1844));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:841
// begin inline call to function frost.core.String.get_start():frost.core.String.Index from Markdown.frost:841:28
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1205
frost$core$Int64 $tmp1846 = (frost$core$Int64) {0u};
// begin inline call to frost.core.String.Index.init(value:frost.core.Int64):frost.core.String.Index from String.frost:1205:21
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:61
frost$core$Int64* $tmp1847 = &(&local5)->value;
*$tmp1847 = $tmp1846;
frost$core$String$Index $tmp1848 = *(&local5);
*(&local4) = $tmp1848;
frost$core$String$Index $tmp1849 = *(&local4);
*(&local6) = $tmp1849;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:842
goto block3;
block3:;
frost$core$Matcher* $tmp1850 = *(&local3);
frost$core$Bit $tmp1851 = frost$core$Matcher$find$R$frost$core$Bit($tmp1850);
bool $tmp1852 = $tmp1851.value;
if ($tmp1852) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:843
frost$core$String$Index $tmp1853 = *(&local6);
frost$core$String$Index$wrapper* $tmp1854;
$tmp1854 = (frost$core$String$Index$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$String$Index$wrapperclass);
$tmp1854->value = $tmp1853;
frost$core$Matcher* $tmp1855 = *(&local3);
frost$core$String$Index $tmp1856;
frost$core$Matcher$get_start$R$frost$core$String$Index(&$tmp1856, $tmp1855);
frost$core$String$Index$wrapper* $tmp1857;
$tmp1857 = (frost$core$String$Index$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$String$Index$wrapperclass);
$tmp1857->value = $tmp1856;
ITable* $tmp1858 = ((frost$core$Comparable*) $tmp1854)->$class->itable;
while ($tmp1858->$class != (frost$core$Class*) &frost$core$Comparable$class) {
    $tmp1858 = $tmp1858->next;
}
$fn1860 $tmp1859 = $tmp1858->methods[1];
frost$core$Bit $tmp1861 = $tmp1859(((frost$core$Comparable*) $tmp1854), ((frost$core$Comparable*) $tmp1857));
bool $tmp1862 = $tmp1861.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Comparable*) $tmp1857)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Comparable*) $tmp1854)));
if ($tmp1862) goto block6; else goto block7;
block6:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:844
frost$collections$Array* $tmp1863 = *(&local0);
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$frostdoc$Markdown$HTMLToken));
org$frostlang$frostc$frostdoc$Markdown$HTMLToken* $tmp1864 = (org$frostlang$frostc$frostdoc$Markdown$HTMLToken*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$frostdoc$Markdown$HTMLToken$class);
frost$core$Int64 $tmp1865 = (frost$core$Int64) {1u};
frost$core$String$Index $tmp1866 = *(&local6);
frost$core$Matcher* $tmp1867 = *(&local3);
frost$core$String$Index $tmp1868;
frost$core$Matcher$get_start$R$frost$core$String$Index(&$tmp1868, $tmp1867);
frost$core$Bit $tmp1869 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$String$Index$GT $tmp1870 = frost$core$Range$LTfrost$core$String$Index$GT$init$frost$core$String$Index$frost$core$String$Index$frost$core$Bit($tmp1866, $tmp1868, $tmp1869);
frost$core$String* $tmp1871 = frost$core$String$substring$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String(param1, $tmp1870);
org$frostlang$frostc$frostdoc$Markdown$HTMLToken$init$frost$core$Int64$frost$core$String($tmp1864, $tmp1865, $tmp1871);
frost$collections$Array$add$frost$collections$Array$T($tmp1863, ((frost$core$Object*) $tmp1864));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1871));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1864));
goto block7;
block7:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:846
frost$collections$Array* $tmp1872 = *(&local0);
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$frostdoc$Markdown$HTMLToken));
org$frostlang$frostc$frostdoc$Markdown$HTMLToken* $tmp1873 = (org$frostlang$frostc$frostdoc$Markdown$HTMLToken*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$frostdoc$Markdown$HTMLToken$class);
frost$core$Int64 $tmp1874 = (frost$core$Int64) {0u};
frost$core$Matcher* $tmp1875 = *(&local3);
frost$core$String$Index $tmp1876;
frost$core$Matcher$get_start$R$frost$core$String$Index(&$tmp1876, $tmp1875);
frost$core$Matcher* $tmp1877 = *(&local3);
frost$core$String$Index $tmp1878;
frost$core$Matcher$get_end$R$frost$core$String$Index(&$tmp1878, $tmp1877);
frost$core$Bit $tmp1879 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$String$Index$GT $tmp1880 = frost$core$Range$LTfrost$core$String$Index$GT$init$frost$core$String$Index$frost$core$String$Index$frost$core$Bit($tmp1876, $tmp1878, $tmp1879);
frost$core$String* $tmp1881 = frost$core$String$substring$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String(param1, $tmp1880);
org$frostlang$frostc$frostdoc$Markdown$HTMLToken$init$frost$core$Int64$frost$core$String($tmp1873, $tmp1874, $tmp1881);
frost$collections$Array$add$frost$collections$Array$T($tmp1872, ((frost$core$Object*) $tmp1873));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1881));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1873));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:847
frost$core$Matcher* $tmp1882 = *(&local3);
frost$core$String$Index $tmp1883;
frost$core$Matcher$get_end$R$frost$core$String$Index(&$tmp1883, $tmp1882);
*(&local6) = $tmp1883;
goto block3;
block5:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:849
frost$core$String$Index $tmp1884 = *(&local6);
frost$core$String$Index$wrapper* $tmp1885;
$tmp1885 = (frost$core$String$Index$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$String$Index$wrapperclass);
$tmp1885->value = $tmp1884;
// begin inline call to function frost.core.String.get_end():frost.core.String.Index from Markdown.frost:849:26
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1212
frost$core$Int64* $tmp1886 = &param1->_length;
frost$core$Int64 $tmp1887 = *$tmp1886;
// begin inline call to frost.core.String.Index.init(value:frost.core.Int64):frost.core.String.Index from String.frost:1212:21
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:61
frost$core$Int64* $tmp1888 = &(&local8)->value;
*$tmp1888 = $tmp1887;
frost$core$String$Index $tmp1889 = *(&local8);
*(&local7) = $tmp1889;
frost$core$String$Index $tmp1890 = *(&local7);
frost$core$String$Index$wrapper* $tmp1891;
$tmp1891 = (frost$core$String$Index$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$String$Index$wrapperclass);
$tmp1891->value = $tmp1890;
ITable* $tmp1892 = ((frost$core$Comparable*) $tmp1885)->$class->itable;
while ($tmp1892->$class != (frost$core$Class*) &frost$core$Comparable$class) {
    $tmp1892 = $tmp1892->next;
}
$fn1894 $tmp1893 = $tmp1892->methods[1];
frost$core$Bit $tmp1895 = $tmp1893(((frost$core$Comparable*) $tmp1885), ((frost$core$Comparable*) $tmp1891));
bool $tmp1896 = $tmp1895.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Comparable*) $tmp1891)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Comparable*) $tmp1885)));
if ($tmp1896) goto block8; else goto block9;
block8:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:850
frost$collections$Array* $tmp1897 = *(&local0);
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$frostdoc$Markdown$HTMLToken));
org$frostlang$frostc$frostdoc$Markdown$HTMLToken* $tmp1898 = (org$frostlang$frostc$frostdoc$Markdown$HTMLToken*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$frostdoc$Markdown$HTMLToken$class);
frost$core$Int64 $tmp1899 = (frost$core$Int64) {1u};
frost$core$String$Index $tmp1900 = *(&local6);
// begin inline call to function frost.core.String.get_end():frost.core.String.Index from Markdown.frost:850:69
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1212
frost$core$Int64* $tmp1901 = &param1->_length;
frost$core$Int64 $tmp1902 = *$tmp1901;
// begin inline call to frost.core.String.Index.init(value:frost.core.Int64):frost.core.String.Index from String.frost:1212:21
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:61
frost$core$Int64* $tmp1903 = &(&local10)->value;
*$tmp1903 = $tmp1902;
frost$core$String$Index $tmp1904 = *(&local10);
*(&local9) = $tmp1904;
frost$core$String$Index $tmp1905 = *(&local9);
frost$core$Bit $tmp1906 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$String$Index$GT $tmp1907 = frost$core$Range$LTfrost$core$String$Index$GT$init$frost$core$String$Index$frost$core$String$Index$frost$core$Bit($tmp1900, $tmp1905, $tmp1906);
frost$core$String* $tmp1908 = frost$core$String$substring$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String(param1, $tmp1907);
org$frostlang$frostc$frostdoc$Markdown$HTMLToken$init$frost$core$Int64$frost$core$String($tmp1898, $tmp1899, $tmp1908);
frost$collections$Array$add$frost$collections$Array$T($tmp1897, ((frost$core$Object*) $tmp1898));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1908));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1898));
goto block9;
block9:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:853
frost$collections$Array* $tmp1909 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp1909)));
frost$core$Matcher* $tmp1910 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1910));
*(&local3) = ((frost$core$Matcher*) NULL);
frost$core$RegularExpression* $tmp1911 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1911));
*(&local2) = ((frost$core$RegularExpression*) NULL);
frost$core$String* $tmp1912 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1912));
*(&local1) = ((frost$core$String*) NULL);
frost$collections$Array* $tmp1913 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1913));
*(&local0) = ((frost$collections$Array*) NULL);
return ((frost$collections$ListView*) $tmp1909);

}
void org$frostlang$frostc$frostdoc$Markdown$escapeSpecialCharsWithinTagAttributes$frost$core$MutableString(org$frostlang$frostc$frostdoc$Markdown* param0, frost$core$MutableString* param1) {

frost$collections$ListView* local0 = NULL;
org$frostlang$frostc$frostdoc$Markdown$HTMLToken* local1 = NULL;
frost$core$String* local2 = NULL;
frost$core$String* local3 = NULL;
frost$core$String* local4 = NULL;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:866
$fn1915 $tmp1914 = ($fn1915) ((frost$core$Object*) param1)->$class->vtable[0];
frost$core$String* $tmp1916 = $tmp1914(((frost$core$Object*) param1));
$fn1918 $tmp1917 = ($fn1918) param0->$class->vtable[23];
frost$collections$ListView* $tmp1919 = $tmp1917(param0, $tmp1916);
*(&local0) = ((frost$collections$ListView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1919));
frost$collections$ListView* $tmp1920 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1920));
*(&local0) = $tmp1919;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1919));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1916));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:867
frost$core$MutableString$clear(param1);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:869
frost$collections$ListView* $tmp1921 = *(&local0);
ITable* $tmp1922 = ((frost$collections$Iterable*) $tmp1921)->$class->itable;
while ($tmp1922->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1922 = $tmp1922->next;
}
$fn1924 $tmp1923 = $tmp1922->methods[0];
frost$collections$Iterator* $tmp1925 = $tmp1923(((frost$collections$Iterable*) $tmp1921));
goto block1;
block1:;
ITable* $tmp1926 = $tmp1925->$class->itable;
while ($tmp1926->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1926 = $tmp1926->next;
}
$fn1928 $tmp1927 = $tmp1926->methods[0];
frost$core$Bit $tmp1929 = $tmp1927($tmp1925);
bool $tmp1930 = $tmp1929.value;
if ($tmp1930) goto block3; else goto block2;
block2:;
*(&local1) = ((org$frostlang$frostc$frostdoc$Markdown$HTMLToken*) NULL);
ITable* $tmp1931 = $tmp1925->$class->itable;
while ($tmp1931->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1931 = $tmp1931->next;
}
$fn1933 $tmp1932 = $tmp1931->methods[1];
frost$core$Object* $tmp1934 = $tmp1932($tmp1925);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$frostdoc$Markdown$HTMLToken*) $tmp1934)));
org$frostlang$frostc$frostdoc$Markdown$HTMLToken* $tmp1935 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1935));
*(&local1) = ((org$frostlang$frostc$frostdoc$Markdown$HTMLToken*) $tmp1934);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:870
*(&local2) = ((frost$core$String*) NULL);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:871
org$frostlang$frostc$frostdoc$Markdown$HTMLToken* $tmp1936 = *(&local1);
frost$core$Int64* $tmp1937 = &$tmp1936->$rawValue;
frost$core$Int64 $tmp1938 = *$tmp1937;
frost$core$Int64 $tmp1939 = (frost$core$Int64) {0u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Markdown.frost:872:31
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp1940 = $tmp1938.value;
int64_t $tmp1941 = $tmp1939.value;
bool $tmp1942 = $tmp1940 == $tmp1941;
frost$core$Bit $tmp1943 = (frost$core$Bit) {$tmp1942};
bool $tmp1944 = $tmp1943.value;
if ($tmp1944) goto block5; else goto block6;
block5:;
frost$core$String** $tmp1945 = (frost$core$String**) ($tmp1936->$data + 0);
frost$core$String* $tmp1946 = *$tmp1945;
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1946));
frost$core$String* $tmp1947 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1947));
*(&local3) = $tmp1946;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:873
frost$core$String* $tmp1948 = *(&local3);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1948));
frost$core$String* $tmp1949 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1949));
*(&local2) = $tmp1948;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:874
frost$core$String* $tmp1950 = *(&local2);
org$frostlang$frostc$frostdoc$Protector** $tmp1951 = &param0->charProtector;
org$frostlang$frostc$frostdoc$Protector* $tmp1952 = *$tmp1951;
$fn1954 $tmp1953 = ($fn1954) $tmp1952->$class->vtable[2];
frost$core$String* $tmp1955 = $tmp1953($tmp1952, &$s1956);
frost$core$String* $tmp1957 = frost$core$String$replace$frost$core$String$frost$core$String$R$frost$core$String($tmp1950, &$s1958, $tmp1955);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1957));
frost$core$String* $tmp1959 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1959));
*(&local2) = $tmp1957;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1957));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1955));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:875
frost$core$String* $tmp1960 = *(&local2);
org$frostlang$frostc$frostdoc$Protector** $tmp1961 = &param0->charProtector;
org$frostlang$frostc$frostdoc$Protector* $tmp1962 = *$tmp1961;
$fn1964 $tmp1963 = ($fn1964) $tmp1962->$class->vtable[2];
frost$core$String* $tmp1965 = $tmp1963($tmp1962, &$s1966);
frost$core$String* $tmp1967 = frost$core$String$replace$frost$core$String$frost$core$String$R$frost$core$String($tmp1960, &$s1968, $tmp1965);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1967));
frost$core$String* $tmp1969 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1969));
*(&local2) = $tmp1967;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1967));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1965));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:876
frost$core$String* $tmp1970 = *(&local2);
org$frostlang$frostc$frostdoc$Protector** $tmp1971 = &param0->charProtector;
org$frostlang$frostc$frostdoc$Protector* $tmp1972 = *$tmp1971;
$fn1974 $tmp1973 = ($fn1974) $tmp1972->$class->vtable[2];
frost$core$String* $tmp1975 = $tmp1973($tmp1972, &$s1976);
frost$core$String* $tmp1977 = frost$core$String$replace$frost$core$String$frost$core$String$R$frost$core$String($tmp1970, &$s1978, $tmp1975);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1977));
frost$core$String* $tmp1979 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1979));
*(&local2) = $tmp1977;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1977));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1975));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:877
frost$core$String* $tmp1980 = *(&local2);
org$frostlang$frostc$frostdoc$Protector** $tmp1981 = &param0->charProtector;
org$frostlang$frostc$frostdoc$Protector* $tmp1982 = *$tmp1981;
$fn1984 $tmp1983 = ($fn1984) $tmp1982->$class->vtable[2];
frost$core$String* $tmp1985 = $tmp1983($tmp1982, &$s1986);
frost$core$String* $tmp1987 = frost$core$String$replace$frost$core$String$frost$core$String$R$frost$core$String($tmp1980, &$s1988, $tmp1985);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1987));
frost$core$String* $tmp1989 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1989));
*(&local2) = $tmp1987;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1987));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1985));
frost$core$String* $tmp1990 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1990));
*(&local3) = ((frost$core$String*) NULL);
goto block4;
block6:;
frost$core$Int64 $tmp1991 = (frost$core$Int64) {1u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Markdown.frost:879:31
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp1992 = $tmp1938.value;
int64_t $tmp1993 = $tmp1991.value;
bool $tmp1994 = $tmp1992 == $tmp1993;
frost$core$Bit $tmp1995 = (frost$core$Bit) {$tmp1994};
bool $tmp1996 = $tmp1995.value;
if ($tmp1996) goto block8; else goto block4;
block8:;
frost$core$String** $tmp1997 = (frost$core$String**) ($tmp1936->$data + 0);
frost$core$String* $tmp1998 = *$tmp1997;
*(&local4) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1998));
frost$core$String* $tmp1999 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1999));
*(&local4) = $tmp1998;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:880
frost$core$String* $tmp2000 = *(&local4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2000));
frost$core$String* $tmp2001 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2001));
*(&local2) = $tmp2000;
frost$core$String* $tmp2002 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2002));
*(&local4) = ((frost$core$String*) NULL);
goto block4;
block4:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:883
frost$core$String* $tmp2003 = *(&local2);
frost$core$MutableString$append$frost$core$String(param1, $tmp2003);
frost$core$String* $tmp2004 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2004));
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp1934);
org$frostlang$frostc$frostdoc$Markdown$HTMLToken* $tmp2005 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2005));
*(&local1) = ((org$frostlang$frostc$frostdoc$Markdown$HTMLToken*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1925));
frost$collections$ListView* $tmp2006 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2006));
*(&local0) = ((frost$collections$ListView*) NULL);
return;

}
void org$frostlang$frostc$frostdoc$Markdown$doImages$frost$core$MutableString(org$frostlang$frostc$frostdoc$Markdown* param0, frost$core$MutableString* param1) {

frost$core$Matcher* local0 = NULL;
frost$core$Matcher* local1 = NULL;
frost$core$RegularExpression* local2 = NULL;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:889
FROST_ASSERT(24 == sizeof(frost$core$RegularExpression));
frost$core$RegularExpression* $tmp2007 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp2007, &$s2008);
// begin inline call to method frost.core.MutableString.replace(search:frost.core.RegularExpression, replacement:frost.core.String) from Markdown.frost:889:21
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:401
frost$core$Bit $tmp2009 = (frost$core$Bit) {true};
// begin inline call to method frost.core.MutableString.replace(search:frost.core.RegularExpression, replacement:frost.core.String, allowGroupReferences:frost.core.Bit) from MutableString.frost:401:16
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:406
$fn2011 $tmp2010 = ($fn2011) ((frost$core$Object*) param1)->$class->vtable[0];
frost$core$String* $tmp2012 = $tmp2010(((frost$core$Object*) param1));
frost$core$Matcher* $tmp2013 = frost$core$RegularExpression$matcher$frost$core$String$R$frost$core$Matcher($tmp2007, $tmp2012);
*(&local0) = ((frost$core$Matcher*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2013));
frost$core$Matcher* $tmp2014 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2014));
*(&local0) = $tmp2013;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2013));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2012));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:407
frost$core$MutableString$clear(param1);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:408
goto block3;
block3:;
frost$core$Matcher* $tmp2015 = *(&local0);
frost$core$Bit $tmp2016 = frost$core$Matcher$find$R$frost$core$Bit($tmp2015);
bool $tmp2017 = $tmp2016.value;
if ($tmp2017) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:409
frost$core$Matcher* $tmp2018 = *(&local0);
frost$core$Matcher$appendReplacement$frost$core$MutableString$frost$core$String$frost$core$Bit($tmp2018, param1, &$s2019, $tmp2009);
goto block3;
block5:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:411
frost$core$Matcher* $tmp2020 = *(&local0);
frost$core$Matcher$appendTail$frost$core$MutableString($tmp2020, param1);
frost$core$Matcher* $tmp2021 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2021));
*(&local0) = ((frost$core$Matcher*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2007));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:890
FROST_ASSERT(24 == sizeof(frost$core$RegularExpression));
frost$core$RegularExpression* $tmp2022 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp2022, &$s2023);
// begin inline call to method frost.core.MutableString.replace(search:frost.core.RegularExpression, replacement:frost.core.String) from Markdown.frost:890:21
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:401
frost$core$Bit $tmp2024 = (frost$core$Bit) {true};
// begin inline call to method frost.core.MutableString.replace(search:frost.core.RegularExpression, replacement:frost.core.String, allowGroupReferences:frost.core.Bit) from MutableString.frost:401:16
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:406
$fn2026 $tmp2025 = ($fn2026) ((frost$core$Object*) param1)->$class->vtable[0];
frost$core$String* $tmp2027 = $tmp2025(((frost$core$Object*) param1));
frost$core$Matcher* $tmp2028 = frost$core$RegularExpression$matcher$frost$core$String$R$frost$core$Matcher($tmp2022, $tmp2027);
*(&local1) = ((frost$core$Matcher*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2028));
frost$core$Matcher* $tmp2029 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2029));
*(&local1) = $tmp2028;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2028));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2027));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:407
frost$core$MutableString$clear(param1);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:408
goto block8;
block8:;
frost$core$Matcher* $tmp2030 = *(&local1);
frost$core$Bit $tmp2031 = frost$core$Matcher$find$R$frost$core$Bit($tmp2030);
bool $tmp2032 = $tmp2031.value;
if ($tmp2032) goto block9; else goto block10;
block9:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:409
frost$core$Matcher* $tmp2033 = *(&local1);
frost$core$Matcher$appendReplacement$frost$core$MutableString$frost$core$String$frost$core$Bit($tmp2033, param1, &$s2034, $tmp2024);
goto block8;
block10:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:411
frost$core$Matcher* $tmp2035 = *(&local1);
frost$core$Matcher$appendTail$frost$core$MutableString($tmp2035, param1);
frost$core$Matcher* $tmp2036 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2036));
*(&local1) = ((frost$core$Matcher*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2022));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:893
FROST_ASSERT(24 == sizeof(frost$core$RegularExpression));
frost$core$RegularExpression* $tmp2037 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$String* $tmp2038 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2039, &$s2040);
frost$core$String* $tmp2041 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2038, &$s2042);
frost$core$String* $tmp2043 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2041, &$s2044);
frost$core$RegularExpression$init$frost$core$String($tmp2037, $tmp2043);
*(&local2) = ((frost$core$RegularExpression*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2037));
frost$core$RegularExpression* $tmp2045 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2045));
*(&local2) = $tmp2037;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2043));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2041));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2038));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2037));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:898
frost$core$RegularExpression* $tmp2046 = *(&local2);
FROST_ASSERT(24 == sizeof(org$frostlang$frostc$frostdoc$Markdown$_Closure26));
org$frostlang$frostc$frostdoc$Markdown$_Closure26* $tmp2047 = (org$frostlang$frostc$frostdoc$Markdown$_Closure26*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$frostdoc$Markdown$_Closure26$class);
org$frostlang$frostc$frostdoc$Markdown$_Closure26$init$org$frostlang$frostc$frostdoc$Markdown($tmp2047, param0);
FROST_ASSERT(32 == sizeof(frost$core$MutableMethod));
frost$core$MutableMethod* $tmp2049 = (frost$core$MutableMethod*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$MutableMethod$class);
// begin inline call to frost.core.MutableMethod.init(pointer:frost.unsafe.Pointer<frost.core.Int8>, target:frost.core.Object?) from Markdown.frost:898:33
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableMethod.frost:32
frost$core$Int8** $tmp2050 = &$tmp2049->pointer;
*$tmp2050 = ((frost$core$Int8*) org$frostlang$frostc$frostdoc$Markdown$_Closure26$$anonymous25$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$String);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableMethod.frost:33
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2047));
frost$core$Object** $tmp2051 = &$tmp2049->target;
frost$core$Object* $tmp2052 = *$tmp2051;
frost$core$Frost$unref$frost$core$Object$Q($tmp2052);
frost$core$Object** $tmp2053 = &$tmp2049->target;
*$tmp2053 = ((frost$core$Object*) $tmp2047);
frost$core$MutableString$replace$frost$core$RegularExpression$$LPfrost$collections$ListView$LTfrost$core$String$Q$GT$RP$EQ$GT$LPfrost$core$Object$RP(param1, $tmp2046, $tmp2049);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2049));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2047));
frost$core$RegularExpression* $tmp2054 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2054));
*(&local2) = ((frost$core$RegularExpression*) NULL);
return;

}
void org$frostlang$frostc$frostdoc$Markdown$doAnchors$frost$core$MutableString(org$frostlang$frostc$frostdoc$Markdown* param0, frost$core$MutableString* param1) {

frost$core$RegularExpression* local0 = NULL;
frost$core$RegularExpression* local1 = NULL;
frost$core$RegularExpression* local2 = NULL;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:931
FROST_ASSERT(24 == sizeof(frost$core$RegularExpression));
frost$core$RegularExpression* $tmp2055 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$String* $tmp2056 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2057, &$s2058);
frost$core$String* $tmp2059 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2056, &$s2060);
frost$core$String* $tmp2061 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2059, &$s2062);
frost$core$RegularExpression$init$frost$core$String($tmp2055, $tmp2061);
*(&local0) = ((frost$core$RegularExpression*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2055));
frost$core$RegularExpression* $tmp2063 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2063));
*(&local0) = $tmp2055;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2061));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2059));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2056));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2055));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:936
frost$core$RegularExpression* $tmp2064 = *(&local0);
FROST_ASSERT(24 == sizeof(org$frostlang$frostc$frostdoc$Markdown$_Closure28));
org$frostlang$frostc$frostdoc$Markdown$_Closure28* $tmp2065 = (org$frostlang$frostc$frostdoc$Markdown$_Closure28*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$frostdoc$Markdown$_Closure28$class);
org$frostlang$frostc$frostdoc$Markdown$_Closure28$init$org$frostlang$frostc$frostdoc$Markdown($tmp2065, param0);
FROST_ASSERT(32 == sizeof(frost$core$MutableMethod));
frost$core$MutableMethod* $tmp2067 = (frost$core$MutableMethod*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$MutableMethod$class);
// begin inline call to frost.core.MutableMethod.init(pointer:frost.unsafe.Pointer<frost.core.Int8>, target:frost.core.Object?) from Markdown.frost:936:38
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableMethod.frost:32
frost$core$Int8** $tmp2068 = &$tmp2067->pointer;
*$tmp2068 = ((frost$core$Int8*) org$frostlang$frostc$frostdoc$Markdown$_Closure28$$anonymous27$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$Object);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableMethod.frost:33
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2065));
frost$core$Object** $tmp2069 = &$tmp2067->target;
frost$core$Object* $tmp2070 = *$tmp2069;
frost$core$Frost$unref$frost$core$Object$Q($tmp2070);
frost$core$Object** $tmp2071 = &$tmp2067->target;
*$tmp2071 = ((frost$core$Object*) $tmp2065);
frost$core$MutableString$replace$frost$core$RegularExpression$$LPfrost$collections$ListView$LTfrost$core$String$Q$GT$RP$EQ$GT$LPfrost$core$Object$RP(param1, $tmp2064, $tmp2067);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2067));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2065));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:968
FROST_ASSERT(24 == sizeof(frost$core$RegularExpression));
frost$core$RegularExpression* $tmp2072 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$String* $tmp2073 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2074, &$s2075);
frost$core$String* $tmp2076 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2073, &$s2077);
frost$core$String* $tmp2078 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2076, &$s2079);
frost$core$String* $tmp2080 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2078, &$s2081);
frost$core$String* $tmp2082 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2080, &$s2083);
frost$core$String* $tmp2084 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2082, &$s2085);
frost$core$String* $tmp2086 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2084, &$s2087);
frost$core$String* $tmp2088 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2086, &$s2089);
frost$core$String* $tmp2090 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2088, &$s2091);
frost$core$String* $tmp2092 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2090, &$s2093);
frost$core$String* $tmp2094 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2092, &$s2095);
frost$core$Int64 $tmp2096 = (frost$core$Int64) {4u};
frost$core$RegularExpression$init$frost$core$String$frost$core$Int64($tmp2072, $tmp2094, $tmp2096);
*(&local1) = ((frost$core$RegularExpression*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2072));
frost$core$RegularExpression* $tmp2097 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2097));
*(&local1) = $tmp2072;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2094));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2092));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2090));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2088));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2086));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2084));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2082));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2080));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2078));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2076));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2073));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2072));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:982
frost$core$RegularExpression* $tmp2098 = *(&local1);
FROST_ASSERT(24 == sizeof(org$frostlang$frostc$frostdoc$Markdown$_Closure30));
org$frostlang$frostc$frostdoc$Markdown$_Closure30* $tmp2099 = (org$frostlang$frostc$frostdoc$Markdown$_Closure30*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$frostdoc$Markdown$_Closure30$class);
org$frostlang$frostc$frostdoc$Markdown$_Closure30$init$org$frostlang$frostc$frostdoc$Markdown($tmp2099, param0);
FROST_ASSERT(32 == sizeof(frost$core$MutableMethod));
frost$core$MutableMethod* $tmp2101 = (frost$core$MutableMethod*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$MutableMethod$class);
// begin inline call to frost.core.MutableMethod.init(pointer:frost.unsafe.Pointer<frost.core.Int8>, target:frost.core.Object?) from Markdown.frost:982:36
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableMethod.frost:32
frost$core$Int8** $tmp2102 = &$tmp2101->pointer;
*$tmp2102 = ((frost$core$Int8*) org$frostlang$frostc$frostdoc$Markdown$_Closure30$$anonymous29$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$String);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableMethod.frost:33
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2099));
frost$core$Object** $tmp2103 = &$tmp2101->target;
frost$core$Object* $tmp2104 = *$tmp2103;
frost$core$Frost$unref$frost$core$Object$Q($tmp2104);
frost$core$Object** $tmp2105 = &$tmp2101->target;
*$tmp2105 = ((frost$core$Object*) $tmp2099);
frost$core$MutableString$replace$frost$core$RegularExpression$$LPfrost$collections$ListView$LTfrost$core$String$Q$GT$RP$EQ$GT$LPfrost$core$Object$RP(param1, $tmp2098, $tmp2101);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2101));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2099));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:1024
FROST_ASSERT(24 == sizeof(frost$core$RegularExpression));
frost$core$RegularExpression* $tmp2106 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$String* $tmp2107 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2108, &$s2109);
frost$core$String* $tmp2110 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2107, &$s2111);
frost$core$String* $tmp2112 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2110, &$s2113);
frost$core$Int64 $tmp2114 = (frost$core$Int64) {4u};
frost$core$RegularExpression$init$frost$core$String$frost$core$Int64($tmp2106, $tmp2112, $tmp2114);
*(&local2) = ((frost$core$RegularExpression*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2106));
frost$core$RegularExpression* $tmp2115 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2115));
*(&local2) = $tmp2106;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2112));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2110));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2107));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2106));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:1030
frost$core$RegularExpression* $tmp2116 = *(&local2);
FROST_ASSERT(24 == sizeof(org$frostlang$frostc$frostdoc$Markdown$_Closure32));
org$frostlang$frostc$frostdoc$Markdown$_Closure32* $tmp2117 = (org$frostlang$frostc$frostdoc$Markdown$_Closure32*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$frostdoc$Markdown$_Closure32$class);
org$frostlang$frostc$frostdoc$Markdown$_Closure32$init$org$frostlang$frostc$frostdoc$Markdown($tmp2117, param0);
FROST_ASSERT(32 == sizeof(frost$core$MutableMethod));
frost$core$MutableMethod* $tmp2119 = (frost$core$MutableMethod*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$MutableMethod$class);
// begin inline call to frost.core.MutableMethod.init(pointer:frost.unsafe.Pointer<frost.core.Int8>, target:frost.core.Object?) from Markdown.frost:1030:43
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableMethod.frost:32
frost$core$Int8** $tmp2120 = &$tmp2119->pointer;
*$tmp2120 = ((frost$core$Int8*) org$frostlang$frostc$frostdoc$Markdown$_Closure32$$anonymous31$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$Object);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableMethod.frost:33
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2117));
frost$core$Object** $tmp2121 = &$tmp2119->target;
frost$core$Object* $tmp2122 = *$tmp2121;
frost$core$Frost$unref$frost$core$Object$Q($tmp2122);
frost$core$Object** $tmp2123 = &$tmp2119->target;
*$tmp2123 = ((frost$core$Object*) $tmp2117);
frost$core$MutableString$replace$frost$core$RegularExpression$$LPfrost$collections$ListView$LTfrost$core$String$Q$GT$RP$EQ$GT$LPfrost$core$Object$RP(param1, $tmp2116, $tmp2119);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2119));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2117));
frost$core$RegularExpression* $tmp2124 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2124));
*(&local2) = ((frost$core$RegularExpression*) NULL);
frost$core$RegularExpression* $tmp2125 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2125));
*(&local1) = ((frost$core$RegularExpression*) NULL);
frost$core$RegularExpression* $tmp2126 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2126));
*(&local0) = ((frost$core$RegularExpression*) NULL);
return;

}
void org$frostlang$frostc$frostdoc$Markdown$doItalicsAndBold$frost$core$MutableString(org$frostlang$frostc$frostdoc$Markdown* param0, frost$core$MutableString* param1) {

frost$core$Matcher* local0 = NULL;
frost$core$Matcher* local1 = NULL;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:1072
FROST_ASSERT(24 == sizeof(frost$core$RegularExpression));
frost$core$RegularExpression* $tmp2127 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp2127, &$s2128);
// begin inline call to method frost.core.MutableString.replace(search:frost.core.RegularExpression, replacement:frost.core.String) from Markdown.frost:1072:23
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:401
frost$core$Bit $tmp2129 = (frost$core$Bit) {true};
// begin inline call to method frost.core.MutableString.replace(search:frost.core.RegularExpression, replacement:frost.core.String, allowGroupReferences:frost.core.Bit) from MutableString.frost:401:16
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:406
$fn2131 $tmp2130 = ($fn2131) ((frost$core$Object*) param1)->$class->vtable[0];
frost$core$String* $tmp2132 = $tmp2130(((frost$core$Object*) param1));
frost$core$Matcher* $tmp2133 = frost$core$RegularExpression$matcher$frost$core$String$R$frost$core$Matcher($tmp2127, $tmp2132);
*(&local0) = ((frost$core$Matcher*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2133));
frost$core$Matcher* $tmp2134 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2134));
*(&local0) = $tmp2133;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2133));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2132));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:407
frost$core$MutableString$clear(param1);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:408
goto block3;
block3:;
frost$core$Matcher* $tmp2135 = *(&local0);
frost$core$Bit $tmp2136 = frost$core$Matcher$find$R$frost$core$Bit($tmp2135);
bool $tmp2137 = $tmp2136.value;
if ($tmp2137) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:409
frost$core$Matcher* $tmp2138 = *(&local0);
frost$core$Matcher$appendReplacement$frost$core$MutableString$frost$core$String$frost$core$Bit($tmp2138, param1, &$s2139, $tmp2129);
goto block3;
block5:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:411
frost$core$Matcher* $tmp2140 = *(&local0);
frost$core$Matcher$appendTail$frost$core$MutableString($tmp2140, param1);
frost$core$Matcher* $tmp2141 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2141));
*(&local0) = ((frost$core$Matcher*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2127));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:1073
FROST_ASSERT(24 == sizeof(frost$core$RegularExpression));
frost$core$RegularExpression* $tmp2142 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp2142, &$s2143);
// begin inline call to method frost.core.MutableString.replace(search:frost.core.RegularExpression, replacement:frost.core.String) from Markdown.frost:1073:23
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:401
frost$core$Bit $tmp2144 = (frost$core$Bit) {true};
// begin inline call to method frost.core.MutableString.replace(search:frost.core.RegularExpression, replacement:frost.core.String, allowGroupReferences:frost.core.Bit) from MutableString.frost:401:16
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:406
$fn2146 $tmp2145 = ($fn2146) ((frost$core$Object*) param1)->$class->vtable[0];
frost$core$String* $tmp2147 = $tmp2145(((frost$core$Object*) param1));
frost$core$Matcher* $tmp2148 = frost$core$RegularExpression$matcher$frost$core$String$R$frost$core$Matcher($tmp2142, $tmp2147);
*(&local1) = ((frost$core$Matcher*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2148));
frost$core$Matcher* $tmp2149 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2149));
*(&local1) = $tmp2148;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2148));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2147));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:407
frost$core$MutableString$clear(param1);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:408
goto block8;
block8:;
frost$core$Matcher* $tmp2150 = *(&local1);
frost$core$Bit $tmp2151 = frost$core$Matcher$find$R$frost$core$Bit($tmp2150);
bool $tmp2152 = $tmp2151.value;
if ($tmp2152) goto block9; else goto block10;
block9:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:409
frost$core$Matcher* $tmp2153 = *(&local1);
frost$core$Matcher$appendReplacement$frost$core$MutableString$frost$core$String$frost$core$Bit($tmp2153, param1, &$s2154, $tmp2144);
goto block8;
block10:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:411
frost$core$Matcher* $tmp2155 = *(&local1);
frost$core$Matcher$appendTail$frost$core$MutableString($tmp2155, param1);
frost$core$Matcher* $tmp2156 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2156));
*(&local1) = ((frost$core$Matcher*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2142));
return;

}
void org$frostlang$frostc$frostdoc$Markdown$encodeAmpsAndAngles$frost$core$MutableString(org$frostlang$frostc$frostdoc$Markdown* param0, frost$core$MutableString* param1) {

frost$core$Matcher* local0 = NULL;
frost$core$Matcher* local1 = NULL;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:1079
FROST_ASSERT(24 == sizeof(frost$core$RegularExpression));
frost$core$RegularExpression* $tmp2157 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp2157, &$s2158);
// begin inline call to method frost.core.MutableString.replace(search:frost.core.RegularExpression, replacement:frost.core.String) from Markdown.frost:1079:23
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:401
frost$core$Bit $tmp2159 = (frost$core$Bit) {true};
// begin inline call to method frost.core.MutableString.replace(search:frost.core.RegularExpression, replacement:frost.core.String, allowGroupReferences:frost.core.Bit) from MutableString.frost:401:16
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:406
$fn2161 $tmp2160 = ($fn2161) ((frost$core$Object*) param1)->$class->vtable[0];
frost$core$String* $tmp2162 = $tmp2160(((frost$core$Object*) param1));
frost$core$Matcher* $tmp2163 = frost$core$RegularExpression$matcher$frost$core$String$R$frost$core$Matcher($tmp2157, $tmp2162);
*(&local0) = ((frost$core$Matcher*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2163));
frost$core$Matcher* $tmp2164 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2164));
*(&local0) = $tmp2163;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2163));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2162));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:407
frost$core$MutableString$clear(param1);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:408
goto block3;
block3:;
frost$core$Matcher* $tmp2165 = *(&local0);
frost$core$Bit $tmp2166 = frost$core$Matcher$find$R$frost$core$Bit($tmp2165);
bool $tmp2167 = $tmp2166.value;
if ($tmp2167) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:409
frost$core$Matcher* $tmp2168 = *(&local0);
frost$core$Matcher$appendReplacement$frost$core$MutableString$frost$core$String$frost$core$Bit($tmp2168, param1, &$s2169, $tmp2159);
goto block3;
block5:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:411
frost$core$Matcher* $tmp2170 = *(&local0);
frost$core$Matcher$appendTail$frost$core$MutableString($tmp2170, param1);
frost$core$Matcher* $tmp2171 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2171));
*(&local0) = ((frost$core$Matcher*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2157));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:1080
FROST_ASSERT(24 == sizeof(frost$core$RegularExpression));
frost$core$RegularExpression* $tmp2172 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp2172, &$s2173);
// begin inline call to method frost.core.MutableString.replace(search:frost.core.RegularExpression, replacement:frost.core.String) from Markdown.frost:1080:23
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:401
frost$core$Bit $tmp2174 = (frost$core$Bit) {true};
// begin inline call to method frost.core.MutableString.replace(search:frost.core.RegularExpression, replacement:frost.core.String, allowGroupReferences:frost.core.Bit) from MutableString.frost:401:16
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:406
$fn2176 $tmp2175 = ($fn2176) ((frost$core$Object*) param1)->$class->vtable[0];
frost$core$String* $tmp2177 = $tmp2175(((frost$core$Object*) param1));
frost$core$Matcher* $tmp2178 = frost$core$RegularExpression$matcher$frost$core$String$R$frost$core$Matcher($tmp2172, $tmp2177);
*(&local1) = ((frost$core$Matcher*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2178));
frost$core$Matcher* $tmp2179 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2179));
*(&local1) = $tmp2178;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2178));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2177));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:407
frost$core$MutableString$clear(param1);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:408
goto block8;
block8:;
frost$core$Matcher* $tmp2180 = *(&local1);
frost$core$Bit $tmp2181 = frost$core$Matcher$find$R$frost$core$Bit($tmp2180);
bool $tmp2182 = $tmp2181.value;
if ($tmp2182) goto block9; else goto block10;
block9:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:409
frost$core$Matcher* $tmp2183 = *(&local1);
frost$core$Matcher$appendReplacement$frost$core$MutableString$frost$core$String$frost$core$Bit($tmp2183, param1, &$s2184, $tmp2174);
goto block8;
block10:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:411
frost$core$Matcher* $tmp2185 = *(&local1);
frost$core$Matcher$appendTail$frost$core$MutableString($tmp2185, param1);
frost$core$Matcher* $tmp2186 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2186));
*(&local1) = ((frost$core$Matcher*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2172));
return;

}
void org$frostlang$frostc$frostdoc$Markdown$doCodeSpans$frost$core$MutableString(org$frostlang$frostc$frostdoc$Markdown* param0, frost$core$MutableString* param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:1084
FROST_ASSERT(24 == sizeof(frost$core$RegularExpression));
frost$core$RegularExpression* $tmp2187 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp2187, &$s2188);
FROST_ASSERT(24 == sizeof(org$frostlang$frostc$frostdoc$Markdown$_Closure34));
org$frostlang$frostc$frostdoc$Markdown$_Closure34* $tmp2189 = (org$frostlang$frostc$frostdoc$Markdown$_Closure34*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$frostdoc$Markdown$_Closure34$class);
org$frostlang$frostc$frostdoc$Markdown$_Closure34$init$org$frostlang$frostc$frostdoc$Markdown($tmp2189, param0);
FROST_ASSERT(32 == sizeof(frost$core$MutableMethod));
frost$core$MutableMethod* $tmp2191 = (frost$core$MutableMethod*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$MutableMethod$class);
// begin inline call to frost.core.MutableMethod.init(pointer:frost.unsafe.Pointer<frost.core.Int8>, target:frost.core.Object?) from Markdown.frost:1085:13
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableMethod.frost:32
frost$core$Int8** $tmp2192 = &$tmp2191->pointer;
*$tmp2192 = ((frost$core$Int8*) org$frostlang$frostc$frostdoc$Markdown$_Closure34$$anonymous33$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$String);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableMethod.frost:33
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2189));
frost$core$Object** $tmp2193 = &$tmp2191->target;
frost$core$Object* $tmp2194 = *$tmp2193;
frost$core$Frost$unref$frost$core$Object$Q($tmp2194);
frost$core$Object** $tmp2195 = &$tmp2191->target;
*$tmp2195 = ((frost$core$Object*) $tmp2189);
frost$core$MutableString$replace$frost$core$RegularExpression$$LPfrost$collections$ListView$LTfrost$core$String$Q$GT$RP$EQ$GT$LPfrost$core$Object$RP(param1, $tmp2187, $tmp2191);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2191));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2189));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2187));
return;

}
void org$frostlang$frostc$frostdoc$Markdown$cleanup(org$frostlang$frostc$frostdoc$Markdown* param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:83
frost$core$Object$cleanup(((frost$core$Object*) param0));
frost$io$File** $tmp2196 = &param0->source;
frost$io$File* $tmp2197 = *$tmp2196;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2197));
frost$threads$MessageQueue** $tmp2198 = &param0->errorQueue;
frost$threads$MessageQueue* $tmp2199 = *$tmp2198;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2199));
org$frostlang$frostc$parser$Parser** $tmp2200 = &param0->parser;
org$frostlang$frostc$parser$Parser* $tmp2201 = *$tmp2200;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2201));
frost$core$MutableMethod** $tmp2202 = &param0->linkResolver;
frost$core$MutableMethod* $tmp2203 = *$tmp2202;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2203));
frost$collections$HashMap** $tmp2204 = &param0->linkDefinitions;
frost$collections$HashMap* $tmp2205 = *$tmp2204;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2205));
org$frostlang$frostc$frostdoc$Protector** $tmp2206 = &param0->charProtector;
org$frostlang$frostc$frostdoc$Protector* $tmp2207 = *$tmp2206;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2207));
org$frostlang$frostc$frostdoc$Protector** $tmp2208 = &param0->htmlProtector;
org$frostlang$frostc$frostdoc$Protector* $tmp2209 = *$tmp2208;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2209));
frost$math$Random** $tmp2210 = &param0->random;
frost$math$Random* $tmp2211 = *$tmp2210;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2211));
return;

}

