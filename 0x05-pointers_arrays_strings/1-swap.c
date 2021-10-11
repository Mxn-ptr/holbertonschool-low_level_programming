#include "main.h"

/**
 * swap_int - swap the values of  two integers
 * @a : pointer to a
 * @b : pointer to b
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
