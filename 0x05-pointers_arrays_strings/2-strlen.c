#include <stdio.h>

/**
 * _strlen - Returns the length of a string
 * @s: Input string
 *
 * Return: Length of the string
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}

	return (length);
}

int main(void)
{
	char str[] = "Hello, World!";
	int length = _strlen(str);

	printf("Length of the string: %d\n", length);

	return (0);
}
