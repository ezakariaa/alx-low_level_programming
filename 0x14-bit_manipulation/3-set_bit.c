#include <stdio.h>
#include "main.h"

/**
* set_bit - sets the value of a bit to 1 at a given index.
* @n : a pointer to an unsigned long int variable.
* @index : an unsigned int variable that specifies the index of the bit to set.
* Return: 1 on Success, -1, if an error occured
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1 << index;

	if (index >= sizeof(unsigned long int) * 8)
	{
	return (-1);
	}
	*n |= mask;
	return (1);
}
