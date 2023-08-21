#include "main.h"
#include <unistd.h>
#include <stdarg.h>

/**
 * print_char - writes the character c to stdout
 * @args: A va_list containing the arguments
 * Return: 1.
 */
int print_char(va_list args)
{
        char c = va_arg(args, int);

        _putchar(c);
        return (1);
}
