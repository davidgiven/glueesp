package(default_visibility = ["//visibility:public"])

cc_library(
        name = "vm",
        srcs = glob(["*.c", "*.h"]),
        hdrs = ["vm.h"],
        deps = [
                "//lib/core",
                "//lib/mem",
                "//lib/lmem",
                "//lib/fileutil",
        ],
		strip_include_prefix = ".",
)

