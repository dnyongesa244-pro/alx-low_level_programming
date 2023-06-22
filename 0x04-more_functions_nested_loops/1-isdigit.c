#include "main.h"
/**
 * _isdigit - funtion name
 *
 * @c: parameter
 *
 * Return: 1 (true) 0 (False)
 */
int _isdigit(int c)
{
	if ((c >= 0) && (c <= 9))
	{
	    return (1);
	}
	else
	{
		return (0);
	}
}
