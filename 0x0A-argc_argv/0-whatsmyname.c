#include <string.h>
#include "main.h"
int main(__attribute__((unused))  int argc, char argv[])
{
	int i, x;
	
	char s[100];

	x = strlen(argv[0]);

	strcpy(s,argv[0]);

	for( i = 0 ; i < x ; i++)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
	return (0);
}
