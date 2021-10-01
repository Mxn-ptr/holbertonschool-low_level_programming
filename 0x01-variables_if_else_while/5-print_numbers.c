#include <stdio.h>

/**
 * main - Print all single digit numbers of base 10
 * followed by a new line
 * Return: 0
 */

int main(void)
{
	int n = 0;

	while (n < 10)
	{
		printf("%d", n);
		n++;
	}
	printf("\n");
	return (0);
}
