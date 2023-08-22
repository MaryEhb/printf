#include "main.h"
#include <stdarg.h>
/**
 * _printf -  produces output according to a format.
 * @format:  is a character string.
 * Return: he number of characters printed
 */
int _printf(const char *format, ...)
{
	specifier ss[] = {
		{'c', print_char}, {'s', print_string}, {'d', print_digits},
		{'i', print_digits}, {'%', print_percent}};
	unsigned int count = 0, i = 0, j;
	va_list args;

	va_start(args, format);
	if (!format || (format[0] == '%' &&
	(!format[1] || (format[1] == ' ' && !format[2]))))
	{
		va_end(args);
		return (-1);
	}
	while (format[i])
	{
		if (format[i] == '%' && format[i + 1])
		{
			j = 0;
			while (j < 5)
			{
				if (ss[j].spec == format[i + 1])
				{
					count += ss[j].spec_func(args);
					i++;
					break;
				}
				j++;
				if (j == 5)
					count += _putchar('%');
			}
		} else
		{
			count += _putchar(format[i]);
		}
		i++;
	}
	va_end(args);
	return (count);
}
