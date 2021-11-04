#include <stdio.h>

/**
 * main - Print all single digit numbers of base 10
 * followed by a new line
 * Return: 0
 */

int main(void)
{
	int n = 48;

	while (n < 58)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
