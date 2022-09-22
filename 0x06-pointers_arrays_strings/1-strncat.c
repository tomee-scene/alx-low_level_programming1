#include "main.h"

/**
 * *_strncat - concatena two strings with n bytes
 *
 * @dest: destination
 * @src: source
 * @n: bytes
 * Return: pointer
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
		i++;

	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];

		i++;
		j++;
	}
	return (dest);
}
