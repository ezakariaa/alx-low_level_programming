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
 * *str_concat - a function that concatenates two strings.
 * @s1: string 1
 * @s2: string 2
 * Return: pointer
 */
char *str_concat(char *s1, char *s2)
{
	int size1, size2, y;
	char *m;

	if (s1 == NULL)
		s1 = "\0";
	if (s2 == NULL)
		s2 = "\0";

	size1 = _srtlen(s1);
	size2 = _srtlen(s2);

	m = malloc((size1 + size2) * sizeof(char) + 1);
	if (m == 0)
		return (0);

	for (y = 0; y <= size1 + size2; y++)
	{
		if (y < size1)
			m[y] = s1[y];
		else
			m[y] = s2[y - size1];
	}
	m[y] = '\0';
	return (m);
}
