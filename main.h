#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>

/**
 * struct specifier - contains pointer to funcs and p to chars to
 * choos the right func while looping throw the format
 * @flag: pointer to char that ll be check
 * @fPointer: pointer to the func the will exec
 */
typedef struct specifier
{
	char *flag;
	int (*fPointer)(va_list argList);
} specifier_t;

int _printf(const char *format, ...);
int (*check(const char *next_char, int d))(va_list);

/* format_specifier.c	contains_tasks{0, 1} */
int _print_character(va_list argList);
int _print_string(va_list argList);
int _print_decimal(va_list argList);
int _print_integer(va_list argList);

/* convert_number.c module */
int _print_hex(va_list argList);
int _print_HEX(va_list argList);
int _print_binary(va_list argList);
int _print_octal(va_list argList);

/*print functions*/
int _putchar(char c);
#endif
