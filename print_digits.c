#include "main.h"
#include <stdarg.h>
#include <stdbool.h>
/**
 * print_digits - Placeholder for printing a decimal (integer).
 * @args: A va_list containing the arguments.
 * Return: The length of the printed integer.
 */
int print_digits(va_list args)
{
	int numDigits = 1, temp, i = 1, divisor = 1;
	int n = va_arg(args, int);
	bool isneg = 0;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
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

	while (divisor)
	{
		_putchar('0' + n / divisor);
		n %=  divisor;
		divisor /= 10;
	}
	return (!isneg ? numDigits : numDigits + 1);
}
