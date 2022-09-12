#include <stdio.h>

/**
 * main - Entry point
 * combination of numbers
 *
 * Return: Always 0
 */
int main(void)
{
	int c, d;

	c = 0;

	while (c <= 8)
	{
		d = c + 1;

		while (d <= 9)
		{
			putchar(c % 10 + '0');
			putchar(d % 10 + '0');

			if (!(c == 8 && d == 9))
			{
				putchar(',');
				putchar(' ');
			}
			d++;
		}

		c++;
	}
	putchar('\n');
	return (0);
}

