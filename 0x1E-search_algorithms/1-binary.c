#include "search_algos.h"

/**
 * binary_search - Searches a value in a sorted array of integers using the Binary search algorithm
 * @array: array to search into
 * @size: size of the array
 * @value: value to found in the array
 * Return: index of the value in the array or -1 if the array is null or if the value is not found
 */
int binary_search(int *array, size_t size, int value)
{
	size_t L, R, m;

	if (array == NULL)
		return (-1);
	
	for (L = 0, R = size - 1; R >= L;)
	{
		printf("Searching in array: ");
		for (m = L; m < R; m++)
			printf("%d, ", array[m]);
		printf("%d\n", array[m]);

		m = L + (R - L) / 2;
		if (array[m] == value)
			return (m);
		if (array[m] > value)
			R = m - 1;
		else
			L = m + 1;
	}

	return (-1);
}
