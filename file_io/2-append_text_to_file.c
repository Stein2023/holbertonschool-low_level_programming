#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"
#include <string.h>

/**
 * append_text_to_file - the name of the file
 * @filename: the filename that is going to be added
 * @text_content: the content of the text
 *
 *
 * Return: a function that creates a file
 */


int append_text_to_file(const char *filename, char *text_content)
{

	int fd;
	ssize_t br;
	size_t text_length;


	if (filename == NULL)
	{
		return (-1);
	}


	fd = open(filename, O_RDWR | O_CREAT | O_APPEND, 0600);
	if (fd == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		text_length = strlen(text_content);
		br = write(fd, text_content, text_length);


	if (br == -1 || (size_t)br != text_length)
	{
		close(fd);
		return (-1);
	}
	}

	else
	{
		text_length = 0;
	}

	close(fd);
	return (1);

}

