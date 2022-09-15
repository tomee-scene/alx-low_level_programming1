#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int fibon, count, sum;

	count = 0;

	while (count <= 50)
	{
		fibon = 1;

		sum = sum + fibon;

		fibon++;

		printf("%d, ", sum);
	}
	return (0);
}
