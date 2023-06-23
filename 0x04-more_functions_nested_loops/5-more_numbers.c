#include <stdio.h>
/**
 * more_numbers - function name
 */
void more_numbers(void)
{
	int count=1;
	
	while (count <= 10)
	{
		int j=0;
		
		while (j <= 14)
		{
			if (j < 10)
			{
				putchar(j+'0');
			}
			else
			{
				putchar((j / 10)+'0');
				putchar((j % 10)+'0');
			}
			j++;
		}
		putchar('\n');
		count++;
	}
	putchar('\n');
}
