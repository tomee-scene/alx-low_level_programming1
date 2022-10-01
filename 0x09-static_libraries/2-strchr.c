#include "main.h"

char *_strchr(char *s, char c)
{
	int i = 0;
	
	while (s[i] != '\0' && s[i] != c)
		i++;
	if (s[i] == c)
		return (s + 1);
	else
		return ('\0');
}
