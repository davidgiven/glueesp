glueesp
=======


What?
-----

This is a port of the old Geoworks DOS assembly toolchain, consisting of the
ESP macro assembler and the Glue linker. It's really intended to produce
Geoworks .geo executables, but it's also a highly competent assembler and
linker for producing DOS .com and .exe executables which is mostly compatible with masm.

This was pulled out of [the main Geoworks PC-GEOS
repository](https://github.com/bluewaysw/pcgeos) and then hacked and modified
by me until it builds and mostly runs (as far as I've tested it, which isn't
much) on my modern amd64 Linux PC. The code is extremely old, with timestamps
from about 1988, and C compilers and the machines they've run on have rather
changed since then. It does, however, build without warnings (although I did
have to turn some of the warnings off).

ESP has its own GEOS-specific object file format, but Glue supports GEOS or
Microsoft format object files.


How?
----

To build it you'll need a Unixoid and the bazel build system. This is in Debian
as `bazel-bootstrap` or you can install it yourself from
https://bazel.build/install. Then just do `make`. The two binaries will end up
in `bazel-bin/src/esp/esp` and `bazel-bin/src/glue/glue`.

There's some really good documentation in the GEOS repository; it's kinda
oriented around GEOS, but you can skip those bits (e.g. you probably don't want
to use GEOS classes in DOS!):

  - [Everything about the ESP
	assembler](https://github.com/bluewaysw/pcgeos/blob/master/TechDocs/Markdown/esp.md)

  - [How to use the Glue
	linker](https://github.com/bluewaysw/pcgeos/blob/master/TechDocs/Markdown/Tools/ttools.md#105-glue)


Who?
----

None of this (except for the build scripts) was written by me, David Given
<dg@cowlark.com>.  Feel free to contact me by email at
[dg@cowlark.com](mailto:dg@cowlark.com). You may also [like to visit my
website](http://cowlark.com); there may or may not be something interesting
there.

You probably also want to visit the main GEOS github repository at
https://github.com/bluewaysw/pcgeos where the upstream code is.


License?
--------

All of GEOS is open source software available [under the Apache 2.0
license](https://github.com/davidgiven/glueesp/blob/master/LICENSE), and
therefore everything here is to. I, David Given, declare that all my
modifications fall under the terms of the same license.

