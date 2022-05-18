package(default_visibility = ["//visibility:public"])

cc_binary(
        name = "printsls",
        srcs = glob(["*.c", "*.h"]),
		includes = [""],
		copts = [
			"-Wno-unused-value",
			"-Wno-unused-but-set-variable",
			"-Wno-unused-variable",
		],
        deps = [
                "//lib/core",
                "//lib/gprintf",
                "//lib/objfmt",
                "//lib/objswap",
                "//lib/st",
                "//lib/vm",
        ],
)



