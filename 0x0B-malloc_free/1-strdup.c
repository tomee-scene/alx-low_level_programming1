#include "main.h"
#include <stdlib.h>

/**
 * _strdup - a function that copies he string given and frees the previous
 * allocation
 *
 * @str: the string
 * Return: NULl or the copy of the string
 */
char *_strdup(char *str)
{
	int i = 0, len = 0;
	char *copy;

	if (str == NULL)
		return (NULL);
	while (str[i] != '\0')
	{
		len++;
		i++;
	}
	len++;

	copy = malloc(sizeof(char) * len);

	if (copy == NULL)
		return (NULL);

	i = 0;
	while (i < len)
	{
		copy[i] = str[i];
		i++;
	}
	return (copy);
}
