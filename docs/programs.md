Structure of a Panda Program
============================

A Panda program consists of one or more files with the extension `.panda`. A Panda source file
generally contains a single [package statement](packages.html) and a single public
[class](classes.html), such as:

    Contents of `example/Hello.panda`:

    package example

    class Hello {
        @class
        method main() {
            Console.printLine("Hello, World!")
        }
    }

When Panda tries to find the class `example.Hello` (for instance, if it is referenced in another
file), it will check the search path for a file named `example/Hello.panda`. Because of this, you
will want to use a directory and file struction that matches the package and class names of your
source files.

While a Panda source file *generally* contains a single package statement and a single public class,
they may contain any number of package statements and classes (only one of which may be public).
Panda source files may also contain [bare fields and methods](bareCode.html), not contained within a
class, in order to create a bare [main](main.html) file.