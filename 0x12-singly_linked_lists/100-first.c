#include <stdio.h>

void __attribute__((constructor)) _print(void);

/**
* _print - Prints a message before the main function is executed.
*
* This function is marked with __attribute__((constructor)),
* which means it will be executed automatically before the main function.
*/
void _print(void)
{
	printf("You're beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n");
}
