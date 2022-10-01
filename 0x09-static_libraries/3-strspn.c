#include "main.h"

unsigned int _strspn(char *s, char *accept)
{
	int i, j, sum = 0;
	
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				sum++;
				break;
			}
			if (accept[j + 1] == '\0' && s[i] != accept[j])
				return (sum);
		}
	}
	return (sum);
}
