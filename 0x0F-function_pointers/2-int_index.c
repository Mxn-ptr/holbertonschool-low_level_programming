#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array to search in
 * @size: size of the array
 * @cmp : pointer to the function comparing
 * Return: the index of the first element for which the cmp
 * function does not return 0
 * or -1 if no element matches or if size <= 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != NULL || cmp != NULL)
	{

		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}
	return (-1);
}