#include "main.h"
/**
 * _print_binary - convert decimal to binary. Base 10 to Base 2
 * @argList: argument pointer
 * Description: reverse the module on recursive division
 * Return: length of the binary number
 */
int _print_binary(va_list argList)
{
	unsigned int n = va_arg(argList, int), binary[1024];
	int i = 0, j = 0;

	if (n == 0)
	{
		_putchar('0');
		return (1);
	}
	while (n > 0)
	{
		binary[i] = n % 2;
		n /= 2;
		i++;
	}
	for (j = i - 1; j >= 0; j--)
	{
		_putchar(binary[j] + '0');
	}
return (i);
}
