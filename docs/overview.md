Overview
========

This is a basic overview of Panda's syntax and features, intended to help experienced programmers
quickly get started in Panda.

Comments
--------

    -- line comment

    -* block
       comment *-

    ============================================================================
    This is a documentation comment. Technically, only three ='s are needed to
    begin and end it, but it looks nicer to fill the entire line up.
    ============================================================================

It is legal to nest block comments. [Documentation comments](doccomments.html) are part of Panda's
grammar, and thus can only appear in prescribed locations.

Numeric Literals
----------------

    3
    -12
    2.17
    1e6

Unlike in many languages, there are no suffixes to specify the type of a numeric literal. The number
`3` could be interpted as a signed integer, unsigned integer, or real number, depending on context.

There must be at least one digit after a decimal point, so "`3.`" is not a valid number. Use `3.0`
instead.

Strings
-------

Panda [strings](strings.html) are double-quoted, with support for the same backslashed escape
sequences as C. (FIXME: figure out Unicode escapes).

String literals may have expressions embedded into them using the syntax `\{expression}`, e.g.:

    Console.printLine("Hello, \{firstName} \{lastName}!")

This is called [string interpolation](stringInterpolation.html), and it has quite a few other tricks
up its sleeve.

Panda's strings are immutable, but there is a mutable variant called `MutableString`.

Basic Types
-----------

`Int8`, `Int16`, `Int32`, `Int64`

`UInt8`, `UInt16`, `UInt32`, `UInt64`

`Real32`, `Real64`

`Bit`

`Char8`, `Char16`, `Char32`

`String`

`Bit` is Panda's Boolean type, which has only two values: `true` and `false`.

`Int` is an alias for `Int64`.

`UInt` is an alias for `UInt64`.

`Real` is an alias for `Real64`.

Operators
---------

Arithmetic: `+` (add), `-` (subtract), `*` (multiply), `/` (real divide), `//` (integer divide),
`%` (remainder)

Comparison: `=` (equal), `!=` (not equal), `==` (identical), `!==` (not identical), `<` (less than),
`<=` (less than or equal), `>` (greater than), `>=` (greater than or equal)

Logical: `!` (not), `&` (and), `|` (or), `~` (xor)

Bitwise: `!!` (bitwise not), `&&` (bitwise and), `||` (bitwise or), `~~` (bitwise xor)

Shift: `<<` (shift left), `>>` (shift right)

Assignment: `:=` (assignment), `+=`, `-=`, `*=`, ...

Other: `->` (typecast)

The "identical" and "not identical" operators check whether two objects are *the same object*,
rather than merely containing the same data. For instance, two strings may be equal (they contain
the same sequence of characters) but not identical (they are two distinct copies of the same
string).

Variables
---------

The full syntax for declaring variables is:

    var x:Int := 0, y:Int := 0

Panda supports type interpolation, so you may omit the type declaration when a variable has an
initial value:

    var hello := "Hello, World!"

If a variable does not have an initial value, it must be given a type:

    var hello:String

The `def` keyword is similar to `var`, but defines a value which cannot be reassigned:

    def hello := "Hello, World!"
    hello := "Goodbye!" -- ERROR, cannot reassign a def

Use `def` instead of `var` wherever possible. In idiomatic Panda code, `var` is uncommon.

The `constant` keyword is similar to `def`, but has the additional requirement that the value must
be [Immutable]:

    constant PI := 3.141592653589

There are *no global variables* in Panda. This includes class-level variables - in Java,
`public class Global { public static int foo; }` is effectively a global variable, in that
`Global.foo` is accessibly from anywhere. There is no equivalent in Panda; the only
globally-accessible Panda values are class-level constants.

Conditional Statements and Loops
--------------------------------

Braces are required, even when there is only one statement in the block.
    
    if <expression> {
        ...
    }

    if <expression> {
        ...
    }
    else {
        ...
    }

    while <expression> {
        ...
    }

    do {

    }
    while <expression>

    loop { -- infinite loop, similar to 'while true { ... }'
        ...
    }

Flow Control Statements
-----------------------

    break

    break <label>

    continue

    continue <label>

    return

    return <value>

Any loop may be prefixed with a named `label:`, to make it a target for labeled `break` and
`continue` statements:

    var found := false
    outer: for i in 0 .. count {
        for j in 0 .. count {
            if i != j & array[i] = array[j] {
                found := true
                break outer
            }
        }
    }

Assertions
----------

    assert <expression>

    assert <expression>, "failure message"

    unreachable

`unreachable` is a special assertion which means "the program will never reach this statement". This
is commonly expressed as `assert false` in other languages, but an assertion which always fails is a
compile-time error in Panda and so `assert false` is not actually legal.

Ranges
------

You may define a [Range] using the syntax `[start] .. [end]` or `[start] ... [end]`. With two dots,
the range is *exclusive* and does not include its end. With three dots, it is *inclusive* and does
include its end.

Ranges are important for iteration, selecting subranges of a list, etc. For instance, to grab the
first ten elements of a list, you may write either `list[0 .. 10]` or `list[0 ... 9]`.

You may omit the start value to mean "from the beginning", so `list[..10]` is a shorter way to get
the first ten elements. Omitting the end value means "to the end". You may of course also omit both
the start and end, so `list[..]` is a (shallow) copy of the entire list.

Stepped Ranges
--------------

A [stepped range](SteppedRange) is a range followed by `by <step>`, such as `0 ... 100 by 10`. This
allows you to do things like select every other value of a list (`list[.. by 2]`) or reverse a list
(`list[.. by -1]`).

For Loops
---------

    for <variable> in <collection> {
        ...
    }

`<collection>` may be an [Iterator], [Iterable], [Range], or [SteppedRange].

To count from 1 to 10:

    for i in 1 ... 10 {
        Console.printLine(i)
    }

To count backwards from 100 by 10:

    for i in 100 ... 0 by -10 {
        Console.printLine(i)
    }

Match
-----

`match` is similar to C's `switch` statement:

    match <expression> {
        when <expression>: -- run this code if the value matches
            ...
        when <expression>, <expression>, <expression>: -- match any of these three values
            ...
        otherwise: -- run this code if there are no matches
            ...
    }

There is no fallthrough. Unlike C, the values do not have to be compile-time numeric constants (but
it is more efficient if they are).

`match` also allows for powerful `choice` matching and destructuring, discussed further down.

Methods
-------

    method add(x:Int, y:Int):Int {
        return x + y
    }

`function` is similar to `method`, but a function cannot have side effects: it may not (directly or
indirectly) modify any external-visible state. Since the above `add` method does not modify any
state, it could have been declared as a `function`:

    function add(x:Int, y:Int):Int {
        return x + y
    }

Panda supports overloading by method parameters *and* by return type. Overloading by return type is
used frequently in the core APIs; for instance, many classes provide multiple `convert()` functions
for converting to various other types. The appropriate function is chosen based on context:

    def i:Int     := 32
    def i8:Int8   := i.convert() -- calls Int.convert():Int8
    def i16:Int16 := i.convert() -- calls Int.convert():Int16
    def fail      := i.convert() -- ERROR, ambiguous!

Classes
-------

    class Adder {
        def x:Int

        init(x:Int) {
            self.x := x
        }

        function add(y:Int):Int {
            return x + y
        }
    }

    method main() {
        Console.printLine(Adder(12).add(6)) -- prints 18
    }

Creating Instances
------------------

Panda's constructors are called "`init` methods". As seen above in the `Adder` class, they are
written as `init(<parameters> { ... }`.

There is no `new` operator in Panda. Simply put the arguments to `init` after the name of the class,
as in:

    def a := Adder(12)

Interfaces
----------

    interface Formattable {
        function format(fmt:String):String
    }

Interfaces may provide a *default implementation* of a method:

    interface Formattable {
        function format(fmt:String):String {
            return "<formatted object>"
        }
    }

This default implementation will be used if the class that implements the interface does not provide
its own implementation.

Inheritance
-----------

    class Foo : Bar, Formattable {
        @override
        function format(fmt:String):String {
            return "I am an instance of Foo!"
        }
    }

A class may subclass one class and any number of interfaces.

Choices
-------

A `choice` is a special kind of class which functions similarly to a C++ `enum class`, a tagged
`union`, or some combination thereof.

    choice Direction {
        NORTH
        SOUTH
        EAST
        WEST
    }

    choice Expression {
        NUMBER(Int)
        ADD(Expression, Expression)
        SUB(Expression, Expression)
        MUL(Expression, Expression)
        DIV(Expression, Expression)
        NEGATE(Expression)
    }

When a choice entry has data fields associated with it, as with `Expression` above, the fields may
be extracted using `match`:

    match expr {
        when NUMBER(value):
            Console.printLine(value)
        when ADD(left, right):
            Console.printLine("\{left} + \{right}")
        ...
    }

Annotations
-----------

Annotations are special tokens beginning with `@` which appear before a class, field, or method.
They provide instruction to the compiler about things like access control, safety checks, and so
forth. The most common annotations you will see are:

`@override`: method overrides an inherited method
`@private`: only accessible within the file which contains it
`@class`: method belongs to the class itself, as opposed to instances of the class
`@final`: method may not be overridden or class may not be subclassed
`@pre`: a precondition contract (see "Contracts" below)
`@post`: a postcondition contract (see "Contracts" below)

Contracts
---------

Contracts are rules that a method is required to follow. Methods may have preconditions, which the
caller of the method must obey and are checked prior to entering the method, and postconditions,
which the method itself must obey and are checked prior to returning from it.

Postconditions may refer to the return value of the method as `@return`, and may use
`@pre(<expression>)` to refer to an expression's value before the method's execution. For instance:

    @pre(index >= 0 & index < count)
    @post(count = @pre(count) - 1)
    method remove(index:Int) {
        ...
    }

This remove method ensures that its `index` parameter is inside the valid range, and that running
the method reduces the value of `count` by 1. These checks are similar to `assert`s, in that they
are checked at runtime by default, but this checking can be disabled via a command-line option for
performance reasons.

Values
------

A class which subclasses [Value] is referred to as a *value class*, and behaves differently from
other classes.

Value objects are similar to C structs. They are passed by value rather than reference, do not have
a header (they are "plain old data" objects), and do not have a distinct "identity" they way normal
objects do.

Immutability
------------

Immutability is enforced: a class which subclasses [Immutable] may not contain any mutable fields.
Only immutable objects may be used as `constant`s, and normally only immutable objects may be shared
between multiple threads.

Everything is an Object
-----------------------

Every value in Panda is an object, even basic types such as numbers. The common mathematical
functions are defined directly on the numbers themselves, so you may compute the square root of 2
by writing `2.sqrt()`.

Basic types such as `Int64` are value classes. `Int64`'s data representation is exactly 64 bits
long and, even though it is a full-fledged class, after optimization it collapses down to the exact
same basic processor math instructions you would expect.

Memory
------

Panda features [automatic reference counting](memoryManagement.html). Objects will be promptly
cleaned up when no longer referenced. Objects have a special [`cleanup()`](Object.cleanup) method
which is called before they are destroyed; unlike with typical garbage collectors, this cleanup is
guaranteed to happen as soon as the object is no longer referenced. Because of this, `cleanup()` is
frequently used to tie operations to a particular scope, such as with [ScopedLock]:

    {
        def auto := ScopedLock(lock)
        -- lock is now locked
        ...
        -- 'auto' goes out of scope here; the lock is automatically unlocked at this point
    }

Panda provides [weak references](weakReferences.md) to help handle reference cycles.

Main and Bare Code
------------------

The main entry point into a Panda program is `@class` method named [`main`](main.html), defined on a
class of your choosing, which may have zero parameters or a single `ListView<String>` parameter (to
receive its command line arguments). For convenience, you may also define `main` [outside of any
class](bareCode.html), in which case a class is synthesized to hold it. This means that the simplest
way to write "Hello, World!" in Panda is:

    method main() {
        Console.printLine("Hello, World!")
    }

but you could also write it as:

    class Hello {
        @class
        method main(args:ListView<String>) {
            Console.printLine("Hello, World!")
        }
    }

Non-Nullability
---------------

By default, Panda types are *non-nullable*. If you have a variable defined to contain a `String`:

    def nonnullable:String

then it must contain a `String` and can never be `null`.

Any type may be made *nullable* by appending a question mark:

    def nullable:String?

The variable `nullable` may contain either a `String` or `null`. Even value types such as `Int` may
be made nullable:

    def numbers := Array<Int?>()

This creates an array which can contain either `Int` or `null` entries.

FIXME: get null safety working again...

You may use a nullable type wherever a non-nullable type is expected, but only if Panda can prove
that the value cannot actually be `null` at that particular point. For example:

    def result:Object? := getResult()
    Console.printLine(result) -- ERROR, Console.printLine does not accept null

But if we prove that the value can't be `null` at the point where it is referenced, it works:

    def result:Object? := getResult()
    if result != null {
        Console.printLine(result)
    }
    else {
        Console.printLine("<null>")
    }

Regular Expressions
-------------------

Regular expressions are first-class values in Panda, introduced with the syntax `/regex/`. This
syntax creates a value of type [RegularExpression], which many methods in `String` and
`MutableString` operate on. `RegularExpression` may also be used to directly create a `Matcher`
object to do your own matching.

    Console.printLine("There is a number 57 in this string, can you find it?".parse(/.*?(\d+).*?/))

And, of course, you may directly create `RegularExpression` objects without relying on the built-in
syntax for it.

Tuples
------

A [tuple](tuples.html) is a parenthesized sequence of two or more comma separated values, such as:

    def tuple := (1, 2, "Hi")

Values may be extracted from the tuple by indexing into it:

    def greeting := tuple[2]

Tuples are used to implement multiple return types. A method which needs to return more than one
value can simply return a tuple.

Operator Overloading
--------------------

Operators are overloaded by defining a function with the operator's name, as in `function +` below:

    class Complex : Value {
        def realPart:Real

        def imaginaryPart:Real

        init(realPart:Real, imaginaryPart:Real) {
            self.realPart := realPart
            self.imaginaryPart := imaginaryPart
        }

        function +(other:Complex):Complex {
            return Complex(realPart + other.realPart, imaginaryPart + other.imaginaryPart)
        }

        @override
        function convert():String {
            return "(\{realPart} + \{imaginaryPart}i)"
        }
    }

See [Operator Overloading](operatorOverloading) for more details.

Generic Types
-------------

Here is an example generic class which holds objects of type `T` and pulls them back out at random:

    class Bag<T> {
        @private
        def random := Random.default()

        @private
        def contents := Array<T>()

        method add(object:T) {
            contents.add(object)
        }

        method pull():T {
            def index := random.int(contents.count)
            return contents.removeIndex(index)
        }
    }

You may restrict the types that a generic type parameter supports by specifying a type bound for it.
If, for some reason, you wanted `Bag` to only support [Formattable] types, you would write:

    class Bag<T:Formattable> {
        ...
    }

Generic Methods
---------------

Generic methods are defined very similarly to generic types:

    method sort<T>(l:ListView<T>):ListView<T> {
        ...
    }

Methods as Values
-----------------

Methods are [first-class values](methodValues.html) in Panda. You may assign methods to variables,
return them from other methods, etc.

Referring to a method by its name, without arguments, gives you a reference to the method. With
instance methods, you may refer to the method either as a member of a containing instance (in which
case it takes exactly its declared parameters) or as a member of its class (in which case it
takes an extra parameter representing its `self`). For instance, we can use the `Complex` class
above like this:

    method main() {
        def add := Complex.+
        Console.printLine(add(Complex(3, 1), Complex(7, 2))) -- prints (10 + 3i)
        def add3 := Complex(3, 0).+
        Console.printLine(add3(Complex(12, 2)) -- prints (15 + 2i)
    }

The first reference to `Complex.+` gives us a method reference which requires an extra parameter to
represent its `self`, while the second reference is taken out of a `Complex` instance and thus
already has a `self`, so it needs only its single declared `Complex` parameter.

Method names are often ambiguous. For instance, there are several [Int.+] functions with various
parameter types, which means that:

    def add := Int.+

produces an error. You need to give Panda a hint as to which `Int.+` function you want by declaring
its type. Function types are written `(parameters)=>(return)`, so a function which takes two `Int`s
and returns an `Int` has type:
    
    (Int, Int)=>(Int)

This allows us to specify which `Int.+` we want:

    def add:(Int, Int)=>(Int) := Int.+
    Console.printLine(add(17, 6)) -- prints 23

Note that since we grabbed `+` out of the `Int` class, it takes an extra parameter for its `self`.
We could also have referred to `+` as a member of a specific `Int` instance:

    def add3:(Int)=>(Int) := 3.+
    Console.printLine(add3(8)) -- prints 11

In addition to function types like `(Int)=>(Int)`, there are method types (`(Int)=&>(Int)`),
immutable function types (`(Int)=>*(Int)`), and immutable method types (`(Int)=&>*(Int)`). These are
described on the [Method Types](methodTypes.html) page.

Anonymous Methods
-----------------

Inside of a method, you may create anonymous method values:

    function getAdder(x:Int):(Int)=>(Int) {
        return function(y:Int):Int {
            return x + y
        }
    }

These inner methods have access to any `def`, `constant`, or parameter in scope, but may not
capture `var`s.

Named Inner Methods
-------------------

    method dump() {
        method indent(indentation:Int, s:String) {
            Console.printLine(" " * indentation + s)
        }
        Console.printLine("Name:")
        indent(4, "First: \{firstName}")
        indent(4, "Middle: \{middleName}")
        indent(4, "Last: \{lastName}")
    }

This is syntactic sugar for:

    method dump() {
        def indent := method(indentation:Int, s:String) {
            Console.printLine(" " * indentation + s)
        }
        ...
    }

Note that because of this, overloading inner methods is not possible.

Lambdas
-------

[Lambdas](lambdas.html) are a shorthand syntax for creating anonymous functions which return the
value of an expression.

    x:Int => x.abs() -- equivalent to function(x:Int):Int { return x.abs() }

    (x:Int, y:Int) => x + y

If the type of the lambda is implied by its context (for instance, passing it to a method which
expects a particular function type), you may omit the types:

    x => x.abs()

    (x, y) => x + y

And that's it!
--------------

That provides at least a brief overview of all of the major features of Panda. To learn more, take a
look at the links below:

[pending]