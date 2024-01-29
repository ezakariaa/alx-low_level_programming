#include "main.h"

/**
 *  *_memcpy - a function that copies memory area.
 *  @n: length of src to be copied
 *  @src: source
 *  @dest: memory area
 *  Return: pointer dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)

{
	unsigned int cnt;

	for (cnt = 0; cnt < n; cnt++)
	{
		dest[cnt] = src[cnt];
	}
	return (dest);
}
