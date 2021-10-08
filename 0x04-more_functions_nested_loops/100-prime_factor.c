#include <stdio.h>

/**
 * main - finds and prints the largest
 * prime factor of the number 612852475143
 * Return : (0)
 */

int main(void)
{
	long int num = 612852475143;
	int div = 2;

	while (num != div)
	{
		while (num % div == 0)
		{
			num = num / div;
		}
		div++;
	}
	printf("%d\n", div);
	return (0);
}

