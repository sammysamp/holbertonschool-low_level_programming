#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
/**
 * read_textfile - read file
 * @filename: file name
 * @letters: number of chars to read
 * Return: number of chars returned
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	size_t fd, rd;

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);
	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == 0)
		return (0);
	rd = read(fd, buf, letters);
	if (rd == 0)
		return (0);
	if (rd > letters)
		write(STDOUT_FILENO, buf, letters);
	else
		write(STDOUT_FILENO, buf, rd);
	close(fd);
	free(buf);
	return (rd);
}
