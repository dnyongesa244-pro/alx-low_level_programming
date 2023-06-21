#include "main.h"

/**
 * times_table - function name
 */
void times_table(void)
{
	int i;
	int mult;
	int num;
		for(i=0;i<=9;i++)
	{
		for(mult=0;mult<=9;mult++)
		{
			num = i * mult;
			if (num >= 10)
			{
				putchar((num / 10) + '0');
				putchar((num % 10) + '0');
				if (mult! = 9)
				{
					putchar(',');
				    putchar(' ');
				}
			}
			else
			{
				putchar(num+'0');
				if (mult != 9)
				{
					putchar(',');
				    putchar(' ');
				}
			}
		}
		putchar('\n');
	}
}
