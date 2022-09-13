#include "main.h"

/**
 * _islower - Entry point
 *
 * Check if character is lowercase
 *
 * @c: An integer and the parameter of the function
 *
 * Return: 1 if c is lowercase and 0 if otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
