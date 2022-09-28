#include "main.h"

/**
 * factorial - returns the factorial of a number
 * @r: Return value
 *
 * Return: factorial of r
 */
int factorial(int r)
{
	if (r < 0)
		return (-1);
	if (r == 0)
		return (1);
	return (r * factorial(r - 1));
}
