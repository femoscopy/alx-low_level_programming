#include "main.h"
/**
 * _isalpha - determines if the character is alphabetic
 * @c: the character to be checked as alphabetic or not
 *
 * Return: 0 is the letter is alphabetic otherwise 1
 */
int _isalpha(int c)
{
	int lower, upper, count;

	count = 0;
	for (lower = 97; lower <= 122; lower++)
	{
		if (c == lower)
		{
			count++;
			break;
		}
	}
	for (upper = 65; upper <= 91; upper++)
	{
		if (c == upper)
		{
			count++;
			break;
		}
	}
	if (count == 0)
		return (0);
	else
		return (1);
}
