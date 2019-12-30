Expressions
===========

An *expression* is, in simple terms, "something which has a value". Numbers and strings are
expressions. Numbers plus numbers are expressions, and so are function calls. More formally,
expressions can be:

A single term, such as:

* A numeric literal
* A string literal
* A `Bit` literal
* [null](null.md)
* [self](self.md)
* [super](super.md)
* A variable reference
* An [array literal](arrayLiterals.md)
* A [tuple](tuples.md)
* An [inline method](inlineMethods.md)
* A [method reference](methodReferences.md)

Or a compound expression, such as:

* `<expression>` `<binaryOperator>` `<expression>` (arithmetic, logic, etc.)
* `<unaryOperator> <expression>` (unary minus, logical not, bitwise not)
* `<expression>.<field>` (field access)
* `<expression>[<expression>]` (indexing)
* `<expression>(<expression>, <expression>...) (method call)

Precedence
----------

In standard mathematics, the expression "1 + 6 * 7" evaluates to 43: you perform the multiplication
first, and then the addition. This is formalized in the notion of *operator precedence*; that is,
certain [operators](operators.md) such as multiplication have a higher priority than other
operators such as addition.

Frost's operator precedence, from highest to lowest, is:

1. `.`, `->`, `()`, `[]`
2. `-` (unary), `!`, `!!`
3. `*`, `/`, `//`, `%`, `<<`, `>>`
4. `&&`, `||`, `~~`
5. `+`, `-` (binary)
6. `..`, `...`
7. `=`, `!=`, `==`, `!==`, `>`, `<`, `>=`, `<=`
8. `&`, `~`,
9. `|`