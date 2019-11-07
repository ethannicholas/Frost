The Frost Programming Language
==============================

Frost is a high-level, general-purpose multiparadigm programming language with support for:

* First-class immutable objects and value types
* First-class functions and closures
* Type inference
* Non-nullable references, static proofs of `null` safety
* Contracts (preconditions and postconditions)
* Tuples
* Actor model threading

And many other features. This is what a simple Frost program looks like:

    ========================================================
    Simple version of the Unix `head` utility. Reads a file
    and outputs the first `count` lines from it to the
    standard output stream.

    @param path the file to read
    @param count the number of lines to display
    ========================================================
    method head(path:File, count:Int) {
        try {
            path.lines()[..count].apply(Console.printLine)
        }
        fail(error) {
            abort(error.message)
        }
    }

    method abort(msg:String) {
        Console.printLine(msg)
        System.exit(1)
    }

    method main(args:ListView<String>) {
        if args.count != 3 {
            abort("usage: head <path> <count>")
        }
        def count := args[2].asInt
        if count == null {
            abort("error: '\{args[2]}' is not an integer")
        }
        head(File(args[1]), count)
    }

You can see more examples by [trying Frost directly in your Web browser!](try.html).

For a more comprehensive overview of Frost's syntax and features, see the 
[Syntax Overview](overview.md) or [API documentation](api/frost/index.html). If you'd like to
install the Frost compiler for yourself, see the [Getting Started](gettingStarted.md) page.
