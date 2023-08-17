#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * main - check the code for the school.
 * @argc: the number of args
 * @argv: argument
 *
 * Return: 0.
 */

int main(int argc, char *argv[])
{
	char *p = (char *)main;
	int z;

	if (argc != 2)
		printf("Error\n"), exit(1);
	z = atoi(argv[1]);
	if (z < 0)
		printf("Error\n"), exit(2);

	while (z--)
		printf("%02hhx%s", *p++, z ? " " : "\n");
	return (0);
}
