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

	buffer = malloc(letters);
	if (!filename)
	{
		return (0);
	}
	fd = open(filename, O_RDWR);
	if (fd == -1)
	{
		return (0);
	}
	r = read(fd, buffer, letters);
	if (r == -1)
	{
		return (0);
	}
	w = write(STDOUT_FILENO, buffer, letters);
	if (w == -1)
	{
		return (0);
	}
	close(fd);
	free(buffer);

	return (r);
}
