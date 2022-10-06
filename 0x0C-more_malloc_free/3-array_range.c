#include "main.h"
#include <stdlib.h>

/**
 * array_range - array created should contain all the values
 *
 * @min: minimum
 * @max: maximum
 * Return: null or the pointer
 */
int *array_range(int min, int max)
{
	int *ptr;
	int i;
	int n = (max - min + 1);

	if (min > max)
		return (NULL);
	ptr = malloc(sizeof(int) * n);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < n; i++)
		ptr[i] = min++;
	return (ptr);
}
