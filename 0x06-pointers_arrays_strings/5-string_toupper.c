#include <stdio.h>
#include "main.h"
#include <ctype.h>

/**
 * string_toupper - function to convert to uppercase
 *
 * @lett: the parameter
 *
 * Return: lett Always (Success)
 */

char *string_toupper(char *lett)
{
	int i =0;
	
	while(lett[i]!=0)
	{
		lett[i] = toupper(lett[i]);
		i++;
	}
	return (lett);
}

