#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	int num = n%10;

	if (num > 5)
	{
		printf("Last digit of %d is %d and greater than 5", n, num);
	}
	else if (num == 0)
	{
		printf("Lasr digit of %d is %d  and is 0", n, num);
	}

	else if (num < 6 || num != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0", n, num);
	}

	return (0);
}
