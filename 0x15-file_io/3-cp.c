#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/**
  * main - Copy content from one file to another
  * @argc: Argument count
  * @argv: Argument vector
  * Return: 0 (Success), 97 if @argc is not correct,
  * 98 if file_from does not exist or can not be read,
  * 99 if can not create or write to file_to
  * 100 if file can not be closed
  */
int main(int argc, char *argv[])
{
	int fd_from, fd_to, r, w, c_from, c_to;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_from = open(argv[1], O_RDONLY);
	r = read(fd_from, buffer, 1024);
	if (fd_from == -1 || r == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 00664);
	w = write(fd_to, buffer, r);
	if (fd_to == -1 || w == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	c_from = close(fd_from);
	c_to = close(fd_to);
	if (c_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", c_from);
		exit(100);
	}
	if (c_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", c_to);
		exit(100);
	}

	return (0);
}
