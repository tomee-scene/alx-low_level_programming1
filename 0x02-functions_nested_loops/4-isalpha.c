#include "main.h"

/**
 * _isalpha - Entry point
 *
 * Return: 1 if c is a letter, lowercase or uppercase
 * otherwise return 0
 *
 * @c: The parameter
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
