#include "main.h"

/**
 * rev_string - reverse a string
 *
 * @s: parameter
 * Return: void
 */
void rev_string(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++
	}

	i--;

	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
}
