#include <stdlib.h>
#include "function_pointers.h"
/**
 * array_iterator - Executes a function given as a
 * parameter on each element of an array.
 *  @array: Array of functions to execute
 *  @size: Size of array
 *  @action: Pointer tonfunction to execute
 *  Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
