#ifndef main_h
#define main_h

#include <stdarg.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int _printf(const char *format, ...);
int _putchar(char c);
void printeg(int num, int *count);
void fswitch(char specifier, va_list args, int *count);
void _printstr(char *sstr, char *null_str, int *count);

#endif
