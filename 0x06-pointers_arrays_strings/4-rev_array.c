#include "main.h"

/**
 * reverse_array - Reverse an array
 *
 * @a: the array
 * @n: number of elements of the array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i = 0, temp, end = n - 1;

	while (i < end)
	{
		temp = a[i];
		a[i] = a[end];
		a[end] = temp;

		i++;
		end--;
	}
}
