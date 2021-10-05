#include "main.h"

/**
 * _isalpha - checks for alphacase character
 * Return: 1 if the character is alphacase, else 0
 */

int _isalpha(int c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}
