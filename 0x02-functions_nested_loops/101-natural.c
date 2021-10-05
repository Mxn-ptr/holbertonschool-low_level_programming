#include <stdio.h>

/**
 * main - computes and prints the sum of all the multiples 3 or 5
 * Return: 0
 */

int main(void)
{
	unsigned long int a, b, r;
	int i;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3) == 0)
		{
			a = a + i;
		}
		else if ((i % 5) == 0)
		{
			b = b + i;
		}
	}
	r = a + b;
	printf("%lu\n", r);
	return (0);
}
