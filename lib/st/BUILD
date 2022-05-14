package(default_visibility = ["//visibility:public"])

cc_library(
        name = "st",
		srcs = glob(["*.h", "*.c"]),
        hdrs = ["st.h"],
		strip_include_prefix = ".",
		deps = [
			"//lib/core",
			"//lib/vm",
		],
)


