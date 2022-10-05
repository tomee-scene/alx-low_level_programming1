#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 *
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int amount, cent = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (atoi(argv[1]) < 0)
	{
		printf("0\n");
		return (0);
	}

	amount = atoi(argv[1]);

	cent += amount / 25;
	amount = amount % 25;
	cent += amount / 10;
	amount = amount % 10;
	cent += amount / 5;
	amount = amount % 5;
	cent += amount / 2;
	amount = amount % 2;
	cent += amount / 1;

	printf("%d\n", cent);
	return (0);
}
