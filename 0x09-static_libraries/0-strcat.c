#include "main.h"

/**
 * _strcat - function appends the src string to the dest string
 * overwriting the terminating null byte (\0) at the end of dest
 * and then adds a terminating null byte
 *
 * @src: pointer to destination input
 * @dest: pointer to destination input
 *
 * Return: returns a pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int l, l2;

	l = 0;
	/*find the size of dest array*/
	while (dest[l])
		l++;

	/*iterate through each src array value without the null byte*/
	for (l2 = 0; src[l2] ; l2++)
		/*appends the src[l2] to the dest[l]*/
		dest[l++] = src[l2];

	return (dest);
}
