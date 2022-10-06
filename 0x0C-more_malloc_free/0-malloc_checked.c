#include "main.h"
#include <stdio.h>

/**
 * malloc_checked - checkimg malloc
 *
 * @b: checks for b
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);
	return (ptr);
}
