#include "main.h"

/**
 * reverse_array - revers the content of an array of integers
 * @a : string to reverse
 * @n  : number of elements of the array
 */

void reverse_array(int *a, int n)
{
	int i, j, swap;

	j = n - 1;

	for (i = 0; i < n / 2; i++)
	{
		swap = a[i];
		a[i] = a[j];
		a[j] = swap;
		j--;
	}
}
