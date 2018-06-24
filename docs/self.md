self
====

`self` is a [keyword](keywords.html) which represents the object instance within which an instance
method is running. 

Example:

    class Example {
        method sayHello() {
            Console.writeLine("Hello from \{self}!")
        }

        @override
        function convert():String {
            return "an instance of Example"
        }

        @class
        method main() {
            Example().sayHello()
        }
    }
)

Result: `Hello from an instance of Example!`
