#include "main.h"
#include <fcntl.h>
#include <unistd.h>

/**
  * append_text_to_file - Append text at the end of a file
  * @filename: Name of the file
  * @text_content: String to append to the file
  * Return: 1 (Success), -1 (Failure)
  */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, w, strlen = 0, i = 0;

	if (!filename)
	{
		return (-1);
	}
	fd = open(filename, O_WRONLY | O_APPEND);
	if (text_content)
	{
		while (text_content[i] != '\0')
		{
			strlen++;
			i++;
		}	
		w = write(fd, text_content, strlen);
	}
	if (fd == -1 || w == -1)
	{
		return (-1);
	}

	return (1);
}
