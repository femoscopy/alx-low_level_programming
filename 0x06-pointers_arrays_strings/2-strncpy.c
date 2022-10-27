#include "main.h"
#include <string.h>
/**
 * _strncpy -  function that copies a string
 * @src: second string
 * @dest: first string
 * @n: number
 * Return: void
 */
char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
