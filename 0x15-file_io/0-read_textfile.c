#include "main.h"

/**
* read_textfile - Reads and prints the content of a text file.
* @filename: The name of the file to read.
* @letters: The number of letters to read and print.
*
* Return: The actual number of letters read and printed, or 0 on error.
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buf;
	ssize_t bytes_r, bytes_w;
	
	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	
	buf = malloc(letters);
	if (buf == NULL)
	{
		close(fd);
		return (0);
	}
	
	bytes_r = read(fd, buf, letters);
	if (bytes_r == -1)
	{
		free(buf);
		close(fd);
		return (0);
	}
	
	bytes_w = write(STDOUT_FILENO, buf, bytes_r);
	if (bytes_w == -1 || bytes_w != bytes_r)
	{
		free(buf);
		close(fd);
		return (0);
	}
	
	free(buf);
	close(fd);
	return (bytes_w);
}
