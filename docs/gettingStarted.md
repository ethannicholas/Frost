Getting Started
===============

Prerequisites
-------------

Frost currently only works under Linux and MacOS. Building Frost requires the following
prerequisites:

* clang (4.0 or higher)
* cmake
* ICU (Internationalization Components for Unicode)

Make sure that all of these software packages are available on your `PATH`.

Building Frost
--------------

Frost's source repository is located at [https://github.com/ethannicholas/Frost]. Clone this
repository using Git and `cd` into it:

    $ git clone https://github.com/ethannicholas/Frost
    $ cd Frost

Then create a build directory and run `cmake`:

    $ mkdir build
    $ cd build
    $ cmake ..

Assuming `cmake` finds all of the prerequisites, you should now be able to build Frost:

    $ make -j

This will create the `frostc` compiler in the build directory. You can run Frost's tests to ensure
that it is functioning correctly:

    $ make run_tests

"Hello, World!"
---------------

Once you have built `frostc` and verified that it works, add its directory to your PATH and create a
simple Frost program:

    method main() {
        Console.printLine("Hello, World!")
    }

Save this file as `hello.frost`. Now compile and run it:

    $ frostc hello.frost
    $ ./hello
    Hello, World!

Congratulations, you have successfully run your first Frost program! See the
[overview](overview.md) for a rundown of Frost's basic features.