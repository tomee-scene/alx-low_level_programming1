#include "main.h"

/**
 * _abs - Entry point
 *
 * compute the absolute value
 *
 * @c: the parameter
 * Return: returns the respective absolutes
 */
int _abs(int c)
{
	if (c < 0)
	{
		return (-c);
	}
	else if (c > 0)
	{
		return (c);
	}
	else
	{
		return (0);
	}
}
