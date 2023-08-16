#include "function_pointers.h"

/**
 * int_index - a function that searches for an integer.
 * @size: the number of elements in the array
 * @array: the array size
 * @cmp: pointer to the function to be used to compare values
 *
 * Return: If no element matches, return -1
 * If size <= 0, return -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int a = 0;

	if (array && size && cmp)
		while (a < size)
		{
			if (cmp(array[a]))
				return (a);
			a++;
		}
	return (-1);
}
