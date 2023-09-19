#include "main.h"

/**
 * _print_decimal - Prints the decimal argument on the list
 * @argList: Number to be printed on the list
 *
 * Return: no. of characters in the number printed
*/
int _print_number(va_list argList)
{
	int n, var = 1, length = 0;
	unsigned int dino;

	n = va_arg(argList, int);

	if (n < 0)
	{
		_putchar('-');
		dino = n * -1;
		length++;
	}
	else
	{
		dino = n;
	}

	while (dino / var > 9)
	{
		var = var * 10;
	}
	while (var != 0)
	{
		length = length + _putchar(dino / var + '0');
		dino = dino % var;
		var = var / 10;
	}
	return (length);
}
