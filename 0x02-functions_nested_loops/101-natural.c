#include <stdio.h>

/**
 * main - Entrry point
 *
 * Return: Always 0
 */
int main(void)
{
	int num, sum;

	for (num = 0; num < 1024; num++)
	{
		if (num % 5 == 0 || num % 3 == 0)
		{
			sum = sum + num;
		}
	}
	printf("%d", sum);
	return (0);
}
