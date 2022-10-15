#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int a;
int b;
int c;
int d;
int p;
int q;
	for (a = 48; a <= 57; a++)
	for (p = 0; p <= 98; p++)
	{
	for (b = 48; b <= 57; b++)
	for (q = p + 1; q <= 99; q++)
	{
	for (c = 48; c <= 57; c++)
	for (d = 48; d <= 57; d++)
	{
		if (((c + d) > (c + b) && c >= a) || a < c)
			putchar(a);
			putchar(b);
			putchar(' ');
			putchar(c);
			putchar(d);
			putchar((p / 10) + '0');
			putchar((p % 10) + '0');
			putchar (' ');
			putchar((q / 10) + '0');
			putchar((q % 10) + '0');
			if (a + b + c + d == 227 && a == 57)
				{
				break;
				}
				else
				{
					putchar(',');
					putchar(' ');
				}
			}
			if (p == 98 && q == 99)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
