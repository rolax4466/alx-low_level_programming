#include <stdio.h>

char *_strcat(char *dest, char *src);

int main(void)
{
    char dest[50] = "Hello, ";
    char src[] = "world!";
    char *result = _strcat(dest, src);

    printf("%s\n", result);

    return 0;
}

char *_strcat(char *dest, char *src)
{
    // Implementation of the _strcat function (as provided before)
    // ...
}
