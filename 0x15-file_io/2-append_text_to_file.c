#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>
/**
 * append_text_to_file - append text to file
 * @filename: file name
 * @text_content: text to append
 * Return: 1 on success
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	char *buf;
	ssize_t wd;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		buf = malloc(sizeof(char) * strlen(text_content));
		if (buf == NULL)
			return (0);
		fd = open(filename, O_WRONLY | O_APPEND);
		if (fd == -1)
			return (-1);
		wd = write(fd, text_content, strlen(text_content));
		if (wd == -1)
			return (-1);
		free(buf);
	}
	else
		fd = open(filename, O_WRONLY | O_APPEND);
	close(fd);
	return (1);
}
