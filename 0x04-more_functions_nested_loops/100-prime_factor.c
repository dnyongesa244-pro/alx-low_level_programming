#include <stdio.h>
/**
 * prime - the function to compute prime factors
 *
 * @number: the number whose prime factor is to be computed
 */
void prime(long number)
{
	long i;

	int x;

	for (i = 2 ; i <= number ; i++)
	{
		while (number % i == 0)
		{
			number /= i;
			x = (long) i;
		}
	}
	printf("%d", x);
	printf("\n");
}
int main()
{
	prime(612852475143);
	return (0);
}
