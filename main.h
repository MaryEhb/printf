#ifndef _PRINTF_
#define _PRINTF_

#include <stdarg.h>
#include <stdlib.h>

/**
 * struct specifier - specifiers grouped with their functions
 * @spec: specifier
 * @spec_func: specifier function to print output and return len of printed
 */

struct specifier
{
	char spec;
	int (*spec_func)();
};

typedef struct specifier specifier;

int _putchar(char c);
int print_char(va_list args);
int _printf(const char *format, ...);
int print_digits(va_list args);
int print_string(va_list args);
int print_percent(void);

#endif
