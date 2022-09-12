#include <stdio.h>

/**
 * main - Entry point
 *
 * Printing different combinations of two two
 *
 * digit numbers without using type char
 *
 * Return: Always 0
 */
int main(void)
{
	int a, b;

	a = 0;
	while (a < 100)
	{
		b = 0;

		while (b < 100)
		{
			if (a < b)
			{
				putchar(a / 10 + '0');
				putchar(a % 10 + '0');
				putchar(' ');
				putchar(b / 10 + '0');
				putchar(b % 10 + '0');

				if (!(a == 98 && b == 99))
				{
					putchar(',');
					putchar(' ');
				}
			}
			b++;
		}
		a++;
	}
	putchar('\n');
	return (0);
}
