#include <stdio.h>
#include "main.h"

/**
* flip_bits - returns the number need to flip to get from one number to another
* @n: the first number.
* @m: the second number.
* Return: number of bits to be flipped
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned long int temp = n ^ m;

	while (temp > 0)
	{
		if (temp & 1)
		{
			count++;
		}
		temp >>= 1;
	}
	return (count);
}
