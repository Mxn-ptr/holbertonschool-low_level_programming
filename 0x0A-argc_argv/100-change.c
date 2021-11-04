#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints the minimum number of coins
 * to make change for an amount of money
 * @argc: count of arguments
 * @argv: array of arguments
 * Return: 0 or 1 if there is only 1 argument
 */

int main(int argc, char **argv)
{
	int cents = 0, i = 0;

	if (argc == 1 || argc > 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	if (cents < 1)
	{
		printf("0\n");
		return (0);
	}
	while ((cents - 25) >= 0)
	{
		cents -= 25;
		i++;
	}
	while ((cents - 10) >= 0)
	{
		cents -= 10;
		i++;
	}
	while ((cents - 5) >= 0)
	{
		cents -= 5;
		i++;
	}
	while ((cents - 2) >= 0)
	{
		cents -= 2;
		i++;
	}
	while ((cents - 1) >= 0)
	{
		cents -= 1;
		i++;
	}
	printf("%d\n", i);
	return (0);
}
