#include "variadic_functions.h"

/**
 * print_numbers - a function that prints numbers, followed by a new line.
 * @separator: is the string to be printed between numbers
 * @n: is the number of integers passed to the function
 * @...: the intergers to print
 *
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	int j = n;
	va_list ap;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(ap, n);
	while (j--)
		printf("%d%s", va_arg(ap, int),
				j ? (separator ? separator : "") : "\n");
	va_end(ap);
}
