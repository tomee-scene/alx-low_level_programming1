#include "main.h"

/**
 * puts_half - print half of the string
 *
 * @str: argument passed in
 * Return: void
 */
void puts_half(char *str)
{
	int n, thing = 0;

	while (str[thing] != '\0')
		thing++;

	if (thing % 2 == 0)
		n = thing / 2;
	else
		n = (thing - 1) / 2;
	while (n < thing)
	{
		_putchar(*(str + n));
		n++;
	}
}
