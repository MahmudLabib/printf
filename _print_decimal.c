#include "main.h"

/**
 * _print_decimal - Prints the decimal argument on the list
 * @argList: Number to be printed on the list
 *
 * Return: no. of characters in the number printed
*/
int _print_decimal(va_list argList)
{
	int num, foo = 1;
	int len = 0;
	unsigned int d;

	num = va_arg(argList, int);

	if (num < 0)
	{
		_putchar('-');
		d = num * -1;
		len++;
	}
	else
	{
		d = num;
	}

	while (d / foo > 9)
	{
		foo = foo * 10;
	}
	while (foo != 0)
	{
		len = len + _putchar(d / foo + '0');
		d = d % foo;
		foo = foo / 10;
	}
	return (len);
}
