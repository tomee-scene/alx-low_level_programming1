#include "main.h"

/**
 * leet - replace some char with int
 *
 * @str: the string
 * Return: pointer
 */
char *leet(char *str)
{
	char a[11] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};
	char b[11] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};

	int j = 0, i;

	for (i = 0; str[i] != '\0'; i++)
	{
		while (j < 11)
		{
			if (str[i] == b[j])
				str[i] = a[j];
			j++;
		}
	}
	return (str);
}
