#include "main.h"

/**
 * *_strcat - concantenate string
 *
 * @dest: the destination of the concatenated string
 * @src: the source of other string
 * Return: a pointer
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i] = src[j];

		i++;
		j++;
	}
	dest[i] = '\0';

	return (dest);
}
