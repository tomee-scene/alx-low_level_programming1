#include "main.h"

/**
 * print_diagonal - print diagonally
 *
 * @n: argument
 * Void
 */
void print_diagonal(int n)
{
	int a, b;

	if (n != 0 && n > 0)
	{
		for (a = 1; a <= n; a++)
		{
			for (b = 1; b < a; b++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
