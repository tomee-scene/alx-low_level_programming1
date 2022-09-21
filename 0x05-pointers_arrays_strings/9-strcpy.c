#include "main.h"

/**
 * *_strcpy - copy string from a source to a destination
 *
 * @src: the source
 * @dest: the destination
 * Return: a character type.
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = *(src + i);
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
