package(default_visibility = ["//visibility:public"])

cc_library(
        name = "fileargs",
		srcs = glob(["*.c", "*.h"]),
        hdrs = glob(["*.h"]),
		strip_include_prefix = ".",
		deps = [
			"//lib/core",
			"//lib/fileutil"
		],
)


