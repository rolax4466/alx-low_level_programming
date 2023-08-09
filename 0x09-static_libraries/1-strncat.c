#include "main.h"
/**
* _strncat - concatenate two strings
* using at most n bytes from src
* @dest: input value
* @src: input value
* @n: input value
*
* Return: dest
*/
char *_strncat(char *dest, char *src, int n)
{
int i;
int j;
i = 0;
while (dest[i] != &#39;\0&#39;)
{
i++;
}
j = 0;
while (j &lt; n &amp;&amp; src[j] != &#39;\0&#39;)
{
dest[i] = src[j];
i++;
j++;
}
dest[i] = &#39;\0&#39;;
return (dest);
}
