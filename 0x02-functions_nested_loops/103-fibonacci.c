#include <stdio.h>

/**
 * main - Entry point, finds and prints the sum of even-valued Fibonacci terms.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long int a = 1, b = 2, next, sum = 0;

	while (a <= 4000000)
	{
		if (a % 2 == 0)
			sum += a;

		next = a + b;
		a = b;
		b = next;
	}

	printf("%lu\n", sum);
	return (0);
}
