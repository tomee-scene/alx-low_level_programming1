#include "main.h"

/**
 * times_table - Entry point
 *
 * Void
 */
void times_table(void)
{
	int a, b, c;

	a = 0;

	while (a <= 9)
	{
		b = 0;

		while (b <= 9)
		{
			c = a * b;

			if (c < 10)
			{
				_putchar(c % 10 + '0');
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
			else
			{
				_putchar(c / 10 + '0');
				_putchar(c % 10 + '0');
				_putchar(',');
				_putchar(' ');
			}
			b++;
		}

		_putchar('\n');

		a++;
	}
}
