#include "main.h"
/**
 * jack_bauerb - function name
 */
void jack_bauer(void)

{
	int min, hour;
	for (hour = 0 ; hour <= 23 ; hour++)
	{
		for (min = 0 ; min < 60 ; min++)
		{
			_putchar((hour / 10) + '0');
			_putchar((hour % 10) + '0');
			putchar(':');
			_putchar((min / 10) + '0');
			putchar(( min % 10) + '0');
			putchar('\n');
		}
	}
}
