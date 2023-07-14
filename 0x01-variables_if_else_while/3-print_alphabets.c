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

	/* Printing lowercase letters 'a' to 'z' again */
	for (low = 'a'; low <= 'z'; low++)
		putchar(low);

	putchar('\n');
	return (0);
}


