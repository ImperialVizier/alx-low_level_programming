#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

#define INF 999999

/**
* main - prints the minimum number of coins to make change for an amount
* @argc: argument count parameter
* @argv: argument vector parametr
*
* Return: 0
*/

int main(int argc, char *argv[])
{
	int coin_denom[5] = {25, 10, 5, 2, 1};

	int num_denom, num_coins, amount, i;

	int total_coins = 0;

	amount = atoi(argv[1]);

	num_denom = sizeof(coin_denom) / sizeof(coin_denom[0]);


	if (argc == 2)
	{
		if (amount < 0)
			printf("0\n");
		else
		{
			for (i = 0; i < num_denom; i++)
			{
				num_coins = amount / coin_denom[i];
				total_coins += num_coins;
				amount -= num_coins * coin_denom[i];
			}

			printf("%d\n", total_coins);
		}
	}
	else if (argc == 1 || argc > 2)
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
