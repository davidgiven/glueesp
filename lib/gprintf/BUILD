package(default_visibility = ["//visibility:public"])

cc_library(
        name = "gprintf",
        srcs = glob(["*.c", "*.h"]),
		hdrs = ["gprintf.h"],
		strip_include_prefix = ".",
		deps = [
			"//lib/core",
			"//lib/st",
		]
)


