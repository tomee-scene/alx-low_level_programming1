#include "main.h"

/**
 * main - Entry point
 *
 * @c: the argument
 * Return: Always 0.
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
