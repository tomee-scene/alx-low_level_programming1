#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - Entry point
 *
 * @n: a parameter
 *
 * Void
 */
void print_to_98(int n)
{
	while (n < 98)
	{
		printf("%d, ", n);
		n++;
	}

	while (n > 98)
	{
		printf("%d, ", n);
		n--;
	}

	if (n == 98)
		printf("%d", n);

	printf("\n");
}
