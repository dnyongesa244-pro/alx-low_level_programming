#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * coins - funtion to calclare minimum coins
 *
 * @amount: amount of money
 *
 * Return: numofcoins success
 */
int coins(int amount)
{
	int i, count;

	int quality[5] = {25, 10, 5, 2, 1};

	int numofcoins = 0;

	if (amount < 0)
	{
		return (0);
	}
	for (i = 0; i < 5; i++)
	{
		if (amount >= quality[i])
		{
			count = amount / quality[i];
			numofcoins += count;
			amount %= quality[i];
		}
	}
	return (numofcoins);
}

/**
 * main - main function
 *
 * @argc: first argument
 *
 * @argv: second arguments
 *
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
	int amount, result;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	amount = atoi(argv[1]);
	result = coins(amount);
	printf("%d\n", result);
	return (0);
}
