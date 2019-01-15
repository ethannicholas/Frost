The Frost Programming Language
==============================

Frost is a high-level, general-purpose multiparadigm programming language with support for:

* First-class immutable objects and value types
* First-class functions and closures
* Type inference
* Non-nullable references, static proofs of `null` safety
* Contracts (preconditions and postconditions)
* Tuples
* "Sane" operator overloading
* Actor model threading

And many other features. This is what a simple Frost program looks like:

    =======================================================
    Simple version of the Unix `head` utility. Reads a file
    and outputs the first `count` lines from it to the
    standard output stream.

    @param path the file to read
    @param count the number of lines to display
    =======================================================
    method head(path:File, count:Int) {
        path.lines()[..count].apply(Console.printLine)
    }

    method main(args:ListView<String>) {
        method error(msg:String) {
            Console.errorStream().printLine(msg)
            System.exit(1)
        }
        if args.count != 3 {
            error("usage: head <path> <count>")
        }
        def count := args[2].convert()->Int?
        if count = null {
            error("error: '\{args[2]}' is not an integer")
        }
        head(File(args[1]), count)
    }

For a more comprehensive overview of Frost's syntax and features, see the 
[Syntax Overview](overview.html) or [API documentation](api/index.html). If you'd like to try Frost
out for yourself, see the [Getting Started](gettingStarted.html) page.
