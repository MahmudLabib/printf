#include "main.h"

/**
 * _print_character - Prints the formated char
 * @argList: Parameter of the list passed to _printf
 *
 * Return: 1, for printing one character
 */
int _print_character(va_list argList)
{
	char c = (char)va_arg(argList, int);

	_putchar(c);

	return (1);
}
