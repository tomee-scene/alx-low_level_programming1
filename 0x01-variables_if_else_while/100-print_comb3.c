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

	c = 48;
	d = 48;

	while (c <= 57)
	{
		d = 49;

		while (d <= 57)
		{
			if (d != c && d > c)
			{
				putchar(c);
				putchar(d);
				if (c == 56 && d == 57)
				{
					break;
				}
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

