#include "main.h"

/**
 * _atoi - a function that convert a string to an integer
 *
 * @s: string input parameter
 *
 * Return: converted integer string
 */

int _atoi(char *s)
{
	unsigned int num = 0;
	int line = 1;

	do {
		if (*s == '-')
			line *= -1;
		else if (*s >= '0' && *s <= '9')
			num = (num * 10) + (*s - '0');
		else if (num > 0)
			break;
	} while (*s++);

	return (num * line);
}
