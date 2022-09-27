#include "main.h"

/**
 * _strpbrk -locates the first occurrence of a byte in s
 *
 * @s: the first parameter
 * @accept: the second parameter
 * Return: bytes in accept or null
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				s = &s[i];
				return (s);
			}
		}
	}
	return ('\0');
}
