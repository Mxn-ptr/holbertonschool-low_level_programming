#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers
 * followed by comma and space
 * Return: 0
 */

int main(void)
{
	long int a, b, resultat;
	int i;

	a = 1;
	b = 2;

	for (i = 1; i < 50; ++i)
	{
		if (a != 20365011074)
		{
			printf("%ld, ", a);
		}
		else
		{
			printf("%ld\n", a);
		}
		resultat = a + b;
		a = b;
		b = resultat;
	}
	return (0);
}
