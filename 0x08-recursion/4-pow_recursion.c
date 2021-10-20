#include "main.h"

/**
 * _pow_recursion - function pow in recurive
 * @x : number
 * @y : power
 * Return: -1 if y is lower than 0 else the result
 */

int _pow_recursion(int x, int y)
{
	int result = x;

	if (y  < 0)
		return (-1);
	if (y == 0)
		return (1);
	result *= _pow_recursion(x, y - 1);
	return (result);
}
