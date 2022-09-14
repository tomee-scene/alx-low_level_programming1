#include "main.h"

/**
 * print_times_table - Entry point
 *
 * @n: A parameter
 *
 * Void
 */

void print_times_table(int n)
{
	int a, b, c;

	if (n <= 15 && n >= 0)
	{
		for (a = 0; a <= n; a++)
		{
			for (b = 0; b <= n; b++)
			{
				c = a * b;
				if (b == 0)
					_putchar('0' + c);
				else if (c < 10)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(c % 10 + '0');
				}
				else if (c < 100 && c > 9)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(c / 10 + '0');
					_putchar(c % 10 + '0');
				}
				else if (c >= 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(c / 100 + '0');
					_putchar((c / 10) % 10 + '0');
					_putchar(c % 10 + '0');
				}
			}
			_putchar('\n');
		}
	}
}

