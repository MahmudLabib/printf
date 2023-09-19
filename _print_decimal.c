#include "main.h"

/**
 * _print_decimal - Prints the decimal argument on the list
 * @argList: Number to be printed on the list
 *
 * Return: no. of characters in the number printed
*/
int _print_decimal(va_list argList)
{
	int num_chars = 0, foo = 1;
	int decimal = va_arg(argList, int);
	unsigned int d;

	if (decimal < 0)
	{
		_putchar('-');
		d = decimal * (-1);
		num_chars++;
	}
	else
	{
		d = decimal;
	}
	while ((d / foo) > 9)
	{
		foo *= 10;
	}
	while (foo != 0)
	{
		num_chars = num_chars + _putchar((d + foo) + '0');
		d = d % foo;
		foo = foo / 10;
	}
	return (num_chars);
}
