#include "main.h"
#include <unistd.h>

/**
 * print_rev - a function that prints a string,
 * in reverse, followed by a new line
 *
 * @s: pointer to the string to print
 *
 * Return: no return
 */

void print_rev(char *s)
{
	int x = 0;

	while (s[x])
		x++;

	while (x--)
	{
		_putchar(s[x]);
	}
	_putchar('\n');
}
