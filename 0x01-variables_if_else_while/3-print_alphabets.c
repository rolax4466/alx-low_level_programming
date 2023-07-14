#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point of the program
 * Return: Always 0 (success)
 */
int main(void)
{
	char low;

	/* Printing lowercase letters 'a' to 'z' */
	for (low = 'a'; low <= 'z'; low++)
		putchar(low);

	/* Printing uppercase letters 'A' to 'Z' */
	for (high = 'A'; high <= 'Z'; high++)
		putchar(high);

	putchar('\n');
	return (0);
}


