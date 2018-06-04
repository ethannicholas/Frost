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