#include "main.h"

/**
 * main - Entry point
 *
 * @c: the argument
 * Return: Always 0.
 */

int _isupper(int c)
{
	if (c <= 65 && c < 91)
	{
		_putchar('1');
	}
	else
	{
		_putchar('0');
	}

	return (0);
}
