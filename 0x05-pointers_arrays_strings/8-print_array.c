#include "main.h"
#include <stdio.h>

/**
 * print_array - prints array
 *
 * @a: the pointer
 * @n: the array number
 * Return: void
 */
void print_array(int *a, int n)
{
	int count = 0;

	while (count < n)
	{
		if (count != n - 1)
			printf("%d, ", *(a + count));
		else
			printf("%d", *(a + count));
		count++;
	}
	printf("\n");
}
