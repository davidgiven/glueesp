load("//build:build.bzl", "bison", "gperf")

package(default_visibility = ["//visibility:public"])

bison(
	name = "parse",
	src = "parse.y"
)

gperf(
	name = "opcodes",
	src = "opcodes.gperf",
	lookup_function_name = "findOpcode",
)

gperf(
	name = "flopcodes",
	src = "flopcodes.gperf",
	hash_function_name = "hashFlopcode",
	lookup_function_name = "findFlopcode",
)

gperf(
	name = "keywords",
	src = "keywords.gperf",
	hash_function_name = "hashKeyword",
	lookup_function_name = "findKeyword",
)

gperf(
	name = "class",
	src = "class.gperf",
	hash_function_name = "hashClassToken",
	lookup_function_name = "findClassToken",
)

gperf(
	name = "segment",
	src = "segment.gperf",
	hash_function_name = "hashSegToken",
	lookup_function_name = "findSegToken",
)

gperf(
	name = "dword",
	src = "dword.gperf",
	hash_function_name = "hashDWordPart",
	lookup_function_name = "isDWordPart",
)

gperf(
	name = "model",
	src = "model.gperf",
	hash_function_name = "hashModelToken",
	lookup_function_name = "findModelToken",
)

gperf(
	name = "cond",
	src = "cond.gperf",
	hash_function_name = "hashCondToken",
	lookup_function_name = "findCondToken",
)

cc_binary(
	name = "esp",
	srcs = glob(["*.c", "*.h"]) + [
		":parse.c",
		":parse.h",
		":cond.h",
		":opcodes.h",
		":flopcodes.h",
		":keywords.h",
		":class.h",
		":segment.h",
		":dword.h",
		":model.h",
	],
	defines = ["YYDEBUG=1"],
	copts = [
		"-Wno-unused-value",
		"-Wno-unused-but-set-variable",
		"-Wno-unused-variable",
		"-Wno-unused-label",
		"-Wno-switch",
	],
	includes = [""],
	deps = [
		"//lib/core",
		"//lib/fileargs",
		"//lib/gprintf",
		"//lib/localize",
		"//lib/mem",
		"//lib/objfmt",
		"//lib/objswap",
		"//lib/st",
	]
)

