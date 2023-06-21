#include "main.h"

/**
 * times_table - function name
 */
void times_table(void)
{
	int i;
	int mult;
	int num;
		for (i = 0 ; i <= 9 ; i++)
	{
		for (mult = 0 ; mult <= 9 ; mult++)
		{
			num = i * mult;
			if (num >= 10)
			{
				_putchar((num / 10) + '0');
				_putchar((num % 10) + '0');
				if (mult != 9)
				{
					_putchar(',');
					_putchar(' ');
					if (num <= 9)
					{
						_putchar(' ');
					}
				}
			}
			else
			{
				_putchar(num+'0');
				if (mult != 9)
				{
					_putchar(',');
					_putchar(' ');
					if (num < 10)
					{
						_putchar(' ');
					}
				}
			}
		}
		_putchar('\n');
	}
}
