#include "main.h"
#include <stdio.h>

/**
 *  print_diagsums - prints the sum of the two diagonals
 *  of a square matrix of integers.
 *  @size: size of array
 *  @a: 2d array of int types
 *
 *  Return: no return.
 */

void print_diagsums(int *a, int size)
{
	int cnt, s1 = 0, s2 = 0;

	for (cnt = 0; cnt < size; cnt++)
	{
		s1 += a[cnt];
		s2 += a[size - cnt - 1];
		a += size;
	}
	printf("%d, ", s1);
	printf("%d\n", s2);

}
