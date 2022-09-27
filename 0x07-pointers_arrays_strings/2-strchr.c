#include "main.h"

/**
 * _strchr - checks first occurence of a character
 *
 * @s: the string
 * @c: the character
 * Return: the string or NULL
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0' && s[i] != c)
		i++;
	if (s[i] == c)
		return (s + i);
	else
		return ('\0');
}
