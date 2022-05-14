package(default_visibility = ["//visibility:public"])

cc_library(
        name = "objfmt",
        srcs = glob(["*.c", "*.h"]),
		hdrs = ["objfmt.h"],
		strip_include_prefix = ".",
		deps = [
			"//lib/core",
			"//lib/vm",
			"//lib/st",
		]
)


