#include "main.h"

/**
 * _memcpy - copy the first n bytes
 *
 * @dest: the destination
 * @src: the source
 * @n: the byte
 *
 * Return: the pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
			dest[i] = src[i];
	}
	return (dest);
}
