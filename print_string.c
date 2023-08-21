#include "main.h"
#include <stdarg.h>

/**
 * print_string - Prints a string and returns its length.
 * @args: A va_list containing the arguments.
 * Return: The length of the printed string.
 */

int print_string(va_list args)
{
	unsigned int len = 0;
	char *s = va_arg(args, char *);

	if (!s)
		s = "(null)";

	while (s && s[len])
	{
		_putchar(s[len]);
		len++;
	}
	return (len + 1);
}
