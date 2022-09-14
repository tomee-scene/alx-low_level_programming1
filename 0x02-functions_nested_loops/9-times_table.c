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

			if (b == 0)
			{
				_putchar('0' + c);
			}
			else if (c < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(c % 10 + '0');
			}
			else if (c > 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(c / 10 + '0');
				_putchar(c % 10 + '0');
			}
			b++;
		}

		_putchar('\n');

		a++;
	}
}
