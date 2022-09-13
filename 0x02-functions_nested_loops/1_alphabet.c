#include "main.h"

/*main - Entry point
 *
 * print the alphabets in lowercase
 *
 * Return: Always 0
 */
void print_alphabet(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		_putchar(a);
		
		a++;
	}

	_putchar('\n');

	return (0);
}
