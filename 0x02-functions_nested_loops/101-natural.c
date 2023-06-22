#include "main.h"
/**
 * prt - function name
 *
 * @val: parameter
 *
 * Return: val Alwayss (Ssuccess)
 */
void prt(int val)
{
	int rev = 0;

        while (val > 0)
	{
		int digit = val % 10;
		rev = rev * 10 + digit;
		val /= 10;
	}
	while (rev > 0)
	{
		int digit = rev % 10;

		_putchar(digit + '0');
		rev /= 10;
	}
	_putchar(' ');
}
/**
 * num - functio name
 *
 * @val: the value to be conputed
 *
 * Return: sum Always (Success)
 */
int num(int val)
{
	int n, sum, count;
       n = 0;
	sum = 0;
	while (n != val)
	{
		if ((n % 3 == 0) || (n % 5 == 0))
		{
			sum = sum + n;
		}
		count = count + 1;
		n++;
	}
	return (sum);
}
/**
 * main - entry point to program
 *
 * Return: 0 (success)
 */
int main(void)
{
	int x, y;

	x = 1024;
	y = num(x);
	prt(y);
	return (0);
}
