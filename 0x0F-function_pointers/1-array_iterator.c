#include "function_pointers.h"

/**
 * array_iterator - function that executes a function given as a parameter
 * on each element of an array
 * @size: the size of the array
 * @action: pointer to the function you need to use
 * @array: the int array
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *cursor = array + size - 1;

	if (array && size && action)
		while (array <= cursor)
			action(*array++);
}
