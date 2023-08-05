#include "main.h"

/**
 * _strncat - a function that concatenates two strings
 *
 * @src: pointer to destination input
 * @dest: pointer to destination input
 * @n: most number of bytes from @src
 * Return: returns a pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int l, z;

	l = 0;

	/*find the size of dest array*/
	while (dest[l])
		l++;

	/**
	 * src does not need to be null terminated
	 * if it contains n or more bytes
	*/
	for (z = 0; z < n && src[z] != '\0'; z++)
		dest[l + z] = src[z];
	/*null terminate dest*/
	dest[l + z] = '\0';

	return (dest);
}
