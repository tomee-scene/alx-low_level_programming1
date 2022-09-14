 #include "main.h"

void print_times_table(int n)
{
	int a, b, c;

	if (n <= 15 && n >= 0)
	{
		a = 0;
		while (a <= n)
		{
			b = 0;
			while (b <= n)
			{
				c = a * b;
				if (b == 0)
				{
					_putchar(c + '0');
				}
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
				b++;
			}
			_putchar('\n');
			a++;
		}
	}
}
