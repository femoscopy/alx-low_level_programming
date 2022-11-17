#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_numbers - Prints numbers followed by a
 * newline
 * @separator: String to be printed between numbers
 * @n: Number of arguments
 *  Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list arg_param;

	va_start(arg_param, n);

	for (i = 0; i < n; i++)
	{
		unsigned int args = va_arg(arg_param, unsigned int);

		if (i != (n - 1) && separator != NULL)
			printf("%d%s", args, separator);
		else
			printf("%d", args);
	}
	printf("\n");

	va_end(arg_param);
}
