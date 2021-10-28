#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes of the second strings we will copy
 * Return: new string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s3;
	int i;
	unsigned int len = n, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		len++;

	s3 = malloc(sizeof(char) * (len + 1));

	if (s3 == NULL)
		return (NULL);
	len = 0;

	for (i = 0; s1[i]; i++)
		s3[len++] = s1[i];

	for (j = 0; j < n && s2[j]; j++)
	{
		s3[len++] = s2[j];
		i++;
	}
	s3[len] = '\0';
	return (s3);
}
