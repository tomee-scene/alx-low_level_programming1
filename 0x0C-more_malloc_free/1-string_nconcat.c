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
	int i = 0, j = 0, len1 = 0, len2 = 0;
	char *concat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i] != '\0')
	{
		i++;
		len1++;
	}
	while (j < (int)b && s2[j] != '\0')
	{
		j++;
		len2++;
	}
	len2++;

	concat = malloc(sizeof(char) * (len1 + len2));

	if (concat == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		concat[i] = s1[i];
	for (j = 0; j < len2; j++)
	{
		concat[i] = s2[j];
		i++;
	}
	return (concat);
}
