Documentation Comments
======================

A *documentation comment* is a special comment that must appear immediately prior to a
[class](classes.md), [method](methods.md), or [field](fields.md), and provides a formal
description of the class, method, or field it precedes.

Documentation comments begin and end with three or more equals signs (`===`), as
in:

    ===================================================
    Appends a character to the end of the string.

    @param c the character to append
    ===================================================
    method append(c:Char) {
        ...
    }

While only three equals signs are necessary, it is conventional to extend the row of equals signs to
the end of the line.

Documentation comments consist of three parts. The *summary* is the first "sentence" of the content,
extending from the beginning of the comment to the first period (`.`). The *description* is the
entire documentation text, including the summary, up until the *tags* begin. The *tags* are a set of
directives beginning with `@` at the end of the documentation comment.

The summary and description are written in a variant of the standard
[Markdown](https://en.wikipedia.org/wiki/Markdown) format. Frost's Markdown implementation differs
from standard Markdown in two major ways: first, all source code is assumed to be Frost code and is
syntax highlighted appropriately, and second, the link syntax has been extended.

In addition to normal URL links, links within documentation comments may point to particular
classes, fields, and methods. If the link target starts with `"http:"`, `"/"`, or `".."`, it will be
treated as a URL. Otherwise, the compiler will attempt to resolve it as a reference to a class,
field, or method. Classes may be named using their fully-qualified names, or simple name / alias 
if there is a `use` directive for them. Fields may be referenced by their simple name, if within the
same class, or by an expression of the form `ClassName.fieldName`. Methods may be referenced in the
same fashion as fields, but may also have a list of parameter types to disambiguate overloaded
methods (e.g. `Int64.max(Int)`). The return type may also be provided to disambiguate methods with
the same parameter types (e.g. `readFully():String`).

Frost also extends the Markdown link syntax to allow for "simple" links. Normally, you would specify
the link target using a parenthesized URL after the link text, as in `[Object](Object)`. In Frost
documentation it often happens that the link text and link target are the same, so Frost allows you
to omit the link target. This means you can create a link to the `Object` class simply by writing 
`[Object]`.

Zero or more tags follow the description. Tags provide additional documentation such as parameters
and return types. Supported tags include:

* `@param <name> <description>` - provides a description for the named parameter
* `@returns <description>` - describes the method's return value
* `@see <link>` - provides a See Also link
