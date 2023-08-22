#include "main.h"
#include <stdarg.h>
#include <stdbool.h>
#include <limits.h>
/**
 * print_digits - Placeholder for printing a decimal (integer).
 * @args: A va_list containing the arguments.
 * Return: The length of the printed integer.
 */
int print_digits(va_list args)
{
	unsigned int numDigits = 1, temp, i = 1, divisor = 1;
	int n = va_arg(args, int);
	bool isneg = 0;

	if (n == 0)
	{
		_putchar('0');
		return (1);
	} else if (n < 0)
	{
		if (n == INT_MIN)
			n = -(n + 1);
		else
			n = -n;

		_putchar('-');
		isneg = 1;
	}

	temp = n;
	while (temp / 10)
	{
		numDigits++;
		temp /= 10;
	}
	while (i < numDigits)
	{
		divisor *= 10;
		i++;
	}
	temp = n;
	while (divisor)
	{
		_putchar('0' + (temp / divisor));
		temp %=  divisor;
		divisor /= 10;
	}
	return (!isneg ? numDigits : numDigits + 1);
}
