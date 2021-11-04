#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase then in uppercase
 * Return: 0
 */

int main(void)
{
	char ch = 'a';
	char letter = 'A';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	while (letter <= 'Z')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');
	return (0);
}
