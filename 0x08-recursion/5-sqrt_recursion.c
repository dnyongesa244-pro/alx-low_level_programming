#include "main.h"
#include <math.h>

/**
 * carriage - function to compute squareroot
 *
 * @x: integer to be computed
 *
 * Return: a (SUccess)
 */

int carriage(int x)
{
	int a = sqrt(x);

	if (x % a == 0)
	{
		return (a);
	}
	else
	{
		return (-1);
	}
}
/**
 * _sqrt_recursion - function to compute squaroot of a number
 *
 * @n: number
 *
 * Return: x (Success)
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (carriage(n));
	}
}
