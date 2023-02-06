#include "main.h"
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/**
  * create_file - Create a file with rw------- permission,
  * truncate if the file exists
  * @filename: String of the filename
  * @text_content: String to write to the file
  * Return: 1 (Success), or -1 (Failure)
  */
int create_file(const char *filename, char *text_content)
{
	int fd, w, i = 0, strlen = 0;

	if (!filename)
	{
		return (-1);
	}
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 00600);
	if (text_content)
	{
		while (text_content[i] != '\0')
		{
			strlen++;
			i++;
		}
		w = write(fd, text_content, strlen);
		if (fd == -1 || w == -1)
		{
			return (-1);
		}
	}
	close(fd);

	return (1);
}
