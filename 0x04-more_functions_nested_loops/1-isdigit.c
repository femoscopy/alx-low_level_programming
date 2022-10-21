#include "main.h"
/**
 * _isdigit - Printing small letters
 * @c: a number
 * Return: whether the number is between 0 and 9
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
