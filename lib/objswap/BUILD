package(default_visibility = ["//visibility:public"])

cc_library(
        name = "objswap",
        srcs = glob(["*.c", "*.h"]),
		hdrs = ["objSwap.h"],
		strip_include_prefix = ".",
		deps = [
			"//lib/core",
			"//lib/vm",
			"//lib/objfmt",
		]
)


