The main() method
=================

As with many other programming langauges, the entry point to a Frost program - the method which is
executed when the program starts up - is called `main()`. There are several ways to define `main()`:

As a `@class` method taking no parameters:

    class Hello {
        @class
        method main() {
            Console.printLine("Hello, World!")
        }
    }

As a `@class` method taking `ListView<String>`, which receives the program's command-line
arguments:

    class Hello {
        @class
        method main(args:ListView<String>) {
            Console.printLine("Hello called with arguments: \{args}")
        }
    }

And finally, you may use [bare code](bareCode.md) to put a `main()` method at the top level of a
file, without an enclosing class (and either with or without a `ListView<String>` parameter):

    method main() {
        Console.printLine("No enclosing class!")
    }

No matter how it is defined, the `main()` function is the program's entry point and will be executed
when the program is started.