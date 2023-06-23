#include <stdio.h>
/**
 * range - function to print numbrs
 */
void range(void)
{
	int i = 100;
	{
		for (i = 1 ; i < 100 ; i++)
		{
			if ((i % 3 == 0) && (i % 5 == 0))
			{
				printf("FizzBuzz");
			}
			else if (i % 3 == 0)
			{
				printf("Fizz");
			}
			else if (i % 5 == 0)
			{
				printf("Buzz");
			}
			
			else
			{
				printf("%d", i);
			}
			printf(" ");
		}
		printf("\n");
	}
}
int main(void)
{
	range();
	return (0);
}
