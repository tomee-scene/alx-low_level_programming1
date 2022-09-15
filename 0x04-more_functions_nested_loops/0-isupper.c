#include "main.h"

/**
 * main - Entry point
 *
 * @c: the argument
 * Return: Always 0.
 */

int _isupper(int c)
{
	if (c <= 65 && c < 91)
	{
		return (1);
	}
	else
	{
		return (0);
	}

	return (0);
}
