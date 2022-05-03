#include "search_algos.h"


/**
 * linear_search - searches for a value in an array of
 * integers using the Linear search algorithm
 * @array: array to search in
 * @size: size of the array
 * @value: value to found
 * Return: index of the value in the array,
 * -1 if the array is NULL or if the value is not found
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
