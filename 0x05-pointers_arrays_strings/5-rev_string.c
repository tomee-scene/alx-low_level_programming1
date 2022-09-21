#include "main.h"

/**
 * rev_string - reverse a string
 *
 * @s: parameter
 * Return: void
 */
void rev_string(char *s)
{
	int len = 0, i, j;
	char temp;

	while (s[len] != '\0')
	{
		len++;
	}

	i = 0;
	j = len - 1;

	while (i < j)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
		i++, j--;
	}
}
