#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - checkimg malloc
 *
 * @b: checks for b
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
	void *pointer;

	pointer = malloc(b);

	if (pointer == NULL)
		exit(98);

	return (pointer);
}
