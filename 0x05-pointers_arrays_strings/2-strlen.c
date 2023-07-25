#include "main.h"

/**
 * _strlen - a function that returns the length of a string
 *
 * @s: string parameter input
 *
 * Return: length of a string
 */

int _strlen(char *s)
{
	int line;

	for (line = 0; *s != '\0'; s++)
		++line;
	return (line);
}
