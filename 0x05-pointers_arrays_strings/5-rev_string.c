#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to reverse
 */

void rev_string(char *s)
{
	int i, j, k;
	char a;

	for (i = 0; s[i] != '\0'; i++)
		;

	j = i - 1;
	for (k = 0; k < i / 2; k++)
	{
		a = s[k];
		s[k] = s[j];
		s[j--] = a;
	}
}
