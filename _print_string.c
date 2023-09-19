#include "main.h"

/**
 * _print_string - Prints the formated string
 * @argList: String to be printed(argument on the list)
 *
 * Return: Lenght of the string(num of chars)
 */
int _print_string(va_list argList)
{
	int i;
	char *s = va_arg(argList, char*);

	if (s == NULL)
	{
		s = "(null)";
	}
	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
	}
	return (i);
}
