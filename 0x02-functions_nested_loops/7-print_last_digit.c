#include "main.h"

/**
 * print_last_digit - Entry point
 *
 * @c: parameter
 * print the last digit
 * Return: return an int
 */
int print_last_digit(int c)
{
	int last = c % 10;

	if (c < 0)
		last = last * -1;
	_putchar('0' + last);

	return (last);
}
