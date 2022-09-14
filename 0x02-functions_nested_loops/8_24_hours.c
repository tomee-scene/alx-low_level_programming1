#include "main.h"

/**
 * jack_bauer - Entry point
 *
 * Void
 */
void jack_bauer(void)
{
	int a, b;

	a = 0;

	while (a <= 23)
	{
		b = 0;
		while (b <= 59)
		{
			_putchar(a / 10 + '0');
			_putchar(a % 10 + '0');
			_putchar(58);
			_putchar(b / 10 + '0');
			_putchar(b % 10 + '0');
			_putchar('\n');

			b++;
		}
		a++;
	}
}
