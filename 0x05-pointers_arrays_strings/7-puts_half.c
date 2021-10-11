#include "main.h"

/**
 * puts_half - prints half of a string
 * followed by a new line
 * @str: string to check
 */

void puts_half(char *str)
{
	int i, j, k;

	i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	if (i % 2 == 0)
		j = i / 2;
	else
		j = (i - 1) / 2;

	k = j;
	i = i - 1;
	for (i = 0; i < j; i++)
	{
		_putchar(str[k++]);
	}
	_putchar('\n');
}
