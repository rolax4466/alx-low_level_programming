#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int number;

	number = '0';

	while (number <= '9')
	{
		putchar(number);
		number++;
	}

	putchar('\n');
	return (0);
}

