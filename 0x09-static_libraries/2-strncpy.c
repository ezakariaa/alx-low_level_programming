#include "main.h"

/**
 * _strncpy - a function that copies a string
 *
 * @src: pointer to destination input
 * @dest: pointer to destination input
 * @n: most number of bytes from @src
 * Return: returns a pointer to the resulting string dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int l;

	for (l = 0; l < n && src[l] != '\0'; l++)
		dest[l] = src[l];
	while (l < n)
	{
		dest[l] = '\0';
		l++;
	}

	return (dest);
}
