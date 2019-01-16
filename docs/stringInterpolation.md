String Interpolation
====================

*String interpolation* is the ability to embed expressions directly into string literals:

    Console.printLine("The answer is \{7 * 9}!")

This displays `The answer is 63!`.

String interpolations are introduced with a backslash followed by a left curly brace (`\{`) and
ended by a right curly brace (`}`). In addition to simply embedding expressions, string
interpolation allows for *format strings*:

    Console.printLine("The answer in hexadecimal is 0x\{7 * 9:x}!")

This displays `The answer in hexadecimal is 0x3f!`. This works because [Int](Int64) implements the
[Formattable] interface and understands the format string "x" to mean "format in hexadecimal". Other
built-in types have their own ideas of how to interpret format strings, and you may implement
`Formattable` on your own types to add support for your own format strings.

String interpolation also allows for *field specifiers*:

    Console.printLine("This answer is always at least six digits long: \{7 * 9,0>6}")

This displays `This answer is always at least six digits long: 000063`. The field specifier `0>6`
means "use the character `"0"` to right-align this value into a string at least 6 characters long".
You may also use `<` to left-align and `^` to center.

Format strings and field specifiers may be combined:

    Console.printLine("I calculated something: \{7 * 9,#^8:x}")

This displays `I calculated something: ###3f###`.
