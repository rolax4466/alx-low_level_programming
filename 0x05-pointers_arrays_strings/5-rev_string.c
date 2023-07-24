#include "main.h"

/**
 * rev_string - Reverses a string in place
 * @s: Input string to be reversed
 * Return: None (void)
 */

void rev_string(char *s)
{
	char rev = s[0]; // Temporary variable to hold characters during swapping
	int counter = 0; // Variable to count the length of the string
	int i;

	// Find the length of the string by iterating through it
	while (s[counter] != '\0')
		counter++;

	// Use a loop to swap characters at the beginning and end of the string
	for (i = 0; i < counter; i++)
	{
		counter--; // Decrement the counter to move towards the beginning of the string
		rev = s[i]; // Store the character at the current index in the temporary variable
		s[i] = s[counter]; // Swap the character at the current index with the one at the counter
		s[counter] = rev; // Place the stored character from the temporary variable at the counter index
	}
}

