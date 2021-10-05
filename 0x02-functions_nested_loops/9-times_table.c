#include "main.h"

/**
 * times_table - prints the 9 times tables
 */

void times_table(void)
{
	int a, n, r;

	for (a = 0; a <= 9; a++)
	{
		for (n = 0; n < 10; n++)
		{
			r = n * a;
			if (n == 0)
			{
				_putchar(r + '0');
			}
			if (r < 10 && n != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(r + '0');
			}
			else if (r >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((r / 10) + '0');
				_putchar((r % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
