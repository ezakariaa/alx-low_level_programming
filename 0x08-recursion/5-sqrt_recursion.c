#include "main.h"

int sqrt_alt(int n, int i);
/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: int
 * Return: If n does not have a natural square root,
 * the function should return -1
 */


int _sqrt_recursion(int n)

{
	return (sqrt_alt(n, 0));
}

/**
 * sqrt_alt - returns the natural square root of a number.
 * @n: int
 * @i: alternative var
 * Return: If n does not have a natural square root,
 * the function should return -1
 */
int sqrt_alt(int n, int i)
{
	if (i * i == n)
		return (i);
	if (i > n)
		return (-1);
	if (i < 0)
		return (-1);
	return (sqrt_alt(n, i + 1));
}
