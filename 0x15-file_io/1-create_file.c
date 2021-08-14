#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>
/**
 * create_file - create file
 * @filename: file name
 * @text_content: number of chars to read
 * Return: 1 on success
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	char *buf;
	ssize_t wd;

	if (*text_content == '\0')
		return (-1);
	if (filename == NULL)
		return (-1);
	buf = malloc(sizeof(char) * strlen(text_content));
	if (buf == NULL)
		return (0);
	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	wd = write(fd, text_content, strlen(text_content));
	if (wd == -1)
		return (-1);
	close(fd);
	free(buf);
	return (1);
}
