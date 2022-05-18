#ifndef CONFIG_H
#define CONFIG_H

#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include <stdarg.h>
#include <stdint.h>
#include <stdbool.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <strings.h>
#include <unistd.h>
#include <string.h>
#include <errno.h>

typedef uint8_t* genptr;

typedef uint8_t byte;
typedef uint16_t word;
typedef uint32_t dword;

typedef void* Opaque;
typedef void* Address;

typedef bool Boolean;
typedef void* malloc_t;

#define TRUE true
#define FALSE false

#define _LINUX 1

#define QUOTED_SLASH "/"
#define PATHNAME_SLASH '/'
#define SH_DENYWR 0
#define SH_DENYRD 0
#define SH_DENYRW 0
#define SH_DENYNO 0
#define SH_DENYNONE 0

#define O_BINARY 0
#define O_TEXT 0

#endif
