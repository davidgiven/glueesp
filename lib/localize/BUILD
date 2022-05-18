package(default_visibility = ["//visibility:public"])

cc_library(
        name = "localize",
        srcs = glob(["*.c", "*.h"]),
		hdrs = ["localize.h"],
		strip_include_prefix = ".",
		deps = [
			"//lib/core",
			"//lib/hash",
		]
)


