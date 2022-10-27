#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strcat  - concatenate two strings
 * @dest: first string
 * @src: second string
 * Return: A pointer to the resulting string
 */
char *_strcat(char *dest, char *src)
{
	char *res;

	res = strcat(dest, src);
	return (res);
}
