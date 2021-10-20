#include "main.h"

/**
 * is_palindrome - checks is the string is a palindrome
 * @s: string to check
 * Return: 0 for no 1 for yes
 */

int is_palindrome(char *s)
{
	return (palindrome(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - return the length of a string
 * @s: string to check
 * Return: length of the string
 */

int _strlen_recursion(char *s)
{
	int n = 0;

	if (*s)
	{
		n++;
		n += _strlen_recursion(s + 1);
	}
	return (n);
}

/**
 * palindrome - function for help
 * @s: string
 * @n: incrementation
 * @limit : limit
 * Return: 0
 */

int palindrome(char *s, int n, int limit)
{
	if (*(s + n) != *(s + limit - 1))
		return (0);
	if (n >= limit)
		return (1);
	return (palindrome(s, n + 1, limit - 1));
}
