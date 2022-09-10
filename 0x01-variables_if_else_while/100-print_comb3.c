#include <stdio.h>

/**
 * main - Entry point
 * combination of numbers
 *
 * Return: Always 0
 */
int main(void)
{
	char c, d;

	c = '0';
	d = '0';

	while (c <= '9')
	{
		d = '1';

		while (d <= '9')
		{
			if (d != c && d > c)
			{
				putchar(c);
				putchar(d);
				if (c == '8' && d == '9')
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

