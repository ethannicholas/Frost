Basic Types
===========

All [types](types.md) in Frost are subclasses of [frost.core.Object], but some basic types are so
integral to programming that they enjoy special treatment within the compiler. All of these types
are in the [package](packages.md) `frost.core`, so that the fully-qualified name of e.g. the 32-bit
signed integer type is `frost.core.Int32`.

Numbers
-------

Frost numbers come in three basic flavors, `Int` (signed integer), `UInt` (unsigned integer), and
`Real` (floating point), in several sizes. The following number types are supported:

* `Int8` - 8 bit signed integer, range -128 to 127
* `Int16` - 16 bit signed integer, range -32,768 to 32,767
* `Int32` - 32 bit signed integer, range -2,147,483,648 to 2,147,483,647
* `Int64` - 64 bit signed integer, range -9,223,372,036,854,775,808 to 9,223,372,036,854,775,807
* `UInt8` - 8 bit unsigned integer, range 0 to 255
* `UInt16` - 16 bit unsigned integer, range 0 to 65,535
* `UInt32` - 32 bit unsigned integer, range 0 to 4,294,967,296
* `UInt64` - 64 bit unsigned integer, range 0 to 18,446,744,073,709,551,615
* `Real32` - 32 bit floating point number, range -3.4 x 10^38 to 3.4 x 10^38
* `Real64` - 64 bit floating point number, range -1.7 x 10^308 to 1.7 x 10^308
* `Int` - either 32 or 64 bit signed number, depending on environment
* `UInt` - either 32 or 64 bit unsigned number, depending on environment
* `Real` - either 32 or 64 bit real number, depending on environment

Numbers may be represented in programs using any of the following:

* Decimal integers, e.g. `7361` or `-65`
* Decimal reals, e.g. `12.5` or `.3451`
* Exponential notation, e.g. `1.2e10` (1.2 x 10^10) or `0.1e-5` (0.1 x 10^-5)
* Hexadecimal with a leading `0x`, e.g. `0x1B6A`
* Binary with a leading `0b`, e.g. `0b1110001`

Bit
---

`Bit` is Frost's boolean logic type. `Bit` has exactly two possible values, `true` or `false`,
represented by the literal words `true` and `false` in a program. Bit values are generally produced
by the [logical operators](operators.md#Logic), and are often used in control statements such as
[`if`](statements.md#if), [`while`](statements.md#while), and [`do`](statements.md#do).

Char
----

Frost has three different sizes of characters: [Char8], [Char16], and [Char32]. [String]s can
provide their characters in any of the three sizes, but String's API is primarily focused on
`Char32`.

Frost does not have a dedicated `Char` literal syntax. Any single-character string literal, such as
`"Q"` or `"🐼"`, may be used in a context where a `Char` that can hold it is expected.

String
------

Frost strings are represented by a single- or double-quoted sequence of characters that does not
contain a newline character. Within a string, the following escape sequences are recognized:

* `\n` - a newline (code point 10)
* `\r` - a carriage return (code point 13)
* `\t` - a tab (code point 9)
* `\"` - a literal double quote
* `\\` - a literal backslash
* `\{...}` - a [*string interpolation*](stringInterpolation.md) expression