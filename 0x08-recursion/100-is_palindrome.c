#include "main.h"

/**
 * is_palindrome - checks is the string is a palindrome
 * @s: string to check
 * Return: 0 for no 1 for yes
 */

int is_palindrome(char *s)
{
	int i, limit;

	for (i = 0; s[i] != '\0'; i++)
		;
	limit = i;
	i--;
	return (palindrome(s, 0, i, limit / 2));
}

/**
 * palindrome - function for help
 * @s: string
 * @n: incrementation
 * @i: incrementation
 * @limit : limit
 * Return: 0
 */

int palindrome(char *s, int n, int i, int limit)
{
	if (s[n] != s[i] && n < limit)
		return (0);
	else if (s[n] == s[i] && n < limit)
		return (palindrome(s, n + 1, i - 1, limit));
	else
		return (1);
}
