#include "main.h"

/**
 * _printf - Print formatted data to stdout
 * @format: pointer to  string that contains
 * the text to be written to stdout
 * 
 * Return: Number of characters printed exclude 'NULL',
 * (-1) if format is not valid
*/
int _printf(const char *format, ...)
{
	int numChars = 0, i = 0;
	va_list argList;

	va_start(argList, format);

	/* check format is valid*/
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);
	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	for (; format[i]; i++)
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '%')
			{
				_putchar('%');
				numChars++;
				i = i + 1;
			}
			else if (check(format, i+1) != NULL)
			{
				numChars += check(format, i + 1)(argList);
				i = i + 1;
			}
			else
			{
				_putchar(format[i]);
				numChars++;
			}
		}
		else
		{
			_putchar(format[i]);
			numChars++;
		}
	}
	va_end(argList);
	return (numChars);
}
