#include "main.h"

/**
 * _abs - functiond name
 *
 * @value:  parameter
 *
 * Return: int (succes)
 */
int _abs(int value)
{
	if (value <= 0)
	{
		int val = value * -1;

		return (val);
	}
	else
	{
		int val = value;

		return (val);
	}
}
