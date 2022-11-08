#include <stdlib.h>
#include "main.h"
/**
 * _strdup - Returns a pointer to a newly allocated
 * space in memory, which contains a copy of the
 * string given as a parameter.
 * @str: String value to duplicate
 * Return: Pointer to duplicated string
 */
char *_strdup(char *str)
{
	char *dup;
	int len = 0;
	int i;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
		len++;
	dup = (char *) malloc(sizeof(char) * (len + 1));

	if (dup == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
		dup[i] = str[i];
	return (dup);
}
