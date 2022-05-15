load("//build:build.bzl", "bison", "gperf")

package(default_visibility = ["//visibility:public"])

bison(
	name = "parser",
	src = "parse.y"
)

gperf(
	name = "tokens",
	src = "tokens.gperf",
	lookup_function_name = "in_word_set",
)

gperf(
	name = "segattrs",
	src = "segattrs.gperf",
	lookup_function_name = "findSegAttr",
	hash_function_name = "hashSegAttr",
)

cc_binary(
        name = "glue",
        srcs = glob(["*.c", "*.h"]) + [
				":parser.c",
				":parser.h",
				":tokens.h",
				":segattrs.h"
		],
		includes = [""],
		defines = ["YYDEBUG=1"],
		copts = [
			"-Wno-unused-value",
			"-Wno-unused-but-set-variable",
			"-Wno-unused-variable",
		],
        deps = [
                "//lib/core",
                "//lib/fileargs",
                "//lib/fileutil",
                "//lib/gprintf",
                "//lib/hash",
                "//lib/lmem",
                "//lib/mem",
                "//lib/objswap",
                "//lib/st",
                "//lib/vm",
        ],
)


