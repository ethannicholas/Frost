Bare Code
=========

Normally, all Frost code is contained inside of [classes](classes.html). A single file in your
program, however, may consist of "bare code" which is not part of a class:

    def random := Random.default()    

    method main() {
        Console.printLine("Die roll is: \{random.int(6) + 1}")
    }

Leaving off the class definition like this is purely a means of reducing the boilerplate involved in
writing simple programs. The compiler still internally creates a class to hold the
[variables](variables.html) and [methods](methods.html) defined in this file, as if you had written:

    class BareCode {
        def random := Random.default()

        method bareCodeMain() {
            Console.printLine("Die roll is: \{random.int(6) + 1}")
        }

        @class
        method main() {
            BareCode().bareCodeMain()
        }
    }

A file containing any bare fields or methods *must* contain a `main()` or `main(ListView<String>)`
method.