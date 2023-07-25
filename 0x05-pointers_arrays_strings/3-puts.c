#include "main.h"

/**
 * _puts - a function that prints a string,
 * followed by a new line, to stdout
 *
 * @str: string parameter input
 *
 * Return: no return
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		putchar(*str + 0);
		str++;
	}
	putchar('\n');
}
