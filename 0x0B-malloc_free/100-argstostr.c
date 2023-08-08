#include "main.h"

/**
 * _srtlen - a function that a find length of a string
 * @s: string
 * Return: int
 */

int _srtlen(char *s)
{
	int size = 0;

	for (; s[size] != '\0'; size++)
	;
	return (size);
}

/**
 * *argstostr - a function that concatenates
 * all the arguments of your program.
 * @ac: int
 * @av: arguments
 * Return: string
 */
char *argstostr(int ac, char **av)
{
	int y = 0, nc = 0, z = 0, cmt = 0;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (; y < ac; y++, nc++)
		nc += _srtlen(av[y]);

	s = malloc(sizeof(char) * nc + 1);
	if (s == 0)
		return (NULL);

	for (y = 0; y < ac; y++)
	{
		for (z = 0; av[y][z] != '\0'; z++, cmt++)
			s[cmt] = av[y][z];

		s[cmt] = '\n';
		cmt++;
	}
	s[cmt] = '\0';
	return (s);
}
