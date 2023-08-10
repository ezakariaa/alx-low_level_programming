#include "main.h"
#include <stdlib.h>

/**
 * *_calloc - a function that allocates memory for an array, using malloc.
 * @nmemb: array of elements
 * @size: size of memory
 * The memory is set to zero
 *
 * Return: returns NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int i = 0, l = 0;
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	l = size * nmemb;
	p = malloc(l);

	if (p == NULL)
		return (NULL);

	while (i < l)
	{
		p[i] = 0;
		i++;
	}

	return (p);
}
