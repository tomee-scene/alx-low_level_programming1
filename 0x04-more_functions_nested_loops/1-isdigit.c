#include "main.h"

/**
 * _isdigit - Entry point
 *
 * @c: argument
 * Return: 1 if succesful
 * if otherwise 0
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}
