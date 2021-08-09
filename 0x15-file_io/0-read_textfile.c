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
	int i, fd;
	char buf[1200];
	ssize_t rd;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	rd = read(fd, buf, letters);
	if (rd == -1)
		return (0);
	close(fd);
	for (i = 0; i < rd; i++)
		_putchar(buf[i]);
	return (rd);
}
