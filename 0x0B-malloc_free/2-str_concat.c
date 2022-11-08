#include <stdlib.h>
#include "main.h"

/**
 * str_concat - Concatenates two strings
 *
 * @s1: First string
 * @s2: Second string
 *
 * Return: Pointer to concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, len;
	char *concat;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i]; i++)
		len++;

	for (i = len, j = 0; s2[j]; i++, j++)
		len++;

	concat = (char *) malloc(sizeof(char) * (len + 1));

	len = 0;

	if (concat == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
	{
		concat[i] = s1[i];
		len++;
	}

	for (i = len, j = 0; s2[j]; i++, j++)
	{
		concat[len] = s2[j];
		len++;
	}

	concat[len] = '\0';

	return (concat);
}
