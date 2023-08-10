#include "main.h"

/**
 * *malloc_checked - a function that allocates memory using malloc.
 * if malloc fails, the malloc_checked function should cause normal
 * process termination with a status value of 98
 *
 * @b: given int argument
 *
 * Return: pointer to the array initialized or NULL
 */

void *malloc_checked(unsigned int b)
{
	unsigned long int *r = NULL;

	r = malloc(b);
	if (r == NULL)
	{
		exit(98);
	}
	return (r);
}
