#include "main.h"

/**
 * print_sign - Entry point
 *
 * Check if it is a sign
 * @n: parameter for the function
 *
 * Return: 1 and + if n is greater than zero
 * 0 if n is zero
 * -1 and - f n is less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
