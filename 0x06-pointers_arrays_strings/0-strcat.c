#include <stdio.h>

/**
 * _strcat - Function to concatenate two strings
 * @dest: Pointer to the destination string
 * @src: Pointer to the source string
 *
 * Return: Pointer to the concatenated string (dest)
 */
char *_strcat(char *dest, char *src)
{
	char *original_dest = dest; /* Store the original pointer to dest */

	/* Move the pointer dest to the end of the destination string */
	while (*dest != '\0')
	{
		dest++;
	}

	/* Copy characters from src to dest until the end of src is reached */
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	/* Add the terminating null byte to the concatenated string */
	*dest = '\0';

	return original_dest; /* Return the pointer to the concatenated string */
}

int main(void)
{
	char dest[100] = "Hello, ";
	char src[] = "world!";

	printf("Before concatenation: %s\n", dest);

	/* Call the _strcat function to concatenate the two strings */
	char *result = _strcat(dest, src);

	printf("After concatenation: %s\n", result);

	return 0;
}
