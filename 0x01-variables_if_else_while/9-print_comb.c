#include <stdio.h>

/**
 * main - Print all possible combinations of single-digit numbers
 * separated by ",", followed by a space
 * followed by a new line
 * Return: 0
 */

int main(void)
{
	int n = 48;

	while (n < 58)
	{
		putchar(n);
		if (n != 57)
		{
			putchar(',');
			putchar(' ');
		}
		n++;
	}
	putchar('\n');
	return (0);
}
