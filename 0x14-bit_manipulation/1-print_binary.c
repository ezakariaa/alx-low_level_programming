#include <stdio.h>
#include "main.h"

/**
* print_binary - prints the binary representation of a number.
* @n : where b is pointing to a string of 0 and 1 chars
* not allowed to use arrays
* not allowed to use malloc
* not allowed to use the % or / operators
*
* Return: Always 0.
*/
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	_putchar('0' + (n & 1));
}
