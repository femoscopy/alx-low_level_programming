#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "variadic_functions.h"
/**
 * print_strings - Prints strings followed by a
 *  new line
 *  @separator: String to be printed between strings
 *  @n: Number of strings passed to function
 *  Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list arg_param;

	va_start(arg_param, n);

	for (i = 0; i < n; i++)
	{
		char *str = va_arg(arg_param, char*);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(arg_param);
}
