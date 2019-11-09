Tuples
======

A *tuple* is an ordered sequence of two or more values, which (unlike in an [Array]) may be of
different types. The individual elements in a tuple are extracted using the index operator, just
like with arrays.

    -- testcase TupleIntro(Simple)
    def suffix := ("KB", 1024)
    Console.printLine(suffix[0]) -- writes "KB"

If the index is a constant integer (as in `suffix[0]`), the type is determined by the element at
that index: in this case, `suffix[0]` has type `frost.core.String`and `suffix[1]` has type
`frost.core.Int`. 

If the index is not a constant, as in `suffix[i]`, the compile-time type is determined from the
union of all of the tuple's element types. In this case, the most specific type that could represent
both `frost.core.String` and `frost.core.Int` is `frost.core.Immutable`, so `suffix[i]` has
compile-time type `frost.core.Immutable`.

Destructuring
-------------

You may assign into multiple variables simultaneously (surrounded by parentheses) in order to
extract values from a tuple, or "destructure" it.

    -- testcase TupleDestructuring(Simple)
    def suffix := ("KB", 1024)
    def (name, value) := suffix
    Console.printLine(name)  -- prints "KB"
    Console.printLine(value) -- prints "1024"

The number of assignment targets must equal the number of tuple elements. This even works for nested
tuples:

    -- testcase TupleNested
	def ((this, is), a, (nested, tuple)) := (("This", "is"), "a", ("nested", "tuple"))

You may ignore tuple values you do not care about using an underscore ('_') as the "name" of a
value:

    -- testcase TupleIgnore(ValueInt)
    def suffix := ("KB", 1024)
    -- ignore the text, only extract the numeric value
    (_, value) := suffix

Destructuring is available wherever a variable is being declared, such as in a `for` loop:

    -- testcase TupleFor(Simple)
    for (i, v) in ["Zero", "One", "Two", "Three"].enumeration {
        Console.printLine("\{i}: \{v}")
    }

or when matching a [choice](choices.md):

    -- testcase TupleChoice(Complete)
    choice Node {
        NULL
        PERSON((String, String, String), String)
    }

    method main() {
        def p := Node.PERSON(("Smith", "Robert", "J."), "555-1212")
        match p {
            when Node.PERSON((last, first, middle), phone) {
                Console.printLine("\{first} \{middle} \{last}: \{phone}")
            }
        }
    }

Interfaces
----------

If every element in a tuple implements the [Equatable] interface, the tuple itself will likewise be 
`Equatable`. If every element in a tuple implements the [HashKey] interface, the tuple itself will
likewise be a `HashKey`.