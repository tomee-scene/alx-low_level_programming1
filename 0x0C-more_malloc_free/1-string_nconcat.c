#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concantenate the n bytes of s2 to s1
 *
 * @s1: first string
 * @s2: second string
 * @b: the bytes
 * Return: pointer or null
 */
char *string_nconcat(char *s1, char *s2, unsigned int b)
{
	int i, j, len, count, len1 = 0, len2 = 0;
	char *concat;

	len = b;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		len1++;

	for (j = 0; s2[j] != '\0'; j++)
		len2++;

	if (len < 0)
		return (NULL);
	if (len >= len2)
		len = len2;
	count = len1 + len + 1;
	concat = malloc(sizeof(*concat) * count);
	if (concat == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		concat[i] = s1[i];
	for (j = 0; j < len; j++)
	{
		concat[i] = s2[j];
		i++;
	}
	concat[i] = '\0';

	return (concat);
}
