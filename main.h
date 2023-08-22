#ifndef MAIN_H
#define MAIN_H
#include <unistd.h>
#include <string.h>
#include <stdarg.h>

int _printf(const char *format, ...);

/* HELPER FUNCTIONS */
int print_char(char c);
int print_string(char *str);
int _putchar(char c);
int print_char(va_list args);

#endif
