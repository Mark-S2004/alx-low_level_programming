#include "main.h"
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

/**
  * read_textfile - Read a text file and print it to POSIX standard output
  * @filename: String of the filename
  * @letters: Number of letters to read and print
  * Return: Actual number of letters it should read and print, or 0 (failed)
  */
size_t read_textfile(const char *filename, size_t letters)
{
	int fd, r, w;
	char *buffer;

	if (!filename)
	{
		return (0);
	}
	buffer = malloc(letters);
	if (!buffer)
	{
		free(buffer);
		return (0);
	}
	fd = open(filename, O_RDWR);
	r = read(fd, buffer, letters);
	w = write(STDOUT_FILENO, buffer, r);
	if (fd == -1 || r == -1 || w == -1)
	{
		free(buffer);
		return (0);
	}
	close(fd);
	free(buffer);

	return (r);
}
