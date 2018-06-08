Need:

fix <invalid> on unknown identifier
Closures
Proper lambda / inner method errors
Documentation
Array literals
Properties
fix command line parsing
error handling (at least Maybe / Error / try, can wait on forcing people to check for errors)
permissions
handle duplicate classes, more than one public class per file, classes not being in the correct path
figure out rules for init / cleanup, make sure I'm following them consistently, check any cases I
can that don't rely on dataflow

using = on two non-trivial choice entries does not work (merely compares rawValue)
Need to figure out & enforce init and cleanup rules
Add tests for things like breaking out of multiple loops w/ memory management
Initializing a @weak <nullable> with null causes a crash
Not getting error from using instance field in class constant
should we be able to create class method and instance method with identical signatures? currently works on creation, being reported as ambiguous on call.
need to error on duplicate methods
'use'ing a class with a parse error can lead to a crash
I/O with System.Process is being indefinitely buffered somewhere; this means interactive programs
        don't work at through PandaRun