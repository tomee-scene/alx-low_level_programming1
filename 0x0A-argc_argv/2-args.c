#include <stdio.h>

/**
 * main - entry point
 *
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int count;

	if (argc > 0)
	{
		for (count = 0; argc > count; count++)
		{
			printf("%s\n", argv[count]);
		}
	}
	return (0);
}
