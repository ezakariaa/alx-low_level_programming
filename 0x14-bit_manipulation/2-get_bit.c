#include <stdio.h>
#include "main.h"

/**
* get_bit -  returns the value of a bit at a given index.
* @n: binary number array pointer.
* @index: starting from 0 of the bit you want to get
* Return: Value of the bit at index index or -1 if an error
*/
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= 64)
	{
	return (-1);
	}
	return (n >> index & 1);
}
