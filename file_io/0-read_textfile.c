#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"

/**
 * read_textfile - the name of the function
 * @filename: the filename
 * @letters: the letters
 *
 *
 * Return: a function that reads a text file and prints it
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	ssize_t br;

	if (filename == NULL)
	{
	return (0);
	}
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}
	buffer = (char *)malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}
	br = read(fd, buffer, letters);
	if (br == -1 || write(STDOUT_FILENO, buffer, br) != br)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	free(buffer);
	close(fd);
	return (br);
}
