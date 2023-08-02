#include "main.h"

// Rest of your code here...
#include <stdio.h>

void _puts_recursion(char *s) {
    if (*s == '\0') { // Base case: if the current character is null terminator '\0', end the recursion
        putchar('\n'); // Print a new line after the whole string has been printed
        return;
    }

    putchar(*s); // Print the current character
    _puts_recursion(s + 1); // Recursively call the function with the next character in the string
}

int main() {
    char str[] = "Hello, World!";
    _puts_recursion(str); // Output: Hello, World!

    return 0;
}
