#include <stdio.h>

/**
 * main - Entry point, computes and prints the sum of multiples of 3 or 5.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int number;
	int sum = 0;

	for (number = 0; number < 1024; number++)
	{
		if (number % 3 == 0 || number % 5 == 0)
			sum += number;
	}

	printf("%d\n", sum);
	return (0);
}
