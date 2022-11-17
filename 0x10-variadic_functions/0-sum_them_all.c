#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - Return the sum of all it's
 * parameters
 * @n: number of arguments
 * Return: Integer sum of all arguments
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum = 0;

	va_list arg_param;

	va_start(arg_param, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(arg_param, int);
	}

	va_end(arg_param);

	return (sum);
}
