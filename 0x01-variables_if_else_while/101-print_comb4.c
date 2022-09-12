#include <stdio.h>

/**
 * main - Entry point
 *
 * Printing three different combination of numbers with no repitions
 *
 * Return: Always 0
 */
int main(void)
{
	int a, b, c;

	a = 0;

	while (a <= 7)
	{
		b = a + 1;

		while (b <= 8)
		{
			c = b + 1;

			while (c <= 9)
			{
				putchar(a % 10 + '0');
				putchar(b % 10 + '0');
				putchar(c % 10 + '0');

				if (!(a == 7 && b == 8 && c == 9))
				{
					putchar(',');
					putchar(' ');
				}
				c++;
			}
			b++;
		}
		a++;
	}
	putchar('\n');
	return (0);
}
