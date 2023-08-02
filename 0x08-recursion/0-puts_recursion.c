
#include <stdio.h>

void _puts_recursion(char *s)
{
    if (*s == '\0') // Base case: If the current character is the null terminator, end the recursion.
    {
        putchar('\n'); // Print a new line when the end of the string is reached.
        return;
    }

    putchar(*s); // Print the current character of the string.
    _puts_recursion(s + 1); // Recursively call _puts_recursion with the next character in the string.
}
