#include "main.h"

/**
 * puts_half - a function prints half of a string
 * followed by a new line,
 *
 * @str: char array string type
 *
 * Return: no return
 */

void puts_half(char *str)
{
	int x;

	for (x = 0; str[x] != '\0'; x++)
		;

	x++;
	for (x /= 2; str[x] != '\0'; x++)
	{
		_putchar(str[x]);
	}
	_putchar('\n');
}
