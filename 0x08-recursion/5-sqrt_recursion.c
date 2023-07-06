#include "main.h"
#include <math.h>
/**
 * _sqrt_recursion - function to compute squaroot of a number
 *
 * @n: number
 *
 * Return: x (Success)
 */
int _sqrt_recursion(int n)
{
	int x;

	x = sqrt(n);
	if (n % x == 0)
		return (x);
	else
		return (-1);
}
