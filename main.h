#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stddef.h>

int _printf(const char *format, ...);
int printf_char(va_list val);
int printf_string(va_list val);
int _strlen(char *str);
int _strlenc(const char *str);
int _putchar(char c);
int print_37(void);
int _print_string(char *str);
int print_dcm(va_list args);
int print_int(va_list args);
int _print_int(int num);

#endif
