#include "main.h"
/**
 * print_triangle - print triangles using '#'
 * @size: the size of the triangle
 * Return: void
 */
void print_triangle(int size)
{
	int i;
	int j;
	int k;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (k = size - 1; k >= i; k--)
			{
				_putchar(' ');
			}

			for (j = 1; j <= i; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
