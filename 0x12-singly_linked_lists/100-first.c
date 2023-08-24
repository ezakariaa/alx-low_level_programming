#include <stdio.h>

void __attribute__((constructor)) _print(void);

/**
* __print - Prints a string before the main function is executed.
*
* Return: void.
*/
void _print(void)
{
	printf("You're beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n");
}
