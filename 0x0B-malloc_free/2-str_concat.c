#include "main.h"
#include <stdlib.h>

/**
 * str_concat - a function that concatenates two strings
 *
 * @s1: the first string
 * @s2: the second string
 * Return: Null or the concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0, len1 = 0, len2 = 0;
	char *concat;

	if  (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i] != '\0')
	{
		i++;
		len1++;
	}
	while (s2[j] != '\0')
	{
		len2++;
		j++;
	}
	len2++;

	concat = malloc(sizeof(char) * (i + j));

	j = 0, i = 0;
	while (i < len1)
	{
		concat[i] = s1[i];
		i++;
	}
	while (j < len2)
	{
		concat[i] = s2[j];
		j++;
		i++;
	}
	return (concat);
}
