#include <stdio.h>
/*
 * this is a c program to print integer 1-9
 */
int main(void)
{
        int i;
        for (i = 0 ; i <= 9 ; i++)
        {
        	char d = i + '0';
        	putchar(d);
	}
	return (0);
}
