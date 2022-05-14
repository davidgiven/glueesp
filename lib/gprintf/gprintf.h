#ifndef GPRINTF_H
#define GPRINTF_H

extern int gprintf(const char* format, ...);
extern int fgprintf(FILE* stream, const char* format, ...);
extern int dgprintf(int fd, const char* format, ...);
extern int sgprintf(char* str, const char* format, ...);
extern int sngprintf(char* str, size_t size, const char* format, ...);

extern int vgprintf(const char* format, va_list ap);
extern int vfgprintf(FILE* stream, const char* format, va_list ap);
extern int vdgprintf(int fd, const char* format, va_list ap);
extern int vsgprintf(char* str, const char* format, va_list ap);
extern int vsngprintf(char* str, size_t size, const char* format, va_list ap);

#endif
