#include "main.h"

/**
 * create_file - function that creates a file.
 * @filename: The name of the file to create.
 * @text_content: A NULL terminated string to write to the file.
 *
 * Return: 1 or -1 if the function fails.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, writef, length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[length] != '\0')
			length++;
	}

	fd = open(filename,  O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	writef = write(fd, text_content, length);
	if (writef == -1)
		return (-1);

	if (close(fd) == -1)
		return (-1);

	return (1);
}
