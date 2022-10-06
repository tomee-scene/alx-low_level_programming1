#include "main.h"
#include <stdlib.h>

/**
 * create_array - a function that creates an array with a specified character
 *
 * @size: the size of memory to be allocated
 * @c: the specified character
 * Return: NULL or success
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i = 0;

	if (size <= 0)
		return (NULL);

	array = malloc(sizeof(c) * size);
	if (array == 0)
		return (NULL);
	while (i < size)
	{
		array[i] = c;
		i++;
	}
	array[i] = '\0';
	return (array);
}
