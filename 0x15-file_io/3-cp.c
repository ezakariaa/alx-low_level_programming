#include "main.h"
#include <stdlib.h>

#define BUFFER_SIZE 1024

void handle_argserr(void);
void file_from_err(char *file);
void file_to_err(char *file);
void close_err(int fd);

/**
 * main - a program that copies the content of a file to another file.
 * @argc: number of arguments.
 * @argv: array the arguments.
 *
 * Return: 0 on success.
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, closef;
	ssize_t readf;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
	{
		handle_argserr();
	}
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{
		file_from_err(argv[1]);
	}
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (file_to == -1)
	{
		file_to_err(argv[2]);
	}
	while ((readf = read(file_from, buffer, BUFFER_SIZE)) > 0)
		if (write(file_to, buffer, readf) != readf)
		{
			file_to_err(argv[2]);
		}
	if (readf == -1)
	{
		file_from_err(argv[1]);
	}
	closef = close(file_from);
	if (closef  == -1)
	{
		close_err(closef);
	}
	closef = close(file_to);
	if (closef == -1)
	{
		close_err(closef);
	}
	return (0);
}

/**
 * handle_argserr - Print error and exit if there ara wrong number of arguments
 */
void handle_argserr(void)
{
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
	exit(97);
}

/**
 * file_from_err - Prints error and exit if file_from has an error
 * @file: name of the file.
 */
void file_from_err(char *file)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
	exit(98);
}

/**
 * file_to_err - Prints error and exit if file_to has error.
 * @file: The name of the file
 */
void file_to_err(char *file)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
	exit(99);
}

/**
 * close_err - Prints error and exit if close fails.
 * @fd: The file descriptor.
 */
void close_err(int fd)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
	exit(100);
}
