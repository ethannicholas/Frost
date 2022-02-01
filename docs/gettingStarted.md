Getting Started
===============

Running Online
--------------

The easiest way to try Frost is to use the [online demo](try.html), which includes a number of
example programs. The instructions below are for building and installing Frost locally.

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

### MacOS, Linux

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

(**Note:** if you encounter any errors with locating or linking to ICU, set the ICU_DIR environment
variable to the directory containing the ICU `include` and `lib` directories and re-run cmake.)

This will create the `frostc` compiler in the build directory. You can run Frost's tests to ensure
that it is functioning correctly:

    $ make run_tests

Note that a handful of tests are expected to fail at the moment.

### Windows

Install Visual Studio
Install cmake
Download ICU (as of this writing, icu4c-65_1-Win64-MSVC2017.zip) and unzip to a directory of your
choice
Start a Visual Studio Developer Command Prompt

    > git clone https://github.com/ethannicholas/Frost
    > cd Frost
    > mkdir build
    > cd build
    > set ICU_ROOT_DIR=<path where you unzipped ICU>
    > set CC=clang-cl
    > set CXX=clang-cl
    > set CFLAGS=<-m64 or -m32 depending on whether you are on a 64 bit or 32 bit system>
    > cmake -G "NMake Makefiles" ..
    > nmake

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