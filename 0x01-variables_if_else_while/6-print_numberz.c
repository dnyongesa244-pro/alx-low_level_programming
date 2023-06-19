#include <stdio.h>
/*
 * this is a c code to print integer 1-9
 */
int main(void)
{
	int i;
	for (i = 0 ; i <= 9 ; i++)
	{
		putchar(i+'0');
	}
	putchar('\');
	return (0);
}
