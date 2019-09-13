Structure of a Frost Program
============================

A Frost program consists of one or more files with the extension `.frost`. A Frost source file
generally contains a single [package statement](packages.md) and a single public
[class](classes.md), such as:

    Contents of `example/Hello.frost`:

    package example

    class Hello {
        @class
        method main() {
            Console.printLine("Hello, World!")
        }
    }

When Frost tries to find the class `example.Hello` (for instance, if it is referenced in another
file), it will check the search path for a file named `example/Hello.frost`. Because of this, you
will want to use a directory and file structure that matches the package and class names of your
source files.

While a Frost source file *generally* contains a single package statement and a single public class,
they may contain any number of package statements and classes (only one of which may be public).
Frost source files may also contain [bare fields and methods](bareCode.md), not contained within a
class, in order to create a bare [main](main.md) file.