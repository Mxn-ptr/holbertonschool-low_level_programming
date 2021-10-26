#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: number of arguments
 * @av : arguments
 * Return: NULL if ac or av = 0 or if it fails
 * else pointer to a new string
 * each argument sould be followed by a new line
 */

char *argstostr(int ac, char **av)
{
	char *s;
	int argc, argv, size = ac, i = 0;

	if (ac == 0 || av == 0)
		return (NULL);

	for (argc = 0; argc < ac; argc++)
	{
		for (argv = 0; av[argc][argv]; argv++)
			size++;
	}

	s = malloc(sizeof(char) * size + 1);

	if (s == NULL)
		return (NULL);

	for (argc = 0; argc < ac; argc++)
	{
		for (argv = 0; av[argc][argv]; argv++)
		{
			s[i] = av[argc][argv];
			i++;
		}
		s[i++] = ('\n');
	}
	s[size] = '\0';
	return (s);
}
