#include "main.h"
/**
* _isdigit - checks for a digit (0 through 9)
* @c: int to be checked
* Return: 1 if c is a digit, 0 otherwise
*/
int _isdigit(int c)
{
return (c &gt;= &#39;0&#39; &amp;&amp; c &lt;= &#39;9&#39;);
}
