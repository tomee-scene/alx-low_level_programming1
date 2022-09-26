#include "main.h"

/**
 * _memset - fills the first n bytes with constant b
 *
 * @s: the pointer to the memory area
 * @n: the fbytes
 * @b: the constant
 * Return: the pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	int size = n;

	if (size > 0)
	{
		int i;

		for (i = 0; i < size; i++)
			s[i] = b;
	}
	return (s);
}
