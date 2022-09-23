#include "main.h"

/**
 * rot13 - rotate by 13 places
 *
 * @str: the string
 * Return: pointer
 */
char *rot13(char *str)
{
	char rot[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char tor[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		j = 0;
		while (rot[j] != '\0' && rot[j] != str[i])
		{
			if (str[i] == rot[j])
				str[i] = tor[j];
			j++;
		}
	}
	return (str);
}
