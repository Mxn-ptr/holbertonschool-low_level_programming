#include "main.h"

/**
 * print_number - prints an integer
 * @n : the integer to print
 */

void print_number(int n)
{
	unsigned int m = n;
	if (m == 0)
		_putchar(48);
	if (n < 0)
	{
		n = -n;
		_putchar('-');
	}
		if (m < 10)
		{
			_putchar(m);
		}
		else if (m >= 10 && m < 100)
		{
			_putchar((m / 10) + '0');
			_putchar((m % 10) + '0');
		}
		else if (m >= 100 && m < 1000)
		{
			_putchar((m / 100) + '0');
			_putchar(((m / 10) % 10) + '0');
			_putchar((m % 10) + '0');
		}
		else if (m >= 1000 && m < 10000)
		{
			_putchar((m / 1000) + '0');
			_putchar(((m / 100) % 10) + '0');
			_putchar(((m / 10) % 10) + '0');
			_putchar((m % 10) + '0');
		}
}
