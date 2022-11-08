#include <stdlib.h>
#include "main.h"
/**
 *create_array - Creates an array of chars, and
 *initializes it with a specific char.
 *@size: Size of array
 *@c: Specific character to initialize with.
 *Return: Character pointer
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	static char *ptr;

	if (size == 0)
		return (NULL);
	ptr = (char *) malloc(size * sizeof(char));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}

	return (ptr);
}
