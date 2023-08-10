#include "main.h"
#include <stdlib.h>

/**
 * *array_range - a function that creates an array of integers.
 * @min: integer
 * @max: integer
 * If min > max, return NULL
 * If malloc fails, return NULL
 *
 * Return: the pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int i = 0, *a;

	if (min > max)
		return (NULL);

	a = malloc((sizeof(int) * (max - min)) + sizeof(int));

	if (a == NULL)
		return (NULL);

	while (min <= max)
	{
		a[i] = min;
		i++;
		min++;
	}

	return (a);
}
