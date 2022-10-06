#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array of nmemb elements of size bytes
 *
 * @nmemb: the elements
 * @size: the bytes
 * Return: null or pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *pointer;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	pointer = malloc(nmemb * size);

	if (pointer == NULL)
		return (NULL);

	for (i = 0; i < nmemb; i++)
		*((char *)pointer + i) = 0;
	return (pointer);
}
