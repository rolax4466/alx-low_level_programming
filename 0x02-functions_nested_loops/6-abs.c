#include "main.h"

/**
 * _abs - Computes the absolute value of an integer.
 * @n: The integer for which the absolute value is computed.
 *
 * Return: The absolute value of n (positive value).
 */
int _abs(int n)
{
	if (n < 0)
		return (-n);
	else
		return (n);
}
