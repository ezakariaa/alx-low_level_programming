#include <stdio.h>

/**
 * main - a program that prints the number
 * of arguments passed into it.
 * @argc: number of commandline
 * @argv: pointer to commandline
 * Return: 0 if right, non zero fail
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
