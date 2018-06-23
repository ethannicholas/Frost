Getting Started
===============

Prerequisites
-------------

Panda currently only works under Linux and MacOS. You must have the following prerequisites
installed:

* git
* LLVM 5.0
* ICU (Internationalization Components for Unicode)
* cmake
* gcc

Make sure that all of these software packages are available on your `PATH`.

Building Panda
--------------

Panda's source repository is located at [https://github.com/ethannicholas/Panda]. Clone this
repository using Git and `cd` into it:

    $ git clone https://github.com/ethannicholas/Panda
    $ cd Panda

Then create a build directory and run `cmake`:

    $ mkdir build
    $ cd build
    $ cmake ..

Assuming `cmake` finds all of the prerequisites, it should create a makefile with which to build
Panda:

    $ make

This will create the `pandac` compiler in the build directory. You can run Panda's tests to ensure
that it is functioning correctly:

    $ make run_tests

"Hello, World!"
---------------

Once you have built `pandac` and verified that it works, add its directory to your path and create a
simple Panda program:

    method main() {
        Console.printLine("Hello, World!")
    }

Save this file as `hello.panda`. Now compile and run it:

    $ pandac hello.panda
    $ ./hello
    Hello, World!

Congratulations, you have successfully run your first Panda program! See the
[overview](overview.html) for a rundown of Panda's basic features.
