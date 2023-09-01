#include <stdio.h>
#include "main.h"

/**
* clear_bit - sets the value of a bit to 1 at a given index
* @n: pointer to number whose bit is to be set
* @index: index of bit to be set to 1
*
* Return: 1 on Success, -1, if an error occured
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > (sizeof(unsigned long int) * 8))
		return (-1);
	if (n)
	{
		*n = *n & ~(1 << index);
		return (1);
	}
	else
	{
		return (-1);
	}
}
