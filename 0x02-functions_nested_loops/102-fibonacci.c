#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers
 * followed by comma and space
 * Return: 0
 */

int main(void)
{
	int i;
	unsigned long num1 = 0, num2 = 1, resultat;

	for (i = 0; i < 50; i++)
	{
		resultat = num1 + num2;
		printf("%lu", resultat);
		num1 = num2;
		num2 = resultat;

		if (i == 49)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}
