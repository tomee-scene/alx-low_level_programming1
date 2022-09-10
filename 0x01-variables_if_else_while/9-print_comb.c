#include <stdio.h>

/**
 * main - Entry point
 *
 * write the numbers separated by a comma
 *
 * Return: Always 0
 */
int main(void)
{
	int c;

	c = 48;

	while (c <= 57)
	{
		putchar(c);
		if (c != 57)
		{
			putchar(',');
			putchar(' ');
		}
		c++;
	}
	putchar('\n');
	return (0);
}
