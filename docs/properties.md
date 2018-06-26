Properties
==========

A `property` is a value of an object which is used like a [field](fields.html), but which actually
results in a [function](functions.html) call when getting its value and a [method](methods.html)
call when setting its value. There are many advantages of properties, such as:

1. The ability to perform additional actions when a property is set
2. The ability to compute property values at runtime, without having to store them in the object
3. The ability to override property behaviors by subclassing

Properties are defined using a syntax very similar to fields:

    property size:Int

Unlike a field, this declaration does not increase the size of a the object containing it or
otherwise allocate memory to store the `size` property. Instead, whenever the `size` property is
read, a function named `get_size()` is called, and whenever the `size` property is written, a method
named `set_size()` is called. Here is a complete, working property example:

    class Zeroes {
        @private
        def contents:Array<Int>

        property size:Int

        function get_size():Int {
            return contents.count
        }

        method set_size(size:Int) {
            while contents.count > size {
                contents.removeIndex(0)
            }
            while contents.count < size {
                contents.add(0)
            }
        }

        @override
        function convert():String {
            return contents.convert()
        }
    }

    method main() {
        def z := Zeroes()
        Console.printLine(z.size) -- prints "0"
        z.size := 5
        Console.printLine(z) -- prints [0, 0, 0, 0, 0]
    }

It is possible to create a read-only or write-only property by defining only the `set_` or `get_`
method, respectively, but at least one of the two must be defined.
