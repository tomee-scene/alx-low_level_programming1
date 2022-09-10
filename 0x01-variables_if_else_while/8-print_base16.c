#include <stdio.h>

/**
 * main - Entry point
 *
 *
 * Return: Always 0
 */

int main(void)
{
	char c, d;

	c = '0';
	d = 'a';

	while (c <= '9')
	{
		putchar(c);
		c++;
	}
	while (d <= 'f')
	{
		putchar(d);
		d++;
	}

	putchar('\n');
	return (0);
}
