#include <stdio.h>

/**
 * main - Print all single digit numbers of base 16 in lowercase
 * followed by a new line
 * Return: 0
 */

int main(void)
{
	int n = 48;
	char ch = 'a';

	while (n < 58)
	{
		putchar(n);
		n++;
	}
	while (ch <= 'f')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
