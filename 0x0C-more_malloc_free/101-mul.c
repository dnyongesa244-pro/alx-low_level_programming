#include <stdbool.h>
#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * print - function to print integer
 *
 * @num: integer
 */
void print(int num)
{
	int i, j, temp, digits;

	int *array;

	if (num < 0)
	{
		_putchar('-');
		num *= -1;
	}
	if (num == 0)
		_putchar('0');
	temp = num;
	digits = 0;
	while (temp != 0)
	{
		temp /= 10;
		digits++;
	}
	array = (int *) malloc(sizeof(int) * digits);
	i = 0;
	while (num != 0)
	{
		array[i] = num % 10;
		num /= 10;
		i++;
	}
	for (j = digits - 1; j >= 0; j--)
	{
		_putchar('0' + array[j]);
	}
}

/**
 * isInteger - function to check for integernumber
 *
 * @input: number
 *
 *Return: endptr (success)
 */
bool isInteger(const char *input)
{
	char *endptr;

	strtol(input, &endptr, 10);
	return (*endptr == '\0');
}

/**
 * main - main function
 *
 * @argc: first argument
 *
 * @argv: second argument
 *
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	char msg[] = "Error";

	int i, lenght, num1, num2, results;

	lenght = strlen(msg);
	if (argc != 3)

	{
		for (i = 0 ; i < lenght ; i++)
		{
			_putchar(msg[i]);
		}
		_putchar('\n');
		return (98);
	}
	if (isInteger(argv[1]) && isInteger(argv[2]))
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);

		results = num1 * num2;

		print(results);
	}
	else
	{
		for (i = 0 ; i < lenght ; i++)
		{
			_putchar(msg[i]);
		}
		_putchar('\n');
		return (98);
	}
	_putchar('\n');
	return (0);
}
