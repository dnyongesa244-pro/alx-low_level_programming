#include "main.h"
/**
 * me - function to compute squaroot
 *
 * @x: number to be computed
 *
 * @y: monitering
 *
 * Return: y (Success)
 */

int me(int x, int y)
{
	if (y * y == x)
	{
		return (y);
	}
	if (y  == x)
	{
		return (-1);
	}
	return (me(x, y + 1));
}
/**
 * _sqrt_recursion - function to check number befor pusing to me
 *
 * @n: number to be checked
 *
 * Return: x (Success)
 */
int _sqrt_recursion(int n)
{
	int x;

	if (n < 0)
	{
		return (-1);
	}
	else
	{
		x =  me(n, 0);
		if (n % x != 0)
		{
			return (-1);
		}
		else
		{
			return (x);
		}
	}
}
