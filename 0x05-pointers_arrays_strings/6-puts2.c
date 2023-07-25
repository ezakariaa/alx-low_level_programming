#include "main.h"

/**
 * puts2 -  a function prints every character of a string
 *
 * @str: string parameter input
 *
 * Return: no return
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; ++i)

	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
