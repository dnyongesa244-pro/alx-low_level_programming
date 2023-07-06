#include "main.h"

/**
 * me - function to check for prime number
 *
 * @x: number
 *
 * @y: checker
 *
 * Return: me(Success)
 */
int me(int x, int y)
{
	if (y == 1)
	{
		return (1);
	}
	if (x % y == 0)
	{
		return (0);
	}
	return (me(x, y - 1));
}

/**
 * is_prime_number - function to check for one and egative
 *
 * @n: number
 *
 * Return: 1 (Success)
 */
int is_prime_number(int n)
{
	int c;

	if (n < 0)
	{
		n = n * -1;
		if (n > 1)
		{
			return (0);
		}
	}
	if (n == 1)
	{
		return (0);
	}
	c = n - 1;
	return (me(n, c));
}
