#include "main.h"

/**
 * *_strncpy - copy the first n bytes of a string
 *
 * @dest: the destination
 * @src: the source
 * @n: the bytes
 * Return: a pointer
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j = 0;

	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];

		j++;
	}

	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}
	return (dest);
}
