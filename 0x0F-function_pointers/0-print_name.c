#include <stddef.h>
#include "function_pointers.h"
/**
 * print_name - Prints a name
 * @name: Name to print.
 * @f: A pointer to the function that prints @name
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
		f(name);
}
